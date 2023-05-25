/****************************************************************************
** Meta object code from reading C++ file 'volumefadereffect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../kdesupport/phonon/phonon/volumefadereffect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'volumefadereffect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Phonon__VolumeFaderEffect_t {
    QByteArrayData data[18];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phonon__VolumeFaderEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phonon__VolumeFaderEffect_t qt_meta_stringdata_Phonon__VolumeFaderEffect = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Phonon::VolumeFaderEffect"
QT_MOC_LITERAL(1, 26, 6), // "fadeIn"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "fadeTime"
QT_MOC_LITERAL(4, 43, 7), // "fadeOut"
QT_MOC_LITERAL(5, 51, 9), // "setVolume"
QT_MOC_LITERAL(6, 61, 6), // "volume"
QT_MOC_LITERAL(7, 68, 16), // "setVolumeDecibel"
QT_MOC_LITERAL(8, 85, 13), // "volumeDecibel"
QT_MOC_LITERAL(9, 99, 12), // "setFadeCurve"
QT_MOC_LITERAL(10, 112, 9), // "FadeCurve"
QT_MOC_LITERAL(11, 122, 5), // "curve"
QT_MOC_LITERAL(12, 128, 6), // "fadeTo"
QT_MOC_LITERAL(13, 135, 9), // "fadeCurve"
QT_MOC_LITERAL(14, 145, 12), // "Fade3Decibel"
QT_MOC_LITERAL(15, 158, 12), // "Fade6Decibel"
QT_MOC_LITERAL(16, 171, 12), // "Fade9Decibel"
QT_MOC_LITERAL(17, 184, 13) // "Fade12Decibel"

    },
    "Phonon::VolumeFaderEffect\0fadeIn\0\0"
    "fadeTime\0fadeOut\0setVolume\0volume\0"
    "setVolumeDecibel\0volumeDecibel\0"
    "setFadeCurve\0FadeCurve\0curve\0fadeTo\0"
    "fadeCurve\0Fade3Decibel\0Fade6Decibel\0"
    "Fade9Decibel\0Fade12Decibel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phonon__VolumeFaderEffect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   64, // properties
       1,   73, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       7,    1,   53,    2, 0x0a /* Public */,
       9,    1,   56,    2, 0x0a /* Public */,
      12,    2,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Float, QMetaType::Int,    6,    3,

 // properties: name, type, flags
       6, QMetaType::Float, 0x00095103,
       8, QMetaType::Double, 0x00095103,
      13, 0x80000000 | 10, 0x0009510b,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    4,   78,

 // enum data: key, value
      14, uint(Phonon::VolumeFaderEffect::Fade3Decibel),
      15, uint(Phonon::VolumeFaderEffect::Fade6Decibel),
      16, uint(Phonon::VolumeFaderEffect::Fade9Decibel),
      17, uint(Phonon::VolumeFaderEffect::Fade12Decibel),

       0        // eod
};

void Phonon::VolumeFaderEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VolumeFaderEffect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fadeIn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->fadeOut((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setVolume((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setVolumeDecibel((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setFadeCurve((*reinterpret_cast< FadeCurve(*)>(_a[1]))); break;
        case 5: _t->fadeTo((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VolumeFaderEffect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->volume(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->volumeDecibel(); break;
        case 2: *reinterpret_cast< FadeCurve*>(_v) = _t->fadeCurve(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VolumeFaderEffect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVolume(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setVolumeDecibel(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setFadeCurve(*reinterpret_cast< FadeCurve*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Phonon::VolumeFaderEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<Effect::staticMetaObject>(),
    qt_meta_stringdata_Phonon__VolumeFaderEffect.data,
    qt_meta_data_Phonon__VolumeFaderEffect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phonon::VolumeFaderEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phonon::VolumeFaderEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__VolumeFaderEffect.stringdata0))
        return static_cast<void*>(this);
    return Effect::qt_metacast(_clname);
}

int Phonon::VolumeFaderEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Effect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
