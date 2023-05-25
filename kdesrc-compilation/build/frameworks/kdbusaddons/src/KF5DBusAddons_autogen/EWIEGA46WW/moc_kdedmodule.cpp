/****************************************************************************
** Meta object code from reading C++ file 'kdedmodule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kdbusaddons/src/kdedmodule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdedmodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDEDModule_t {
    QByteArrayData data[12];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDEDModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDEDModule_t qt_meta_stringdata_KDEDModule = {
    {
QT_MOC_LITERAL(0, 0, 10), // "KDEDModule"
QT_MOC_LITERAL(1, 11, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 27, 18), // "org.kde.KDEDModule"
QT_MOC_LITERAL(3, 46, 13), // "moduleDeleted"
QT_MOC_LITERAL(4, 60, 0), // ""
QT_MOC_LITERAL(5, 61, 11), // "KDEDModule*"
QT_MOC_LITERAL(6, 73, 16), // "windowRegistered"
QT_MOC_LITERAL(7, 90, 8), // "windowId"
QT_MOC_LITERAL(8, 99, 18), // "windowUnregistered"
QT_MOC_LITERAL(9, 118, 16), // "moduleRegistered"
QT_MOC_LITERAL(10, 135, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(11, 151, 4) // "path"

    },
    "KDEDModule\0D-Bus Interface\0"
    "org.kde.KDEDModule\0moduleDeleted\0\0"
    "KDEDModule*\0windowRegistered\0windowId\0"
    "windowUnregistered\0moduleRegistered\0"
    "QDBusObjectPath\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDEDModule[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   36,    4, 0x06 /* Public */,
       6,    1,   39,    4, 0x06 /* Public */,
       8,    1,   42,    4, 0x06 /* Public */,
       9,    1,   45,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void KDEDModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KDEDModule *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moduleDeleted((*reinterpret_cast< KDEDModule*(*)>(_a[1]))); break;
        case 1: _t->windowRegistered((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 2: _t->windowUnregistered((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 3: _t->moduleRegistered((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDEDModule* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KDEDModule::*)(KDEDModule * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDEDModule::moduleDeleted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KDEDModule::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDEDModule::windowRegistered)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KDEDModule::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDEDModule::windowUnregistered)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KDEDModule::*)(const QDBusObjectPath & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDEDModule::moduleRegistered)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDEDModule::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KDEDModule.data,
    qt_meta_data_KDEDModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDEDModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDEDModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDEDModule.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KDEDModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KDEDModule::moduleDeleted(KDEDModule * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDEDModule::windowRegistered(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KDEDModule::windowUnregistered(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KDEDModule::moduleRegistered(const QDBusObjectPath & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
