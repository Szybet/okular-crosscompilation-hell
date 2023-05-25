/****************************************************************************
** Meta object code from reading C++ file 'ksqueezedtextlabelautotest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/autotests/ksqueezedtextlabelautotest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ksqueezedtextlabelautotest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KSqueezedTextLabelAutotest_t {
    QByteArrayData data[12];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KSqueezedTextLabelAutotest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KSqueezedTextLabelAutotest_t qt_meta_stringdata_KSqueezedTextLabelAutotest = {
    {
QT_MOC_LITERAL(0, 0, 26), // "KSqueezedTextLabelAutotest"
QT_MOC_LITERAL(1, 27, 13), // "testEmptyText"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 24), // "testElisionOnResize_data"
QT_MOC_LITERAL(4, 67, 19), // "testElisionOnResize"
QT_MOC_LITERAL(5, 87, 23), // "testElisionOnTextUpdate"
QT_MOC_LITERAL(6, 111, 18), // "testElideMode_data"
QT_MOC_LITERAL(7, 130, 13), // "testElideMode"
QT_MOC_LITERAL(8, 144, 13), // "testSizeHints"
QT_MOC_LITERAL(9, 158, 12), // "testClearing"
QT_MOC_LITERAL(10, 171, 15), // "testChrome_data"
QT_MOC_LITERAL(11, 187, 10) // "testChrome"

    },
    "KSqueezedTextLabelAutotest\0testEmptyText\0"
    "\0testElisionOnResize_data\0testElisionOnResize\0"
    "testElisionOnTextUpdate\0testElideMode_data\0"
    "testElideMode\0testSizeHints\0testClearing\0"
    "testChrome_data\0testChrome"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KSqueezedTextLabelAutotest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

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

       0        // eod
};

void KSqueezedTextLabelAutotest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KSqueezedTextLabelAutotest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testEmptyText(); break;
        case 1: _t->testElisionOnResize_data(); break;
        case 2: _t->testElisionOnResize(); break;
        case 3: _t->testElisionOnTextUpdate(); break;
        case 4: _t->testElideMode_data(); break;
        case 5: _t->testElideMode(); break;
        case 6: _t->testSizeHints(); break;
        case 7: _t->testClearing(); break;
        case 8: _t->testChrome_data(); break;
        case 9: _t->testChrome(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KSqueezedTextLabelAutotest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KSqueezedTextLabelAutotest.data,
    qt_meta_data_KSqueezedTextLabelAutotest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KSqueezedTextLabelAutotest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KSqueezedTextLabelAutotest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KSqueezedTextLabelAutotest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KSqueezedTextLabelAutotest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
