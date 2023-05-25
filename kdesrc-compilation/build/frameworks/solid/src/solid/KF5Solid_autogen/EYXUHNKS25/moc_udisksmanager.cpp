/****************************************************************************
** Meta object code from reading C++ file 'udisksmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/backends/udisks2/udisksmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udisksmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__UDisks2__Manager_t {
    QByteArrayData data[12];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__UDisks2__Manager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__UDisks2__Manager_t qt_meta_stringdata_Solid__Backends__UDisks2__Manager = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Solid::Backends::UDisks2::Man..."
QT_MOC_LITERAL(1, 34, 19), // "slotInterfacesAdded"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(4, 71, 11), // "object_path"
QT_MOC_LITERAL(5, 83, 13), // "VariantMapMap"
QT_MOC_LITERAL(6, 97, 25), // "interfaces_and_properties"
QT_MOC_LITERAL(7, 123, 21), // "slotInterfacesRemoved"
QT_MOC_LITERAL(8, 145, 10), // "interfaces"
QT_MOC_LITERAL(9, 156, 16), // "slotMediaChanged"
QT_MOC_LITERAL(10, 173, 12), // "QDBusMessage"
QT_MOC_LITERAL(11, 186, 3) // "msg"

    },
    "Solid::Backends::UDisks2::Manager\0"
    "slotInterfacesAdded\0\0QDBusObjectPath\0"
    "object_path\0VariantMapMap\0"
    "interfaces_and_properties\0"
    "slotInterfacesRemoved\0interfaces\0"
    "slotMediaChanged\0QDBusMessage\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__UDisks2__Manager[] = {

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
       1,    2,   29,    2, 0x08 /* Private */,
       7,    2,   34,    2, 0x08 /* Private */,
       9,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList,    4,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void Solid::Backends::UDisks2::Manager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Manager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotInterfacesAdded((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const VariantMapMap(*)>(_a[2]))); break;
        case 1: _t->slotInterfacesRemoved((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 2: _t->slotMediaChanged((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
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
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VariantMapMap >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::UDisks2::Manager::staticMetaObject = { {
    QMetaObject::SuperData::link<Solid::Ifaces::DeviceManager::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__UDisks2__Manager.data,
    qt_meta_data_Solid__Backends__UDisks2__Manager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::UDisks2::Manager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::UDisks2::Manager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__UDisks2__Manager.stringdata0))
        return static_cast<void*>(this);
    return Solid::Ifaces::DeviceManager::qt_metacast(_clname);
}

int Solid::Backends::UDisks2::Manager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Solid::Ifaces::DeviceManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
