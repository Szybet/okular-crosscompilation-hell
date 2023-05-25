/****************************************************************************
** Meta object code from reading C++ file 'khtml_pagecache.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/khtml/src/khtml_pagecache.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'khtml_pagecache.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KHTMLPageCache_t {
    QByteArrayData data[7];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KHTMLPageCache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KHTMLPageCache_t qt_meta_stringdata_KHTMLPageCache = {
    {
QT_MOC_LITERAL(0, 0, 14), // "KHTMLPageCache"
QT_MOC_LITERAL(1, 15, 8), // "saveData"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 2), // "id"
QT_MOC_LITERAL(4, 28, 12), // "QDataStream*"
QT_MOC_LITERAL(5, 41, 3), // "str"
QT_MOC_LITERAL(6, 45, 8) // "sendData"

    },
    "KHTMLPageCache\0saveData\0\0id\0QDataStream*\0"
    "str\0sendData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KHTMLPageCache[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       6,    0,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Long, 0x80000000 | 4,    3,    5,
    QMetaType::Void,

       0        // eod
};

void KHTMLPageCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KHTMLPageCache *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveData((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QDataStream*(*)>(_a[2]))); break;
        case 1: _t->sendData(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KHTMLPageCache::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KHTMLPageCache.data,
    qt_meta_data_KHTMLPageCache,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KHTMLPageCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KHTMLPageCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KHTMLPageCache.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KHTMLPageCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_KHTMLPageCacheDelivery_t {
    QByteArrayData data[4];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KHTMLPageCacheDelivery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KHTMLPageCacheDelivery_t qt_meta_stringdata_KHTMLPageCacheDelivery = {
    {
QT_MOC_LITERAL(0, 0, 22), // "KHTMLPageCacheDelivery"
QT_MOC_LITERAL(1, 23, 8), // "emitData"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4) // "data"

    },
    "KHTMLPageCacheDelivery\0emitData\0\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KHTMLPageCacheDelivery[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

       0        // eod
};

void KHTMLPageCacheDelivery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KHTMLPageCacheDelivery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emitData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KHTMLPageCacheDelivery::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KHTMLPageCacheDelivery::emitData)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KHTMLPageCacheDelivery::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KHTMLPageCacheDelivery.data,
    qt_meta_data_KHTMLPageCacheDelivery,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KHTMLPageCacheDelivery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KHTMLPageCacheDelivery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KHTMLPageCacheDelivery.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KHTMLPageCacheDelivery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KHTMLPageCacheDelivery::emitData(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
