/****************************************************************************
** Meta object code from reading C++ file 'kdatetimeedittest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/autotests/kdatetimeedittest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdatetimeedittest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDateTimeEditTest_t {
    QByteArrayData data[14];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDateTimeEditTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDateTimeEditTest_t qt_meta_stringdata_KDateTimeEditTest = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KDateTimeEditTest"
QT_MOC_LITERAL(1, 18, 12), // "testDefaults"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "testValidNull"
QT_MOC_LITERAL(4, 46, 17), // "testDateTimeRange"
QT_MOC_LITERAL(5, 64, 11), // "testOptions"
QT_MOC_LITERAL(6, 76, 21), // "testDateDisplayFormat"
QT_MOC_LITERAL(7, 98, 12), // "testDateList"
QT_MOC_LITERAL(8, 111, 20), // "testTimeListInterval"
QT_MOC_LITERAL(9, 132, 12), // "testTimeList"
QT_MOC_LITERAL(10, 145, 21), // "testTimeDisplayFormat"
QT_MOC_LITERAL(11, 167, 18), // "testCalendarSystem"
QT_MOC_LITERAL(12, 186, 12), // "testTimeSpec"
QT_MOC_LITERAL(13, 199, 12) // "testDateMenu"

    },
    "KDateTimeEditTest\0testDefaults\0\0"
    "testValidNull\0testDateTimeRange\0"
    "testOptions\0testDateDisplayFormat\0"
    "testDateList\0testTimeListInterval\0"
    "testTimeList\0testTimeDisplayFormat\0"
    "testCalendarSystem\0testTimeSpec\0"
    "testDateMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDateTimeEditTest[] = {

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
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KDateTimeEditTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KDateTimeEditTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testDefaults(); break;
        case 1: _t->testValidNull(); break;
        case 2: _t->testDateTimeRange(); break;
        case 3: _t->testOptions(); break;
        case 4: _t->testDateDisplayFormat(); break;
        case 5: _t->testDateList(); break;
        case 6: _t->testTimeListInterval(); break;
        case 7: _t->testTimeList(); break;
        case 8: _t->testTimeDisplayFormat(); break;
        case 9: _t->testCalendarSystem(); break;
        case 10: _t->testTimeSpec(); break;
        case 11: _t->testDateMenu(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KDateTimeEditTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KDateTimeEditTest.data,
    qt_meta_data_KDateTimeEditTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDateTimeEditTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDateTimeEditTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDateTimeEditTest.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KDateTimeEditTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
