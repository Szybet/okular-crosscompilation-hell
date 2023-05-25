/****************************************************************************
** Meta object code from reading C++ file 'kcookieserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../frameworks/kio/src/kioworkers/http/kcookiejar/kcookieserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcookieserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCookieServer_t {
    QByteArrayData data[31];
    char stringdata0[389];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCookieServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCookieServer_t qt_meta_stringdata_KCookieServer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KCookieServer"
QT_MOC_LITERAL(1, 14, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 30, 21), // "org.kde.KCookieServer"
QT_MOC_LITERAL(3, 52, 11), // "listCookies"
QT_MOC_LITERAL(4, 64, 0), // ""
QT_MOC_LITERAL(5, 65, 3), // "url"
QT_MOC_LITERAL(6, 69, 11), // "findCookies"
QT_MOC_LITERAL(7, 81, 8), // "windowId"
QT_MOC_LITERAL(8, 90, 11), // "findDomains"
QT_MOC_LITERAL(9, 102, 10), // "QList<int>"
QT_MOC_LITERAL(10, 113, 6), // "fields"
QT_MOC_LITERAL(11, 120, 6), // "domain"
QT_MOC_LITERAL(12, 127, 4), // "fqdn"
QT_MOC_LITERAL(13, 132, 4), // "path"
QT_MOC_LITERAL(14, 137, 4), // "name"
QT_MOC_LITERAL(15, 142, 14), // "findDOMCookies"
QT_MOC_LITERAL(16, 157, 10), // "addCookies"
QT_MOC_LITERAL(17, 168, 12), // "cookieHeader"
QT_MOC_LITERAL(18, 181, 12), // "deleteCookie"
QT_MOC_LITERAL(19, 194, 23), // "deleteCookiesFromDomain"
QT_MOC_LITERAL(20, 218, 20), // "deleteSessionCookies"
QT_MOC_LITERAL(21, 239, 23), // "deleteSessionCookiesFor"
QT_MOC_LITERAL(22, 263, 16), // "deleteAllCookies"
QT_MOC_LITERAL(23, 280, 13), // "addDOMCookies"
QT_MOC_LITERAL(24, 294, 15), // "setDomainAdvice"
QT_MOC_LITERAL(25, 310, 6), // "advice"
QT_MOC_LITERAL(26, 317, 15), // "getDomainAdvice"
QT_MOC_LITERAL(27, 333, 12), // "reloadPolicy"
QT_MOC_LITERAL(28, 346, 8), // "shutdown"
QT_MOC_LITERAL(29, 355, 8), // "slotSave"
QT_MOC_LITERAL(30, 364, 24) // "slotDeleteSessionCookies"

    },
    "KCookieServer\0D-Bus Interface\0"
    "org.kde.KCookieServer\0listCookies\0\0"
    "url\0findCookies\0windowId\0findDomains\0"
    "QList<int>\0fields\0domain\0fqdn\0path\0"
    "name\0findDOMCookies\0addCookies\0"
    "cookieHeader\0deleteCookie\0"
    "deleteCookiesFromDomain\0deleteSessionCookies\0"
    "deleteSessionCookiesFor\0deleteAllCookies\0"
    "addDOMCookies\0setDomainAdvice\0advice\0"
    "getDomainAdvice\0reloadPolicy\0shutdown\0"
    "slotSave\0slotDeleteSessionCookies"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCookieServer[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      19,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    1,  111,    4, 0x0a /* Public */,
       6,    2,  114,    4, 0x0a /* Public */,
       8,    0,  119,    4, 0x0a /* Public */,
       6,    5,  120,    4, 0x0a /* Public */,
      15,    1,  131,    4, 0x0a /* Public */,
      15,    2,  134,    4, 0x0a /* Public */,
      16,    3,  139,    4, 0x0a /* Public */,
      18,    4,  146,    4, 0x0a /* Public */,
      19,    1,  155,    4, 0x0a /* Public */,
      20,    1,  158,    4, 0x0a /* Public */,
      21,    2,  161,    4, 0x0a /* Public */,
      22,    0,  166,    4, 0x0a /* Public */,
      23,    3,  167,    4, 0x0a /* Public */,
      24,    2,  174,    4, 0x0a /* Public */,
      26,    1,  179,    4, 0x0a /* Public */,
      27,    0,  182,    4, 0x0a /* Public */,
      28,    0,  183,    4, 0x0a /* Public */,
      29,    0,  184,    4, 0x08 /* Private */,
      30,    1,  185,    4, 0x08 /* Private */,

 // slots: parameters
    QMetaType::QString, QMetaType::QString,    5,
    QMetaType::QString, QMetaType::QString, QMetaType::LongLong,    5,    7,
    QMetaType::QStringList,
    QMetaType::QStringList, 0x80000000 | 9, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   10,   11,   12,   13,   14,
    QMetaType::QString, QMetaType::QString,    5,
    QMetaType::QString, QMetaType::QString, QMetaType::LongLong,    5,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, QMetaType::LongLong,    5,   17,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong,   12,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, QMetaType::LongLong,    5,   17,    7,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    5,   25,
    QMetaType::QString, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    7,

       0        // eod
};

void KCookieServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KCookieServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->listCookies((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->findCookies((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QStringList _r = _t->findDomains();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 3: { QStringList _r = _t->findCookies((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->findDOMCookies((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->findDOMCookies((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->addCookies((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< qlonglong(*)>(_a[3]))); break;
        case 7: _t->deleteCookie((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 8: _t->deleteCookiesFromDomain((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->deleteSessionCookies((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 10: _t->deleteSessionCookiesFor((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2]))); break;
        case 11: _t->deleteAllCookies(); break;
        case 12: _t->addDOMCookies((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< qlonglong(*)>(_a[3]))); break;
        case 13: { bool _r = _t->setDomainAdvice((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->getDomainAdvice((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->reloadPolicy(); break;
        case 16: _t->shutdown(); break;
        case 17: _t->slotSave(); break;
        case 18: _t->slotDeleteSessionCookies((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KCookieServer::staticMetaObject = { {
    QMetaObject::SuperData::link<KDEDModule::staticMetaObject>(),
    qt_meta_stringdata_KCookieServer.data,
    qt_meta_data_KCookieServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCookieServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCookieServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCookieServer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return KDEDModule::qt_metacast(_clname);
}

int KCookieServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDEDModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
