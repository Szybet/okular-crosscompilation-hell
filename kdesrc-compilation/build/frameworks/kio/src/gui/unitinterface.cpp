/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -i systemd/dbustypes.h -p unitinterface /home/szybet/kdesrc/frameworks/kio/src/gui/systemd/org.freedesktop.systemd1.Unit.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "unitinterface.h"

/*
 * Implementation of interface class OrgFreedesktopSystemd1UnitInterface
 */

OrgFreedesktopSystemd1UnitInterface::OrgFreedesktopSystemd1UnitInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgFreedesktopSystemd1UnitInterface::~OrgFreedesktopSystemd1UnitInterface()
{
}


#include "unitinterface.moc"
