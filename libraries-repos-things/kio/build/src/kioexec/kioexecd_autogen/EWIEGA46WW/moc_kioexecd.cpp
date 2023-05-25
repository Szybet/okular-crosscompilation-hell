/****************************************************************************
** Meta object code from reading C++ file 'kioexecd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/kioexec/kioexecd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kioexecd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIOExecd_t {
    QByteArrayData data[11];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIOExecd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIOExecd_t qt_meta_stringdata_KIOExecd = {
    {
QT_MOC_LITERAL(0, 0, 8), // "KIOExecd"
QT_MOC_LITERAL(1, 9, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 25, 16), // "org.kde.KIOExecd"
QT_MOC_LITERAL(3, 42, 5), // "watch"
QT_MOC_LITERAL(4, 48, 0), // ""
QT_MOC_LITERAL(5, 49, 4), // "path"
QT_MOC_LITERAL(6, 54, 7), // "destUrl"
QT_MOC_LITERAL(7, 62, 9), // "slotDirty"
QT_MOC_LITERAL(8, 72, 11), // "slotDeleted"
QT_MOC_LITERAL(9, 84, 11), // "slotCreated"
QT_MOC_LITERAL(10, 96, 21) // "slotCheckDeletedFiles"

    },
    "KIOExecd\0D-Bus Interface\0org.kde.KIOExecd\0"
    "watch\0\0path\0destUrl\0slotDirty\0slotDeleted\0"
    "slotCreated\0slotCheckDeletedFiles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIOExecd[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    2,   41,    4, 0x0a /* Public */,
       7,    1,   46,    4, 0x08 /* Private */,
       8,    1,   49,    4, 0x08 /* Private */,
       9,    1,   52,    4, 0x08 /* Private */,
      10,    0,   55,    4, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void KIOExecd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KIOExecd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->watch((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->slotDirty((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotDeleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotCheckDeletedFiles(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIOExecd::staticMetaObject = { {
    QMetaObject::SuperData::link<KDEDModule::staticMetaObject>(),
    qt_meta_stringdata_KIOExecd.data,
    qt_meta_data_KIOExecd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIOExecd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIOExecd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIOExecd.stringdata0))
        return static_cast<void*>(this);
    return KDEDModule::qt_metacast(_clname);
}

int KIOExecd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDEDModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
