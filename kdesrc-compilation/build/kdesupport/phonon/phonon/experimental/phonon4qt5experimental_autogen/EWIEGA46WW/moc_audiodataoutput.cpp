/****************************************************************************
** Meta object code from reading C++ file 'audiodataoutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../kdesupport/phonon/phonon/experimental/audiodataoutput.h"
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
struct qt_meta_stringdata_Phonon__Experimental__AudioDataOutput_t {
    QByteArrayData data[23];
    char stringdata0[402];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phonon__Experimental__AudioDataOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phonon__Experimental__AudioDataOutput_t qt_meta_stringdata_Phonon__Experimental__AudioDataOutput = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Phonon::Experimental::AudioDa..."
QT_MOC_LITERAL(1, 38, 9), // "dataReady"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 69), // "QMap<Phonon::Experimental::Au..."
QT_MOC_LITERAL(4, 119, 4), // "data"
QT_MOC_LITERAL(5, 124, 68), // "QMap<Phonon::Experimental::Au..."
QT_MOC_LITERAL(6, 193, 10), // "endOfMedia"
QT_MOC_LITERAL(7, 204, 16), // "remainingSamples"
QT_MOC_LITERAL(8, 221, 9), // "setFormat"
QT_MOC_LITERAL(9, 231, 6), // "Format"
QT_MOC_LITERAL(10, 238, 6), // "format"
QT_MOC_LITERAL(11, 245, 11), // "setDataSize"
QT_MOC_LITERAL(12, 257, 4), // "size"
QT_MOC_LITERAL(13, 262, 8), // "dataSize"
QT_MOC_LITERAL(14, 271, 7), // "Channel"
QT_MOC_LITERAL(15, 279, 11), // "LeftChannel"
QT_MOC_LITERAL(16, 291, 12), // "RightChannel"
QT_MOC_LITERAL(17, 304, 13), // "CenterChannel"
QT_MOC_LITERAL(18, 318, 19), // "LeftSurroundChannel"
QT_MOC_LITERAL(19, 338, 20), // "RightSurroundChannel"
QT_MOC_LITERAL(20, 359, 16), // "SubwooferChannel"
QT_MOC_LITERAL(21, 376, 13), // "IntegerFormat"
QT_MOC_LITERAL(22, 390, 11) // "FloatFormat"

    },
    "Phonon::Experimental::AudioDataOutput\0"
    "dataReady\0\0"
    "QMap<Phonon::Experimental::AudioDataOutput::Channel,QVector<qint16> >\0"
    "data\0"
    "QMap<Phonon::Experimental::AudioDataOutput::Channel,QVector<float> >\0"
    "endOfMedia\0remainingSamples\0setFormat\0"
    "Format\0format\0setDataSize\0size\0dataSize\0"
    "Channel\0LeftChannel\0RightChannel\0"
    "CenterChannel\0LeftSurroundChannel\0"
    "RightSurroundChannel\0SubwooferChannel\0"
    "IntegerFormat\0FloatFormat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phonon__Experimental__AudioDataOutput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   54, // properties
       2,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       1,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   48,    2, 0x0a /* Public */,
      11,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   12,

 // properties: name, type, flags
      10, 0x80000000 | 9, 0x0009510b,
      13, QMetaType::Int, 0x00095103,

 // enums: name, alias, flags, count, data
      14,   14, 0x0,    6,   70,
       9,    9, 0x0,    2,   82,

 // enum data: key, value
      15, uint(Phonon::Experimental::AudioDataOutput::LeftChannel),
      16, uint(Phonon::Experimental::AudioDataOutput::RightChannel),
      17, uint(Phonon::Experimental::AudioDataOutput::CenterChannel),
      18, uint(Phonon::Experimental::AudioDataOutput::LeftSurroundChannel),
      19, uint(Phonon::Experimental::AudioDataOutput::RightSurroundChannel),
      20, uint(Phonon::Experimental::AudioDataOutput::SubwooferChannel),
      21, uint(Phonon::Experimental::AudioDataOutput::IntegerFormat),
      22, uint(Phonon::Experimental::AudioDataOutput::FloatFormat),

       0        // eod
};

void Phonon::Experimental::AudioDataOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioDataOutput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataReady((*reinterpret_cast< const QMap<Phonon::Experimental::AudioDataOutput::Channel,QVector<qint16> >(*)>(_a[1]))); break;
        case 1: _t->dataReady((*reinterpret_cast< const QMap<Phonon::Experimental::AudioDataOutput::Channel,QVector<float> >(*)>(_a[1]))); break;
        case 2: _t->endOfMedia((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setFormat((*reinterpret_cast< Format(*)>(_a[1]))); break;
        case 4: _t->setDataSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioDataOutput::*)(const QMap<Phonon::Experimental::AudioDataOutput::Channel,QVector<qint16> > & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioDataOutput::dataReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioDataOutput::*)(const QMap<Phonon::Experimental::AudioDataOutput::Channel,QVector<float> > & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioDataOutput::dataReady)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AudioDataOutput::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioDataOutput::endOfMedia)) {
                *result = 2;
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
        case 0: *reinterpret_cast< Format*>(_v) = _t->format(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->dataSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AudioDataOutput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFormat(*reinterpret_cast< Format*>(_v)); break;
        case 1: _t->setDataSize(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Phonon::Experimental::AudioDataOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractAudioOutput::staticMetaObject>(),
    qt_meta_stringdata_Phonon__Experimental__AudioDataOutput.data,
    qt_meta_data_Phonon__Experimental__AudioDataOutput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phonon::Experimental::AudioDataOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phonon::Experimental::AudioDataOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__Experimental__AudioDataOutput.stringdata0))
        return static_cast<void*>(this);
    return AbstractAudioOutput::qt_metacast(_clname);
}

int Phonon::Experimental::AudioDataOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractAudioOutput::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void Phonon::Experimental::AudioDataOutput::dataReady(const QMap<Phonon::Experimental::AudioDataOutput::Channel,QVector<qint16> > & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Phonon::Experimental::AudioDataOutput::dataReady(const QMap<Phonon::Experimental::AudioDataOutput::Channel,QVector<float> > & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Phonon::Experimental::AudioDataOutput::endOfMedia(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
