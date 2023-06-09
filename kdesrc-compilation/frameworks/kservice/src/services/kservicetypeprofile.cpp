/*
    This file is part of the KDE libraries
    SPDX-FileCopyrightText: 1999 Torben Weis <weis@kde.org>
    SPDX-FileCopyrightText: 2006 David Faure <faure@kde.org>

    SPDX-License-Identifier: LGPL-2.0-only
*/

#include "kservicetypeprofile.h"
#include "kservicetypeprofile_p.h"

#include "kservice.h"
#include "kserviceoffer.h"
#include "kservicetype.h"
#include "ksycoca_p.h"

#include <KConfig>
#include <KConfigGroup>

#include <QHash>
#include <QMutex>
#include <QtAlgorithms>

// servicetype -> profile
class KServiceTypeProfiles : public QHash<QString, KServiceTypeProfileEntry *>
{
public:
    KServiceTypeProfiles()
    {
        m_parsed = false;
        ensureParsed();
    }
    ~KServiceTypeProfiles()
    {
        clear();
    }
    void clear()
    {
        QMutexLocker lock(&m_mutex);
        qDeleteAll(*this);
        QHash<QString, KServiceTypeProfileEntry *>::clear();
        m_parsed = false;
    }
    bool hasProfile(const QString &serviceType)
    {
        QMutexLocker lock(&m_mutex);
        ensureParsed();
        return contains(serviceType);
    }
    void ensureParsed(); // mutex must be locked when calling this
    QMutex m_mutex;

private:
    bool m_parsed;
};

Q_GLOBAL_STATIC(KServiceTypeProfiles, s_serviceTypeProfiles)

void KServiceTypeProfiles::ensureParsed()
{
    if (m_parsed) {
        return;
    }
    m_parsed = true;

    // Read the service type profiles from servicetype_profilerc
    // See writeServiceTypeProfile for a description of the file format.
    // ### Since this new format names groups after servicetypes maybe we can even
    // avoid doing any init upfront, and just look up the group when asked...
    KConfig configFile(QStringLiteral("servicetype_profilerc"), KConfig::NoGlobals);
    const QStringList tmpList = configFile.groupList();
    for (const auto &type : tmpList) {
        KConfigGroup config(&configFile, type);
        const int count = config.readEntry("NumberOfEntries", 0);
        KServiceTypeProfileEntry *p = this->value(type, nullptr);
        if (!p) {
            p = new KServiceTypeProfileEntry();
            this->insert(type, p);
        }

        for (int i = 0; i < count; ++i) {
            const QString num = QLatin1String("Entry") + QString::number(i);
            const QString serviceId = config.readEntry(num + QLatin1String("_Service"), QString());
            if (!serviceId.isEmpty()) {
                const int pref = config.readEntry(num + QLatin1String("_Preference"), 0);
                // qDebug() << "adding service " << serviceId << " to profile for " << type << " with preference " << pref;
                p->addService(serviceId, pref);
            }
        }
    }
}

// static
void KServiceTypeProfile::clearCache()
{
    if (s_serviceTypeProfiles.exists()) {
        s_serviceTypeProfiles()->clear();
    }
}

/**
 * Returns the offers in the profile for the requested service type.
 * @param list list of offers (including initialPreference)
 * @param servicetype the service type
 * @return the weighted and sorted offer list
 * @internal used by KServiceTypeTrader
 */
namespace KServiceTypeProfile
{
KServiceOfferList sortServiceTypeOffers(const KServiceOfferList &list, const QString &servicetype);
}

