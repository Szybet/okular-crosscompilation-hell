/****************************************************************************
** Meta object code from reading C++ file 'job_base.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/core/job_base.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'job_base.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__Job_t {
    QByteArrayData data[7];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__Job_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__Job_t qt_meta_stringdata_KIO__Job = {
    {
QT_MOC_LITERAL(0, 0, 8), // "KIO::Job"
QT_MOC_LITERAL(1, 9, 8), // "canceled"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "KJob*"
QT_MOC_LITERAL(4, 25, 3), // "job"
QT_MOC_LITERAL(5, 29, 9), // "connected"
QT_MOC_LITERAL(6, 39, 9) // "KIO::Job*"

    },
    "KIO::Job\0canceled\0\0KJob*\0job\0connected\0"
    "KIO::Job*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__Job[] = {

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
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,

       0        // eod
};

void KIO::Job::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Job *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->canceled((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 1: _t->connected((*reinterpret_cast< KIO::Job*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Job::*)(KJob * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Job::canceled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Job::*)(KIO::Job * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Job::connected)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::Job::staticMetaObject = { {
    QMetaObject::SuperData::link<KCompositeJob::staticMetaObject>(),
    qt_meta_stringdata_KIO__Job.data,
    qt_meta_data_KIO__Job,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::Job::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::Job::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__Job.stringdata0))
        return static_cast<void*>(this);
    return KCompositeJob::qt_metacast(_clname);
}

int KIO::Job::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KCompositeJob::qt_metacall(_c, _id, _a);
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
void KIO::Job::canceled(KJob * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::Job::connected(KIO::Job * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
