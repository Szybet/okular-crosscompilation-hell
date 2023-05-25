/****************************************************************************
** Meta object code from reading C++ file 'extensions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/part/extensions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extensions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Okular__BrowserExtension_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Okular__BrowserExtension_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Okular__BrowserExtension_t qt_meta_stringdata_Okular__BrowserExtension = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Okular::BrowserExtension"
QT_MOC_LITERAL(1, 25, 5), // "print"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "Okular::BrowserExtension\0print\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Okular__BrowserExtension[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Okular::BrowserExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowserExtension *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->print(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Okular::BrowserExtension::staticMetaObject = { {
    QMetaObject::SuperData::link<KParts::BrowserExtension::staticMetaObject>(),
    qt_meta_stringdata_Okular__BrowserExtension.data,
    qt_meta_data_Okular__BrowserExtension,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Okular::BrowserExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Okular::BrowserExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Okular__BrowserExtension.stringdata0))
        return static_cast<void*>(this);
    return KParts::BrowserExtension::qt_metacast(_clname);
}

int Okular::BrowserExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KParts::BrowserExtension::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Okular__OkularLiveConnectExtension_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Okular__OkularLiveConnectExtension_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Okular__OkularLiveConnectExtension_t qt_meta_stringdata_Okular__OkularLiveConnectExtension = {
    {
QT_MOC_LITERAL(0, 0, 34) // "Okular::OkularLiveConnectExte..."

    },
    "Okular::OkularLiveConnectExtension"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Okular__OkularLiveConnectExtension[] = {

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

void Okular::OkularLiveConnectExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Okular::OkularLiveConnectExtension::staticMetaObject = { {
    QMetaObject::SuperData::link<KParts::LiveConnectExtension::staticMetaObject>(),
    qt_meta_stringdata_Okular__OkularLiveConnectExtension.data,
    qt_meta_data_Okular__OkularLiveConnectExtension,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Okular::OkularLiveConnectExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Okular::OkularLiveConnectExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Okular__OkularLiveConnectExtension.stringdata0))
        return static_cast<void*>(this);
    return KParts::LiveConnectExtension::qt_metacast(_clname);
}

int Okular::OkularLiveConnectExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KParts::LiveConnectExtension::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
