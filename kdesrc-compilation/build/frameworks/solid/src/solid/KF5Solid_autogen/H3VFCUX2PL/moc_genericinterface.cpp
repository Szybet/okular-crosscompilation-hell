/****************************************************************************
** Meta object code from reading C++ file 'genericinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/frontend/genericinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'genericinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__GenericInterface_t {
    QByteArrayData data[12];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__GenericInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__GenericInterface_t qt_meta_stringdata_Solid__GenericInterface = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Solid::GenericInterface"
QT_MOC_LITERAL(1, 24, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 17), // "QMap<QString,int>"
QT_MOC_LITERAL(4, 59, 7), // "changes"
QT_MOC_LITERAL(5, 67, 15), // "conditionRaised"
QT_MOC_LITERAL(6, 83, 9), // "condition"
QT_MOC_LITERAL(7, 93, 6), // "reason"
QT_MOC_LITERAL(8, 100, 14), // "PropertyChange"
QT_MOC_LITERAL(9, 115, 16), // "PropertyModified"
QT_MOC_LITERAL(10, 132, 13), // "PropertyAdded"
QT_MOC_LITERAL(11, 146, 15) // "PropertyRemoved"

    },
    "Solid::GenericInterface\0propertyChanged\0"
    "\0QMap<QString,int>\0changes\0conditionRaised\0"
    "condition\0reason\0PropertyChange\0"
    "PropertyModified\0PropertyAdded\0"
    "PropertyRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__GenericInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

 // enums: name, alias, flags, count, data
       8,    8, 0x0,    3,   37,

 // enum data: key, value
       9, uint(Solid::GenericInterface::PropertyModified),
      10, uint(Solid::GenericInterface::PropertyAdded),
      11, uint(Solid::GenericInterface::PropertyRemoved),

       0        // eod
};

void Solid::GenericInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GenericInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QMap<QString,int>(*)>(_a[1]))); break;
        case 1: _t->conditionRaised((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GenericInterface::*)(const QMap<QString,int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GenericInterface::propertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GenericInterface::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GenericInterface::conditionRaised)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::GenericInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceInterface::staticMetaObject>(),
    qt_meta_stringdata_Solid__GenericInterface.data,
    qt_meta_data_Solid__GenericInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::GenericInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::GenericInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__GenericInterface.stringdata0))
        return static_cast<void*>(this);
    return DeviceInterface::qt_metacast(_clname);
}

int Solid::GenericInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceInterface::qt_metacall(_c, _id, _a);
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
void Solid::GenericInterface::propertyChanged(const QMap<QString,int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::GenericInterface::conditionRaised(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
