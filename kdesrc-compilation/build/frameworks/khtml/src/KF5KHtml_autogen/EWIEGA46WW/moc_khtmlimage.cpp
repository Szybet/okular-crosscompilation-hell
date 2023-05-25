/****************************************************************************
** Meta object code from reading C++ file 'khtmlimage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/khtml/src/khtmlimage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'khtmlimage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KHTMLImage_t {
    QByteArrayData data[16];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KHTMLImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KHTMLImage_t qt_meta_stringdata_KHTMLImage = {
    {
QT_MOC_LITERAL(0, 0, 10), // "KHTMLImage"
QT_MOC_LITERAL(1, 11, 21), // "restoreScrollPosition"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "slotPopupMenu"
QT_MOC_LITERAL(4, 48, 6), // "global"
QT_MOC_LITERAL(5, 55, 3), // "url"
QT_MOC_LITERAL(6, 59, 6), // "mode_t"
QT_MOC_LITERAL(7, 66, 4), // "mode"
QT_MOC_LITERAL(8, 71, 24), // "KParts::OpenUrlArguments"
QT_MOC_LITERAL(9, 96, 4), // "args"
QT_MOC_LITERAL(10, 101, 24), // "KParts::BrowserArguments"
QT_MOC_LITERAL(11, 126, 11), // "browserArgs"
QT_MOC_LITERAL(12, 138, 36), // "KParts::BrowserExtension::Pop..."
QT_MOC_LITERAL(13, 175, 5), // "flags"
QT_MOC_LITERAL(14, 181, 40), // "KParts::BrowserExtension::Act..."
QT_MOC_LITERAL(15, 222, 12) // "actionGroups"

    },
    "KHTMLImage\0restoreScrollPosition\0\0"
    "slotPopupMenu\0global\0url\0mode_t\0mode\0"
    "KParts::OpenUrlArguments\0args\0"
    "KParts::BrowserArguments\0browserArgs\0"
    "KParts::BrowserExtension::PopupFlags\0"
    "flags\0KParts::BrowserExtension::ActionGroupMap\0"
    "actionGroups"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KHTMLImage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    7,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QUrl, 0x80000000 | 6, 0x80000000 | 8, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 14,    4,    5,    7,    9,   11,   13,   15,

       0        // eod
};

void KHTMLImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KHTMLImage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->restoreScrollPosition(); break;
        case 1: _t->slotPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< mode_t(*)>(_a[3])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[4])),(*reinterpret_cast< const KParts::BrowserArguments(*)>(_a[5])),(*reinterpret_cast< KParts::BrowserExtension::PopupFlags(*)>(_a[6])),(*reinterpret_cast< const KParts::BrowserExtension::ActionGroupMap(*)>(_a[7]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KHTMLImage::staticMetaObject = { {
    QMetaObject::SuperData::link<KParts::ReadOnlyPart::staticMetaObject>(),
    qt_meta_stringdata_KHTMLImage.data,
    qt_meta_data_KHTMLImage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KHTMLImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KHTMLImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KHTMLImage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "khtml::CachedObjectClient"))
        return static_cast< khtml::CachedObjectClient*>(this);
    return KParts::ReadOnlyPart::qt_metacast(_clname);
}

int KHTMLImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KParts::ReadOnlyPart::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_KHTMLImageBrowserExtension_t {
    QByteArrayData data[5];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KHTMLImageBrowserExtension_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KHTMLImageBrowserExtension_t qt_meta_stringdata_KHTMLImageBrowserExtension = {
    {
QT_MOC_LITERAL(0, 0, 26), // "KHTMLImageBrowserExtension"
QT_MOC_LITERAL(1, 27, 5), // "print"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "reparseConfiguration"
QT_MOC_LITERAL(4, 55, 16) // "disableScrolling"

    },
    "KHTMLImageBrowserExtension\0print\0\0"
    "reparseConfiguration\0disableScrolling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KHTMLImageBrowserExtension[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    0,   30,    2, 0x09 /* Protected */,
       4,    0,   31,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KHTMLImageBrowserExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KHTMLImageBrowserExtension *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->print(); break;
        case 1: _t->reparseConfiguration(); break;
        case 2: _t->disableScrolling(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KHTMLImageBrowserExtension::staticMetaObject = { {
    QMetaObject::SuperData::link<KParts::BrowserExtension::staticMetaObject>(),
    qt_meta_stringdata_KHTMLImageBrowserExtension.data,
    qt_meta_data_KHTMLImageBrowserExtension,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KHTMLImageBrowserExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KHTMLImageBrowserExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KHTMLImageBrowserExtension.stringdata0))
        return static_cast<void*>(this);
    return KParts::BrowserExtension::qt_metacast(_clname);
}

int KHTMLImageBrowserExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KParts::BrowserExtension::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
