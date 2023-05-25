/****************************************************************************
** Meta object code from reading C++ file 'annotationpropertiesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/part/annotationpropertiesdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'annotationpropertiesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnnotsPropertiesDialog_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnnotsPropertiesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnnotsPropertiesDialog_t qt_meta_stringdata_AnnotsPropertiesDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AnnotsPropertiesDialog"
QT_MOC_LITERAL(1, 23, 11), // "setModified"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9) // "slotapply"

    },
    "AnnotsPropertiesDialog\0setModified\0\0"
    "slotapply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnnotsPropertiesDialog[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AnnotsPropertiesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnnotsPropertiesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setModified(); break;
        case 1: _t->slotapply(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AnnotsPropertiesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<KPageDialog::staticMetaObject>(),
    qt_meta_stringdata_AnnotsPropertiesDialog.data,
    qt_meta_data_AnnotsPropertiesDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AnnotsPropertiesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnnotsPropertiesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnnotsPropertiesDialog.stringdata0))
        return static_cast<void*>(this);
    return KPageDialog::qt_metacast(_clname);
}

int AnnotsPropertiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPageDialog::qt_metacall(_c, _id, _a);
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
