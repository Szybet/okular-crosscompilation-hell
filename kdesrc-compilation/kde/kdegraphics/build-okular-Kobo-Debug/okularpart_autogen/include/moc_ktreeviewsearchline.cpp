/****************************************************************************
** Meta object code from reading C++ file 'ktreeviewsearchline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/part/ktreeviewsearchline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ktreeviewsearchline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KTreeViewSearchLine_t {
    QByteArrayData data[17];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KTreeViewSearchLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KTreeViewSearchLine_t qt_meta_stringdata_KTreeViewSearchLine = {
    {
QT_MOC_LITERAL(0, 0, 19), // "KTreeViewSearchLine"
QT_MOC_LITERAL(1, 20, 20), // "searchOptionsChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "updateSearch"
QT_MOC_LITERAL(4, 55, 7), // "pattern"
QT_MOC_LITERAL(5, 63, 18), // "setCaseSensitivity"
QT_MOC_LITERAL(6, 82, 19), // "Qt::CaseSensitivity"
QT_MOC_LITERAL(7, 102, 15), // "caseSensitivity"
QT_MOC_LITERAL(8, 118, 20), // "setRegularExpression"
QT_MOC_LITERAL(9, 139, 5), // "value"
QT_MOC_LITERAL(10, 145, 11), // "setTreeView"
QT_MOC_LITERAL(11, 157, 10), // "QTreeView*"
QT_MOC_LITERAL(12, 168, 8), // "treeView"
QT_MOC_LITERAL(13, 177, 11), // "queueSearch"
QT_MOC_LITERAL(14, 189, 6), // "search"
QT_MOC_LITERAL(15, 196, 14), // "activateSearch"
QT_MOC_LITERAL(16, 211, 13) // "caseSensitity"

    },
    "KTreeViewSearchLine\0searchOptionsChanged\0"
    "\0updateSearch\0pattern\0setCaseSensitivity\0"
    "Qt::CaseSensitivity\0caseSensitivity\0"
    "setRegularExpression\0value\0setTreeView\0"
    "QTreeView*\0treeView\0queueSearch\0search\0"
    "activateSearch\0caseSensitity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KTreeViewSearchLine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       3,    0,   58,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   59,    2, 0x0a /* Public */,
       8,    1,   62,    2, 0x0a /* Public */,
      10,    1,   65,    2, 0x0a /* Public */,
      13,    1,   68,    2, 0x09 /* Protected */,
      15,    0,   71,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,

 // properties: name, type, flags
      16, 0x80000000 | 6, 0x0049500b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void KTreeViewSearchLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KTreeViewSearchLine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchOptionsChanged(); break;
        case 1: _t->updateSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateSearch(); break;
        case 3: _t->setCaseSensitivity((*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[1]))); break;
        case 4: _t->setRegularExpression((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setTreeView((*reinterpret_cast< QTreeView*(*)>(_a[1]))); break;
        case 6: _t->queueSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->activateSearch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KTreeViewSearchLine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTreeViewSearchLine::searchOptionsChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KTreeViewSearchLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::CaseSensitivity*>(_v) = _t->caseSensitivity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KTreeViewSearchLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCaseSensitivity(*reinterpret_cast< Qt::CaseSensitivity*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KTreeViewSearchLine::staticMetaObject = { {
    QMetaObject::SuperData::link<KLineEdit::staticMetaObject>(),
    qt_meta_stringdata_KTreeViewSearchLine.data,
    qt_meta_data_KTreeViewSearchLine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KTreeViewSearchLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KTreeViewSearchLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KTreeViewSearchLine.stringdata0))
        return static_cast<void*>(this);
    return KLineEdit::qt_metacast(_clname);
}

int KTreeViewSearchLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KLineEdit::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KTreeViewSearchLine::searchOptionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_KTreeViewSearchLineWidget_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KTreeViewSearchLineWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KTreeViewSearchLineWidget_t qt_meta_stringdata_KTreeViewSearchLineWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "KTreeViewSearchLineWidget"
QT_MOC_LITERAL(1, 26, 13), // "createWidgets"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "KTreeViewSearchLineWidget\0createWidgets\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KTreeViewSearchLineWidget[] = {

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
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void KTreeViewSearchLineWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KTreeViewSearchLineWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createWidgets(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KTreeViewSearchLineWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KTreeViewSearchLineWidget.data,
    qt_meta_data_KTreeViewSearchLineWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KTreeViewSearchLineWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KTreeViewSearchLineWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KTreeViewSearchLineWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KTreeViewSearchLineWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
