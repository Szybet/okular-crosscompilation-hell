/****************************************************************************
** Meta object code from reading C++ file 'audiooutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../kdesupport/phonon/phonon/audiooutput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audiooutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Phonon__AudioOutput_t {
    QByteArrayData data[29];
    char stringdata0[395];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phonon__AudioOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phonon__AudioOutput_t qt_meta_stringdata_Phonon__AudioOutput = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Phonon::AudioOutput"
QT_MOC_LITERAL(1, 20, 13), // "volumeChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "newVolume"
QT_MOC_LITERAL(4, 45, 12), // "mutedChanged"
QT_MOC_LITERAL(5, 58, 19), // "outputDeviceChanged"
QT_MOC_LITERAL(6, 78, 25), // "Phonon::AudioOutputDevice"
QT_MOC_LITERAL(7, 104, 20), // "newAudioOutputDevice"
QT_MOC_LITERAL(8, 125, 7), // "setName"
QT_MOC_LITERAL(9, 133, 7), // "newName"
QT_MOC_LITERAL(10, 141, 9), // "setVolume"
QT_MOC_LITERAL(11, 151, 16), // "setVolumeDecibel"
QT_MOC_LITERAL(12, 168, 16), // "newVolumeDecibel"
QT_MOC_LITERAL(13, 185, 15), // "setOutputDevice"
QT_MOC_LITERAL(14, 201, 8), // "setMuted"
QT_MOC_LITERAL(15, 210, 4), // "mute"
QT_MOC_LITERAL(16, 215, 16), // "_k_volumeChanged"
QT_MOC_LITERAL(17, 232, 15), // "_k_mutedChanged"
QT_MOC_LITERAL(18, 248, 17), // "_k_revertFallback"
QT_MOC_LITERAL(19, 266, 20), // "_k_audioDeviceFailed"
QT_MOC_LITERAL(20, 287, 20), // "_k_deviceListChanged"
QT_MOC_LITERAL(21, 308, 16), // "_k_deviceChanged"
QT_MOC_LITERAL(22, 325, 6), // "device"
QT_MOC_LITERAL(23, 332, 4), // "name"
QT_MOC_LITERAL(24, 337, 6), // "volume"
QT_MOC_LITERAL(25, 344, 13), // "volumeDecibel"
QT_MOC_LITERAL(26, 358, 12), // "outputDevice"
QT_MOC_LITERAL(27, 371, 17), // "AudioOutputDevice"
QT_MOC_LITERAL(28, 389, 5) // "muted"

    },
    "Phonon::AudioOutput\0volumeChanged\0\0"
    "newVolume\0mutedChanged\0outputDeviceChanged\0"
    "Phonon::AudioOutputDevice\0"
    "newAudioOutputDevice\0setName\0newName\0"
    "setVolume\0setVolumeDecibel\0newVolumeDecibel\0"
    "setOutputDevice\0setMuted\0mute\0"
    "_k_volumeChanged\0_k_mutedChanged\0"
    "_k_revertFallback\0_k_audioDeviceFailed\0"
    "_k_deviceListChanged\0_k_deviceChanged\0"
    "device\0name\0volume\0volumeDecibel\0"
    "outputDevice\0AudioOutputDevice\0muted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phonon__AudioOutput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       5,  120, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   93,    2, 0x0a /* Public */,
      10,    1,   96,    2, 0x0a /* Public */,
      11,    1,   99,    2, 0x0a /* Public */,
      13,    1,  102,    2, 0x0a /* Public */,
      14,    1,  105,    2, 0x0a /* Public */,
      16,    1,  108,    2, 0x08 /* Private */,
      17,    1,  111,    2, 0x08 /* Private */,
      18,    0,  114,    2, 0x08 /* Private */,
      19,    0,  115,    2, 0x08 /* Private */,
      20,    0,  116,    2, 0x08 /* Private */,
      21,    1,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,   12,
    QMetaType::Bool, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,

 // properties: name, type, flags
      23, QMetaType::QString, 0x00095103,
      24, QMetaType::QReal, 0x00495103,
      25, QMetaType::QReal, 0x00095103,
      26, 0x80000000 | 27, 0x0009510b,
      28, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void Phonon::AudioOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioOutput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->volumeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->outputDeviceChanged((*reinterpret_cast< const Phonon::AudioOutputDevice(*)>(_a[1]))); break;
        case 3: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setVolume((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->setVolumeDecibel((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: { bool _r = _t->setOutputDevice((*reinterpret_cast< const Phonon::AudioOutputDevice(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->k_func()->_k_volumeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->k_func()->_k_mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->k_func()->_k_revertFallback(); break;
        case 11: _t->k_func()->_k_audioDeviceFailed(); break;
        case 12: _t->k_func()->_k_deviceListChanged(); break;
        case 13: _t->k_func()->_k_deviceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Phonon::AudioOutputDevice >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Phonon::AudioOutputDevice >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioOutput::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioOutput::volumeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioOutput::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioOutput::mutedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AudioOutput::*)(const Phonon::AudioOutputDevice & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioOutput::outputDeviceChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AudioOutput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->volume(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->volumeDecibel(); break;
        case 3: *reinterpret_cast< AudioOutputDevice*>(_v) = _t->outputDevice(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isMuted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AudioOutput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setVolume(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setVolumeDecibel(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setOutputDevice(*reinterpret_cast< AudioOutputDevice*>(_v)); break;
        case 4: _t->setMuted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Phonon::AudioOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractAudioOutput::staticMetaObject>(),
    qt_meta_stringdata_Phonon__AudioOutput.data,
    qt_meta_data_Phonon__AudioOutput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phonon::AudioOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phonon::AudioOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__AudioOutput.stringdata0))
        return static_cast<void*>(this);
    return AbstractAudioOutput::qt_metacast(_clname);
}

int Phonon::AudioOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractAudioOutput::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Phonon::AudioOutput::volumeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Phonon::AudioOutput::mutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Phonon::AudioOutput::outputDeviceChanged(const Phonon::AudioOutputDevice & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
