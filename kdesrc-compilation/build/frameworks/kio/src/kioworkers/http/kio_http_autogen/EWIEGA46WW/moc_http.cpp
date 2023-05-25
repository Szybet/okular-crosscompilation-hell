/****************************************************************************
** Meta object code from reading C++ file 'http.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../frameworks/kio/src/kioworkers/http/http.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'http.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HTTPProtocol_t {
    QByteArrayData data[12];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HTTPProtocol_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HTTPProtocol_t qt_meta_stringdata_HTTPProtocol = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HTTPProtocol"
QT_MOC_LITERAL(1, 13, 8), // "slotData"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 15), // "slotFilterError"
QT_MOC_LITERAL(4, 39, 17), // "KIO::WorkerResult"
QT_MOC_LITERAL(5, 57, 4), // "text"
QT_MOC_LITERAL(6, 62, 5), // "error"
QT_MOC_LITERAL(7, 68, 5), // "errid"
QT_MOC_LITERAL(8, 74, 28), // "proxyAuthenticationForSocket"
QT_MOC_LITERAL(9, 103, 13), // "QNetworkProxy"
QT_MOC_LITERAL(10, 117, 15), // "QAuthenticator*"
QT_MOC_LITERAL(11, 133, 32) // "saveProxyAuthenticationForSocket"

    },
    "HTTPProtocol\0slotData\0\0slotFilterError\0"
    "KIO::WorkerResult\0text\0error\0errid\0"
    "proxyAuthenticationForSocket\0QNetworkProxy\0"
    "QAuthenticator*\0saveProxyAuthenticationForSocket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HTTPProtocol[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x09 /* Protected */,
       3,    1,   42,    2, 0x09 /* Protected */,
       6,    2,   45,    2, 0x09 /* Protected */,
       8,    2,   50,    2, 0x09 /* Protected */,
      11,    0,   55,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    0x80000000 | 4, QMetaType::QString,    5,
    0x80000000 | 4, QMetaType::Int, QMetaType::QString,    7,    5,
    0x80000000 | 4, 0x80000000 | 9, 0x80000000 | 10,    2,    2,
    QMetaType::Void,

       0        // eod
};

void HTTPProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HTTPProtocol *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: { KIO::WorkerResult _r = _t->slotFilterError((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< KIO::WorkerResult*>(_a[0]) = std::move(_r); }  break;
        case 2: { KIO::WorkerResult _r = _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< KIO::WorkerResult*>(_a[0]) = std::move(_r); }  break;
        case 3: { KIO::WorkerResult _r = _t->proxyAuthenticationForSocket((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< KIO::WorkerResult*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->saveProxyAuthenticationForSocket(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HTTPProtocol::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_HTTPProtocol.data,
    qt_meta_data_HTTPProtocol,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HTTPProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HTTPProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HTTPProtocol.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KIO::TCPWorkerBase"))
        return static_cast< KIO::TCPWorkerBase*>(this);
    return QObject::qt_metacast(_clname);
}

int HTTPProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
