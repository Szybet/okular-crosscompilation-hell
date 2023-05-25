/****************************************************************************
** Meta object code from reading C++ file 'filecopyjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/core/filecopyjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filecopyjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__FileCopyJob_t {
    QByteArrayData data[9];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__FileCopyJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__FileCopyJob_t qt_meta_stringdata_KIO__FileCopyJob = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KIO::FileCopyJob"
QT_MOC_LITERAL(1, 17, 8), // "mimetype"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "KIO::Job*"
QT_MOC_LITERAL(4, 37, 3), // "job"
QT_MOC_LITERAL(5, 41, 8), // "mimeType"
QT_MOC_LITERAL(6, 50, 13), // "mimeTypeFound"
QT_MOC_LITERAL(7, 64, 10), // "slotResult"
QT_MOC_LITERAL(8, 75, 5) // "KJob*"

    },
    "KIO::FileCopyJob\0mimetype\0\0KIO::Job*\0"
    "job\0mimeType\0mimeTypeFound\0slotResult\0"
    "KJob*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__FileCopyJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       6,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   39,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    4,

       0        // eod
};

void KIO::FileCopyJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileCopyJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mimetype((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->mimeTypeFound((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->slotResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileCopyJob::*)(KIO::Job * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileCopyJob::mimetype)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileCopyJob::*)(KIO::Job * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileCopyJob::mimeTypeFound)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::FileCopyJob::staticMetaObject = { {
    QMetaObject::SuperData::link<Job::staticMetaObject>(),
    qt_meta_stringdata_KIO__FileCopyJob.data,
    qt_meta_data_KIO__FileCopyJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::FileCopyJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::FileCopyJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__FileCopyJob.stringdata0))
        return static_cast<void*>(this);
    return Job::qt_metacast(_clname);
}

int KIO::FileCopyJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Job::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void KIO::FileCopyJob::mimetype(KIO::Job * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::FileCopyJob::mimeTypeFound(KIO::Job * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
