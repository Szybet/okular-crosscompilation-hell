/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -m -p io/org.kde.KIOFuse.VFS /home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/io/org.kde.KIOFuse.VFS.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "io/org.kde.KIOFuse.VFS.h"

/*
 * Implementation of interface class OrgKdeKIOFuseVFSInterface
 */

OrgKdeKIOFuseVFSInterface::OrgKdeKIOFuseVFSInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgKdeKIOFuseVFSInterface::~OrgKdeKIOFuseVFSInterface()
{
}


#include "io/org.kde.KIOFuse.VFS.moc"
