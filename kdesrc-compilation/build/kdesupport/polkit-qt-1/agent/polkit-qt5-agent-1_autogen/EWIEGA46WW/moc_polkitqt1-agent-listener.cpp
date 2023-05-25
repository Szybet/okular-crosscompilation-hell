/****************************************************************************
** Meta object code from reading C++ file 'polkitqt1-agent-listener.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../kdesupport/polkit-qt-1/agent/polkitqt1-agent-listener.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'polkitqt1-agent-listener.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PolkitQt1__Agent__Listener_t {
    QByteArrayData data[15];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PolkitQt1__Agent__Listener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PolkitQt1__Agent__Listener_t qt_meta_stringdata_PolkitQt1__Agent__Listener = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PolkitQt1::Agent::Listener"
QT_MOC_LITERAL(1, 27, 22), // "initiateAuthentication"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 8), // "actionId"
QT_MOC_LITERAL(4, 60, 7), // "message"
QT_MOC_LITERAL(5, 68, 8), // "iconName"
QT_MOC_LITERAL(6, 77, 18), // "PolkitQt1::Details"
QT_MOC_LITERAL(7, 96, 7), // "details"
QT_MOC_LITERAL(8, 104, 6), // "cookie"
QT_MOC_LITERAL(9, 111, 25), // "PolkitQt1::Identity::List"
QT_MOC_LITERAL(10, 137, 10), // "identities"
QT_MOC_LITERAL(11, 148, 30), // "PolkitQt1::Agent::AsyncResult*"
QT_MOC_LITERAL(12, 179, 6), // "result"
QT_MOC_LITERAL(13, 186, 28), // "initiateAuthenticationFinish"
QT_MOC_LITERAL(14, 215, 20) // "cancelAuthentication"

    },
    "PolkitQt1::Agent::Listener\0"
    "initiateAuthentication\0\0actionId\0"
    "message\0iconName\0PolkitQt1::Details\0"
    "details\0cookie\0PolkitQt1::Identity::List\0"
    "identities\0PolkitQt1::Agent::AsyncResult*\0"
    "result\0initiateAuthenticationFinish\0"
    "cancelAuthentication"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PolkitQt1__Agent__Listener[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    7,   29,    2, 0x0a /* Public */,
      13,    0,   44,    2, 0x0a /* Public */,
      14,    0,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 6, QMetaType::QString, 0x80000000 | 9, 0x80000000 | 11,    3,    4,    5,    7,    8,   10,   12,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void PolkitQt1::Agent::Listener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Listener *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initiateAuthentication((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const PolkitQt1::Details(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const PolkitQt1::Identity::List(*)>(_a[6])),(*reinterpret_cast< PolkitQt1::Agent::AsyncResult*(*)>(_a[7]))); break;
        case 1: { bool _r = _t->initiateAuthenticationFinish();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->cancelAuthentication(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PolkitQt1::Agent::Listener::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PolkitQt1__Agent__Listener.data,
    qt_meta_data_PolkitQt1__Agent__Listener,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PolkitQt1::Agent::Listener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PolkitQt1::Agent::Listener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PolkitQt1__Agent__Listener.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PolkitQt1::Agent::Listener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
