/****************************************************************************
** Meta object code from reading C++ file 'widgetannottools.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/part/widgetannottools.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetannottools.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetAnnotTools_t {
    QByteArrayData data[4];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetAnnotTools_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetAnnotTools_t qt_meta_stringdata_WidgetAnnotTools = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WidgetAnnotTools"
QT_MOC_LITERAL(1, 17, 7), // "slotAdd"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8) // "slotEdit"

    },
    "WidgetAnnotTools\0slotAdd\0\0slotEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetAnnotTools[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WidgetAnnotTools::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetAnnotTools *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotAdd(); break;
        case 1: _t->slotEdit(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject WidgetAnnotTools::staticMetaObject = { {
    QMetaObject::SuperData::link<WidgetConfigurationToolsBase::staticMetaObject>(),
    qt_meta_stringdata_WidgetAnnotTools.data,
    qt_meta_data_WidgetAnnotTools,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WidgetAnnotTools::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetAnnotTools::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetAnnotTools.stringdata0))
        return static_cast<void*>(this);
    return WidgetConfigurationToolsBase::qt_metacast(_clname);
}

int WidgetAnnotTools::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WidgetConfigurationToolsBase::qt_metacall(_c, _id, _a);
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
