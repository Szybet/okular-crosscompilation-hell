/****************************************************************************
** Meta object code from reading C++ file 'mimetypejob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/core/mimetypejob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mimetypejob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__MimetypeJob_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__MimetypeJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__MimetypeJob_t qt_meta_stringdata_KIO__MimetypeJob = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KIO::MimetypeJob"
QT_MOC_LITERAL(1, 17, 12), // "slotFinished"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "KIO::MimetypeJob\0slotFinished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__MimetypeJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void KIO::MimetypeJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MimetypeJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KIO::MimetypeJob::staticMetaObject = { {
    QMetaObject::SuperData::link<TransferJob::staticMetaObject>(),
    qt_meta_stringdata_KIO__MimetypeJob.data,
    qt_meta_data_KIO__MimetypeJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::MimetypeJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::MimetypeJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__MimetypeJob.stringdata0))
        return static_cast<void*>(this);
    return TransferJob::qt_metacast(_clname);
}

int KIO::MimetypeJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TransferJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
