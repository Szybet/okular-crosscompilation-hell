/****************************************************************************
** Meta object code from reading C++ file 'colorutils.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kirigami/src/colorutils.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorutils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColorUtils_t {
    QByteArrayData data[25];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorUtils_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorUtils_t qt_meta_stringdata_ColorUtils = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ColorUtils"
QT_MOC_LITERAL(1, 11, 18), // "brightnessForColor"
QT_MOC_LITERAL(2, 30, 22), // "ColorUtils::Brightness"
QT_MOC_LITERAL(3, 53, 0), // ""
QT_MOC_LITERAL(4, 54, 5), // "color"
QT_MOC_LITERAL(5, 60, 12), // "grayForColor"
QT_MOC_LITERAL(6, 73, 10), // "alphaBlend"
QT_MOC_LITERAL(7, 84, 10), // "foreground"
QT_MOC_LITERAL(8, 95, 10), // "background"
QT_MOC_LITERAL(9, 106, 19), // "linearInterpolation"
QT_MOC_LITERAL(10, 126, 3), // "one"
QT_MOC_LITERAL(11, 130, 3), // "two"
QT_MOC_LITERAL(12, 134, 7), // "balance"
QT_MOC_LITERAL(13, 142, 11), // "adjustColor"
QT_MOC_LITERAL(14, 154, 8), // "QJSValue"
QT_MOC_LITERAL(15, 163, 11), // "adjustments"
QT_MOC_LITERAL(16, 175, 10), // "scaleColor"
QT_MOC_LITERAL(17, 186, 13), // "tintWithAlpha"
QT_MOC_LITERAL(18, 200, 11), // "targetColor"
QT_MOC_LITERAL(19, 212, 9), // "tintColor"
QT_MOC_LITERAL(20, 222, 5), // "alpha"
QT_MOC_LITERAL(21, 228, 6), // "chroma"
QT_MOC_LITERAL(22, 235, 10), // "Brightness"
QT_MOC_LITERAL(23, 246, 4), // "Dark"
QT_MOC_LITERAL(24, 251, 5) // "Light"

    },
    "ColorUtils\0brightnessForColor\0"
    "ColorUtils::Brightness\0\0color\0"
    "grayForColor\0alphaBlend\0foreground\0"
    "background\0linearInterpolation\0one\0"
    "two\0balance\0adjustColor\0QJSValue\0"
    "adjustments\0scaleColor\0tintWithAlpha\0"
    "targetColor\0tintColor\0alpha\0chroma\0"
    "Brightness\0Dark\0Light"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorUtils[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       1,   92, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   54,    3, 0x02 /* Public */,
       5,    1,   57,    3, 0x02 /* Public */,
       6,    2,   60,    3, 0x02 /* Public */,
       9,    3,   65,    3, 0x02 /* Public */,
      13,    2,   72,    3, 0x02 /* Public */,
      16,    2,   77,    3, 0x02 /* Public */,
      17,    3,   82,    3, 0x02 /* Public */,
      21,    1,   89,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2, QMetaType::QColor,    4,
    QMetaType::QReal, QMetaType::QColor,    4,
    QMetaType::QColor, QMetaType::QColor, QMetaType::QColor,    7,    8,
    QMetaType::QColor, QMetaType::QColor, QMetaType::QColor, QMetaType::Double,   10,   11,   12,
    QMetaType::QColor, QMetaType::QColor, 0x80000000 | 14,    4,   15,
    QMetaType::QColor, QMetaType::QColor, 0x80000000 | 14,    4,   15,
    QMetaType::QColor, QMetaType::QColor, QMetaType::QColor, QMetaType::Double,   18,   19,   20,
    QMetaType::QReal, QMetaType::QColor,    4,

 // enums: name, alias, flags, count, data
      22,   22, 0x0,    2,   97,

 // enum data: key, value
      23, uint(ColorUtils::Dark),
      24, uint(ColorUtils::Light),

       0        // eod
};

void ColorUtils::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorUtils *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { ColorUtils::Brightness _r = _t->brightnessForColor((*reinterpret_cast< const QColor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ColorUtils::Brightness*>(_a[0]) = std::move(_r); }  break;
        case 1: { qreal _r = _t->grayForColor((*reinterpret_cast< const QColor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 2: { QColor _r = _t->alphaBlend((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 3: { QColor _r = _t->linearInterpolation((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 4: { QColor _r = _t->adjustColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QJSValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 5: { QColor _r = _t->scaleColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QJSValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 6: { QColor _r = _t->tintWithAlpha((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 7: { qreal _r = _t->chroma((*reinterpret_cast< const QColor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ColorUtils::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ColorUtils.data,
    qt_meta_data_ColorUtils,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorUtils::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorUtils::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorUtils.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ColorUtils::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
