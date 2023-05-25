/****************************************************************************
** Meta object code from reading C++ file 'smtp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kxmlgui/src/ksendbugmail/smtp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smtp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SMTP_t {
    QByteArrayData data[15];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SMTP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SMTP_t qt_meta_stringdata_SMTP = {
    {
QT_MOC_LITERAL(0, 0, 4), // "SMTP"
QT_MOC_LITERAL(1, 5, 16), // "connectionClosed"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "messageSent"
QT_MOC_LITERAL(4, 35, 5), // "error"
QT_MOC_LITERAL(5, 41, 14), // "openConnection"
QT_MOC_LITERAL(6, 56, 11), // "sendMessage"
QT_MOC_LITERAL(7, 68, 15), // "closeConnection"
QT_MOC_LITERAL(8, 84, 16), // "connectTimerTick"
QT_MOC_LITERAL(9, 101, 15), // "connectTimedOut"
QT_MOC_LITERAL(10, 117, 16), // "interactTimedOut"
QT_MOC_LITERAL(11, 134, 17), // "socketReadyToRead"
QT_MOC_LITERAL(12, 152, 12), // "socketClosed"
QT_MOC_LITERAL(13, 165, 11), // "socketError"
QT_MOC_LITERAL(14, 177, 28) // "QAbstractSocket::SocketError"

    },
    "SMTP\0connectionClosed\0\0messageSent\0"
    "error\0openConnection\0sendMessage\0"
    "closeConnection\0connectTimerTick\0"
    "connectTimedOut\0interactTimedOut\0"
    "socketReadyToRead\0socketClosed\0"
    "socketError\0QAbstractSocket::SocketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SMTP[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   79,    2, 0x0a /* Public */,
       6,    0,   80,    2, 0x0a /* Public */,
       7,    0,   81,    2, 0x0a /* Public */,
       8,    0,   82,    2, 0x0a /* Public */,
       9,    0,   83,    2, 0x0a /* Public */,
      10,    0,   84,    2, 0x0a /* Public */,
      11,    0,   85,    2, 0x0a /* Public */,
      12,    0,   86,    2, 0x0a /* Public */,
      13,    1,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,

       0        // eod
};

void SMTP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SMTP *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionClosed(); break;
        case 1: _t->messageSent(); break;
        case 2: _t->error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->openConnection(); break;
        case 4: _t->sendMessage(); break;
        case 5: _t->closeConnection(); break;
        case 6: _t->connectTimerTick(); break;
        case 7: _t->connectTimedOut(); break;
        case 8: _t->interactTimedOut(); break;
        case 9: _t->socketReadyToRead(); break;
        case 10: _t->socketClosed(); break;
        case 11: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SMTP::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SMTP::connectionClosed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SMTP::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SMTP::messageSent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SMTP::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SMTP::error)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SMTP::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SMTP.data,
    qt_meta_data_SMTP,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SMTP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SMTP::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SMTP.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SMTP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SMTP::connectionClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SMTP::messageSent()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SMTP::error(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
