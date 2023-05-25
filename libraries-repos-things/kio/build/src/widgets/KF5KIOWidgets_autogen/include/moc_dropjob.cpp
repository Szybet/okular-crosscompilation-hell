/****************************************************************************
** Meta object code from reading C++ file 'dropjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/widgets/dropjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dropjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__DropJob_t {
    QByteArrayData data[12];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__DropJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__DropJob_t qt_meta_stringdata_KIO__DropJob = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KIO::DropJob"
QT_MOC_LITERAL(1, 13, 11), // "itemCreated"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "url"
QT_MOC_LITERAL(4, 30, 14), // "copyJobStarted"
QT_MOC_LITERAL(5, 45, 13), // "KIO::CopyJob*"
QT_MOC_LITERAL(6, 59, 3), // "job"
QT_MOC_LITERAL(7, 63, 20), // "popupMenuAboutToShow"
QT_MOC_LITERAL(8, 84, 23), // "KFileItemListProperties"
QT_MOC_LITERAL(9, 108, 9), // "itemProps"
QT_MOC_LITERAL(10, 118, 10), // "slotResult"
QT_MOC_LITERAL(11, 129, 5) // "KJob*"

    },
    "KIO::DropJob\0itemCreated\0\0url\0"
    "copyJobStarted\0KIO::CopyJob*\0job\0"
    "popupMenuAboutToShow\0KFileItemListProperties\0"
    "itemProps\0slotResult\0KJob*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__DropJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       7,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   43,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,    6,

       0        // eod
};

void KIO::DropJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DropJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemCreated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->copyJobStarted((*reinterpret_cast< KIO::CopyJob*(*)>(_a[1]))); break;
        case 2: _t->popupMenuAboutToShow((*reinterpret_cast< const KFileItemListProperties(*)>(_a[1]))); break;
        case 3: _t->slotResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            using _t = void (DropJob::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DropJob::itemCreated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DropJob::*)(KIO::CopyJob * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DropJob::copyJobStarted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DropJob::*)(const KFileItemListProperties & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DropJob::popupMenuAboutToShow)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::DropJob::staticMetaObject = { {
    QMetaObject::SuperData::link<Job::staticMetaObject>(),
    qt_meta_stringdata_KIO__DropJob.data,
    qt_meta_data_KIO__DropJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::DropJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::DropJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__DropJob.stringdata0))
        return static_cast<void*>(this);
    return Job::qt_metacast(_clname);
}

int KIO::DropJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Job::qt_metacall(_c, _id, _a);
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
void KIO::DropJob::itemCreated(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::DropJob::copyJobStarted(KIO::CopyJob * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KIO::DropJob::popupMenuAboutToShow(const KFileItemListProperties & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
