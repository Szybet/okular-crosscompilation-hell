/****************************************************************************
** Meta object code from reading C++ file 'knotification.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/knotifications/src/knotification.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'knotification.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KNotification_t {
    QByteArrayData data[63];
    char stringdata0[760];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KNotification_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KNotification_t qt_meta_stringdata_KNotification = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KNotification"
QT_MOC_LITERAL(1, 14, 9), // "activated"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 16), // "defaultActivated"
QT_MOC_LITERAL(4, 42, 6), // "action"
QT_MOC_LITERAL(5, 49, 16), // "action1Activated"
QT_MOC_LITERAL(6, 66, 16), // "action2Activated"
QT_MOC_LITERAL(7, 83, 16), // "action3Activated"
QT_MOC_LITERAL(8, 100, 6), // "closed"
QT_MOC_LITERAL(9, 107, 7), // "ignored"
QT_MOC_LITERAL(10, 115, 14), // "eventIdChanged"
QT_MOC_LITERAL(11, 130, 12), // "titleChanged"
QT_MOC_LITERAL(12, 143, 11), // "textChanged"
QT_MOC_LITERAL(13, 155, 15), // "iconNameChanged"
QT_MOC_LITERAL(14, 171, 20), // "defaultActionChanged"
QT_MOC_LITERAL(15, 192, 14), // "actionsChanged"
QT_MOC_LITERAL(16, 207, 12), // "flagsChanged"
QT_MOC_LITERAL(17, 220, 20), // "componentNameChanged"
QT_MOC_LITERAL(18, 241, 11), // "urlsChanged"
QT_MOC_LITERAL(19, 253, 14), // "urgencyChanged"
QT_MOC_LITERAL(20, 268, 17), // "autoDeleteChanged"
QT_MOC_LITERAL(21, 286, 25), // "xdgActivationTokenChanged"
QT_MOC_LITERAL(22, 312, 12), // "hintsChanged"
QT_MOC_LITERAL(23, 325, 8), // "activate"
QT_MOC_LITERAL(24, 334, 5), // "close"
QT_MOC_LITERAL(25, 340, 11), // "raiseWidget"
QT_MOC_LITERAL(26, 352, 3), // "ref"
QT_MOC_LITERAL(27, 356, 5), // "deref"
QT_MOC_LITERAL(28, 362, 9), // "sendEvent"
QT_MOC_LITERAL(29, 372, 6), // "update"
QT_MOC_LITERAL(30, 379, 7), // "setHint"
QT_MOC_LITERAL(31, 387, 4), // "hint"
QT_MOC_LITERAL(32, 392, 5), // "value"
QT_MOC_LITERAL(33, 398, 5), // "hints"
QT_MOC_LITERAL(34, 404, 8), // "setHints"
QT_MOC_LITERAL(35, 413, 7), // "eventId"
QT_MOC_LITERAL(36, 421, 5), // "title"
QT_MOC_LITERAL(37, 427, 4), // "text"
QT_MOC_LITERAL(38, 432, 8), // "iconName"
QT_MOC_LITERAL(39, 441, 13), // "defaultAction"
QT_MOC_LITERAL(40, 455, 7), // "actions"
QT_MOC_LITERAL(41, 463, 5), // "flags"
QT_MOC_LITERAL(42, 469, 17), // "NotificationFlags"
QT_MOC_LITERAL(43, 487, 13), // "componentName"
QT_MOC_LITERAL(44, 501, 4), // "urls"
QT_MOC_LITERAL(45, 506, 11), // "QList<QUrl>"
QT_MOC_LITERAL(46, 518, 7), // "urgency"
QT_MOC_LITERAL(47, 526, 7), // "Urgency"
QT_MOC_LITERAL(48, 534, 10), // "autoDelete"
QT_MOC_LITERAL(49, 545, 18), // "xdgActivationToken"
QT_MOC_LITERAL(50, 564, 16), // "NotificationFlag"
QT_MOC_LITERAL(51, 581, 23), // "RaiseWidgetOnActivation"
QT_MOC_LITERAL(52, 605, 14), // "CloseOnTimeout"
QT_MOC_LITERAL(53, 620, 10), // "Persistent"
QT_MOC_LITERAL(54, 631, 24), // "CloseWhenWidgetActivated"
QT_MOC_LITERAL(55, 656, 9), // "LoopSound"
QT_MOC_LITERAL(56, 666, 12), // "SkipGrouping"
QT_MOC_LITERAL(57, 679, 12), // "DefaultEvent"
QT_MOC_LITERAL(58, 692, 14), // "DefaultUrgency"
QT_MOC_LITERAL(59, 707, 10), // "LowUrgency"
QT_MOC_LITERAL(60, 718, 13), // "NormalUrgency"
QT_MOC_LITERAL(61, 732, 11), // "HighUrgency"
QT_MOC_LITERAL(62, 744, 15) // "CriticalUrgency"

    },
    "KNotification\0activated\0\0defaultActivated\0"
    "action\0action1Activated\0action2Activated\0"
    "action3Activated\0closed\0ignored\0"
    "eventIdChanged\0titleChanged\0textChanged\0"
    "iconNameChanged\0defaultActionChanged\0"
    "actionsChanged\0flagsChanged\0"
    "componentNameChanged\0urlsChanged\0"
    "urgencyChanged\0autoDeleteChanged\0"
    "xdgActivationTokenChanged\0hintsChanged\0"
    "activate\0close\0raiseWidget\0ref\0deref\0"
    "sendEvent\0update\0setHint\0hint\0value\0"
    "hints\0setHints\0eventId\0title\0text\0"
    "iconName\0defaultAction\0actions\0flags\0"
    "NotificationFlags\0componentName\0urls\0"
    "QList<QUrl>\0urgency\0Urgency\0autoDelete\0"
    "xdgActivationToken\0NotificationFlag\0"
    "RaiseWidgetOnActivation\0CloseOnTimeout\0"
    "Persistent\0CloseWhenWidgetActivated\0"
    "LoopSound\0SkipGrouping\0DefaultEvent\0"
    "DefaultUrgency\0LowUrgency\0NormalUrgency\0"
    "HighUrgency\0CriticalUrgency"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KNotification[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
      13,  216, // properties
       2,  268, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  174,    2, 0x06 /* Public */,
       3,    0,  175,    2, 0x06 /* Public */,
       1,    1,  176,    2, 0x06 /* Public */,
       5,    0,  179,    2, 0x06 /* Public */,
       6,    0,  180,    2, 0x06 /* Public */,
       7,    0,  181,    2, 0x06 /* Public */,
       8,    0,  182,    2, 0x06 /* Public */,
       9,    0,  183,    2, 0x06 /* Public */,
      10,    0,  184,    2, 0x06 /* Public */,
      11,    0,  185,    2, 0x06 /* Public */,
      12,    0,  186,    2, 0x06 /* Public */,
      13,    0,  187,    2, 0x06 /* Public */,
      14,    0,  188,    2, 0x06 /* Public */,
      15,    0,  189,    2, 0x06 /* Public */,
      16,    0,  190,    2, 0x06 /* Public */,
      17,    0,  191,    2, 0x06 /* Public */,
      18,    0,  192,    2, 0x06 /* Public */,
      19,    0,  193,    2, 0x06 /* Public */,
      20,    0,  194,    2, 0x06 /* Public */,
      21,    0,  195,    2, 0x06 /* Public */,
      22,    0,  196,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      23,    1,  197,    2, 0x0a /* Public */,
      23,    0,  200,    2, 0x2a /* Public | MethodCloned */,
      24,    0,  201,    2, 0x0a /* Public */,
      25,    0,  202,    2, 0x0a /* Public */,
      26,    0,  203,    2, 0x0a /* Public */,
      27,    0,  204,    2, 0x0a /* Public */,
      28,    0,  205,    2, 0x0a /* Public */,
      29,    0,  206,    2, 0x0a /* Public */,
      30,    2,  207,    2, 0x0a /* Public */,
      33,    0,  212,    2, 0x0a /* Public */,
      34,    1,  213,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   31,   32,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,   33,

 // properties: name, type, flags
      35, QMetaType::QString, 0x00495103,
      36, QMetaType::QString, 0x00495103,
      37, QMetaType::QString, 0x00495103,
      38, QMetaType::QString, 0x00495103,
      39, QMetaType::QString, 0x00495103,
      40, QMetaType::QStringList, 0x00495103,
      41, 0x80000000 | 42, 0x0049510b,
      43, QMetaType::QString, 0x00495103,
      44, 0x80000000 | 45, 0x0049510b,
      46, 0x80000000 | 47, 0x0049510b,
      48, QMetaType::Bool, 0x00495103,
      49, QMetaType::QString, 0x00495001,
      33, QMetaType::QVariantMap, 0x00495103,

 // properties: notify_signal_id
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      20,

 // enums: name, alias, flags, count, data
      42,   50, 0x1,    7,  278,
      47,   47, 0x0,    5,  292,

 // enum data: key, value
      51, uint(KNotification::RaiseWidgetOnActivation),
      52, uint(KNotification::CloseOnTimeout),
      53, uint(KNotification::Persistent),
      54, uint(KNotification::CloseWhenWidgetActivated),
      55, uint(KNotification::LoopSound),
      56, uint(KNotification::SkipGrouping),
      57, uint(KNotification::DefaultEvent),
      58, uint(KNotification::DefaultUrgency),
      59, uint(KNotification::LowUrgency),
      60, uint(KNotification::NormalUrgency),
      61, uint(KNotification::HighUrgency),
      62, uint(KNotification::CriticalUrgency),

       0        // eod
};

