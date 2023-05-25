/****************************************************************************
** Meta object code from reading C++ file 'kwindowsystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/kwindowsystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kwindowsystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KWindowSystem_t {
    QByteArrayData data[25];
    char stringdata0[336];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KWindowSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KWindowSystem_t qt_meta_stringdata_KWindowSystem = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KWindowSystem"
QT_MOC_LITERAL(1, 14, 21), // "currentDesktopChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "desktop"
QT_MOC_LITERAL(4, 45, 11), // "windowAdded"
QT_MOC_LITERAL(5, 57, 3), // "WId"
QT_MOC_LITERAL(6, 61, 2), // "id"
QT_MOC_LITERAL(7, 64, 13), // "windowRemoved"
QT_MOC_LITERAL(8, 78, 19), // "activeWindowChanged"
QT_MOC_LITERAL(9, 98, 19), // "desktopNamesChanged"
QT_MOC_LITERAL(10, 118, 23), // "numberOfDesktopsChanged"
QT_MOC_LITERAL(11, 142, 3), // "num"
QT_MOC_LITERAL(12, 146, 15), // "workAreaChanged"
QT_MOC_LITERAL(13, 162, 12), // "strutChanged"
QT_MOC_LITERAL(14, 175, 20), // "stackingOrderChanged"
QT_MOC_LITERAL(15, 196, 13), // "windowChanged"
QT_MOC_LITERAL(16, 210, 15), // "NET::Properties"
QT_MOC_LITERAL(17, 226, 10), // "properties"
QT_MOC_LITERAL(18, 237, 16), // "NET::Properties2"
QT_MOC_LITERAL(19, 254, 11), // "properties2"
QT_MOC_LITERAL(20, 266, 12), // "const ulong*"
QT_MOC_LITERAL(21, 279, 21), // "showingDesktopChanged"
QT_MOC_LITERAL(22, 301, 7), // "showing"
QT_MOC_LITERAL(23, 309, 18), // "compositingChanged"
QT_MOC_LITERAL(24, 328, 7) // "enabled"

    },
    "KWindowSystem\0currentDesktopChanged\0"
    "\0desktop\0windowAdded\0WId\0id\0windowRemoved\0"
    "activeWindowChanged\0desktopNamesChanged\0"
    "numberOfDesktopsChanged\0num\0workAreaChanged\0"
    "strutChanged\0stackingOrderChanged\0"
    "windowChanged\0NET::Properties\0properties\0"
    "NET::Properties2\0properties2\0const ulong*\0"
    "showingDesktopChanged\0showing\0"
    "compositingChanged\0enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KWindowSystem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       7,    1,   95,    2, 0x06 /* Public */,
       8,    1,   98,    2, 0x06 /* Public */,
       9,    0,  101,    2, 0x06 /* Public */,
      10,    1,  102,    2, 0x06 /* Public */,
      12,    0,  105,    2, 0x06 /* Public */,
      13,    0,  106,    2, 0x06 /* Public */,
      14,    0,  107,    2, 0x06 /* Public */,
      15,    3,  108,    2, 0x06 /* Public */,
      15,    2,  115,    2, 0x16 /* Public | MethodCompatibility */,
      15,    2,  120,    2, 0x16 /* Public | MethodCompatibility */,
      15,    1,  125,    2, 0x06 /* Public */,
      21,    1,  128,    2, 0x06 /* Public */,
      23,    1,  131,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 16, 0x80000000 | 18,    6,   17,   19,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 20,    6,   17,
    QMetaType::Void, 0x80000000 | 5, QMetaType::UInt,    6,   17,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   24,

       0        // eod
};

void KWindowSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KWindowSystem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentDesktopChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->windowAdded((*reinterpret_cast< WId(*)>(_a[1]))); break;
        case 2: _t->windowRemoved((*reinterpret_cast< WId(*)>(_a[1]))); break;
        case 3: _t->activeWindowChanged((*reinterpret_cast< WId(*)>(_a[1]))); break;
        case 4: _t->desktopNamesChanged(); break;
        case 5: _t->numberOfDesktopsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->workAreaChanged(); break;
        case 7: _t->strutChanged(); break;
        case 8: _t->stackingOrderChanged(); break;
        case 9: _t->windowChanged((*reinterpret_cast< WId(*)>(_a[1])),(*reinterpret_cast< NET::Properties(*)>(_a[2])),(*reinterpret_cast< NET::Properties2(*)>(_a[3]))); break;
        case 10: _t->windowChanged((*reinterpret_cast< WId(*)>(_a[1])),(*reinterpret_cast< const ulong*(*)>(_a[2]))); break;
        case 11: _t->windowChanged((*reinterpret_cast< WId(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 12: _t->windowChanged((*reinterpret_cast< WId(*)>(_a[1]))); break;
        case 13: _t->showingDesktopChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->compositingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KWindowSystem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::currentDesktopChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KWindowSystem::*)(WId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::windowAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KWindowSystem::*)(WId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::windowRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KWindowSystem::*)(WId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::activeWindowChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KWindowSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::desktopNamesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KWindowSystem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::numberOfDesktopsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KWindowSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::workAreaChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (KWindowSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::strutChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (KWindowSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::stackingOrderChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (KWindowSystem::*)(WId , NET::Properties , NET::Properties2 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::windowChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (KWindowSystem::*)(WId , const unsigned long * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::windowChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (KWindowSystem::*)(WId , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::windowChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (KWindowSystem::*)(WId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::windowChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (KWindowSystem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::showingDesktopChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (KWindowSystem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KWindowSystem::compositingChanged)) {
                *result = 14;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KWindowSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KWindowSystem.data,
    qt_meta_data_KWindowSystem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KWindowSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWindowSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KWindowSystem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "NET"))
        return static_cast< NET*>(this);
    return QObject::qt_metacast(_clname);
}

int KWindowSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void KWindowSystem::currentDesktopChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KWindowSystem::windowAdded(WId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KWindowSystem::windowRemoved(WId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KWindowSystem::activeWindowChanged(WId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KWindowSystem::desktopNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWindowSystem::numberOfDesktopsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KWindowSystem::workAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWindowSystem::strutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWindowSystem::stackingOrderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KWindowSystem::windowChanged(WId _t1, NET::Properties _t2, NET::Properties2 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void KWindowSystem::windowChanged(WId _t1, const unsigned long * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void KWindowSystem::windowChanged(WId _t1, unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void KWindowSystem::windowChanged(WId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void KWindowSystem::showingDesktopChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void KWindowSystem::compositingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
