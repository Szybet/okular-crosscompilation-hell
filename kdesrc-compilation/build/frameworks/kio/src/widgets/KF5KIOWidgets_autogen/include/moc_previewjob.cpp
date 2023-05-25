/****************************************************************************
** Meta object code from reading C++ file 'previewjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/widgets/previewjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__PreviewJob_t {
    QByteArrayData data[10];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__PreviewJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__PreviewJob_t qt_meta_stringdata_KIO__PreviewJob = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KIO::PreviewJob"
QT_MOC_LITERAL(1, 16, 10), // "gotPreview"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "KFileItem"
QT_MOC_LITERAL(4, 38, 4), // "item"
QT_MOC_LITERAL(5, 43, 7), // "preview"
QT_MOC_LITERAL(6, 51, 6), // "failed"
QT_MOC_LITERAL(7, 58, 10), // "slotResult"
QT_MOC_LITERAL(8, 69, 5), // "KJob*"
QT_MOC_LITERAL(9, 75, 3) // "job"

    },
    "KIO::PreviewJob\0gotPreview\0\0KFileItem\0"
    "item\0preview\0failed\0slotResult\0KJob*\0"
    "job"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__PreviewJob[] = {

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
       6,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   37,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPixmap,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void KIO::PreviewJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PreviewJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotPreview((*reinterpret_cast< const KFileItem(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 1: _t->failed((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 2: _t->slotResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 2:
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
            using _t = void (PreviewJob::*)(const KFileItem & , const QPixmap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreviewJob::gotPreview)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PreviewJob::*)(const KFileItem & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreviewJob::failed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::PreviewJob::staticMetaObject = { {
    QMetaObject::SuperData::link<KIO::Job::staticMetaObject>(),
    qt_meta_stringdata_KIO__PreviewJob.data,
    qt_meta_data_KIO__PreviewJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::PreviewJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::PreviewJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__PreviewJob.stringdata0))
        return static_cast<void*>(this);
    return KIO::Job::qt_metacast(_clname);
}

int KIO::PreviewJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KIO::Job::qt_metacall(_c, _id, _a);
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
void KIO::PreviewJob::gotPreview(const KFileItem & _t1, const QPixmap & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::PreviewJob::failed(const KFileItem & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
