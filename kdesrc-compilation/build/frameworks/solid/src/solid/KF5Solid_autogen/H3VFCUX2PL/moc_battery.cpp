/****************************************************************************
** Meta object code from reading C++ file 'battery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/frontend/battery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'battery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Battery_t {
    QByteArrayData data[68];
    char stringdata0[911];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Battery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Battery_t qt_meta_stringdata_Solid__Battery = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Solid::Battery"
QT_MOC_LITERAL(1, 15, 19), // "presentStateChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "newState"
QT_MOC_LITERAL(4, 45, 3), // "udi"
QT_MOC_LITERAL(5, 49, 20), // "chargePercentChanged"
QT_MOC_LITERAL(6, 70, 5), // "value"
QT_MOC_LITERAL(7, 76, 15), // "capacityChanged"
QT_MOC_LITERAL(8, 92, 23), // "powerSupplyStateChanged"
QT_MOC_LITERAL(9, 116, 18), // "chargeStateChanged"
QT_MOC_LITERAL(10, 135, 18), // "timeToEmptyChanged"
QT_MOC_LITERAL(11, 154, 4), // "time"
QT_MOC_LITERAL(12, 159, 17), // "timeToFullChanged"
QT_MOC_LITERAL(13, 177, 13), // "energyChanged"
QT_MOC_LITERAL(14, 191, 6), // "energy"
QT_MOC_LITERAL(15, 198, 17), // "energyFullChanged"
QT_MOC_LITERAL(16, 216, 23), // "energyFullDesignChanged"
QT_MOC_LITERAL(17, 240, 17), // "energyRateChanged"
QT_MOC_LITERAL(18, 258, 10), // "energyRate"
QT_MOC_LITERAL(19, 269, 14), // "voltageChanged"
QT_MOC_LITERAL(20, 284, 7), // "voltage"
QT_MOC_LITERAL(21, 292, 18), // "temperatureChanged"
QT_MOC_LITERAL(22, 311, 11), // "temperature"
QT_MOC_LITERAL(23, 323, 20), // "remainingTimeChanged"
QT_MOC_LITERAL(24, 344, 7), // "present"
QT_MOC_LITERAL(25, 352, 4), // "type"
QT_MOC_LITERAL(26, 357, 11), // "BatteryType"
QT_MOC_LITERAL(27, 369, 13), // "chargePercent"
QT_MOC_LITERAL(28, 383, 8), // "capacity"
QT_MOC_LITERAL(29, 392, 12), // "rechargeable"
QT_MOC_LITERAL(30, 405, 11), // "powerSupply"
QT_MOC_LITERAL(31, 417, 11), // "chargeState"
QT_MOC_LITERAL(32, 429, 11), // "ChargeState"
QT_MOC_LITERAL(33, 441, 11), // "timeToEmpty"
QT_MOC_LITERAL(34, 453, 10), // "timeToFull"
QT_MOC_LITERAL(35, 464, 10), // "energyFull"
QT_MOC_LITERAL(36, 475, 16), // "energyFullDesign"
QT_MOC_LITERAL(37, 492, 10), // "technology"
QT_MOC_LITERAL(38, 503, 10), // "Technology"
QT_MOC_LITERAL(39, 514, 8), // "recalled"
QT_MOC_LITERAL(40, 523, 12), // "recallVendor"
QT_MOC_LITERAL(41, 536, 9), // "recallUrl"
QT_MOC_LITERAL(42, 546, 6), // "serial"
QT_MOC_LITERAL(43, 553, 13), // "remainingTime"
QT_MOC_LITERAL(44, 567, 14), // "UnknownBattery"
QT_MOC_LITERAL(45, 582, 10), // "PdaBattery"
QT_MOC_LITERAL(46, 593, 10), // "UpsBattery"
QT_MOC_LITERAL(47, 604, 14), // "PrimaryBattery"
QT_MOC_LITERAL(48, 619, 12), // "MouseBattery"
QT_MOC_LITERAL(49, 632, 15), // "KeyboardBattery"
QT_MOC_LITERAL(50, 648, 20), // "KeyboardMouseBattery"
QT_MOC_LITERAL(51, 669, 13), // "CameraBattery"
QT_MOC_LITERAL(52, 683, 12), // "PhoneBattery"
QT_MOC_LITERAL(53, 696, 14), // "MonitorBattery"
QT_MOC_LITERAL(54, 711, 18), // "GamingInputBattery"
QT_MOC_LITERAL(55, 730, 16), // "BluetoothBattery"
QT_MOC_LITERAL(56, 747, 13), // "TabletBattery"
QT_MOC_LITERAL(57, 761, 8), // "NoCharge"
QT_MOC_LITERAL(58, 770, 8), // "Charging"
QT_MOC_LITERAL(59, 779, 11), // "Discharging"
QT_MOC_LITERAL(60, 791, 12), // "FullyCharged"
QT_MOC_LITERAL(61, 804, 17), // "UnknownTechnology"
QT_MOC_LITERAL(62, 822, 10), // "LithiumIon"
QT_MOC_LITERAL(63, 833, 14), // "LithiumPolymer"
QT_MOC_LITERAL(64, 848, 20), // "LithiumIronPhosphate"
QT_MOC_LITERAL(65, 869, 8), // "LeadAcid"
QT_MOC_LITERAL(66, 878, 13), // "NickelCadmium"
QT_MOC_LITERAL(67, 892, 18) // "NickelMetalHydride"

    },
    "Solid::Battery\0presentStateChanged\0\0"
    "newState\0udi\0chargePercentChanged\0"
    "value\0capacityChanged\0powerSupplyStateChanged\0"
    "chargeStateChanged\0timeToEmptyChanged\0"
    "time\0timeToFullChanged\0energyChanged\0"
    "energy\0energyFullChanged\0"
    "energyFullDesignChanged\0energyRateChanged\0"
    "energyRate\0voltageChanged\0voltage\0"
    "temperatureChanged\0temperature\0"
    "remainingTimeChanged\0present\0type\0"
    "BatteryType\0chargePercent\0capacity\0"
    "rechargeable\0powerSupply\0chargeState\0"
    "ChargeState\0timeToEmpty\0timeToFull\0"
    "energyFull\0energyFullDesign\0technology\0"
    "Technology\0recalled\0recallVendor\0"
    "recallUrl\0serial\0remainingTime\0"
    "UnknownBattery\0PdaBattery\0UpsBattery\0"
    "PrimaryBattery\0MouseBattery\0KeyboardBattery\0"
    "KeyboardMouseBattery\0CameraBattery\0"
    "PhoneBattery\0MonitorBattery\0"
    "GamingInputBattery\0BluetoothBattery\0"
    "TabletBattery\0NoCharge\0Charging\0"
    "Discharging\0FullyCharged\0UnknownTechnology\0"
    "LithiumIon\0LithiumPolymer\0"
    "LithiumIronPhosphate\0LeadAcid\0"
    "NickelCadmium\0NickelMetalHydride"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Battery[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
      21,  162, // properties
       3,  246, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       5,    2,   94,    2, 0x06 /* Public */,
       7,    2,   99,    2, 0x06 /* Public */,
       8,    2,  104,    2, 0x06 /* Public */,
       9,    2,  109,    2, 0x06 /* Public */,
       9,    1,  114,    2, 0x26 /* Public | MethodCloned */,
      10,    2,  117,    2, 0x06 /* Public */,
      12,    2,  122,    2, 0x06 /* Public */,
      13,    2,  127,    2, 0x06 /* Public */,
      15,    2,  132,    2, 0x06 /* Public */,
      16,    2,  137,    2, 0x06 /* Public */,
      17,    2,  142,    2, 0x06 /* Public */,
      19,    2,  147,    2, 0x06 /* Public */,
      21,    2,  152,    2, 0x06 /* Public */,
      23,    2,  157,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    4,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,   11,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,   11,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   14,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   14,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   14,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   18,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   20,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   22,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,   11,    4,

 // properties: name, type, flags
      24, QMetaType::Bool, 0x00495001,
      25, 0x80000000 | 26, 0x00095409,
      27, QMetaType::Int, 0x00495001,
      28, QMetaType::Int, 0x00495001,
      29, QMetaType::Bool, 0x00095401,
      30, QMetaType::Bool, 0x00495001,
      31, 0x80000000 | 32, 0x00495009,
      33, QMetaType::LongLong, 0x00495001,
      34, QMetaType::LongLong, 0x00495001,
      14, QMetaType::Double, 0x00495001,
      35, QMetaType::Double, 0x00495001,
      36, QMetaType::Double, 0x00495001,
      18, QMetaType::Double, 0x00495001,
      20, QMetaType::Double, 0x00495001,
      22, QMetaType::Double, 0x00495001,
      37, 0x80000000 | 38, 0x00095409,
      39, QMetaType::Bool, 0x00095001,
      40, QMetaType::QString, 0x00095001,
      41, QMetaType::QString, 0x00095001,
      42, QMetaType::QString, 0x00095401,
      43, QMetaType::LongLong, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       0,
       3,
       4,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
       0,
       0,
       0,
       0,
       0,
      14,

 // enums: name, alias, flags, count, data
      26,   26, 0x0,   13,  261,
      32,   32, 0x0,    4,  287,
      38,   38, 0x0,    7,  295,

 // enum data: key, value
      44, uint(Solid::Battery::UnknownBattery),
      45, uint(Solid::Battery::PdaBattery),
      46, uint(Solid::Battery::UpsBattery),
      47, uint(Solid::Battery::PrimaryBattery),
      48, uint(Solid::Battery::MouseBattery),
      49, uint(Solid::Battery::KeyboardBattery),
      50, uint(Solid::Battery::KeyboardMouseBattery),
      51, uint(Solid::Battery::CameraBattery),
      52, uint(Solid::Battery::PhoneBattery),
      53, uint(Solid::Battery::MonitorBattery),
      54, uint(Solid::Battery::GamingInputBattery),
      55, uint(Solid::Battery::BluetoothBattery),
      56, uint(Solid::Battery::TabletBattery),
      57, uint(Solid::Battery::NoCharge),
      58, uint(Solid::Battery::Charging),
      59, uint(Solid::Battery::Discharging),
      60, uint(Solid::Battery::FullyCharged),
      61, uint(Solid::Battery::UnknownTechnology),
      62, uint(Solid::Battery::LithiumIon),
      63, uint(Solid::Battery::LithiumPolymer),
      64, uint(Solid::Battery::LithiumIronPhosphate),
      65, uint(Solid::Battery::LeadAcid),
      66, uint(Solid::Battery::NickelCadmium),
      67, uint(Solid::Battery::NickelMetalHydride),

       0        // eod
};

