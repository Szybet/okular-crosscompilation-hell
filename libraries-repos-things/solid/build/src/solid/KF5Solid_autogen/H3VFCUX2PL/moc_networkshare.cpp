/****************************************************************************
** Meta object code from reading C++ file 'networkshare.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/solid/devices/frontend/networkshare.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkshare.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__NetworkShare_t {
    QByteArrayData data[8];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__NetworkShare_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__NetworkShare_t qt_meta_stringdata_Solid__NetworkShare = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Solid::NetworkShare"
QT_MOC_LITERAL(1, 20, 4), // "type"
QT_MOC_LITERAL(2, 25, 9), // "ShareType"
QT_MOC_LITERAL(3, 35, 3), // "url"
QT_MOC_LITERAL(4, 39, 7), // "Unknown"
QT_MOC_LITERAL(5, 47, 3), // "Nfs"
QT_MOC_LITERAL(6, 51, 4), // "Cifs"
QT_MOC_LITERAL(7, 56, 4) // "Smb3"

    },
    "Solid::NetworkShare\0type\0ShareType\0"
    "url\0Unknown\0Nfs\0Cifs\0Smb3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__NetworkShare[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       1,   20, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095009,
       3, QMetaType::QUrl, 0x00095001,

 // enums: name, alias, flags, count, data
       2,    2, 0x0,    4,   25,

 // enum data: key, value
       4, uint(Solid::NetworkShare::Unknown),
       5, uint(Solid::NetworkShare::Nfs),
       6, uint(Solid::NetworkShare::Cifs),
       7, uint(Solid::NetworkShare::Smb3),

       0        // eod
};

void Solid::NetworkShare::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NetworkShare *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ShareType*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
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

QT_INIT_METAOBJECT const QMetaObject Solid::NetworkShare::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceInterface::staticMetaObject>(),
    qt_meta_stringdata_Solid__NetworkShare.data,
    qt_meta_data_Solid__NetworkShare,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::NetworkShare::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::NetworkShare::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__NetworkShare.stringdata0))
        return static_cast<void*>(this);
    return DeviceInterface::qt_metacast(_clname);
}

int Solid::NetworkShare::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
