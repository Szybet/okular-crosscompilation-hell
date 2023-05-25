/****************************************************************************
** Meta object code from reading C++ file 'httpfilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../frameworks/kio/src/kioworkers/http/httpfilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpfilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HTTPFilterBase_t {
    QByteArrayData data[6];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HTTPFilterBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HTTPFilterBase_t qt_meta_stringdata_HTTPFilterBase = {
    {
QT_MOC_LITERAL(0, 0, 14), // "HTTPFilterBase"
QT_MOC_LITERAL(1, 15, 6), // "output"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 1), // "d"
QT_MOC_LITERAL(4, 25, 5), // "error"
QT_MOC_LITERAL(5, 31, 9) // "slotInput"

    },
    "HTTPFilterBase\0output\0\0d\0error\0slotInput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HTTPFilterBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

       0        // eod
};

void HTTPFilterBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HTTPFilterBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->output((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotInput((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HTTPFilterBase::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HTTPFilterBase::output)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HTTPFilterBase::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HTTPFilterBase::error)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HTTPFilterBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_HTTPFilterBase.data,
    qt_meta_data_HTTPFilterBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HTTPFilterBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HTTPFilterBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HTTPFilterBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HTTPFilterBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void HTTPFilterBase::output(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HTTPFilterBase::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_HTTPFilterChain_t {
    QByteArrayData data[4];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HTTPFilterChain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HTTPFilterChain_t qt_meta_stringdata_HTTPFilterChain = {
    {
QT_MOC_LITERAL(0, 0, 15), // "HTTPFilterChain"
QT_MOC_LITERAL(1, 16, 9), // "slotInput"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 1) // "d"

    },
    "HTTPFilterChain\0slotInput\0\0d"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HTTPFilterChain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

       0        // eod
};

void HTTPFilterChain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HTTPFilterChain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotInput((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HTTPFilterChain::staticMetaObject = { {
    QMetaObject::SuperData::link<HTTPFilterBase::staticMetaObject>(),
    qt_meta_stringdata_HTTPFilterChain.data,
    qt_meta_data_HTTPFilterChain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HTTPFilterChain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HTTPFilterChain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HTTPFilterChain.stringdata0))
        return static_cast<void*>(this);
    return HTTPFilterBase::qt_metacast(_clname);
}

int HTTPFilterChain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HTTPFilterBase::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_HTTPFilterMD5_t {
    QByteArrayData data[4];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HTTPFilterMD5_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HTTPFilterMD5_t qt_meta_stringdata_HTTPFilterMD5 = {
    {
QT_MOC_LITERAL(0, 0, 13), // "HTTPFilterMD5"
QT_MOC_LITERAL(1, 14, 9), // "slotInput"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 1) // "d"

    },
    "HTTPFilterMD5\0slotInput\0\0d"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HTTPFilterMD5[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

       0        // eod
};

void HTTPFilterMD5::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HTTPFilterMD5 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotInput((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HTTPFilterMD5::staticMetaObject = { {
    QMetaObject::SuperData::link<HTTPFilterBase::staticMetaObject>(),
    qt_meta_stringdata_HTTPFilterMD5.data,
    qt_meta_data_HTTPFilterMD5,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HTTPFilterMD5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HTTPFilterMD5::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HTTPFilterMD5.stringdata0))
        return static_cast<void*>(this);
    return HTTPFilterBase::qt_metacast(_clname);
}

int HTTPFilterMD5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HTTPFilterBase::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_HTTPFilterGZip_t {
    QByteArrayData data[4];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HTTPFilterGZip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HTTPFilterGZip_t qt_meta_stringdata_HTTPFilterGZip = {
    {
QT_MOC_LITERAL(0, 0, 14), // "HTTPFilterGZip"
QT_MOC_LITERAL(1, 15, 9), // "slotInput"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 1) // "d"

    },
    "HTTPFilterGZip\0slotInput\0\0d"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HTTPFilterGZip[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

       0        // eod
};

void HTTPFilterGZip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HTTPFilterGZip *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotInput((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HTTPFilterGZip::staticMetaObject = { {
    QMetaObject::SuperData::link<HTTPFilterBase::staticMetaObject>(),
    qt_meta_stringdata_HTTPFilterGZip.data,
    qt_meta_data_HTTPFilterGZip,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HTTPFilterGZip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HTTPFilterGZip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HTTPFilterGZip.stringdata0))
        return static_cast<void*>(this);
    return HTTPFilterBase::qt_metacast(_clname);
}

int HTTPFilterGZip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HTTPFilterBase::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_HTTPFilterDeflate_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HTTPFilterDeflate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HTTPFilterDeflate_t qt_meta_stringdata_HTTPFilterDeflate = {
    {
QT_MOC_LITERAL(0, 0, 17) // "HTTPFilterDeflate"

    },
    "HTTPFilterDeflate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HTTPFilterDeflate[] = {

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

void HTTPFilterDeflate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HTTPFilterDeflate::staticMetaObject = { {
    QMetaObject::SuperData::link<HTTPFilterGZip::staticMetaObject>(),
    qt_meta_stringdata_HTTPFilterDeflate.data,
    qt_meta_data_HTTPFilterDeflate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HTTPFilterDeflate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HTTPFilterDeflate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HTTPFilterDeflate.stringdata0))
        return static_cast<void*>(this);
    return HTTPFilterGZip::qt_metacast(_clname);
}

int HTTPFilterDeflate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HTTPFilterGZip::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
