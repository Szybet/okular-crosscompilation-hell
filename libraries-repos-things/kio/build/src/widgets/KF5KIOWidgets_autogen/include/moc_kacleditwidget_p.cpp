/****************************************************************************
** Meta object code from reading C++ file 'kacleditwidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/widgets/kacleditwidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kacleditwidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KACLListView_t {
    QByteArrayData data[16];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KACLListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KACLListView_t qt_meta_stringdata_KACLListView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KACLListView"
QT_MOC_LITERAL(1, 13, 12), // "slotAddEntry"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "slotEditEntry"
QT_MOC_LITERAL(4, 41, 15), // "slotRemoveEntry"
QT_MOC_LITERAL(5, 57, 6), // "setACL"
QT_MOC_LITERAL(6, 64, 4), // "KACL"
QT_MOC_LITERAL(7, 69, 5), // "anACL"
QT_MOC_LITERAL(8, 75, 13), // "setDefaultACL"
QT_MOC_LITERAL(9, 89, 8), // "sizeHint"
QT_MOC_LITERAL(10, 98, 15), // "slotItemClicked"
QT_MOC_LITERAL(11, 114, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(12, 131, 5), // "pItem"
QT_MOC_LITERAL(13, 137, 3), // "col"
QT_MOC_LITERAL(14, 141, 21), // "slotItemDoubleClicked"
QT_MOC_LITERAL(15, 163, 4) // "item"

    },
    "KACLListView\0slotAddEntry\0\0slotEditEntry\0"
    "slotRemoveEntry\0setACL\0KACL\0anACL\0"
    "setDefaultACL\0sizeHint\0slotItemClicked\0"
    "QTreeWidgetItem*\0pItem\0col\0"
    "slotItemDoubleClicked\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KACLListView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,
      10,    2,   64,    2, 0x09 /* Protected */,
      14,    2,   69,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::QSize,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   12,   13,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   15,   13,

       0        // eod
};

void KACLListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KACLListView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotAddEntry(); break;
        case 1: _t->slotEditEntry(); break;
        case 2: _t->slotRemoveEntry(); break;
        case 3: _t->setACL((*reinterpret_cast< const KACL(*)>(_a[1]))); break;
        case 4: _t->setDefaultACL((*reinterpret_cast< const KACL(*)>(_a[1]))); break;
        case 5: { QSize _r = _t->sizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->slotItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->slotItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KACLListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_KACLListView.data,
    qt_meta_data_KACLListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KACLListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KACLListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KACLListView.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int KACLListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_EditACLEntryDialog_t {
    QByteArrayData data[7];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditACLEntryDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditACLEntryDialog_t qt_meta_stringdata_EditACLEntryDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "EditACLEntryDialog"
QT_MOC_LITERAL(1, 19, 6), // "slotOk"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(4, 48, 16), // "QAbstractButton*"
QT_MOC_LITERAL(5, 65, 31), // "slotUpdateAllowedUsersAndGroups"
QT_MOC_LITERAL(6, 97, 22) // "slotUpdateAllowedTypes"

    },
    "EditACLEntryDialog\0slotOk\0\0"
    "slotSelectionChanged\0QAbstractButton*\0"
    "slotUpdateAllowedUsersAndGroups\0"
    "slotUpdateAllowedTypes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditACLEntryDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EditACLEntryDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditACLEntryDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotOk(); break;
        case 1: _t->slotSelectionChanged((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: _t->slotUpdateAllowedUsersAndGroups(); break;
        case 3: _t->slotUpdateAllowedTypes(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EditACLEntryDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EditACLEntryDialog.data,
    qt_meta_data_EditACLEntryDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EditACLEntryDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditACLEntryDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditACLEntryDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EditACLEntryDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
