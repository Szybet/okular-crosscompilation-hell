/****************************************************************************
** Meta object code from reading C++ file 'kconfigtest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kconfig/autotests/kconfigtest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kconfigtest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KConfigTest_t {
    QByteArrayData data[67];
    char stringdata0[983];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KConfigTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KConfigTest_t qt_meta_stringdata_KConfigTest = {
    {
QT_MOC_LITERAL(0, 0, 11), // "KConfigTest"
QT_MOC_LITERAL(1, 12, 12), // "initTestCase"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "cleanupTestCase"
QT_MOC_LITERAL(4, 42, 10), // "testSimple"
QT_MOC_LITERAL(5, 53, 12), // "testDefaults"
QT_MOC_LITERAL(6, 66, 9), // "testLists"
QT_MOC_LITERAL(7, 76, 10), // "testLocale"
QT_MOC_LITERAL(8, 87, 12), // "testEncoding"
QT_MOC_LITERAL(9, 100, 8), // "testPath"
QT_MOC_LITERAL(10, 109, 14), // "testPathQtHome"
QT_MOC_LITERAL(11, 124, 34), // "testPersistenceOfExpandFlagFo..."
QT_MOC_LITERAL(12, 159, 11), // "testComplex"
QT_MOC_LITERAL(13, 171, 9), // "testEnums"
QT_MOC_LITERAL(14, 181, 12), // "testEntryMap"
QT_MOC_LITERAL(15, 194, 11), // "testInvalid"
QT_MOC_LITERAL(16, 206, 15), // "testDeleteEntry"
QT_MOC_LITERAL(17, 222, 10), // "testDelete"
QT_MOC_LITERAL(18, 233, 23), // "testDeleteWhenLocalized"
QT_MOC_LITERAL(19, 257, 16), // "testDefaultGroup"
QT_MOC_LITERAL(20, 274, 14), // "testEmptyGroup"
QT_MOC_LITERAL(21, 289, 23), // "testCascadingWithLocale"
QT_MOC_LITERAL(22, 313, 9), // "testMerge"
QT_MOC_LITERAL(23, 323, 13), // "testImmutable"
QT_MOC_LITERAL(24, 337, 15), // "testGroupEscape"
QT_MOC_LITERAL(25, 353, 20), // "testRevertAllEntries"
QT_MOC_LITERAL(26, 374, 15), // "testChangeGroup"
QT_MOC_LITERAL(27, 390, 15), // "testGroupCopyTo"
QT_MOC_LITERAL(28, 406, 16), // "testConfigCopyTo"
QT_MOC_LITERAL(29, 423, 20), // "testConfigCopyToSync"
QT_MOC_LITERAL(30, 444, 12), // "testReparent"
QT_MOC_LITERAL(31, 457, 19), // "testAnonymousConfig"
QT_MOC_LITERAL(32, 477, 18), // "testQByteArrayUtf8"
QT_MOC_LITERAL(33, 496, 20), // "testQStringUtf8_data"
QT_MOC_LITERAL(34, 517, 15), // "testQStringUtf8"
QT_MOC_LITERAL(35, 533, 16), // "testMoveValuesTo"
QT_MOC_LITERAL(36, 550, 12), // "testSubGroup"
QT_MOC_LITERAL(37, 563, 20), // "testAddConfigSources"
QT_MOC_LITERAL(38, 584, 15), // "testWriteOnSync"
QT_MOC_LITERAL(39, 600, 26), // "testFailOnReadOnlyFileSync"
QT_MOC_LITERAL(40, 627, 16), // "testDirtyOnEqual"
QT_MOC_LITERAL(41, 644, 22), // "testDirtyOnEqualOverdo"
QT_MOC_LITERAL(42, 667, 13), // "testCreateDir"
QT_MOC_LITERAL(43, 681, 16), // "testSharedConfig"
QT_MOC_LITERAL(44, 698, 15), // "testOptionOrder"
QT_MOC_LITERAL(45, 714, 16), // "testLocaleConfig"
QT_MOC_LITERAL(46, 731, 20), // "testDirtyAfterRevert"
QT_MOC_LITERAL(47, 752, 14), // "testKdeGlobals"
QT_MOC_LITERAL(48, 767, 17), // "testLocalDeletion"
QT_MOC_LITERAL(49, 785, 12), // "testNewlines"
QT_MOC_LITERAL(50, 798, 16), // "testXdgListEntry"
QT_MOC_LITERAL(51, 815, 10), // "testNotify"
QT_MOC_LITERAL(52, 826, 27), // "testNotifyIllegalObjectPath"
QT_MOC_LITERAL(53, 854, 19), // "testKAuthorizeEnums"
QT_MOC_LITERAL(54, 874, 11), // "testThreads"
QT_MOC_LITERAL(55, 886, 23), // "testKdeglobalsVsDefault"
QT_MOC_LITERAL(56, 910, 14), // "testSyncOnExit"
QT_MOC_LITERAL(57, 925, 7), // "Testing"
QT_MOC_LITERAL(58, 933, 4), // "Ones"
QT_MOC_LITERAL(59, 938, 4), // "Tens"
QT_MOC_LITERAL(60, 943, 8), // "Hundreds"
QT_MOC_LITERAL(61, 952, 5), // "Flags"
QT_MOC_LITERAL(62, 958, 4), // "bits"
QT_MOC_LITERAL(63, 963, 4), // "bit0"
QT_MOC_LITERAL(64, 968, 4), // "bit1"
QT_MOC_LITERAL(65, 973, 4), // "bit2"
QT_MOC_LITERAL(66, 978, 4) // "bit3"

    },
    "KConfigTest\0initTestCase\0\0cleanupTestCase\0"
    "testSimple\0testDefaults\0testLists\0"
    "testLocale\0testEncoding\0testPath\0"
    "testPathQtHome\0testPersistenceOfExpandFlagForPath\0"
    "testComplex\0testEnums\0testEntryMap\0"
    "testInvalid\0testDeleteEntry\0testDelete\0"
    "testDeleteWhenLocalized\0testDefaultGroup\0"
    "testEmptyGroup\0testCascadingWithLocale\0"
    "testMerge\0testImmutable\0testGroupEscape\0"
    "testRevertAllEntries\0testChangeGroup\0"
    "testGroupCopyTo\0testConfigCopyTo\0"
    "testConfigCopyToSync\0testReparent\0"
    "testAnonymousConfig\0testQByteArrayUtf8\0"
    "testQStringUtf8_data\0testQStringUtf8\0"
    "testMoveValuesTo\0testSubGroup\0"
    "testAddConfigSources\0testWriteOnSync\0"
    "testFailOnReadOnlyFileSync\0testDirtyOnEqual\0"
    "testDirtyOnEqualOverdo\0testCreateDir\0"
    "testSharedConfig\0testOptionOrder\0"
    "testLocaleConfig\0testDirtyAfterRevert\0"
    "testKdeGlobals\0testLocalDeletion\0"
    "testNewlines\0testXdgListEntry\0testNotify\0"
    "testNotifyIllegalObjectPath\0"
    "testKAuthorizeEnums\0testThreads\0"
    "testKdeglobalsVsDefault\0testSyncOnExit\0"
    "Testing\0Ones\0Tens\0Hundreds\0Flags\0bits\0"
    "bit0\0bit1\0bit2\0bit3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KConfigTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       2,  344, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  289,    2, 0x08 /* Private */,
       3,    0,  290,    2, 0x08 /* Private */,
       4,    0,  291,    2, 0x08 /* Private */,
       5,    0,  292,    2, 0x08 /* Private */,
       6,    0,  293,    2, 0x08 /* Private */,
       7,    0,  294,    2, 0x08 /* Private */,
       8,    0,  295,    2, 0x08 /* Private */,
       9,    0,  296,    2, 0x08 /* Private */,
      10,    0,  297,    2, 0x08 /* Private */,
      11,    0,  298,    2, 0x08 /* Private */,
      12,    0,  299,    2, 0x08 /* Private */,
      13,    0,  300,    2, 0x08 /* Private */,
      14,    0,  301,    2, 0x08 /* Private */,
      15,    0,  302,    2, 0x08 /* Private */,
      16,    0,  303,    2, 0x08 /* Private */,
      17,    0,  304,    2, 0x08 /* Private */,
      18,    0,  305,    2, 0x08 /* Private */,
      19,    0,  306,    2, 0x08 /* Private */,
      20,    0,  307,    2, 0x08 /* Private */,
      21,    0,  308,    2, 0x08 /* Private */,
      22,    0,  309,    2, 0x08 /* Private */,
      23,    0,  310,    2, 0x08 /* Private */,
      24,    0,  311,    2, 0x08 /* Private */,
      25,    0,  312,    2, 0x08 /* Private */,
      26,    0,  313,    2, 0x08 /* Private */,
      27,    0,  314,    2, 0x08 /* Private */,
      28,    0,  315,    2, 0x08 /* Private */,
      29,    0,  316,    2, 0x08 /* Private */,
      30,    0,  317,    2, 0x08 /* Private */,
      31,    0,  318,    2, 0x08 /* Private */,
      32,    0,  319,    2, 0x08 /* Private */,
      33,    0,  320,    2, 0x08 /* Private */,
      34,    0,  321,    2, 0x08 /* Private */,
      35,    0,  322,    2, 0x08 /* Private */,
      36,    0,  323,    2, 0x08 /* Private */,
      37,    0,  324,    2, 0x08 /* Private */,
      38,    0,  325,    2, 0x08 /* Private */,
      39,    0,  326,    2, 0x08 /* Private */,
      40,    0,  327,    2, 0x08 /* Private */,
      41,    0,  328,    2, 0x08 /* Private */,
      42,    0,  329,    2, 0x08 /* Private */,
      43,    0,  330,    2, 0x08 /* Private */,
      44,    0,  331,    2, 0x08 /* Private */,
      45,    0,  332,    2, 0x08 /* Private */,
      46,    0,  333,    2, 0x08 /* Private */,
      47,    0,  334,    2, 0x08 /* Private */,
      48,    0,  335,    2, 0x08 /* Private */,
      49,    0,  336,    2, 0x08 /* Private */,
      50,    0,  337,    2, 0x08 /* Private */,
      51,    0,  338,    2, 0x08 /* Private */,
      52,    0,  339,    2, 0x08 /* Private */,
      53,    0,  340,    2, 0x08 /* Private */,
      54,    0,  341,    2, 0x08 /* Private */,
      55,    0,  342,    2, 0x08 /* Private */,
      56,    0,  343,    2, 0x08 /* Private */,

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

 // enums: name, alias, flags, count, data
      57,   57, 0x0,    3,  354,
      61,   62, 0x1,    4,  360,

 // enum data: key, value
      58, uint(KConfigTest::Ones),
      59, uint(KConfigTest::Tens),
      60, uint(KConfigTest::Hundreds),
      63, uint(KConfigTest::bit0),
      64, uint(KConfigTest::bit1),
      65, uint(KConfigTest::bit2),
      66, uint(KConfigTest::bit3),

       0        // eod
};

void KConfigTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KConfigTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->testSimple(); break;
        case 3: _t->testDefaults(); break;
        case 4: _t->testLists(); break;
        case 5: _t->testLocale(); break;
        case 6: _t->testEncoding(); break;
        case 7: _t->testPath(); break;
        case 8: _t->testPathQtHome(); break;
        case 9: _t->testPersistenceOfExpandFlagForPath(); break;
        case 10: _t->testComplex(); break;
        case 11: _t->testEnums(); break;
        case 12: _t->testEntryMap(); break;
        case 13: _t->testInvalid(); break;
        case 14: _t->testDeleteEntry(); break;
        case 15: _t->testDelete(); break;
        case 16: _t->testDeleteWhenLocalized(); break;
        case 17: _t->testDefaultGroup(); break;
        case 18: _t->testEmptyGroup(); break;
        case 19: _t->testCascadingWithLocale(); break;
        case 20: _t->testMerge(); break;
        case 21: _t->testImmutable(); break;
        case 22: _t->testGroupEscape(); break;
        case 23: _t->testRevertAllEntries(); break;
        case 24: _t->testChangeGroup(); break;
        case 25: _t->testGroupCopyTo(); break;
        case 26: _t->testConfigCopyTo(); break;
        case 27: _t->testConfigCopyToSync(); break;
        case 28: _t->testReparent(); break;
        case 29: _t->testAnonymousConfig(); break;
        case 30: _t->testQByteArrayUtf8(); break;
        case 31: _t->testQStringUtf8_data(); break;
        case 32: _t->testQStringUtf8(); break;
        case 33: _t->testMoveValuesTo(); break;
        case 34: _t->testSubGroup(); break;
        case 35: _t->testAddConfigSources(); break;
        case 36: _t->testWriteOnSync(); break;
        case 37: _t->testFailOnReadOnlyFileSync(); break;
        case 38: _t->testDirtyOnEqual(); break;
        case 39: _t->testDirtyOnEqualOverdo(); break;
        case 40: _t->testCreateDir(); break;
        case 41: _t->testSharedConfig(); break;
        case 42: _t->testOptionOrder(); break;
        case 43: _t->testLocaleConfig(); break;
        case 44: _t->testDirtyAfterRevert(); break;
        case 45: _t->testKdeGlobals(); break;
        case 46: _t->testLocalDeletion(); break;
        case 47: _t->testNewlines(); break;
        case 48: _t->testXdgListEntry(); break;
        case 49: _t->testNotify(); break;
        case 50: _t->testNotifyIllegalObjectPath(); break;
        case 51: _t->testKAuthorizeEnums(); break;
        case 52: _t->testThreads(); break;
        case 53: _t->testKdeglobalsVsDefault(); break;
        case 54: _t->testSyncOnExit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KConfigTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KConfigTest.data,
    qt_meta_data_KConfigTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KConfigTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KConfigTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KConfigTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KConfigTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 55;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
