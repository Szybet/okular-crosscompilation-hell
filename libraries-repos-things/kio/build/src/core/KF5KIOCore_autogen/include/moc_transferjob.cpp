/****************************************************************************
** Meta object code from reading C++ file 'transferjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/core/transferjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transferjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__TransferJob_t {
    QByteArrayData data[26];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__TransferJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__TransferJob_t qt_meta_stringdata_KIO__TransferJob = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KIO::TransferJob"
QT_MOC_LITERAL(1, 17, 4), // "data"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "KIO::Job*"
QT_MOC_LITERAL(4, 33, 3), // "job"
QT_MOC_LITERAL(5, 37, 7), // "dataReq"
QT_MOC_LITERAL(6, 45, 11), // "QByteArray&"
QT_MOC_LITERAL(7, 57, 11), // "redirection"
QT_MOC_LITERAL(8, 69, 3), // "url"
QT_MOC_LITERAL(9, 73, 20), // "permanentRedirection"
QT_MOC_LITERAL(10, 94, 7), // "fromUrl"
QT_MOC_LITERAL(11, 102, 5), // "toUrl"
QT_MOC_LITERAL(12, 108, 8), // "mimetype"
QT_MOC_LITERAL(13, 117, 8), // "mimeType"
QT_MOC_LITERAL(14, 126, 13), // "mimeTypeFound"
QT_MOC_LITERAL(15, 140, 9), // "canResume"
QT_MOC_LITERAL(16, 150, 15), // "KIO::filesize_t"
QT_MOC_LITERAL(17, 166, 6), // "offset"
QT_MOC_LITERAL(18, 173, 15), // "slotRedirection"
QT_MOC_LITERAL(19, 189, 12), // "slotFinished"
QT_MOC_LITERAL(20, 202, 8), // "slotData"
QT_MOC_LITERAL(21, 211, 11), // "slotDataReq"
QT_MOC_LITERAL(22, 223, 12), // "slotMimetype"
QT_MOC_LITERAL(23, 236, 12), // "slotMetaData"
QT_MOC_LITERAL(24, 249, 13), // "KIO::MetaData"
QT_MOC_LITERAL(25, 263, 9) // "_metaData"

    },
    "KIO::TransferJob\0data\0\0KIO::Job*\0job\0"
    "dataReq\0QByteArray&\0redirection\0url\0"
    "permanentRedirection\0fromUrl\0toUrl\0"
    "mimetype\0mimeType\0mimeTypeFound\0"
    "canResume\0KIO::filesize_t\0offset\0"
    "slotRedirection\0slotFinished\0slotData\0"
    "slotDataReq\0slotMimetype\0slotMetaData\0"
    "KIO::MetaData\0_metaData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__TransferJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       5,    2,   84,    2, 0x06 /* Public */,
       7,    2,   89,    2, 0x06 /* Public */,
       9,    3,   94,    2, 0x06 /* Public */,
      12,    2,  101,    2, 0x06 /* Public */,
      14,    2,  106,    2, 0x06 /* Public */,
      15,    2,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,  116,    2, 0x09 /* Protected */,
      19,    0,  119,    2, 0x09 /* Protected */,
      20,    1,  120,    2, 0x09 /* Protected */,
      21,    0,  123,    2, 0x09 /* Protected */,
      22,    1,  124,    2, 0x09 /* Protected */,
      23,    1,  127,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,    1,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    4,    1,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QUrl,    4,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QUrl, QMetaType::QUrl,    4,   10,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   13,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   13,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 16,    4,   17,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    1,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 24,   25,

       0        // eod
};

void KIO::TransferJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransferJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->data((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->dataReq((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 2: _t->redirection((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 3: _t->permanentRedirection((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 4: _t->mimetype((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->mimeTypeFound((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->canResume((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< KIO::filesize_t(*)>(_a[2]))); break;
        case 7: _t->slotRedirection((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->slotFinished(); break;
        case 9: _t->slotData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 10: _t->slotDataReq(); break;
        case 11: _t->slotMimetype((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->slotMetaData((*reinterpret_cast< const KIO::MetaData(*)>(_a[1]))); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransferJob::*)(KIO::Job * , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferJob::data)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TransferJob::*)(KIO::Job * , QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferJob::dataReq)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TransferJob::*)(KIO::Job * , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferJob::redirection)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TransferJob::*)(KIO::Job * , const QUrl & , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferJob::permanentRedirection)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TransferJob::*)(KIO::Job * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferJob::mimetype)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TransferJob::*)(KIO::Job * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferJob::mimeTypeFound)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TransferJob::*)(KIO::Job * , KIO::filesize_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferJob::canResume)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::TransferJob::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleJob::staticMetaObject>(),
    qt_meta_stringdata_KIO__TransferJob.data,
    qt_meta_data_KIO__TransferJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::TransferJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::TransferJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__TransferJob.stringdata0))
        return static_cast<void*>(this);
    return SimpleJob::qt_metacast(_clname);
}

int KIO::TransferJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleJob::qt_metacall(_c, _id, _a);
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
void KIO::TransferJob::data(KIO::Job * _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::TransferJob::dataReq(KIO::Job * _t1, QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KIO::TransferJob::redirection(KIO::Job * _t1, const QUrl & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KIO::TransferJob::permanentRedirection(KIO::Job * _t1, const QUrl & _t2, const QUrl & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KIO::TransferJob::mimetype(KIO::Job * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KIO::TransferJob::mimeTypeFound(KIO::Job * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KIO::TransferJob::canResume(KIO::Job * _t1, KIO::filesize_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
