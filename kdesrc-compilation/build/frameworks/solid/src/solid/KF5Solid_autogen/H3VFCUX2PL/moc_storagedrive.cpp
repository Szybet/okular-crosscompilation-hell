/****************************************************************************
** Meta object code from reading C++ file 'storagedrive.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/frontend/storagedrive.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'storagedrive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__StorageDrive_t {
    QByteArrayData data[24];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__StorageDrive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__StorageDrive_t qt_meta_stringdata_Solid__StorageDrive = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Solid::StorageDrive"
QT_MOC_LITERAL(1, 20, 3), // "bus"
QT_MOC_LITERAL(2, 24, 3), // "Bus"
QT_MOC_LITERAL(3, 28, 9), // "driveType"
QT_MOC_LITERAL(4, 38, 9), // "DriveType"
QT_MOC_LITERAL(5, 48, 9), // "removable"
QT_MOC_LITERAL(6, 58, 12), // "hotpluggable"
QT_MOC_LITERAL(7, 71, 5), // "inUse"
QT_MOC_LITERAL(8, 77, 4), // "size"
QT_MOC_LITERAL(9, 82, 3), // "Ide"
QT_MOC_LITERAL(10, 86, 3), // "Usb"
QT_MOC_LITERAL(11, 90, 8), // "Ieee1394"
QT_MOC_LITERAL(12, 99, 4), // "Scsi"
QT_MOC_LITERAL(13, 104, 4), // "Sata"
QT_MOC_LITERAL(14, 109, 8), // "Platform"
QT_MOC_LITERAL(15, 118, 8), // "HardDisk"
QT_MOC_LITERAL(16, 127, 10), // "CdromDrive"
QT_MOC_LITERAL(17, 138, 6), // "Floppy"
QT_MOC_LITERAL(18, 145, 4), // "Tape"
QT_MOC_LITERAL(19, 150, 12), // "CompactFlash"
QT_MOC_LITERAL(20, 163, 11), // "MemoryStick"
QT_MOC_LITERAL(21, 175, 10), // "SmartMedia"
QT_MOC_LITERAL(22, 186, 5), // "SdMmc"
QT_MOC_LITERAL(23, 192, 2) // "Xd"

    },
    "Solid::StorageDrive\0bus\0Bus\0driveType\0"
    "DriveType\0removable\0hotpluggable\0inUse\0"
    "size\0Ide\0Usb\0Ieee1394\0Scsi\0Sata\0"
    "Platform\0HardDisk\0CdromDrive\0Floppy\0"
    "Tape\0CompactFlash\0MemoryStick\0SmartMedia\0"
    "SdMmc\0Xd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__StorageDrive[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       2,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095009,
       3, 0x80000000 | 4, 0x00095009,
       5, QMetaType::Bool, 0x00095001,
       6, QMetaType::Bool, 0x00095001,
       7, QMetaType::Bool, 0x00095001,
       8, QMetaType::ULongLong, 0x00095001,

 // enums: name, alias, flags, count, data
       2,    2, 0x0,    6,   42,
       4,    4, 0x0,    9,   54,

 // enum data: key, value
       9, uint(Solid::StorageDrive::Ide),
      10, uint(Solid::StorageDrive::Usb),
      11, uint(Solid::StorageDrive::Ieee1394),
      12, uint(Solid::StorageDrive::Scsi),
      13, uint(Solid::StorageDrive::Sata),
      14, uint(Solid::StorageDrive::Platform),
      15, uint(Solid::StorageDrive::HardDisk),
      16, uint(Solid::StorageDrive::CdromDrive),
      17, uint(Solid::StorageDrive::Floppy),
      18, uint(Solid::StorageDrive::Tape),
      19, uint(Solid::StorageDrive::CompactFlash),
      20, uint(Solid::StorageDrive::MemoryStick),
      21, uint(Solid::StorageDrive::SmartMedia),
      22, uint(Solid::StorageDrive::SdMmc),
      23, uint(Solid::StorageDrive::Xd),

       0        // eod
};

void Solid::StorageDrive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StorageDrive *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Bus*>(_v) = _t->bus(); break;
        case 1: *reinterpret_cast< DriveType*>(_v) = _t->driveType(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isRemovable(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isHotpluggable(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isInUse(); break;
        case 5: *reinterpret_cast< qulonglong*>(_v) = _t->size(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Solid::StorageDrive::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceInterface::staticMetaObject>(),
    qt_meta_stringdata_Solid__StorageDrive.data,
    qt_meta_data_Solid__StorageDrive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::StorageDrive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::StorageDrive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__StorageDrive.stringdata0))
        return static_cast<void*>(this);
    return DeviceInterface::qt_metacast(_clname);
}

int Solid::StorageDrive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
