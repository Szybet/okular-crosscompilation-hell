/****************************************************************************
** Meta object code from reading C++ file 'simplejob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/core/simplejob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simplejob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__SimpleJob_t {
    QByteArrayData data[8];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__SimpleJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__SimpleJob_t qt_meta_stringdata_KIO__SimpleJob = {
    {
QT_MOC_LITERAL(0, 0, 14), // "KIO::SimpleJob"
QT_MOC_LITERAL(1, 15, 9), // "slotError"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "slotFinished"
QT_MOC_LITERAL(4, 39, 11), // "slotWarning"
QT_MOC_LITERAL(5, 51, 12), // "slotMetaData"
QT_MOC_LITERAL(6, 64, 13), // "KIO::MetaData"
QT_MOC_LITERAL(7, 78, 9) // "_metaData"

    },
    "KIO::SimpleJob\0slotError\0\0slotFinished\0"
    "slotWarning\0slotMetaData\0KIO::MetaData\0"
    "_metaData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__SimpleJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x0a /* Public */,
       3,    0,   39,    2, 0x09 /* Protected */,
       4,    1,   40,    2, 0x09 /* Protected */,
       5,    1,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void KIO::SimpleJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimpleJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->slotFinished(); break;
        case 2: _t->slotWarning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotMetaData((*reinterpret_cast< const KIO::MetaData(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::SimpleJob::staticMetaObject = { {
    QMetaObject::SuperData::link<KIO::Job::staticMetaObject>(),
    qt_meta_stringdata_KIO__SimpleJob.data,
    qt_meta_data_KIO__SimpleJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::SimpleJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::SimpleJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__SimpleJob.stringdata0))
        return static_cast<void*>(this);
    return KIO::Job::qt_metacast(_clname);
}

int KIO::SimpleJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KIO::Job::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
