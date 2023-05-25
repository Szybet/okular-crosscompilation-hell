/****************************************************************************
** Meta object code from reading C++ file 'render_frames.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/khtml/src/rendering/render_frames.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'render_frames.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_khtml__RenderPart_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_khtml__RenderPart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_khtml__RenderPart_t qt_meta_stringdata_khtml__RenderPart = {
    {
QT_MOC_LITERAL(0, 0, 17), // "khtml::RenderPart"
QT_MOC_LITERAL(1, 18, 15), // "slotViewCleared"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "khtml::RenderPart\0slotViewCleared\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_khtml__RenderPart[] = {

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

void khtml::RenderPart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenderPart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotViewCleared(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject khtml::RenderPart::staticMetaObject = { {
    QMetaObject::SuperData::link<khtml::RenderWidget::staticMetaObject>(),
    qt_meta_stringdata_khtml__RenderPart.data,
    qt_meta_data_khtml__RenderPart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *khtml::RenderPart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *khtml::RenderPart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_khtml__RenderPart.stringdata0))
        return static_cast<void*>(this);
    return khtml::RenderWidget::qt_metacast(_clname);
}

int khtml::RenderPart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = khtml::RenderWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_khtml__RenderFrame_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_khtml__RenderFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_khtml__RenderFrame_t qt_meta_stringdata_khtml__RenderFrame = {
    {
QT_MOC_LITERAL(0, 0, 18), // "khtml::RenderFrame"
QT_MOC_LITERAL(1, 19, 15), // "slotViewCleared"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "khtml::RenderFrame\0slotViewCleared\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_khtml__RenderFrame[] = {

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

void khtml::RenderFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenderFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotViewCleared(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject khtml::RenderFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<khtml::RenderPart::staticMetaObject>(),
    qt_meta_stringdata_khtml__RenderFrame.data,
    qt_meta_data_khtml__RenderFrame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *khtml::RenderFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *khtml::RenderFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_khtml__RenderFrame.stringdata0))
        return static_cast<void*>(this);
    return khtml::RenderPart::qt_metacast(_clname);
}

int khtml::RenderFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = khtml::RenderPart::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_khtml__RenderPartObject_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_khtml__RenderPartObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_khtml__RenderPartObject_t qt_meta_stringdata_khtml__RenderPartObject = {
    {
QT_MOC_LITERAL(0, 0, 23), // "khtml::RenderPartObject"
QT_MOC_LITERAL(1, 24, 15), // "slotViewCleared"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "khtml::RenderPartObject\0slotViewCleared\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_khtml__RenderPartObject[] = {

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

void khtml::RenderPartObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenderPartObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotViewCleared(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject khtml::RenderPartObject::staticMetaObject = { {
    QMetaObject::SuperData::link<khtml::RenderPart::staticMetaObject>(),
    qt_meta_stringdata_khtml__RenderPartObject.data,
    qt_meta_data_khtml__RenderPartObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *khtml::RenderPartObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *khtml::RenderPartObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_khtml__RenderPartObject.stringdata0))
        return static_cast<void*>(this);
    return khtml::RenderPart::qt_metacast(_clname);
}

int khtml::RenderPartObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = khtml::RenderPart::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
