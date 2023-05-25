/****************************************************************************
** Meta object code from reading C++ file 'certificatemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/gui/certificatemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'certificatemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CertificateModel_t {
    QByteArrayData data[24];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CertificateModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CertificateModel_t qt_meta_stringdata_CertificateModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CertificateModel"
QT_MOC_LITERAL(1, 17, 20), // "propertyVisibleValue"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 26), // "CertificateModel::Property"
QT_MOC_LITERAL(4, 66, 1), // "p"
QT_MOC_LITERAL(5, 68, 19), // "exportCertificateTo"
QT_MOC_LITERAL(6, 88, 4), // "path"
QT_MOC_LITERAL(7, 93, 8), // "Property"
QT_MOC_LITERAL(8, 102, 7), // "Version"
QT_MOC_LITERAL(9, 110, 12), // "SerialNumber"
QT_MOC_LITERAL(10, 123, 6), // "Issuer"
QT_MOC_LITERAL(11, 130, 8), // "IssuedOn"
QT_MOC_LITERAL(12, 139, 9), // "ExpiresOn"
QT_MOC_LITERAL(13, 149, 7), // "Subject"
QT_MOC_LITERAL(14, 157, 9), // "PublicKey"
QT_MOC_LITERAL(15, 167, 8), // "KeyUsage"
QT_MOC_LITERAL(16, 176, 10), // "IssuerName"
QT_MOC_LITERAL(17, 187, 11), // "IssuerEmail"
QT_MOC_LITERAL(18, 199, 18), // "IssuerOrganization"
QT_MOC_LITERAL(19, 218, 11), // "SubjectName"
QT_MOC_LITERAL(20, 230, 12), // "SubjectEmail"
QT_MOC_LITERAL(21, 243, 19), // "SubjectOrganization"
QT_MOC_LITERAL(22, 263, 4), // "Sha1"
QT_MOC_LITERAL(23, 268, 6) // "Sha256"

    },
    "CertificateModel\0propertyVisibleValue\0"
    "\0CertificateModel::Property\0p\0"
    "exportCertificateTo\0path\0Property\0"
    "Version\0SerialNumber\0Issuer\0IssuedOn\0"
    "ExpiresOn\0Subject\0PublicKey\0KeyUsage\0"
    "IssuerName\0IssuerEmail\0IssuerOrganization\0"
    "SubjectName\0SubjectEmail\0SubjectOrganization\0"
    "Sha1\0Sha256"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CertificateModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   30, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x02 /* Public */,
       5,    1,   27,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, 0x80000000 | 3,    4,
    QMetaType::Bool, QMetaType::QString,    6,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,   16,   35,

 // enum data: key, value
       8, uint(CertificateModel::Version),
       9, uint(CertificateModel::SerialNumber),
      10, uint(CertificateModel::Issuer),
      11, uint(CertificateModel::IssuedOn),
      12, uint(CertificateModel::ExpiresOn),
      13, uint(CertificateModel::Subject),
      14, uint(CertificateModel::PublicKey),
      15, uint(CertificateModel::KeyUsage),
      16, uint(CertificateModel::IssuerName),
      17, uint(CertificateModel::IssuerEmail),
      18, uint(CertificateModel::IssuerOrganization),
      19, uint(CertificateModel::SubjectName),
      20, uint(CertificateModel::SubjectEmail),
      21, uint(CertificateModel::SubjectOrganization),
      22, uint(CertificateModel::Sha1),
      23, uint(CertificateModel::Sha256),

       0        // eod
};

void CertificateModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CertificateModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->propertyVisibleValue((*reinterpret_cast< CertificateModel::Property(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->exportCertificateTo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CertificateModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_CertificateModel.data,
    qt_meta_data_CertificateModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CertificateModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CertificateModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CertificateModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int CertificateModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
