/****************************************************************************
** Meta object code from reading C++ file 'kdesktopfiletest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kconfig/autotests/kdesktopfiletest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdesktopfiletest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDesktopFileTest_t {
    QByteArrayData data[14];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDesktopFileTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDesktopFileTest_t qt_meta_stringdata_KDesktopFileTest = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KDesktopFileTest"
QT_MOC_LITERAL(1, 17, 12), // "initTestCase"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "testRead"
QT_MOC_LITERAL(4, 40, 17), // "testReadDirectory"
QT_MOC_LITERAL(5, 58, 22), // "testReadLocalized_data"
QT_MOC_LITERAL(6, 81, 17), // "testReadLocalized"
QT_MOC_LITERAL(7, 99, 23), // "testUnsuccessfulTryExec"
QT_MOC_LITERAL(8, 123, 21), // "testSuccessfulTryExec"
QT_MOC_LITERAL(9, 145, 15), // "testActionGroup"
QT_MOC_LITERAL(10, 161, 27), // "testIsAuthorizedDesktopFile"
QT_MOC_LITERAL(11, 189, 30), // "testTryExecWithAuthorizeAction"
QT_MOC_LITERAL(12, 220, 20), // "testLocateLocal_data"
QT_MOC_LITERAL(13, 241, 15) // "testLocateLocal"

    },
    "KDesktopFileTest\0initTestCase\0\0testRead\0"
    "testReadDirectory\0testReadLocalized_data\0"
    "testReadLocalized\0testUnsuccessfulTryExec\0"
    "testSuccessfulTryExec\0testActionGroup\0"
    "testIsAuthorizedDesktopFile\0"
    "testTryExecWithAuthorizeAction\0"
    "testLocateLocal_data\0testLocateLocal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDesktopFileTest[] = {

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

void KDesktopFileTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KDesktopFileTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testRead(); break;
        case 2: _t->testReadDirectory(); break;
        case 3: _t->testReadLocalized_data(); break;
        case 4: _t->testReadLocalized(); break;
        case 5: _t->testUnsuccessfulTryExec(); break;
        case 6: _t->testSuccessfulTryExec(); break;
        case 7: _t->testActionGroup(); break;
        case 8: _t->testIsAuthorizedDesktopFile(); break;
        case 9: _t->testTryExecWithAuthorizeAction(); break;
        case 10: _t->testLocateLocal_data(); break;
        case 11: _t->testLocateLocal(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KDesktopFileTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KDesktopFileTest.data,
    qt_meta_data_KDesktopFileTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDesktopFileTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDesktopFileTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDesktopFileTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KDesktopFileTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
