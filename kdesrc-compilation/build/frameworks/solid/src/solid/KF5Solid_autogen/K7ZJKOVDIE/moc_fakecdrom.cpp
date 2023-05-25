/****************************************************************************
** Meta object code from reading C++ file 'fakecdrom.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/backends/fakehw/fakecdrom.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fakecdrom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__Fake__FakeCdrom_t {
    QByteArrayData data[15];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__Fake__FakeCdrom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__Fake__FakeCdrom_t qt_meta_stringdata_Solid__Backends__Fake__FakeCdrom = {
    {
QT_MOC_LITERAL(0, 0, 32), // "Solid::Backends::Fake::FakeCdrom"
QT_MOC_LITERAL(1, 33, 12), // "ejectPressed"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 3), // "udi"
QT_MOC_LITERAL(4, 51, 9), // "ejectDone"
QT_MOC_LITERAL(5, 61, 16), // "Solid::ErrorType"
QT_MOC_LITERAL(6, 78, 5), // "error"
QT_MOC_LITERAL(7, 84, 9), // "errorData"
QT_MOC_LITERAL(8, 94, 14), // "supportedMedia"
QT_MOC_LITERAL(9, 109, 32), // "Solid::OpticalDrive::MediumTypes"
QT_MOC_LITERAL(10, 142, 9), // "readSpeed"
QT_MOC_LITERAL(11, 152, 10), // "writeSpeed"
QT_MOC_LITERAL(12, 163, 11), // "writeSpeeds"
QT_MOC_LITERAL(13, 175, 10), // "QList<int>"
QT_MOC_LITERAL(14, 186, 5) // "eject"

    },
    "Solid::Backends::Fake::FakeCdrom\0"
    "ejectPressed\0\0udi\0ejectDone\0"
    "Solid::ErrorType\0error\0errorData\0"
    "supportedMedia\0Solid::OpticalDrive::MediumTypes\0"
    "readSpeed\0writeSpeed\0writeSpeeds\0"
    "QList<int>\0eject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__Fake__FakeCdrom[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    3,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   59,    2, 0x0a /* Public */,
      10,    0,   60,    2, 0x0a /* Public */,
      11,    0,   61,    2, 0x0a /* Public */,
      12,    0,   62,    2, 0x0a /* Public */,
      14,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QVariant, QMetaType::QString,    6,    7,    3,

 // slots: parameters
    0x80000000 | 9,
    QMetaType::Int,
    QMetaType::Int,
    0x80000000 | 13,
    QMetaType::Bool,

       0        // eod
};

void Solid::Backends::Fake::FakeCdrom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeCdrom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ejectPressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->ejectDone((*reinterpret_cast< Solid::ErrorType(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: { Solid::OpticalDrive::MediumTypes _r = _t->supportedMedia();
            if (_a[0]) *reinterpret_cast< Solid::OpticalDrive::MediumTypes*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->readSpeed();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->writeSpeed();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { QList<int> _r = _t->writeSpeeds();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->eject();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Solid::ErrorType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FakeCdrom::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FakeCdrom::ejectPressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FakeCdrom::*)(Solid::ErrorType , QVariant , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FakeCdrom::ejectDone)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::Fake::FakeCdrom::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeStorage::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__Fake__FakeCdrom.data,
    qt_meta_data_Solid__Backends__Fake__FakeCdrom,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::Fake::FakeCdrom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::Fake::FakeCdrom::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__Fake__FakeCdrom.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Solid::Ifaces::OpticalDrive"))
        return static_cast< Solid::Ifaces::OpticalDrive*>(this);
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.OpticalDrive/0.1"))
        return static_cast< Solid::Ifaces::OpticalDrive*>(this);
    return FakeStorage::qt_metacast(_clname);
}

int Solid::Backends::Fake::FakeCdrom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeStorage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Solid::Backends::Fake::FakeCdrom::ejectPressed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::Backends::Fake::FakeCdrom::ejectDone(Solid::ErrorType _t1, QVariant _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
