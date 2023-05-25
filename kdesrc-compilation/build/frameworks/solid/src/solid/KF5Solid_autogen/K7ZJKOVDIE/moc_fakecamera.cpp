/****************************************************************************
** Meta object code from reading C++ file 'fakecamera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/backends/fakehw/fakecamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fakecamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__Fake__FakeCamera_t {
    QByteArrayData data[7];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__Fake__FakeCamera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__Fake__FakeCamera_t qt_meta_stringdata_Solid__Backends__Fake__FakeCamera = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Solid::Backends::Fake::FakeCa..."
QT_MOC_LITERAL(1, 34, 18), // "supportedProtocols"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 16), // "supportedDrivers"
QT_MOC_LITERAL(4, 71, 8), // "protocol"
QT_MOC_LITERAL(5, 80, 12), // "driverHandle"
QT_MOC_LITERAL(6, 93, 6) // "driver"

    },
    "Solid::Backends::Fake::FakeCamera\0"
    "supportedProtocols\0\0supportedDrivers\0"
    "protocol\0driverHandle\0driver"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__Fake__FakeCamera[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x0a /* Public */,
       5,    1,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QStringList,
    QMetaType::QStringList, QMetaType::QString,    4,
    QMetaType::QVariant, QMetaType::QString,    6,

       0        // eod
};

void Solid::Backends::Fake::FakeCamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeCamera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QStringList _r = _t->supportedProtocols();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 1: { QStringList _r = _t->supportedDrivers((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVariant _r = _t->driverHandle((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::Fake::FakeCamera::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeDeviceInterface::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__Fake__FakeCamera.data,
    qt_meta_data_Solid__Backends__Fake__FakeCamera,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::Fake::FakeCamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::Fake::FakeCamera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__Fake__FakeCamera.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Solid::Ifaces::Camera"))
        return static_cast< Solid::Ifaces::Camera*>(this);
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.Camera/0.1"))
        return static_cast< Solid::Ifaces::Camera*>(this);
    return FakeDeviceInterface::qt_metacast(_clname);
}

int Solid::Backends::Fake::FakeCamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeDeviceInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
