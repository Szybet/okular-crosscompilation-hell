/****************************************************************************
** Meta object code from reading C++ file 'kssld_adaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/kssld/kssld_adaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kssld_adaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KSSLDAdaptor_t {
    QByteArrayData data[13];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KSSLDAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KSSLDAdaptor_t qt_meta_stringdata_KSSLDAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KSSLDAdaptor"
QT_MOC_LITERAL(1, 13, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 29, 13), // "org.kde.KSSLD"
QT_MOC_LITERAL(3, 43, 7), // "setRule"
QT_MOC_LITERAL(4, 51, 9), // "Q_NOREPLY"
QT_MOC_LITERAL(5, 61, 19), // "KSslCertificateRule"
QT_MOC_LITERAL(6, 81, 4), // "rule"
QT_MOC_LITERAL(7, 86, 15), // "clearRule__rule"
QT_MOC_LITERAL(8, 102, 19), // "clearRule__certHost"
QT_MOC_LITERAL(9, 122, 15), // "QSslCertificate"
QT_MOC_LITERAL(10, 138, 4), // "cert"
QT_MOC_LITERAL(11, 143, 8), // "hostName"
QT_MOC_LITERAL(12, 152, 0) // ""

    },
    "KSSLDAdaptor\0D-Bus Interface\0org.kde.KSSLD\0"
    "setRule\0Q_NOREPLY\0KSslCertificateRule\0"
    "rule\0clearRule__rule\0clearRule__certHost\0"
    "QSslCertificate\0cert\0hostName\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KSSLDAdaptor[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    1,   36,    4, 0x0a /* Public */,
       7,    1,   39,    4, 0x0a /* Public */,
       8,    2,   42,    4, 0x0a /* Public */,
       6,    2,   47,   12, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,   11,
    0x80000000 | 5, 0x80000000 | 9, QMetaType::QString,   10,   11,

       0        // eod
};

void KSSLDAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KSSLDAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setRule((*reinterpret_cast< const KSslCertificateRule(*)>(_a[1]))); break;
        case 1: _t->clearRule__rule((*reinterpret_cast< const KSslCertificateRule(*)>(_a[1]))); break;
        case 2: _t->clearRule__certHost((*reinterpret_cast< const QSslCertificate(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: { KSslCertificateRule _r = _t->rule((*reinterpret_cast< const QSslCertificate(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< KSslCertificateRule*>(_a[0]) = std::move(_r); }  break;
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

QT_INIT_METAOBJECT const QMetaObject KSSLDAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_KSSLDAdaptor.data,
    qt_meta_data_KSSLDAdaptor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KSSLDAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KSSLDAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KSSLDAdaptor.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int KSSLDAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
