/****************************************************************************
** Meta object code from reading C++ file 'plugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/platforms/wayland/plugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WaylandPlugin_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WaylandPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WaylandPlugin_t qt_meta_stringdata_WaylandPlugin = {
    {
QT_MOC_LITERAL(0, 0, 13) // "WaylandPlugin"

    },
    "WaylandPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WaylandPlugin[] = {

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

void WaylandPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WaylandPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<KWindowSystemPluginInterface::staticMetaObject>(),
    qt_meta_stringdata_WaylandPlugin.data,
    qt_meta_data_WaylandPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WaylandPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaylandPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WaylandPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.kwindowsystem.KWindowSystemPluginInterface"))
        return static_cast< KWindowSystemPluginInterface*>(this);
    return KWindowSystemPluginInterface::qt_metacast(_clname);
}

int WaylandPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KWindowSystemPluginInterface::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x32,  'o',  'r',  'g',  '.',  'k', 
    'd',  'e',  '.',  'k',  'w',  'i',  'n',  'd', 
    'o',  'w',  's',  'y',  's',  't',  'e',  'm', 
    '.',  'K',  'W',  'i',  'n',  'd',  'o',  'w', 
    'S',  'y',  's',  't',  'e',  'm',  'P',  'l', 
    'u',  'g',  'i',  'n',  'I',  'n',  't',  'e', 
    'r',  'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x6d,  'W',  'a',  'y',  'l',  'a',  'n', 
    'd',  'P',  'l',  'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x69,  'p',  'l',  'a',  't',  'f', 
    'o',  'r',  'm',  's',  0x82,  0x67,  'w',  'a', 
    'y',  'l',  'a',  'n',  'd',  0x6b,  'w',  'a', 
    'y',  'l',  'a',  'n',  'd',  '-',  'e',  'g', 
    'l', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(WaylandPlugin, WaylandPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
