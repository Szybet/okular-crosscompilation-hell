/****************************************************************************
** Meta object code from reading C++ file 'kcompletion.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kcompletion/src/kcompletion.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcompletion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCompletion_t {
    QByteArrayData data[28];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCompletion_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCompletion_t qt_meta_stringdata_KCompletion = {
    {
QT_MOC_LITERAL(0, 0, 11), // "KCompletion"
QT_MOC_LITERAL(1, 12, 5), // "match"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 4), // "item"
QT_MOC_LITERAL(4, 24, 7), // "matches"
QT_MOC_LITERAL(5, 32, 9), // "matchlist"
QT_MOC_LITERAL(6, 42, 15), // "multipleMatches"
QT_MOC_LITERAL(7, 58, 14), // "makeCompletion"
QT_MOC_LITERAL(8, 73, 6), // "string"
QT_MOC_LITERAL(9, 80, 13), // "previousMatch"
QT_MOC_LITERAL(10, 94, 9), // "nextMatch"
QT_MOC_LITERAL(11, 104, 18), // "slotMakeCompletion"
QT_MOC_LITERAL(12, 123, 17), // "slotPreviousMatch"
QT_MOC_LITERAL(13, 141, 13), // "slotNextMatch"
QT_MOC_LITERAL(14, 155, 11), // "insertItems"
QT_MOC_LITERAL(15, 167, 5), // "items"
QT_MOC_LITERAL(16, 173, 8), // "setItems"
QT_MOC_LITERAL(17, 182, 8), // "itemList"
QT_MOC_LITERAL(18, 191, 7), // "addItem"
QT_MOC_LITERAL(19, 199, 6), // "weight"
QT_MOC_LITERAL(20, 206, 10), // "removeItem"
QT_MOC_LITERAL(21, 217, 5), // "clear"
QT_MOC_LITERAL(22, 223, 5), // "order"
QT_MOC_LITERAL(23, 229, 9), // "CompOrder"
QT_MOC_LITERAL(24, 239, 10), // "ignoreCase"
QT_MOC_LITERAL(25, 250, 6), // "Sorted"
QT_MOC_LITERAL(26, 257, 9), // "Insertion"
QT_MOC_LITERAL(27, 267, 8) // "Weighted"

    },
    "KCompletion\0match\0\0item\0matches\0"
    "matchlist\0multipleMatches\0makeCompletion\0"
    "string\0previousMatch\0nextMatch\0"
    "slotMakeCompletion\0slotPreviousMatch\0"
    "slotNextMatch\0insertItems\0items\0"
    "setItems\0itemList\0addItem\0weight\0"
    "removeItem\0clear\0order\0CompOrder\0"
    "ignoreCase\0Sorted\0Insertion\0Weighted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCompletion[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       3,  124, // properties
       1,  133, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       6,    0,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   96,    2, 0x0a /* Public */,
       9,    0,   99,    2, 0x0a /* Public */,
      10,    0,  100,    2, 0x0a /* Public */,
      11,    1,  101,    2, 0x0a /* Public */,
      12,    0,  104,    2, 0x0a /* Public */,
      13,    0,  105,    2, 0x0a /* Public */,
      14,    1,  106,    2, 0x0a /* Public */,
      16,    1,  109,    2, 0x0a /* Public */,
      18,    1,  112,    2, 0x0a /* Public */,
      18,    2,  115,    2, 0x0a /* Public */,
      20,    1,  120,    2, 0x0a /* Public */,
      21,    0,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::QString, QMetaType::QString,    8,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   15,
    QMetaType::Void, QMetaType::QStringList,   17,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,    3,   19,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // properties: name, type, flags
      22, 0x80000000 | 23, 0x0009510b,
      24, QMetaType::Bool, 0x00095103,
      15, QMetaType::QStringList, 0x00095103,

 // enums: name, alias, flags, count, data
      23,   23, 0x0,    3,  138,

 // enum data: key, value
      25, uint(KCompletion::Sorted),
      26, uint(KCompletion::Insertion),
      27, uint(KCompletion::Weighted),

       0        // eod
};

void KCompletion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KCompletion *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->match((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->matches((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->multipleMatches(); break;
        case 3: { QString _r = _t->makeCompletion((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->previousMatch();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->nextMatch();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->slotMakeCompletion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->slotPreviousMatch(); break;
        case 8: _t->slotNextMatch(); break;
        case 9: _t->insertItems((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 10: _t->setItems((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 11: _t->addItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->addItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 13: _t->removeItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KCompletion::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCompletion::match)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KCompletion::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCompletion::matches)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KCompletion::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCompletion::multipleMatches)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KCompletion *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< CompOrder*>(_v) = _t->order(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->ignoreCase(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->items(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KCompletion *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrder(*reinterpret_cast< CompOrder*>(_v)); break;
        case 1: _t->setIgnoreCase(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setItems(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KCompletion::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KCompletion.data,
    qt_meta_data_KCompletion,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCompletion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCompletion::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCompletion.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KCompletion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
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
void KCompletion::match(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KCompletion::matches(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KCompletion::multipleMatches()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
