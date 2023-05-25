/****************************************************************************
** Meta object code from reading C++ file 'weaver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/threadweaver/src/weaver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'weaver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThreadWeaver__Weaver_t {
    QByteArrayData data[6];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadWeaver__Weaver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadWeaver__Weaver_t qt_meta_stringdata_ThreadWeaver__Weaver = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ThreadWeaver::Weaver"
QT_MOC_LITERAL(1, 21, 13), // "threadStarted"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 21), // "ThreadWeaver::Thread*"
QT_MOC_LITERAL(4, 58, 12), // "threadExited"
QT_MOC_LITERAL(5, 71, 15) // "threadSuspended"

    },
    "ThreadWeaver::Weaver\0threadStarted\0\0"
    "ThreadWeaver::Thread*\0threadExited\0"
    "threadSuspended"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadWeaver__Weaver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void ThreadWeaver::Weaver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Weaver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->threadStarted((*reinterpret_cast< ThreadWeaver::Thread*(*)>(_a[1]))); break;
        case 1: _t->threadExited((*reinterpret_cast< ThreadWeaver::Thread*(*)>(_a[1]))); break;
        case 2: _t->threadSuspended((*reinterpret_cast< ThreadWeaver::Thread*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Weaver::*)(ThreadWeaver::Thread * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Weaver::threadStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Weaver::*)(ThreadWeaver::Thread * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Weaver::threadExited)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Weaver::*)(ThreadWeaver::Thread * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Weaver::threadSuspended)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ThreadWeaver::Weaver::staticMetaObject = { {
    QMetaObject::SuperData::link<QueueAPI::staticMetaObject>(),
    qt_meta_stringdata_ThreadWeaver__Weaver.data,
    qt_meta_data_ThreadWeaver__Weaver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ThreadWeaver::Weaver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadWeaver::Weaver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadWeaver__Weaver.stringdata0))
        return static_cast<void*>(this);
    return QueueAPI::qt_metacast(_clname);
}

int ThreadWeaver::Weaver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QueueAPI::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void ThreadWeaver::Weaver::threadStarted(ThreadWeaver::Thread * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ThreadWeaver::Weaver::threadExited(ThreadWeaver::Thread * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ThreadWeaver::Weaver::threadSuspended(ThreadWeaver::Thread * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
