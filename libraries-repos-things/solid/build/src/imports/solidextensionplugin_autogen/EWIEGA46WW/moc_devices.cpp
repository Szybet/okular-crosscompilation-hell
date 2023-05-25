/****************************************************************************
** Meta object code from reading C++ file 'devices.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/imports/devices.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devices.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Devices_t {
    QByteArrayData data[19];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Devices_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Devices_t qt_meta_stringdata_Solid__Devices = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Solid::Devices"
QT_MOC_LITERAL(1, 15, 11), // "deviceAdded"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "udi"
QT_MOC_LITERAL(4, 32, 13), // "deviceRemoved"
QT_MOC_LITERAL(5, 46, 12), // "countChanged"
QT_MOC_LITERAL(6, 59, 5), // "count"
QT_MOC_LITERAL(7, 65, 14), // "devicesChanged"
QT_MOC_LITERAL(8, 80, 7), // "devices"
QT_MOC_LITERAL(9, 88, 12), // "queryChanged"
QT_MOC_LITERAL(10, 101, 5), // "query"
QT_MOC_LITERAL(11, 107, 12), // "emptyChanged"
QT_MOC_LITERAL(12, 120, 5), // "empty"
QT_MOC_LITERAL(13, 126, 6), // "device"
QT_MOC_LITERAL(14, 133, 4), // "type"
QT_MOC_LITERAL(15, 138, 9), // "addDevice"
QT_MOC_LITERAL(16, 148, 12), // "removeDevice"
QT_MOC_LITERAL(17, 161, 10), // "initialize"
QT_MOC_LITERAL(18, 172, 5) // "reset"

    },
    "Solid::Devices\0deviceAdded\0\0udi\0"
    "deviceRemoved\0countChanged\0count\0"
    "devicesChanged\0devices\0queryChanged\0"
    "query\0emptyChanged\0empty\0device\0type\0"
    "addDevice\0removeDevice\0initialize\0"
    "reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Devices[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       5,    1,   75,    2, 0x06 /* Public */,
       7,    1,   78,    2, 0x06 /* Public */,
       9,    1,   81,    2, 0x06 /* Public */,
      11,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    2,   87,    2, 0x0a /* Public */,
      15,    1,   92,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,
      17,    0,   98,    2, 0x08 /* Private */,
      18,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,   12,

 // slots: parameters
    QMetaType::QObjectStar, QMetaType::QString, QMetaType::QString,    3,   14,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495103,
       6, QMetaType::Int, 0x00495001,
      12, QMetaType::Bool, 0x00495001,
       8, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       4,
       2,
       5,
       3,

       0        // eod
};

void Solid::Devices::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Devices *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->deviceRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->countChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->devicesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->queryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->emptyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { QObject* _r = _t->device((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 7: _t->addDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->removeDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->initialize(); break;
        case 10: _t->reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Devices::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Devices::deviceAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Devices::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Devices::deviceRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Devices::*)(int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Devices::countChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Devices::*)(const QStringList & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Devices::devicesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Devices::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Devices::queryChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Devices::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Devices::emptyChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Devices *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->query(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isEmpty(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->devices(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Devices *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setQuery(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Solid::Devices::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Solid__Devices.data,
    qt_meta_data_Solid__Devices,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Devices::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Devices::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Devices.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Solid::Devices::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
void Solid::Devices::deviceAdded(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Solid::Devices *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::Devices::deviceRemoved(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Solid::Devices *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Solid::Devices::countChanged(int _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Solid::Devices *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Solid::Devices::devicesChanged(const QStringList & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Solid::Devices *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Solid::Devices::queryChanged(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Solid::Devices *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Solid::Devices::emptyChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Solid::Devices *>(this), &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
