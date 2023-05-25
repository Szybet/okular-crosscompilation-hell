/****************************************************************************
** Meta object code from reading C++ file 'toolbarlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kirigami/src/toolbarlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolbarlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ToolBarLayoutAttached_t {
    QByteArrayData data[2];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolBarLayoutAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolBarLayoutAttached_t qt_meta_stringdata_ToolBarLayoutAttached = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ToolBarLayoutAttached"
QT_MOC_LITERAL(1, 22, 6) // "action"

    },
    "ToolBarLayoutAttached\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolBarLayoutAttached[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QObjectStar, 0x00095401,

       0        // eod
};

void ToolBarLayoutAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ToolBarLayoutAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->action(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToolBarLayoutAttached::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ToolBarLayoutAttached.data,
    qt_meta_data_ToolBarLayoutAttached,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToolBarLayoutAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolBarLayoutAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolBarLayoutAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ToolBarLayoutAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_ToolBarLayout_t {
    QByteArrayData data[34];
    char stringdata0[505];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolBarLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolBarLayout_t qt_meta_stringdata_ToolBarLayout = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ToolBarLayout"
QT_MOC_LITERAL(1, 14, 14), // "actionsChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "hiddenActionsChanged"
QT_MOC_LITERAL(4, 51, 19), // "fullDelegateChanged"
QT_MOC_LITERAL(5, 71, 19), // "iconDelegateChanged"
QT_MOC_LITERAL(6, 91, 17), // "moreButtonChanged"
QT_MOC_LITERAL(7, 109, 14), // "spacingChanged"
QT_MOC_LITERAL(8, 124, 16), // "alignmentChanged"
QT_MOC_LITERAL(9, 141, 19), // "visibleWidthChanged"
QT_MOC_LITERAL(10, 161, 19), // "minimumWidthChanged"
QT_MOC_LITERAL(11, 181, 22), // "layoutDirectionChanged"
QT_MOC_LITERAL(12, 204, 17), // "heightModeChanged"
QT_MOC_LITERAL(13, 222, 8), // "relayout"
QT_MOC_LITERAL(14, 231, 7), // "actions"
QT_MOC_LITERAL(15, 239, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(16, 265, 13), // "hiddenActions"
QT_MOC_LITERAL(17, 279, 15), // "QList<QObject*>"
QT_MOC_LITERAL(18, 295, 12), // "fullDelegate"
QT_MOC_LITERAL(19, 308, 14), // "QQmlComponent*"
QT_MOC_LITERAL(20, 323, 12), // "iconDelegate"
QT_MOC_LITERAL(21, 336, 10), // "moreButton"
QT_MOC_LITERAL(22, 347, 7), // "spacing"
QT_MOC_LITERAL(23, 355, 9), // "alignment"
QT_MOC_LITERAL(24, 365, 13), // "Qt::Alignment"
QT_MOC_LITERAL(25, 379, 12), // "visibleWidth"
QT_MOC_LITERAL(26, 392, 12), // "minimumWidth"
QT_MOC_LITERAL(27, 405, 15), // "layoutDirection"
QT_MOC_LITERAL(28, 421, 19), // "Qt::LayoutDirection"
QT_MOC_LITERAL(29, 441, 10), // "heightMode"
QT_MOC_LITERAL(30, 452, 10), // "HeightMode"
QT_MOC_LITERAL(31, 463, 12), // "AlwaysCenter"
QT_MOC_LITERAL(32, 476, 10), // "AlwaysFill"
QT_MOC_LITERAL(33, 487, 17) // "ConstrainIfLarger"

    },
    "ToolBarLayout\0actionsChanged\0\0"
    "hiddenActionsChanged\0fullDelegateChanged\0"
    "iconDelegateChanged\0moreButtonChanged\0"
    "spacingChanged\0alignmentChanged\0"
    "visibleWidthChanged\0minimumWidthChanged\0"
    "layoutDirectionChanged\0heightModeChanged\0"
    "relayout\0actions\0QQmlListProperty<QObject>\0"
    "hiddenActions\0QList<QObject*>\0"
    "fullDelegate\0QQmlComponent*\0iconDelegate\0"
    "moreButton\0spacing\0alignment\0Qt::Alignment\0"
    "visibleWidth\0minimumWidth\0layoutDirection\0"
    "Qt::LayoutDirection\0heightMode\0"
    "HeightMode\0AlwaysCenter\0AlwaysFill\0"
    "ConstrainIfLarger"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolBarLayout[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      11,   86, // properties
       1,  130, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,
       8,    0,   80,    2, 0x06 /* Public */,
       9,    0,   81,    2, 0x06 /* Public */,
      10,    0,   82,    2, 0x06 /* Public */,
      11,    0,   83,    2, 0x06 /* Public */,
      12,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   85,    2, 0x0a /* Public */,

 // signals: parameters
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
    QMetaType::Void,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x00495009,
      16, 0x80000000 | 17, 0x00495009,
      18, 0x80000000 | 19, 0x0049510b,
      20, 0x80000000 | 19, 0x0049510b,
      21, 0x80000000 | 19, 0x0049510b,
      22, QMetaType::QReal, 0x00495103,
      23, 0x80000000 | 24, 0x0049510b,
      25, QMetaType::QReal, 0x00495001,
      26, QMetaType::QReal, 0x00495001,
      27, 0x80000000 | 28, 0x0049510b,
      29, 0x80000000 | 30, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,

 // enums: name, alias, flags, count, data
      30,   30, 0x0,    3,  135,

 // enum data: key, value
      31, uint(ToolBarLayout::AlwaysCenter),
      32, uint(ToolBarLayout::AlwaysFill),
      33, uint(ToolBarLayout::ConstrainIfLarger),

       0        // eod
};

void ToolBarLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToolBarLayout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionsChanged(); break;
        case 1: _t->hiddenActionsChanged(); break;
        case 2: _t->fullDelegateChanged(); break;
        case 3: _t->iconDelegateChanged(); break;
        case 4: _t->moreButtonChanged(); break;
        case 5: _t->spacingChanged(); break;
        case 6: _t->alignmentChanged(); break;
        case 7: _t->visibleWidthChanged(); break;
        case 8: _t->minimumWidthChanged(); break;
        case 9: _t->layoutDirectionChanged(); break;
        case 10: _t->heightModeChanged(); break;
        case 11: _t->relayout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::actionsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::hiddenActionsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::fullDelegateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::iconDelegateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::moreButtonChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::spacingChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::alignmentChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::visibleWidthChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::minimumWidthChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::layoutDirectionChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::heightModeChanged)) {
                *result = 10;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        case 4:
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ToolBarLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->actionsProperty(); break;
        case 1: *reinterpret_cast< QList<QObject*>*>(_v) = _t->hiddenActions(); break;
        case 2: *reinterpret_cast< QQmlComponent**>(_v) = _t->fullDelegate(); break;
        case 3: *reinterpret_cast< QQmlComponent**>(_v) = _t->iconDelegate(); break;
        case 4: *reinterpret_cast< QQmlComponent**>(_v) = _t->moreButton(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->spacing(); break;
        case 6: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->visibleWidth(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->minimumWidth(); break;
        case 9: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        case 10: *reinterpret_cast< HeightMode*>(_v) = _t->heightMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ToolBarLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setFullDelegate(*reinterpret_cast< QQmlComponent**>(_v)); break;
        case 3: _t->setIconDelegate(*reinterpret_cast< QQmlComponent**>(_v)); break;
        case 4: _t->setMoreButton(*reinterpret_cast< QQmlComponent**>(_v)); break;
        case 5: _t->setSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 9: _t->setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        case 10: _t->setHeightMode(*reinterpret_cast< HeightMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ToolBarLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_ToolBarLayout.data,
    qt_meta_data_ToolBarLayout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToolBarLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolBarLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolBarLayout.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int ToolBarLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ToolBarLayout::actionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ToolBarLayout::hiddenActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ToolBarLayout::fullDelegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ToolBarLayout::iconDelegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ToolBarLayout::moreButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ToolBarLayout::spacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ToolBarLayout::alignmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ToolBarLayout::visibleWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ToolBarLayout::minimumWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ToolBarLayout::layoutDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ToolBarLayout::heightModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
