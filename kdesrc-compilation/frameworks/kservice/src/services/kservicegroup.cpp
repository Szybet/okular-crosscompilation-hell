/*
    This file is part of the KDE libraries
    SPDX-FileCopyrightText: 2000 Waldo Bastian <bastian@kde.org>

    SPDX-License-Identifier: LGPL-2.0-only
*/

#include "kservicegroup.h"
#include "kservice.h"
#include "kservicefactory_p.h"
#include "kservicegroup_p.h"
#include "kservicegroupfactory_p.h"
#include "ksycoca_p.h"
#include "servicesdebug.h"
#include <KConfigGroup>
#include <KDesktopFile>
#include <ksycoca.h>

KServiceGroup::KServiceGroup(const QString &name)
    : KSycocaEntry(*new KServiceGroupPrivate(name))
{
}

KServiceGroup::KServiceGroup(const QString &configFile, const QString &_relpath)
    : KSycocaEntry(*new KServiceGroupPrivate(_relpath))
{
    Q_D(KServiceGroup);

    QString cfg = configFile;
    if (cfg.isEmpty()) {
        cfg = _relpath + QLatin1String(".directory");
    }

    d->load(cfg);
}

void KServiceGroupPrivate::load(const QString &cfg)
{
    directoryEntryPath = cfg;

    const KDesktopFile desktopFile(cfg);

    const KConfigGroup config = desktopFile.desktopGroup();

    m_strCaption = config.readEntry("Name");
    m_strIcon = config.readEntry("Icon");
    m_strComment = config.readEntry("Comment");
    deleted = config.readEntry("Hidden", false);
    m_bNoDisplay = desktopFile.noDisplay();
    m_strBaseGroupName = config.readEntry("X-KDE-BaseGroup");
    suppressGenericNames = config.readEntry("X-KDE-SuppressGenericNames", QStringList());

    // Fill in defaults.
    if (m_strCaption.isEmpty()) {
        m_strCaption = path;
        if (m_strCaption.endsWith(QLatin1Char('/'))) {
            m_strCaption.chop(1);
        }
        int i = m_strCaption.lastIndexOf(QLatin1Char('/'));
        if (i > 0) {
            m_strCaption.remove(0, i + 1);
        }
    }
    if (m_strIcon.isEmpty()) {
        m_strIcon = QStringLiteral("folder");
    }
}

KServiceGroup::KServiceGroup(QDataStream &_str, int offset, bool deep)
    : KSycocaEntry(*new KServiceGroupPrivate(_str, offset))
{
    Q_D(KServiceGroup);
    d->m_bDeep = deep;
    d->load(_str);
}

KServiceGroup::~KServiceGroup()
{
}

QString KServiceGroup::relPath() const
{
    return entryPath();
}

QString KServiceGroup::caption() const
{
    Q_D(const KServiceGroup);
    return d->m_strCaption;
}

QString KServiceGroup::icon() const
{
    Q_D(const KServiceGroup);
    return d->m_strIcon;
}

QString KServiceGroup::comment() const
{
    Q_D(const KServiceGroup);
    return d->m_strComment;
}

int KServiceGroup::childCount() const
{
    Q_D(const KServiceGroup);
    return d->childCount();
}

int KServiceGroupPrivate::childCount() const
{
    if (m_childCount == -1) {
        m_childCount = 0;

        for (const KSycocaEntry::Ptr &entryPtr : m_serviceList) {
            if (entryPtr->isType(KST_KService)) {
                KService::Ptr service(static_cast<KService *>(entryPtr.data()));
                if (!service->noDisplay()) {
                    m_childCount++;
                }
            } else if (entryPtr->isType(KST_KServiceGroup)) {
                KServiceGroup::Ptr serviceGroup(static_cast<KServiceGroup *>(entryPtr.data()));
                m_childCount += serviceGroup->childCount();
            }
        }
    }
    return m_childCount;
}

bool KServiceGroup::showInlineHeader() const
{
    Q_D(const KServiceGroup);
    return d->m_bShowInlineHeader;
}

bool KServiceGroup::showEmptyMenu() const
{
    Q_D(const KServiceGroup);
    return d->m_bShowEmptyMenu;
}

