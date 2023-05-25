/****************************************************************************
** Meta object code from reading C++ file 'kjobtest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../autotests/kjobtest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kjobtest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestJob_t {
    QByteArrayData data[1];
    char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestJob_t qt_meta_stringdata_TestJob = {
    {
QT_MOC_LITERAL(0, 0, 7) // "TestJob"

    },
    "TestJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TestJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TestJob::staticMetaObject = { {
    QMetaObject::SuperData::link<KJob::staticMetaObject>(),
    qt_meta_stringdata_TestJob.data,
    qt_meta_data_TestJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestJob.stringdata0))
        return static_cast<void*>(this);
    return KJob::qt_metacast(_clname);
}

int TestJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KJob::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TestJobUiDelegate_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestJobUiDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestJobUiDelegate_t qt_meta_stringdata_TestJobUiDelegate = {
    {
QT_MOC_LITERAL(0, 0, 17) // "TestJobUiDelegate"

    },
    "TestJobUiDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestJobUiDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TestJobUiDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TestJobUiDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<KJobUiDelegate::staticMetaObject>(),
    qt_meta_stringdata_TestJobUiDelegate.data,
    qt_meta_data_TestJobUiDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestJobUiDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestJobUiDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestJobUiDelegate.stringdata0))
        return static_cast<void*>(this);
    return KJobUiDelegate::qt_metacast(_clname);
}

int TestJobUiDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KJobUiDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_KJobTest_t {
    QByteArrayData data[25];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KJobTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KJobTest_t qt_meta_stringdata_KJobTest = {
    {
QT_MOC_LITERAL(0, 0, 8), // "KJobTest"
QT_MOC_LITERAL(1, 9, 17), // "slotStartInnerJob"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "slotFinishOuterJob"
QT_MOC_LITERAL(4, 47, 18), // "slotFinishInnerJob"
QT_MOC_LITERAL(5, 66, 19), // "testEmitResult_data"
QT_MOC_LITERAL(6, 86, 14), // "testEmitResult"
QT_MOC_LITERAL(7, 101, 20), // "testProgressTracking"
QT_MOC_LITERAL(8, 122, 13), // "testExec_data"
QT_MOC_LITERAL(9, 136, 8), // "testExec"
QT_MOC_LITERAL(10, 145, 13), // "testKill_data"
QT_MOC_LITERAL(11, 159, 8), // "testKill"
QT_MOC_LITERAL(12, 168, 11), // "testDestroy"
QT_MOC_LITERAL(13, 180, 23), // "testEmitAtMostOnce_data"
QT_MOC_LITERAL(14, 204, 18), // "testEmitAtMostOnce"
QT_MOC_LITERAL(15, 223, 17), // "testDelegateUsage"
QT_MOC_LITERAL(16, 241, 14), // "testNestedExec"
QT_MOC_LITERAL(17, 256, 10), // "slotResult"
QT_MOC_LITERAL(18, 267, 5), // "KJob*"
QT_MOC_LITERAL(19, 273, 3), // "job"
QT_MOC_LITERAL(20, 277, 12), // "slotFinished"
QT_MOC_LITERAL(21, 290, 6), // "Action"
QT_MOC_LITERAL(22, 297, 5), // "Start"
QT_MOC_LITERAL(23, 303, 11), // "KillQuietly"
QT_MOC_LITERAL(24, 315, 13) // "KillVerbosely"

    },
    "KJobTest\0slotStartInnerJob\0\0"
    "slotFinishOuterJob\0slotFinishInnerJob\0"
    "testEmitResult_data\0testEmitResult\0"
    "testProgressTracking\0testExec_data\0"
    "testExec\0testKill_data\0testKill\0"
    "testDestroy\0testEmitAtMostOnce_data\0"
    "testEmitAtMostOnce\0testDelegateUsage\0"
    "testNestedExec\0slotResult\0KJob*\0job\0"
    "slotFinished\0Action\0Start\0KillQuietly\0"
    "KillVerbosely"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KJobTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       1,  120, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a /* Public */,
       3,    0,  100,    2, 0x0a /* Public */,
       4,    0,  101,    2, 0x0a /* Public */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    1,  114,    2, 0x08 /* Private */,
      20,    1,  117,    2, 0x08 /* Private */,

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
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,

 // enums: name, alias, flags, count, data
      21,   21, 0x2,    3,  125,

 // enum data: key, value
      22, uint(KJobTest::Action::Start),
      23, uint(KJobTest::Action::KillQuietly),
      24, uint(KJobTest::Action::KillVerbosely),

       0        // eod
};

void KJobTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KJobTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotStartInnerJob(); break;
        case 1: _t->slotFinishOuterJob(); break;
        case 2: _t->slotFinishInnerJob(); break;
        case 3: _t->testEmitResult_data(); break;
        case 4: _t->testEmitResult(); break;
        case 5: _t->testProgressTracking(); break;
        case 6: _t->testExec_data(); break;
        case 7: _t->testExec(); break;
        case 8: _t->testKill_data(); break;
        case 9: _t->testKill(); break;
        case 10: _t->testDestroy(); break;
        case 11: _t->testEmitAtMostOnce_data(); break;
        case 12: _t->testEmitAtMostOnce(); break;
        case 13: _t->testDelegateUsage(); break;
        case 14: _t->testNestedExec(); break;
        case 15: _t->slotResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 16: _t->slotFinished((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KJobTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KJobTest.data,
    qt_meta_data_KJobTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KJobTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KJobTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KJobTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KJobTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
struct qt_meta_stringdata_WaitJob_t {
    QByteArrayData data[1];
    char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WaitJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WaitJob_t qt_meta_stringdata_WaitJob = {
    {
QT_MOC_LITERAL(0, 0, 7) // "WaitJob"

    },
    "WaitJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WaitJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void WaitJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WaitJob::staticMetaObject = { {
    QMetaObject::SuperData::link<KJob::staticMetaObject>(),
    qt_meta_stringdata_WaitJob.data,
    qt_meta_data_WaitJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WaitJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaitJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WaitJob.stringdata0))
        return static_cast<void*>(this);
    return KJob::qt_metacast(_clname);
}

int WaitJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KJob::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
