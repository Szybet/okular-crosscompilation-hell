/****************************************************************************
** Meta object code from reading C++ file 'fakeopticaldisc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/solid/devices/backends/fakehw/fakeopticaldisc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fakeopticaldisc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__Fake__FakeOpticalDisc_t {
    QByteArrayData data[10];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__Fake__FakeOpticalDisc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__Fake__FakeOpticalDisc_t qt_meta_stringdata_Solid__Backends__Fake__FakeOpticalDisc = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Solid::Backends::Fake::FakeOp..."
QT_MOC_LITERAL(1, 39, 16), // "availableContent"
QT_MOC_LITERAL(2, 56, 32), // "Solid::OpticalDisc::ContentTypes"
QT_MOC_LITERAL(3, 89, 0), // ""
QT_MOC_LITERAL(4, 90, 8), // "discType"
QT_MOC_LITERAL(5, 99, 28), // "Solid::OpticalDisc::DiscType"
QT_MOC_LITERAL(6, 128, 12), // "isAppendable"
QT_MOC_LITERAL(7, 141, 7), // "isBlank"
QT_MOC_LITERAL(8, 149, 12), // "isRewritable"
QT_MOC_LITERAL(9, 162, 8) // "capacity"

    },
    "Solid::Backends::Fake::FakeOpticalDisc\0"
    "availableContent\0Solid::OpticalDisc::ContentTypes\0"
    "\0discType\0Solid::OpticalDisc::DiscType\0"
    "isAppendable\0isBlank\0isRewritable\0"
    "capacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__Fake__FakeOpticalDisc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    3, 0x0a /* Public */,
       4,    0,   45,    3, 0x0a /* Public */,
       6,    0,   46,    3, 0x0a /* Public */,
       7,    0,   47,    3, 0x0a /* Public */,
       8,    0,   48,    3, 0x0a /* Public */,
       9,    0,   49,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 5,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::ULongLong,

       0        // eod
};

void Solid::Backends::Fake::FakeOpticalDisc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeOpticalDisc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { Solid::OpticalDisc::ContentTypes _r = _t->availableContent();
            if (_a[0]) *reinterpret_cast< Solid::OpticalDisc::ContentTypes*>(_a[0]) = std::move(_r); }  break;
        case 1: { Solid::OpticalDisc::DiscType _r = _t->discType();
            if (_a[0]) *reinterpret_cast< Solid::OpticalDisc::DiscType*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->isAppendable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->isBlank();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->isRewritable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { qulonglong _r = _t->capacity();
            if (_a[0]) *reinterpret_cast< qulonglong*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::Fake::FakeOpticalDisc::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeVolume::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__Fake__FakeOpticalDisc.data,
    qt_meta_data_Solid__Backends__Fake__FakeOpticalDisc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::Fake::FakeOpticalDisc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::Fake::FakeOpticalDisc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__Fake__FakeOpticalDisc.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Solid::Ifaces::OpticalDisc"))
        return static_cast< Solid::Ifaces::OpticalDisc*>(this);
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.OpticalDisc/0.1"))
        return static_cast< Solid::Ifaces::OpticalDisc*>(this);
    return FakeVolume::qt_metacast(_clname);
}

int Solid::Backends::Fake::FakeOpticalDisc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeVolume::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
