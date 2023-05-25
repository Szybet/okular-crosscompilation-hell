/****************************************************************************
** Meta object code from reading C++ file 'klistwidgetsearchline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kitemviews/src/klistwidgetsearchline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'klistwidgetsearchline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KListWidgetSearchLine_t {
    QByteArrayData data[18];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KListWidgetSearchLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KListWidgetSearchLine_t qt_meta_stringdata_KListWidgetSearchLine = {
    {
QT_MOC_LITERAL(0, 0, 21), // "KListWidgetSearchLine"
QT_MOC_LITERAL(1, 22, 12), // "updateSearch"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 1), // "s"
QT_MOC_LITERAL(4, 38, 18), // "setCaseSensitivity"
QT_MOC_LITERAL(5, 57, 19), // "Qt::CaseSensitivity"
QT_MOC_LITERAL(6, 77, 2), // "cs"
QT_MOC_LITERAL(7, 80, 13), // "setListWidget"
QT_MOC_LITERAL(8, 94, 12), // "QListWidget*"
QT_MOC_LITERAL(9, 107, 2), // "lv"
QT_MOC_LITERAL(10, 110, 5), // "clear"
QT_MOC_LITERAL(11, 116, 20), // "_k_listWidgetDeleted"
QT_MOC_LITERAL(12, 137, 14), // "_k_queueSearch"
QT_MOC_LITERAL(13, 152, 17), // "_k_activateSearch"
QT_MOC_LITERAL(14, 170, 15), // "_k_rowsInserted"
QT_MOC_LITERAL(15, 186, 11), // "QModelIndex"
QT_MOC_LITERAL(16, 198, 14), // "_k_dataChanged"
QT_MOC_LITERAL(17, 213, 12) // "clickMessage"

    },
    "KListWidgetSearchLine\0updateSearch\0\0"
    "s\0setCaseSensitivity\0Qt::CaseSensitivity\0"
    "cs\0setListWidget\0QListWidget*\0lv\0clear\0"
    "_k_listWidgetDeleted\0_k_queueSearch\0"
    "_k_activateSearch\0_k_rowsInserted\0"
    "QModelIndex\0_k_dataChanged\0clickMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KListWidgetSearchLine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       1,    0,   67,    2, 0x2a /* Public | MethodCloned */,
       4,    1,   68,    2, 0x0a /* Public */,
       7,    1,   71,    2, 0x0a /* Public */,
      10,    0,   74,    2, 0x0a /* Public */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    1,   76,    2, 0x08 /* Private */,
      13,    0,   79,    2, 0x08 /* Private */,
      14,    3,   80,    2, 0x08 /* Private */,
      16,    2,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,    2,    2,

 // properties: name, type, flags
      17, QMetaType::QString, 0x00095103,

       0        // eod
};

void KListWidgetSearchLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KListWidgetSearchLine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateSearch(); break;
        case 2: _t->setCaseSensitivity((*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[1]))); break;
        case 3: _t->setListWidget((*reinterpret_cast< QListWidget*(*)>(_a[1]))); break;
        case 4: _t->clear(); break;
        case 5: _t->d->_k_listWidgetDeleted(); break;
        case 6: _t->d->_k_queueSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->d->_k_activateSearch(); break;
        case 8: _t->d->_k_rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->d->_k_dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KListWidgetSearchLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->clickMessage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KListWidgetSearchLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setClickMessage(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KListWidgetSearchLine::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_KListWidgetSearchLine.data,
    qt_meta_data_KListWidgetSearchLine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KListWidgetSearchLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KListWidgetSearchLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KListWidgetSearchLine.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int KListWidgetSearchLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
