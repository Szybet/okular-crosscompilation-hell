/****************************************************************************
** Meta object code from reading C++ file 'kuiserverjobtracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kjobwidgets/src/kuiserverjobtracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kuiserverjobtracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KUiServerJobTracker_t {
    QByteArrayData data[24];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KUiServerJobTracker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KUiServerJobTracker_t qt_meta_stringdata_KUiServerJobTracker = {
    {
QT_MOC_LITERAL(0, 0, 19), // "KUiServerJobTracker"
QT_MOC_LITERAL(1, 20, 8), // "finished"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "KJob*"
QT_MOC_LITERAL(4, 36, 3), // "job"
QT_MOC_LITERAL(5, 40, 9), // "suspended"
QT_MOC_LITERAL(6, 50, 7), // "resumed"
QT_MOC_LITERAL(7, 58, 11), // "description"
QT_MOC_LITERAL(8, 70, 5), // "title"
QT_MOC_LITERAL(9, 76, 22), // "QPair<QString,QString>"
QT_MOC_LITERAL(10, 99, 6), // "field1"
QT_MOC_LITERAL(11, 106, 6), // "field2"
QT_MOC_LITERAL(12, 113, 11), // "infoMessage"
QT_MOC_LITERAL(13, 125, 5), // "plain"
QT_MOC_LITERAL(14, 131, 4), // "rich"
QT_MOC_LITERAL(15, 136, 11), // "totalAmount"
QT_MOC_LITERAL(16, 148, 10), // "KJob::Unit"
QT_MOC_LITERAL(17, 159, 4), // "unit"
QT_MOC_LITERAL(18, 164, 6), // "amount"
QT_MOC_LITERAL(19, 171, 15), // "processedAmount"
QT_MOC_LITERAL(20, 187, 7), // "percent"
QT_MOC_LITERAL(21, 195, 5), // "speed"
QT_MOC_LITERAL(22, 201, 5), // "value"
QT_MOC_LITERAL(23, 207, 10) // "_k_killJob"

    },
    "KUiServerJobTracker\0finished\0\0KJob*\0"
    "job\0suspended\0resumed\0description\0"
    "title\0QPair<QString,QString>\0field1\0"
    "field2\0infoMessage\0plain\0rich\0totalAmount\0"
    "KJob::Unit\0unit\0amount\0processedAmount\0"
    "percent\0speed\0value\0_k_killJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KUiServerJobTracker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x09 /* Protected */,
       5,    1,   67,    2, 0x09 /* Protected */,
       6,    1,   70,    2, 0x09 /* Protected */,
       7,    4,   73,    2, 0x09 /* Protected */,
      12,    3,   82,    2, 0x09 /* Protected */,
      15,    3,   89,    2, 0x09 /* Protected */,
      19,    3,   96,    2, 0x09 /* Protected */,
      20,    2,  103,    2, 0x09 /* Protected */,
      21,    2,  108,    2, 0x09 /* Protected */,
      23,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 9, 0x80000000 | 9,    4,    8,   10,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,   13,   14,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 16, QMetaType::ULongLong,    4,   17,   18,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 16, QMetaType::ULongLong,    4,   17,   18,
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULong,    4,   20,
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULong,    4,   22,
    QMetaType::Void,

       0        // eod
};

void KUiServerJobTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KUiServerJobTracker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 1: _t->suspended((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 2: _t->resumed((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 3: _t->description((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QPair<QString,QString>(*)>(_a[3])),(*reinterpret_cast< const QPair<QString,QString>(*)>(_a[4]))); break;
        case 4: _t->infoMessage((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->totalAmount((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< KJob::Unit(*)>(_a[2])),(*reinterpret_cast< qulonglong(*)>(_a[3]))); break;
        case 6: _t->processedAmount((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< KJob::Unit(*)>(_a[2])),(*reinterpret_cast< qulonglong(*)>(_a[3]))); break;
        case 7: _t->percent((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 8: _t->speed((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 9: _t->d->_k_killJob(); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob::Unit >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob::Unit >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KUiServerJobTracker::staticMetaObject = { {
    QMetaObject::SuperData::link<KJobTrackerInterface::staticMetaObject>(),
    qt_meta_stringdata_KUiServerJobTracker.data,
    qt_meta_data_KUiServerJobTracker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KUiServerJobTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KUiServerJobTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KUiServerJobTracker.stringdata0))
        return static_cast<void*>(this);
    return KJobTrackerInterface::qt_metacast(_clname);
}

int KUiServerJobTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KJobTrackerInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
