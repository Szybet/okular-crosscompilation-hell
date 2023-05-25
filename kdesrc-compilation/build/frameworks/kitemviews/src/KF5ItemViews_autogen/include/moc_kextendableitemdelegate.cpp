/****************************************************************************
** Meta object code from reading C++ file 'kextendableitemdelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kitemviews/src/kextendableitemdelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kextendableitemdelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KExtendableItemDelegate_t {
    QByteArrayData data[11];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KExtendableItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KExtendableItemDelegate_t qt_meta_stringdata_KExtendableItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 23), // "KExtendableItemDelegate"
QT_MOC_LITERAL(1, 24, 15), // "extenderCreated"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 8), // "QWidget*"
QT_MOC_LITERAL(4, 50, 8), // "extender"
QT_MOC_LITERAL(5, 59, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 71, 5), // "index"
QT_MOC_LITERAL(7, 77, 17), // "extenderDestroyed"
QT_MOC_LITERAL(8, 95, 29), // "_k_extenderDestructionHandler"
QT_MOC_LITERAL(9, 125, 9), // "destroyed"
QT_MOC_LITERAL(10, 135, 17) // "_k_verticalScroll"

    },
    "KExtendableItemDelegate\0extenderCreated\0"
    "\0QWidget*\0extender\0QModelIndex\0index\0"
    "extenderDestroyed\0_k_extenderDestructionHandler\0"
    "destroyed\0_k_verticalScroll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KExtendableItemDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       7,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   44,    2, 0x08 /* Private */,
      10,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    9,
    QMetaType::Void,

       0        // eod
};

void KExtendableItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KExtendableItemDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->extenderCreated((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->extenderDestroyed((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 2: _t->d->_k_extenderDestructionHandler((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->d->_k_verticalScroll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KExtendableItemDelegate::*)(QWidget * , const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KExtendableItemDelegate::extenderCreated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KExtendableItemDelegate::*)(QWidget * , const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KExtendableItemDelegate::extenderDestroyed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KExtendableItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_KExtendableItemDelegate.data,
    qt_meta_data_KExtendableItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KExtendableItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KExtendableItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KExtendableItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int KExtendableItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KExtendableItemDelegate::extenderCreated(QWidget * _t1, const QModelIndex & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KExtendableItemDelegate::extenderDestroyed(QWidget * _t1, const QModelIndex & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
