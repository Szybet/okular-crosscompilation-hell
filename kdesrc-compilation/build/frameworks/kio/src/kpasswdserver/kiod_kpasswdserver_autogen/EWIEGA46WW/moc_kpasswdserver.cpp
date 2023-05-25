/****************************************************************************
** Meta object code from reading C++ file 'kpasswdserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/kpasswdserver/kpasswdserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kpasswdserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KPasswdServer_t {
    QByteArrayData data[27];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KPasswdServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KPasswdServer_t qt_meta_stringdata_KPasswdServer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KPasswdServer"
QT_MOC_LITERAL(1, 14, 24), // "checkAuthInfoAsyncResult"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 9), // "requestId"
QT_MOC_LITERAL(4, 50, 5), // "seqNr"
QT_MOC_LITERAL(5, 56, 13), // "KIO::AuthInfo"
QT_MOC_LITERAL(6, 70, 24), // "queryAuthInfoAsyncResult"
QT_MOC_LITERAL(7, 95, 18), // "checkAuthInfoAsync"
QT_MOC_LITERAL(8, 114, 18), // "queryAuthInfoAsync"
QT_MOC_LITERAL(9, 133, 11), // "addAuthInfo"
QT_MOC_LITERAL(10, 145, 14), // "removeAuthInfo"
QT_MOC_LITERAL(11, 160, 4), // "host"
QT_MOC_LITERAL(12, 165, 8), // "protocol"
QT_MOC_LITERAL(13, 174, 4), // "user"
QT_MOC_LITERAL(14, 179, 13), // "checkAuthInfo"
QT_MOC_LITERAL(15, 193, 13), // "queryAuthInfo"
QT_MOC_LITERAL(16, 207, 14), // "processRequest"
QT_MOC_LITERAL(17, 222, 21), // "removeAuthForWindowId"
QT_MOC_LITERAL(18, 244, 8), // "windowId"
QT_MOC_LITERAL(19, 253, 18), // "passwordDialogDone"
QT_MOC_LITERAL(20, 272, 6), // "result"
QT_MOC_LITERAL(21, 279, 16), // "KPasswordDialog*"
QT_MOC_LITERAL(22, 296, 6), // "sender"
QT_MOC_LITERAL(23, 303, 15), // "retryDialogDone"
QT_MOC_LITERAL(24, 319, 15), // "KMessageDialog*"
QT_MOC_LITERAL(25, 335, 13), // "windowRemoved"
QT_MOC_LITERAL(26, 349, 3) // "WId"

    },
    "KPasswdServer\0checkAuthInfoAsyncResult\0"
    "\0requestId\0seqNr\0KIO::AuthInfo\0"
    "queryAuthInfoAsyncResult\0checkAuthInfoAsync\0"
    "queryAuthInfoAsync\0addAuthInfo\0"
    "removeAuthInfo\0host\0protocol\0user\0"
    "checkAuthInfo\0queryAuthInfo\0processRequest\0"
    "removeAuthForWindowId\0windowId\0"
    "passwordDialogDone\0result\0KPasswordDialog*\0"
    "sender\0retryDialogDone\0KMessageDialog*\0"
    "windowRemoved\0WId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KPasswdServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   84,    2, 0x06 /* Public */,
       6,    3,   91,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    3,   98,    2, 0x0a /* Public */,
       8,    5,  105,    2, 0x0a /* Public */,
       9,    2,  116,    2, 0x0a /* Public */,
      10,    3,  121,    2, 0x0a /* Public */,
      14,    3,  128,    2, 0x0a /* Public */,
      15,    5,  135,    2, 0x0a /* Public */,
       9,    2,  146,    2, 0x0a /* Public */,
      16,    0,  151,    2, 0x0a /* Public */,
      17,    1,  152,    2, 0x0a /* Public */,
      19,    2,  155,    2, 0x08 /* Private */,
      23,    2,  160,    2, 0x08 /* Private */,
      25,    1,  165,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong, 0x80000000 | 5,    3,    4,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong, 0x80000000 | 5,    3,    4,    2,

 // slots: parameters
    QMetaType::LongLong, 0x80000000 | 5, QMetaType::LongLong, QMetaType::LongLong,    2,    2,    2,
    QMetaType::LongLong, 0x80000000 | 5, QMetaType::QString, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::LongLong,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   12,   13,
    QMetaType::QByteArray, QMetaType::QByteArray, QMetaType::LongLong, QMetaType::LongLong,    2,    2,    2,
    QMetaType::QByteArray, QMetaType::QByteArray, QMetaType::QString, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   18,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 21,   20,   22,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 24,   20,   22,
    QMetaType::Void, 0x80000000 | 26,    2,

       0        // eod
};

void KPasswdServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KPasswdServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkAuthInfoAsyncResult((*reinterpret_cast< qlonglong(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2])),(*reinterpret_cast< const KIO::AuthInfo(*)>(_a[3]))); break;
        case 1: _t->queryAuthInfoAsyncResult((*reinterpret_cast< qlonglong(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2])),(*reinterpret_cast< const KIO::AuthInfo(*)>(_a[3]))); break;
        case 2: { qlonglong _r = _t->checkAuthInfoAsync((*reinterpret_cast< KIO::AuthInfo(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2])),(*reinterpret_cast< qlonglong(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qlonglong*>(_a[0]) = std::move(_r); }  break;
        case 3: { qlonglong _r = _t->queryAuthInfoAsync((*reinterpret_cast< const KIO::AuthInfo(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< qlonglong(*)>(_a[3])),(*reinterpret_cast< qlonglong(*)>(_a[4])),(*reinterpret_cast< qlonglong(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< qlonglong*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->addAuthInfo((*reinterpret_cast< const KIO::AuthInfo(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2]))); break;
        case 5: _t->removeAuthInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: { QByteArray _r = _t->checkAuthInfo((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2])),(*reinterpret_cast< qlonglong(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 7: { QByteArray _r = _t->queryAuthInfo((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< qlonglong(*)>(_a[3])),(*reinterpret_cast< qlonglong(*)>(_a[4])),(*reinterpret_cast< qlonglong(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->addAuthInfo((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2]))); break;
        case 9: _t->processRequest(); break;
        case 10: _t->removeAuthForWindowId((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 11: _t->passwordDialogDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< KPasswordDialog*(*)>(_a[2]))); break;
        case 12: _t->retryDialogDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< KMessageDialog*(*)>(_a[2]))); break;
        case 13: _t->windowRemoved((*reinterpret_cast< WId(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::AuthInfo >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::AuthInfo >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::AuthInfo >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::AuthInfo >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::AuthInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KPasswdServer::*)(qlonglong , qlonglong , const KIO::AuthInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPasswdServer::checkAuthInfoAsyncResult)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KPasswdServer::*)(qlonglong , qlonglong , const KIO::AuthInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPasswdServer::queryAuthInfoAsyncResult)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KPasswdServer::staticMetaObject = { {
    QMetaObject::SuperData::link<KDEDModule::staticMetaObject>(),
    qt_meta_stringdata_KPasswdServer.data,
    qt_meta_data_KPasswdServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KPasswdServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KPasswdServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KPasswdServer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return KDEDModule::qt_metacast(_clname);
}

int KPasswdServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDEDModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void KPasswdServer::checkAuthInfoAsyncResult(qlonglong _t1, qlonglong _t2, const KIO::AuthInfo & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KPasswdServer::queryAuthInfoAsyncResult(qlonglong _t1, qlonglong _t2, const KIO::AuthInfo & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
