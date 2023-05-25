/****************************************************************************
** Meta object code from reading C++ file 'kshortcutsdialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kxmlgui/src/kshortcutsdialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kshortcutsdialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KShortcutsEditorDelegate_t {
    QByteArrayData data[14];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KShortcutsEditorDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KShortcutsEditorDelegate_t qt_meta_stringdata_KShortcutsEditorDelegate = {
    {
QT_MOC_LITERAL(0, 0, 24), // "KShortcutsEditorDelegate"
QT_MOC_LITERAL(1, 25, 15), // "shortcutChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 54, 18), // "hiddenBySearchLine"
QT_MOC_LITERAL(5, 73, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 90, 13), // "itemActivated"
QT_MOC_LITERAL(7, 104, 5), // "index"
QT_MOC_LITERAL(8, 110, 13), // "itemCollapsed"
QT_MOC_LITERAL(9, 124, 13), // "stealShortcut"
QT_MOC_LITERAL(10, 138, 3), // "seq"
QT_MOC_LITERAL(11, 142, 8), // "QAction*"
QT_MOC_LITERAL(12, 151, 6), // "action"
QT_MOC_LITERAL(13, 158, 18) // "keySequenceChanged"

    },
    "KShortcutsEditorDelegate\0shortcutChanged\0"
    "\0QModelIndex\0hiddenBySearchLine\0"
    "QTreeWidgetItem*\0itemActivated\0index\0"
    "itemCollapsed\0stealShortcut\0seq\0"
    "QAction*\0action\0keySequenceChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KShortcutsEditorDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   49,    2, 0x0a /* Public */,
       6,    1,   54,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,
       9,    2,   60,    2, 0x08 /* Private */,
      13,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, QMetaType::QKeySequence, 0x80000000 | 11,   10,   12,
    QMetaType::Void, QMetaType::QKeySequence,    2,

       0        // eod
};

void KShortcutsEditorDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KShortcutsEditorDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shortcutChanged((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->hiddenBySearchLine((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->itemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->itemCollapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->stealShortcut((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 5: _t->keySequenceChanged((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KShortcutsEditorDelegate::*)(const QVariant & , const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KShortcutsEditorDelegate::shortcutChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KShortcutsEditorDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<KExtendableItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_KShortcutsEditorDelegate.data,
    qt_meta_data_KShortcutsEditorDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KShortcutsEditorDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KShortcutsEditorDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KShortcutsEditorDelegate.stringdata0))
        return static_cast<void*>(this);
    return KExtendableItemDelegate::qt_metacast(_clname);
}

int KShortcutsEditorDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KExtendableItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void KShortcutsEditorDelegate::shortcutChanged(const QVariant & _t1, const QModelIndex & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TabConnectedWidget_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabConnectedWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabConnectedWidget_t qt_meta_stringdata_TabConnectedWidget = {
    {
QT_MOC_LITERAL(0, 0, 18) // "TabConnectedWidget"

    },
    "TabConnectedWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabConnectedWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TabConnectedWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TabConnectedWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TabConnectedWidget.data,
    qt_meta_data_TabConnectedWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TabConnectedWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabConnectedWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TabConnectedWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TabConnectedWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ShortcutEditWidget_t {
    QByteArrayData data[11];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShortcutEditWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShortcutEditWidget_t qt_meta_stringdata_ShortcutEditWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ShortcutEditWidget"
QT_MOC_LITERAL(1, 19, 18), // "keySequenceChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "stealShortcut"
QT_MOC_LITERAL(4, 53, 3), // "seq"
QT_MOC_LITERAL(5, 57, 8), // "QAction*"
QT_MOC_LITERAL(6, 66, 6), // "action"
QT_MOC_LITERAL(7, 73, 14), // "setKeySequence"
QT_MOC_LITERAL(8, 88, 9), // "activeSeq"
QT_MOC_LITERAL(9, 98, 14), // "defaultToggled"
QT_MOC_LITERAL(10, 113, 9) // "setCustom"

    },
    "ShortcutEditWidget\0keySequenceChanged\0"
    "\0stealShortcut\0seq\0QAction*\0action\0"
    "setKeySequence\0activeSeq\0defaultToggled\0"
    "setCustom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShortcutEditWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    2,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   47,    2, 0x0a /* Public */,
       9,    1,   50,    2, 0x08 /* Private */,
      10,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QKeySequence,    2,
    QMetaType::Void, QMetaType::QKeySequence, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QKeySequence,    8,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QKeySequence,    2,

       0        // eod
};

void ShortcutEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShortcutEditWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keySequenceChanged((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 1: _t->stealShortcut((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 2: _t->setKeySequence((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 3: _t->defaultToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setCustom((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShortcutEditWidget::*)(const QKeySequence & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortcutEditWidget::keySequenceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ShortcutEditWidget::*)(const QKeySequence & , QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortcutEditWidget::stealShortcut)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ShortcutEditWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<TabConnectedWidget::staticMetaObject>(),
    qt_meta_stringdata_ShortcutEditWidget.data,
    qt_meta_data_ShortcutEditWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShortcutEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShortcutEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutEditWidget.stringdata0))
        return static_cast<void*>(this);
    return TabConnectedWidget::qt_metacast(_clname);
}

int ShortcutEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TabConnectedWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ShortcutEditWidget::keySequenceChanged(const QKeySequence & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ShortcutEditWidget::stealShortcut(const QKeySequence & _t1, QAction * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_KShortcutSchemesEditor_t {
    QByteArrayData data[8];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KShortcutSchemesEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KShortcutSchemesEditor_t qt_meta_stringdata_KShortcutSchemesEditor = {
    {
QT_MOC_LITERAL(0, 0, 22), // "KShortcutSchemesEditor"
QT_MOC_LITERAL(1, 23, 22), // "shortcutsSchemeChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 9), // "newScheme"
QT_MOC_LITERAL(4, 57, 12), // "deleteScheme"
QT_MOC_LITERAL(5, 70, 21), // "exportShortcutsScheme"
QT_MOC_LITERAL(6, 92, 21), // "importShortcutsScheme"
QT_MOC_LITERAL(7, 114, 23) // "saveAsDefaultsForScheme"

    },
    "KShortcutSchemesEditor\0shortcutsSchemeChanged\0"
    "\0newScheme\0deleteScheme\0exportShortcutsScheme\0"
    "importShortcutsScheme\0saveAsDefaultsForScheme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KShortcutSchemesEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   47,    2, 0x08 /* Private */,
       4,    0,   48,    2, 0x08 /* Private */,
       5,    0,   49,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KShortcutSchemesEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KShortcutSchemesEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shortcutsSchemeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->newScheme(); break;
        case 2: _t->deleteScheme(); break;
        case 3: _t->exportShortcutsScheme(); break;
        case 4: _t->importShortcutsScheme(); break;
        case 5: _t->saveAsDefaultsForScheme(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KShortcutSchemesEditor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KShortcutSchemesEditor::shortcutsSchemeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KShortcutSchemesEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QGroupBox::staticMetaObject>(),
    qt_meta_stringdata_KShortcutSchemesEditor.data,
    qt_meta_data_KShortcutSchemesEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KShortcutSchemesEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KShortcutSchemesEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KShortcutSchemesEditor.stringdata0))
        return static_cast<void*>(this);
    return QGroupBox::qt_metacast(_clname);
}

int KShortcutSchemesEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void KShortcutSchemesEditor::shortcutsSchemeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
