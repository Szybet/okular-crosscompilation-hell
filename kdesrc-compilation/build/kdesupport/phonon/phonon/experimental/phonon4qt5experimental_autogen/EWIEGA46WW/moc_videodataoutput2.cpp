/****************************************************************************
** Meta object code from reading C++ file 'videodataoutput2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../kdesupport/phonon/phonon/experimental/videodataoutput2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videodataoutput2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Phonon__Experimental__VideoDataOutput2_t {
    QByteArrayData data[5];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phonon__Experimental__VideoDataOutput2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phonon__Experimental__VideoDataOutput2_t qt_meta_stringdata_Phonon__Experimental__VideoDataOutput2 = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Phonon::Experimental::VideoDa..."
QT_MOC_LITERAL(1, 39, 16), // "frameReadySignal"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 33), // "Phonon::Experimental::VideoFr..."
QT_MOC_LITERAL(4, 91, 16) // "endOfMediaSignal"

    },
    "Phonon::Experimental::VideoDataOutput2\0"
    "frameReadySignal\0\0Phonon::Experimental::VideoFrame2\0"
    "endOfMediaSignal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phonon__Experimental__VideoDataOutput2[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

       0        // eod
};

void Phonon::Experimental::VideoDataOutput2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoDataOutput2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->frameReadySignal((*reinterpret_cast< const Phonon::Experimental::VideoFrame2(*)>(_a[1]))); break;
        case 1: _t->endOfMediaSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Phonon::Experimental::VideoFrame2 >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoDataOutput2::*)(const Phonon::Experimental::VideoFrame2 & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoDataOutput2::frameReadySignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VideoDataOutput2::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoDataOutput2::endOfMediaSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Phonon::Experimental::VideoDataOutput2::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Phonon__Experimental__VideoDataOutput2.data,
    qt_meta_data_Phonon__Experimental__VideoDataOutput2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phonon::Experimental::VideoDataOutput2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phonon::Experimental::VideoDataOutput2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__Experimental__VideoDataOutput2.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AbstractVideoDataOutput"))
        return static_cast< AbstractVideoDataOutput*>(this);
    return QObject::qt_metacast(_clname);
}

int Phonon::Experimental::VideoDataOutput2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Phonon::Experimental::VideoDataOutput2::frameReadySignal(const Phonon::Experimental::VideoFrame2 & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Phonon::Experimental::VideoDataOutput2::endOfMediaSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
