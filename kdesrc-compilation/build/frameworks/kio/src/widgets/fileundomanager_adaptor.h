/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a fileundomanager_adaptor -c KIOFileUndoManagerAdaptor -i fileundomanager_p.h -l KIO::FileUndoManagerPrivate /home/szybet/kdesrc/frameworks/kio/src/widgets/org.kde.kio.FileUndoManager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef FILEUNDOMANAGER_ADAPTOR_H
#define FILEUNDOMANAGER_ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "fileundomanager_p.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.kde.libkonq.FileUndoManager
 */
class KIOFileUndoManagerAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.kde.libkonq.FileUndoManager")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.kde.libkonq.FileUndoManager\">\n"
"    <method name=\"get\">\n"
"      <arg direction=\"out\" type=\"ay\" name=\"commands\"/>\n"
"    </method>\n"
"    <signal name=\"lock\"/>\n"
"    <signal name=\"pop\"/>\n"
"    <signal name=\"push\">\n"
"      <arg direction=\"out\" type=\"ay\" name=\"command\"/>\n"
"    </signal>\n"
"    <signal name=\"unlock\"/>\n"
"  </interface>\n"
        "")
public:
    KIOFileUndoManagerAdaptor(KIO::FileUndoManagerPrivate *parent);
    virtual ~KIOFileUndoManagerAdaptor();

    inline KIO::FileUndoManagerPrivate *parent() const
    { return static_cast<KIO::FileUndoManagerPrivate *>(QObject::parent()); }

public: // PROPERTIES
public Q_SLOTS: // METHODS
    QByteArray get();
Q_SIGNALS: // SIGNALS
    void lock();
    void pop();
    void push(const QByteArray &command);
    void unlock();
};

#endif
