/****************************************************************************
** Meta object code from reading C++ file 'TestHelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kauth/autotests/TestHelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestHelper_t {
    QByteArrayData data[8];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestHelper_t qt_meta_stringdata_TestHelper = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TestHelper"
QT_MOC_LITERAL(1, 11, 10), // "echoaction"
QT_MOC_LITERAL(2, 22, 11), // "ActionReply"
QT_MOC_LITERAL(3, 34, 0), // ""
QT_MOC_LITERAL(4, 35, 4), // "args"
QT_MOC_LITERAL(5, 40, 14), // "standardaction"
QT_MOC_LITERAL(6, 55, 10), // "longaction"
QT_MOC_LITERAL(7, 66, 13) // "failingaction"

    },
    "TestHelper\0echoaction\0ActionReply\0\0"
    "args\0standardaction\0longaction\0"
    "failingaction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    3, 0x0a /* Public */,
       5,    1,   37,    3, 0x0a /* Public */,
       6,    1,   40,    3, 0x0a /* Public */,
       7,    1,   43,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QVariantMap,    4,
    0x80000000 | 2, QMetaType::QVariantMap,    4,
    0x80000000 | 2, QMetaType::QVariantMap,    4,
    0x80000000 | 2, QMetaType::QVariantMap,    4,

       0        // eod
};

void TestHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { ActionReply _r = _t->echoaction((*reinterpret_cast< QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ActionReply*>(_a[0]) = std::move(_r); }  break;
        case 1: { ActionReply _r = _t->standardaction((*reinterpret_cast< QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ActionReply*>(_a[0]) = std::move(_r); }  break;
        case 2: { ActionReply _r = _t->longaction((*reinterpret_cast< QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ActionReply*>(_a[0]) = std::move(_r); }  break;
        case 3: { ActionReply _r = _t->failingaction((*reinterpret_cast< QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ActionReply*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TestHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TestHelper.data,
    qt_meta_data_TestHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
