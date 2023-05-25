/****************************************************************************
** Meta object code from reading C++ file 'filejob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/core/filejob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filejob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__FileJob_t {
    QByteArrayData data[19];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__FileJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__FileJob_t qt_meta_stringdata_KIO__FileJob = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KIO::FileJob"
QT_MOC_LITERAL(1, 13, 4), // "data"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 9), // "KIO::Job*"
QT_MOC_LITERAL(4, 29, 3), // "job"
QT_MOC_LITERAL(5, 33, 11), // "redirection"
QT_MOC_LITERAL(6, 45, 3), // "url"
QT_MOC_LITERAL(7, 49, 8), // "mimetype"
QT_MOC_LITERAL(8, 58, 8), // "mimeType"
QT_MOC_LITERAL(9, 67, 13), // "mimeTypeFound"
QT_MOC_LITERAL(10, 81, 4), // "open"
QT_MOC_LITERAL(11, 86, 7), // "written"
QT_MOC_LITERAL(12, 94, 15), // "KIO::filesize_t"
QT_MOC_LITERAL(13, 110, 5), // "close"
QT_MOC_LITERAL(14, 116, 10), // "fileClosed"
QT_MOC_LITERAL(15, 127, 8), // "position"
QT_MOC_LITERAL(16, 136, 6), // "offset"
QT_MOC_LITERAL(17, 143, 9), // "truncated"
QT_MOC_LITERAL(18, 153, 6) // "length"

    },
    "KIO::FileJob\0data\0\0KIO::Job*\0job\0"
    "redirection\0url\0mimetype\0mimeType\0"
    "mimeTypeFound\0open\0written\0KIO::filesize_t\0"
    "close\0fileClosed\0position\0offset\0"
    "truncated\0length"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__FileJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       5,    2,   69,    2, 0x06 /* Public */,
       7,    2,   74,    2, 0x06 /* Public */,
       9,    2,   79,    2, 0x06 /* Public */,
      10,    1,   84,    2, 0x06 /* Public */,
      11,    2,   87,    2, 0x06 /* Public */,
      13,    1,   92,    2, 0x06 /* Public */,
      14,    1,   95,    2, 0x06 /* Public */,
      15,    2,   98,    2, 0x06 /* Public */,
      17,    2,  103,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,    1,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QUrl,    4,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 12,    4,   11,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 12,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 12,    4,   18,

       0        // eod
};

void KIO::FileJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->data((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->redirection((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 2: _t->mimetype((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->mimeTypeFound((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->open((*reinterpret_cast< KIO::Job*(*)>(_a[1]))); break;
        case 5: _t->written((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< KIO::filesize_t(*)>(_a[2]))); break;
        case 6: _t->close((*reinterpret_cast< KIO::Job*(*)>(_a[1]))); break;
        case 7: _t->fileClosed((*reinterpret_cast< KIO::Job*(*)>(_a[1]))); break;
        case 8: _t->position((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< KIO::filesize_t(*)>(_a[2]))); break;
        case 9: _t->truncated((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< KIO::filesize_t(*)>(_a[2]))); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        case 9:
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
            using _t = void (FileJob::*)(KIO::Job * , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileJob::data)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileJob::*)(KIO::Job * , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileJob::redirection)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileJob::*)(KIO::Job * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileJob::mimetype)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileJob::*)(KIO::Job * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileJob::mimeTypeFound)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileJob::*)(KIO::Job * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileJob::open)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FileJob::*)(KIO::Job * , KIO::filesize_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileJob::written)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FileJob::*)(KIO::Job * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileJob::close)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FileJob::*)(KIO::Job * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileJob::fileClosed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FileJob::*)(KIO::Job * , KIO::filesize_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileJob::position)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FileJob::*)(KIO::Job * , KIO::filesize_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileJob::truncated)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::FileJob::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleJob::staticMetaObject>(),
    qt_meta_stringdata_KIO__FileJob.data,
    qt_meta_data_KIO__FileJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::FileJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::FileJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__FileJob.stringdata0))
        return static_cast<void*>(this);
    return SimpleJob::qt_metacast(_clname);
}

int KIO::FileJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void KIO::FileJob::data(KIO::Job * _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::FileJob::redirection(KIO::Job * _t1, const QUrl & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KIO::FileJob::mimetype(KIO::Job * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KIO::FileJob::mimeTypeFound(KIO::Job * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KIO::FileJob::open(KIO::Job * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KIO::FileJob::written(KIO::Job * _t1, KIO::filesize_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KIO::FileJob::close(KIO::Job * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void KIO::FileJob::fileClosed(KIO::Job * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void KIO::FileJob::position(KIO::Job * _t1, KIO::filesize_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void KIO::FileJob::truncated(KIO::Job * _t1, KIO::filesize_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
