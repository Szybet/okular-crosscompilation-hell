/****************************************************************************
** Meta object code from reading C++ file 'kactionselector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/kactionselector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kactionselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KActionSelector_t {
    QByteArrayData data[26];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KActionSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KActionSelector_t qt_meta_stringdata_KActionSelector = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KActionSelector"
QT_MOC_LITERAL(1, 16, 5), // "added"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 40, 4), // "item"
QT_MOC_LITERAL(5, 45, 7), // "removed"
QT_MOC_LITERAL(6, 53, 7), // "movedUp"
QT_MOC_LITERAL(7, 61, 9), // "movedDown"
QT_MOC_LITERAL(8, 71, 17), // "setButtonsEnabled"
QT_MOC_LITERAL(9, 89, 17), // "moveOnDoubleClick"
QT_MOC_LITERAL(10, 107, 15), // "keyboardEnabled"
QT_MOC_LITERAL(11, 123, 14), // "availableLabel"
QT_MOC_LITERAL(12, 138, 13), // "selectedLabel"
QT_MOC_LITERAL(13, 152, 24), // "availableInsertionPolicy"
QT_MOC_LITERAL(14, 177, 15), // "InsertionPolicy"
QT_MOC_LITERAL(15, 193, 23), // "selectedInsertionPolicy"
QT_MOC_LITERAL(16, 217, 17), // "showUpDownButtons"
QT_MOC_LITERAL(17, 235, 10), // "MoveButton"
QT_MOC_LITERAL(18, 246, 9), // "ButtonAdd"
QT_MOC_LITERAL(19, 256, 12), // "ButtonRemove"
QT_MOC_LITERAL(20, 269, 8), // "ButtonUp"
QT_MOC_LITERAL(21, 278, 10), // "ButtonDown"
QT_MOC_LITERAL(22, 289, 12), // "BelowCurrent"
QT_MOC_LITERAL(23, 302, 6), // "Sorted"
QT_MOC_LITERAL(24, 309, 5), // "AtTop"
QT_MOC_LITERAL(25, 315, 8) // "AtBottom"

    },
    "KActionSelector\0added\0\0QListWidgetItem*\0"
    "item\0removed\0movedUp\0movedDown\0"
    "setButtonsEnabled\0moveOnDoubleClick\0"
    "keyboardEnabled\0availableLabel\0"
    "selectedLabel\0availableInsertionPolicy\0"
    "InsertionPolicy\0selectedInsertionPolicy\0"
    "showUpDownButtons\0MoveButton\0ButtonAdd\0"
    "ButtonRemove\0ButtonUp\0ButtonDown\0"
    "BelowCurrent\0Sorted\0AtTop\0AtBottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KActionSelector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       7,   52, // properties
       2,   73, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,
       7,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::QString, 0x00095103,
      12, QMetaType::QString, 0x00095103,
      13, 0x80000000 | 14, 0x0009510b,
      15, 0x80000000 | 14, 0x0009510b,
      16, QMetaType::Bool, 0x00095103,

 // enums: name, alias, flags, count, data
      17,   17, 0x0,    4,   83,
      14,   14, 0x0,    4,   91,

 // enum data: key, value
      18, uint(KActionSelector::ButtonAdd),
      19, uint(KActionSelector::ButtonRemove),
      20, uint(KActionSelector::ButtonUp),
      21, uint(KActionSelector::ButtonDown),
      22, uint(KActionSelector::BelowCurrent),
      23, uint(KActionSelector::Sorted),
      24, uint(KActionSelector::AtTop),
      25, uint(KActionSelector::AtBottom),

       0        // eod
};

void KActionSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KActionSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->added((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->removed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->movedUp((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->movedDown((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->setButtonsEnabled(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KActionSelector::*)(QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KActionSelector::added)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KActionSelector::*)(QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KActionSelector::removed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KActionSelector::*)(QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KActionSelector::movedUp)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KActionSelector::*)(QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KActionSelector::movedDown)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KActionSelector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->moveOnDoubleClick(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->keyboardEnabled(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->availableLabel(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->selectedLabel(); break;
        case 4: *reinterpret_cast< InsertionPolicy*>(_v) = _t->availableInsertionPolicy(); break;
        case 5: *reinterpret_cast< InsertionPolicy*>(_v) = _t->selectedInsertionPolicy(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->showUpDownButtons(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KActionSelector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMoveOnDoubleClick(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setKeyboardEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAvailableLabel(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSelectedLabel(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setAvailableInsertionPolicy(*reinterpret_cast< InsertionPolicy*>(_v)); break;
        case 5: _t->setSelectedInsertionPolicy(*reinterpret_cast< InsertionPolicy*>(_v)); break;
        case 6: _t->setShowUpDownButtons(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KActionSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KActionSelector.data,
    qt_meta_data_KActionSelector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KActionSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KActionSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KActionSelector.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KActionSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KActionSelector::added(QListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KActionSelector::removed(QListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KActionSelector::movedUp(QListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KActionSelector::movedDown(QListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
