/****************************************************************************
** Meta object code from reading C++ file 'delegaterecycler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kirigami/src/delegaterecycler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'delegaterecycler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DelegateRecyclerAttached_t {
    QByteArrayData data[4];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DelegateRecyclerAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DelegateRecyclerAttached_t qt_meta_stringdata_DelegateRecyclerAttached = {
    {
QT_MOC_LITERAL(0, 0, 24), // "DelegateRecyclerAttached"
QT_MOC_LITERAL(1, 25, 6), // "pooled"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6) // "reused"

    },
    "DelegateRecyclerAttached\0pooled\0\0"
    "reused"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DelegateRecyclerAttached[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DelegateRecyclerAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DelegateRecyclerAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pooled(); break;
        case 1: _t->reused(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DelegateRecyclerAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegateRecyclerAttached::pooled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DelegateRecyclerAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegateRecyclerAttached::reused)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DelegateRecyclerAttached::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DelegateRecyclerAttached.data,
    qt_meta_data_DelegateRecyclerAttached,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DelegateRecyclerAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelegateRecyclerAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DelegateRecyclerAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DelegateRecyclerAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void DelegateRecyclerAttached::pooled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DelegateRecyclerAttached::reused()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_DelegateRecycler_t {
    QByteArrayData data[9];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DelegateRecycler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DelegateRecycler_t qt_meta_stringdata_DelegateRecycler = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DelegateRecycler"
QT_MOC_LITERAL(1, 17, 22), // "sourceComponentChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "syncIndex"
QT_MOC_LITERAL(4, 51, 9), // "syncModel"
QT_MOC_LITERAL(5, 61, 19), // "syncModelProperties"
QT_MOC_LITERAL(6, 81, 13), // "syncModelData"
QT_MOC_LITERAL(7, 95, 15), // "sourceComponent"
QT_MOC_LITERAL(8, 111, 14) // "QQmlComponent*"

    },
    "DelegateRecycler\0sourceComponentChanged\0"
    "\0syncIndex\0syncModel\0syncModelProperties\0"
    "syncModelData\0sourceComponent\0"
    "QQmlComponent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DelegateRecycler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0049510f,

 // properties: notify_signal_id
       0,

       0        // eod
};

void DelegateRecycler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DelegateRecycler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceComponentChanged(); break;
        case 1: _t->syncIndex(); break;
        case 2: _t->syncModel(); break;
        case 3: _t->syncModelProperties(); break;
        case 4: _t->syncModelData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DelegateRecycler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegateRecycler::sourceComponentChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DelegateRecycler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlComponent**>(_v) = _t->sourceComponent(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DelegateRecycler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSourceComponent(*reinterpret_cast< QQmlComponent**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        DelegateRecycler *_t = static_cast<DelegateRecycler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetSourceComponent(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DelegateRecycler::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_DelegateRecycler.data,
    qt_meta_data_DelegateRecycler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DelegateRecycler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelegateRecycler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DelegateRecycler.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int DelegateRecycler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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

// SIGNAL 0
void DelegateRecycler::sourceComponentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
