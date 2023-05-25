/****************************************************************************
** Meta object code from reading C++ file 'kkeysequencewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kxmlgui/src/kkeysequencewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kkeysequencewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KKeySequenceWidget_t {
    QByteArrayData data[23];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KKeySequenceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KKeySequenceWidget_t qt_meta_stringdata_KKeySequenceWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "KKeySequenceWidget"
QT_MOC_LITERAL(1, 19, 18), // "keySequenceChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 3), // "seq"
QT_MOC_LITERAL(4, 43, 13), // "stealShortcut"
QT_MOC_LITERAL(5, 57, 8), // "QAction*"
QT_MOC_LITERAL(6, 66, 6), // "action"
QT_MOC_LITERAL(7, 73, 18), // "captureKeySequence"
QT_MOC_LITERAL(8, 92, 14), // "setKeySequence"
QT_MOC_LITERAL(9, 107, 10), // "Validation"
QT_MOC_LITERAL(10, 118, 3), // "val"
QT_MOC_LITERAL(11, 122, 16), // "clearKeySequence"
QT_MOC_LITERAL(12, 139, 18), // "applyStealShortcut"
QT_MOC_LITERAL(13, 158, 11), // "keySequence"
QT_MOC_LITERAL(14, 170, 24), // "multiKeyShortcutsAllowed"
QT_MOC_LITERAL(15, 195, 24), // "checkForConflictsAgainst"
QT_MOC_LITERAL(16, 220, 13), // "ShortcutTypes"
QT_MOC_LITERAL(17, 234, 19), // "modifierlessAllowed"
QT_MOC_LITERAL(18, 254, 12), // "ShortcutType"
QT_MOC_LITERAL(19, 267, 4), // "None"
QT_MOC_LITERAL(20, 272, 14), // "LocalShortcuts"
QT_MOC_LITERAL(21, 287, 17), // "StandardShortcuts"
QT_MOC_LITERAL(22, 305, 15) // "GlobalShortcuts"

    },
    "KKeySequenceWidget\0keySequenceChanged\0"
    "\0seq\0stealShortcut\0QAction*\0action\0"
    "captureKeySequence\0setKeySequence\0"
    "Validation\0val\0clearKeySequence\0"
    "applyStealShortcut\0keySequence\0"
    "multiKeyShortcutsAllowed\0"
    "checkForConflictsAgainst\0ShortcutTypes\0"
    "modifierlessAllowed\0ShortcutType\0None\0"
    "LocalShortcuts\0StandardShortcuts\0"
    "GlobalShortcuts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KKeySequenceWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   68, // properties
       1,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    2,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   57,    2, 0x0a /* Public */,
       8,    2,   58,    2, 0x0a /* Public */,
       8,    1,   63,    2, 0x2a /* Public | MethodCloned */,
      11,    0,   66,    2, 0x0a /* Public */,
      12,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QKeySequence,    3,
    QMetaType::Void, QMetaType::QKeySequence, 0x80000000 | 5,    3,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QKeySequence, 0x80000000 | 9,    3,   10,
    QMetaType::Void, QMetaType::QKeySequence,    3,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::QKeySequence, 0x00495103,
      14, QMetaType::Bool, 0x00095103,
      15, 0x80000000 | 16, 0x0009510b,
      17, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

 // enums: name, alias, flags, count, data
      16,   18, 0x1,    4,   89,

 // enum data: key, value
      19, uint(KKeySequenceWidget::None),
      20, uint(KKeySequenceWidget::LocalShortcuts),
      21, uint(KKeySequenceWidget::StandardShortcuts),
      22, uint(KKeySequenceWidget::GlobalShortcuts),

       0        // eod
};

void KKeySequenceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KKeySequenceWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keySequenceChanged((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 1: _t->stealShortcut((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 2: _t->captureKeySequence(); break;
        case 3: _t->setKeySequence((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< Validation(*)>(_a[2]))); break;
        case 4: _t->setKeySequence((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 5: _t->clearKeySequence(); break;
        case 6: _t->applyStealShortcut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KKeySequenceWidget::*)(const QKeySequence & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KKeySequenceWidget::keySequenceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KKeySequenceWidget::*)(const QKeySequence & , QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KKeySequenceWidget::stealShortcut)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KKeySequenceWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QKeySequence*>(_v) = _t->keySequence(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->multiKeyShortcutsAllowed(); break;
        case 2: *reinterpret_cast<int*>(_v) = QFlag(_t->checkForConflictsAgainst()); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isModifierlessAllowed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KKeySequenceWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setKeySequence(*reinterpret_cast< QKeySequence*>(_v)); break;
        case 1: _t->setMultiKeyShortcutsAllowed(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setCheckForConflictsAgainst(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 3: _t->setModifierlessAllowed(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KKeySequenceWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KKeySequenceWidget.data,
    qt_meta_data_KKeySequenceWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KKeySequenceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KKeySequenceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KKeySequenceWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KKeySequenceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KKeySequenceWidget::keySequenceChanged(const QKeySequence & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KKeySequenceWidget::stealShortcut(const QKeySequence & _t1, QAction * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
