/****************************************************************************
** Meta object code from reading C++ file 'kcompressiondevicetest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/karchive/autotests/kcompressiondevicetest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcompressiondevicetest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCompressionDeviceTest_t {
    QByteArrayData data[11];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCompressionDeviceTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCompressionDeviceTest_t qt_meta_stringdata_KCompressionDeviceTest = {
    {
QT_MOC_LITERAL(0, 0, 22), // "KCompressionDeviceTest"
QT_MOC_LITERAL(1, 23, 16), // "regularKTarUsage"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 22), // "testGZipBufferedDevice"
QT_MOC_LITERAL(4, 64, 23), // "testBZip2BufferedDevice"
QT_MOC_LITERAL(5, 88, 20), // "testXzBufferedDevice"
QT_MOC_LITERAL(6, 109, 22), // "testZstdBufferedDevice"
QT_MOC_LITERAL(7, 132, 20), // "testWriteErrorOnOpen"
QT_MOC_LITERAL(8, 153, 21), // "testWriteErrorOnClose"
QT_MOC_LITERAL(9, 175, 35), // "testSeekReadUncompressedBuffe..."
QT_MOC_LITERAL(10, 211, 30) // "testSeekReadUncompressedBuffer"

    },
    "KCompressionDeviceTest\0regularKTarUsage\0"
    "\0testGZipBufferedDevice\0testBZip2BufferedDevice\0"
    "testXzBufferedDevice\0testZstdBufferedDevice\0"
    "testWriteErrorOnOpen\0testWriteErrorOnClose\0"
    "testSeekReadUncompressedBuffer_data\0"
    "testSeekReadUncompressedBuffer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCompressionDeviceTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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

       0        // eod
};

void KCompressionDeviceTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KCompressionDeviceTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->regularKTarUsage(); break;
        case 1: _t->testGZipBufferedDevice(); break;
        case 2: _t->testBZip2BufferedDevice(); break;
        case 3: _t->testXzBufferedDevice(); break;
        case 4: _t->testZstdBufferedDevice(); break;
        case 5: _t->testWriteErrorOnOpen(); break;
        case 6: _t->testWriteErrorOnClose(); break;
        case 7: _t->testSeekReadUncompressedBuffer_data(); break;
        case 8: _t->testSeekReadUncompressedBuffer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KCompressionDeviceTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KCompressionDeviceTest.data,
    qt_meta_data_KCompressionDeviceTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCompressionDeviceTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCompressionDeviceTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCompressionDeviceTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KCompressionDeviceTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
