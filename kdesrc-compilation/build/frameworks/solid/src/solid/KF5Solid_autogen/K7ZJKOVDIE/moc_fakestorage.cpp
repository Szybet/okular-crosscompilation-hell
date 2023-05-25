/****************************************************************************
** Meta object code from reading C++ file 'fakestorage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/backends/fakehw/fakestorage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fakestorage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__Fake__FakeStorage_t {
    QByteArrayData data[9];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__Fake__FakeStorage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__Fake__FakeStorage_t qt_meta_stringdata_Solid__Backends__Fake__FakeStorage = {
    {
QT_MOC_LITERAL(0, 0, 34), // "Solid::Backends::Fake::FakeSt..."
QT_MOC_LITERAL(1, 35, 3), // "bus"
QT_MOC_LITERAL(2, 39, 24), // "Solid::StorageDrive::Bus"
QT_MOC_LITERAL(3, 64, 0), // ""
QT_MOC_LITERAL(4, 65, 9), // "driveType"
QT_MOC_LITERAL(5, 75, 30), // "Solid::StorageDrive::DriveType"
QT_MOC_LITERAL(6, 106, 11), // "isRemovable"
QT_MOC_LITERAL(7, 118, 14), // "isHotpluggable"
QT_MOC_LITERAL(8, 133, 4) // "size"

    },
    "Solid::Backends::Fake::FakeStorage\0"
    "bus\0Solid::StorageDrive::Bus\0\0driveType\0"
    "Solid::StorageDrive::DriveType\0"
    "isRemovable\0isHotpluggable\0size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__Fake__FakeStorage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    3, 0x0a /* Public */,
       4,    0,   40,    3, 0x0a /* Public */,
       6,    0,   41,    3, 0x0a /* Public */,
       7,    0,   42,    3, 0x0a /* Public */,
       8,    0,   43,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 5,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::ULongLong,

       0        // eod
};

void Solid::Backends::Fake::FakeStorage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeStorage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { Solid::StorageDrive::Bus _r = _t->bus();
            if (_a[0]) *reinterpret_cast< Solid::StorageDrive::Bus*>(_a[0]) = std::move(_r); }  break;
        case 1: { Solid::StorageDrive::DriveType _r = _t->driveType();
            if (_a[0]) *reinterpret_cast< Solid::StorageDrive::DriveType*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->isRemovable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->isHotpluggable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { qulonglong _r = _t->size();
            if (_a[0]) *reinterpret_cast< qulonglong*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::Fake::FakeStorage::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeBlock::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__Fake__FakeStorage.data,
    qt_meta_data_Solid__Backends__Fake__FakeStorage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::Fake::FakeStorage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::Fake::FakeStorage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__Fake__FakeStorage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Solid::Ifaces::StorageDrive"))
        return static_cast< Solid::Ifaces::StorageDrive*>(this);
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.StorageDrive/0.1"))
        return static_cast< Solid::Ifaces::StorageDrive*>(this);
    return FakeBlock::qt_metacast(_clname);
}

int Solid::Backends::Fake::FakeStorage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeBlock::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
