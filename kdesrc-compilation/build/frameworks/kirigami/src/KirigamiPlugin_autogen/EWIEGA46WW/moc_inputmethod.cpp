/****************************************************************************
** Meta object code from reading C++ file 'inputmethod.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kirigami/src/inputmethod.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputmethod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InputMethod_t {
    QByteArrayData data[12];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputMethod_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputMethod_t qt_meta_stringdata_InputMethod = {
    {
QT_MOC_LITERAL(0, 0, 11), // "InputMethod"
QT_MOC_LITERAL(1, 12, 16), // "availableChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "enabledChanged"
QT_MOC_LITERAL(4, 45, 13), // "activeChanged"
QT_MOC_LITERAL(5, 59, 14), // "visibleChanged"
QT_MOC_LITERAL(6, 74, 23), // "willShowOnActiveChanged"
QT_MOC_LITERAL(7, 98, 9), // "available"
QT_MOC_LITERAL(8, 108, 7), // "enabled"
QT_MOC_LITERAL(9, 116, 6), // "active"
QT_MOC_LITERAL(10, 123, 7), // "visible"
QT_MOC_LITERAL(11, 131, 16) // "willShowOnActive"

    },
    "InputMethod\0availableChanged\0\0"
    "enabledChanged\0activeChanged\0"
    "visibleChanged\0willShowOnActiveChanged\0"
    "available\0enabled\0active\0visible\0"
    "willShowOnActive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputMethod[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495001,
       8, QMetaType::Bool, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
      10, QMetaType::Bool, 0x00495001,
      11, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void InputMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InputMethod *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->availableChanged(); break;
        case 1: _t->enabledChanged(); break;
        case 2: _t->activeChanged(); break;
        case 3: _t->visibleChanged(); break;
        case 4: _t->willShowOnActiveChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InputMethod::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::availableChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InputMethod::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::enabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InputMethod::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::activeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InputMethod::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::visibleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (InputMethod::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::willShowOnActiveChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InputMethod *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->available(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->willShowOnActive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<InputMethod *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject InputMethod::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_InputMethod.data,
    qt_meta_data_InputMethod,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InputMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputMethod.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InputMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void InputMethod::availableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void InputMethod::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void InputMethod::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void InputMethod::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void InputMethod::willShowOnActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
