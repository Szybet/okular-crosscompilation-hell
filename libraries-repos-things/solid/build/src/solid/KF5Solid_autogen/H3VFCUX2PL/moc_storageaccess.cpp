/****************************************************************************
** Meta object code from reading C++ file 'storageaccess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/solid/devices/frontend/storageaccess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'storageaccess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__StorageAccess_t {
    QByteArrayData data[15];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__StorageAccess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__StorageAccess_t qt_meta_stringdata_Solid__StorageAccess = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Solid::StorageAccess"
QT_MOC_LITERAL(1, 21, 20), // "accessibilityChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 10), // "accessible"
QT_MOC_LITERAL(4, 54, 3), // "udi"
QT_MOC_LITERAL(5, 58, 9), // "setupDone"
QT_MOC_LITERAL(6, 68, 16), // "Solid::ErrorType"
QT_MOC_LITERAL(7, 85, 5), // "error"
QT_MOC_LITERAL(8, 91, 9), // "errorData"
QT_MOC_LITERAL(9, 101, 12), // "teardownDone"
QT_MOC_LITERAL(10, 114, 14), // "setupRequested"
QT_MOC_LITERAL(11, 129, 17), // "teardownRequested"
QT_MOC_LITERAL(12, 147, 8), // "filePath"
QT_MOC_LITERAL(13, 156, 7), // "ignored"
QT_MOC_LITERAL(14, 164, 9) // "encrypted"

    },
    "Solid::StorageAccess\0accessibilityChanged\0"
    "\0accessible\0udi\0setupDone\0Solid::ErrorType\0"
    "error\0errorData\0teardownDone\0"
    "setupRequested\0teardownRequested\0"
    "filePath\0ignored\0encrypted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__StorageAccess[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    3,   44,    2, 0x06 /* Public */,
       9,    3,   51,    2, 0x06 /* Public */,
      10,    1,   58,    2, 0x06 /* Public */,
      11,    1,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QVariant, QMetaType::QString,    7,    8,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QVariant, QMetaType::QString,    7,    8,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00095001,
      12, QMetaType::QString, 0x00095001,
      13, QMetaType::Bool, 0x00095001,
      14, QMetaType::Bool, 0x00095001,

       0        // eod
};

void Solid::StorageAccess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StorageAccess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accessibilityChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->setupDone((*reinterpret_cast< Solid::ErrorType(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->teardownDone((*reinterpret_cast< Solid::ErrorType(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->setupRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->teardownRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
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
            using _t = void (StorageAccess::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StorageAccess::accessibilityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StorageAccess::*)(Solid::ErrorType , QVariant , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StorageAccess::setupDone)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StorageAccess::*)(Solid::ErrorType , QVariant , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StorageAccess::teardownDone)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StorageAccess::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StorageAccess::setupRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StorageAccess::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StorageAccess::teardownRequested)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StorageAccess *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAccessible(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->filePath(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isIgnored(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isEncrypted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Solid::StorageAccess::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceInterface::staticMetaObject>(),
    qt_meta_stringdata_Solid__StorageAccess.data,
    qt_meta_data_Solid__StorageAccess,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::StorageAccess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::StorageAccess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__StorageAccess.stringdata0))
        return static_cast<void*>(this);
    return DeviceInterface::qt_metacast(_clname);
}

int Solid::StorageAccess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Solid::StorageAccess::accessibilityChanged(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::StorageAccess::setupDone(Solid::ErrorType _t1, QVariant _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Solid::StorageAccess::teardownDone(Solid::ErrorType _t1, QVariant _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Solid::StorageAccess::setupRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Solid::StorageAccess::teardownRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
