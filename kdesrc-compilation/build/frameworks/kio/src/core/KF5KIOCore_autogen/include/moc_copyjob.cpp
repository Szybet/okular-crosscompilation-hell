/****************************************************************************
** Meta object code from reading C++ file 'copyjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/core/copyjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'copyjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__CopyJob_t {
    QByteArrayData data[29];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__CopyJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__CopyJob_t qt_meta_stringdata_KIO__CopyJob = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KIO::CopyJob"
QT_MOC_LITERAL(1, 13, 10), // "totalFiles"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "KJob*"
QT_MOC_LITERAL(4, 31, 3), // "job"
QT_MOC_LITERAL(5, 35, 5), // "files"
QT_MOC_LITERAL(6, 41, 9), // "totalDirs"
QT_MOC_LITERAL(7, 51, 4), // "dirs"
QT_MOC_LITERAL(8, 56, 13), // "aboutToCreate"
QT_MOC_LITERAL(9, 70, 9), // "KIO::Job*"
QT_MOC_LITERAL(10, 80, 20), // "QList<KIO::CopyInfo>"
QT_MOC_LITERAL(11, 101, 14), // "processedFiles"
QT_MOC_LITERAL(12, 116, 13), // "processedDirs"
QT_MOC_LITERAL(13, 130, 7), // "copying"
QT_MOC_LITERAL(14, 138, 3), // "src"
QT_MOC_LITERAL(15, 142, 4), // "dest"
QT_MOC_LITERAL(16, 147, 7), // "linking"
QT_MOC_LITERAL(17, 155, 6), // "target"
QT_MOC_LITERAL(18, 162, 2), // "to"
QT_MOC_LITERAL(19, 165, 6), // "moving"
QT_MOC_LITERAL(20, 172, 4), // "from"
QT_MOC_LITERAL(21, 177, 11), // "creatingDir"
QT_MOC_LITERAL(22, 189, 3), // "dir"
QT_MOC_LITERAL(23, 193, 7), // "renamed"
QT_MOC_LITERAL(24, 201, 11), // "copyingDone"
QT_MOC_LITERAL(25, 213, 5), // "mtime"
QT_MOC_LITERAL(26, 219, 9), // "directory"
QT_MOC_LITERAL(27, 229, 15), // "copyingLinkDone"
QT_MOC_LITERAL(28, 245, 10) // "slotResult"

    },
    "KIO::CopyJob\0totalFiles\0\0KJob*\0job\0"
    "files\0totalDirs\0dirs\0aboutToCreate\0"
    "KIO::Job*\0QList<KIO::CopyInfo>\0"
    "processedFiles\0processedDirs\0copying\0"
    "src\0dest\0linking\0target\0to\0moving\0"
    "from\0creatingDir\0dir\0renamed\0copyingDone\0"
    "mtime\0directory\0copyingLinkDone\0"
    "slotResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__CopyJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x16 /* Public | MethodCompatibility */,
       6,    2,   84,    2, 0x16 /* Public | MethodCompatibility */,
       8,    2,   89,    2, 0x16 /* Public | MethodCompatibility */,
      11,    2,   94,    2, 0x06 /* Public */,
      12,    2,   99,    2, 0x06 /* Public */,
      13,    3,  104,    2, 0x06 /* Public */,
      16,    3,  111,    2, 0x06 /* Public */,
      19,    3,  118,    2, 0x06 /* Public */,
      21,    2,  125,    2, 0x06 /* Public */,
      23,    3,  130,    2, 0x06 /* Public */,
      24,    6,  137,    2, 0x06 /* Public */,
      27,    4,  150,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    1,  159,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULong,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULong,    4,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 10,    4,    5,
    QMetaType::Void, 0x80000000 | 9, QMetaType::ULong,    4,    5,
    QMetaType::Void, 0x80000000 | 9, QMetaType::ULong,    4,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QUrl, QMetaType::QUrl,    4,   14,   15,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::QUrl,    4,   17,   18,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QUrl, QMetaType::QUrl,    4,   20,   18,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QUrl,    4,   22,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QUrl, QMetaType::QUrl,    4,   20,   18,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QUrl, QMetaType::QUrl, QMetaType::QDateTime, QMetaType::Bool, QMetaType::Bool,    4,   20,   18,   25,   26,   23,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QUrl, QMetaType::QString, QMetaType::QUrl,    4,   20,   17,   18,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void KIO::CopyJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CopyJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->totalFiles((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 1: _t->totalDirs((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 2: _t->aboutToCreate((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QList<KIO::CopyInfo>(*)>(_a[2]))); break;
        case 3: _t->processedFiles((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 4: _t->processedDirs((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 5: _t->copying((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 6: _t->linking((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 7: _t->moving((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 8: _t->creatingDir((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 9: _t->renamed((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 10: _t->copyingDone((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])),(*reinterpret_cast< const QDateTime(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 11: _t->copyingLinkDone((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QUrl(*)>(_a[4]))); break;
        case 12: _t->slotResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
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
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        case 12:
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
            using _t = void (CopyJob::*)(KJob * , unsigned long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CopyJob::totalFiles)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CopyJob::*)(KJob * , unsigned long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CopyJob::totalDirs)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CopyJob::*)(KIO::Job * , const QList<KIO::CopyInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CopyJob::aboutToCreate)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CopyJob::*)(KIO::Job * , unsigned long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CopyJob::processedFiles)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CopyJob::*)(KIO::Job * , unsigned long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CopyJob::processedDirs)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CopyJob::*)(KIO::Job * , const QUrl & , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CopyJob::copying)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CopyJob::*)(KIO::Job * , const QString & , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CopyJob::linking)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CopyJob::*)(KIO::Job * , const QUrl & , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CopyJob::moving)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CopyJob::*)(KIO::Job * , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CopyJob::creatingDir)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CopyJob::*)(KIO::Job * , const QUrl & , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CopyJob::renamed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CopyJob::*)(KIO::Job * , const QUrl & , const QUrl & , const QDateTime & , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CopyJob::copyingDone)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (CopyJob::*)(KIO::Job * , const QUrl & , const QString & , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CopyJob::copyingLinkDone)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::CopyJob::staticMetaObject = { {
    QMetaObject::SuperData::link<Job::staticMetaObject>(),
    qt_meta_stringdata_KIO__CopyJob.data,
    qt_meta_data_KIO__CopyJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::CopyJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::CopyJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__CopyJob.stringdata0))
        return static_cast<void*>(this);
    return Job::qt_metacast(_clname);
}

int KIO::CopyJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Job::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void KIO::CopyJob::totalFiles(KJob * _t1, unsigned long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::CopyJob::totalDirs(KJob * _t1, unsigned long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KIO::CopyJob::aboutToCreate(KIO::Job * _t1, const QList<KIO::CopyInfo> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KIO::CopyJob::processedFiles(KIO::Job * _t1, unsigned long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KIO::CopyJob::processedDirs(KIO::Job * _t1, unsigned long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KIO::CopyJob::copying(KIO::Job * _t1, const QUrl & _t2, const QUrl & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KIO::CopyJob::linking(KIO::Job * _t1, const QString & _t2, const QUrl & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void KIO::CopyJob::moving(KIO::Job * _t1, const QUrl & _t2, const QUrl & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void KIO::CopyJob::creatingDir(KIO::Job * _t1, const QUrl & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void KIO::CopyJob::renamed(KIO::Job * _t1, const QUrl & _t2, const QUrl & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void KIO::CopyJob::copyingDone(KIO::Job * _t1, const QUrl & _t2, const QUrl & _t3, const QDateTime & _t4, bool _t5, bool _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void KIO::CopyJob::copyingLinkDone(KIO::Job * _t1, const QUrl & _t2, const QString & _t3, const QUrl & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
