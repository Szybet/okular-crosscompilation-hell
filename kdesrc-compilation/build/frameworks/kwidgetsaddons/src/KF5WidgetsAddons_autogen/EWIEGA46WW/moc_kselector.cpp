/****************************************************************************
** Meta object code from reading C++ file 'kselector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/kselector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KSelector_t {
    QByteArrayData data[7];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KSelector_t qt_meta_stringdata_KSelector = {
    {
QT_MOC_LITERAL(0, 0, 9), // "KSelector"
QT_MOC_LITERAL(1, 10, 5), // "value"
QT_MOC_LITERAL(2, 16, 8), // "minValue"
QT_MOC_LITERAL(3, 25, 8), // "maxValue"
QT_MOC_LITERAL(4, 34, 6), // "indent"
QT_MOC_LITERAL(5, 41, 14), // "arrowDirection"
QT_MOC_LITERAL(6, 56, 13) // "Qt::ArrowType"

    },
    "KSelector\0value\0minValue\0maxValue\0"
    "indent\0arrowDirection\0Qt::ArrowType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KSelector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095103,
       2, QMetaType::Int, 0x00095003,
       3, QMetaType::Int, 0x00095003,
       4, QMetaType::Bool, 0x00095103,
       5, 0x80000000 | 6, 0x0009510b,

       0        // eod
};

void KSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KSelector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->minimum(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->maximum(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->indent(); break;
        case 4: *reinterpret_cast< Qt::ArrowType*>(_v) = _t->arrowDirection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KSelector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setIndent(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setArrowDirection(*reinterpret_cast< Qt::ArrowType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractSlider::staticMetaObject>(),
    qt_meta_stringdata_KSelector.data,
    qt_meta_data_KSelector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KSelector.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSlider::qt_metacast(_clname);
}

int KSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_KGradientSelector_t {
    QByteArrayData data[5];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KGradientSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KGradientSelector_t qt_meta_stringdata_KGradientSelector = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KGradientSelector"
QT_MOC_LITERAL(1, 18, 10), // "firstColor"
QT_MOC_LITERAL(2, 29, 11), // "secondColor"
QT_MOC_LITERAL(3, 41, 9), // "firstText"
QT_MOC_LITERAL(4, 51, 10) // "secondText"

    },
    "KGradientSelector\0firstColor\0secondColor\0"
    "firstText\0secondText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KGradientSelector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095103,
       2, QMetaType::QColor, 0x00095103,
       3, QMetaType::QString, 0x00095103,
       4, QMetaType::QString, 0x00095103,

       0        // eod
};

void KGradientSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KGradientSelector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->firstColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->secondColor(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->firstText(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->secondText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KGradientSelector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFirstColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setSecondColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setFirstText(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSecondText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KGradientSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<KSelector::staticMetaObject>(),
    qt_meta_stringdata_KGradientSelector.data,
    qt_meta_data_KGradientSelector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KGradientSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KGradientSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KGradientSelector.stringdata0))
        return static_cast<void*>(this);
    return KSelector::qt_metacast(_clname);
}

int KGradientSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KSelector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
