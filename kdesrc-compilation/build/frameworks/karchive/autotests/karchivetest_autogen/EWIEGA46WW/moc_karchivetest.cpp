/****************************************************************************
** Meta object code from reading C++ file 'karchivetest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/karchive/autotests/karchivetest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'karchivetest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KArchiveTest_t {
    QByteArrayData data[62];
    char stringdata0[1191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KArchiveTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KArchiveTest_t qt_meta_stringdata_KArchiveTest = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KArchiveTest"
QT_MOC_LITERAL(1, 13, 12), // "initTestCase"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 17), // "testEmptyFilename"
QT_MOC_LITERAL(4, 45, 14), // "testNullDevice"
QT_MOC_LITERAL(5, 60, 19), // "testNonExistentFile"
QT_MOC_LITERAL(6, 80, 18), // "testCreateTar_data"
QT_MOC_LITERAL(7, 99, 13), // "testCreateTar"
QT_MOC_LITERAL(8, 113, 21), // "testCreateTarXXX_data"
QT_MOC_LITERAL(9, 135, 16), // "testCreateTarXXX"
QT_MOC_LITERAL(10, 152, 16), // "testReadTar_data"
QT_MOC_LITERAL(11, 169, 11), // "testReadTar"
QT_MOC_LITERAL(12, 181, 19), // "testUncompress_data"
QT_MOC_LITERAL(13, 201, 14), // "testUncompress"
QT_MOC_LITERAL(14, 216, 20), // "testTarFileData_data"
QT_MOC_LITERAL(15, 237, 15), // "testTarFileData"
QT_MOC_LITERAL(16, 253, 18), // "testTarCopyTo_data"
QT_MOC_LITERAL(17, 272, 13), // "testTarCopyTo"
QT_MOC_LITERAL(18, 286, 21), // "testTarReadWrite_data"
QT_MOC_LITERAL(19, 308, 16), // "testTarReadWrite"
QT_MOC_LITERAL(20, 325, 21), // "testTarMaxLength_data"
QT_MOC_LITERAL(21, 347, 16), // "testTarMaxLength"
QT_MOC_LITERAL(22, 364, 19), // "testTarGlobalHeader"
QT_MOC_LITERAL(23, 384, 13), // "testTarPrefix"
QT_MOC_LITERAL(24, 398, 25), // "testTarDirectoryForgotten"
QT_MOC_LITERAL(25, 424, 26), // "testTarEmptyFileMissingDir"
QT_MOC_LITERAL(26, 451, 14), // "testTarRootDir"
QT_MOC_LITERAL(27, 466, 21), // "testTarDirectoryTwice"
QT_MOC_LITERAL(28, 488, 39), // "testTarIgnoreRelativePathOuts..."
QT_MOC_LITERAL(29, 528, 24), // "testTarLongNonASCIINames"
QT_MOC_LITERAL(30, 553, 25), // "testTarShortNonASCIINames"
QT_MOC_LITERAL(31, 579, 13), // "testCreateZip"
QT_MOC_LITERAL(32, 593, 18), // "testCreateZipError"
QT_MOC_LITERAL(33, 612, 16), // "testReadZipError"
QT_MOC_LITERAL(34, 629, 11), // "testReadZip"
QT_MOC_LITERAL(35, 641, 15), // "testZipFileData"
QT_MOC_LITERAL(36, 657, 13), // "testZipCopyTo"
QT_MOC_LITERAL(37, 671, 16), // "testZipMaxLength"
QT_MOC_LITERAL(38, 688, 28), // "testZipWithNonLatinFileNames"
QT_MOC_LITERAL(39, 717, 30), // "testZipWithOverwrittenFileName"
QT_MOC_LITERAL(40, 748, 24), // "testZipAddLocalDirectory"
QT_MOC_LITERAL(41, 773, 39), // "testZipReadRedundantDataDescr..."
QT_MOC_LITERAL(42, 813, 34), // "testZipReadRedundantDataDescr..."
QT_MOC_LITERAL(43, 848, 27), // "testZipDirectoryPermissions"
QT_MOC_LITERAL(44, 876, 22), // "testZipUnusualButValid"
QT_MOC_LITERAL(45, 899, 21), // "testZipDuplicateNames"
QT_MOC_LITERAL(46, 921, 16), // "testZipWithinZip"
QT_MOC_LITERAL(47, 938, 7), // "testRcc"
QT_MOC_LITERAL(48, 946, 6), // "testAr"
QT_MOC_LITERAL(49, 953, 19), // "testCreate7Zip_data"
QT_MOC_LITERAL(50, 973, 14), // "testCreate7Zip"
QT_MOC_LITERAL(51, 988, 17), // "testRead7Zip_data"
QT_MOC_LITERAL(52, 1006, 12), // "testRead7Zip"
QT_MOC_LITERAL(53, 1019, 21), // "test7ZipFileData_data"
QT_MOC_LITERAL(54, 1041, 16), // "test7ZipFileData"
QT_MOC_LITERAL(55, 1058, 19), // "test7ZipCopyTo_data"
QT_MOC_LITERAL(56, 1078, 14), // "test7ZipCopyTo"
QT_MOC_LITERAL(57, 1093, 22), // "test7ZipReadWrite_data"
QT_MOC_LITERAL(58, 1116, 17), // "test7ZipReadWrite"
QT_MOC_LITERAL(59, 1134, 22), // "test7ZipMaxLength_data"
QT_MOC_LITERAL(60, 1157, 17), // "test7ZipMaxLength"
QT_MOC_LITERAL(61, 1175, 15) // "cleanupTestCase"

    },
    "KArchiveTest\0initTestCase\0\0testEmptyFilename\0"
    "testNullDevice\0testNonExistentFile\0"
    "testCreateTar_data\0testCreateTar\0"
    "testCreateTarXXX_data\0testCreateTarXXX\0"
    "testReadTar_data\0testReadTar\0"
    "testUncompress_data\0testUncompress\0"
    "testTarFileData_data\0testTarFileData\0"
    "testTarCopyTo_data\0testTarCopyTo\0"
    "testTarReadWrite_data\0testTarReadWrite\0"
    "testTarMaxLength_data\0testTarMaxLength\0"
    "testTarGlobalHeader\0testTarPrefix\0"
    "testTarDirectoryForgotten\0"
    "testTarEmptyFileMissingDir\0testTarRootDir\0"
    "testTarDirectoryTwice\0"
    "testTarIgnoreRelativePathOutsideArchive\0"
    "testTarLongNonASCIINames\0"
    "testTarShortNonASCIINames\0testCreateZip\0"
    "testCreateZipError\0testReadZipError\0"
    "testReadZip\0testZipFileData\0testZipCopyTo\0"
    "testZipMaxLength\0testZipWithNonLatinFileNames\0"
    "testZipWithOverwrittenFileName\0"
    "testZipAddLocalDirectory\0"
    "testZipReadRedundantDataDescriptor_data\0"
    "testZipReadRedundantDataDescriptor\0"
    "testZipDirectoryPermissions\0"
    "testZipUnusualButValid\0testZipDuplicateNames\0"
    "testZipWithinZip\0testRcc\0testAr\0"
    "testCreate7Zip_data\0testCreate7Zip\0"
    "testRead7Zip_data\0testRead7Zip\0"
    "test7ZipFileData_data\0test7ZipFileData\0"
    "test7ZipCopyTo_data\0test7ZipCopyTo\0"
    "test7ZipReadWrite_data\0test7ZipReadWrite\0"
    "test7ZipMaxLength_data\0test7ZipMaxLength\0"
    "cleanupTestCase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KArchiveTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      60,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  314,    2, 0x08 /* Private */,
       3,    0,  315,    2, 0x08 /* Private */,
       4,    0,  316,    2, 0x08 /* Private */,
       5,    0,  317,    2, 0x08 /* Private */,
       6,    0,  318,    2, 0x08 /* Private */,
       7,    0,  319,    2, 0x08 /* Private */,
       8,    0,  320,    2, 0x08 /* Private */,
       9,    0,  321,    2, 0x08 /* Private */,
      10,    0,  322,    2, 0x08 /* Private */,
      11,    0,  323,    2, 0x08 /* Private */,
      12,    0,  324,    2, 0x08 /* Private */,
      13,    0,  325,    2, 0x08 /* Private */,
      14,    0,  326,    2, 0x08 /* Private */,
      15,    0,  327,    2, 0x08 /* Private */,
      16,    0,  328,    2, 0x08 /* Private */,
      17,    0,  329,    2, 0x08 /* Private */,
      18,    0,  330,    2, 0x08 /* Private */,
      19,    0,  331,    2, 0x08 /* Private */,
      20,    0,  332,    2, 0x08 /* Private */,
      21,    0,  333,    2, 0x08 /* Private */,
      22,    0,  334,    2, 0x08 /* Private */,
      23,    0,  335,    2, 0x08 /* Private */,
      24,    0,  336,    2, 0x08 /* Private */,
      25,    0,  337,    2, 0x08 /* Private */,
      26,    0,  338,    2, 0x08 /* Private */,
      27,    0,  339,    2, 0x08 /* Private */,
      28,    0,  340,    2, 0x08 /* Private */,
      29,    0,  341,    2, 0x08 /* Private */,
      30,    0,  342,    2, 0x08 /* Private */,
      31,    0,  343,    2, 0x08 /* Private */,
      32,    0,  344,    2, 0x08 /* Private */,
      33,    0,  345,    2, 0x08 /* Private */,
      34,    0,  346,    2, 0x08 /* Private */,
      35,    0,  347,    2, 0x08 /* Private */,
      36,    0,  348,    2, 0x08 /* Private */,
      37,    0,  349,    2, 0x08 /* Private */,
      38,    0,  350,    2, 0x08 /* Private */,
      39,    0,  351,    2, 0x08 /* Private */,
      40,    0,  352,    2, 0x08 /* Private */,
      41,    0,  353,    2, 0x08 /* Private */,
      42,    0,  354,    2, 0x08 /* Private */,
      43,    0,  355,    2, 0x08 /* Private */,
      44,    0,  356,    2, 0x08 /* Private */,
      45,    0,  357,    2, 0x08 /* Private */,
      46,    0,  358,    2, 0x08 /* Private */,
      47,    0,  359,    2, 0x08 /* Private */,
      48,    0,  360,    2, 0x08 /* Private */,
      49,    0,  361,    2, 0x08 /* Private */,
      50,    0,  362,    2, 0x08 /* Private */,
      51,    0,  363,    2, 0x08 /* Private */,
      52,    0,  364,    2, 0x08 /* Private */,
      53,    0,  365,    2, 0x08 /* Private */,
      54,    0,  366,    2, 0x08 /* Private */,
      55,    0,  367,    2, 0x08 /* Private */,
      56,    0,  368,    2, 0x08 /* Private */,
      57,    0,  369,    2, 0x08 /* Private */,
      58,    0,  370,    2, 0x08 /* Private */,
      59,    0,  371,    2, 0x08 /* Private */,
      60,    0,  372,    2, 0x08 /* Private */,
      61,    0,  373,    2, 0x08 /* Private */,

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

void KArchiveTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KArchiveTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testEmptyFilename(); break;
        case 2: _t->testNullDevice(); break;
        case 3: _t->testNonExistentFile(); break;
        case 4: _t->testCreateTar_data(); break;
        case 5: _t->testCreateTar(); break;
        case 6: _t->testCreateTarXXX_data(); break;
        case 7: _t->testCreateTarXXX(); break;
        case 8: _t->testReadTar_data(); break;
        case 9: _t->testReadTar(); break;
        case 10: _t->testUncompress_data(); break;
        case 11: _t->testUncompress(); break;
        case 12: _t->testTarFileData_data(); break;
        case 13: _t->testTarFileData(); break;
        case 14: _t->testTarCopyTo_data(); break;
        case 15: _t->testTarCopyTo(); break;
        case 16: _t->testTarReadWrite_data(); break;
        case 17: _t->testTarReadWrite(); break;
        case 18: _t->testTarMaxLength_data(); break;
        case 19: _t->testTarMaxLength(); break;
        case 20: _t->testTarGlobalHeader(); break;
        case 21: _t->testTarPrefix(); break;
        case 22: _t->testTarDirectoryForgotten(); break;
        case 23: _t->testTarEmptyFileMissingDir(); break;
        case 24: _t->testTarRootDir(); break;
        case 25: _t->testTarDirectoryTwice(); break;
        case 26: _t->testTarIgnoreRelativePathOutsideArchive(); break;
        case 27: _t->testTarLongNonASCIINames(); break;
        case 28: _t->testTarShortNonASCIINames(); break;
        case 29: _t->testCreateZip(); break;
        case 30: _t->testCreateZipError(); break;
        case 31: _t->testReadZipError(); break;
        case 32: _t->testReadZip(); break;
        case 33: _t->testZipFileData(); break;
        case 34: _t->testZipCopyTo(); break;
        case 35: _t->testZipMaxLength(); break;
        case 36: _t->testZipWithNonLatinFileNames(); break;
        case 37: _t->testZipWithOverwrittenFileName(); break;
        case 38: _t->testZipAddLocalDirectory(); break;
        case 39: _t->testZipReadRedundantDataDescriptor_data(); break;
        case 40: _t->testZipReadRedundantDataDescriptor(); break;
        case 41: _t->testZipDirectoryPermissions(); break;
        case 42: _t->testZipUnusualButValid(); break;
        case 43: _t->testZipDuplicateNames(); break;
        case 44: _t->testZipWithinZip(); break;
        case 45: _t->testRcc(); break;
        case 46: _t->testAr(); break;
        case 47: _t->testCreate7Zip_data(); break;
        case 48: _t->testCreate7Zip(); break;
        case 49: _t->testRead7Zip_data(); break;
        case 50: _t->testRead7Zip(); break;
        case 51: _t->test7ZipFileData_data(); break;
        case 52: _t->test7ZipFileData(); break;
        case 53: _t->test7ZipCopyTo_data(); break;
        case 54: _t->test7ZipCopyTo(); break;
        case 55: _t->test7ZipReadWrite_data(); break;
        case 56: _t->test7ZipReadWrite(); break;
        case 57: _t->test7ZipMaxLength_data(); break;
        case 58: _t->test7ZipMaxLength(); break;
        case 59: _t->cleanupTestCase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KArchiveTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KArchiveTest.data,
    qt_meta_data_KArchiveTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KArchiveTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KArchiveTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KArchiveTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KArchiveTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 60)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 60;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
