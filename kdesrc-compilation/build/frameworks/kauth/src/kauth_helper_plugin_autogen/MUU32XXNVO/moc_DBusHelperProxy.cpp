/****************************************************************************
** Meta object code from reading C++ file 'DBusHelperProxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kauth/src/backends/dbus/DBusHelperProxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DBusHelperProxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KAuth__DBusHelperProxy_t {
    QByteArrayData data[12];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KAuth__DBusHelperProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KAuth__DBusHelperProxy_t qt_meta_stringdata_KAuth__DBusHelperProxy = {
    {
QT_MOC_LITERAL(0, 0, 22), // "KAuth::DBusHelperProxy"
QT_MOC_LITERAL(1, 23, 12), // "remoteSignal"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "type"
QT_MOC_LITERAL(4, 42, 6), // "action"
QT_MOC_LITERAL(5, 49, 4), // "blob"
QT_MOC_LITERAL(6, 54, 10), // "stopAction"
QT_MOC_LITERAL(7, 65, 13), // "performAction"
QT_MOC_LITERAL(8, 79, 8), // "callerID"
QT_MOC_LITERAL(9, 88, 7), // "details"
QT_MOC_LITERAL(10, 96, 9), // "arguments"
QT_MOC_LITERAL(11, 106, 20) // "remoteSignalReceived"

    },
    "KAuth::DBusHelperProxy\0remoteSignal\0"
    "\0type\0action\0blob\0stopAction\0performAction\0"
    "callerID\0details\0arguments\0"
    "remoteSignalReceived"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KAuth__DBusHelperProxy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   41,    2, 0x0a /* Public */,
       7,    4,   44,    2, 0x0a /* Public */,
      11,    3,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QByteArray,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::QByteArray, QMetaType::QString, QMetaType::QByteArray, QMetaType::QVariantMap, QMetaType::QByteArray,    4,    8,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QByteArray,    3,    4,    5,

       0        // eod
};

void KAuth::DBusHelperProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DBusHelperProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->remoteSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 1: _t->stopAction((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { QByteArray _r = _t->performAction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->remoteSignalReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DBusHelperProxy::*)(int , const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusHelperProxy::remoteSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KAuth::DBusHelperProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<HelperProxy::staticMetaObject>(),
    qt_meta_stringdata_KAuth__DBusHelperProxy.data,
    qt_meta_data_KAuth__DBusHelperProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KAuth::DBusHelperProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KAuth::DBusHelperProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KAuth__DBusHelperProxy.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    if (!strcmp(_clname, "org.kde.kf5auth.HelperProxy/0.1"))
        return static_cast< KAuth::HelperProxy*>(this);
    return HelperProxy::qt_metacast(_clname);
}

int KAuth::DBusHelperProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HelperProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KAuth::DBusHelperProxy::remoteSignal(int _t1, const QString & _t2, const QByteArray & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x77,  'o',  'r',  'g',  '.',  'k',  'd', 
    'e',  '.',  'D',  'B',  'u',  's',  'H',  'e', 
    'l',  'p',  'e',  'r',  'P',  'r',  'o',  'x', 
    'y', 
    // "className"
    0x03,  0x6f,  'D',  'B',  'u',  's',  'H',  'e', 
    'l',  'p',  'e',  'r',  'P',  'r',  'o',  'x', 
    'y', 
    0xff, 
};
using namespace KAuth;
QT_MOC_EXPORT_PLUGIN(KAuth::DBusHelperProxy, DBusHelperProxy)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
