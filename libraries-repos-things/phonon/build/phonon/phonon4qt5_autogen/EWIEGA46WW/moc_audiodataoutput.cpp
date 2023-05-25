/****************************************************************************
** Meta object code from reading C++ file 'audiodataoutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../phonon/audiodataoutput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audiodataoutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Phonon__AudioDataOutput_t {
    QByteArrayData data[17];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phonon__AudioDataOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phonon__AudioDataOutput_t qt_meta_stringdata_Phonon__AudioDataOutput = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Phonon::AudioDataOutput"
QT_MOC_LITERAL(1, 24, 9), // "dataReady"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 55), // "QMap<Phonon::AudioDataOutput:..."
QT_MOC_LITERAL(4, 91, 4), // "data"
QT_MOC_LITERAL(5, 96, 10), // "endOfMedia"
QT_MOC_LITERAL(6, 107, 16), // "remainingSamples"
QT_MOC_LITERAL(7, 124, 11), // "setDataSize"
QT_MOC_LITERAL(8, 136, 4), // "size"
QT_MOC_LITERAL(9, 141, 8), // "dataSize"
QT_MOC_LITERAL(10, 150, 7), // "Channel"
QT_MOC_LITERAL(11, 158, 11), // "LeftChannel"
QT_MOC_LITERAL(12, 170, 12), // "RightChannel"
QT_MOC_LITERAL(13, 183, 13), // "CenterChannel"
QT_MOC_LITERAL(14, 197, 19), // "LeftSurroundChannel"
QT_MOC_LITERAL(15, 217, 20), // "RightSurroundChannel"
QT_MOC_LITERAL(16, 238, 16) // "SubwooferChannel"

    },
    "Phonon::AudioDataOutput\0dataReady\0\0"
    "QMap<Phonon::AudioDataOutput::Channel,QVector<qint16> >\0"
    "data\0endOfMedia\0remainingSamples\0"
    "setDataSize\0size\0dataSize\0Channel\0"
    "LeftChannel\0RightChannel\0CenterChannel\0"
    "LeftSurroundChannel\0RightSurroundChannel\0"
    "SubwooferChannel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phonon__AudioDataOutput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   38, // properties
       1,   41, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00095103,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    6,   46,

 // enum data: key, value
      11, uint(Phonon::AudioDataOutput::LeftChannel),
      12, uint(Phonon::AudioDataOutput::RightChannel),
      13, uint(Phonon::AudioDataOutput::CenterChannel),
      14, uint(Phonon::AudioDataOutput::LeftSurroundChannel),
      15, uint(Phonon::AudioDataOutput::RightSurroundChannel),
      16, uint(Phonon::AudioDataOutput::SubwooferChannel),

       0        // eod
};

void Phonon::AudioDataOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioDataOutput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataReady((*reinterpret_cast< const QMap<Phonon::AudioDataOutput::Channel,QVector<qint16> >(*)>(_a[1]))); break;
        case 1: _t->endOfMedia((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setDataSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioDataOutput::*)(const QMap<Phonon::AudioDataOutput::Channel,QVector<qint16> > & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioDataOutput::dataReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioDataOutput::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioDataOutput::endOfMedia)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AudioDataOutput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->dataSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AudioDataOutput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDataSize(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Phonon::AudioDataOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractAudioOutput::staticMetaObject>(),
    qt_meta_stringdata_Phonon__AudioDataOutput.data,
    qt_meta_data_Phonon__AudioDataOutput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phonon::AudioDataOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phonon::AudioDataOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__AudioDataOutput.stringdata0))
        return static_cast<void*>(this);
    return AbstractAudioOutput::qt_metacast(_clname);
}

int Phonon::AudioDataOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractAudioOutput::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Phonon::AudioDataOutput::dataReady(const QMap<Phonon::AudioDataOutput::Channel,QVector<qint16> > & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Phonon::AudioDataOutput::endOfMedia(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
