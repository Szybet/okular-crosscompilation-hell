/****************************************************************************
** Meta object code from reading C++ file 'processor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/solid/devices/frontend/processor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Processor_t {
    QByteArrayData data[18];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Processor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Processor_t qt_meta_stringdata_Solid__Processor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Solid::Processor"
QT_MOC_LITERAL(1, 17, 6), // "number"
QT_MOC_LITERAL(2, 24, 8), // "maxSpeed"
QT_MOC_LITERAL(3, 33, 18), // "canChangeFrequency"
QT_MOC_LITERAL(4, 52, 15), // "instructionSets"
QT_MOC_LITERAL(5, 68, 15), // "InstructionSets"
QT_MOC_LITERAL(6, 84, 14), // "InstructionSet"
QT_MOC_LITERAL(7, 99, 12), // "NoExtensions"
QT_MOC_LITERAL(8, 112, 8), // "IntelMmx"
QT_MOC_LITERAL(9, 121, 8), // "IntelSse"
QT_MOC_LITERAL(10, 130, 9), // "IntelSse2"
QT_MOC_LITERAL(11, 140, 9), // "IntelSse3"
QT_MOC_LITERAL(12, 150, 10), // "IntelSsse3"
QT_MOC_LITERAL(13, 161, 9), // "IntelSse4"
QT_MOC_LITERAL(14, 171, 10), // "IntelSse41"
QT_MOC_LITERAL(15, 182, 10), // "IntelSse42"
QT_MOC_LITERAL(16, 193, 8), // "Amd3DNow"
QT_MOC_LITERAL(17, 202, 7) // "AltiVec"

    },
    "Solid::Processor\0number\0maxSpeed\0"
    "canChangeFrequency\0instructionSets\0"
    "InstructionSets\0InstructionSet\0"
    "NoExtensions\0IntelMmx\0IntelSse\0IntelSse2\0"
    "IntelSse3\0IntelSsse3\0IntelSse4\0"
    "IntelSse41\0IntelSse42\0Amd3DNow\0AltiVec"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Processor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       2,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095001,
       2, QMetaType::ULongLong, 0x00095001,
       3, QMetaType::Bool, 0x00095001,
       4, 0x80000000 | 5, 0x00095009,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,   11,   36,
       5,    6, 0x1,   11,   58,

 // enum data: key, value
       7, uint(Solid::Processor::NoExtensions),
       8, uint(Solid::Processor::IntelMmx),
       9, uint(Solid::Processor::IntelSse),
      10, uint(Solid::Processor::IntelSse2),
      11, uint(Solid::Processor::IntelSse3),
      12, uint(Solid::Processor::IntelSsse3),
      13, uint(Solid::Processor::IntelSse4),
      14, uint(Solid::Processor::IntelSse41),
      15, uint(Solid::Processor::IntelSse42),
      16, uint(Solid::Processor::Amd3DNow),
      17, uint(Solid::Processor::AltiVec),
       7, uint(Solid::Processor::NoExtensions),
       8, uint(Solid::Processor::IntelMmx),
       9, uint(Solid::Processor::IntelSse),
      10, uint(Solid::Processor::IntelSse2),
      11, uint(Solid::Processor::IntelSse3),
      12, uint(Solid::Processor::IntelSsse3),
      13, uint(Solid::Processor::IntelSse4),
      14, uint(Solid::Processor::IntelSse41),
      15, uint(Solid::Processor::IntelSse42),
      16, uint(Solid::Processor::Amd3DNow),
      17, uint(Solid::Processor::AltiVec),

       0        // eod
};

void Solid::Processor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Processor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->number(); break;
        case 1: *reinterpret_cast< qulonglong*>(_v) = _t->maxSpeed(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->canChangeFrequency(); break;
        case 3: *reinterpret_cast<int*>(_v) = QFlag(_t->instructionSets()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Solid::Processor::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceInterface::staticMetaObject>(),
    qt_meta_stringdata_Solid__Processor.data,
    qt_meta_data_Solid__Processor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Processor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Processor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Processor.stringdata0))
        return static_cast<void*>(this);
    return DeviceInterface::qt_metacast(_clname);
}

int Solid::Processor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
