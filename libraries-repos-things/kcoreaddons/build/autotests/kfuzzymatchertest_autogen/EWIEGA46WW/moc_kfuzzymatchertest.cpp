/****************************************************************************
** Meta object code from reading C++ file 'kfuzzymatchertest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../autotests/kfuzzymatchertest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kfuzzymatchertest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KFuzzyMatcherTest_t {
    QByteArrayData data[8];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFuzzyMatcherTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFuzzyMatcherTest_t qt_meta_stringdata_KFuzzyMatcherTest = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KFuzzyMatcherTest"
QT_MOC_LITERAL(1, 18, 20), // "testMatchSimple_data"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "testMatchSimple"
QT_MOC_LITERAL(4, 56, 14), // "testMatch_data"
QT_MOC_LITERAL(5, 71, 9), // "testMatch"
QT_MOC_LITERAL(6, 81, 22), // "testMatchedRanges_data"
QT_MOC_LITERAL(7, 104, 17) // "testMatchedRanges"

    },
    "KFuzzyMatcherTest\0testMatchSimple_data\0"
    "\0testMatchSimple\0testMatch_data\0"
    "testMatch\0testMatchedRanges_data\0"
    "testMatchedRanges"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFuzzyMatcherTest[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KFuzzyMatcherTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KFuzzyMatcherTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testMatchSimple_data(); break;
        case 1: _t->testMatchSimple(); break;
        case 2: _t->testMatch_data(); break;
        case 3: _t->testMatch(); break;
        case 4: _t->testMatchedRanges_data(); break;
        case 5: _t->testMatchedRanges(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KFuzzyMatcherTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KFuzzyMatcherTest.data,
    qt_meta_data_KFuzzyMatcherTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KFuzzyMatcherTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KFuzzyMatcherTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KFuzzyMatcherTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KFuzzyMatcherTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
