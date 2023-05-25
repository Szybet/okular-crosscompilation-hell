/****************************************************************************
** Meta object code from reading C++ file 'multigetjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/core/multigetjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multigetjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__MultiGetJob_t {
    QByteArrayData data[15];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__MultiGetJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__MultiGetJob_t qt_meta_stringdata_KIO__MultiGetJob = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KIO::MultiGetJob"
QT_MOC_LITERAL(1, 17, 4), // "data"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 2), // "id"
QT_MOC_LITERAL(4, 26, 12), // "dataReceived"
QT_MOC_LITERAL(5, 39, 8), // "mimetype"
QT_MOC_LITERAL(6, 48, 8), // "mimeType"
QT_MOC_LITERAL(7, 57, 13), // "mimeTypeFound"
QT_MOC_LITERAL(8, 71, 6), // "result"
QT_MOC_LITERAL(9, 78, 15), // "fileTransferred"
QT_MOC_LITERAL(10, 94, 15), // "slotRedirection"
QT_MOC_LITERAL(11, 110, 3), // "url"
QT_MOC_LITERAL(12, 114, 12), // "slotFinished"
QT_MOC_LITERAL(13, 127, 8), // "slotData"
QT_MOC_LITERAL(14, 136, 12) // "slotMimetype"

    },
    "KIO::MultiGetJob\0data\0\0id\0dataReceived\0"
    "mimetype\0mimeType\0mimeTypeFound\0result\0"
    "fileTransferred\0slotRedirection\0url\0"
    "slotFinished\0slotData\0slotMimetype"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__MultiGetJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       4,    2,   69,    2, 0x06 /* Public */,
       5,    2,   74,    2, 0x06 /* Public */,
       7,    2,   79,    2, 0x06 /* Public */,
       8,    1,   84,    2, 0x06 /* Public */,
       9,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   90,    2, 0x09 /* Protected */,
      12,    0,   93,    2, 0x09 /* Protected */,
      13,    1,   94,    2, 0x09 /* Protected */,
      14,    1,   97,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Long, QMetaType::QByteArray,    3,    1,
    QMetaType::Void, QMetaType::Long, QMetaType::QByteArray,    3,    1,
    QMetaType::Void, QMetaType::Long, QMetaType::QString,    3,    6,
    QMetaType::Void, QMetaType::Long, QMetaType::QString,    3,    6,
    QMetaType::Void, QMetaType::Long,    3,
    QMetaType::Void, QMetaType::Long,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    1,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void KIO::MultiGetJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MultiGetJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->data((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->dataReceived((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 2: _t->mimetype((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->mimeTypeFound((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->result((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 5: _t->fileTransferred((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 6: _t->slotRedirection((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->slotFinished(); break;
        case 8: _t->slotData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 9: _t->slotMimetype((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MultiGetJob::*)(long , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiGetJob::data)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MultiGetJob::*)(long , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiGetJob::dataReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MultiGetJob::*)(long , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiGetJob::mimetype)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MultiGetJob::*)(long , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiGetJob::mimeTypeFound)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MultiGetJob::*)(long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiGetJob::result)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MultiGetJob::*)(long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiGetJob::fileTransferred)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::MultiGetJob::staticMetaObject = { {
    QMetaObject::SuperData::link<TransferJob::staticMetaObject>(),
    qt_meta_stringdata_KIO__MultiGetJob.data,
    qt_meta_data_KIO__MultiGetJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::MultiGetJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::MultiGetJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__MultiGetJob.stringdata0))
        return static_cast<void*>(this);
    return TransferJob::qt_metacast(_clname);
}

int KIO::MultiGetJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TransferJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void KIO::MultiGetJob::data(long _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::MultiGetJob::dataReceived(long _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KIO::MultiGetJob::mimetype(long _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KIO::MultiGetJob::mimeTypeFound(long _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KIO::MultiGetJob::result(long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KIO::MultiGetJob::fileTransferred(long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
