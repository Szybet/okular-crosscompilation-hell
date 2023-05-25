/****************************************************************************
** Meta object code from reading C++ file 'fakestorageaccess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/backends/fakehw/fakestorageaccess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fakestorageaccess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__Fake__FakeStorageAccess_t {
    QByteArrayData data[17];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__Fake__FakeStorageAccess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__Fake__FakeStorageAccess_t qt_meta_stringdata_Solid__Backends__Fake__FakeStorageAccess = {
    {
QT_MOC_LITERAL(0, 0, 40), // "Solid::Backends::Fake::FakeSt..."
QT_MOC_LITERAL(1, 41, 20), // "accessibilityChanged"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 10), // "accessible"
QT_MOC_LITERAL(4, 74, 3), // "udi"
QT_MOC_LITERAL(5, 78, 9), // "setupDone"
QT_MOC_LITERAL(6, 88, 16), // "Solid::ErrorType"
QT_MOC_LITERAL(7, 105, 5), // "error"
QT_MOC_LITERAL(8, 111, 9), // "errorData"
QT_MOC_LITERAL(9, 121, 12), // "teardownDone"
QT_MOC_LITERAL(10, 134, 14), // "setupRequested"
QT_MOC_LITERAL(11, 149, 17), // "teardownRequested"
QT_MOC_LITERAL(12, 167, 5), // "setup"
QT_MOC_LITERAL(13, 173, 8), // "teardown"
QT_MOC_LITERAL(14, 182, 17), // "onPropertyChanged"
QT_MOC_LITERAL(15, 200, 17), // "QMap<QString,int>"
QT_MOC_LITERAL(16, 218, 7) // "changes"

    },
    "Solid::Backends::Fake::FakeStorageAccess\0"
    "accessibilityChanged\0\0accessible\0udi\0"
    "setupDone\0Solid::ErrorType\0error\0"
    "errorData\0teardownDone\0setupRequested\0"
    "teardownRequested\0setup\0teardown\0"
    "onPropertyChanged\0QMap<QString,int>\0"
    "changes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__Fake__FakeStorageAccess[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    3,   59,    2, 0x06 /* Public */,
       9,    3,   66,    2, 0x06 /* Public */,
      10,    1,   73,    2, 0x06 /* Public */,
      11,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   79,    2, 0x0a /* Public */,
      13,    0,   80,    2, 0x0a /* Public */,
      14,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QVariant, QMetaType::QString,    7,    8,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QVariant, QMetaType::QString,    7,    8,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void Solid::Backends::Fake::FakeStorageAccess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeStorageAccess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accessibilityChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->setupDone((*reinterpret_cast< Solid::ErrorType(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->teardownDone((*reinterpret_cast< Solid::ErrorType(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->setupRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->teardownRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { bool _r = _t->setup();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->teardown();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->onPropertyChanged((*reinterpret_cast< const QMap<QString,int>(*)>(_a[1]))); break;
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
        case 2:
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
            using _t = void (FakeStorageAccess::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FakeStorageAccess::accessibilityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FakeStorageAccess::*)(Solid::ErrorType , QVariant , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FakeStorageAccess::setupDone)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FakeStorageAccess::*)(Solid::ErrorType , QVariant , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FakeStorageAccess::teardownDone)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FakeStorageAccess::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FakeStorageAccess::setupRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FakeStorageAccess::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FakeStorageAccess::teardownRequested)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::Fake::FakeStorageAccess::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeDeviceInterface::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__Fake__FakeStorageAccess.data,
    qt_meta_data_Solid__Backends__Fake__FakeStorageAccess,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::Fake::FakeStorageAccess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::Fake::FakeStorageAccess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__Fake__FakeStorageAccess.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Solid::Ifaces::StorageAccess"))
        return static_cast< Solid::Ifaces::StorageAccess*>(this);
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.StorageAccess/0.1"))
        return static_cast< Solid::Ifaces::StorageAccess*>(this);
    return FakeDeviceInterface::qt_metacast(_clname);
}

int Solid::Backends::Fake::FakeStorageAccess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeDeviceInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Solid::Backends::Fake::FakeStorageAccess::accessibilityChanged(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::Backends::Fake::FakeStorageAccess::setupDone(Solid::ErrorType _t1, QVariant _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Solid::Backends::Fake::FakeStorageAccess::teardownDone(Solid::ErrorType _t1, QVariant _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Solid::Backends::Fake::FakeStorageAccess::setupRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Solid::Backends::Fake::FakeStorageAccess::teardownRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
