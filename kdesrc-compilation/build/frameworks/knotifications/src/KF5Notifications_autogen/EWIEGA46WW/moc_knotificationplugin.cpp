/****************************************************************************
** Meta object code from reading C++ file 'knotificationplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/knotifications/src/knotificationplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'knotificationplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KNotificationPlugin_t {
    QByteArrayData data[12];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KNotificationPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KNotificationPlugin_t qt_meta_stringdata_KNotificationPlugin = {
    {
QT_MOC_LITERAL(0, 0, 19), // "KNotificationPlugin"
QT_MOC_LITERAL(1, 20, 8), // "finished"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "KNotification*"
QT_MOC_LITERAL(4, 45, 12), // "notification"
QT_MOC_LITERAL(5, 58, 13), // "actionInvoked"
QT_MOC_LITERAL(6, 72, 2), // "id"
QT_MOC_LITERAL(7, 75, 6), // "action"
QT_MOC_LITERAL(8, 82, 26), // "xdgActivationTokenReceived"
QT_MOC_LITERAL(9, 109, 5), // "token"
QT_MOC_LITERAL(10, 115, 7), // "replied"
QT_MOC_LITERAL(11, 123, 4) // "text"

    },
    "KNotificationPlugin\0finished\0\0"
    "KNotification*\0notification\0actionInvoked\0"
    "id\0action\0xdgActivationTokenReceived\0"
    "token\0replied\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KNotificationPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    2,   37,    2, 0x06 /* Public */,
       8,    2,   42,    2, 0x06 /* Public */,
      10,    2,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,   11,

       0        // eod
};

void KNotificationPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KNotificationPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< KNotification*(*)>(_a[1]))); break;
        case 1: _t->actionInvoked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->xdgActivationTokenReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->replied((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KNotificationPlugin::*)(KNotification * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotificationPlugin::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KNotificationPlugin::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotificationPlugin::actionInvoked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KNotificationPlugin::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotificationPlugin::xdgActivationTokenReceived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KNotificationPlugin::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotificationPlugin::replied)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KNotificationPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KNotificationPlugin.data,
    qt_meta_data_KNotificationPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KNotificationPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KNotificationPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KNotificationPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KNotificationPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void KNotificationPlugin::finished(KNotification * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KNotificationPlugin::actionInvoked(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KNotificationPlugin::xdgActivationTokenReceived(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KNotificationPlugin::replied(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
