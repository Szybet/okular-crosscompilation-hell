/****************************************************************************
** Meta object code from reading C++ file 'kentrymaptest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kconfig/autotests/kentrymaptest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kentrymaptest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KEntryMapTest_t {
    QByteArrayData data[10];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KEntryMapTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KEntryMapTest_t qt_meta_stringdata_KEntryMapTest = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KEntryMapTest"
QT_MOC_LITERAL(1, 14, 12), // "testKeyOrder"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "testSimple"
QT_MOC_LITERAL(4, 39, 9), // "testDirty"
QT_MOC_LITERAL(5, 49, 11), // "testDefault"
QT_MOC_LITERAL(6, 61, 10), // "testDelete"
QT_MOC_LITERAL(7, 72, 10), // "testGlobal"
QT_MOC_LITERAL(8, 83, 13), // "testImmutable"
QT_MOC_LITERAL(9, 97, 10) // "testLocale"

    },
    "KEntryMapTest\0testKeyOrder\0\0testSimple\0"
    "testDirty\0testDefault\0testDelete\0"
    "testGlobal\0testImmutable\0testLocale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KEntryMapTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void KEntryMapTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KEntryMapTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testKeyOrder(); break;
        case 1: _t->testSimple(); break;
        case 2: _t->testDirty(); break;
        case 3: _t->testDefault(); break;
        case 4: _t->testDelete(); break;
        case 5: _t->testGlobal(); break;
        case 6: _t->testImmutable(); break;
        case 7: _t->testLocale(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KEntryMapTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KEntryMapTest.data,
    qt_meta_data_KEntryMapTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KEntryMapTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KEntryMapTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KEntryMapTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KEntryMapTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
