/****************************************************************************
** Meta object code from reading C++ file 'units.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kirigami/src/libkirigami/units.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'units.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Kirigami__IconSizes_t {
    QByteArrayData data[18];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Kirigami__IconSizes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Kirigami__IconSizes_t qt_meta_stringdata_Kirigami__IconSizes = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Kirigami::IconSizes"
QT_MOC_LITERAL(1, 20, 20), // "sizeForLabelsChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "smallChanged"
QT_MOC_LITERAL(4, 55, 18), // "smallMediumChanged"
QT_MOC_LITERAL(5, 74, 13), // "mediumChanged"
QT_MOC_LITERAL(6, 88, 12), // "largeChanged"
QT_MOC_LITERAL(7, 101, 11), // "hugeChanged"
QT_MOC_LITERAL(8, 113, 15), // "enormousChanged"
QT_MOC_LITERAL(9, 129, 15), // "roundedIconSize"
QT_MOC_LITERAL(10, 145, 4), // "size"
QT_MOC_LITERAL(11, 150, 13), // "sizeForLabels"
QT_MOC_LITERAL(12, 164, 5), // "small"
QT_MOC_LITERAL(13, 170, 11), // "smallMedium"
QT_MOC_LITERAL(14, 182, 6), // "medium"
QT_MOC_LITERAL(15, 189, 5), // "large"
QT_MOC_LITERAL(16, 195, 4), // "huge"
QT_MOC_LITERAL(17, 200, 8) // "enormous"

    },
    "Kirigami::IconSizes\0sizeForLabelsChanged\0"
    "\0smallChanged\0smallMediumChanged\0"
    "mediumChanged\0largeChanged\0hugeChanged\0"
    "enormousChanged\0roundedIconSize\0size\0"
    "sizeForLabels\0small\0smallMedium\0medium\0"
    "large\0huge\0enormous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Kirigami__IconSizes[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    1,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, QMetaType::Int,   10,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00495001,
      12, QMetaType::Int, 0x00495001,
      13, QMetaType::Int, 0x00495001,
      14, QMetaType::Int, 0x00495001,
      15, QMetaType::Int, 0x00495001,
      16, QMetaType::Int, 0x00495001,
      17, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void Kirigami::IconSizes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IconSizes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeForLabelsChanged(); break;
        case 1: _t->smallChanged(); break;
        case 2: _t->smallMediumChanged(); break;
        case 3: _t->mediumChanged(); break;
        case 4: _t->largeChanged(); break;
        case 5: _t->hugeChanged(); break;
        case 6: _t->enormousChanged(); break;
        case 7: { int _r = _t->roundedIconSize((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IconSizes::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IconSizes::sizeForLabelsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IconSizes::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IconSizes::smallChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (IconSizes::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IconSizes::smallMediumChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (IconSizes::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IconSizes::mediumChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (IconSizes::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IconSizes::largeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (IconSizes::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IconSizes::hugeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (IconSizes::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IconSizes::enormousChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<IconSizes *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->sizeForLabels(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->small(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->smallMedium(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->medium(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->large(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->huge(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->enormous(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Kirigami::IconSizes::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Kirigami__IconSizes.data,
    qt_meta_data_Kirigami__IconSizes,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Kirigami::IconSizes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Kirigami::IconSizes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Kirigami__IconSizes.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Kirigami::IconSizes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void Kirigami::IconSizes::sizeForLabelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Kirigami::IconSizes::smallChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Kirigami::IconSizes::smallMediumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Kirigami::IconSizes::mediumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Kirigami::IconSizes::largeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Kirigami::IconSizes::hugeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Kirigami::IconSizes::enormousChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
struct qt_meta_stringdata_Kirigami__Units_t {
    QByteArrayData data[30];
    char stringdata0[489];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Kirigami__Units_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Kirigami__Units_t qt_meta_stringdata_Kirigami__Units = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Kirigami::Units"
QT_MOC_LITERAL(1, 16, 15), // "gridUnitChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "smallSpacingChanged"
QT_MOC_LITERAL(4, 53, 20), // "mediumSpacingChanged"
QT_MOC_LITERAL(5, 74, 19), // "largeSpacingChanged"
QT_MOC_LITERAL(6, 94, 23), // "devicePixelRatioChanged"
QT_MOC_LITERAL(7, 118, 23), // "veryLongDurationChanged"
QT_MOC_LITERAL(8, 142, 19), // "longDurationChanged"
QT_MOC_LITERAL(9, 162, 20), // "shortDurationChanged"
QT_MOC_LITERAL(10, 183, 24), // "veryShortDurationChanged"
QT_MOC_LITERAL(11, 208, 18), // "humanMomentChanged"
QT_MOC_LITERAL(12, 227, 19), // "toolTipDelayChanged"
QT_MOC_LITERAL(13, 247, 23), // "wheelScrollLinesChanged"
QT_MOC_LITERAL(14, 271, 8), // "gridUnit"
QT_MOC_LITERAL(15, 280, 9), // "iconSizes"
QT_MOC_LITERAL(16, 290, 10), // "IconSizes*"
QT_MOC_LITERAL(17, 301, 12), // "smallSpacing"
QT_MOC_LITERAL(18, 314, 13), // "mediumSpacing"
QT_MOC_LITERAL(19, 328, 12), // "largeSpacing"
QT_MOC_LITERAL(20, 341, 16), // "devicePixelRatio"
QT_MOC_LITERAL(21, 358, 16), // "veryLongDuration"
QT_MOC_LITERAL(22, 375, 12), // "longDuration"
QT_MOC_LITERAL(23, 388, 13), // "shortDuration"
QT_MOC_LITERAL(24, 402, 17), // "veryShortDuration"
QT_MOC_LITERAL(25, 420, 11), // "humanMoment"
QT_MOC_LITERAL(26, 432, 12), // "toolTipDelay"
QT_MOC_LITERAL(27, 445, 16), // "wheelScrollLines"
QT_MOC_LITERAL(28, 462, 11), // "fontMetrics"
QT_MOC_LITERAL(29, 474, 14) // "maximumInteger"

    },
    "Kirigami::Units\0gridUnitChanged\0\0"
    "smallSpacingChanged\0mediumSpacingChanged\0"
    "largeSpacingChanged\0devicePixelRatioChanged\0"
    "veryLongDurationChanged\0longDurationChanged\0"
    "shortDurationChanged\0veryShortDurationChanged\0"
    "humanMomentChanged\0toolTipDelayChanged\0"
    "wheelScrollLinesChanged\0gridUnit\0"
    "iconSizes\0IconSizes*\0smallSpacing\0"
    "mediumSpacing\0largeSpacing\0devicePixelRatio\0"
    "veryLongDuration\0longDuration\0"
    "shortDuration\0veryShortDuration\0"
    "humanMoment\0toolTipDelay\0wheelScrollLines\0"
    "fontMetrics\0maximumInteger"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Kirigami__Units[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      15,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

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
      13,    0,   85,    2, 0x06 /* Public */,

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
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00495103,
      15, 0x80000000 | 16, 0x00095409,
      17, QMetaType::Int, 0x00495103,
      18, QMetaType::Int, 0x00495103,
      19, QMetaType::Int, 0x00495103,
      20, QMetaType::QReal, 0x00495001,
      21, QMetaType::Int, 0x00495103,
      22, QMetaType::Int, 0x00495103,
      23, QMetaType::Int, 0x00495103,
      24, QMetaType::Int, 0x00495103,
      25, QMetaType::Int, 0x00495103,
      26, QMetaType::Int, 0x00495103,
      27, QMetaType::Int, 0x00495001,
      28, QMetaType::QObjectStar, 0x00095401,
      29, QMetaType::Int, 0x00095401,

 // properties: notify_signal_id
       0,
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
      11,
       0,
       0,

       0        // eod
};

