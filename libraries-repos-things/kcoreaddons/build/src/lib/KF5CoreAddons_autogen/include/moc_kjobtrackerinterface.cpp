/****************************************************************************
** Meta object code from reading C++ file 'kjobtrackerinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/lib/jobs/kjobtrackerinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kjobtrackerinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KJobTrackerInterface_t {
    QByteArrayData data[26];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KJobTrackerInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KJobTrackerInterface_t qt_meta_stringdata_KJobTrackerInterface = {
    {
QT_MOC_LITERAL(0, 0, 20), // "KJobTrackerInterface"
QT_MOC_LITERAL(1, 21, 11), // "registerJob"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "KJob*"
QT_MOC_LITERAL(4, 40, 3), // "job"
QT_MOC_LITERAL(5, 44, 13), // "unregisterJob"
QT_MOC_LITERAL(6, 58, 8), // "finished"
QT_MOC_LITERAL(7, 67, 9), // "suspended"
QT_MOC_LITERAL(8, 77, 7), // "resumed"
QT_MOC_LITERAL(9, 85, 11), // "description"
QT_MOC_LITERAL(10, 97, 5), // "title"
QT_MOC_LITERAL(11, 103, 22), // "QPair<QString,QString>"
QT_MOC_LITERAL(12, 126, 6), // "field1"
QT_MOC_LITERAL(13, 133, 6), // "field2"
QT_MOC_LITERAL(14, 140, 11), // "infoMessage"
QT_MOC_LITERAL(15, 152, 5), // "plain"
QT_MOC_LITERAL(16, 158, 4), // "rich"
QT_MOC_LITERAL(17, 163, 7), // "warning"
QT_MOC_LITERAL(18, 171, 11), // "totalAmount"
QT_MOC_LITERAL(19, 183, 10), // "KJob::Unit"
QT_MOC_LITERAL(20, 194, 4), // "unit"
QT_MOC_LITERAL(21, 199, 6), // "amount"
QT_MOC_LITERAL(22, 206, 15), // "processedAmount"
QT_MOC_LITERAL(23, 222, 7), // "percent"
QT_MOC_LITERAL(24, 230, 5), // "speed"
QT_MOC_LITERAL(25, 236, 5) // "value"

    },
    "KJobTrackerInterface\0registerJob\0\0"
    "KJob*\0job\0unregisterJob\0finished\0"
    "suspended\0resumed\0description\0title\0"
    "QPair<QString,QString>\0field1\0field2\0"
    "infoMessage\0plain\0rich\0warning\0"
    "totalAmount\0KJob::Unit\0unit\0amount\0"
    "processedAmount\0percent\0speed\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KJobTrackerInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x0a /* Public */,
       6,    1,   80,    2, 0x09 /* Protected */,
       7,    1,   83,    2, 0x09 /* Protected */,
       8,    1,   86,    2, 0x09 /* Protected */,
       9,    4,   89,    2, 0x09 /* Protected */,
      14,    3,   98,    2, 0x09 /* Protected */,
      17,    3,  105,    2, 0x09 /* Protected */,
      18,    3,  112,    2, 0x09 /* Protected */,
      22,    3,  119,    2, 0x09 /* Protected */,
      23,    2,  126,    2, 0x09 /* Protected */,
      24,    2,  131,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 11, 0x80000000 | 11,    4,   10,   12,   13,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,   15,   16,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,   15,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 19, QMetaType::ULongLong,    4,   20,   21,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 19, QMetaType::ULongLong,    4,   20,   21,
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULong,    4,   23,
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULong,    4,   25,

       0        // eod
};

void KJobTrackerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KJobTrackerInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->registerJob((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 1: _t->unregisterJob((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 2: _t->finished((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 3: _t->suspended((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 4: _t->resumed((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 5: _t->description((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QPair<QString,QString>(*)>(_a[3])),(*reinterpret_cast< const QPair<QString,QString>(*)>(_a[4]))); break;
        case 6: _t->infoMessage((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->warning((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: _t->totalAmount((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< KJob::Unit(*)>(_a[2])),(*reinterpret_cast< qulonglong(*)>(_a[3]))); break;
        case 9: _t->processedAmount((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< KJob::Unit(*)>(_a[2])),(*reinterpret_cast< qulonglong(*)>(_a[3]))); break;
        case 10: _t->percent((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 11: _t->speed((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
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
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
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
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob::Unit >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob::Unit >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KJobTrackerInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KJobTrackerInterface.data,
    qt_meta_data_KJobTrackerInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KJobTrackerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KJobTrackerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KJobTrackerInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KJobTrackerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
