/****************************************************************************
** Meta object code from reading C++ file 'upowermanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/backends/upower/upowermanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'upowermanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__UPower__UPowerManager_t {
    QByteArrayData data[6];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__UPower__UPowerManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__UPower__UPowerManager_t qt_meta_stringdata_Solid__Backends__UPower__UPowerManager = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Solid::Backends::UPower::UPow..."
QT_MOC_LITERAL(1, 39, 13), // "onDeviceAdded"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(4, 70, 4), // "path"
QT_MOC_LITERAL(5, 75, 15) // "onDeviceRemoved"

    },
    "Solid::Backends::UPower::UPowerManager\0"
    "onDeviceAdded\0\0QDBusObjectPath\0path\0"
    "onDeviceRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__UPower__UPowerManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       5,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Solid::Backends::UPower::UPowerManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UPowerManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDeviceAdded((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 1: _t->onDeviceRemoved((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::UPower::UPowerManager::staticMetaObject = { {
    QMetaObject::SuperData::link<Solid::Ifaces::DeviceManager::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__UPower__UPowerManager.data,
    qt_meta_data_Solid__Backends__UPower__UPowerManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::UPower::UPowerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::UPower::UPowerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__UPower__UPowerManager.stringdata0))
        return static_cast<void*>(this);
    return Solid::Ifaces::DeviceManager::qt_metacast(_clname);
}

int Solid::Backends::UPower::UPowerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Solid::Ifaces::DeviceManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
