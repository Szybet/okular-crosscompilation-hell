/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -p kioexecdinterface /home/szybet/kdesrc/build/frameworks/kio/src/kioexec/org.kde.KIOExecd.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef KIOEXECDINTERFACE_H
#define KIOEXECDINTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.kde.KIOExecd
 */
class OrgKdeKIOExecdInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.kde.KIOExecd"; }

public:
    OrgKdeKIOExecdInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgKdeKIOExecdInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> watch(const QString &path, const QString &destUrl)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(path) << QVariant::fromValue(destUrl);
        return asyncCallWithArgumentList(QStringLiteral("watch"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace kde {
    typedef ::OrgKdeKIOExecdInterface KIOExecd;
  }
}
#endif
