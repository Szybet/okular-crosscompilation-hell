/****************************************************************************
** Meta object code from reading C++ file 'videodataoutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../phonon/experimental/videodataoutput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videodataoutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Phonon__Experimental__VideoDataOutput_t {
    QByteArrayData data[11];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phonon__Experimental__VideoDataOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phonon__Experimental__VideoDataOutput_t qt_meta_stringdata_Phonon__Experimental__VideoDataOutput = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Phonon::Experimental::VideoDa..."
QT_MOC_LITERAL(1, 38, 12), // "displayFrame"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 8), // "nowStamp"
QT_MOC_LITERAL(4, 61, 8), // "outStamp"
QT_MOC_LITERAL(5, 70, 10), // "endOfMedia"
QT_MOC_LITERAL(6, 81, 10), // "setRunning"
QT_MOC_LITERAL(7, 92, 7), // "running"
QT_MOC_LITERAL(8, 100, 5), // "start"
QT_MOC_LITERAL(9, 106, 4), // "stop"
QT_MOC_LITERAL(10, 111, 7) // "latency"

    },
    "Phonon::Experimental::VideoDataOutput\0"
    "displayFrame\0\0nowStamp\0outStamp\0"
    "endOfMedia\0setRunning\0running\0start\0"
    "stop\0latency"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phonon__Experimental__VideoDataOutput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   45,    2, 0x0a /* Public */,
       8,    0,   48,    2, 0x0a /* Public */,
       9,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00095001,
       7, QMetaType::Bool, 0x00095103,

       0        // eod
};

void Phonon::Experimental::VideoDataOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoDataOutput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayFrame((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: _t->endOfMedia(); break;
        case 2: _t->setRunning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->start(); break;
        case 4: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoDataOutput::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoDataOutput::displayFrame)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VideoDataOutput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoDataOutput::endOfMedia)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VideoDataOutput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->latency(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isRunning(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VideoDataOutput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setRunning(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Phonon::Experimental::VideoDataOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Phonon__Experimental__VideoDataOutput.data,
    qt_meta_data_Phonon__Experimental__VideoDataOutput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phonon::Experimental::VideoDataOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phonon::Experimental::VideoDataOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__Experimental__VideoDataOutput.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AbstractVideoOutput"))
        return static_cast< AbstractVideoOutput*>(this);
    return QObject::qt_metacast(_clname);
}

int Phonon::Experimental::VideoDataOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Phonon::Experimental::VideoDataOutput::displayFrame(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Phonon::Experimental::VideoDataOutput::endOfMedia()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
