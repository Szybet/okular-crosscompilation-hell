/****************************************************************************
** Meta object code from reading C++ file 'keysequencerecorder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kguiaddons/src/recorder/keysequencerecorder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keysequencerecorder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KeySequenceRecorder_t {
    QByteArrayData data[19];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeySequenceRecorder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeySequenceRecorder_t qt_meta_stringdata_KeySequenceRecorder = {
    {
QT_MOC_LITERAL(0, 0, 19), // "KeySequenceRecorder"
QT_MOC_LITERAL(1, 20, 14), // "gotKeySequence"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "keySequence"
QT_MOC_LITERAL(4, 48, 16), // "recordingChanged"
QT_MOC_LITERAL(5, 65, 13), // "windowChanged"
QT_MOC_LITERAL(6, 79, 25), // "currentKeySequenceChanged"
QT_MOC_LITERAL(7, 105, 31), // "multiKeyShortcutsAllowedChanged"
QT_MOC_LITERAL(8, 137, 26), // "modifierlessAllowedChanged"
QT_MOC_LITERAL(9, 164, 26), // "modifierOnlyAllowedChanged"
QT_MOC_LITERAL(10, 191, 15), // "cancelRecording"
QT_MOC_LITERAL(11, 207, 14), // "startRecording"
QT_MOC_LITERAL(12, 222, 11), // "isRecording"
QT_MOC_LITERAL(13, 234, 18), // "currentKeySequence"
QT_MOC_LITERAL(14, 253, 6), // "window"
QT_MOC_LITERAL(15, 260, 8), // "QWindow*"
QT_MOC_LITERAL(16, 269, 19), // "modifierlessAllowed"
QT_MOC_LITERAL(17, 289, 24), // "multiKeyShortcutsAllowed"
QT_MOC_LITERAL(18, 314, 19) // "modifierOnlyAllowed"

    },
    "KeySequenceRecorder\0gotKeySequence\0\0"
    "keySequence\0recordingChanged\0windowChanged\0"
    "currentKeySequenceChanged\0"
    "multiKeyShortcutsAllowedChanged\0"
    "modifierlessAllowedChanged\0"
    "modifierOnlyAllowedChanged\0cancelRecording\0"
    "startRecording\0isRecording\0"
    "currentKeySequence\0window\0QWindow*\0"
    "modifierlessAllowed\0multiKeyShortcutsAllowed\0"
    "modifierOnlyAllowed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeySequenceRecorder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       6,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    0,   63,    2, 0x06 /* Public */,
       6,    0,   64,    2, 0x06 /* Public */,
       7,    0,   65,    2, 0x06 /* Public */,
       8,    0,   66,    2, 0x06 /* Public */,
       9,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   68,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    0,   69,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QKeySequence,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00495001,
      13, QMetaType::QKeySequence, 0x00495103,
      14, 0x80000000 | 15, 0x0049510b,
      16, QMetaType::Bool, 0x00495103,
      17, QMetaType::Bool, 0x00495103,
      18, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,
       3,
       2,
       5,
       4,
       6,

       0        // eod
};

void KeySequenceRecorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KeySequenceRecorder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotKeySequence((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 1: _t->recordingChanged(); break;
        case 2: _t->windowChanged(); break;
        case 3: _t->currentKeySequenceChanged(); break;
        case 4: _t->multiKeyShortcutsAllowedChanged(); break;
        case 5: _t->modifierlessAllowedChanged(); break;
        case 6: _t->modifierOnlyAllowedChanged(); break;
        case 7: _t->cancelRecording(); break;
        case 8: _t->startRecording(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KeySequenceRecorder::*)(const QKeySequence & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeySequenceRecorder::gotKeySequence)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KeySequenceRecorder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeySequenceRecorder::recordingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KeySequenceRecorder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeySequenceRecorder::windowChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KeySequenceRecorder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeySequenceRecorder::currentKeySequenceChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KeySequenceRecorder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeySequenceRecorder::multiKeyShortcutsAllowedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KeySequenceRecorder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeySequenceRecorder::modifierlessAllowedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KeySequenceRecorder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeySequenceRecorder::modifierOnlyAllowedChanged)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWindow* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KeySequenceRecorder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isRecording(); break;
        case 1: *reinterpret_cast< QKeySequence*>(_v) = _t->currentKeySequence(); break;
        case 2: *reinterpret_cast< QWindow**>(_v) = _t->window(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->modifierlessAllowed(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->multiKeyShortcutsAllowed(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->modifierOnlyAllowed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KeySequenceRecorder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCurrentKeySequence(*reinterpret_cast< QKeySequence*>(_v)); break;
        case 2: _t->setWindow(*reinterpret_cast< QWindow**>(_v)); break;
        case 3: _t->setModifierlessAllowed(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setMultiKeyShortcutsAllowed(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setModifierOnlyAllowed(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KeySequenceRecorder::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KeySequenceRecorder.data,
    qt_meta_data_KeySequenceRecorder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KeySequenceRecorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeySequenceRecorder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KeySequenceRecorder.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KeySequenceRecorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KeySequenceRecorder::gotKeySequence(const QKeySequence & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KeySequenceRecorder::recordingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KeySequenceRecorder::windowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KeySequenceRecorder::currentKeySequenceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KeySequenceRecorder::multiKeyShortcutsAllowedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KeySequenceRecorder::modifierlessAllowedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KeySequenceRecorder::modifierOnlyAllowedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
