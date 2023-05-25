/****************************************************************************
** Meta object code from reading C++ file 'kglobalaccel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kglobalaccel/src/kglobalaccel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kglobalaccel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KGlobalAccel_t {
    QByteArrayData data[12];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KGlobalAccel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KGlobalAccel_t qt_meta_stringdata_KGlobalAccel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KGlobalAccel"
QT_MOC_LITERAL(1, 13, 21), // "globalShortcutChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "QAction*"
QT_MOC_LITERAL(4, 45, 6), // "action"
QT_MOC_LITERAL(5, 52, 3), // "seq"
QT_MOC_LITERAL(6, 56, 27), // "globalShortcutActiveChanged"
QT_MOC_LITERAL(7, 84, 6), // "active"
QT_MOC_LITERAL(8, 91, 9), // "MatchType"
QT_MOC_LITERAL(9, 101, 5), // "Equal"
QT_MOC_LITERAL(10, 107, 7), // "Shadows"
QT_MOC_LITERAL(11, 115, 8) // "Shadowed"

    },
    "KGlobalAccel\0globalShortcutChanged\0\0"
    "QAction*\0action\0seq\0globalShortcutActiveChanged\0"
    "active\0MatchType\0Equal\0Shadows\0Shadowed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KGlobalAccel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       6,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QKeySequence,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    7,

 // enums: name, alias, flags, count, data
       8,    8, 0x0,    3,   39,

 // enum data: key, value
       9, uint(KGlobalAccel::Equal),
      10, uint(KGlobalAccel::Shadows),
      11, uint(KGlobalAccel::Shadowed),

       0        // eod
};

void KGlobalAccel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KGlobalAccel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->globalShortcutChanged((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< const QKeySequence(*)>(_a[2]))); break;
        case 1: _t->globalShortcutActiveChanged((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KGlobalAccel::*)(QAction * , const QKeySequence & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KGlobalAccel::globalShortcutChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KGlobalAccel::*)(QAction * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KGlobalAccel::globalShortcutActiveChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KGlobalAccel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KGlobalAccel.data,
    qt_meta_data_KGlobalAccel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KGlobalAccel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KGlobalAccel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KGlobalAccel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KGlobalAccel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void KGlobalAccel::globalShortcutChanged(QAction * _t1, const QKeySequence & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KGlobalAccel::globalShortcutActiveChanged(QAction * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