bool KServiceGroup::inlineAlias() const
{
    Q_D(const KServiceGroup);
    return d->m_bInlineAlias;
}

void KServiceGroup::setInlineAlias(bool _b)
{
    Q_D(KServiceGroup);
    d->m_bInlineAlias = _b;
}

void KServiceGroup::setShowEmptyMenu(bool _b)
{
    Q_D(KServiceGroup);
    d->m_bShowEmptyMenu = _b;
}

void KServiceGroup::setShowInlineHeader(bool _b)
{
    Q_D(KServiceGroup);
    d->m_bShowInlineHeader = _b;
}

int KServiceGroup::inlineValue() const
{
    Q_D(const KServiceGroup);
    return d->m_inlineValue;
}

void KServiceGroup::setInlineValue(int _val)
{
    Q_D(KServiceGroup);
    d->m_inlineValue = _val;
}

bool KServiceGroup::allowInline() const
{
    Q_D(const KServiceGroup);
    return d->m_bAllowInline;
}

void KServiceGroup::setAllowInline(bool _b)
{
    Q_D(KServiceGroup);
    d->m_bAllowInline = _b;
}

bool KServiceGroup::noDisplay() const
{
    Q_D(const KServiceGroup);
    return d->m_bNoDisplay || d->m_strCaption.startsWith(QLatin1Char('.'));
}

QStringList KServiceGroup::suppressGenericNames() const
{
    Q_D(const KServiceGroup);
    return d->suppressGenericNames;
}

void KServiceGroupPrivate::load(QDataStream &s)
{
    QStringList groupList;
    qint8 noDisplay;
    qint8 _showEmptyMenu;
    qint8 inlineHeader;
    qint8 _inlineAlias;
    qint8 _allowInline;
    s >> m_strCaption >> m_strIcon >> m_strComment >> groupList >> m_strBaseGroupName >> m_childCount >> noDisplay >> suppressGenericNames >> directoryEntryPath
        >> sortOrder >> _showEmptyMenu >> inlineHeader >> _inlineAlias >> _allowInline;

    m_bNoDisplay = (noDisplay != 0);
    m_bShowEmptyMenu = (_showEmptyMenu != 0);
    m_bShowInlineHeader = (inlineHeader != 0);
    m_bInlineAlias = (_inlineAlias != 0);
    m_bAllowInline = (_allowInline != 0);

    if (m_bDeep) {
        for (const QString &path : std::as_const(groupList)) {
            if (path.endsWith(QLatin1Char('/'))) {
                KServiceGroup::Ptr serviceGroup;
                serviceGroup = KSycocaPrivate::self()->serviceGroupFactory()->findGroupByDesktopPath(path, false);
                if (serviceGroup) {
                    m_serviceList.append(KServiceGroup::SPtr(serviceGroup));
                }
            } else {
                KService::Ptr service;
                service = KSycocaPrivate::self()->serviceFactory()->findServiceByDesktopPath(path);
                if (service) {
                    m_serviceList.append(KServiceGroup::SPtr(service));
                }
            }
        }
    }
}

void KServiceGroup::addEntry(const KSycocaEntry::Ptr &entry)
{
    Q_D(KServiceGroup);
    d->m_serviceList.append(entry);
}

void KServiceGroupPrivate::save(QDataStream &s)
{
    KSycocaEntryPrivate::save(s);

    QStringList groupList;
    for (const KSycocaEntry::Ptr &p : std::as_const(m_serviceList)) {
        if (p->isType(KST_KService)) {
            KService::Ptr service(static_cast<KService *>(p.data()));
            groupList.append(service->entryPath());
        } else if (p->isType(KST_KServiceGroup)) {
            KServiceGroup::Ptr serviceGroup(static_cast<KServiceGroup *>(p.data()));
            groupList.append(serviceGroup->relPath());
        } else {
            // fprintf(stderr, "KServiceGroup: Unexpected object in list!\n");
        }
    }

    (void)childCount();

    qint8 noDisplay = m_bNoDisplay ? 1 : 0;
    qint8 _showEmptyMenu = m_bShowEmptyMenu ? 1 : 0;
    qint8 inlineHeader = m_bShowInlineHeader ? 1 : 0;
    qint8 _inlineAlias = m_bInlineAlias ? 1 : 0;
    qint8 _allowInline = m_bAllowInline ? 1 : 0;
    s << m_strCaption << m_strIcon << m_strComment << groupList << m_strBaseGroupName << m_childCount << noDisplay << suppressGenericNames << directoryEntryPath
      << sortOrder << _showEmptyMenu << inlineHeader << _inlineAlias << _allowInline;
}

