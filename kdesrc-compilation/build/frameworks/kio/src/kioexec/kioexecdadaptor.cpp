/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a kioexecdadaptor -i kioexecd.h -l KIOExecd /home/szybet/kdesrc/build/frameworks/kio/src/kioexec/org.kde.KIOExecd.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "kioexecdadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class KIOExecdAdaptor
 */

KIOExecdAdaptor::KIOExecdAdaptor(KIOExecd *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

KIOExecdAdaptor::~KIOExecdAdaptor()
{
    // destructor
}

void KIOExecdAdaptor::watch(const QString &path, const QString &destUrl)
{
    // handle method call org.kde.KIOExecd.watch
    parent()->watch(path, destUrl);
}


#include "kioexecdadaptor.moc"
