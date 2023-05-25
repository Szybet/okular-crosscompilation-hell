/****************************************************************************
** Meta object code from reading C++ file 'kdatetable_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/kdatetable_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdatetable_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDateTable_t {
    QByteArrayData data[9];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDateTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDateTable_t qt_meta_stringdata_KDateTable = {
    {
QT_MOC_LITERAL(0, 0, 10), // "KDateTable"
QT_MOC_LITERAL(1, 11, 11), // "dateChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "date"
QT_MOC_LITERAL(4, 29, 12), // "tableClicked"
QT_MOC_LITERAL(5, 42, 22), // "aboutToShowContextMenu"
QT_MOC_LITERAL(6, 65, 6), // "QMenu*"
QT_MOC_LITERAL(7, 72, 4), // "menu"
QT_MOC_LITERAL(8, 77, 9) // "popupMenu"

    },
    "KDateTable\0dateChanged\0\0date\0tableClicked\0"
    "aboutToShowContextMenu\0QMenu*\0menu\0"
    "popupMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDateTable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,
       5,    2,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QDate,    7,    3,

 // properties: name, type, flags
       3, QMetaType::QDate, 0x00095103,
       8, QMetaType::Bool, 0x00095003,

       0        // eod
};

void KDateTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KDateTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 1: _t->tableClicked(); break;
        case 2: _t->aboutToShowContextMenu((*reinterpret_cast< QMenu*(*)>(_a[1])),(*reinterpret_cast< const QDate(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KDateTable::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDateTable::dateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KDateTable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDateTable::tableClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KDateTable::*)(QMenu * , const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDateTable::aboutToShowContextMenu)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KDateTable *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDate*>(_v) = _t->date(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->popupMenuEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KDateTable *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDate(*reinterpret_cast< QDate*>(_v)); break;
        case 1: _t->setPopupMenuEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KDateTable::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KDateTable.data,
    qt_meta_data_KDateTable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDateTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDateTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDateTable.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KDateTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KDateTable::dateChanged(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDateTable::tableClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KDateTable::aboutToShowContextMenu(QMenu * _t1, const QDate & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
