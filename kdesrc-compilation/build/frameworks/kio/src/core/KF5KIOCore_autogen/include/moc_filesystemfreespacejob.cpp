/****************************************************************************
** Meta object code from reading C++ file 'filesystemfreespacejob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/core/filesystemfreespacejob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystemfreespacejob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__FileSystemFreeSpaceJob_t {
    QByteArrayData data[9];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__FileSystemFreeSpaceJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__FileSystemFreeSpaceJob_t qt_meta_stringdata_KIO__FileSystemFreeSpaceJob = {
    {
QT_MOC_LITERAL(0, 0, 27), // "KIO::FileSystemFreeSpaceJob"
QT_MOC_LITERAL(1, 28, 6), // "result"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "KIO::Job*"
QT_MOC_LITERAL(4, 46, 3), // "job"
QT_MOC_LITERAL(5, 50, 15), // "KIO::filesize_t"
QT_MOC_LITERAL(6, 66, 4), // "size"
QT_MOC_LITERAL(7, 71, 9), // "available"
QT_MOC_LITERAL(8, 81, 12) // "slotFinished"

    },
    "KIO::FileSystemFreeSpaceJob\0result\0\0"
    "KIO::Job*\0job\0KIO::filesize_t\0size\0"
    "available\0slotFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__FileSystemFreeSpaceJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   31,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5,    4,    6,    7,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void KIO::FileSystemFreeSpaceJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileSystemFreeSpaceJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->result((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< KIO::filesize_t(*)>(_a[2])),(*reinterpret_cast< KIO::filesize_t(*)>(_a[3]))); break;
        case 1: _t->slotFinished(); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileSystemFreeSpaceJob::*)(KIO::Job * , KIO::filesize_t , KIO::filesize_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSystemFreeSpaceJob::result)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::FileSystemFreeSpaceJob::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleJob::staticMetaObject>(),
    qt_meta_stringdata_KIO__FileSystemFreeSpaceJob.data,
    qt_meta_data_KIO__FileSystemFreeSpaceJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::FileSystemFreeSpaceJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::FileSystemFreeSpaceJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__FileSystemFreeSpaceJob.stringdata0))
        return static_cast<void*>(this);
    return SimpleJob::qt_metacast(_clname);
}

int KIO::FileSystemFreeSpaceJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleJob::qt_metacall(_c, _id, _a);
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
void KIO::FileSystemFreeSpaceJob::result(KIO::Job * _t1, KIO::filesize_t _t2, KIO::filesize_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
