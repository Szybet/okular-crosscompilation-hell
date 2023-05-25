/****************************************************************************
** Meta object code from reading C++ file 'kcharsetstest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kcodecs/autotests/kcharsetstest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcharsetstest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCharsetsTest_t {
    QByteArrayData data[13];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCharsetsTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCharsetsTest_t qt_meta_stringdata_KCharsetsTest = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KCharsetsTest"
QT_MOC_LITERAL(1, 14, 13), // "testSingleton"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "testCodecForName_data"
QT_MOC_LITERAL(4, 51, 16), // "testCodecForName"
QT_MOC_LITERAL(5, 68, 14), // "testFromEntity"
QT_MOC_LITERAL(6, 83, 12), // "testToEntity"
QT_MOC_LITERAL(7, 96, 19), // "testResolveEntities"
QT_MOC_LITERAL(8, 116, 17), // "testEncodingNames"
QT_MOC_LITERAL(9, 134, 24), // "testUsAsciiEncoding_data"
QT_MOC_LITERAL(10, 159, 19), // "testUsAsciiEncoding"
QT_MOC_LITERAL(11, 179, 24), // "testUsAsciiDecoding_data"
QT_MOC_LITERAL(12, 204, 19) // "testUsAsciiDecoding"

    },
    "KCharsetsTest\0testSingleton\0\0"
    "testCodecForName_data\0testCodecForName\0"
    "testFromEntity\0testToEntity\0"
    "testResolveEntities\0testEncodingNames\0"
    "testUsAsciiEncoding_data\0testUsAsciiEncoding\0"
    "testUsAsciiDecoding_data\0testUsAsciiDecoding"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCharsetsTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

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

       0        // eod
};

void KCharsetsTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KCharsetsTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testSingleton(); break;
        case 1: _t->testCodecForName_data(); break;
        case 2: _t->testCodecForName(); break;
        case 3: _t->testFromEntity(); break;
        case 4: _t->testToEntity(); break;
        case 5: _t->testResolveEntities(); break;
        case 6: _t->testEncodingNames(); break;
        case 7: _t->testUsAsciiEncoding_data(); break;
        case 8: _t->testUsAsciiEncoding(); break;
        case 9: _t->testUsAsciiDecoding_data(); break;
        case 10: _t->testUsAsciiDecoding(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KCharsetsTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KCharsetsTest.data,
    qt_meta_data_KCharsetsTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCharsetsTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCharsetsTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCharsetsTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KCharsetsTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
