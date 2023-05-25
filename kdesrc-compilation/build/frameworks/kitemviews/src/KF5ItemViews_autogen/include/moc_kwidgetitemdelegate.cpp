/****************************************************************************
** Meta object code from reading C++ file 'kwidgetitemdelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kitemviews/src/kwidgetitemdelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kwidgetitemdelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KWidgetItemDelegate_t {
    QByteArrayData data[11];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KWidgetItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KWidgetItemDelegate_t qt_meta_stringdata_KWidgetItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 19), // "KWidgetItemDelegate"
QT_MOC_LITERAL(1, 20, 19), // "_k_slotRowsInserted"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 53, 27), // "_k_slotRowsAboutToBeRemoved"
QT_MOC_LITERAL(5, 81, 18), // "_k_slotRowsRemoved"
QT_MOC_LITERAL(6, 100, 18), // "_k_slotDataChanged"
QT_MOC_LITERAL(7, 119, 20), // "_k_slotLayoutChanged"
QT_MOC_LITERAL(8, 140, 17), // "_k_slotModelReset"
QT_MOC_LITERAL(9, 158, 23), // "_k_slotSelectionChanged"
QT_MOC_LITERAL(10, 182, 14) // "QItemSelection"

    },
    "KWidgetItemDelegate\0_k_slotRowsInserted\0"
    "\0QModelIndex\0_k_slotRowsAboutToBeRemoved\0"
    "_k_slotRowsRemoved\0_k_slotDataChanged\0"
    "_k_slotLayoutChanged\0_k_slotModelReset\0"
    "_k_slotSelectionChanged\0QItemSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KWidgetItemDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x08 /* Private */,
       4,    3,   56,    2, 0x08 /* Private */,
       5,    3,   63,    2, 0x08 /* Private */,
       6,    2,   70,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    2,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,    2,    2,

       0        // eod
};

void KWidgetItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KWidgetItemDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d->_k_slotRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->d->_k_slotRowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->d->_k_slotRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->d->_k_slotDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->d->_k_slotLayoutChanged(); break;
        case 5: _t->d->_k_slotModelReset(); break;
        case 6: _t->d->_k_slotSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KWidgetItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_KWidgetItemDelegate.data,
    qt_meta_data_KWidgetItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KWidgetItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWidgetItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KWidgetItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemDelegate::qt_metacast(_clname);
}

int KWidgetItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
