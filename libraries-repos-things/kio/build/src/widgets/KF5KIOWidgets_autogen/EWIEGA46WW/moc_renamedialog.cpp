/****************************************************************************
** Meta object code from reading C++ file 'renamedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/widgets/renamedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'renamedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__RenameDialog_t {
    QByteArrayData data[20];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__RenameDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__RenameDialog_t qt_meta_stringdata_KIO__RenameDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KIO::RenameDialog"
QT_MOC_LITERAL(1, 18, 13), // "cancelPressed"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "renamePressed"
QT_MOC_LITERAL(4, 47, 11), // "skipPressed"
QT_MOC_LITERAL(5, 59, 15), // "autoSkipPressed"
QT_MOC_LITERAL(6, 75, 16), // "overwritePressed"
QT_MOC_LITERAL(7, 92, 19), // "overwriteAllPressed"
QT_MOC_LITERAL(8, 112, 25), // "overwriteWhenOlderPressed"
QT_MOC_LITERAL(9, 138, 13), // "resumePressed"
QT_MOC_LITERAL(10, 152, 16), // "resumeAllPressed"
QT_MOC_LITERAL(11, 169, 21), // "suggestNewNamePressed"
QT_MOC_LITERAL(12, 191, 18), // "enableRenameButton"
QT_MOC_LITERAL(13, 210, 15), // "applyAllPressed"
QT_MOC_LITERAL(14, 226, 11), // "showSrcIcon"
QT_MOC_LITERAL(15, 238, 9), // "KFileItem"
QT_MOC_LITERAL(16, 248, 12), // "showDestIcon"
QT_MOC_LITERAL(17, 261, 14), // "showSrcPreview"
QT_MOC_LITERAL(18, 276, 15), // "showDestPreview"
QT_MOC_LITERAL(19, 292, 12) // "resizePanels"

    },
    "KIO::RenameDialog\0cancelPressed\0\0"
    "renamePressed\0skipPressed\0autoSkipPressed\0"
    "overwritePressed\0overwriteAllPressed\0"
    "overwriteWhenOlderPressed\0resumePressed\0"
    "resumeAllPressed\0suggestNewNamePressed\0"
    "enableRenameButton\0applyAllPressed\0"
    "showSrcIcon\0KFileItem\0showDestIcon\0"
    "showSrcPreview\0showDestPreview\0"
    "resizePanels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__RenameDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a /* Public */,
       3,    0,  100,    2, 0x0a /* Public */,
       4,    0,  101,    2, 0x0a /* Public */,
       5,    0,  102,    2, 0x0a /* Public */,
       6,    0,  103,    2, 0x0a /* Public */,
       7,    0,  104,    2, 0x0a /* Public */,
       8,    0,  105,    2, 0x0a /* Public */,
       9,    0,  106,    2, 0x0a /* Public */,
      10,    0,  107,    2, 0x0a /* Public */,
      11,    0,  108,    2, 0x0a /* Public */,
      12,    1,  109,    2, 0x09 /* Protected */,
      13,    0,  112,    2, 0x08 /* Private */,
      14,    1,  113,    2, 0x08 /* Private */,
      16,    1,  116,    2, 0x08 /* Private */,
      17,    2,  119,    2, 0x08 /* Private */,
      18,    2,  124,    2, 0x08 /* Private */,
      19,    0,  129,    2, 0x08 /* Private */,

 // slots: parameters
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
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 15, QMetaType::QPixmap,    2,    2,
    QMetaType::Void, 0x80000000 | 15, QMetaType::QPixmap,    2,    2,
    QMetaType::Void,

       0        // eod
};

void KIO::RenameDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenameDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cancelPressed(); break;
        case 1: _t->renamePressed(); break;
        case 2: _t->skipPressed(); break;
        case 3: _t->autoSkipPressed(); break;
        case 4: _t->overwritePressed(); break;
        case 5: _t->overwriteAllPressed(); break;
        case 6: _t->overwriteWhenOlderPressed(); break;
        case 7: _t->resumePressed(); break;
        case 8: _t->resumeAllPressed(); break;
        case 9: _t->suggestNewNamePressed(); break;
        case 10: _t->enableRenameButton((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->applyAllPressed(); break;
        case 12: _t->showSrcIcon((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 13: _t->showDestIcon((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 14: _t->showSrcPreview((*reinterpret_cast< const KFileItem(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 15: _t->showDestPreview((*reinterpret_cast< const KFileItem(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 16: _t->resizePanels(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::RenameDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_KIO__RenameDialog.data,
    qt_meta_data_KIO__RenameDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::RenameDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::RenameDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__RenameDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int KIO::RenameDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
