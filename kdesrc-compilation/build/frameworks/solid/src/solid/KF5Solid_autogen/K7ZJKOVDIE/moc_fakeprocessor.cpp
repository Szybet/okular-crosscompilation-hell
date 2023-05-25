/****************************************************************************
** Meta object code from reading C++ file 'fakeprocessor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/backends/fakehw/fakeprocessor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fakeprocessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__Fake__FakeProcessor_t {
    QByteArrayData data[7];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__Fake__FakeProcessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__Fake__FakeProcessor_t qt_meta_stringdata_Solid__Backends__Fake__FakeProcessor = {
    {
QT_MOC_LITERAL(0, 0, 36), // "Solid::Backends::Fake::FakePr..."
QT_MOC_LITERAL(1, 37, 6), // "number"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 8), // "maxSpeed"
QT_MOC_LITERAL(4, 54, 18), // "canChangeFrequency"
QT_MOC_LITERAL(5, 73, 15), // "instructionSets"
QT_MOC_LITERAL(6, 89, 33) // "Solid::Processor::Instruction..."

    },
    "Solid::Backends::Fake::FakeProcessor\0"
    "number\0\0maxSpeed\0canChangeFrequency\0"
    "instructionSets\0Solid::Processor::InstructionSets"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__Fake__FakeProcessor[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Bool,
    0x80000000 | 6,

       0        // eod
};

void Solid::Backends::Fake::FakeProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeProcessor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->number();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->maxSpeed();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->canChangeFrequency();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { Solid::Processor::InstructionSets _r = _t->instructionSets();
            if (_a[0]) *reinterpret_cast< Solid::Processor::InstructionSets*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::Fake::FakeProcessor::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeDeviceInterface::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__Fake__FakeProcessor.data,
    qt_meta_data_Solid__Backends__Fake__FakeProcessor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::Fake::FakeProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::Fake::FakeProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__Fake__FakeProcessor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Solid::Ifaces::Processor"))
        return static_cast< Solid::Ifaces::Processor*>(this);
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.Processor/0.1"))
        return static_cast< Solid::Ifaces::Processor*>(this);
    return FakeDeviceInterface::qt_metacast(_clname);
}

int Solid::Backends::Fake::FakeProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeDeviceInterface::qt_metacall(_c, _id, _a);
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
