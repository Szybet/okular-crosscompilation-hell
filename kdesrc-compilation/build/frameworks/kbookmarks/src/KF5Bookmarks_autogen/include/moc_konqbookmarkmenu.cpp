/****************************************************************************
** Meta object code from reading C++ file 'konqbookmarkmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kbookmarks/src/konqbookmarkmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'konqbookmarkmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KonqBookmarkMenu_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KonqBookmarkMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KonqBookmarkMenu_t qt_meta_stringdata_KonqBookmarkMenu = {
    {
QT_MOC_LITERAL(0, 0, 16) // "KonqBookmarkMenu"

    },
    "KonqBookmarkMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KonqBookmarkMenu[] = {

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

void KonqBookmarkMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KonqBookmarkMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<KBookmarkMenu::staticMetaObject>(),
    qt_meta_stringdata_KonqBookmarkMenu.data,
    qt_meta_data_KonqBookmarkMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KonqBookmarkMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KonqBookmarkMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KonqBookmarkMenu.stringdata0))
        return static_cast<void*>(this);
    return KBookmarkMenu::qt_metacast(_clname);
}

int KonqBookmarkMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KBookmarkMenu::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_KonqBookmarkContextMenu_t {
    QByteArrayData data[5];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KonqBookmarkContextMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KonqBookmarkContextMenu_t qt_meta_stringdata_KonqBookmarkContextMenu = {
    {
QT_MOC_LITERAL(0, 0, 23), // "KonqBookmarkContextMenu"
QT_MOC_LITERAL(1, 24, 12), // "openInNewTab"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 15), // "openInNewWindow"
QT_MOC_LITERAL(4, 54, 19) // "toggleShowInToolbar"

    },
    "KonqBookmarkContextMenu\0openInNewTab\0"
    "\0openInNewWindow\0toggleShowInToolbar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KonqBookmarkContextMenu[] = {

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
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KonqBookmarkContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KonqBookmarkContextMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openInNewTab(); break;
        case 1: _t->openInNewWindow(); break;
        case 2: _t->toggleShowInToolbar(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KonqBookmarkContextMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<KBookmarkContextMenu::staticMetaObject>(),
    qt_meta_stringdata_KonqBookmarkContextMenu.data,
    qt_meta_data_KonqBookmarkContextMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KonqBookmarkContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KonqBookmarkContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KonqBookmarkContextMenu.stringdata0))
        return static_cast<void*>(this);
    return KBookmarkContextMenu::qt_metacast(_clname);
}

int KonqBookmarkContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KBookmarkContextMenu::qt_metacall(_c, _id, _a);
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
