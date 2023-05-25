/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -p klauncher_iface /home/szybet/kdesrc/frameworks/kservice/src/kdeinit/org.kde.KLauncher.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef KLAUNCHER_IFACE_H
#define KLAUNCHER_IFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.kde.KLauncher
 */
class OrgKdeKLauncherInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.kde.KLauncher"; }

public:
    OrgKdeKLauncherInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgKdeKLauncherInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> autoStart()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("autoStart"), argumentList);
    }

    inline QDBusPendingReply<> autoStart(int phase)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(phase);
        return asyncCallWithArgumentList(QStringLiteral("autoStart"), argumentList);
    }

    inline QDBusPendingReply<> exec_blind(const QString &name, const QStringList &arg_list, const QStringList &envs, const QString &startup_id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(name) << QVariant::fromValue(arg_list) << QVariant::fromValue(envs) << QVariant::fromValue(startup_id);
        return asyncCallWithArgumentList(QStringLiteral("exec_blind"), argumentList);
    }

    inline QDBusPendingReply<> exec_blind(const QString &name, const QStringList &arg_list)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(name) << QVariant::fromValue(arg_list);
        return asyncCallWithArgumentList(QStringLiteral("exec_blind"), argumentList);
    }

    inline QDBusPendingReply<int, QString, QString, int> kdeinit_exec(const QString &app, const QStringList &args, const QStringList &env, const QString &startup_id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(app) << QVariant::fromValue(args) << QVariant::fromValue(env) << QVariant::fromValue(startup_id);
        return asyncCallWithArgumentList(QStringLiteral("kdeinit_exec"), argumentList);
    }
    inline QDBusReply<int> kdeinit_exec(const QString &app, const QStringList &args, const QStringList &env, const QString &startup_id, QString &dbusServiceName, QString &error, int &pid)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(app) << QVariant::fromValue(args) << QVariant::fromValue(env) << QVariant::fromValue(startup_id);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("kdeinit_exec"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 4) {
            dbusServiceName = qdbus_cast<QString>(reply.arguments().at(1));
            error = qdbus_cast<QString>(reply.arguments().at(2));
            pid = qdbus_cast<int>(reply.arguments().at(3));
        }
        return reply;
    }

    inline QDBusPendingReply<int, QString, QString, int> kdeinit_exec_wait(const QString &app, const QStringList &args, const QStringList &env, const QString &startup_id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(app) << QVariant::fromValue(args) << QVariant::fromValue(env) << QVariant::fromValue(startup_id);
        return asyncCallWithArgumentList(QStringLiteral("kdeinit_exec_wait"), argumentList);
    }
    inline QDBusReply<int> kdeinit_exec_wait(const QString &app, const QStringList &args, const QStringList &env, const QString &startup_id, QString &dbusServiceName, QString &error, int &pid)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(app) << QVariant::fromValue(args) << QVariant::fromValue(env) << QVariant::fromValue(startup_id);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("kdeinit_exec_wait"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 4) {
            dbusServiceName = qdbus_cast<QString>(reply.arguments().at(1));
            error = qdbus_cast<QString>(reply.arguments().at(2));
            pid = qdbus_cast<int>(reply.arguments().at(3));
        }
        return reply;
    }

    inline QDBusPendingReply<int, QString, QString, int> kdeinit_exec_with_workdir(const QString &app, const QStringList &args, const QString &workdir, const QStringList &env, const QString &startup_id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(app) << QVariant::fromValue(args) << QVariant::fromValue(workdir) << QVariant::fromValue(env) << QVariant::fromValue(startup_id);
        return asyncCallWithArgumentList(QStringLiteral("kdeinit_exec_with_workdir"), argumentList);
    }
    inline QDBusReply<int> kdeinit_exec_with_workdir(const QString &app, const QStringList &args, const QString &workdir, const QStringList &env, const QString &startup_id, QString &dbusServiceName, QString &error, int &pid)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(app) << QVariant::fromValue(args) << QVariant::fromValue(workdir) << QVariant::fromValue(env) << QVariant::fromValue(startup_id);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("kdeinit_exec_with_workdir"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 4) {
            dbusServiceName = qdbus_cast<QString>(reply.arguments().at(1));
            error = qdbus_cast<QString>(reply.arguments().at(2));
            pid = qdbus_cast<int>(reply.arguments().at(3));
        }
        return reply;
    }

    inline QDBusPendingReply<> reparseConfiguration()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("reparseConfiguration"), argumentList);
    }

    inline QDBusPendingReply<> setLaunchEnv(const QString &name, const QString &value)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(name) << QVariant::fromValue(value);
        return asyncCallWithArgumentList(QStringLiteral("setLaunchEnv"), argumentList);
    }

    inline QDBusPendingReply<int, QString, QString, int> start_service_by_desktop_name(const QString &serviceName, const QStringList &urls, const QStringList &envs, const QString &startup_id, bool blind)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(serviceName) << QVariant::fromValue(urls) << QVariant::fromValue(envs) << QVariant::fromValue(startup_id) << QVariant::fromValue(blind);
        return asyncCallWithArgumentList(QStringLiteral("start_service_by_desktop_name"), argumentList);
    }
    inline QDBusReply<int> start_service_by_desktop_name(const QString &serviceName, const QStringList &urls, const QStringList &envs, const QString &startup_id, bool blind, QString &dbusServiceName, QString &error, int &pid)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(serviceName) << QVariant::fromValue(urls) << QVariant::fromValue(envs) << QVariant::fromValue(startup_id) << QVariant::fromValue(blind);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("start_service_by_desktop_name"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 4) {
            dbusServiceName = qdbus_cast<QString>(reply.arguments().at(1));
            error = qdbus_cast<QString>(reply.arguments().at(2));
            pid = qdbus_cast<int>(reply.arguments().at(3));
        }
        return reply;
    }

    inline QDBusPendingReply<int, QString, QString, int> start_service_by_desktop_path(const QString &serviceName, const QStringList &urls, const QStringList &envs, const QString &startup_id, bool blind)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(serviceName) << QVariant::fromValue(urls) << QVariant::fromValue(envs) << QVariant::fromValue(startup_id) << QVariant::fromValue(blind);
        return asyncCallWithArgumentList(QStringLiteral("start_service_by_desktop_path"), argumentList);
    }
    inline QDBusReply<int> start_service_by_desktop_path(const QString &serviceName, const QStringList &urls, const QStringList &envs, const QString &startup_id, bool blind, QString &dbusServiceName, QString &error, int &pid)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(serviceName) << QVariant::fromValue(urls) << QVariant::fromValue(envs) << QVariant::fromValue(startup_id) << QVariant::fromValue(blind);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("start_service_by_desktop_path"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 4) {
            dbusServiceName = qdbus_cast<QString>(reply.arguments().at(1));
            error = qdbus_cast<QString>(reply.arguments().at(2));
            pid = qdbus_cast<int>(reply.arguments().at(3));
        }
        return reply;
    }

    inline QDBusPendingReply<> terminate_kdeinit()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("terminate_kdeinit"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void autoStart0Done();
    void autoStart1Done();
    void autoStart2Done();
};

namespace org {
  namespace kde {
    typedef ::OrgKdeKLauncherInterface KLauncher;
  }
}
#endif
