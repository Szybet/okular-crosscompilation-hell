/****************************************************************************
** Meta object code from reading C++ file 'kpasswdserverloop_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/core/kpasswdserverloop_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kpasswdserverloop_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KPasswdServerLoop_t {
    QByteArrayData data[8];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KPasswdServerLoop_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KPasswdServerLoop_t qt_meta_stringdata_KPasswdServerLoop = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KPasswdServerLoop"
QT_MOC_LITERAL(1, 18, 15), // "slotQueryResult"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "requestId"
QT_MOC_LITERAL(4, 45, 5), // "seqNr"
QT_MOC_LITERAL(5, 51, 13), // "KIO::AuthInfo"
QT_MOC_LITERAL(6, 65, 8), // "authInfo"
QT_MOC_LITERAL(7, 74, 23) // "kdedServiceUnregistered"

    },
    "KPasswdServerLoop\0slotQueryResult\0\0"
    "requestId\0seqNr\0KIO::AuthInfo\0authInfo\0"
    "kdedServiceUnregistered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KPasswdServerLoop[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x0a /* Public */,
       7,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void,

       0        // eod
};

void KPasswdServerLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KPasswdServerLoop *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotQueryResult((*reinterpret_cast< qlonglong(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2])),(*reinterpret_cast< const KIO::AuthInfo(*)>(_a[3]))); break;
        case 1: _t->kdedServiceUnregistered(); break;
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
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KPasswdServerLoop::staticMetaObject = { {
    QMetaObject::SuperData::link<QEventLoop::staticMetaObject>(),
    qt_meta_stringdata_KPasswdServerLoop.data,
    qt_meta_data_KPasswdServerLoop,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KPasswdServerLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KPasswdServerLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KPasswdServerLoop.stringdata0))
        return static_cast<void*>(this);
    return QEventLoop::qt_metacast(_clname);
}

int KPasswdServerLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEventLoop::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
