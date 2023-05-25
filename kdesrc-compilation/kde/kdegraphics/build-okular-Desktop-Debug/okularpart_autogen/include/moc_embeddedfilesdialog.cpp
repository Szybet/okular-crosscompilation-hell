/****************************************************************************
** Meta object code from reading C++ file 'embeddedfilesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/part/embeddedfilesdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'embeddedfilesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EmbeddedFilesDialog_t {
    QByteArrayData data[10];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EmbeddedFilesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EmbeddedFilesDialog_t qt_meta_stringdata_EmbeddedFilesDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "EmbeddedFilesDialog"
QT_MOC_LITERAL(1, 20, 18), // "saveFileFromButton"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 21), // "attachViewContextMenu"
QT_MOC_LITERAL(4, 62, 16), // "updateSaveButton"
QT_MOC_LITERAL(5, 79, 18), // "viewFileFromButton"
QT_MOC_LITERAL(6, 98, 12), // "viewFileItem"
QT_MOC_LITERAL(7, 111, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(8, 128, 4), // "item"
QT_MOC_LITERAL(9, 133, 6) // "column"

    },
    "EmbeddedFilesDialog\0saveFileFromButton\0"
    "\0attachViewContextMenu\0updateSaveButton\0"
    "viewFileFromButton\0viewFileItem\0"
    "QTreeWidgetItem*\0item\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmbeddedFilesDialog[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    2,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    9,

       0        // eod
};

void EmbeddedFilesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EmbeddedFilesDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->saveFileFromButton(); break;
        case 1: _t->attachViewContextMenu(); break;
        case 2: _t->updateSaveButton(); break;
        case 3: _t->viewFileFromButton(); break;
        case 4: _t->viewFileItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EmbeddedFilesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EmbeddedFilesDialog.data,
    qt_meta_data_EmbeddedFilesDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EmbeddedFilesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmbeddedFilesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EmbeddedFilesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EmbeddedFilesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
