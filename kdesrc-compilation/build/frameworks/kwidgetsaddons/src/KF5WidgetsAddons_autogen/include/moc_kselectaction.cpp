/****************************************************************************
** Meta object code from reading C++ file 'kselectaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/kselectaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kselectaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KSelectAction_t {
    QByteArrayData data[23];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KSelectAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KSelectAction_t qt_meta_stringdata_KSelectAction = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KSelectAction"
QT_MOC_LITERAL(1, 14, 9), // "triggered"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "QAction*"
QT_MOC_LITERAL(4, 34, 6), // "action"
QT_MOC_LITERAL(5, 41, 5), // "index"
QT_MOC_LITERAL(6, 47, 14), // "indexTriggered"
QT_MOC_LITERAL(7, 62, 4), // "text"
QT_MOC_LITERAL(8, 67, 13), // "textTriggered"
QT_MOC_LITERAL(9, 81, 15), // "actionTriggered"
QT_MOC_LITERAL(10, 97, 11), // "slotToggled"
QT_MOC_LITERAL(11, 109, 13), // "currentAction"
QT_MOC_LITERAL(12, 123, 8), // "editable"
QT_MOC_LITERAL(13, 132, 10), // "comboWidth"
QT_MOC_LITERAL(14, 143, 11), // "currentText"
QT_MOC_LITERAL(15, 155, 11), // "toolBarMode"
QT_MOC_LITERAL(16, 167, 11), // "ToolBarMode"
QT_MOC_LITERAL(17, 179, 19), // "toolButtonPopupMode"
QT_MOC_LITERAL(18, 199, 32), // "QToolButton::ToolButtonPopupMode"
QT_MOC_LITERAL(19, 232, 11), // "currentItem"
QT_MOC_LITERAL(20, 244, 5), // "items"
QT_MOC_LITERAL(21, 250, 8), // "MenuMode"
QT_MOC_LITERAL(22, 259, 12) // "ComboBoxMode"

    },
    "KSelectAction\0triggered\0\0QAction*\0"
    "action\0index\0indexTriggered\0text\0"
    "textTriggered\0actionTriggered\0slotToggled\0"
    "currentAction\0editable\0comboWidth\0"
    "currentText\0toolBarMode\0ToolBarMode\0"
    "toolButtonPopupMode\0"
    "QToolButton::ToolButtonPopupMode\0"
    "currentItem\0items\0MenuMode\0ComboBoxMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KSelectAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       8,   70, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       1,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,
       1,    1,   58,    2, 0x06 /* Public */,
       8,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   64,    2, 0x09 /* Protected */,
      10,    1,   67,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
      11, 0x80000000 | 3, 0x0009510b,
      12, QMetaType::Bool, 0x00095103,
      13, QMetaType::Int, 0x00095103,
      14, QMetaType::QString, 0x00095001,
      15, 0x80000000 | 16, 0x0009510b,
      17, 0x80000000 | 18, 0x0009510b,
      19, QMetaType::Int, 0x00095103,
      20, QMetaType::QStringList, 0x00095103,

 // enums: name, alias, flags, count, data
      16,   16, 0x0,    2,   99,

 // enum data: key, value
      21, uint(KSelectAction::MenuMode),
      22, uint(KSelectAction::ComboBoxMode),

       0        // eod
};

void KSelectAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KSelectAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->indexTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->triggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->textTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->slotToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KSelectAction::*)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KSelectAction::triggered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KSelectAction::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KSelectAction::triggered)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KSelectAction::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KSelectAction::indexTriggered)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KSelectAction::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KSelectAction::triggered)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KSelectAction::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KSelectAction::textTriggered)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KSelectAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAction**>(_v) = _t->currentAction(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isEditable(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->comboWidth(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->currentText(); break;
        case 4: *reinterpret_cast< ToolBarMode*>(_v) = _t->toolBarMode(); break;
        case 5: *reinterpret_cast< QToolButton::ToolButtonPopupMode*>(_v) = _t->toolButtonPopupMode(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->currentItem(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->items(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KSelectAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentAction(*reinterpret_cast< QAction**>(_v)); break;
        case 1: _t->setEditable(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setComboWidth(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setToolBarMode(*reinterpret_cast< ToolBarMode*>(_v)); break;
        case 5: _t->setToolButtonPopupMode(*reinterpret_cast< QToolButton::ToolButtonPopupMode*>(_v)); break;
        case 6: _t->setCurrentItem(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setItems(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_KSelectAction[] = {
    QMetaObject::SuperData::link<QToolButton::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject KSelectAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidgetAction::staticMetaObject>(),
    qt_meta_stringdata_KSelectAction.data,
    qt_meta_data_KSelectAction,
    qt_static_metacall,
    qt_meta_extradata_KSelectAction,
    nullptr
} };


const QMetaObject *KSelectAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KSelectAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KSelectAction.stringdata0))
        return static_cast<void*>(this);
    return QWidgetAction::qt_metacast(_clname);
}

int KSelectAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidgetAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KSelectAction::triggered(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KSelectAction::triggered(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KSelectAction::indexTriggered(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KSelectAction::triggered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KSelectAction::textTriggered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
