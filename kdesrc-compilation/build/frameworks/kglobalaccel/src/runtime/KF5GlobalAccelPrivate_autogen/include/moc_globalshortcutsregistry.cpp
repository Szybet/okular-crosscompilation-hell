/****************************************************************************
** Meta object code from reading C++ file 'globalshortcutsregistry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kglobalaccel/src/runtime/globalshortcutsregistry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'globalshortcutsregistry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalShortcutsRegistry_t {
    QByteArrayData data[9];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalShortcutsRegistry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalShortcutsRegistry_t qt_meta_stringdata_GlobalShortcutsRegistry = {
    {
QT_MOC_LITERAL(0, 0, 23), // "GlobalShortcutsRegistry"
QT_MOC_LITERAL(1, 24, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 40, 47), // "org.kde.KdedGlobalAccel.Globa..."
QT_MOC_LITERAL(3, 88, 5), // "clear"
QT_MOC_LITERAL(4, 94, 0), // ""
QT_MOC_LITERAL(5, 95, 12), // "loadSettings"
QT_MOC_LITERAL(6, 108, 13), // "writeSettings"
QT_MOC_LITERAL(7, 122, 8), // "grabKeys"
QT_MOC_LITERAL(8, 131, 10) // "ungrabKeys"

    },
    "GlobalShortcutsRegistry\0D-Bus Interface\0"
    "org.kde.KdedGlobalAccel.GlobalShortcutsRegistry\0"
    "clear\0\0loadSettings\0writeSettings\0"
    "grabKeys\0ungrabKeys"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalShortcutsRegistry[] = {

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
       3,    0,   41,    4, 0x0a /* Public */,
       5,    0,   42,    4, 0x0a /* Public */,
       6,    0,   43,    4, 0x0a /* Public */,
       7,    0,   44,    4, 0x0a /* Public */,
       8,    0,   45,    4, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GlobalShortcutsRegistry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GlobalShortcutsRegistry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->loadSettings(); break;
        case 2: _t->writeSettings(); break;
        case 3: _t->grabKeys(); break;
        case 4: _t->ungrabKeys(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GlobalShortcutsRegistry::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GlobalShortcutsRegistry.data,
    qt_meta_data_GlobalShortcutsRegistry,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalShortcutsRegistry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalShortcutsRegistry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalShortcutsRegistry.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GlobalShortcutsRegistry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