void Solid::Battery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Battery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->presentStateChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->chargePercentChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->capacityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->powerSupplyStateChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->chargeStateChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->chargeStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->timeToEmptyChanged((*reinterpret_cast< qlonglong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->timeToFullChanged((*reinterpret_cast< qlonglong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->energyChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->energyFullChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->energyFullDesignChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->energyRateChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->voltageChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->temperatureChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->remainingTimeChanged((*reinterpret_cast< qlonglong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
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
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Battery::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::powerSupplyStateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Battery::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::chargeStateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Battery::*)(qlonglong , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::timeToEmptyChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Battery::*)(qlonglong , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::timeToFullChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::energyChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::energyFullChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::energyFullDesignChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::energyRateChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::voltageChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Battery::*)(double , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::temperatureChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Battery::*)(qlonglong , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::remainingTimeChanged)) {
                *result = 14;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Battery *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isPresent(); break;
        case 1: *reinterpret_cast< BatteryType*>(_v) = _t->type(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->chargePercent(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->capacity(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isRechargeable(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isPowerSupply(); break;
        case 6: *reinterpret_cast< ChargeState*>(_v) = _t->chargeState(); break;
        case 7: *reinterpret_cast< qlonglong*>(_v) = _t->timeToEmpty(); break;
        case 8: *reinterpret_cast< qlonglong*>(_v) = _t->timeToFull(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->energy(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->energyFull(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->energyFullDesign(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->energyRate(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->voltage(); break;
        case 14: *reinterpret_cast< double*>(_v) = _t->temperature(); break;
        case 15: *reinterpret_cast< Technology*>(_v) = _t->technology(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->isRecalled(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->recallVendor(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->recallUrl(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->serial(); break;
        case 20: *reinterpret_cast< qlonglong*>(_v) = _t->remainingTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Solid::Battery::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceInterface::staticMetaObject>(),
    qt_meta_stringdata_Solid__Battery.data,
    qt_meta_data_Solid__Battery,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Battery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Battery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Battery.stringdata0))
        return static_cast<void*>(this);
    return DeviceInterface::qt_metacast(_clname);
}

int Solid::Battery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 21;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Solid::Battery::presentStateChanged(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::Battery::chargePercentChanged(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Solid::Battery::capacityChanged(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Solid::Battery::powerSupplyStateChanged(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Solid::Battery::chargeStateChanged(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 6
void Solid::Battery::timeToEmptyChanged(qlonglong _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Solid::Battery::timeToFullChanged(qlonglong _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Solid::Battery::energyChanged(double _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Solid::Battery::energyFullChanged(double _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Solid::Battery::energyFullDesignChanged(double _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Solid::Battery::energyRateChanged(double _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Solid::Battery::voltageChanged(double _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Solid::Battery::temperatureChanged(double _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Solid::Battery::remainingTimeChanged(qlonglong _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
