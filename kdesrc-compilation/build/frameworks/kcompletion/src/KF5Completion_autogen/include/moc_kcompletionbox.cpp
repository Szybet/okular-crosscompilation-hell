/****************************************************************************
** Meta object code from reading C++ file 'kcompletionbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kcompletion/src/kcompletionbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcompletionbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCompletionBox_t {
    QByteArrayData data[29];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCompletionBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCompletionBox_t qt_meta_stringdata_KCompletionBox = {
    {
QT_MOC_LITERAL(0, 0, 14), // "KCompletionBox"
QT_MOC_LITERAL(1, 15, 9), // "activated"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "text"
QT_MOC_LITERAL(4, 31, 13), // "textActivated"
QT_MOC_LITERAL(5, 45, 13), // "userCancelled"
QT_MOC_LITERAL(6, 59, 11), // "insertItems"
QT_MOC_LITERAL(7, 71, 5), // "items"
QT_MOC_LITERAL(8, 77, 5), // "index"
QT_MOC_LITERAL(9, 83, 8), // "setItems"
QT_MOC_LITERAL(10, 92, 5), // "popup"
QT_MOC_LITERAL(11, 98, 14), // "setTabHandling"
QT_MOC_LITERAL(12, 113, 6), // "enable"
QT_MOC_LITERAL(13, 120, 16), // "setCancelledText"
QT_MOC_LITERAL(14, 137, 19), // "setActivateOnSelect"
QT_MOC_LITERAL(15, 157, 6), // "doEmit"
QT_MOC_LITERAL(16, 164, 4), // "down"
QT_MOC_LITERAL(17, 169, 2), // "up"
QT_MOC_LITERAL(18, 172, 8), // "pageDown"
QT_MOC_LITERAL(19, 181, 6), // "pageUp"
QT_MOC_LITERAL(20, 188, 4), // "home"
QT_MOC_LITERAL(21, 193, 3), // "end"
QT_MOC_LITERAL(22, 197, 10), // "setVisible"
QT_MOC_LITERAL(23, 208, 7), // "visible"
QT_MOC_LITERAL(24, 216, 13), // "slotActivated"
QT_MOC_LITERAL(25, 230, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(26, 247, 13), // "isTabHandling"
QT_MOC_LITERAL(27, 261, 13), // "cancelledText"
QT_MOC_LITERAL(28, 275, 16) // "activateOnSelect"

    },
    "KCompletionBox\0activated\0\0text\0"
    "textActivated\0userCancelled\0insertItems\0"
    "items\0index\0setItems\0popup\0setTabHandling\0"
    "enable\0setCancelledText\0setActivateOnSelect\0"
    "doEmit\0down\0up\0pageDown\0pageUp\0home\0"
    "end\0setVisible\0visible\0slotActivated\0"
    "QListWidgetItem*\0isTabHandling\0"
    "cancelledText\0activateOnSelect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCompletionBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       3,  146, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    1,  107,    2, 0x06 /* Public */,
       5,    1,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,  113,    2, 0x0a /* Public */,
       6,    1,  118,    2, 0x2a /* Public | MethodCloned */,
       9,    1,  121,    2, 0x0a /* Public */,
      10,    0,  124,    2, 0x0a /* Public */,
      11,    1,  125,    2, 0x0a /* Public */,
      13,    1,  128,    2, 0x0a /* Public */,
      14,    1,  131,    2, 0x0a /* Public */,
      16,    0,  134,    2, 0x0a /* Public */,
      17,    0,  135,    2, 0x0a /* Public */,
      18,    0,  136,    2, 0x0a /* Public */,
      19,    0,  137,    2, 0x0a /* Public */,
      20,    0,  138,    2, 0x0a /* Public */,
      21,    0,  139,    2, 0x0a /* Public */,
      22,    1,  140,    2, 0x0a /* Public */,
      24,    1,  143,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::QStringList,    7,
    QMetaType::Void, QMetaType::QStringList,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, 0x80000000 | 25,    2,

 // properties: name, type, flags
      26, QMetaType::Bool, 0x00095003,
      27, QMetaType::QString, 0x00095103,
      28, QMetaType::Bool, 0x00095103,

       0        // eod
};

void KCompletionBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KCompletionBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->textActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->userCancelled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->insertItems((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->insertItems((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->setItems((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: _t->popup(); break;
        case 7: _t->setTabHandling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setCancelledText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setActivateOnSelect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->down(); break;
        case 11: _t->up(); break;
        case 12: _t->pageDown(); break;
        case 13: _t->pageUp(); break;
        case 14: _t->home(); break;
        case 15: _t->end(); break;
        case 16: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->slotActivated((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KCompletionBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCompletionBox::activated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KCompletionBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCompletionBox::textActivated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KCompletionBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCompletionBox::userCancelled)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KCompletionBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isTabHandling(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->cancelledText(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->activateOnSelect(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KCompletionBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTabHandling(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCancelledText(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setActivateOnSelect(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KCompletionBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_KCompletionBox.data,
    qt_meta_data_KCompletionBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCompletionBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCompletionBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCompletionBox.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int KCompletionBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
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
void KCompletionBox::activated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KCompletionBox::textActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KCompletionBox::userCancelled(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
