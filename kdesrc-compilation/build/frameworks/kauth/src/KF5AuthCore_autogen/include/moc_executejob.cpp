/****************************************************************************
** Meta object code from reading C++ file 'executejob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kauth/src/executejob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'executejob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KAuth__ExecuteJob_t {
    QByteArrayData data[19];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KAuth__ExecuteJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KAuth__ExecuteJob_t qt_meta_stringdata_KAuth__ExecuteJob = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KAuth::ExecuteJob"
QT_MOC_LITERAL(1, 18, 7), // "newData"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "data"
QT_MOC_LITERAL(4, 32, 13), // "statusChanged"
QT_MOC_LITERAL(5, 46, 25), // "KAuth::Action::AuthStatus"
QT_MOC_LITERAL(6, 72, 6), // "status"
QT_MOC_LITERAL(7, 79, 15), // "doExecuteAction"
QT_MOC_LITERAL(8, 95, 17), // "doAuthorizeAction"
QT_MOC_LITERAL(9, 113, 19), // "actionPerformedSlot"
QT_MOC_LITERAL(10, 133, 6), // "action"
QT_MOC_LITERAL(11, 140, 18), // "KAuth::ActionReply"
QT_MOC_LITERAL(12, 159, 5), // "reply"
QT_MOC_LITERAL(13, 165, 16), // "progressStepSlot"
QT_MOC_LITERAL(14, 182, 1), // "i"
QT_MOC_LITERAL(15, 184, 17), // "statusChangedSlot"
QT_MOC_LITERAL(16, 202, 4), // "kill"
QT_MOC_LITERAL(17, 207, 13), // "KillVerbosity"
QT_MOC_LITERAL(18, 221, 9) // "verbosity"

    },
    "KAuth::ExecuteJob\0newData\0\0data\0"
    "statusChanged\0KAuth::Action::AuthStatus\0"
    "status\0doExecuteAction\0doAuthorizeAction\0"
    "actionPerformedSlot\0action\0"
    "KAuth::ActionReply\0reply\0progressStepSlot\0"
    "i\0statusChangedSlot\0kill\0KillVerbosity\0"
    "verbosity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KAuth__ExecuteJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    2,   67,    2, 0x08 /* Private */,
      13,    2,   72,    2, 0x08 /* Private */,
      15,    2,   77,    2, 0x08 /* Private */,
      16,    1,   82,    2, 0x0a /* Public */,
      16,    0,   85,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,   10,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   10,   14,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,   10,    6,
    QMetaType::Bool, 0x80000000 | 17,   18,
    QMetaType::Bool,

       0        // eod
};

void KAuth::ExecuteJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExecuteJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newData((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 1: _t->statusChanged((*reinterpret_cast< KAuth::Action::AuthStatus(*)>(_a[1]))); break;
        case 2: _t->d->doExecuteAction(); break;
        case 3: _t->d->doAuthorizeAction(); break;
        case 4: _t->d->actionPerformedSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const KAuth::ActionReply(*)>(_a[2]))); break;
        case 5: _t->d->progressStepSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->d->statusChangedSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< KAuth::Action::AuthStatus(*)>(_a[2]))); break;
        case 7: { bool _r = _t->kill((*reinterpret_cast< KillVerbosity(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->kill();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KAuth::ActionReply >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExecuteJob::*)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExecuteJob::newData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ExecuteJob::*)(KAuth::Action::AuthStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExecuteJob::statusChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KAuth::ExecuteJob::staticMetaObject = { {
    QMetaObject::SuperData::link<KJob::staticMetaObject>(),
    qt_meta_stringdata_KAuth__ExecuteJob.data,
    qt_meta_data_KAuth__ExecuteJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KAuth::ExecuteJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KAuth::ExecuteJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KAuth__ExecuteJob.stringdata0))
        return static_cast<void*>(this);
    return KJob::qt_metacast(_clname);
}

int KAuth::ExecuteJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void KAuth::ExecuteJob::newData(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KAuth::ExecuteJob::statusChanged(KAuth::Action::AuthStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
