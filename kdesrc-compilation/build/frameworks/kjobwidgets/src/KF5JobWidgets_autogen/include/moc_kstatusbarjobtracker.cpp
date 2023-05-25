/****************************************************************************
** Meta object code from reading C++ file 'kstatusbarjobtracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kjobwidgets/src/kstatusbarjobtracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kstatusbarjobtracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KStatusBarJobTracker_t {
    QByteArrayData data[17];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KStatusBarJobTracker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KStatusBarJobTracker_t qt_meta_stringdata_KStatusBarJobTracker = {
    {
QT_MOC_LITERAL(0, 0, 20), // "KStatusBarJobTracker"
QT_MOC_LITERAL(1, 21, 11), // "description"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "KJob*"
QT_MOC_LITERAL(4, 40, 3), // "job"
QT_MOC_LITERAL(5, 44, 5), // "title"
QT_MOC_LITERAL(6, 50, 22), // "QPair<QString,QString>"
QT_MOC_LITERAL(7, 73, 6), // "field1"
QT_MOC_LITERAL(8, 80, 6), // "field2"
QT_MOC_LITERAL(9, 87, 11), // "totalAmount"
QT_MOC_LITERAL(10, 99, 10), // "KJob::Unit"
QT_MOC_LITERAL(11, 110, 4), // "unit"
QT_MOC_LITERAL(12, 115, 6), // "amount"
QT_MOC_LITERAL(13, 122, 7), // "percent"
QT_MOC_LITERAL(14, 130, 5), // "speed"
QT_MOC_LITERAL(15, 136, 5), // "value"
QT_MOC_LITERAL(16, 142, 9) // "slotClean"

    },
    "KStatusBarJobTracker\0description\0\0"
    "KJob*\0job\0title\0QPair<QString,QString>\0"
    "field1\0field2\0totalAmount\0KJob::Unit\0"
    "unit\0amount\0percent\0speed\0value\0"
    "slotClean"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KStatusBarJobTracker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   39,    2, 0x0a /* Public */,
       9,    3,   48,    2, 0x0a /* Public */,
      13,    2,   55,    2, 0x0a /* Public */,
      14,    2,   60,    2, 0x0a /* Public */,
      16,    1,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 6, 0x80000000 | 6,    4,    5,    7,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 10, QMetaType::ULongLong,    4,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULong,    4,   13,
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULong,    4,   15,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void KStatusBarJobTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KStatusBarJobTracker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->description((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QPair<QString,QString>(*)>(_a[3])),(*reinterpret_cast< const QPair<QString,QString>(*)>(_a[4]))); break;
        case 1: _t->totalAmount((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< KJob::Unit(*)>(_a[2])),(*reinterpret_cast< qulonglong(*)>(_a[3]))); break;
        case 2: _t->percent((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 3: _t->speed((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 4: _t->slotClean((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
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
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob::Unit >(); break;
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
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KStatusBarJobTracker::staticMetaObject = { {
    QMetaObject::SuperData::link<KAbstractWidgetJobTracker::staticMetaObject>(),
    qt_meta_stringdata_KStatusBarJobTracker.data,
    qt_meta_data_KStatusBarJobTracker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KStatusBarJobTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KStatusBarJobTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KStatusBarJobTracker.stringdata0))
        return static_cast<void*>(this);
    return KAbstractWidgetJobTracker::qt_metacast(_clname);
}

int KStatusBarJobTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KAbstractWidgetJobTracker::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
