/****************************************************************************
** Meta object code from reading C++ file 'Polkit1Backend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kauth/src/backends/polkit-1/Polkit1Backend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Polkit1Backend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KAuth__Polkit1Backend_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KAuth__Polkit1Backend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KAuth__Polkit1Backend_t qt_meta_stringdata_KAuth__Polkit1Backend = {
    {
QT_MOC_LITERAL(0, 0, 21), // "KAuth::Polkit1Backend"
QT_MOC_LITERAL(1, 22, 21), // "checkForResultChanged"
QT_MOC_LITERAL(2, 44, 0) // ""

    },
    "KAuth::Polkit1Backend\0checkForResultChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KAuth__Polkit1Backend[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void KAuth::Polkit1Backend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Polkit1Backend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkForResultChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KAuth::Polkit1Backend::staticMetaObject = { {
    QMetaObject::SuperData::link<AuthBackend::staticMetaObject>(),
    qt_meta_stringdata_KAuth__Polkit1Backend.data,
    qt_meta_data_KAuth__Polkit1Backend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KAuth::Polkit1Backend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KAuth::Polkit1Backend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KAuth__Polkit1Backend.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.kf5auth.AuthBackend/0.1"))
        return static_cast< KAuth::AuthBackend*>(this);
    return AuthBackend::qt_metacast(_clname);
}

int KAuth::Polkit1Backend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AuthBackend::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x76,  'o',  'r',  'g',  '.',  'k',  'd', 
    'e',  '.',  'P',  'o',  'l',  'k',  'i',  't', 
    '1',  'B',  'a',  'c',  'k',  'e',  'n',  'd', 
    // "className"
    0x03,  0x6e,  'P',  'o',  'l',  'k',  'i',  't', 
    '1',  'B',  'a',  'c',  'k',  'e',  'n',  'd', 
    0xff, 
};
using namespace KAuth;
QT_MOC_EXPORT_PLUGIN(KAuth::Polkit1Backend, Polkit1Backend)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
