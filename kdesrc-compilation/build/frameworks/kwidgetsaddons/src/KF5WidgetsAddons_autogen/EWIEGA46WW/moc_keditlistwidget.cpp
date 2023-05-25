/****************************************************************************
** Meta object code from reading C++ file 'keditlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/keditlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keditlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KEditListWidget_t {
    QByteArrayData data[26];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KEditListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KEditListWidget_t qt_meta_stringdata_KEditListWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KEditListWidget"
QT_MOC_LITERAL(1, 16, 7), // "changed"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "added"
QT_MOC_LITERAL(4, 31, 4), // "text"
QT_MOC_LITERAL(5, 36, 7), // "removed"
QT_MOC_LITERAL(6, 44, 10), // "moveItemUp"
QT_MOC_LITERAL(7, 55, 12), // "moveItemDown"
QT_MOC_LITERAL(8, 68, 7), // "addItem"
QT_MOC_LITERAL(9, 76, 10), // "removeItem"
QT_MOC_LITERAL(10, 87, 17), // "enableMoveButtons"
QT_MOC_LITERAL(11, 105, 11), // "QModelIndex"
QT_MOC_LITERAL(12, 117, 14), // "typedSomething"
QT_MOC_LITERAL(13, 132, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(14, 153, 14), // "QItemSelection"
QT_MOC_LITERAL(15, 168, 8), // "selected"
QT_MOC_LITERAL(16, 177, 10), // "deselected"
QT_MOC_LITERAL(17, 188, 7), // "buttons"
QT_MOC_LITERAL(18, 196, 7), // "Buttons"
QT_MOC_LITERAL(19, 204, 5), // "items"
QT_MOC_LITERAL(20, 210, 15), // "checkAtEntering"
QT_MOC_LITERAL(21, 226, 6), // "Button"
QT_MOC_LITERAL(22, 233, 3), // "Add"
QT_MOC_LITERAL(23, 237, 6), // "Remove"
QT_MOC_LITERAL(24, 244, 6), // "UpDown"
QT_MOC_LITERAL(25, 251, 3) // "All"

    },
    "KEditListWidget\0changed\0\0added\0text\0"
    "removed\0moveItemUp\0moveItemDown\0addItem\0"
    "removeItem\0enableMoveButtons\0QModelIndex\0"
    "typedSomething\0slotSelectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "buttons\0Buttons\0items\0checkAtEntering\0"
    "Button\0Add\0Remove\0UpDown\0All"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KEditListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   88, // properties
       1,  100, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   71,    2, 0x08 /* Private */,
       7,    0,   72,    2, 0x08 /* Private */,
       8,    0,   73,    2, 0x08 /* Private */,
       9,    0,   74,    2, 0x08 /* Private */,
      10,    2,   75,    2, 0x08 /* Private */,
      12,    1,   80,    2, 0x08 /* Private */,
      13,    2,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,    2,    2,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,   15,   16,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x0009510b,
      19, QMetaType::QStringList, 0x00595103,
      20, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,

 // enums: name, alias, flags, count, data
      18,   21, 0x1,    4,  105,

 // enum data: key, value
      22, uint(KEditListWidget::Add),
      23, uint(KEditListWidget::Remove),
      24, uint(KEditListWidget::UpDown),
      25, uint(KEditListWidget::All),

       0        // eod
};

void KEditListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KEditListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->added((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->removed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->moveItemUp(); break;
        case 4: _t->moveItemDown(); break;
        case 5: _t->addItem(); break;
        case 6: _t->removeItem(); break;
        case 7: _t->enableMoveButtons((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 8: _t->typedSomething((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->slotSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KEditListWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KEditListWidget::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KEditListWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KEditListWidget::added)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KEditListWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KEditListWidget::removed)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KEditListWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(_t->buttons()); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->items(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->checkAtEntering(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KEditListWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setButtons(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 1: _t->setItems(*reinterpret_cast< QStringList*>(_v)); break;
        case 2: _t->setCheckAtEntering(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KEditListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KEditListWidget.data,
    qt_meta_data_KEditListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KEditListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KEditListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KEditListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KEditListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KEditListWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KEditListWidget::added(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KEditListWidget::removed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
