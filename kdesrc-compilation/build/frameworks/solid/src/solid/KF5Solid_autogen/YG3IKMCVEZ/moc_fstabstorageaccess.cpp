/****************************************************************************
** Meta object code from reading C++ file 'fstabstorageaccess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/backends/fstab/fstabstorageaccess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fstabstorageaccess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__Fstab__FstabStorageAccess_t {
    QByteArrayData data[20];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__Fstab__FstabStorageAccess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__Fstab__FstabStorageAccess_t qt_meta_stringdata_Solid__Backends__Fstab__FstabStorageAccess = {
    {
QT_MOC_LITERAL(0, 0, 42), // "Solid::Backends::Fstab::Fstab..."
QT_MOC_LITERAL(1, 43, 20), // "accessibilityChanged"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 10), // "accessible"
QT_MOC_LITERAL(4, 76, 3), // "udi"
QT_MOC_LITERAL(5, 80, 9), // "setupDone"
QT_MOC_LITERAL(6, 90, 16), // "Solid::ErrorType"
QT_MOC_LITERAL(7, 107, 5), // "error"
QT_MOC_LITERAL(8, 113, 4), // "data"
QT_MOC_LITERAL(9, 118, 12), // "teardownDone"
QT_MOC_LITERAL(10, 131, 14), // "setupRequested"
QT_MOC_LITERAL(11, 146, 17), // "teardownRequested"
QT_MOC_LITERAL(12, 164, 13), // "onMtabChanged"
QT_MOC_LITERAL(13, 178, 6), // "device"
QT_MOC_LITERAL(14, 185, 18), // "connectDBusSignals"
QT_MOC_LITERAL(15, 204, 18), // "slotSetupRequested"
QT_MOC_LITERAL(16, 223, 13), // "slotSetupDone"
QT_MOC_LITERAL(17, 237, 11), // "errorString"
QT_MOC_LITERAL(18, 249, 21), // "slotTeardownRequested"
QT_MOC_LITERAL(19, 271, 16) // "slotTeardownDone"

    },
    "Solid::Backends::Fstab::FstabStorageAccess\0"
    "accessibilityChanged\0\0accessible\0udi\0"
    "setupDone\0Solid::ErrorType\0error\0data\0"
    "teardownDone\0setupRequested\0"
    "teardownRequested\0onMtabChanged\0device\0"
    "connectDBusSignals\0slotSetupRequested\0"
    "slotSetupDone\0errorString\0"
    "slotTeardownRequested\0slotTeardownDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__Fstab__FstabStorageAccess[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       5,    3,   74,    2, 0x06 /* Public */,
       9,    3,   81,    2, 0x06 /* Public */,
      10,    1,   88,    2, 0x06 /* Public */,
      11,    1,   91,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   94,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    2,   99,    2, 0x08 /* Private */,
      18,    0,  104,    2, 0x08 /* Private */,
      19,    2,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QVariant, QMetaType::QString,    7,    8,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QVariant, QMetaType::QString,    7,    8,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,   17,

       0        // eod
};

void Solid::Backends::Fstab::FstabStorageAccess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FstabStorageAccess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accessibilityChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->setupDone((*reinterpret_cast< Solid::ErrorType(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->teardownDone((*reinterpret_cast< Solid::ErrorType(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->setupRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->teardownRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onMtabChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->connectDBusSignals(); break;
        case 7: _t->slotSetupRequested(); break;
        case 8: _t->slotSetupDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->slotTeardownRequested(); break;
        case 10: _t->slotTeardownDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
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
            using _t = void (FstabStorageAccess::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FstabStorageAccess::accessibilityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FstabStorageAccess::*)(Solid::ErrorType , QVariant , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FstabStorageAccess::setupDone)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FstabStorageAccess::*)(Solid::ErrorType , QVariant , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FstabStorageAccess::teardownDone)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FstabStorageAccess::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FstabStorageAccess::setupRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FstabStorageAccess::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FstabStorageAccess::teardownRequested)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::Fstab::FstabStorageAccess::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__Fstab__FstabStorageAccess.data,
    qt_meta_data_Solid__Backends__Fstab__FstabStorageAccess,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::Fstab::FstabStorageAccess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::Fstab::FstabStorageAccess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__Fstab__FstabStorageAccess.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Solid::Ifaces::StorageAccess"))
        return static_cast< Solid::Ifaces::StorageAccess*>(this);
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.StorageAccess/0.1"))
        return static_cast< Solid::Ifaces::StorageAccess*>(this);
    return QObject::qt_metacast(_clname);
}

int Solid::Backends::Fstab::FstabStorageAccess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Solid::Backends::Fstab::FstabStorageAccess::accessibilityChanged(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::Backends::Fstab::FstabStorageAccess::setupDone(Solid::ErrorType _t1, QVariant _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Solid::Backends::Fstab::FstabStorageAccess::teardownDone(Solid::ErrorType _t1, QVariant _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Solid::Backends::Fstab::FstabStorageAccess::setupRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Solid::Backends::Fstab::FstabStorageAccess::teardownRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
