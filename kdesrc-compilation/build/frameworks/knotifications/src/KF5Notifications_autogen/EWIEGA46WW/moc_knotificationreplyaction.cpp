/****************************************************************************
** Meta object code from reading C++ file 'knotificationreplyaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/knotifications/src/knotificationreplyaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'knotificationreplyaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KNotificationReplyAction_t {
    QByteArrayData data[18];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KNotificationReplyAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KNotificationReplyAction_t qt_meta_stringdata_KNotificationReplyAction = {
    {
QT_MOC_LITERAL(0, 0, 24), // "KNotificationReplyAction"
QT_MOC_LITERAL(1, 25, 7), // "replied"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "text"
QT_MOC_LITERAL(4, 39, 9), // "activated"
QT_MOC_LITERAL(5, 49, 12), // "labelChanged"
QT_MOC_LITERAL(6, 62, 22), // "placeholderTextChanged"
QT_MOC_LITERAL(7, 85, 23), // "submitButtonTextChanged"
QT_MOC_LITERAL(8, 109, 27), // "submitButtonIconNameChanged"
QT_MOC_LITERAL(9, 137, 23), // "fallbackBehaviorChanged"
QT_MOC_LITERAL(10, 161, 5), // "label"
QT_MOC_LITERAL(11, 167, 15), // "placeholderText"
QT_MOC_LITERAL(12, 183, 16), // "submitButtonText"
QT_MOC_LITERAL(13, 200, 20), // "submitButtonIconName"
QT_MOC_LITERAL(14, 221, 16), // "fallbackBehavior"
QT_MOC_LITERAL(15, 238, 16), // "FallbackBehavior"
QT_MOC_LITERAL(16, 255, 10), // "HideAction"
QT_MOC_LITERAL(17, 266, 16) // "UseRegularAction"

    },
    "KNotificationReplyAction\0replied\0\0"
    "text\0activated\0labelChanged\0"
    "placeholderTextChanged\0submitButtonTextChanged\0"
    "submitButtonIconNameChanged\0"
    "fallbackBehaviorChanged\0label\0"
    "placeholderText\0submitButtonText\0"
    "submitButtonIconName\0fallbackBehavior\0"
    "FallbackBehavior\0HideAction\0"
    "UseRegularAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KNotificationReplyAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   58, // properties
       1,   78, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    0,   52,    2, 0x06 /* Public */,
       5,    0,   53,    2, 0x06 /* Public */,
       6,    0,   54,    2, 0x06 /* Public */,
       7,    0,   55,    2, 0x06 /* Public */,
       8,    0,   56,    2, 0x06 /* Public */,
       9,    0,   57,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::QString, 0x00495103,
      14, 0x80000000 | 15, 0x0049510b,

 // properties: notify_signal_id
       2,
       3,
       4,
       5,
       6,

 // enums: name, alias, flags, count, data
      15,   15, 0x2,    2,   83,

 // enum data: key, value
      16, uint(KNotificationReplyAction::FallbackBehavior::HideAction),
      17, uint(KNotificationReplyAction::FallbackBehavior::UseRegularAction),

       0        // eod
};

void KNotificationReplyAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KNotificationReplyAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->replied((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->activated(); break;
        case 2: _t->labelChanged(); break;
        case 3: _t->placeholderTextChanged(); break;
        case 4: _t->submitButtonTextChanged(); break;
        case 5: _t->submitButtonIconNameChanged(); break;
        case 6: _t->fallbackBehaviorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KNotificationReplyAction::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotificationReplyAction::replied)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KNotificationReplyAction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotificationReplyAction::activated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KNotificationReplyAction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotificationReplyAction::labelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KNotificationReplyAction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotificationReplyAction::placeholderTextChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KNotificationReplyAction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotificationReplyAction::submitButtonTextChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KNotificationReplyAction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotificationReplyAction::submitButtonIconNameChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KNotificationReplyAction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotificationReplyAction::fallbackBehaviorChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KNotificationReplyAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->placeholderText(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->submitButtonText(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->submitButtonIconName(); break;
        case 4: *reinterpret_cast< FallbackBehavior*>(_v) = _t->fallbackBehavior(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KNotificationReplyAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPlaceholderText(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setSubmitButtonText(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSubmitButtonIconName(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setFallbackBehavior(*reinterpret_cast< FallbackBehavior*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KNotificationReplyAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KNotificationReplyAction.data,
    qt_meta_data_KNotificationReplyAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KNotificationReplyAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KNotificationReplyAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KNotificationReplyAction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KNotificationReplyAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KNotificationReplyAction::replied(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KNotificationReplyAction::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KNotificationReplyAction::labelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KNotificationReplyAction::placeholderTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KNotificationReplyAction::submitButtonTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KNotificationReplyAction::submitButtonIconNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KNotificationReplyAction::fallbackBehaviorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
