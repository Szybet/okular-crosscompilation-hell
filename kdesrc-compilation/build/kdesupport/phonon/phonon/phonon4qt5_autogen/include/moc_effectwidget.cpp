/****************************************************************************
** Meta object code from reading C++ file 'effectwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../kdesupport/phonon/phonon/effectwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'effectwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Phonon__EffectWidget_t {
    QByteArrayData data[9];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phonon__EffectWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phonon__EffectWidget_t qt_meta_stringdata_Phonon__EffectWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Phonon::EffectWidget"
QT_MOC_LITERAL(1, 21, 21), // "_k_setToggleParameter"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 7), // "checked"
QT_MOC_LITERAL(4, 52, 18), // "_k_setIntParameter"
QT_MOC_LITERAL(5, 71, 5), // "value"
QT_MOC_LITERAL(6, 77, 21), // "_k_setDoubleParameter"
QT_MOC_LITERAL(7, 99, 21), // "_k_setStringParameter"
QT_MOC_LITERAL(8, 121, 21) // "_k_setSliderParameter"

    },
    "Phonon::EffectWidget\0_k_setToggleParameter\0"
    "\0checked\0_k_setIntParameter\0value\0"
    "_k_setDoubleParameter\0_k_setStringParameter\0"
    "_k_setSliderParameter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phonon__EffectWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,
       7,    1,   48,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Phonon::EffectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EffectWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->k_func()->_k_setToggleParameter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->k_func()->_k_setIntParameter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->k_func()->_k_setDoubleParameter((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->k_func()->_k_setStringParameter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->k_func()->_k_setSliderParameter((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Phonon::EffectWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Phonon__EffectWidget.data,
    qt_meta_data_Phonon__EffectWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phonon::EffectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phonon::EffectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__EffectWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Phonon::EffectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