QList<KServiceGroup::Ptr> KServiceGroup::groupEntries(EntriesOptions options)
{
    Q_D(KServiceGroup);
    bool sort = options & SortEntries || options & AllowSeparators;
    QList<KServiceGroup::Ptr> list;
    const List tmp = d->entries(this, sort, options & ExcludeNoDisplay, options & AllowSeparators, options & SortByGenericName);
    for (const SPtr &ptr : tmp) {
        if (ptr->isType(KST_KServiceGroup)) {
            KServiceGroup::Ptr serviceGroup(static_cast<KServiceGroup *>(ptr.data()));
            list.append(serviceGroup);
        } else if (ptr->isType(KST_KServiceSeparator)) {
            list.append(KServiceGroup::Ptr(static_cast<KServiceGroup *>(new KSycocaEntry())));
        } else if (sort && ptr->isType(KST_KService)) {
            break;
        }
    }
    return list;
}

KService::List KServiceGroup::serviceEntries(EntriesOptions options)
{
    Q_D(KServiceGroup);
    bool sort = options & SortEntries || options & AllowSeparators;
    QList<KService::Ptr> list;
    const List tmp = d->entries(this, sort, options & ExcludeNoDisplay, options & AllowSeparators, options & SortByGenericName);
    bool foundService = false;
    for (const SPtr &ptr : tmp) {
        if (ptr->isType(KST_KService)) {
            list.append(KService::Ptr(static_cast<KService *>(ptr.data())));
            foundService = true;
        } else if (ptr->isType(KST_KServiceSeparator) && foundService) {
            list.append(KService::Ptr(static_cast<KService *>(new KSycocaEntry())));
        }
    }
    return list;
}

KServiceGroup::List KServiceGroup::entries(bool sort)
{
    Q_D(KServiceGroup);
    return d->entries(this, sort, true, false, false);
}

KServiceGroup::List KServiceGroup::entries(bool sort, bool excludeNoDisplay)
{
    Q_D(KServiceGroup);
    return d->entries(this, sort, excludeNoDisplay, false, false);
}

KServiceGroup::List KServiceGroup::entries(bool sort, bool excludeNoDisplay, bool allowSeparators, bool sortByGenericName)
{
    Q_D(KServiceGroup);
    return d->entries(this, sort, excludeNoDisplay, allowSeparators, sortByGenericName);
}

static void addItem(KServiceGroup::List &sorted, const KSycocaEntry::Ptr &p, bool &addSeparator)
{
    if (addSeparator && !sorted.isEmpty()) {
        sorted.append(KSycocaEntry::Ptr(new KServiceSeparator()));
    }
    sorted.append(p);
    addSeparator = false;
}

