/****************************************************************************
** Meta object code from reading C++ file 'udisksopticaldrive.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/solid/src/solid/devices/backends/udisks2/udisksopticaldrive.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udisksopticaldrive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solid__Backends__UDisks2__OpticalDrive_t {
    QByteArrayData data[18];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__UDisks2__OpticalDrive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__UDisks2__OpticalDrive_t qt_meta_stringdata_Solid__Backends__UDisks2__OpticalDrive = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Solid::Backends::UDisks2::Opt..."
QT_MOC_LITERAL(1, 39, 12), // "ejectPressed"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 3), // "udi"
QT_MOC_LITERAL(4, 57, 9), // "ejectDone"
QT_MOC_LITERAL(5, 67, 16), // "Solid::ErrorType"
QT_MOC_LITERAL(6, 84, 5), // "error"
QT_MOC_LITERAL(7, 90, 9), // "errorData"
QT_MOC_LITERAL(8, 100, 14), // "ejectRequested"
QT_MOC_LITERAL(9, 115, 13), // "slotDBusReply"
QT_MOC_LITERAL(10, 129, 12), // "QDBusMessage"
QT_MOC_LITERAL(11, 142, 5), // "reply"
QT_MOC_LITERAL(12, 148, 13), // "slotDBusError"
QT_MOC_LITERAL(13, 162, 10), // "QDBusError"
QT_MOC_LITERAL(14, 173, 18), // "slotEjectRequested"
QT_MOC_LITERAL(15, 192, 13), // "slotEjectDone"
QT_MOC_LITERAL(16, 206, 11), // "errorString"
QT_MOC_LITERAL(17, 218, 11) // "slotChanged"

    },
    "Solid::Backends::UDisks2::OpticalDrive\0"
    "ejectPressed\0\0udi\0ejectDone\0"
    "Solid::ErrorType\0error\0errorData\0"
    "ejectRequested\0slotDBusReply\0QDBusMessage\0"
    "reply\0slotDBusError\0QDBusError\0"
    "slotEjectRequested\0slotEjectDone\0"
    "errorString\0slotChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__UDisks2__OpticalDrive[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    3,   57,    2, 0x06 /* Public */,
       8,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   67,    2, 0x08 /* Private */,
      12,    1,   70,    2, 0x08 /* Private */,
      14,    0,   73,    2, 0x08 /* Private */,
      15,    2,   74,    2, 0x08 /* Private */,
      17,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QVariant, QMetaType::QString,    6,    7,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,   16,
    QMetaType::Void,

       0        // eod
};

void Solid::Backends::UDisks2::OpticalDrive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpticalDrive *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ejectPressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->ejectDone((*reinterpret_cast< Solid::ErrorType(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->ejectRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotDBusReply((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 4: _t->slotDBusError((*reinterpret_cast< const QDBusError(*)>(_a[1]))); break;
        case 5: _t->slotEjectRequested(); break;
        case 6: _t->slotEjectDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->slotChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Solid::ErrorType >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OpticalDrive::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpticalDrive::ejectPressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OpticalDrive::*)(Solid::ErrorType , QVariant , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpticalDrive::ejectDone)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OpticalDrive::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpticalDrive::ejectRequested)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solid::Backends::UDisks2::OpticalDrive::staticMetaObject = { {
    QMetaObject::SuperData::link<StorageDrive::staticMetaObject>(),
    qt_meta_stringdata_Solid__Backends__UDisks2__OpticalDrive.data,
    qt_meta_data_Solid__Backends__UDisks2__OpticalDrive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solid::Backends::UDisks2::OpticalDrive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::UDisks2::OpticalDrive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__UDisks2__OpticalDrive.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Solid::Ifaces::OpticalDrive"))
        return static_cast< Solid::Ifaces::OpticalDrive*>(this);
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.OpticalDrive/0.1"))
        return static_cast< Solid::Ifaces::OpticalDrive*>(this);
    return StorageDrive::qt_metacast(_clname);
}

int Solid::Backends::UDisks2::OpticalDrive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StorageDrive::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Solid::Backends::UDisks2::OpticalDrive::ejectPressed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::Backends::UDisks2::OpticalDrive::ejectDone(Solid::ErrorType _t1, QVariant _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Solid::Backends::UDisks2::OpticalDrive::ejectRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
