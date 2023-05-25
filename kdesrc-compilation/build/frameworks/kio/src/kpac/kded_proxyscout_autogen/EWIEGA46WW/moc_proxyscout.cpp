/****************************************************************************
** Meta object code from reading C++ file 'proxyscout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/kpac/proxyscout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'proxyscout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KPAC__ProxyScout_t {
    QByteArrayData data[17];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KPAC__ProxyScout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KPAC__ProxyScout_t qt_meta_stringdata_KPAC__ProxyScout = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KPAC::ProxyScout"
QT_MOC_LITERAL(1, 17, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 33, 23), // "org.kde.KPAC.ProxyScout"
QT_MOC_LITERAL(3, 57, 11), // "proxyForUrl"
QT_MOC_LITERAL(4, 69, 0), // ""
QT_MOC_LITERAL(5, 70, 8), // "checkUrl"
QT_MOC_LITERAL(6, 79, 12), // "QDBusMessage"
QT_MOC_LITERAL(7, 92, 13), // "proxiesForUrl"
QT_MOC_LITERAL(8, 106, 14), // "blackListProxy"
QT_MOC_LITERAL(9, 121, 9), // "Q_NOREPLY"
QT_MOC_LITERAL(10, 131, 5), // "proxy"
QT_MOC_LITERAL(11, 137, 5), // "reset"
QT_MOC_LITERAL(12, 143, 17), // "disconnectNetwork"
QT_MOC_LITERAL(13, 161, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(14, 183, 6), // "config"
QT_MOC_LITERAL(15, 190, 14), // "downloadResult"
QT_MOC_LITERAL(16, 205, 22) // "proxyScriptFileChanged"

    },
    "KPAC::ProxyScout\0D-Bus Interface\0"
    "org.kde.KPAC.ProxyScout\0proxyForUrl\0"
    "\0checkUrl\0QDBusMessage\0proxiesForUrl\0"
    "blackListProxy\0Q_NOREPLY\0proxy\0reset\0"
    "disconnectNetwork\0QNetworkConfiguration\0"
    "config\0downloadResult\0proxyScriptFileChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KPAC__ProxyScout[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       7,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    2,   51,    4, 0x4a /* Public | isScriptable */,
       7,    2,   56,    4, 0x4a /* Public | isScriptable */,
       8,    1,   61,    9, 0x4a /* Public | isScriptable */,
      11,    0,   64,    9, 0x4a /* Public | isScriptable */,
      12,    1,   65,    4, 0x08 /* Private */,
      15,    1,   68,    4, 0x08 /* Private */,
      16,    1,   71,    4, 0x08 /* Private */,

 // slots: parameters
    QMetaType::QString, QMetaType::QString, 0x80000000 | 6,    5,    4,
    QMetaType::QStringList, QMetaType::QString, 0x80000000 | 6,    5,    4,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void KPAC::ProxyScout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProxyScout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->proxyForUrl((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QStringList _r = _t->proxiesForUrl((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->blackListProxy((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->reset(); break;
        case 4: _t->disconnectNetwork((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 5: _t->downloadResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->proxyScriptFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KPAC::ProxyScout::staticMetaObject = { {
    QMetaObject::SuperData::link<KDEDModule::staticMetaObject>(),
    qt_meta_stringdata_KPAC__ProxyScout.data,
    qt_meta_data_KPAC__ProxyScout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KPAC::ProxyScout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KPAC::ProxyScout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KPAC__ProxyScout.stringdata0))
        return static_cast<void*>(this);
    return KDEDModule::qt_metacast(_clname);
}

int KPAC::ProxyScout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDEDModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