KServiceGroup::List KServiceGroupPrivate::entries(KServiceGroup *group, bool sort, bool excludeNoDisplay, bool allowSeparators, bool sortByGenericName)
{
    KSycoca::self()->ensureCacheValid();

    // If the entries haven't been loaded yet, we have to reload ourselves
    // together with the entries. We can't only load the entries afterwards
    // since the offsets could have been changed if the database has changed.

    KServiceGroup::Ptr grp;
    if (!m_bDeep) {
        grp = KSycocaPrivate::self()->serviceGroupFactory()->findGroupByDesktopPath(path, true);

        group = grp.data();
        if (nullptr == group) { // No guarantee that we still exist!
            return KServiceGroup::List();
        }
    }

    if (!sort) {
        return group->d_func()->m_serviceList;
    }

    // Sort the list alphabetically, according to locale.
    // Groups come first, then services.

    // We use a QMap, for sorting using a stored temporary key.
    typedef QMap<QByteArray, KServiceGroup::SPtr> SortedContainer;
    SortedContainer slist;
    SortedContainer glist;
    const auto listService = group->d_func()->m_serviceList;
    for (const KSycocaEntry::Ptr &p : listService) {
        bool noDisplay = p->isType(KST_KServiceGroup) ? static_cast<KServiceGroup *>(p.data())->noDisplay() : static_cast<KService *>(p.data())->noDisplay();
        if (excludeNoDisplay && noDisplay) {
            continue;
        }
        // Choose the right list
        SortedContainer &list = p->isType(KST_KServiceGroup) ? glist : slist;
        QString name;
        if (p->isType(KST_KServiceGroup)) {
            name = static_cast<KServiceGroup *>(p.data())->caption();
        } else if (sortByGenericName) {
            name = static_cast<KService *>(p.data())->genericName() + QLatin1Char(' ') + p->name();
        } else {
            name = p->name() + QLatin1Char(' ') + static_cast<KService *>(p.data())->genericName();
        }

        const QByteArray nameStr = name.toLocal8Bit();

        QByteArray key;
        // strxfrm() crashes on Solaris and strxfrm is not defined under wince
#if !defined(USE_SOLARIS) && !defined(_WIN32_WCE)
        // maybe it'd be better to use wcsxfrm() where available
        key.resize(name.length() * 4 + 1);
        size_t ln = strxfrm(key.data(), nameStr.constData(), key.size());
        if (ln != size_t(-1)) {
            key.resize(ln);
            if (int(ln) >= key.size()) {
                // didn't fit?
                ln = strxfrm(key.data(), nameStr.constData(), key.size());
                if (ln == size_t(-1)) {
                    key = nameStr;
                }
            }
        } else
#endif
        {
            key = nameStr;
        }
        list.insert(key, KServiceGroup::SPtr(p));
    }

    if (sortOrder.isEmpty()) {
        sortOrder << QStringLiteral(":M");
        sortOrder << QStringLiteral(":F");
        sortOrder << QStringLiteral(":OIH IL[4]"); // just inline header
    }

    QString rp = path;
    if (rp == QLatin1String("/")) {
        rp.clear();
    }

    // Iterate through the sort spec list.
    // If an entry gets mentioned explicitly, we remove it from the sorted list
    for (const QString &item : std::as_const(sortOrder)) {
        if (item.isEmpty()) {
            continue;
        }
        if (item[0] == QLatin1Char('/')) {
            QString groupPath = rp + QStringView(item).mid(1) + QLatin1Char('/');
            // Remove entry from sorted list of services.
            for (SortedContainer::iterator it2 = glist.begin(); it2 != glist.end(); ++it2) {
                const KServiceGroup::Ptr group(static_cast<KServiceGroup *>(it2.value().data()));
                if (group->relPath() == groupPath) {
                    glist.erase(it2);
                    break;
                }
            }
        } else if (item[0] != QLatin1Char(':')) {
            // Remove entry from sorted list of services.
            // TODO: Remove item from sortOrder-list if not found
            // TODO: This prevents duplicates
            for (SortedContainer::iterator it2 = slist.begin(); it2 != slist.end(); ++it2) {
                const KService::Ptr service(static_cast<KService *>(it2.value().data()));
                if (service->menuId() == item) {
                    slist.erase(it2);
                    break;
                }
            }
        }
    }

    KServiceGroup::List sorted;

    bool needSeparator = false;
    // Iterate through the sort spec list.
    // Add the entries to the list according to the sort spec.
    for (QStringList::ConstIterator it(sortOrder.constBegin()); it != sortOrder.constEnd(); ++it) {
        const QString &item = *it;
        if (item.isEmpty()) {
            continue;
        }
        if (item[0] == QLatin1Char(':')) {
            // Special condition...
            if (item == QLatin1String(":S")) {
                if (allowSeparators) {
                    needSeparator = true;
                }
            } else if (item.contains(QLatin1String(":O"))) {
                // todo parse attribute:
                QString tmp(item);
                tmp.remove(QStringLiteral(":O"));
                QStringList optionAttribute = tmp.split(QLatin1Char(' '), Qt::SkipEmptyParts);
                if (optionAttribute.isEmpty()) {
                    optionAttribute.append(tmp);
                }
                bool showEmptyMenu = false;
                bool showInline = false;
                bool showInlineHeader = false;
                bool showInlineAlias = false;
                int inlineValue = -1;

                for (QStringList::Iterator it3 = optionAttribute.begin(); it3 != optionAttribute.end(); ++it3) {
                    parseAttribute(*it3, showEmptyMenu, showInline, showInlineHeader, showInlineAlias, inlineValue);
                }
                for (SortedContainer::Iterator it2 = glist.begin(); it2 != glist.end(); ++it2) {
                    KServiceGroup::Ptr group(static_cast<KServiceGroup *>(it2.value().data()));
                    group->setShowEmptyMenu(showEmptyMenu);
                    group->setAllowInline(showInline);
                    group->setShowInlineHeader(showInlineHeader);
                    group->setInlineAlias(showInlineAlias);
                    group->setInlineValue(inlineValue);
                }

            } else if (item == QLatin1String(":M")) {
                // Add sorted list of sub-menus
                for (SortedContainer::const_iterator it2 = glist.constBegin(); it2 != glist.constEnd(); ++it2) {
                    addItem(sorted, it2.value(), needSeparator);
                }
            } else if (item == QLatin1String(":F")) {
                // Add sorted list of services
                for (SortedContainer::const_iterator it2 = slist.constBegin(); it2 != slist.constEnd(); ++it2) {
                    addItem(sorted, it2.value(), needSeparator);
                }
            } else if (item == QLatin1String(":A")) {
                // Add sorted lists of services and submenus
                SortedContainer::Iterator it_s = slist.begin();
                SortedContainer::Iterator it_g = glist.begin();

                while (true) {
                    if (it_s == slist.end()) {
                        if (it_g == glist.end()) {
                            break; // Done
                        }

                        // Insert remaining sub-menu
                        addItem(sorted, it_g.value(), needSeparator);
                        it_g++;
                    } else if (it_g == glist.end()) {
                        // Insert remaining service
                        addItem(sorted, it_s.value(), needSeparator);
                        it_s++;
                    } else if (it_g.key() < it_s.key()) {
                        // Insert sub-menu first
                        addItem(sorted, it_g.value(), needSeparator);
                        it_g++;
                    } else {
                        // Insert service first
                        addItem(sorted, it_s.value(), needSeparator);
                        it_s++;
                    }
                }
            }
        } else if (item[0] == QLatin1Char('/')) {
            QString groupPath = rp + QStringView(item).mid(1) + QLatin1Char('/');

            for (KServiceGroup::List::ConstIterator it2(group->d_func()->m_serviceList.constBegin()); it2 != group->d_func()->m_serviceList.constEnd(); ++it2) {
                if (!(*it2)->isType(KST_KServiceGroup)) {
                    continue;
                }
                KServiceGroup::Ptr group(static_cast<KServiceGroup *>((*it2).data()));
                if (group->relPath() == groupPath) {
                    if (!excludeNoDisplay || !group->noDisplay()) {
                        ++it;
                        const QString &nextItem = (it == sortOrder.constEnd()) ? QString() : *it;

                        if (nextItem.startsWith(QLatin1String(":O"))) {
                            QString tmp(nextItem);
                            tmp.remove(QStringLiteral(":O"));
                            QStringList optionAttribute = tmp.split(QLatin1Char(' '), Qt::SkipEmptyParts);
                            if (optionAttribute.isEmpty()) {
                                optionAttribute.append(tmp);
                            }
                            bool bShowEmptyMenu = false;
                            bool bShowInline = false;
                            bool bShowInlineHeader = false;
                            bool bShowInlineAlias = false;
                            int inlineValue = -1;
                            for (const QString &opt_attr : std::as_const(optionAttribute)) {
                                parseAttribute(opt_attr, bShowEmptyMenu, bShowInline, bShowInlineHeader, bShowInlineAlias, inlineValue);
                                group->setShowEmptyMenu(bShowEmptyMenu);
                                group->setAllowInline(bShowInline);
                                group->setShowInlineHeader(bShowInlineHeader);
                                group->setInlineAlias(bShowInlineAlias);
                                group->setInlineValue(inlineValue);
                            }
                        } else {
                            it--;
                        }

                        addItem(sorted, KServiceGroup::SPtr(group), needSeparator);
                    }
                    break;
                }
            }
        } else {
            for (KServiceGroup::List::ConstIterator it2(group->d_func()->m_serviceList.constBegin()); it2 != group->d_func()->m_serviceList.constEnd(); ++it2) {
                if (!(*it2)->isType(KST_KService)) {
                    continue;
                }
                const KService::Ptr service(static_cast<KService *>((*it2).data()));
                if (service->menuId() == item) {
                    if (!excludeNoDisplay || !service->noDisplay()) {
                        addItem(sorted, (*it2), needSeparator);
                    }
                    break;
                }
            }
        }
    }

    return sorted;
}

