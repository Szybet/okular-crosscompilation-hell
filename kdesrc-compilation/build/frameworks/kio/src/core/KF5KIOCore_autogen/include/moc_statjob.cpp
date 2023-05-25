/****************************************************************************
** Meta object code from reading C++ file 'statjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/core/statjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__StatJob_t {
    QByteArrayData data[13];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__StatJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__StatJob_t qt_meta_stringdata_KIO__StatJob = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KIO::StatJob"
QT_MOC_LITERAL(1, 13, 11), // "redirection"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "KIO::Job*"
QT_MOC_LITERAL(4, 36, 3), // "job"
QT_MOC_LITERAL(5, 40, 3), // "url"
QT_MOC_LITERAL(6, 44, 20), // "permanentRedirection"
QT_MOC_LITERAL(7, 65, 7), // "fromUrl"
QT_MOC_LITERAL(8, 73, 5), // "toUrl"
QT_MOC_LITERAL(9, 79, 12), // "slotFinished"
QT_MOC_LITERAL(10, 92, 12), // "slotMetaData"
QT_MOC_LITERAL(11, 105, 13), // "KIO::MetaData"
QT_MOC_LITERAL(12, 119, 9) // "_metaData"

    },
    "KIO::StatJob\0redirection\0\0KIO::Job*\0"
    "job\0url\0permanentRedirection\0fromUrl\0"
    "toUrl\0slotFinished\0slotMetaData\0"
    "KIO::MetaData\0_metaData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__StatJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       6,    3,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   46,    2, 0x09 /* Protected */,
      10,    1,   47,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QUrl,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QUrl, QMetaType::QUrl,    4,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void KIO::StatJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->redirection((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 1: _t->permanentRedirection((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 2: _t->slotFinished(); break;
        case 3: _t->slotMetaData((*reinterpret_cast< const KIO::MetaData(*)>(_a[1]))); break;
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
            using _t = void (StatJob::*)(KIO::Job * , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatJob::redirection)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StatJob::*)(KIO::Job * , const QUrl & , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatJob::permanentRedirection)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::StatJob::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleJob::staticMetaObject>(),
    qt_meta_stringdata_KIO__StatJob.data,
    qt_meta_data_KIO__StatJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::StatJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::StatJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__StatJob.stringdata0))
        return static_cast<void*>(this);
    return SimpleJob::qt_metacast(_clname);
}

int KIO::StatJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KIO::StatJob::redirection(KIO::Job * _t1, const QUrl & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::StatJob::permanentRedirection(KIO::Job * _t1, const QUrl & _t2, const QUrl & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