void Kirigami::Units::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Units *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gridUnitChanged(); break;
        case 1: _t->smallSpacingChanged(); break;
        case 2: _t->mediumSpacingChanged(); break;
        case 3: _t->largeSpacingChanged(); break;
        case 4: _t->devicePixelRatioChanged(); break;
        case 5: _t->veryLongDurationChanged(); break;
        case 6: _t->longDurationChanged(); break;
        case 7: _t->shortDurationChanged(); break;
        case 8: _t->veryShortDurationChanged(); break;
        case 9: _t->humanMomentChanged(); break;
        case 10: _t->toolTipDelayChanged(); break;
        case 11: _t->wheelScrollLinesChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Units::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Units::gridUnitChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Units::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Units::smallSpacingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Units::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Units::mediumSpacingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Units::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Units::largeSpacingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Units::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Units::devicePixelRatioChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Units::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Units::veryLongDurationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Units::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Units::longDurationChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Units::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Units::shortDurationChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Units::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Units::veryShortDurationChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Units::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Units::humanMomentChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Units::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Units::toolTipDelayChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Units::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Units::wheelScrollLinesChanged)) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< IconSizes* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Units *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->gridUnit(); break;
        case 1: *reinterpret_cast< IconSizes**>(_v) = _t->iconSizes(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->smallSpacing(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->mediumSpacing(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->largeSpacing(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->devicePixelRatio(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->veryLongDuration(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->longDuration(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->shortDuration(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->veryShortDuration(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->humanMoment(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->toolTipDelay(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->wheelScrollLines(); break;
        case 13: *reinterpret_cast< QObject**>(_v) = _t->fontMetrics(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->maximumInteger(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Units *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGridUnit(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSmallSpacing(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setMediumSpacing(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setLargeSpacing(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setVeryLongDuration(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setLongDuration(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setShortDuration(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setVeryShortDuration(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setHumanMoment(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setToolTipDelay(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Kirigami::Units::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Kirigami__Units.data,
    qt_meta_data_Kirigami__Units,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Kirigami::Units::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Kirigami::Units::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Kirigami__Units.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Kirigami::Units::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Kirigami::Units::gridUnitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Kirigami::Units::smallSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Kirigami::Units::mediumSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Kirigami::Units::largeSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Kirigami::Units::devicePixelRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Kirigami::Units::veryLongDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Kirigami::Units::longDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Kirigami::Units::shortDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Kirigami::Units::veryShortDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Kirigami::Units::humanMomentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Kirigami::Units::toolTipDelayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Kirigami::Units::wheelScrollLinesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
