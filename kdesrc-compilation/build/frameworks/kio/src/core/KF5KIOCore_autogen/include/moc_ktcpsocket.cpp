/****************************************************************************
** Meta object code from reading C++ file 'ktcpsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/core/ktcpsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ktcpsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KTcpSocket_t {
    QByteArrayData data[33];
    char stringdata0[509];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KTcpSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KTcpSocket_t qt_meta_stringdata_KTcpSocket = {
    {
QT_MOC_LITERAL(0, 0, 10), // "KTcpSocket"
QT_MOC_LITERAL(1, 11, 21), // "encryptedBytesWritten"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "written"
QT_MOC_LITERAL(4, 42, 9), // "connected"
QT_MOC_LITERAL(5, 52, 12), // "disconnected"
QT_MOC_LITERAL(6, 65, 5), // "error"
QT_MOC_LITERAL(7, 71, 17), // "KTcpSocket::Error"
QT_MOC_LITERAL(8, 89, 9), // "hostFound"
QT_MOC_LITERAL(9, 99, 27), // "proxyAuthenticationRequired"
QT_MOC_LITERAL(10, 127, 13), // "QNetworkProxy"
QT_MOC_LITERAL(11, 141, 5), // "proxy"
QT_MOC_LITERAL(12, 147, 15), // "QAuthenticator*"
QT_MOC_LITERAL(13, 163, 13), // "authenticator"
QT_MOC_LITERAL(14, 177, 12), // "stateChanged"
QT_MOC_LITERAL(15, 190, 17), // "KTcpSocket::State"
QT_MOC_LITERAL(16, 208, 9), // "encrypted"
QT_MOC_LITERAL(17, 218, 21), // "encryptionModeChanged"
QT_MOC_LITERAL(18, 240, 14), // "EncryptionMode"
QT_MOC_LITERAL(19, 255, 9), // "sslErrors"
QT_MOC_LITERAL(20, 265, 16), // "QList<KSslError>"
QT_MOC_LITERAL(21, 282, 6), // "errors"
QT_MOC_LITERAL(22, 289, 15), // "ignoreSslErrors"
QT_MOC_LITERAL(23, 305, 21), // "startClientEncryption"
QT_MOC_LITERAL(24, 327, 15), // "reemitReadyRead"
QT_MOC_LITERAL(25, 343, 17), // "reemitSocketError"
QT_MOC_LITERAL(26, 361, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(27, 390, 15), // "reemitSslErrors"
QT_MOC_LITERAL(28, 406, 16), // "QList<QSslError>"
QT_MOC_LITERAL(29, 423, 18), // "reemitStateChanged"
QT_MOC_LITERAL(30, 442, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(31, 471, 17), // "reemitModeChanged"
QT_MOC_LITERAL(32, 489, 19) // "QSslSocket::SslMode"

    },
    "KTcpSocket\0encryptedBytesWritten\0\0"
    "written\0connected\0disconnected\0error\0"
    "KTcpSocket::Error\0hostFound\0"
    "proxyAuthenticationRequired\0QNetworkProxy\0"
    "proxy\0QAuthenticator*\0authenticator\0"
    "stateChanged\0KTcpSocket::State\0encrypted\0"
    "encryptionModeChanged\0EncryptionMode\0"
    "sslErrors\0QList<KSslError>\0errors\0"
    "ignoreSslErrors\0startClientEncryption\0"
    "reemitReadyRead\0reemitSocketError\0"
    "QAbstractSocket::SocketError\0"
    "reemitSslErrors\0QList<QSslError>\0"
    "reemitStateChanged\0QAbstractSocket::SocketState\0"
    "reemitModeChanged\0QSslSocket::SslMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KTcpSocket[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    0,  102,    2, 0x06 /* Public */,
       5,    0,  103,    2, 0x06 /* Public */,
       6,    1,  104,    2, 0x06 /* Public */,
       8,    0,  107,    2, 0x06 /* Public */,
       9,    2,  108,    2, 0x06 /* Public */,
      14,    1,  113,    2, 0x06 /* Public */,
      16,    0,  116,    2, 0x06 /* Public */,
      17,    1,  117,    2, 0x06 /* Public */,
      19,    1,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  123,    2, 0x0a /* Public */,
      23,    0,  124,    2, 0x0a /* Public */,
      24,    0,  125,    2, 0x08 /* Private */,
      25,    1,  126,    2, 0x08 /* Private */,
      27,    1,  129,    2, 0x08 /* Private */,
      29,    1,  132,    2, 0x08 /* Private */,
      31,    1,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, 0x80000000 | 20,   21,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 30,    2,
    QMetaType::Void, 0x80000000 | 32,    2,

       0        // eod
};

void KTcpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KTcpSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->encryptedBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->error((*reinterpret_cast< KTcpSocket::Error(*)>(_a[1]))); break;
        case 4: _t->hostFound(); break;
        case 5: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 6: _t->stateChanged((*reinterpret_cast< KTcpSocket::State(*)>(_a[1]))); break;
        case 7: _t->encrypted(); break;
        case 8: _t->encryptionModeChanged((*reinterpret_cast< EncryptionMode(*)>(_a[1]))); break;
        case 9: _t->sslErrors((*reinterpret_cast< const QList<KSslError>(*)>(_a[1]))); break;
        case 10: _t->ignoreSslErrors(); break;
        case 11: _t->startClientEncryption(); break;
        case 12: _t->d->reemitReadyRead(); break;
        case 13: _t->d->reemitSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 14: _t->d->reemitSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 15: _t->d->reemitStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 16: _t->d->reemitModeChanged((*reinterpret_cast< QSslSocket::SslMode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KTcpSocket::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTcpSocket::encryptedBytesWritten)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KTcpSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTcpSocket::connected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KTcpSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTcpSocket::disconnected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KTcpSocket::*)(KTcpSocket::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTcpSocket::error)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KTcpSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTcpSocket::hostFound)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KTcpSocket::*)(const QNetworkProxy & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTcpSocket::proxyAuthenticationRequired)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KTcpSocket::*)(KTcpSocket::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTcpSocket::stateChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (KTcpSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTcpSocket::encrypted)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (KTcpSocket::*)(EncryptionMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTcpSocket::encryptionModeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (KTcpSocket::*)(const QList<KSslError> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTcpSocket::sslErrors)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KTcpSocket::staticMetaObject = { {
    QMetaObject::SuperData::link<QIODevice::staticMetaObject>(),
    qt_meta_stringdata_KTcpSocket.data,
    qt_meta_data_KTcpSocket,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KTcpSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KTcpSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KTcpSocket.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int KTcpSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void KTcpSocket::encryptedBytesWritten(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KTcpSocket::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KTcpSocket::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KTcpSocket::error(KTcpSocket::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KTcpSocket::hostFound()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KTcpSocket::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KTcpSocket::stateChanged(KTcpSocket::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void KTcpSocket::encrypted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KTcpSocket::encryptionModeChanged(EncryptionMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void KTcpSocket::sslErrors(const QList<KSslError> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
