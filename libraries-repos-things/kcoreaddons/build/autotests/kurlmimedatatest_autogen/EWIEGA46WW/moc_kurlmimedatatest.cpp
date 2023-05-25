/****************************************************************************
** Meta object code from reading C++ file 'kurlmimedatatest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../autotests/kurlmimedatatest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kurlmimedatatest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KUrlMimeDataTest_t {
    QByteArrayData data[7];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KUrlMimeDataTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KUrlMimeDataTest_t qt_meta_stringdata_KUrlMimeDataTest = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KUrlMimeDataTest"
QT_MOC_LITERAL(1, 17, 11), // "testURLList"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "testOneURL"
QT_MOC_LITERAL(4, 41, 12), // "testFromQUrl"
QT_MOC_LITERAL(5, 54, 25), // "testMostLocalUrlList_data"
QT_MOC_LITERAL(6, 80, 20) // "testMostLocalUrlList"

    },
    "KUrlMimeDataTest\0testURLList\0\0testOneURL\0"
    "testFromQUrl\0testMostLocalUrlList_data\0"
    "testMostLocalUrlList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KUrlMimeDataTest[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KUrlMimeDataTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KUrlMimeDataTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testURLList(); break;
        case 1: _t->testOneURL(); break;
        case 2: _t->testFromQUrl(); break;
        case 3: _t->testMostLocalUrlList_data(); break;
        case 4: _t->testMostLocalUrlList(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KUrlMimeDataTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KUrlMimeDataTest.data,
    qt_meta_data_KUrlMimeDataTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KUrlMimeDataTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KUrlMimeDataTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KUrlMimeDataTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KUrlMimeDataTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
