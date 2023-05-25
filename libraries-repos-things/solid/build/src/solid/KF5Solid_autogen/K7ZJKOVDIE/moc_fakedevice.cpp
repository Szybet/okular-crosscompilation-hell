/****************************************************************************
** Meta object code from reading C++ file 'fakedevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/solid/devices/backends/fakehw/fakedevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fakedevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__Fake__FakeDevice_t {
    QByteArrayData data[30];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__Fake__FakeDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__Fake__FakeDevice_t qt_meta_stringdata_Solid__Backends__Fake__FakeDevice = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Solid::Backends::Fake::FakeDe..."
QT_MOC_LITERAL(1, 34, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 17), // "QMap<QString,int>"
QT_MOC_LITERAL(4, 69, 7), // "changes"
QT_MOC_LITERAL(5, 77, 15), // "conditionRaised"
QT_MOC_LITERAL(6, 93, 9), // "condition"
QT_MOC_LITERAL(7, 103, 6), // "reason"
QT_MOC_LITERAL(8, 110, 3), // "udi"
QT_MOC_LITERAL(9, 114, 9), // "parentUdi"
QT_MOC_LITERAL(10, 124, 6), // "vendor"
QT_MOC_LITERAL(11, 131, 7), // "product"
QT_MOC_LITERAL(12, 139, 4), // "icon"
QT_MOC_LITERAL(13, 144, 7), // "emblems"
QT_MOC_LITERAL(14, 152, 11), // "description"
QT_MOC_LITERAL(15, 164, 8), // "property"
QT_MOC_LITERAL(16, 173, 3), // "key"
QT_MOC_LITERAL(17, 177, 13), // "allProperties"
QT_MOC_LITERAL(18, 191, 14), // "propertyExists"
QT_MOC_LITERAL(19, 206, 11), // "setProperty"
QT_MOC_LITERAL(20, 218, 5), // "value"
QT_MOC_LITERAL(21, 224, 14), // "removeProperty"
QT_MOC_LITERAL(22, 239, 4), // "lock"
QT_MOC_LITERAL(23, 244, 6), // "unlock"
QT_MOC_LITERAL(24, 251, 8), // "isLocked"
QT_MOC_LITERAL(25, 260, 10), // "lockReason"
QT_MOC_LITERAL(26, 271, 9), // "setBroken"
QT_MOC_LITERAL(27, 281, 6), // "broken"
QT_MOC_LITERAL(28, 288, 8), // "isBroken"
QT_MOC_LITERAL(29, 297, 14) // "raiseCondition"

    },
    "Solid::Backends::Fake::FakeDevice\0"
    "propertyChanged\0\0QMap<QString,int>\0"
    "changes\0conditionRaised\0condition\0"
    "reason\0udi\0parentUdi\0vendor\0product\0"
    "icon\0emblems\0description\0property\0key\0"
    "allProperties\0propertyExists\0setProperty\0"
    "value\0removeProperty\0lock\0unlock\0"
    "isLocked\0lockReason\0setBroken\0broken\0"
    "isBroken\0raiseCondition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__Fake__FakeDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       5,    2,  122,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  127,    2, 0x0a /* Public */,
       9,    0,  128,    2, 0x0a /* Public */,
      10,    0,  129,    2, 0x0a /* Public */,
      11,    0,  130,    2, 0x0a /* Public */,
      12,    0,  131,    2, 0x0a /* Public */,
      13,    0,  132,    2, 0x0a /* Public */,
      14,    0,  133,    2, 0x0a /* Public */,
      15,    1,  134,    2, 0x0a /* Public */,
      17,    0,  137,    2, 0x0a /* Public */,
      18,    1,  138,    2, 0x0a /* Public */,
      19,    2,  141,    2, 0x0a /* Public */,
      21,    1,  146,    2, 0x0a /* Public */,
      22,    1,  149,    2, 0x0a /* Public */,
      23,    0,  152,    2, 0x0a /* Public */,
      24,    0,  153,    2, 0x0a /* Public */,
      25,    0,  154,    2, 0x0a /* Public */,
      26,    1,  155,    2, 0x0a /* Public */,
      28,    0,  158,    2, 0x0a /* Public */,
      29,    2,  159,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

 // slots: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QStringList,
    QMetaType::QString,
    QMetaType::QVariant, QMetaType::QString,   16,
    QMetaType::QVariantMap,
    QMetaType::Bool, QMetaType::QString,   16,
    QMetaType::Bool, QMetaType::QString, QMetaType::QVariant,   16,   20,
    QMetaType::Bool, QMetaType::QString,   16,
    QMetaType::Bool, QMetaType::QString,    7,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

       0        // eod
};

void Solid::Backends::Fake::FakeDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QMap<QString,int>(*)>(_a[1]))); break;
        case 1: _t->conditionRaised((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: { QString _r = _t->udi();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->parentUdi();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->vendor();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->product();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->icon();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QStringList _r = _t->emblems();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->description();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QVariant _r = _t->property((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 10: { QMap<QString,QVariant> _r = _t->allProperties();
            if (_a[0]) *reinterpret_cast< QMap<QString,QVariant>*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->propertyExists((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->setProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->removeProperty((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->lock((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->unlock();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->isLocked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->lockReason();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->setBroken((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: { bool _r = _t->isBroken();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->raiseCondition((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FakeDevice::*)(const QMap<QString,int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FakeDevice::propertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FakeDevice::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FakeDevice::conditionRaised)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::Fake::FakeDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<Solid::Ifaces::Device::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__Fake__FakeDevice.data,
    qt_meta_data_Solid__Backends__Fake__FakeDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::Fake::FakeDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::Fake::FakeDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__Fake__FakeDevice.stringdata0))
        return static_cast<void*>(this);
    return Solid::Ifaces::Device::qt_metacast(_clname);
}

int Solid::Backends::Fake::FakeDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Solid::Ifaces::Device::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void Solid::Backends::Fake::FakeDevice::propertyChanged(const QMap<QString,int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::Backends::Fake::FakeDevice::conditionRaised(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
