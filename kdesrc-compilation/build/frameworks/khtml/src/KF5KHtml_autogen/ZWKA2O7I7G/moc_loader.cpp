/****************************************************************************
** Meta object code from reading C++ file 'loader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/khtml/src/misc/loader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_khtml__CachedImage_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_khtml__CachedImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_khtml__CachedImage_t qt_meta_stringdata_khtml__CachedImage = {
    {
QT_MOC_LITERAL(0, 0, 18) // "khtml::CachedImage"

    },
    "khtml::CachedImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_khtml__CachedImage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void khtml::CachedImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject khtml::CachedImage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_khtml__CachedImage.data,
    qt_meta_data_khtml__CachedImage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *khtml::CachedImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *khtml::CachedImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_khtml__CachedImage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CachedObject"))
        return static_cast< CachedObject*>(this);
    if (!strcmp(_clname, "khtmlImLoad::ImageOwner"))
        return static_cast< khtmlImLoad::ImageOwner*>(this);
    return QObject::qt_metacast(_clname);
}

int khtml::CachedImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_khtml__Loader_t {
    QByteArrayData data[15];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_khtml__Loader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_khtml__Loader_t qt_meta_stringdata_khtml__Loader = {
    {
QT_MOC_LITERAL(0, 0, 13), // "khtml::Loader"
QT_MOC_LITERAL(1, 14, 14), // "requestStarted"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "khtml::DocLoader*"
QT_MOC_LITERAL(4, 48, 2), // "dl"
QT_MOC_LITERAL(5, 51, 20), // "khtml::CachedObject*"
QT_MOC_LITERAL(6, 72, 3), // "obj"
QT_MOC_LITERAL(7, 76, 11), // "requestDone"
QT_MOC_LITERAL(8, 88, 13), // "requestFailed"
QT_MOC_LITERAL(9, 102, 12), // "slotFinished"
QT_MOC_LITERAL(10, 115, 5), // "KJob*"
QT_MOC_LITERAL(11, 121, 12), // "slotMimetype"
QT_MOC_LITERAL(12, 134, 9), // "KIO::Job*"
QT_MOC_LITERAL(13, 144, 1), // "s"
QT_MOC_LITERAL(14, 146, 8) // "slotData"

    },
    "khtml::Loader\0requestStarted\0\0"
    "khtml::DocLoader*\0dl\0khtml::CachedObject*\0"
    "obj\0requestDone\0requestFailed\0"
    "slotFinished\0KJob*\0slotMimetype\0"
    "KIO::Job*\0s\0slotData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_khtml__Loader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       7,    2,   49,    2, 0x06 /* Public */,
       8,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   59,    2, 0x09 /* Protected */,
      11,    2,   62,    2, 0x09 /* Protected */,
      14,    2,   67,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString,    2,   13,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QByteArray,    2,    2,

       0        // eod
};

void khtml::Loader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Loader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestStarted((*reinterpret_cast< khtml::DocLoader*(*)>(_a[1])),(*reinterpret_cast< khtml::CachedObject*(*)>(_a[2]))); break;
        case 1: _t->requestDone((*reinterpret_cast< khtml::DocLoader*(*)>(_a[1])),(*reinterpret_cast< khtml::CachedObject*(*)>(_a[2]))); break;
        case 2: _t->requestFailed((*reinterpret_cast< khtml::DocLoader*(*)>(_a[1])),(*reinterpret_cast< khtml::CachedObject*(*)>(_a[2]))); break;
        case 3: _t->slotFinished((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 4: _t->slotMimetype((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->slotData((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Loader::*)(khtml::DocLoader * , khtml::CachedObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Loader::requestStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Loader::*)(khtml::DocLoader * , khtml::CachedObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Loader::requestDone)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Loader::*)(khtml::DocLoader * , khtml::CachedObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Loader::requestFailed)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject khtml::Loader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_khtml__Loader.data,
    qt_meta_data_khtml__Loader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *khtml::Loader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *khtml::Loader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_khtml__Loader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int khtml::Loader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void khtml::Loader::requestStarted(khtml::DocLoader * _t1, khtml::CachedObject * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void khtml::Loader::requestDone(khtml::DocLoader * _t1, khtml::CachedObject * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void khtml::Loader::requestFailed(khtml::DocLoader * _t1, khtml::CachedObject * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
