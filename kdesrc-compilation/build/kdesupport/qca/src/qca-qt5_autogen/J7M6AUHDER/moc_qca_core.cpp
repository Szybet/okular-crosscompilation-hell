/****************************************************************************
** Meta object code from reading C++ file 'qca_core.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../kdesupport/qca/include/QtCrypto/qca_core.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qca_core.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCA__Provider__Context_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__Provider__Context_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__Provider__Context_t qt_meta_stringdata_QCA__Provider__Context = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QCA::Provider::Context"

    },
    "QCA::Provider::Context"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__Provider__Context[] = {

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

void QCA::Provider::Context::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::Provider::Context::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__Provider__Context.data,
    qt_meta_data_QCA__Provider__Context,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::Provider::Context::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::Provider::Context::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__Provider__Context.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::Provider::Context::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCA__BasicContext_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__BasicContext_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__BasicContext_t qt_meta_stringdata_QCA__BasicContext = {
    {
QT_MOC_LITERAL(0, 0, 17) // "QCA::BasicContext"

    },
    "QCA::BasicContext"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__BasicContext[] = {

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

void QCA::BasicContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::BasicContext::staticMetaObject = { {
    QMetaObject::SuperData::link<Provider::Context::staticMetaObject>(),
    qt_meta_stringdata_QCA__BasicContext.data,
    qt_meta_data_QCA__BasicContext,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::BasicContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::BasicContext::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__BasicContext.stringdata0))
        return static_cast<void*>(this);
    return Provider::Context::qt_metacast(_clname);
}

int QCA::BasicContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Provider::Context::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCA__EventHandler_t {
    QByteArrayData data[6];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__EventHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__EventHandler_t qt_meta_stringdata_QCA__EventHandler = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QCA::EventHandler"
QT_MOC_LITERAL(1, 18, 10), // "eventReady"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 2), // "id"
QT_MOC_LITERAL(4, 33, 10), // "QCA::Event"
QT_MOC_LITERAL(5, 44, 7) // "context"

    },
    "QCA::EventHandler\0eventReady\0\0id\0"
    "QCA::Event\0context"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__EventHandler[] = {

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
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

       0        // eod
};

void QCA::EventHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EventHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->eventReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QCA::Event(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EventHandler::*)(int , const QCA::Event & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventHandler::eventReady)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QCA::EventHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__EventHandler.data,
    qt_meta_data_QCA__EventHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::EventHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::EventHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__EventHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::EventHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QCA::EventHandler::eventReady(int _t1, const QCA::Event & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QCA__PasswordAsker_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__PasswordAsker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__PasswordAsker_t qt_meta_stringdata_QCA__PasswordAsker = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QCA::PasswordAsker"
QT_MOC_LITERAL(1, 19, 13), // "responseReady"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "QCA::PasswordAsker\0responseReady\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__PasswordAsker[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QCA::PasswordAsker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PasswordAsker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseReady(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PasswordAsker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PasswordAsker::responseReady)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::PasswordAsker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__PasswordAsker.data,
    qt_meta_data_QCA__PasswordAsker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::PasswordAsker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::PasswordAsker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__PasswordAsker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::PasswordAsker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QCA::PasswordAsker::responseReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QCA__TokenAsker_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__TokenAsker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__TokenAsker_t qt_meta_stringdata_QCA__TokenAsker = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QCA::TokenAsker"
QT_MOC_LITERAL(1, 16, 13), // "responseReady"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "QCA::TokenAsker\0responseReady\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__TokenAsker[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QCA::TokenAsker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TokenAsker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseReady(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TokenAsker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TokenAsker::responseReady)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::TokenAsker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__TokenAsker.data,
    qt_meta_data_QCA__TokenAsker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::TokenAsker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::TokenAsker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__TokenAsker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::TokenAsker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QCA::TokenAsker::responseReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
