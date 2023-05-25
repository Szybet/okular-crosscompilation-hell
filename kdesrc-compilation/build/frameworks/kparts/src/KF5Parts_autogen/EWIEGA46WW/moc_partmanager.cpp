/****************************************************************************
** Meta object code from reading C++ file 'partmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kparts/src/partmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KParts__PartManager_t {
    QByteArrayData data[17];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KParts__PartManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KParts__PartManager_t qt_meta_stringdata_KParts__PartManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "KParts::PartManager"
QT_MOC_LITERAL(1, 20, 9), // "partAdded"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "KParts::Part*"
QT_MOC_LITERAL(4, 45, 4), // "part"
QT_MOC_LITERAL(5, 50, 11), // "partRemoved"
QT_MOC_LITERAL(6, 62, 17), // "activePartChanged"
QT_MOC_LITERAL(7, 80, 7), // "newPart"
QT_MOC_LITERAL(8, 88, 19), // "slotObjectDestroyed"
QT_MOC_LITERAL(9, 108, 19), // "slotWidgetDestroyed"
QT_MOC_LITERAL(10, 128, 34), // "slotManagedTopLevelWidgetDest..."
QT_MOC_LITERAL(11, 163, 15), // "selectionPolicy"
QT_MOC_LITERAL(12, 179, 15), // "SelectionPolicy"
QT_MOC_LITERAL(13, 195, 16), // "allowNestedParts"
QT_MOC_LITERAL(14, 212, 16), // "ignoreScrollBars"
QT_MOC_LITERAL(15, 229, 6), // "Direct"
QT_MOC_LITERAL(16, 236, 8) // "TriState"

    },
    "KParts::PartManager\0partAdded\0\0"
    "KParts::Part*\0part\0partRemoved\0"
    "activePartChanged\0newPart\0slotObjectDestroyed\0"
    "slotWidgetDestroyed\0"
    "slotManagedTopLevelWidgetDestroyed\0"
    "selectionPolicy\0SelectionPolicy\0"
    "allowNestedParts\0ignoreScrollBars\0"
    "Direct\0TriState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KParts__PartManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   56, // properties
       1,   65, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   53,    2, 0x09 /* Protected */,
       9,    0,   54,    2, 0x09 /* Protected */,
      10,    0,   55,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, 0x80000000 | 12, 0x0009510b,
      13, QMetaType::Bool, 0x00095103,
      14, QMetaType::Bool, 0x00095103,

 // enums: name, alias, flags, count, data
      12,   12, 0x0,    2,   70,

 // enum data: key, value
      15, uint(KParts::PartManager::Direct),
      16, uint(KParts::PartManager::TriState),

       0        // eod
};

void KParts::PartManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PartManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->partAdded((*reinterpret_cast< KParts::Part*(*)>(_a[1]))); break;
        case 1: _t->partRemoved((*reinterpret_cast< KParts::Part*(*)>(_a[1]))); break;
        case 2: _t->activePartChanged((*reinterpret_cast< KParts::Part*(*)>(_a[1]))); break;
        case 3: _t->slotObjectDestroyed(); break;
        case 4: _t->slotWidgetDestroyed(); break;
        case 5: _t->slotManagedTopLevelWidgetDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PartManager::*)(KParts::Part * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartManager::partAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PartManager::*)(KParts::Part * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartManager::partRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PartManager::*)(KParts::Part * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartManager::activePartChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PartManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< SelectionPolicy*>(_v) = _t->selectionPolicy(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->allowNestedParts(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->ignoreScrollBars(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PartManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectionPolicy(*reinterpret_cast< SelectionPolicy*>(_v)); break;
        case 1: _t->setAllowNestedParts(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setIgnoreScrollBars(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KParts::PartManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KParts__PartManager.data,
    qt_meta_data_KParts__PartManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KParts::PartManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KParts::PartManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KParts__PartManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KParts::PartManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void KParts::PartManager::partAdded(KParts::Part * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KParts::PartManager::partRemoved(KParts::Part * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KParts::PartManager::activePartChanged(KParts::Part * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
