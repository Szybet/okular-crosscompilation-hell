/****************************************************************************
** Meta object code from reading C++ file 'devicemanager_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/frontend/devicemanager_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicemanager_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__DeviceManagerPrivate_t {
    QByteArrayData data[7];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__DeviceManagerPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__DeviceManagerPrivate_t qt_meta_stringdata_Solid__DeviceManagerPrivate = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Solid::DeviceManagerPrivate"
QT_MOC_LITERAL(1, 28, 14), // "_k_deviceAdded"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 3), // "udi"
QT_MOC_LITERAL(4, 48, 16), // "_k_deviceRemoved"
QT_MOC_LITERAL(5, 65, 12), // "_k_destroyed"
QT_MOC_LITERAL(6, 78, 6) // "object"

    },
    "Solid::DeviceManagerPrivate\0_k_deviceAdded\0"
    "\0udi\0_k_deviceRemoved\0_k_destroyed\0"
    "object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__DeviceManagerPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       5,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QObjectStar,    6,

       0        // eod
};

void Solid::DeviceManagerPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceManagerPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_k_deviceAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->_k_deviceRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->_k_destroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::DeviceManagerPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceNotifier::staticMetaObject>(),
    qt_meta_stringdata_Solid__DeviceManagerPrivate.data,
    qt_meta_data_Solid__DeviceManagerPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::DeviceManagerPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::DeviceManagerPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__DeviceManagerPrivate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ManagerBasePrivate"))
        return static_cast< ManagerBasePrivate*>(this);
    return DeviceNotifier::qt_metacast(_clname);
}

int Solid::DeviceManagerPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceNotifier::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
