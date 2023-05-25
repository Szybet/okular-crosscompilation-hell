/****************************************************************************
** Meta object code from reading C++ file 'reviewboardjobs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../frameworks/purpose/src/plugins/reviewboard/reviewboardjobs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reviewboardjobs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReviewBoard__HttpCall_t {
    QByteArrayData data[4];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReviewBoard__HttpCall_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReviewBoard__HttpCall_t qt_meta_stringdata_ReviewBoard__HttpCall = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ReviewBoard::HttpCall"
QT_MOC_LITERAL(1, 22, 10), // "onFinished"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 6) // "result"

    },
    "ReviewBoard::HttpCall\0onFinished\0\0"
    "result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReviewBoard__HttpCall[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QVariant, 0x00095001,

       0        // eod
};

void ReviewBoard::HttpCall::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HttpCall *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onFinished(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HttpCall *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->result(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ReviewBoard::HttpCall::staticMetaObject = { {
    QMetaObject::SuperData::link<KJob::staticMetaObject>(),
    qt_meta_stringdata_ReviewBoard__HttpCall.data,
    qt_meta_data_ReviewBoard__HttpCall,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReviewBoard::HttpCall::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReviewBoard::HttpCall::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReviewBoard__HttpCall.stringdata0))
        return static_cast<void*>(this);
    return KJob::qt_metacast(_clname);
}

int ReviewBoard::HttpCall::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KJob::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_ReviewBoard__ReviewRequest_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReviewBoard__ReviewRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReviewBoard__ReviewRequest_t qt_meta_stringdata_ReviewBoard__ReviewRequest = {
    {
QT_MOC_LITERAL(0, 0, 26) // "ReviewBoard::ReviewRequest"

    },
    "ReviewBoard::ReviewRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReviewBoard__ReviewRequest[] = {

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

void ReviewBoard::ReviewRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ReviewBoard::ReviewRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<KJob::staticMetaObject>(),
    qt_meta_stringdata_ReviewBoard__ReviewRequest.data,
    qt_meta_data_ReviewBoard__ReviewRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReviewBoard::ReviewRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReviewBoard::ReviewRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReviewBoard__ReviewRequest.stringdata0))
        return static_cast<void*>(this);
    return KJob::qt_metacast(_clname);
}

int ReviewBoard::ReviewRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KJob::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ReviewBoard__NewRequest_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReviewBoard__NewRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReviewBoard__NewRequest_t qt_meta_stringdata_ReviewBoard__NewRequest = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ReviewBoard::NewRequest"
QT_MOC_LITERAL(1, 24, 4), // "done"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "ReviewBoard::NewRequest\0done\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReviewBoard__NewRequest[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ReviewBoard::NewRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ReviewBoard::NewRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<ReviewRequest::staticMetaObject>(),
    qt_meta_stringdata_ReviewBoard__NewRequest.data,
    qt_meta_data_ReviewBoard__NewRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReviewBoard::NewRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReviewBoard::NewRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReviewBoard__NewRequest.stringdata0))
        return static_cast<void*>(this);
    return ReviewRequest::qt_metacast(_clname);
}

int ReviewBoard::NewRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReviewRequest::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ReviewBoard__UpdateRequest_t {
    QByteArrayData data[3];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReviewBoard__UpdateRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReviewBoard__UpdateRequest_t qt_meta_stringdata_ReviewBoard__UpdateRequest = {
    {
QT_MOC_LITERAL(0, 0, 26), // "ReviewBoard::UpdateRequest"
QT_MOC_LITERAL(1, 27, 4), // "done"
QT_MOC_LITERAL(2, 32, 0) // ""

    },
    "ReviewBoard::UpdateRequest\0done\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReviewBoard__UpdateRequest[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ReviewBoard::UpdateRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ReviewBoard::UpdateRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<ReviewRequest::staticMetaObject>(),
    qt_meta_stringdata_ReviewBoard__UpdateRequest.data,
    qt_meta_data_ReviewBoard__UpdateRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReviewBoard::UpdateRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReviewBoard::UpdateRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReviewBoard__UpdateRequest.stringdata0))
        return static_cast<void*>(this);
    return ReviewRequest::qt_metacast(_clname);
}

int ReviewBoard::UpdateRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReviewRequest::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ReviewBoard__SubmitPatchRequest_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReviewBoard__SubmitPatchRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReviewBoard__SubmitPatchRequest_t qt_meta_stringdata_ReviewBoard__SubmitPatchRequest = {
    {
QT_MOC_LITERAL(0, 0, 31), // "ReviewBoard::SubmitPatchRequest"
QT_MOC_LITERAL(1, 32, 4), // "done"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "ReviewBoard::SubmitPatchRequest\0done\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReviewBoard__SubmitPatchRequest[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ReviewBoard::SubmitPatchRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SubmitPatchRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ReviewBoard::SubmitPatchRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<ReviewRequest::staticMetaObject>(),
    qt_meta_stringdata_ReviewBoard__SubmitPatchRequest.data,
    qt_meta_data_ReviewBoard__SubmitPatchRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReviewBoard::SubmitPatchRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReviewBoard::SubmitPatchRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReviewBoard__SubmitPatchRequest.stringdata0))
        return static_cast<void*>(this);
    return ReviewRequest::qt_metacast(_clname);
}

int ReviewBoard::SubmitPatchRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReviewRequest::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ReviewBoard__ProjectsListRequest_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReviewBoard__ProjectsListRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReviewBoard__ProjectsListRequest_t qt_meta_stringdata_ReviewBoard__ProjectsListRequest = {
    {
QT_MOC_LITERAL(0, 0, 32), // "ReviewBoard::ProjectsListRequest"
QT_MOC_LITERAL(1, 33, 21), // "requestRepositoryList"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 10), // "startIndex"
QT_MOC_LITERAL(4, 67, 4), // "done"
QT_MOC_LITERAL(5, 72, 5) // "KJob*"

    },
    "ReviewBoard::ProjectsListRequest\0"
    "requestRepositoryList\0\0startIndex\0"
    "done\0KJob*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReviewBoard__ProjectsListRequest[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    4,

       0        // eod
};

void ReviewBoard::ProjectsListRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjectsListRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestRepositoryList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->done((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReviewBoard::ProjectsListRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<KJob::staticMetaObject>(),
    qt_meta_stringdata_ReviewBoard__ProjectsListRequest.data,
    qt_meta_data_ReviewBoard__ProjectsListRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReviewBoard::ProjectsListRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReviewBoard::ProjectsListRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReviewBoard__ProjectsListRequest.stringdata0))
        return static_cast<void*>(this);
    return KJob::qt_metacast(_clname);
}

int ReviewBoard::ProjectsListRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_ReviewBoard__ReviewListRequest_t {
    QByteArrayData data[6];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReviewBoard__ReviewListRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReviewBoard__ReviewListRequest_t qt_meta_stringdata_ReviewBoard__ReviewListRequest = {
    {
QT_MOC_LITERAL(0, 0, 30), // "ReviewBoard::ReviewListRequest"
QT_MOC_LITERAL(1, 31, 17), // "requestReviewList"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 10), // "startIndex"
QT_MOC_LITERAL(4, 61, 4), // "done"
QT_MOC_LITERAL(5, 66, 5) // "KJob*"

    },
    "ReviewBoard::ReviewListRequest\0"
    "requestReviewList\0\0startIndex\0done\0"
    "KJob*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReviewBoard__ReviewListRequest[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    4,

       0        // eod
};

void ReviewBoard::ReviewListRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReviewListRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestReviewList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->done((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReviewBoard::ReviewListRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<KJob::staticMetaObject>(),
    qt_meta_stringdata_ReviewBoard__ReviewListRequest.data,
    qt_meta_data_ReviewBoard__ReviewListRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReviewBoard::ReviewListRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReviewBoard::ReviewListRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReviewBoard__ReviewListRequest.stringdata0))
        return static_cast<void*>(this);
    return KJob::qt_metacast(_clname);
}

int ReviewBoard::ReviewListRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
