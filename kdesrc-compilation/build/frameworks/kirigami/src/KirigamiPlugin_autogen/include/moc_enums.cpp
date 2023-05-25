/****************************************************************************
** Meta object code from reading C++ file 'enums.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kirigami/src/enums.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'enums.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApplicationHeaderStyle_t {
    QByteArrayData data[12];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApplicationHeaderStyle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApplicationHeaderStyle_t qt_meta_stringdata_ApplicationHeaderStyle = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ApplicationHeaderStyle"
QT_MOC_LITERAL(1, 23, 6), // "Status"
QT_MOC_LITERAL(2, 30, 4), // "Auto"
QT_MOC_LITERAL(3, 35, 10), // "Breadcrumb"
QT_MOC_LITERAL(4, 46, 6), // "Titles"
QT_MOC_LITERAL(5, 53, 6), // "TabBar"
QT_MOC_LITERAL(6, 60, 7), // "ToolBar"
QT_MOC_LITERAL(7, 68, 4), // "None"
QT_MOC_LITERAL(8, 73, 16), // "NavigationButton"
QT_MOC_LITERAL(9, 90, 19), // "NoNavigationButtons"
QT_MOC_LITERAL(10, 110, 14), // "ShowBackButton"
QT_MOC_LITERAL(11, 125, 17) // "ShowForwardButton"

    },
    "ApplicationHeaderStyle\0Status\0Auto\0"
    "Breadcrumb\0Titles\0TabBar\0ToolBar\0None\0"
    "NavigationButton\0NoNavigationButtons\0"
    "ShowBackButton\0ShowForwardButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApplicationHeaderStyle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    6,   24,
       8,    8, 0x0,    3,   36,

 // enum data: key, value
       2, uint(ApplicationHeaderStyle::Auto),
       3, uint(ApplicationHeaderStyle::Breadcrumb),
       4, uint(ApplicationHeaderStyle::Titles),
       5, uint(ApplicationHeaderStyle::TabBar),
       6, uint(ApplicationHeaderStyle::ToolBar),
       7, uint(ApplicationHeaderStyle::None),
       9, uint(ApplicationHeaderStyle::NoNavigationButtons),
      10, uint(ApplicationHeaderStyle::ShowBackButton),
      11, uint(ApplicationHeaderStyle::ShowForwardButton),

       0        // eod
};

void ApplicationHeaderStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ApplicationHeaderStyle::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ApplicationHeaderStyle.data,
    qt_meta_data_ApplicationHeaderStyle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ApplicationHeaderStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplicationHeaderStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationHeaderStyle.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ApplicationHeaderStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MessageType_t {
    QByteArrayData data[6];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MessageType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MessageType_t qt_meta_stringdata_MessageType = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MessageType"
QT_MOC_LITERAL(1, 12, 4), // "Type"
QT_MOC_LITERAL(2, 17, 11), // "Information"
QT_MOC_LITERAL(3, 29, 8), // "Positive"
QT_MOC_LITERAL(4, 38, 7), // "Warning"
QT_MOC_LITERAL(5, 46, 5) // "Error"

    },
    "MessageType\0Type\0Information\0Positive\0"
    "Warning\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessageType[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    4,   19,

 // enum data: key, value
       2, uint(MessageType::Information),
       3, uint(MessageType::Positive),
       4, uint(MessageType::Warning),
       5, uint(MessageType::Error),

       0        // eod
};

void MessageType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MessageType::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MessageType.data,
    qt_meta_data_MessageType,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MessageType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessageType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MessageType.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MessageType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DisplayHint_t {
    QByteArrayData data[13];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisplayHint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisplayHint_t qt_meta_stringdata_DisplayHint = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DisplayHint"
QT_MOC_LITERAL(1, 12, 14), // "displayHintSet"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "DisplayHints"
QT_MOC_LITERAL(4, 41, 6), // "values"
QT_MOC_LITERAL(5, 48, 4), // "Hint"
QT_MOC_LITERAL(6, 53, 4), // "hint"
QT_MOC_LITERAL(7, 58, 6), // "object"
QT_MOC_LITERAL(8, 65, 12), // "NoPreference"
QT_MOC_LITERAL(9, 78, 8), // "IconOnly"
QT_MOC_LITERAL(10, 87, 11), // "KeepVisible"
QT_MOC_LITERAL(11, 99, 10), // "AlwaysHide"
QT_MOC_LITERAL(12, 110, 18) // "HideChildIndicator"

    },
    "DisplayHint\0displayHintSet\0\0DisplayHints\0"
    "values\0Hint\0hint\0object\0NoPreference\0"
    "IconOnly\0KeepVisible\0AlwaysHide\0"
    "HideChildIndicator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisplayHint[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       2,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x02 /* Public */,
       1,    2,   29,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 5,    7,    6,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,    5,   44,
       3,    5, 0x1,    5,   54,

 // enum data: key, value
       8, uint(DisplayHint::NoPreference),
       9, uint(DisplayHint::IconOnly),
      10, uint(DisplayHint::KeepVisible),
      11, uint(DisplayHint::AlwaysHide),
      12, uint(DisplayHint::HideChildIndicator),
       8, uint(DisplayHint::NoPreference),
       9, uint(DisplayHint::IconOnly),
      10, uint(DisplayHint::KeepVisible),
      11, uint(DisplayHint::AlwaysHide),
      12, uint(DisplayHint::HideChildIndicator),

       0        // eod
};

void DisplayHint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DisplayHint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->displayHintSet((*reinterpret_cast< DisplayHints(*)>(_a[1])),(*reinterpret_cast< Hint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->displayHintSet((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< Hint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DisplayHint::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DisplayHint.data,
    qt_meta_data_DisplayHint,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DisplayHint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisplayHint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DisplayHint.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DisplayHint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
