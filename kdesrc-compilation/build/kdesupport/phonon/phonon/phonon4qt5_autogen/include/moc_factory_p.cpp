/****************************************************************************
** Meta object code from reading C++ file 'factory_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../kdesupport/phonon/phonon/factory_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'factory_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Phonon__Factory__Sender_t {
    QByteArrayData data[6];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phonon__Factory__Sender_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phonon__Factory__Sender_t qt_meta_stringdata_Phonon__Factory__Sender = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Phonon::Factory::Sender"
QT_MOC_LITERAL(1, 24, 14), // "backendChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 34), // "availableAudioOutputDevicesCh..."
QT_MOC_LITERAL(4, 75, 35), // "availableAudioCaptureDevicesC..."
QT_MOC_LITERAL(5, 111, 35) // "availableVideoCaptureDevicesC..."

    },
    "Phonon::Factory::Sender\0backendChanged\0"
    "\0availableAudioOutputDevicesChanged\0"
    "availableAudioCaptureDevicesChanged\0"
    "availableVideoCaptureDevicesChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phonon__Factory__Sender[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Phonon::Factory::Sender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Sender *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backendChanged(); break;
        case 1: _t->availableAudioOutputDevicesChanged(); break;
        case 2: _t->availableAudioCaptureDevicesChanged(); break;
        case 3: _t->availableVideoCaptureDevicesChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Sender::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Sender::backendChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Sender::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Sender::availableAudioOutputDevicesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Sender::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Sender::availableAudioCaptureDevicesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Sender::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Sender::availableVideoCaptureDevicesChanged)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Phonon::Factory::Sender::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Phonon__Factory__Sender.data,
    qt_meta_data_Phonon__Factory__Sender,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phonon::Factory::Sender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phonon::Factory::Sender::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__Factory__Sender.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Phonon::Factory::Sender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Phonon::Factory::Sender::backendChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Phonon::Factory::Sender::availableAudioOutputDevicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Phonon::Factory::Sender::availableAudioCaptureDevicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Phonon::Factory::Sender::availableVideoCaptureDevicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
