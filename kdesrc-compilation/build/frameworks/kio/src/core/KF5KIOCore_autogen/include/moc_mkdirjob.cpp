/****************************************************************************
** Meta object code from reading C++ file 'mkdirjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/core/mkdirjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mkdirjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__MkdirJob_t {
    QByteArrayData data[10];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__MkdirJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__MkdirJob_t qt_meta_stringdata_KIO__MkdirJob = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KIO::MkdirJob"
QT_MOC_LITERAL(1, 14, 11), // "redirection"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "KIO::Job*"
QT_MOC_LITERAL(4, 37, 3), // "job"
QT_MOC_LITERAL(5, 41, 3), // "url"
QT_MOC_LITERAL(6, 45, 20), // "permanentRedirection"
QT_MOC_LITERAL(7, 66, 7), // "fromUrl"
QT_MOC_LITERAL(8, 74, 5), // "toUrl"
QT_MOC_LITERAL(9, 80, 12) // "slotFinished"

    },
    "KIO::MkdirJob\0redirection\0\0KIO::Job*\0"
    "job\0url\0permanentRedirection\0fromUrl\0"
    "toUrl\0slotFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__MkdirJob[] = {

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
       6,    3,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   41,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QUrl,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QUrl, QMetaType::QUrl,    4,    7,    8,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void KIO::MkdirJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MkdirJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->redirection((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 1: _t->permanentRedirection((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 2: _t->slotFinished(); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MkdirJob::*)(KIO::Job * , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MkdirJob::redirection)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MkdirJob::*)(KIO::Job * , const QUrl & , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MkdirJob::permanentRedirection)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::MkdirJob::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleJob::staticMetaObject>(),
    qt_meta_stringdata_KIO__MkdirJob.data,
    qt_meta_data_KIO__MkdirJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::MkdirJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::MkdirJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__MkdirJob.stringdata0))
        return static_cast<void*>(this);
    return SimpleJob::qt_metacast(_clname);
}

int KIO::MkdirJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleJob::qt_metacall(_c, _id, _a);
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
void KIO::MkdirJob::redirection(KIO::Job * _t1, const QUrl & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::MkdirJob::permanentRedirection(KIO::Job * _t1, const QUrl & _t2, const QUrl & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
