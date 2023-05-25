/****************************************************************************
** Meta object code from reading C++ file 'kedittoolbar_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kxmlgui/src/kedittoolbar_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kedittoolbar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDEPrivate__ToolBarListWidget_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDEPrivate__ToolBarListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDEPrivate__ToolBarListWidget_t qt_meta_stringdata_KDEPrivate__ToolBarListWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "KDEPrivate::ToolBarListWidget"
QT_MOC_LITERAL(1, 30, 7), // "dropped"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "ToolBarListWidget*"
QT_MOC_LITERAL(4, 58, 4), // "list"
QT_MOC_LITERAL(5, 63, 5), // "index"
QT_MOC_LITERAL(6, 69, 12), // "ToolBarItem*"
QT_MOC_LITERAL(7, 82, 4), // "item"
QT_MOC_LITERAL(8, 87, 18) // "sourceIsActiveList"

    },
    "KDEPrivate::ToolBarListWidget\0dropped\0"
    "\0ToolBarListWidget*\0list\0index\0"
    "ToolBarItem*\0item\0sourceIsActiveList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDEPrivate__ToolBarListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 6, QMetaType::Bool,    4,    5,    7,    8,

       0        // eod
};

void KDEPrivate::ToolBarListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToolBarListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dropped((*reinterpret_cast< ToolBarListWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< ToolBarItem*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ToolBarListWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ToolBarListWidget::*)(ToolBarListWidget * , int , ToolBarItem * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarListWidget::dropped)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDEPrivate::ToolBarListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_KDEPrivate__ToolBarListWidget.data,
    qt_meta_data_KDEPrivate__ToolBarListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDEPrivate::ToolBarListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDEPrivate::ToolBarListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDEPrivate__ToolBarListWidget.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int KDEPrivate::ToolBarListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KDEPrivate::ToolBarListWidget::dropped(ToolBarListWidget * _t1, int _t2, ToolBarItem * _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_KDEPrivate__IconTextEditDialog_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDEPrivate__IconTextEditDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDEPrivate__IconTextEditDialog_t qt_meta_stringdata_KDEPrivate__IconTextEditDialog = {
    {
QT_MOC_LITERAL(0, 0, 30), // "KDEPrivate::IconTextEditDialog"
QT_MOC_LITERAL(1, 31, 15), // "slotTextChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 4) // "text"

    },
    "KDEPrivate::IconTextEditDialog\0"
    "slotTextChanged\0\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDEPrivate__IconTextEditDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void KDEPrivate::IconTextEditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IconTextEditDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDEPrivate::IconTextEditDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_KDEPrivate__IconTextEditDialog.data,
    qt_meta_data_KDEPrivate__IconTextEditDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDEPrivate::IconTextEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDEPrivate::IconTextEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDEPrivate__IconTextEditDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int KDEPrivate::IconTextEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_KDEPrivate__KEditToolBarWidget_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDEPrivate__KEditToolBarWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDEPrivate__KEditToolBarWidget_t qt_meta_stringdata_KDEPrivate__KEditToolBarWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "KDEPrivate::KEditToolBarWidget"
QT_MOC_LITERAL(1, 31, 8), // "enableOk"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "KDEPrivate::KEditToolBarWidget\0enableOk\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDEPrivate__KEditToolBarWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void KDEPrivate::KEditToolBarWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KEditToolBarWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enableOk((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KEditToolBarWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KEditToolBarWidget::enableOk)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDEPrivate::KEditToolBarWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KDEPrivate__KEditToolBarWidget.data,
    qt_meta_data_KDEPrivate__KEditToolBarWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDEPrivate::KEditToolBarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDEPrivate::KEditToolBarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDEPrivate__KEditToolBarWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KXMLGUIClient"))
        return static_cast< KXMLGUIClient*>(this);
    return QWidget::qt_metacast(_clname);
}

int KDEPrivate::KEditToolBarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KDEPrivate::KEditToolBarWidget::enableOk(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
