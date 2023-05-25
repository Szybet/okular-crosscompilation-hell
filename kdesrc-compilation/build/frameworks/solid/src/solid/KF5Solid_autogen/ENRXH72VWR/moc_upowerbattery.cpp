/****************************************************************************
** Meta object code from reading C++ file 'upowerbattery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/backends/upower/upowerbattery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'upowerbattery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__UPower__Battery_t {
    QByteArrayData data[27];
    char stringdata0[402];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__UPower__Battery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__UPower__Battery_t qt_meta_stringdata_Solid__Backends__UPower__Battery = {
    {
QT_MOC_LITERAL(0, 0, 32), // "Solid::Backends::UPower::Battery"
QT_MOC_LITERAL(1, 33, 19), // "presentStateChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 8), // "newState"
QT_MOC_LITERAL(4, 63, 3), // "udi"
QT_MOC_LITERAL(5, 67, 20), // "chargePercentChanged"
QT_MOC_LITERAL(6, 88, 5), // "value"
QT_MOC_LITERAL(7, 94, 15), // "capacityChanged"
QT_MOC_LITERAL(8, 110, 23), // "powerSupplyStateChanged"
QT_MOC_LITERAL(9, 134, 18), // "chargeStateChanged"
QT_MOC_LITERAL(10, 153, 18), // "timeToEmptyChanged"
QT_MOC_LITERAL(11, 172, 4), // "time"
QT_MOC_LITERAL(12, 177, 17), // "timeToFullChanged"
QT_MOC_LITERAL(13, 195, 13), // "energyChanged"
QT_MOC_LITERAL(14, 209, 6), // "energy"
QT_MOC_LITERAL(15, 216, 17), // "energyFullChanged"
QT_MOC_LITERAL(16, 234, 10), // "energyFull"
QT_MOC_LITERAL(17, 245, 23), // "energyFullDesignChanged"
QT_MOC_LITERAL(18, 269, 16), // "energyFullDesign"
QT_MOC_LITERAL(19, 286, 17), // "energyRateChanged"
QT_MOC_LITERAL(20, 304, 10), // "energyRate"
QT_MOC_LITERAL(21, 315, 14), // "voltageChanged"
QT_MOC_LITERAL(22, 330, 7), // "voltage"
QT_MOC_LITERAL(23, 338, 18), // "temperatureChanged"
QT_MOC_LITERAL(24, 357, 11), // "temperature"
QT_MOC_LITERAL(25, 369, 20), // "remainingTimeChanged"
QT_MOC_LITERAL(26, 390, 11) // "slotChanged"

    },
    "Solid::Backends::UPower::Battery\0"
    "presentStateChanged\0\0newState\0udi\0"
    "chargePercentChanged\0value\0capacityChanged\0"
    "powerSupplyStateChanged\0chargeStateChanged\0"
    "timeToEmptyChanged\0time\0timeToFullChanged\0"
    "energyChanged\0energy\0energyFullChanged\0"
    "energyFull\0energyFullDesignChanged\0"
    "energyFullDesign\0energyRateChanged\0"
    "energyRate\0voltageChanged\0voltage\0"
    "temperatureChanged\0temperature\0"
    "remainingTimeChanged\0slotChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__UPower__Battery[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   99,    2, 0x06 /* Public */,
       5,    2,  104,    2, 0x06 /* Public */,
       5,    1,  109,    2, 0x26 /* Public | MethodCloned */,
       7,    2,  112,    2, 0x06 /* Public */,
       8,    2,  117,    2, 0x06 /* Public */,
       9,    2,  122,    2, 0x06 /* Public */,
       9,    1,  127,    2, 0x26 /* Public | MethodCloned */,
      10,    2,  130,    2, 0x06 /* Public */,
      12,    2,  135,    2, 0x06 /* Public */,
      13,    2,  140,    2, 0x06 /* Public */,
      15,    2,  145,    2, 0x06 /* Public */,
      17,    2,  150,    2, 0x06 /* Public */,
      19,    2,  155,    2, 0x06 /* Public */,
      21,    2,  160,    2, 0x06 /* Public */,
      23,    2,  165,    2, 0x06 /* Public */,
      25,    2,  170,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    0,  175,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    4,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,   11,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,   11,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   14,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   16,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   18,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   20,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   22,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   24,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,   11,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Solid::Backends::UPower::Battery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Battery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->presentStateChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->chargePercentChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->chargePercentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->capacityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->powerSupplyStateChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->chargeStateChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->chargeStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->timeToEmptyChanged((*reinterpret_cast< qlonglong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->timeToFullChanged((*reinterpret_cast< qlonglong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->energyChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->energyFullChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->energyFullDesignChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->energyRateChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->voltageChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->temperatureChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->remainingTimeChanged((*reinterpret_cast< qlonglong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->slotChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Battery::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::presentStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Battery::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::chargePercentChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Battery::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::capacityChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Battery::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::powerSupplyStateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Battery::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::chargeStateChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Battery::*)(qlonglong , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::timeToEmptyChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Battery::*)(qlonglong , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::timeToFullChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::energyChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::energyFullChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::energyFullDesignChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::energyRateChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::voltageChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::temperatureChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Battery::*)(qlonglong , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::remainingTimeChanged)) {
                *result = 15;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::UPower::Battery::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceInterface::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__UPower__Battery.data,
    qt_meta_data_Solid__Backends__UPower__Battery,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::UPower::Battery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::UPower::Battery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__UPower__Battery.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Solid::Ifaces::Battery"))
        return static_cast< Solid::Ifaces::Battery*>(this);
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.Battery/0.3"))
        return static_cast< Solid::Ifaces::Battery*>(this);
    return DeviceInterface::qt_metacast(_clname);
}

int Solid::Backends::UPower::Battery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Solid::Backends::UPower::Battery::presentStateChanged(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::Backends::UPower::Battery::chargePercentChanged(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void Solid::Backends::UPower::Battery::capacityChanged(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Solid::Backends::UPower::Battery::powerSupplyStateChanged(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Solid::Backends::UPower::Battery::chargeStateChanged(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 7
void Solid::Backends::UPower::Battery::timeToEmptyChanged(qlonglong _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Solid::Backends::UPower::Battery::timeToFullChanged(qlonglong _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Solid::Backends::UPower::Battery::energyChanged(double _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Solid::Backends::UPower::Battery::energyFullChanged(double _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Solid::Backends::UPower::Battery::energyFullDesignChanged(double _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Solid::Backends::UPower::Battery::energyRateChanged(double _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Solid::Backends::UPower::Battery::voltageChanged(double _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Solid::Backends::UPower::Battery::temperatureChanged(double _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Solid::Backends::UPower::Battery::remainingTimeChanged(qlonglong _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
