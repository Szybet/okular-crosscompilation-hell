/****************************************************************************
** Meta object code from reading C++ file 'fakemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/backends/fakehw/fakemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fakemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__Fake__FakeManager_t {
    QByteArrayData data[10];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__Fake__FakeManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__Fake__FakeManager_t qt_meta_stringdata_Solid__Backends__Fake__FakeManager = {
    {
QT_MOC_LITERAL(0, 0, 34), // "Solid::Backends::Fake::FakeMa..."
QT_MOC_LITERAL(1, 35, 4), // "plug"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 3), // "udi"
QT_MOC_LITERAL(4, 45, 6), // "unplug"
QT_MOC_LITERAL(5, 52, 16), // "parseMachineFile"
QT_MOC_LITERAL(6, 69, 18), // "parseDeviceElement"
QT_MOC_LITERAL(7, 88, 11), // "FakeDevice*"
QT_MOC_LITERAL(8, 100, 11), // "QDomElement"
QT_MOC_LITERAL(9, 112, 7) // "element"

    },
    "Solid::Backends::Fake::FakeManager\0"
    "plug\0\0udi\0unplug\0parseMachineFile\0"
    "parseDeviceElement\0FakeDevice*\0"
    "QDomElement\0element"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__Fake__FakeManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       5,    0,   40,    2, 0x08 /* Private */,
       6,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    0x80000000 | 7, 0x80000000 | 8,    9,

       0        // eod
};

void Solid::Backends::Fake::FakeManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->plug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->unplug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->parseMachineFile(); break;
        case 3: { FakeDevice* _r = _t->parseDeviceElement((*reinterpret_cast< const QDomElement(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< FakeDevice**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::Fake::FakeManager::staticMetaObject = { {
    QMetaObject::SuperData::link<Solid::Ifaces::DeviceManager::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__Fake__FakeManager.data,
    qt_meta_data_Solid__Backends__Fake__FakeManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::Fake::FakeManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::Fake::FakeManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__Fake__FakeManager.stringdata0))
        return static_cast<void*>(this);
    return Solid::Ifaces::DeviceManager::qt_metacast(_clname);
}

int Solid::Backends::Fake::FakeManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Solid::Ifaces::DeviceManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
