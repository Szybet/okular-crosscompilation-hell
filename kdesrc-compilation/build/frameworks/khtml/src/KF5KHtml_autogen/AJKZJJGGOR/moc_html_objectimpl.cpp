/****************************************************************************
** Meta object code from reading C++ file 'html_objectimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/khtml/src/html/html_objectimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'html_objectimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DOM__HTMLPartContainerElementImpl_t {
    QByteArrayData data[3];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DOM__HTMLPartContainerElementImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DOM__HTMLPartContainerElementImpl_t qt_meta_stringdata_DOM__HTMLPartContainerElementImpl = {
    {
QT_MOC_LITERAL(0, 0, 33), // "DOM::HTMLPartContainerElement..."
QT_MOC_LITERAL(1, 34, 17), // "slotEmitLoadEvent"
QT_MOC_LITERAL(2, 52, 0) // ""

    },
    "DOM::HTMLPartContainerElementImpl\0"
    "slotEmitLoadEvent\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DOM__HTMLPartContainerElementImpl[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void DOM::HTMLPartContainerElementImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HTMLPartContainerElementImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotEmitLoadEvent(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DOM::HTMLPartContainerElementImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DOM__HTMLPartContainerElementImpl.data,
    qt_meta_data_DOM__HTMLPartContainerElementImpl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DOM::HTMLPartContainerElementImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DOM::HTMLPartContainerElementImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DOM__HTMLPartContainerElementImpl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "HTMLElementImpl"))
        return static_cast< HTMLElementImpl*>(this);
    return QObject::qt_metacast(_clname);
}

int DOM::HTMLPartContainerElementImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_DOM__HTMLObjectBaseElementImpl_t {
    QByteArrayData data[4];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DOM__HTMLObjectBaseElementImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DOM__HTMLObjectBaseElementImpl_t qt_meta_stringdata_DOM__HTMLObjectBaseElementImpl = {
    {
QT_MOC_LITERAL(0, 0, 30), // "DOM::HTMLObjectBaseElementImpl"
QT_MOC_LITERAL(1, 31, 12), // "slotRerender"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 26) // "slotPartLoadingErrorNotify"

    },
    "DOM::HTMLObjectBaseElementImpl\0"
    "slotRerender\0\0slotPartLoadingErrorNotify"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DOM__HTMLObjectBaseElementImpl[] = {

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
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DOM::HTMLObjectBaseElementImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HTMLObjectBaseElementImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotRerender(); break;
        case 1: _t->slotPartLoadingErrorNotify(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DOM::HTMLObjectBaseElementImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<HTMLPartContainerElementImpl::staticMetaObject>(),
    qt_meta_stringdata_DOM__HTMLObjectBaseElementImpl.data,
    qt_meta_data_DOM__HTMLObjectBaseElementImpl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DOM::HTMLObjectBaseElementImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DOM::HTMLObjectBaseElementImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DOM__HTMLObjectBaseElementImpl.stringdata0))
        return static_cast<void*>(this);
    return HTMLPartContainerElementImpl::qt_metacast(_clname);
}

int DOM::HTMLObjectBaseElementImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HTMLPartContainerElementImpl::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
