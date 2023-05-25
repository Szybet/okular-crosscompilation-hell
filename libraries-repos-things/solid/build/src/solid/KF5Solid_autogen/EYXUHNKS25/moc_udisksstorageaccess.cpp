/****************************************************************************
** Meta object code from reading C++ file 'udisksstorageaccess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/solid/devices/backends/udisks2/udisksstorageaccess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udisksstorageaccess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__UDisks2__StorageAccess_t {
    QByteArrayData data[27];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__UDisks2__StorageAccess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__UDisks2__StorageAccess_t qt_meta_stringdata_Solid__Backends__UDisks2__StorageAccess = {
    {
QT_MOC_LITERAL(0, 0, 39), // "Solid::Backends::UDisks2::Sto..."
QT_MOC_LITERAL(1, 40, 20), // "accessibilityChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 10), // "accessible"
QT_MOC_LITERAL(4, 73, 3), // "udi"
QT_MOC_LITERAL(5, 77, 9), // "setupDone"
QT_MOC_LITERAL(6, 87, 16), // "Solid::ErrorType"
QT_MOC_LITERAL(7, 104, 5), // "error"
QT_MOC_LITERAL(8, 110, 9), // "errorData"
QT_MOC_LITERAL(9, 120, 12), // "teardownDone"
QT_MOC_LITERAL(10, 133, 14), // "setupRequested"
QT_MOC_LITERAL(11, 148, 17), // "teardownRequested"
QT_MOC_LITERAL(12, 166, 15), // "passphraseReply"
QT_MOC_LITERAL(13, 182, 9), // "Q_NOREPLY"
QT_MOC_LITERAL(14, 192, 10), // "passphrase"
QT_MOC_LITERAL(15, 203, 13), // "slotDBusReply"
QT_MOC_LITERAL(16, 217, 12), // "QDBusMessage"
QT_MOC_LITERAL(17, 230, 5), // "reply"
QT_MOC_LITERAL(18, 236, 13), // "slotDBusError"
QT_MOC_LITERAL(19, 250, 10), // "QDBusError"
QT_MOC_LITERAL(20, 261, 18), // "connectDBusSignals"
QT_MOC_LITERAL(21, 280, 18), // "slotSetupRequested"
QT_MOC_LITERAL(22, 299, 13), // "slotSetupDone"
QT_MOC_LITERAL(23, 313, 11), // "errorString"
QT_MOC_LITERAL(24, 325, 21), // "slotTeardownRequested"
QT_MOC_LITERAL(25, 347, 16), // "slotTeardownDone"
QT_MOC_LITERAL(26, 364, 18) // "checkAccessibility"

    },
    "Solid::Backends::UDisks2::StorageAccess\0"
    "accessibilityChanged\0\0accessible\0udi\0"
    "setupDone\0Solid::ErrorType\0error\0"
    "errorData\0teardownDone\0setupRequested\0"
    "teardownRequested\0passphraseReply\0"
    "Q_NOREPLY\0passphrase\0slotDBusReply\0"
    "QDBusMessage\0reply\0slotDBusError\0"
    "QDBusError\0connectDBusSignals\0"
    "slotSetupRequested\0slotSetupDone\0"
    "errorString\0slotTeardownRequested\0"
    "slotTeardownDone\0checkAccessibility"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__UDisks2__StorageAccess[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       5,    3,   89,    2, 0x06 /* Public */,
       9,    3,   96,    2, 0x06 /* Public */,
      10,    1,  103,    2, 0x06 /* Public */,
      11,    1,  106,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  109,   13, 0x4a /* Public | isScriptable */,
      15,    1,  112,    2, 0x08 /* Private */,
      18,    1,  115,    2, 0x08 /* Private */,
      20,    0,  118,    2, 0x08 /* Private */,
      21,    0,  119,    2, 0x08 /* Private */,
      22,    2,  120,    2, 0x08 /* Private */,
      24,    0,  125,    2, 0x08 /* Private */,
      25,    2,  126,    2, 0x08 /* Private */,
      26,    0,  131,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QVariant, QMetaType::QString,    7,    8,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QVariant, QMetaType::QString,    7,    8,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,   23,
    QMetaType::Void,

       0        // eod
};

void Solid::Backends::UDisks2::StorageAccess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
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
        case 5: _t->passphraseReply((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotDBusReply((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 7: _t->slotDBusError((*reinterpret_cast< const QDBusError(*)>(_a[1]))); break;
        case 8: _t->connectDBusSignals(); break;
        case 9: _t->slotSetupRequested(); break;
        case 10: _t->slotSetupDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->slotTeardownRequested(); break;
        case 12: _t->slotTeardownDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->checkAccessibility(); break;
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
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusError >(); break;
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
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::UDisks2::StorageAccess::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceInterface::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__UDisks2__StorageAccess.data,
    qt_meta_data_Solid__Backends__UDisks2__StorageAccess,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::UDisks2::StorageAccess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::UDisks2::StorageAccess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__UDisks2__StorageAccess.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Solid::Ifaces::StorageAccess"))
        return static_cast< Solid::Ifaces::StorageAccess*>(this);
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.StorageAccess/0.1"))
        return static_cast< Solid::Ifaces::StorageAccess*>(this);
    return DeviceInterface::qt_metacast(_clname);
}

int Solid::Backends::UDisks2::StorageAccess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Solid::Backends::UDisks2::StorageAccess::accessibilityChanged(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::Backends::UDisks2::StorageAccess::setupDone(Solid::ErrorType _t1, QVariant _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Solid::Backends::UDisks2::StorageAccess::teardownDone(Solid::ErrorType _t1, QVariant _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Solid::Backends::UDisks2::StorageAccess::setupRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Solid::Backends::UDisks2::StorageAccess::teardownRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
