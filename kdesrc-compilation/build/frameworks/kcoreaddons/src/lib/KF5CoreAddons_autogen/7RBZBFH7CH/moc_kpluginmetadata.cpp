/****************************************************************************
** Meta object code from reading C++ file 'kpluginmetadata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kcoreaddons/src/lib/plugin/kpluginmetadata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kpluginmetadata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KPluginMetaData_t {
    QByteArrayData data[27];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KPluginMetaData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KPluginMetaData_t qt_meta_stringdata_KPluginMetaData = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KPluginMetaData"
QT_MOC_LITERAL(1, 16, 7), // "isValid"
QT_MOC_LITERAL(2, 24, 8), // "isHidden"
QT_MOC_LITERAL(3, 33, 8), // "fileName"
QT_MOC_LITERAL(4, 42, 16), // "metaDataFileName"
QT_MOC_LITERAL(5, 59, 7), // "rawData"
QT_MOC_LITERAL(6, 67, 4), // "name"
QT_MOC_LITERAL(7, 72, 11), // "description"
QT_MOC_LITERAL(8, 84, 16), // "extraInformation"
QT_MOC_LITERAL(9, 101, 7), // "authors"
QT_MOC_LITERAL(10, 109, 11), // "translators"
QT_MOC_LITERAL(11, 121, 17), // "otherContributors"
QT_MOC_LITERAL(12, 139, 8), // "category"
QT_MOC_LITERAL(13, 148, 8), // "iconName"
QT_MOC_LITERAL(14, 157, 7), // "license"
QT_MOC_LITERAL(15, 165, 11), // "licenseText"
QT_MOC_LITERAL(16, 177, 13), // "copyrightText"
QT_MOC_LITERAL(17, 191, 8), // "pluginId"
QT_MOC_LITERAL(18, 200, 7), // "version"
QT_MOC_LITERAL(19, 208, 7), // "website"
QT_MOC_LITERAL(20, 216, 12), // "bugReportUrl"
QT_MOC_LITERAL(21, 229, 12), // "dependencies"
QT_MOC_LITERAL(22, 242, 12), // "serviceTypes"
QT_MOC_LITERAL(23, 255, 9), // "mimeTypes"
QT_MOC_LITERAL(24, 265, 11), // "formFactors"
QT_MOC_LITERAL(25, 277, 18), // "isEnabledByDefault"
QT_MOC_LITERAL(26, 296, 17) // "initialPreference"

    },
    "KPluginMetaData\0isValid\0isHidden\0"
    "fileName\0metaDataFileName\0rawData\0"
    "name\0description\0extraInformation\0"
    "authors\0translators\0otherContributors\0"
    "category\0iconName\0license\0licenseText\0"
    "copyrightText\0pluginId\0version\0website\0"
    "bugReportUrl\0dependencies\0serviceTypes\0"
    "mimeTypes\0formFactors\0isEnabledByDefault\0"
    "initialPreference"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KPluginMetaData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      26,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095401,
       2, QMetaType::Bool, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::QJsonObject, 0x00095401,
       6, QMetaType::QString, 0x00095401,
       7, QMetaType::QString, 0x00095401,
       8, QMetaType::QString, 0x00095401,
       9, QMetaType::QVariantList, 0x00095401,
      10, QMetaType::QVariantList, 0x00095401,
      11, QMetaType::QVariantList, 0x00095401,
      12, QMetaType::QString, 0x00095401,
      13, QMetaType::QString, 0x00095401,
      14, QMetaType::QString, 0x00095401,
      15, QMetaType::QString, 0x00095401,
      16, QMetaType::QString, 0x00095401,
      17, QMetaType::QString, 0x00095401,
      18, QMetaType::QString, 0x00095401,
      19, QMetaType::QString, 0x00095401,
      20, QMetaType::QString, 0x00095401,
      21, QMetaType::QStringList, 0x00095401,
      22, QMetaType::QStringList, 0x00095401,
      23, QMetaType::QStringList, 0x00095401,
      24, QMetaType::QStringList, 0x00095401,
      25, QMetaType::Bool, 0x00095401,
      26, QMetaType::Int, 0x00095401,

       0        // eod
};

void KPluginMetaData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<KPluginMetaData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isHidden(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->metaDataFileName(); break;
        case 4: *reinterpret_cast< QJsonObject*>(_v) = _t->rawData(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->extraInformation(); break;
        case 8: *reinterpret_cast< QVariantList*>(_v) = _t->authorsVariant(); break;
        case 9: *reinterpret_cast< QVariantList*>(_v) = _t->translatorsVariant(); break;
        case 10: *reinterpret_cast< QVariantList*>(_v) = _t->otherContributorsVariant(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->category(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->iconName(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->license(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->licenseText(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->copyrightText(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->pluginId(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->version(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->website(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->bugReportUrl(); break;
        case 20: *reinterpret_cast< QStringList*>(_v) = _t->dependencies(); break;
        case 21: *reinterpret_cast< QStringList*>(_v) = _t->serviceTypes(); break;
        case 22: *reinterpret_cast< QStringList*>(_v) = _t->mimeTypes(); break;
        case 23: *reinterpret_cast< QStringList*>(_v) = _t->formFactors(); break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->isEnabledByDefault(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->isEnabledByDefault(); break;
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

QT_INIT_METAOBJECT const QMetaObject KPluginMetaData::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_KPluginMetaData.data,
    qt_meta_data_KPluginMetaData,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
