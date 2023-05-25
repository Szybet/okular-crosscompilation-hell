/****************************************************************************
** Meta object code from reading C++ file 'fakevolume.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/solid/devices/backends/fakehw/fakevolume.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fakevolume.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__Fake__FakeVolume_t {
    QByteArrayData data[10];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__Fake__FakeVolume_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__Fake__FakeVolume_t qt_meta_stringdata_Solid__Backends__Fake__FakeVolume = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Solid::Backends::Fake::FakeVo..."
QT_MOC_LITERAL(1, 34, 9), // "isIgnored"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "usage"
QT_MOC_LITERAL(4, 51, 31), // "Solid::StorageVolume::UsageType"
QT_MOC_LITERAL(5, 83, 6), // "fsType"
QT_MOC_LITERAL(6, 90, 5), // "label"
QT_MOC_LITERAL(7, 96, 4), // "uuid"
QT_MOC_LITERAL(8, 101, 4), // "size"
QT_MOC_LITERAL(9, 106, 21) // "encryptedContainerUdi"

    },
    "Solid::Backends::Fake::FakeVolume\0"
    "isIgnored\0\0usage\0Solid::StorageVolume::UsageType\0"
    "fsType\0label\0uuid\0size\0encryptedContainerUdi"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__Fake__FakeVolume[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       5,    0,   51,    2, 0x0a /* Public */,
       6,    0,   52,    2, 0x0a /* Public */,
       7,    0,   53,    2, 0x0a /* Public */,
       8,    0,   54,    2, 0x0a /* Public */,
       9,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::ULongLong,
    QMetaType::QString,

       0        // eod
};

void Solid::Backends::Fake::FakeVolume::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeVolume *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->isIgnored();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { Solid::StorageVolume::UsageType _r = _t->usage();
            if (_a[0]) *reinterpret_cast< Solid::StorageVolume::UsageType*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->fsType();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->label();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->uuid();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { qulonglong _r = _t->size();
            if (_a[0]) *reinterpret_cast< qulonglong*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->encryptedContainerUdi();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::Fake::FakeVolume::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeBlock::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__Fake__FakeVolume.data,
    qt_meta_data_Solid__Backends__Fake__FakeVolume,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::Fake::FakeVolume::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::Fake::FakeVolume::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__Fake__FakeVolume.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Solid::Ifaces::StorageVolume"))
        return static_cast< Solid::Ifaces::StorageVolume*>(this);
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.StorageVolume/0.1"))
        return static_cast< Solid::Ifaces::StorageVolume*>(this);
    return FakeBlock::qt_metacast(_clname);
}

int Solid::Backends::Fake::FakeVolume::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeBlock::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
