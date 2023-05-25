/****************************************************************************
** Meta object code from reading C++ file 'klauncher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kinit/src/klauncher/klauncher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'klauncher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KLauncher_t {
    QByteArrayData data[19];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KLauncher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KLauncher_t qt_meta_stringdata_KLauncher = {
    {
QT_MOC_LITERAL(0, 0, 9), // "KLauncher"
QT_MOC_LITERAL(1, 10, 8), // "destruct"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "slotDequeue"
QT_MOC_LITERAL(4, 32, 15), // "slotKDEInitData"
QT_MOC_LITERAL(5, 48, 20), // "slotNameOwnerChanged"
QT_MOC_LITERAL(6, 69, 4), // "name"
QT_MOC_LITERAL(7, 74, 8), // "oldOnwer"
QT_MOC_LITERAL(8, 83, 8), // "newOwner"
QT_MOC_LITERAL(9, 92, 15), // "slotSlaveStatus"
QT_MOC_LITERAL(10, 108, 10), // "IdleSlave*"
QT_MOC_LITERAL(11, 119, 11), // "acceptSlave"
QT_MOC_LITERAL(12, 131, 13), // "slotSlaveGone"
QT_MOC_LITERAL(13, 145, 11), // "idleTimeout"
QT_MOC_LITERAL(14, 157, 13), // "slotGotOutput"
QT_MOC_LITERAL(15, 171, 12), // "slotFinished"
QT_MOC_LITERAL(16, 184, 8), // "exitCode"
QT_MOC_LITERAL(17, 193, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(18, 214, 10) // "exitStatus"

    },
    "KLauncher\0destruct\0\0slotDequeue\0"
    "slotKDEInitData\0slotNameOwnerChanged\0"
    "name\0oldOnwer\0newOwner\0slotSlaveStatus\0"
    "IdleSlave*\0acceptSlave\0slotSlaveGone\0"
    "idleTimeout\0slotGotOutput\0slotFinished\0"
    "exitCode\0QProcess::ExitStatus\0exitStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KLauncher[] = {

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
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    1,   66,    2, 0x0a /* Public */,
       5,    3,   69,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x0a /* Public */,
      13,    0,   81,    2, 0x0a /* Public */,
      14,    0,   82,    2, 0x09 /* Protected */,
      15,    2,   83,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 17,   16,   18,

       0        // eod
};

void KLauncher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KLauncher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->destruct(); break;
        case 1: _t->slotDequeue(); break;
        case 2: _t->slotKDEInitData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotNameOwnerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->slotSlaveStatus((*reinterpret_cast< IdleSlave*(*)>(_a[1]))); break;
        case 5: _t->acceptSlave(); break;
        case 6: _t->slotSlaveGone(); break;
        case 7: _t->idleTimeout(); break;
        case 8: _t->slotGotOutput(); break;
        case 9: _t->slotFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< IdleSlave* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KLauncher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KLauncher.data,
    qt_meta_data_KLauncher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KLauncher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KLauncher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KLauncher.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int KLauncher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
