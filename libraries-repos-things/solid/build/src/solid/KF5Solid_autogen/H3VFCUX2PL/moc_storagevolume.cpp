/****************************************************************************
** Meta object code from reading C++ file 'storagevolume.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/solid/devices/frontend/storagevolume.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'storagevolume.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__StorageVolume_t {
    QByteArrayData data[14];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__StorageVolume_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__StorageVolume_t qt_meta_stringdata_Solid__StorageVolume = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Solid::StorageVolume"
QT_MOC_LITERAL(1, 21, 7), // "ignored"
QT_MOC_LITERAL(2, 29, 5), // "usage"
QT_MOC_LITERAL(3, 35, 9), // "UsageType"
QT_MOC_LITERAL(4, 45, 6), // "fsType"
QT_MOC_LITERAL(5, 52, 5), // "label"
QT_MOC_LITERAL(6, 58, 4), // "uuid"
QT_MOC_LITERAL(7, 63, 4), // "size"
QT_MOC_LITERAL(8, 68, 5), // "Other"
QT_MOC_LITERAL(9, 74, 6), // "Unused"
QT_MOC_LITERAL(10, 81, 10), // "FileSystem"
QT_MOC_LITERAL(11, 92, 14), // "PartitionTable"
QT_MOC_LITERAL(12, 107, 4), // "Raid"
QT_MOC_LITERAL(13, 112, 9) // "Encrypted"

    },
    "Solid::StorageVolume\0ignored\0usage\0"
    "UsageType\0fsType\0label\0uuid\0size\0Other\0"
    "Unused\0FileSystem\0PartitionTable\0Raid\0"
    "Encrypted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__StorageVolume[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       1,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095001,
       2, 0x80000000 | 3, 0x00095009,
       4, QMetaType::QString, 0x00095001,
       5, QMetaType::QString, 0x00095001,
       6, QMetaType::QString, 0x00095001,
       7, QMetaType::ULongLong, 0x00095001,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    6,   37,

 // enum data: key, value
       8, uint(Solid::StorageVolume::Other),
       9, uint(Solid::StorageVolume::Unused),
      10, uint(Solid::StorageVolume::FileSystem),
      11, uint(Solid::StorageVolume::PartitionTable),
      12, uint(Solid::StorageVolume::Raid),
      13, uint(Solid::StorageVolume::Encrypted),

       0        // eod
};

void Solid::StorageVolume::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StorageVolume *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isIgnored(); break;
        case 1: *reinterpret_cast< UsageType*>(_v) = _t->usage(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->fsType(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->uuid(); break;
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

QT_INIT_METAOBJECT const QMetaObject Solid::StorageVolume::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceInterface::staticMetaObject>(),
    qt_meta_stringdata_Solid__StorageVolume.data,
    qt_meta_data_Solid__StorageVolume,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::StorageVolume::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::StorageVolume::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__StorageVolume.stringdata0))
        return static_cast<void*>(this);
    return DeviceInterface::qt_metacast(_clname);
}

int Solid::StorageVolume::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
