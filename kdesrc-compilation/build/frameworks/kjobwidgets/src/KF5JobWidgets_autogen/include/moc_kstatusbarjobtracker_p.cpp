/****************************************************************************
** Meta object code from reading C++ file 'kstatusbarjobtracker_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kjobwidgets/src/kstatusbarjobtracker_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kstatusbarjobtracker_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KStatusBarJobTrackerPrivate__ProgressWidget_t {
    QByteArrayData data[16];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KStatusBarJobTrackerPrivate__ProgressWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KStatusBarJobTrackerPrivate__ProgressWidget_t qt_meta_stringdata_KStatusBarJobTrackerPrivate__ProgressWidget = {
    {
QT_MOC_LITERAL(0, 0, 43), // "KStatusBarJobTrackerPrivate::..."
QT_MOC_LITERAL(1, 44, 11), // "description"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 5), // "title"
QT_MOC_LITERAL(4, 63, 22), // "QPair<QString,QString>"
QT_MOC_LITERAL(5, 86, 6), // "field1"
QT_MOC_LITERAL(6, 93, 6), // "field2"
QT_MOC_LITERAL(7, 100, 11), // "totalAmount"
QT_MOC_LITERAL(8, 112, 10), // "KJob::Unit"
QT_MOC_LITERAL(9, 123, 4), // "unit"
QT_MOC_LITERAL(10, 128, 6), // "amount"
QT_MOC_LITERAL(11, 135, 7), // "percent"
QT_MOC_LITERAL(12, 143, 5), // "speed"
QT_MOC_LITERAL(13, 149, 5), // "value"
QT_MOC_LITERAL(14, 155, 9), // "slotClean"
QT_MOC_LITERAL(15, 165, 7) // "killJob"

    },
    "KStatusBarJobTrackerPrivate::ProgressWidget\0"
    "description\0\0title\0QPair<QString,QString>\0"
    "field1\0field2\0totalAmount\0KJob::Unit\0"
    "unit\0amount\0percent\0speed\0value\0"
    "slotClean\0killJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KStatusBarJobTrackerPrivate__ProgressWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x0a /* Public */,
       7,    2,   51,    2, 0x0a /* Public */,
      11,    1,   56,    2, 0x0a /* Public */,
      12,    1,   59,    2, 0x0a /* Public */,
      14,    0,   62,    2, 0x0a /* Public */,
      15,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, 0x80000000 | 4,    3,    5,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::ULongLong,    9,   10,
    QMetaType::Void, QMetaType::ULong,   11,
    QMetaType::Void, QMetaType::ULong,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KStatusBarJobTrackerPrivate::ProgressWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProgressWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->description((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QPair<QString,QString>(*)>(_a[2])),(*reinterpret_cast< const QPair<QString,QString>(*)>(_a[3]))); break;
        case 1: _t->totalAmount((*reinterpret_cast< KJob::Unit(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 2: _t->percent((*reinterpret_cast< ulong(*)>(_a[1]))); break;
        case 3: _t->speed((*reinterpret_cast< ulong(*)>(_a[1]))); break;
        case 4: _t->slotClean(); break;
        case 5: _t->killJob(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob::Unit >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KStatusBarJobTrackerPrivate::ProgressWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KStatusBarJobTrackerPrivate__ProgressWidget.data,
    qt_meta_data_KStatusBarJobTrackerPrivate__ProgressWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KStatusBarJobTrackerPrivate::ProgressWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KStatusBarJobTrackerPrivate::ProgressWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KStatusBarJobTrackerPrivate__ProgressWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KStatusBarJobTrackerPrivate::ProgressWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
