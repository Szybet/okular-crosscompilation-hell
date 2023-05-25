/****************************************************************************
** Meta object code from reading C++ file 'kcapacitybar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/kcapacitybar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcapacitybar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCapacityBar_t {
    QByteArrayData data[12];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCapacityBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCapacityBar_t qt_meta_stringdata_KCapacityBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KCapacityBar"
QT_MOC_LITERAL(1, 13, 5), // "value"
QT_MOC_LITERAL(2, 19, 4), // "text"
QT_MOC_LITERAL(3, 24, 12), // "drawTextMode"
QT_MOC_LITERAL(4, 37, 12), // "DrawTextMode"
QT_MOC_LITERAL(5, 50, 14), // "fillFullBlocks"
QT_MOC_LITERAL(6, 65, 10), // "continuous"
QT_MOC_LITERAL(7, 76, 9), // "barHeight"
QT_MOC_LITERAL(8, 86, 23), // "horizontalTextAlignment"
QT_MOC_LITERAL(9, 110, 13), // "Qt::Alignment"
QT_MOC_LITERAL(10, 124, 14), // "DrawTextInline"
QT_MOC_LITERAL(11, 139, 15) // "DrawTextOutline"

    },
    "KCapacityBar\0value\0text\0drawTextMode\0"
    "DrawTextMode\0fillFullBlocks\0continuous\0"
    "barHeight\0horizontalTextAlignment\0"
    "Qt::Alignment\0DrawTextInline\0"
    "DrawTextOutline"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCapacityBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       1,   35, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095103,
       2, QMetaType::QString, 0x00095103,
       3, 0x80000000 | 4, 0x0009510b,
       5, QMetaType::Bool, 0x00095103,
       6, QMetaType::Bool, 0x00095103,
       7, QMetaType::Int, 0x00095103,
       8, 0x80000000 | 9, 0x0009510b,

 // enums: name, alias, flags, count, data
       4,    4, 0x0,    2,   40,

 // enum data: key, value
      10, uint(KCapacityBar::DrawTextInline),
      11, uint(KCapacityBar::DrawTextOutline),

       0        // eod
};

void KCapacityBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KCapacityBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 2: *reinterpret_cast< DrawTextMode*>(_v) = _t->drawTextMode(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->fillFullBlocks(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->continuous(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->barHeight(); break;
        case 6: *reinterpret_cast< Qt::Alignment*>(_v) = _t->horizontalTextAlignment(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KCapacityBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDrawTextMode(*reinterpret_cast< DrawTextMode*>(_v)); break;
        case 3: _t->setFillFullBlocks(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setContinuous(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setBarHeight(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setHorizontalTextAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
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

QT_INIT_METAOBJECT const QMetaObject KCapacityBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KCapacityBar.data,
    qt_meta_data_KCapacityBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCapacityBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCapacityBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCapacityBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KCapacityBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