void KServiceGroupPrivate::parseAttribute(const QString &item,
                                          bool &showEmptyMenu,
                                          bool &showInline,
                                          bool &showInlineHeader,
                                          bool &showInlineAlias,
                                          int &inlineValue)
{
    if (item == QLatin1String("ME")) { // menu empty
        showEmptyMenu = true;
    } else if (item == QLatin1String("NME")) { // not menu empty
        showEmptyMenu = false;
    } else if (item == QLatin1String("I")) { // inline menu !
        showInline = true;
    } else if (item == QLatin1String("NI")) { // not inline menu!
        showInline = false;
    } else if (item == QLatin1String("IH")) { // inline  header!
        showInlineHeader = true;
    } else if (item == QLatin1String("NIH")) { // not inline  header!
        showInlineHeader = false;
    } else if (item == QLatin1String("IA")) { // inline alias!
        showInlineAlias = true;
    } else if (item == QLatin1String("NIA")) { // not inline alias!
        showInlineAlias = false;
    } else if ((item).contains(QLatin1String("IL"))) { // inline limit!
        QString tmp(item);
        tmp.remove(QStringLiteral("IL["));
        tmp.remove(QLatin1Char(']'));
        bool ok;
        int _inlineValue = tmp.toInt(&ok);
        if (!ok) { // error
            _inlineValue = -1;
        }
        inlineValue = _inlineValue;
    } else {
        qCDebug(SERVICES) << "This attribute is not supported:" << item;
    }
}

