/****************************************************************************
** Meta object code from reading C++ file 'kuiserverv2jobtracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kjobwidgets/src/kuiserverv2jobtracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kuiserverv2jobtracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KUiServerV2JobTracker_t {
    QByteArrayData data[23];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KUiServerV2JobTracker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KUiServerV2JobTracker_t qt_meta_stringdata_KUiServerV2JobTracker = {
    {
QT_MOC_LITERAL(0, 0, 21), // "KUiServerV2JobTracker"
QT_MOC_LITERAL(1, 22, 8), // "finished"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "KJob*"
QT_MOC_LITERAL(4, 38, 3), // "job"
QT_MOC_LITERAL(5, 42, 9), // "suspended"
QT_MOC_LITERAL(6, 52, 7), // "resumed"
QT_MOC_LITERAL(7, 60, 11), // "description"
QT_MOC_LITERAL(8, 72, 5), // "title"
QT_MOC_LITERAL(9, 78, 22), // "QPair<QString,QString>"
QT_MOC_LITERAL(10, 101, 6), // "field1"
QT_MOC_LITERAL(11, 108, 6), // "field2"
QT_MOC_LITERAL(12, 115, 11), // "infoMessage"
QT_MOC_LITERAL(13, 127, 5), // "plain"
QT_MOC_LITERAL(14, 133, 4), // "rich"
QT_MOC_LITERAL(15, 138, 11), // "totalAmount"
QT_MOC_LITERAL(16, 150, 10), // "KJob::Unit"
QT_MOC_LITERAL(17, 161, 4), // "unit"
QT_MOC_LITERAL(18, 166, 6), // "amount"
QT_MOC_LITERAL(19, 173, 15), // "processedAmount"
QT_MOC_LITERAL(20, 189, 7), // "percent"
QT_MOC_LITERAL(21, 197, 5), // "speed"
QT_MOC_LITERAL(22, 203, 5) // "value"

    },
    "KUiServerV2JobTracker\0finished\0\0KJob*\0"
    "job\0suspended\0resumed\0description\0"
    "title\0QPair<QString,QString>\0field1\0"
    "field2\0infoMessage\0plain\0rich\0totalAmount\0"
    "KJob::Unit\0unit\0amount\0processedAmount\0"
    "percent\0speed\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KUiServerV2JobTracker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x09 /* Protected */,
       5,    1,   62,    2, 0x09 /* Protected */,
       6,    1,   65,    2, 0x09 /* Protected */,
       7,    4,   68,    2, 0x09 /* Protected */,
      12,    3,   77,    2, 0x09 /* Protected */,
      15,    3,   84,    2, 0x09 /* Protected */,
      19,    3,   91,    2, 0x09 /* Protected */,
      20,    2,   98,    2, 0x09 /* Protected */,
      21,    2,  103,    2, 0x09 /* Protected */,

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

       0        // eod
};

void KUiServerV2JobTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KUiServerV2JobTracker *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject KUiServerV2JobTracker::staticMetaObject = { {
    QMetaObject::SuperData::link<KJobTrackerInterface::staticMetaObject>(),
    qt_meta_stringdata_KUiServerV2JobTracker.data,
    qt_meta_data_KUiServerV2JobTracker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KUiServerV2JobTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KUiServerV2JobTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KUiServerV2JobTracker.stringdata0))
        return static_cast<void*>(this);
    return KJobTrackerInterface::qt_metacast(_clname);
}

int KUiServerV2JobTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KJobTrackerInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
