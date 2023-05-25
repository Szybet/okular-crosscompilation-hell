/****************************************************************************
** Meta object code from reading C++ file 'kjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kcoreaddons/src/lib/jobs/kjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KJob_t {
    QByteArrayData data[53];
    char stringdata0[503];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KJob_t qt_meta_stringdata_KJob = {
    {
QT_MOC_LITERAL(0, 0, 4), // "KJob"
QT_MOC_LITERAL(1, 5, 8), // "finished"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 5), // "KJob*"
QT_MOC_LITERAL(4, 21, 3), // "job"
QT_MOC_LITERAL(5, 25, 9), // "suspended"
QT_MOC_LITERAL(6, 35, 7), // "resumed"
QT_MOC_LITERAL(7, 43, 6), // "result"
QT_MOC_LITERAL(8, 50, 11), // "description"
QT_MOC_LITERAL(9, 62, 5), // "title"
QT_MOC_LITERAL(10, 68, 22), // "QPair<QString,QString>"
QT_MOC_LITERAL(11, 91, 6), // "field1"
QT_MOC_LITERAL(12, 98, 6), // "field2"
QT_MOC_LITERAL(13, 105, 11), // "infoMessage"
QT_MOC_LITERAL(14, 117, 5), // "plain"
QT_MOC_LITERAL(15, 123, 4), // "rich"
QT_MOC_LITERAL(16, 128, 7), // "warning"
QT_MOC_LITERAL(17, 136, 11), // "totalAmount"
QT_MOC_LITERAL(18, 148, 10), // "KJob::Unit"
QT_MOC_LITERAL(19, 159, 4), // "unit"
QT_MOC_LITERAL(20, 164, 6), // "amount"
QT_MOC_LITERAL(21, 171, 18), // "totalAmountChanged"
QT_MOC_LITERAL(22, 190, 15), // "processedAmount"
QT_MOC_LITERAL(23, 206, 22), // "processedAmountChanged"
QT_MOC_LITERAL(24, 229, 9), // "totalSize"
QT_MOC_LITERAL(25, 239, 4), // "size"
QT_MOC_LITERAL(26, 244, 13), // "processedSize"
QT_MOC_LITERAL(27, 258, 7), // "percent"
QT_MOC_LITERAL(28, 266, 14), // "percentChanged"
QT_MOC_LITERAL(29, 281, 5), // "speed"
QT_MOC_LITERAL(30, 287, 4), // "kill"
QT_MOC_LITERAL(31, 292, 13), // "KillVerbosity"
QT_MOC_LITERAL(32, 306, 9), // "verbosity"
QT_MOC_LITERAL(33, 316, 7), // "suspend"
QT_MOC_LITERAL(34, 324, 6), // "resume"
QT_MOC_LITERAL(35, 331, 5), // "start"
QT_MOC_LITERAL(36, 337, 4), // "Unit"
QT_MOC_LITERAL(37, 342, 5), // "error"
QT_MOC_LITERAL(38, 348, 9), // "errorText"
QT_MOC_LITERAL(39, 358, 11), // "errorString"
QT_MOC_LITERAL(40, 370, 12), // "capabilities"
QT_MOC_LITERAL(41, 383, 12), // "Capabilities"
QT_MOC_LITERAL(42, 396, 5), // "Bytes"
QT_MOC_LITERAL(43, 402, 5), // "Files"
QT_MOC_LITERAL(44, 408, 11), // "Directories"
QT_MOC_LITERAL(45, 420, 5), // "Items"
QT_MOC_LITERAL(46, 426, 10), // "UnitsCount"
QT_MOC_LITERAL(47, 437, 10), // "Capability"
QT_MOC_LITERAL(48, 448, 14), // "NoCapabilities"
QT_MOC_LITERAL(49, 463, 8), // "Killable"
QT_MOC_LITERAL(50, 472, 11), // "Suspendable"
QT_MOC_LITERAL(51, 484, 7), // "Quietly"
QT_MOC_LITERAL(52, 492, 10) // "EmitResult"

    },
    "KJob\0finished\0\0KJob*\0job\0suspended\0"
    "resumed\0result\0description\0title\0"
    "QPair<QString,QString>\0field1\0field2\0"
    "infoMessage\0plain\0rich\0warning\0"
    "totalAmount\0KJob::Unit\0unit\0amount\0"
    "totalAmountChanged\0processedAmount\0"
    "processedAmountChanged\0totalSize\0size\0"
    "processedSize\0percent\0percentChanged\0"
    "speed\0kill\0KillVerbosity\0verbosity\0"
    "suspend\0resume\0start\0Unit\0error\0"
    "errorText\0errorString\0capabilities\0"
    "Capabilities\0Bytes\0Files\0Directories\0"
    "Items\0UnitsCount\0Capability\0NoCapabilities\0"
    "Killable\0Suspendable\0Quietly\0EmitResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       5,  272, // properties
       4,  292, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       5,    1,  152,    2, 0x06 /* Public */,
       6,    1,  155,    2, 0x06 /* Public */,
       7,    1,  158,    2, 0x06 /* Public */,
       8,    4,  161,    2, 0x06 /* Public */,
       8,    3,  170,    2, 0x26 /* Public | MethodCloned */,
       8,    2,  177,    2, 0x26 /* Public | MethodCloned */,
      13,    3,  182,    2, 0x06 /* Public */,
      13,    2,  189,    2, 0x26 /* Public | MethodCloned */,
      16,    3,  194,    2, 0x06 /* Public */,
      16,    2,  201,    2, 0x26 /* Public | MethodCloned */,
      17,    3,  206,    2, 0x06 /* Public */,
      21,    3,  213,    2, 0x06 /* Public */,
      22,    3,  220,    2, 0x06 /* Public */,
      23,    3,  227,    2, 0x06 /* Public */,
      24,    2,  234,    2, 0x06 /* Public */,
      26,    2,  239,    2, 0x06 /* Public */,
      27,    2,  244,    2, 0x06 /* Public */,
      28,    2,  249,    2, 0x06 /* Public */,
      29,    2,  254,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      30,    1,  259,    2, 0x0a /* Public */,
      30,    0,  262,    2, 0x2a /* Public | MethodCloned */,
      33,    0,  263,    2, 0x0a /* Public */,
      34,    0,  264,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      35,    0,  265,    2, 0x42 /* Public | isScriptable */,
      22,    1,  266,    2, 0x42 /* Public | isScriptable */,
      17,    1,  269,    2, 0x42 /* Public | isScriptable */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 10, 0x80000000 | 10,    4,    9,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 10,    4,    9,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,   14,   15,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   14,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,   14,   15,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   14,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 18, QMetaType::ULongLong,    4,   19,   20,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 18, QMetaType::ULongLong,    4,   19,   20,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 18, QMetaType::ULongLong,    4,   19,   20,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 18, QMetaType::ULongLong,    4,   19,   20,
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULongLong,    4,   25,
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULongLong,    4,   25,
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULong,    4,   27,
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULong,    4,   27,
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULong,    4,   29,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 31,   32,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,

 // methods: parameters
    QMetaType::Void,
    QMetaType::ULongLong, 0x80000000 | 36,   19,
    QMetaType::ULongLong, 0x80000000 | 36,   19,

 // properties: name, type, flags
      37, QMetaType::Int, 0x00495001,
      38, QMetaType::QString, 0x00495001,
      39, QMetaType::QString, 0x00495001,
      27, QMetaType::ULong, 0x00495001,
      40, 0x80000000 | 41, 0x00095409,

 // properties: notify_signal_id
       3,
       3,
       3,
      18,
       0,

 // enums: name, alias, flags, count, data
      36,   36, 0x0,    5,  312,
      47,   47, 0x0,    3,  322,
      41,   47, 0x1,    3,  328,
      31,   31, 0x0,    2,  334,

 // enum data: key, value
      42, uint(KJob::Bytes),
      43, uint(KJob::Files),
      44, uint(KJob::Directories),
      45, uint(KJob::Items),
      46, uint(KJob::UnitsCount),
      48, uint(KJob::NoCapabilities),
      49, uint(KJob::Killable),
      50, uint(KJob::Suspendable),
      48, uint(KJob::NoCapabilities),
      49, uint(KJob::Killable),
      50, uint(KJob::Suspendable),
      51, uint(KJob::Quietly),
      52, uint(KJob::EmitResult),

       0        // eod
};

void KJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< KJob*(*)>(_a[1])), QPrivateSignal()); break;
        case 1: _t->suspended((*reinterpret_cast< KJob*(*)>(_a[1])), QPrivateSignal()); break;
        case 2: _t->resumed((*reinterpret_cast< KJob*(*)>(_a[1])), QPrivateSignal()); break;
        case 3: _t->result((*reinterpret_cast< KJob*(*)>(_a[1])), QPrivateSignal()); break;
        case 4: _t->description((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QPair<QString,QString>(*)>(_a[3])),(*reinterpret_cast< const QPair<QString,QString>(*)>(_a[4]))); break;
        case 5: _t->description((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QPair<QString,QString>(*)>(_a[3]))); break;
        case 6: _t->description((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->infoMessage((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: _t->infoMessage((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->warning((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: _t->warning((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->totalAmount((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< KJob::Unit(*)>(_a[2])),(*reinterpret_cast< qulonglong(*)>(_a[3]))); break;
        case 12: _t->totalAmountChanged((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< KJob::Unit(*)>(_a[2])),(*reinterpret_cast< qulonglong(*)>(_a[3])), QPrivateSignal()); break;
        case 13: _t->processedAmount((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< KJob::Unit(*)>(_a[2])),(*reinterpret_cast< qulonglong(*)>(_a[3]))); break;
        case 14: _t->processedAmountChanged((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< KJob::Unit(*)>(_a[2])),(*reinterpret_cast< qulonglong(*)>(_a[3])), QPrivateSignal()); break;
        case 15: _t->totalSize((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 16: _t->processedSize((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 17: _t->percent((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 18: _t->percentChanged((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])), QPrivateSignal()); break;
        case 19: _t->speed((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 20: { bool _r = _t->kill((*reinterpret_cast< KillVerbosity(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->kill();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->suspend();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->resume();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->start(); break;
        case 25: { qulonglong _r = _t->processedAmount((*reinterpret_cast< Unit(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qulonglong*>(_a[0]) = std::move(_r); }  break;
        case 26: { qulonglong _r = _t->totalAmount((*reinterpret_cast< Unit(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qulonglong*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob::Unit >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob::Unit >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob::Unit >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob::Unit >(); break;
            }
            break;
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
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KJob::*)(KJob * , QPrivateSignal);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , QPrivateSignal);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::suspended)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , QPrivateSignal);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::resumed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , QPrivateSignal);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::result)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , const QString & , const QPair<QString,QString> & , const QPair<QString,QString> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::description)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::infoMessage)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::warning)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , KJob::Unit , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::totalAmount)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , KJob::Unit , qulonglong , QPrivateSignal);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::totalAmountChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , KJob::Unit , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::processedAmount)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , KJob::Unit , qulonglong , QPrivateSignal);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::processedAmountChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::totalSize)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::processedSize)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , unsigned long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::percent)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , unsigned long , QPrivateSignal);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::percentChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (KJob::*)(KJob * , unsigned long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KJob::speed)) {
                *result = 19;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KJob *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->error(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->errorText(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 3: *reinterpret_cast< ulong*>(_v) = _t->percent(); break;
        case 4: *reinterpret_cast<int*>(_v) = QFlag(_t->capabilities()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KJob.data,
    qt_meta_data_KJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KJob.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KJob::finished(KJob * _t1, QPrivateSignal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KJob::suspended(KJob * _t1, QPrivateSignal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KJob::resumed(KJob * _t1, QPrivateSignal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KJob::result(KJob * _t1, QPrivateSignal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KJob::description(KJob * _t1, const QString & _t2, const QPair<QString,QString> & _t3, const QPair<QString,QString> & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 7
void KJob::infoMessage(KJob * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 9
void KJob::warning(KJob * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 11
void KJob::totalAmount(KJob * _t1, KJob::Unit _t2, qulonglong _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void KJob::totalAmountChanged(KJob * _t1, KJob::Unit _t2, qulonglong _t3, QPrivateSignal _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void KJob::processedAmount(KJob * _t1, KJob::Unit _t2, qulonglong _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void KJob::processedAmountChanged(KJob * _t1, KJob::Unit _t2, qulonglong _t3, QPrivateSignal _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void KJob::totalSize(KJob * _t1, qulonglong _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void KJob::processedSize(KJob * _t1, qulonglong _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void KJob::percent(KJob * _t1, unsigned long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void KJob::percentChanged(KJob * _t1, unsigned long _t2, QPrivateSignal _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void KJob::speed(KJob * _t1, unsigned long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