void KServiceGroup::setLayoutInfo(const QStringList &layout)
{
    Q_D(KServiceGroup);
    d->sortOrder = layout;
}

QStringList KServiceGroup::layoutInfo() const
{
    Q_D(const KServiceGroup);
    return d->sortOrder;
}

KServiceGroup::Ptr KServiceGroup::root()
{
    KSycoca::self()->ensureCacheValid();
    return KSycocaPrivate::self()->serviceGroupFactory()->findGroupByDesktopPath(QStringLiteral("/"), true);
}

KServiceGroup::Ptr KServiceGroup::group(const QString &relPath)
{
    if (relPath.isEmpty()) {
        return root();
    }
    KSycoca::self()->ensureCacheValid();
    return KSycocaPrivate::self()->serviceGroupFactory()->findGroupByDesktopPath(relPath, true);
}

KServiceGroup::Ptr KServiceGroup::childGroup(const QString &parent)
{
    KSycoca::self()->ensureCacheValid();
    return KSycocaPrivate::self()->serviceGroupFactory()->findGroupByDesktopPath(QLatin1String("#parent#") + parent, true);
}

QString KServiceGroup::baseGroupName() const
{
    return d_func()->m_strBaseGroupName;
}

QString KServiceGroup::directoryEntryPath() const
{
    Q_D(const KServiceGroup);
    return d->directoryEntryPath;
}

class KServiceSeparatorPrivate : public KSycocaEntryPrivate
{
public:
    K_SYCOCATYPE(KST_KServiceSeparator, KSycocaEntryPrivate)

    KServiceSeparatorPrivate(const QString &name)
        : KSycocaEntryPrivate(name)
    {
    }

    QString name() const override;
};

QString KServiceSeparatorPrivate::name() const
{
    return QStringLiteral("separator");
}

KServiceSeparator::KServiceSeparator()
    : KSycocaEntry(*new KServiceSeparatorPrivate(QStringLiteral("separator")))
{
}

KServiceSeparator::~KServiceSeparator()
{
}
