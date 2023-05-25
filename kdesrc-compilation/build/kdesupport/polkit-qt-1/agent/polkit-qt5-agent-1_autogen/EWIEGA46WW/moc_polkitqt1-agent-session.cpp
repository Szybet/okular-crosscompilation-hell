/****************************************************************************
** Meta object code from reading C++ file 'polkitqt1-agent-session.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../kdesupport/polkit-qt-1/agent/polkitqt1-agent-session.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'polkitqt1-agent-session.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PolkitQt1__Agent__Session_t {
    QByteArrayData data[9];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PolkitQt1__Agent__Session_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PolkitQt1__Agent__Session_t qt_meta_stringdata_PolkitQt1__Agent__Session = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PolkitQt1::Agent::Session"
QT_MOC_LITERAL(1, 26, 9), // "completed"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "gainedAuthorization"
QT_MOC_LITERAL(4, 57, 7), // "request"
QT_MOC_LITERAL(5, 65, 4), // "echo"
QT_MOC_LITERAL(6, 70, 9), // "showError"
QT_MOC_LITERAL(7, 80, 4), // "text"
QT_MOC_LITERAL(8, 85, 8) // "showInfo"

    },
    "PolkitQt1::Agent::Session\0completed\0"
    "\0gainedAuthorization\0request\0echo\0"
    "showError\0text\0showInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PolkitQt1__Agent__Session[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,
       6,    1,   42,    2, 0x06 /* Public */,
       8,    1,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void PolkitQt1::Agent::Session::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Session *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->completed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->request((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->showError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->showInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Session::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::completed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::request)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::showError)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::showInfo)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PolkitQt1::Agent::Session::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PolkitQt1__Agent__Session.data,
    qt_meta_data_PolkitQt1__Agent__Session,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PolkitQt1::Agent::Session::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PolkitQt1::Agent::Session::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PolkitQt1__Agent__Session.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PolkitQt1::Agent::Session::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PolkitQt1::Agent::Session::completed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PolkitQt1::Agent::Session::request(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PolkitQt1::Agent::Session::showError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PolkitQt1::Agent::Session::showInfo(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