KServiceOfferList KServiceTypeProfile::sortServiceTypeOffers(const KServiceOfferList &list, const QString &serviceType)
{
    QMutexLocker lock(&s_serviceTypeProfiles()->m_mutex);
    s_serviceTypeProfiles()->ensureParsed();
    KServiceTypeProfileEntry *profile = s_serviceTypeProfiles()->value(serviceType, nullptr);

    KServiceOfferList offers;

    for (const auto &offer : list) {
        const KService::Ptr servPtr = offer.service();
        // qDebug() << "KServiceTypeProfile::offers considering " << servPtr->storageId();
        // Look into the profile (if there's one), to find this service's preference.
        bool foundInProfile = false;
        if (profile) {
            auto it2 = profile->m_mapServices.constFind(servPtr->storageId());
            if (it2 != profile->m_mapServices.constEnd()) {
                const int pref = it2.value();
                // qDebug() << "found in mapServices pref=" << pref;
                if (pref > 0) { // 0 disables the service
#if KSERVICE_BUILD_DEPRECATED_SINCE(5, 69)
                    offers.append(KServiceOffer(servPtr, pref, 0, servPtr->allowAsDefault()));
#else
                    offers.append(KServiceOffer(servPtr, pref, 0));
#endif
                }
                foundInProfile = true;
            }
        }
        if (!foundInProfile) {
            // This offer isn't in the profile
            // This can be because we have no profile at all, or because the
            // services have been installed after the profile was written,
            // but it's also the case for any service that's neither App nor ReadOnlyPart, e.g. RenameDlg/Plugin
            // qDebug() << "not found in mapServices. Appending.";

            // If there's a profile, we use 0 as the preference to ensure new apps don't take over existing apps (which default to 1)
            offers.append(KServiceOffer(servPtr,
                                        profile ? 0 : offer.preference(),
#if KSERVICE_BUILD_DEPRECATED_SINCE(5, 69)
                                        0,
                                        servPtr->allowAsDefault()));
#else
                                        0));
#endif
        }
    }

    std::stable_sort(offers.begin(), offers.end());

    // qDebug() << "KServiceTypeProfile::offers returning " << offers.count() << " offers";
    return offers;
}

bool KServiceTypeProfile::hasProfile(const QString &serviceType)
{
    return s_serviceTypeProfiles()->hasProfile(serviceType);
}

#if KSERVICE_BUILD_DEPRECATED_SINCE(5, 66)
void KServiceTypeProfile::writeServiceTypeProfile(const QString &serviceType, const KService::List &services, const KService::List &disabledServices)
{
    /*
     * [ServiceType]
     * NumEntries=3
     * Entry0_Service=serv.desktop
     * Entry0_Preference=10
     * Entry1_Service=otherserv.desktop
     * Entry1_Preference=5
     * Entry2_Service=broken_service.desktop
     * Entry2_Preference=0
     */

    KConfig configFile(QStringLiteral("servicetype_profilerc"), KConfig::SimpleConfig);
    configFile.deleteGroup(serviceType);

    KConfigGroup config(&configFile, serviceType);
    const int count = services.count();
    config.writeEntry("NumberOfEntries", count + disabledServices.count());
    KService::List::ConstIterator servit = services.begin();
    int i = 0;
    for (; servit != services.end(); ++servit, ++i) {
        if (*servit) {
            const QString num = QLatin1String("Entry") + QString::number(i);
            config.writeEntry(num + QLatin1String("_Service"), (*servit)->storageId());
            config.writeEntry(num + QLatin1String("_Preference"), count - i);
        }
    }
    servit = disabledServices.begin();
    for (; servit != disabledServices.end(); ++servit, ++i) {
        if (*servit) {
            const QString num = QLatin1String("Entry") + QString::number(i);
            config.writeEntry(num + QLatin1String("_Service"), (*servit)->storageId());
            config.writeEntry(num + QLatin1String("_Preference"), 0);
        }
    }
    configFile.sync();

    // Drop the whole cache...
    clearCache();
}
#endif

#if KSERVICE_BUILD_DEPRECATED_SINCE(5, 66)
void KServiceTypeProfile::deleteServiceTypeProfile(const QString &serviceType)
{
    KConfig config(QStringLiteral("servicetype_profilerc"), KConfig::SimpleConfig);
    config.deleteGroup(serviceType);
    config.sync();

    // Not threadsafe, but well the whole idea of using this method isn't
    // threadsafe in the first place.
    if (s_serviceTypeProfiles.exists()) {
        delete s_serviceTypeProfiles()->take(serviceType);
    }
}
#endif
