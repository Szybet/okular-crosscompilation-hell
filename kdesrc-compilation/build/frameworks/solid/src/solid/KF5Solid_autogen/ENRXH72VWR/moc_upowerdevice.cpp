/****************************************************************************
** Meta object code from reading C++ file 'upowerdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/backends/upower/upowerdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'upowerdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__UPower__UPowerDevice_t {
    QByteArrayData data[11];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__UPower__UPowerDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__UPower__UPowerDevice_t qt_meta_stringdata_Solid__Backends__UPower__UPowerDevice = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Solid::Backends::UPower::UPow..."
QT_MOC_LITERAL(1, 38, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 17), // "QMap<QString,int>"
QT_MOC_LITERAL(4, 73, 7), // "changes"
QT_MOC_LITERAL(5, 81, 19), // "onPropertiesChanged"
QT_MOC_LITERAL(6, 101, 9), // "ifaceName"
QT_MOC_LITERAL(7, 111, 12), // "changedProps"
QT_MOC_LITERAL(8, 124, 16), // "invalidatedProps"
QT_MOC_LITERAL(9, 141, 14), // "login1Resuming"
QT_MOC_LITERAL(10, 156, 6) // "active"

    },
    "Solid::Backends::UPower::UPowerDevice\0"
    "propertyChanged\0\0QMap<QString,int>\0"
    "changes\0onPropertiesChanged\0ifaceName\0"
    "changedProps\0invalidatedProps\0"
    "login1Resuming\0active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__UPower__UPowerDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   32,    2, 0x08 /* Private */,
       9,    1,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,    6,    7,    8,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void Solid::Backends::UPower::UPowerDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UPowerDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QMap<QString,int>(*)>(_a[1]))); break;
        case 1: _t->onPropertiesChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 2: _t->login1Resuming((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UPowerDevice::*)(const QMap<QString,int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UPowerDevice::propertyChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::UPower::UPowerDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<Solid::Ifaces::Device::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__UPower__UPowerDevice.data,
    qt_meta_data_Solid__Backends__UPower__UPowerDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::UPower::UPowerDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::UPower::UPowerDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__UPower__UPowerDevice.stringdata0))
        return static_cast<void*>(this);
    return Solid::Ifaces::Device::qt_metacast(_clname);
}

int Solid::Backends::UPower::UPowerDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Solid::Ifaces::Device::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Solid::Backends::UPower::UPowerDevice::propertyChanged(const QMap<QString,int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
