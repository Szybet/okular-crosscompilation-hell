/****************************************************************************
** Meta object code from reading C++ file 'kssld_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/core/kssld_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kssld_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrgKdeKSSLDInterface_t {
    QByteArrayData data[11];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrgKdeKSSLDInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrgKdeKSSLDInterface_t qt_meta_stringdata_OrgKdeKSSLDInterface = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OrgKdeKSSLDInterface"
QT_MOC_LITERAL(1, 21, 7), // "setRule"
QT_MOC_LITERAL(2, 29, 9), // "Q_NOREPLY"
QT_MOC_LITERAL(3, 39, 19), // "KSslCertificateRule"
QT_MOC_LITERAL(4, 59, 4), // "rule"
QT_MOC_LITERAL(5, 64, 9), // "clearRule"
QT_MOC_LITERAL(6, 74, 15), // "QSslCertificate"
QT_MOC_LITERAL(7, 90, 4), // "cert"
QT_MOC_LITERAL(8, 95, 8), // "hostName"
QT_MOC_LITERAL(9, 104, 31), // "QDBusReply<KSslCertificateRule>"
QT_MOC_LITERAL(10, 136, 0) // ""

    },
    "OrgKdeKSSLDInterface\0setRule\0Q_NOREPLY\0"
    "KSslCertificateRule\0rule\0clearRule\0"
    "QSslCertificate\0cert\0hostName\0"
    "QDBusReply<KSslCertificateRule>\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrgKdeKSSLDInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,
       5,    2,   40,    2, 0x0a /* Public */,
       4,    2,   45,   10, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    8,
    0x80000000 | 9, 0x80000000 | 6, QMetaType::QString,    7,    8,

       0        // eod
};

void OrgKdeKSSLDInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OrgKdeKSSLDInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setRule((*reinterpret_cast< const KSslCertificateRule(*)>(_a[1]))); break;
        case 1: _t->clearRule((*reinterpret_cast< const KSslCertificateRule(*)>(_a[1]))); break;
        case 2: _t->clearRule((*reinterpret_cast< const QSslCertificate(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: { QDBusReply<KSslCertificateRule> _r = _t->rule((*reinterpret_cast< const QSslCertificate(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusReply<KSslCertificateRule>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KSslCertificateRule >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KSslCertificateRule >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OrgKdeKSSLDInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_OrgKdeKSSLDInterface.data,
    qt_meta_data_OrgKdeKSSLDInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OrgKdeKSSLDInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKdeKSSLDInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrgKdeKSSLDInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKdeKSSLDInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
