/****************************************************************************
** Meta object code from reading C++ file 'kcompositejob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kcoreaddons/src/lib/jobs/kcompositejob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcompositejob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCompositeJob_t {
    QByteArrayData data[8];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCompositeJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCompositeJob_t qt_meta_stringdata_KCompositeJob = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KCompositeJob"
QT_MOC_LITERAL(1, 14, 10), // "slotResult"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "KJob*"
QT_MOC_LITERAL(4, 32, 3), // "job"
QT_MOC_LITERAL(5, 36, 15), // "slotInfoMessage"
QT_MOC_LITERAL(6, 52, 5), // "plain"
QT_MOC_LITERAL(7, 58, 4) // "rich"

    },
    "KCompositeJob\0slotResult\0\0KJob*\0job\0"
    "slotInfoMessage\0plain\0rich"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCompositeJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       5,    3,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,    6,    7,

       0        // eod
};

void KCompositeJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KCompositeJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 1: _t->slotInfoMessage((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
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
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KCompositeJob::staticMetaObject = { {
    QMetaObject::SuperData::link<KJob::staticMetaObject>(),
    qt_meta_stringdata_KCompositeJob.data,
    qt_meta_data_KCompositeJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCompositeJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCompositeJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCompositeJob.stringdata0))
        return static_cast<void*>(this);
    return KJob::qt_metacast(_clname);
}

int KCompositeJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KJob::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
