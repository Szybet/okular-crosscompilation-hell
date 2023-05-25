/****************************************************************************
** Meta object code from reading C++ file 'deletejob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/core/deletejob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deletejob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__DeleteJob_t {
    QByteArrayData data[14];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__DeleteJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__DeleteJob_t qt_meta_stringdata_KIO__DeleteJob = {
    {
QT_MOC_LITERAL(0, 0, 14), // "KIO::DeleteJob"
QT_MOC_LITERAL(1, 15, 10), // "totalFiles"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "KJob*"
QT_MOC_LITERAL(4, 33, 3), // "job"
QT_MOC_LITERAL(5, 37, 5), // "files"
QT_MOC_LITERAL(6, 43, 9), // "totalDirs"
QT_MOC_LITERAL(7, 53, 4), // "dirs"
QT_MOC_LITERAL(8, 58, 14), // "processedFiles"
QT_MOC_LITERAL(9, 73, 9), // "KIO::Job*"
QT_MOC_LITERAL(10, 83, 13), // "processedDirs"
QT_MOC_LITERAL(11, 97, 8), // "deleting"
QT_MOC_LITERAL(12, 106, 4), // "file"
QT_MOC_LITERAL(13, 111, 10) // "slotResult"

    },
    "KIO::DeleteJob\0totalFiles\0\0KJob*\0job\0"
    "files\0totalDirs\0dirs\0processedFiles\0"
    "KIO::Job*\0processedDirs\0deleting\0file\0"
    "slotResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__DeleteJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    2,   49,    2, 0x06 /* Public */,
       8,    2,   54,    2, 0x06 /* Public */,
      10,    2,   59,    2, 0x06 /* Public */,
      11,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   69,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULong,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULong,    4,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::ULong,    4,    5,
    QMetaType::Void, 0x80000000 | 9, QMetaType::ULong,    4,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QUrl,    4,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void KIO::DeleteJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeleteJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->totalFiles((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 1: _t->totalDirs((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 2: _t->processedFiles((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 3: _t->processedDirs((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 4: _t->deleting((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 5: _t->slotResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        case 5:
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
            using _t = void (DeleteJob::*)(KJob * , unsigned long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeleteJob::totalFiles)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeleteJob::*)(KJob * , unsigned long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeleteJob::totalDirs)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeleteJob::*)(KIO::Job * , unsigned long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeleteJob::processedFiles)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeleteJob::*)(KIO::Job * , unsigned long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeleteJob::processedDirs)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeleteJob::*)(KIO::Job * , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeleteJob::deleting)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::DeleteJob::staticMetaObject = { {
    QMetaObject::SuperData::link<Job::staticMetaObject>(),
    qt_meta_stringdata_KIO__DeleteJob.data,
    qt_meta_data_KIO__DeleteJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::DeleteJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::DeleteJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__DeleteJob.stringdata0))
        return static_cast<void*>(this);
    return Job::qt_metacast(_clname);
}

int KIO::DeleteJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Job::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void KIO::DeleteJob::totalFiles(KJob * _t1, unsigned long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::DeleteJob::totalDirs(KJob * _t1, unsigned long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KIO::DeleteJob::processedFiles(KIO::Job * _t1, unsigned long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KIO::DeleteJob::processedDirs(KIO::Job * _t1, unsigned long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KIO::DeleteJob::deleting(KIO::Job * _t1, const QUrl & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
