/****************************************************************************
** Meta object code from reading C++ file 'kactioncollection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kxmlgui/src/kactioncollection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kactioncollection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KActionCollection_t {
    QByteArrayData data[20];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KActionCollection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KActionCollection_t qt_meta_stringdata_KActionCollection = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KActionCollection"
QT_MOC_LITERAL(1, 18, 8), // "inserted"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "QAction*"
QT_MOC_LITERAL(4, 37, 6), // "action"
QT_MOC_LITERAL(5, 44, 7), // "removed"
QT_MOC_LITERAL(6, 52, 7), // "changed"
QT_MOC_LITERAL(7, 60, 17), // "actionHighlighted"
QT_MOC_LITERAL(8, 78, 13), // "actionHovered"
QT_MOC_LITERAL(9, 92, 15), // "actionTriggered"
QT_MOC_LITERAL(10, 108, 19), // "slotActionTriggered"
QT_MOC_LITERAL(11, 128, 21), // "slotActionHighlighted"
QT_MOC_LITERAL(12, 150, 17), // "slotActionHovered"
QT_MOC_LITERAL(13, 168, 9), // "addAction"
QT_MOC_LITERAL(14, 178, 4), // "name"
QT_MOC_LITERAL(15, 183, 19), // "setDefaultShortcuts"
QT_MOC_LITERAL(16, 203, 19), // "QList<QKeySequence>"
QT_MOC_LITERAL(17, 223, 9), // "shortcuts"
QT_MOC_LITERAL(18, 233, 11), // "configGroup"
QT_MOC_LITERAL(19, 245, 14) // "configIsGlobal"

    },
    "KActionCollection\0inserted\0\0QAction*\0"
    "action\0removed\0changed\0actionHighlighted\0"
    "actionHovered\0actionTriggered\0"
    "slotActionTriggered\0slotActionHighlighted\0"
    "slotActionHovered\0addAction\0name\0"
    "setDefaultShortcuts\0QList<QKeySequence>\0"
    "shortcuts\0configGroup\0configIsGlobal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KActionCollection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x16 /* Public | MethodCompatibility */,
       6,    0,   75,    2, 0x06 /* Public */,
       7,    1,   76,    2, 0x16 /* Public | MethodCompatibility */,
       8,    1,   79,    2, 0x06 /* Public */,
       9,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   85,    2, 0x09 /* Protected */,
      11,    0,   86,    2, 0x19 /* Protected | MethodCompatibility */,
      12,    0,   87,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      13,    2,   88,    2, 0x02 /* Public */,
      15,    2,   93,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 3, QMetaType::QString, 0x80000000 | 3,   14,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 16,    4,   17,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00095103,
      19, QMetaType::Bool, 0x00095003,

       0        // eod
};

void KActionCollection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KActionCollection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inserted((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->removed((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->changed(); break;
        case 3: _t->actionHighlighted((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->actionHovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->slotActionTriggered(); break;
        case 7: _t->slotActionHighlighted(); break;
        case 8: _t->slotActionHovered(); break;
        case 9: { QAction* _r = _t->addAction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setDefaultShortcuts((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< const QList<QKeySequence>(*)>(_a[2]))); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 4:
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
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QKeySequence> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KActionCollection::*)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KActionCollection::inserted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KActionCollection::*)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KActionCollection::removed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KActionCollection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KActionCollection::changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KActionCollection::*)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KActionCollection::actionHighlighted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KActionCollection::*)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KActionCollection::actionHovered)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KActionCollection::*)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KActionCollection::actionTriggered)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KActionCollection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->configGroup(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->configIsGlobal(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KActionCollection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setConfigGroup(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setConfigGlobal(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KActionCollection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KActionCollection.data,
    qt_meta_data_KActionCollection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KActionCollection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KActionCollection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KActionCollection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KActionCollection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KActionCollection::inserted(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KActionCollection::removed(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KActionCollection::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KActionCollection::actionHighlighted(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KActionCollection::actionHovered(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KActionCollection::actionTriggered(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