void KNotification::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KNotification *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->defaultActivated(); break;
        case 2: _t->activated((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->action1Activated(); break;
        case 4: _t->action2Activated(); break;
        case 5: _t->action3Activated(); break;
        case 6: _t->closed(); break;
        case 7: _t->ignored(); break;
        case 8: _t->eventIdChanged(); break;
        case 9: _t->titleChanged(); break;
        case 10: _t->textChanged(); break;
        case 11: _t->iconNameChanged(); break;
        case 12: _t->defaultActionChanged(); break;
        case 13: _t->actionsChanged(); break;
        case 14: _t->flagsChanged(); break;
        case 15: _t->componentNameChanged(); break;
        case 16: _t->urlsChanged(); break;
        case 17: _t->urgencyChanged(); break;
        case 18: _t->autoDeleteChanged(); break;
        case 19: _t->xdgActivationTokenChanged(); break;
        case 20: _t->hintsChanged(); break;
        case 21: _t->activate((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 22: _t->activate(); break;
        case 23: _t->close(); break;
        case 24: _t->raiseWidget(); break;
        case 25: _t->ref(); break;
        case 26: _t->deref(); break;
        case 27: _t->sendEvent(); break;
        case 28: _t->update(); break;
        case 29: _t->setHint((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 30: { QVariantMap _r = _t->hints();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->setHints((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::activated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::defaultActivated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KNotification::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::activated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::action1Activated)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::action2Activated)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::action3Activated)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::closed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::ignored)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::eventIdChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::titleChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::textChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::iconNameChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::defaultActionChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::actionsChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::flagsChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::componentNameChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::urlsChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::urgencyChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::autoDeleteChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::xdgActivationTokenChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (KNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KNotification::hintsChanged)) {
                *result = 20;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KNotification *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->eventId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->iconName(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->defaultAction(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->actions(); break;
        case 6: *reinterpret_cast<int*>(_v) = QFlag(_t->flags()); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->componentName(); break;
        case 8: *reinterpret_cast< QList<QUrl>*>(_v) = _t->urls(); break;
        case 9: *reinterpret_cast< Urgency*>(_v) = _t->urgency(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isAutoDelete(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->xdgActivationToken(); break;
        case 12: *reinterpret_cast< QVariantMap*>(_v) = _t->hints(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KNotification *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEventId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setIconName(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setDefaultAction(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setActions(*reinterpret_cast< QStringList*>(_v)); break;
        case 6: _t->setFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 7: _t->setComponentName(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setUrls(*reinterpret_cast< QList<QUrl>*>(_v)); break;
        case 9: _t->setUrgency(*reinterpret_cast< Urgency*>(_v)); break;
        case 10: _t->setAutoDelete(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setHints(*reinterpret_cast< QVariantMap*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KNotification::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KNotification.data,
    qt_meta_data_KNotification,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KNotification::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KNotification::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KNotification.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KNotification::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KNotification::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KNotification::defaultActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KNotification::activated(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KNotification::action1Activated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KNotification::action2Activated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KNotification::action3Activated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KNotification::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KNotification::ignored()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KNotification::eventIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KNotification::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void KNotification::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void KNotification::iconNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void KNotification::defaultActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void KNotification::actionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void KNotification::flagsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void KNotification::componentNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void KNotification::urlsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void KNotification::urgencyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void KNotification::autoDeleteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void KNotification::xdgActivationTokenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void KNotification::hintsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
