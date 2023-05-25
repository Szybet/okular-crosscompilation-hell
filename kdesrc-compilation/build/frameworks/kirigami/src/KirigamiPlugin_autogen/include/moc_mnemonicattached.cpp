/****************************************************************************
** Meta object code from reading C++ file 'mnemonicattached.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kirigami/src/mnemonicattached.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mnemonicattached.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MnemonicAttached_t {
    QByteArrayData data[23];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MnemonicAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MnemonicAttached_t qt_meta_stringdata_MnemonicAttached = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MnemonicAttached"
QT_MOC_LITERAL(1, 17, 12), // "labelChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "enabledChanged"
QT_MOC_LITERAL(4, 46, 15), // "sequenceChanged"
QT_MOC_LITERAL(5, 62, 20), // "richTextLabelChanged"
QT_MOC_LITERAL(6, 83, 20), // "mnemonicLabelChanged"
QT_MOC_LITERAL(7, 104, 18), // "controlTypeChanged"
QT_MOC_LITERAL(8, 123, 13), // "activeChanged"
QT_MOC_LITERAL(9, 137, 5), // "label"
QT_MOC_LITERAL(10, 143, 13), // "richTextLabel"
QT_MOC_LITERAL(11, 157, 13), // "mnemonicLabel"
QT_MOC_LITERAL(12, 171, 7), // "enabled"
QT_MOC_LITERAL(13, 179, 11), // "controlType"
QT_MOC_LITERAL(14, 191, 29), // "MnemonicAttached::ControlType"
QT_MOC_LITERAL(15, 221, 8), // "sequence"
QT_MOC_LITERAL(16, 230, 6), // "active"
QT_MOC_LITERAL(17, 237, 11), // "ControlType"
QT_MOC_LITERAL(18, 249, 13), // "ActionElement"
QT_MOC_LITERAL(19, 263, 12), // "DialogButton"
QT_MOC_LITERAL(20, 276, 8), // "MenuItem"
QT_MOC_LITERAL(21, 285, 9), // "FormLabel"
QT_MOC_LITERAL(22, 295, 16) // "SecondaryControl"

    },
    "MnemonicAttached\0labelChanged\0\0"
    "enabledChanged\0sequenceChanged\0"
    "richTextLabelChanged\0mnemonicLabelChanged\0"
    "controlTypeChanged\0activeChanged\0label\0"
    "richTextLabel\0mnemonicLabel\0enabled\0"
    "controlType\0MnemonicAttached::ControlType\0"
    "sequence\0active\0ControlType\0ActionElement\0"
    "DialogButton\0MenuItem\0FormLabel\0"
    "SecondaryControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MnemonicAttached[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   56, // properties
       1,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::QString, 0x00495001,
      11, QMetaType::QString, 0x00495001,
      12, QMetaType::Bool, 0x00495103,
      13, 0x80000000 | 14, 0x0049510b,
      15, QMetaType::QKeySequence, 0x00495001,
      16, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       3,
       4,
       1,
       5,
       2,
       6,

 // enums: name, alias, flags, count, data
      17,   17, 0x0,    5,   89,

 // enum data: key, value
      18, uint(MnemonicAttached::ActionElement),
      19, uint(MnemonicAttached::DialogButton),
      20, uint(MnemonicAttached::MenuItem),
      21, uint(MnemonicAttached::FormLabel),
      22, uint(MnemonicAttached::SecondaryControl),

       0        // eod
};

void MnemonicAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MnemonicAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->labelChanged(); break;
        case 1: _t->enabledChanged(); break;
        case 2: _t->sequenceChanged(); break;
        case 3: _t->richTextLabelChanged(); break;
        case 4: _t->mnemonicLabelChanged(); break;
        case 5: _t->controlTypeChanged(); break;
        case 6: _t->activeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MnemonicAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MnemonicAttached::labelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MnemonicAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MnemonicAttached::enabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MnemonicAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MnemonicAttached::sequenceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MnemonicAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MnemonicAttached::richTextLabelChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MnemonicAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MnemonicAttached::mnemonicLabelChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MnemonicAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MnemonicAttached::controlTypeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MnemonicAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MnemonicAttached::activeChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MnemonicAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->richTextLabel(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->mnemonicLabel(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 4: *reinterpret_cast< MnemonicAttached::ControlType*>(_v) = _t->controlType(); break;
        case 5: *reinterpret_cast< QKeySequence*>(_v) = _t->sequence(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MnemonicAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setControlType(*reinterpret_cast< MnemonicAttached::ControlType*>(_v)); break;
        case 6: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MnemonicAttached::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MnemonicAttached.data,
    qt_meta_data_MnemonicAttached,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MnemonicAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MnemonicAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MnemonicAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MnemonicAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MnemonicAttached::labelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MnemonicAttached::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MnemonicAttached::sequenceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MnemonicAttached::richTextLabelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MnemonicAttached::mnemonicLabelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MnemonicAttached::controlTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MnemonicAttached::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
