/****************************************************************************
** Meta object code from reading C++ file 'kaboutdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/lib/kaboutdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kaboutdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KAboutPerson_t {
    QByteArrayData data[6];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KAboutPerson_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KAboutPerson_t qt_meta_stringdata_KAboutPerson = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KAboutPerson"
QT_MOC_LITERAL(1, 13, 4), // "name"
QT_MOC_LITERAL(2, 18, 4), // "task"
QT_MOC_LITERAL(3, 23, 12), // "emailAddress"
QT_MOC_LITERAL(4, 36, 10), // "webAddress"
QT_MOC_LITERAL(5, 47, 11) // "ocsUsername"

    },
    "KAboutPerson\0name\0task\0emailAddress\0"
    "webAddress\0ocsUsername"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KAboutPerson[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::QString, 0x00095401,

       0        // eod
};

void KAboutPerson::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<KAboutPerson *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->task(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->emailAddress(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->webAddress(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->ocsUsername(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KAboutPerson::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_KAboutPerson.data,
    qt_meta_data_KAboutPerson,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_KAboutLicense_t {
    QByteArrayData data[27];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KAboutLicense_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KAboutLicense_t qt_meta_stringdata_KAboutLicense = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KAboutLicense"
QT_MOC_LITERAL(1, 14, 4), // "name"
QT_MOC_LITERAL(2, 19, 4), // "text"
QT_MOC_LITERAL(3, 24, 3), // "key"
QT_MOC_LITERAL(4, 28, 25), // "KAboutLicense::LicenseKey"
QT_MOC_LITERAL(5, 54, 4), // "spdx"
QT_MOC_LITERAL(6, 59, 10), // "LicenseKey"
QT_MOC_LITERAL(7, 70, 6), // "Custom"
QT_MOC_LITERAL(8, 77, 4), // "File"
QT_MOC_LITERAL(9, 82, 7), // "Unknown"
QT_MOC_LITERAL(10, 90, 3), // "GPL"
QT_MOC_LITERAL(11, 94, 6), // "GPL_V2"
QT_MOC_LITERAL(12, 101, 4), // "LGPL"
QT_MOC_LITERAL(13, 106, 7), // "LGPL_V2"
QT_MOC_LITERAL(14, 114, 4), // "BSDL"
QT_MOC_LITERAL(15, 119, 8), // "Artistic"
QT_MOC_LITERAL(16, 128, 3), // "QPL"
QT_MOC_LITERAL(17, 132, 8), // "QPL_V1_0"
QT_MOC_LITERAL(18, 141, 6), // "GPL_V3"
QT_MOC_LITERAL(19, 148, 7), // "LGPL_V3"
QT_MOC_LITERAL(20, 156, 9), // "LGPL_V2_1"
QT_MOC_LITERAL(21, 166, 10), // "NameFormat"
QT_MOC_LITERAL(22, 177, 9), // "ShortName"
QT_MOC_LITERAL(23, 187, 8), // "FullName"
QT_MOC_LITERAL(24, 196, 18), // "VersionRestriction"
QT_MOC_LITERAL(25, 215, 15), // "OnlyThisVersion"
QT_MOC_LITERAL(26, 231, 15) // "OrLaterVersions"

    },
    "KAboutLicense\0name\0text\0key\0"
    "KAboutLicense::LicenseKey\0spdx\0"
    "LicenseKey\0Custom\0File\0Unknown\0GPL\0"
    "GPL_V2\0LGPL\0LGPL_V2\0BSDL\0Artistic\0QPL\0"
    "QPL_V1_0\0GPL_V3\0LGPL_V3\0LGPL_V2_1\0"
    "NameFormat\0ShortName\0FullName\0"
    "VersionRestriction\0OnlyThisVersion\0"
    "OrLaterVersions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KAboutLicense[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       3,   26, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, 0x80000000 | 4, 0x00095409,
       5, QMetaType::QString, 0x00095401,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,   14,   41,
      21,   21, 0x0,    2,   69,
      24,   24, 0x0,    2,   73,

 // enum data: key, value
       7, uint(KAboutLicense::Custom),
       8, uint(KAboutLicense::File),
       9, uint(KAboutLicense::Unknown),
      10, uint(KAboutLicense::GPL),
      11, uint(KAboutLicense::GPL_V2),
      12, uint(KAboutLicense::LGPL),
      13, uint(KAboutLicense::LGPL_V2),
      14, uint(KAboutLicense::BSDL),
      15, uint(KAboutLicense::Artistic),
      16, uint(KAboutLicense::QPL),
      17, uint(KAboutLicense::QPL_V1_0),
      18, uint(KAboutLicense::GPL_V3),
      19, uint(KAboutLicense::LGPL_V3),
      20, uint(KAboutLicense::LGPL_V2_1),
      22, uint(KAboutLicense::ShortName),
      23, uint(KAboutLicense::FullName),
      25, uint(KAboutLicense::OnlyThisVersion),
      26, uint(KAboutLicense::OrLaterVersions),

       0        // eod
};

void KAboutLicense::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<KAboutLicense *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 2: *reinterpret_cast< KAboutLicense::LicenseKey*>(_v) = _t->key(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->spdx(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KAboutLicense::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_KAboutLicense.data,
    qt_meta_data_KAboutLicense,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_KAboutComponent_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KAboutComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KAboutComponent_t qt_meta_stringdata_KAboutComponent = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KAboutComponent"
QT_MOC_LITERAL(1, 16, 4), // "name"
QT_MOC_LITERAL(2, 21, 11), // "description"
QT_MOC_LITERAL(3, 33, 10), // "webAddress"
QT_MOC_LITERAL(4, 44, 8), // "licenses"
QT_MOC_LITERAL(5, 53, 13), // "KAboutLicense"
QT_MOC_LITERAL(6, 67, 7) // "version"

    },
    "KAboutComponent\0name\0description\0"
    "webAddress\0licenses\0KAboutLicense\0"
    "version"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KAboutComponent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, 0x80000000 | 5, 0x00095409,
       6, QMetaType::QString, 0x00095401,

       0        // eod
};

void KAboutComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KAboutLicense >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<KAboutComponent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->webAddress(); break;
        case 3: *reinterpret_cast< KAboutLicense*>(_v) = _t->license(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->version(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject KAboutComponent::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_KAboutComponent.data,
    qt_meta_data_KAboutComponent,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_KAboutData_t {
    QByteArrayData data[17];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KAboutData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KAboutData_t qt_meta_stringdata_KAboutData = {
    {
QT_MOC_LITERAL(0, 0, 10), // "KAboutData"
QT_MOC_LITERAL(1, 11, 11), // "displayName"
QT_MOC_LITERAL(2, 23, 11), // "productName"
QT_MOC_LITERAL(3, 35, 13), // "componentName"
QT_MOC_LITERAL(4, 49, 11), // "programLogo"
QT_MOC_LITERAL(5, 61, 16), // "shortDescription"
QT_MOC_LITERAL(6, 78, 8), // "homepage"
QT_MOC_LITERAL(7, 87, 10), // "bugAddress"
QT_MOC_LITERAL(8, 98, 7), // "version"
QT_MOC_LITERAL(9, 106, 9), // "otherText"
QT_MOC_LITERAL(10, 116, 7), // "authors"
QT_MOC_LITERAL(11, 124, 7), // "credits"
QT_MOC_LITERAL(12, 132, 11), // "translators"
QT_MOC_LITERAL(13, 144, 10), // "components"
QT_MOC_LITERAL(14, 155, 8), // "licenses"
QT_MOC_LITERAL(15, 164, 18), // "copyrightStatement"
QT_MOC_LITERAL(16, 183, 15) // "desktopFileName"

    },
    "KAboutData\0displayName\0productName\0"
    "componentName\0programLogo\0shortDescription\0"
    "homepage\0bugAddress\0version\0otherText\0"
    "authors\0credits\0translators\0components\0"
    "licenses\0copyrightStatement\0desktopFileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KAboutData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      16,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QVariant, 0x00095401,
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::QString, 0x00095401,
       7, QMetaType::QString, 0x00095401,
       8, QMetaType::QString, 0x00095401,
       9, QMetaType::QString, 0x00095401,
      10, QMetaType::QVariantList, 0x00095401,
      11, QMetaType::QVariantList, 0x00095401,
      12, QMetaType::QVariantList, 0x00095401,
      13, QMetaType::QVariantList, 0x00095401,
      14, QMetaType::QVariantList, 0x00095401,
      15, QMetaType::QString, 0x00095401,
      16, QMetaType::QString, 0x00095401,

       0        // eod
};

void KAboutData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<KAboutData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->displayName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->productName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->componentName(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = _t->programLogo(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->shortDescription(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->homepage(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->bugAddress(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->version(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->otherText(); break;
        case 9: *reinterpret_cast< QVariantList*>(_v) = _t->authorsVariant(); break;
        case 10: *reinterpret_cast< QVariantList*>(_v) = _t->creditsVariant(); break;
        case 11: *reinterpret_cast< QVariantList*>(_v) = _t->translatorsVariant(); break;
        case 12: *reinterpret_cast< QVariantList*>(_v) = _t->componentsVariant(); break;
        case 13: *reinterpret_cast< QVariantList*>(_v) = _t->licensesVariant(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->copyrightStatement(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->desktopFileName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KAboutData::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_KAboutData.data,
    qt_meta_data_KAboutData,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
