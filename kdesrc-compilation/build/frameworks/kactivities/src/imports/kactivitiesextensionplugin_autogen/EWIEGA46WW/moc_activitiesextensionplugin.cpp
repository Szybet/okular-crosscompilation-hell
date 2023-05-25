/****************************************************************************
** Meta object code from reading C++ file 'activitiesextensionplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kactivities/src/imports/activitiesextensionplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activitiesextensionplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActivitiesExtensionPlugin_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActivitiesExtensionPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActivitiesExtensionPlugin_t qt_meta_stringdata_ActivitiesExtensionPlugin = {
    {
QT_MOC_LITERAL(0, 0, 25) // "ActivitiesExtensionPlugin"

    },
    "ActivitiesExtensionPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActivitiesExtensionPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ActivitiesExtensionPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ActivitiesExtensionPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QQmlExtensionPlugin::staticMetaObject>(),
    qt_meta_stringdata_ActivitiesExtensionPlugin.data,
    qt_meta_data_ActivitiesExtensionPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActivitiesExtensionPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActivitiesExtensionPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActivitiesExtensionPlugin.stringdata0))
        return static_cast<void*>(this);
    return QQmlExtensionPlugin::qt_metacast(_clname);
}

int ActivitiesExtensionPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlExtensionPlugin::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x72,  'o',  'r',  'g',  '.',  'k',  'd', 
    'e',  '.',  'a',  'c',  't',  'i',  'v',  'i', 
    't',  'i',  'e',  's', 
    // "className"
    0x03,  0x78,  0x19,  'A',  'c',  't',  'i',  'v', 
    'i',  't',  'i',  'e',  's',  'E',  'x',  't', 
    'e',  'n',  's',  'i',  'o',  'n',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    // command-line "uri"
    0x63,  'u',  'r',  'i',  0x81,  0x72,  'o',  'r', 
    'g',  '.',  'k',  'd',  'e',  '.',  'a',  'c', 
    't',  'i',  'v',  'i',  't',  'i',  'e',  's', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(ActivitiesExtensionPlugin, ActivitiesExtensionPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
