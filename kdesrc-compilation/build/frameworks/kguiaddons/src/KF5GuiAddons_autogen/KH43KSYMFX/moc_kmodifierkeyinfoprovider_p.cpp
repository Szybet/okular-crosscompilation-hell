/****************************************************************************
** Meta object code from reading C++ file 'kmodifierkeyinfoprovider_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kguiaddons/src/util/kmodifierkeyinfoprovider_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kmodifierkeyinfoprovider_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KModifierKeyInfoProvider_t {
    QByteArrayData data[18];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KModifierKeyInfoProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KModifierKeyInfoProvider_t qt_meta_stringdata_KModifierKeyInfoProvider = {
    {
QT_MOC_LITERAL(0, 0, 24), // "KModifierKeyInfoProvider"
QT_MOC_LITERAL(1, 25, 10), // "keyLatched"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "Qt::Key"
QT_MOC_LITERAL(4, 45, 3), // "key"
QT_MOC_LITERAL(5, 49, 5), // "state"
QT_MOC_LITERAL(6, 55, 9), // "keyLocked"
QT_MOC_LITERAL(7, 65, 10), // "keyPressed"
QT_MOC_LITERAL(8, 76, 13), // "buttonPressed"
QT_MOC_LITERAL(9, 90, 15), // "Qt::MouseButton"
QT_MOC_LITERAL(10, 106, 6), // "button"
QT_MOC_LITERAL(11, 113, 8), // "keyAdded"
QT_MOC_LITERAL(12, 122, 10), // "keyRemoved"
QT_MOC_LITERAL(13, 133, 13), // "ModifierState"
QT_MOC_LITERAL(14, 147, 7), // "Nothing"
QT_MOC_LITERAL(15, 155, 7), // "Pressed"
QT_MOC_LITERAL(16, 163, 7), // "Latched"
QT_MOC_LITERAL(17, 171, 6) // "Locked"

    },
    "KModifierKeyInfoProvider\0keyLatched\0"
    "\0Qt::Key\0key\0state\0keyLocked\0keyPressed\0"
    "buttonPressed\0Qt::MouseButton\0button\0"
    "keyAdded\0keyRemoved\0ModifierState\0"
    "Nothing\0Pressed\0Latched\0Locked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KModifierKeyInfoProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   70, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    2,   49,    2, 0x06 /* Public */,
       7,    2,   54,    2, 0x06 /* Public */,
       8,    2,   59,    2, 0x06 /* Public */,
      11,    1,   64,    2, 0x06 /* Public */,
      12,    1,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,   10,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // enums: name, alias, flags, count, data
      13,   13, 0x0,    4,   75,

 // enum data: key, value
      14, uint(KModifierKeyInfoProvider::Nothing),
      15, uint(KModifierKeyInfoProvider::Pressed),
      16, uint(KModifierKeyInfoProvider::Latched),
      17, uint(KModifierKeyInfoProvider::Locked),

       0        // eod
};

void KModifierKeyInfoProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KModifierKeyInfoProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyLatched((*reinterpret_cast< Qt::Key(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->keyLocked((*reinterpret_cast< Qt::Key(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->keyPressed((*reinterpret_cast< Qt::Key(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->buttonPressed((*reinterpret_cast< Qt::MouseButton(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->keyAdded((*reinterpret_cast< Qt::Key(*)>(_a[1]))); break;
        case 5: _t->keyRemoved((*reinterpret_cast< Qt::Key(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KModifierKeyInfoProvider::*)(Qt::Key , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KModifierKeyInfoProvider::keyLatched)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KModifierKeyInfoProvider::*)(Qt::Key , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KModifierKeyInfoProvider::keyLocked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KModifierKeyInfoProvider::*)(Qt::Key , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KModifierKeyInfoProvider::keyPressed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KModifierKeyInfoProvider::*)(Qt::MouseButton , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KModifierKeyInfoProvider::buttonPressed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KModifierKeyInfoProvider::*)(Qt::Key );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KModifierKeyInfoProvider::keyAdded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KModifierKeyInfoProvider::*)(Qt::Key );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KModifierKeyInfoProvider::keyRemoved)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KModifierKeyInfoProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KModifierKeyInfoProvider.data,
    qt_meta_data_KModifierKeyInfoProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KModifierKeyInfoProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KModifierKeyInfoProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KModifierKeyInfoProvider.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QSharedData"))
        return static_cast< QSharedData*>(this);
    return QObject::qt_metacast(_clname);
}

int KModifierKeyInfoProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void KModifierKeyInfoProvider::keyLatched(Qt::Key _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KModifierKeyInfoProvider::keyLocked(Qt::Key _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KModifierKeyInfoProvider::keyPressed(Qt::Key _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KModifierKeyInfoProvider::buttonPressed(Qt::MouseButton _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KModifierKeyInfoProvider::keyAdded(Qt::Key _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KModifierKeyInfoProvider::keyRemoved(Qt::Key _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
