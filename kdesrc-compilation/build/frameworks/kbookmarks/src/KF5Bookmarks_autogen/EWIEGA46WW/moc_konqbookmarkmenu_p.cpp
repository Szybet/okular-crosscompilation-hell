/****************************************************************************
** Meta object code from reading C++ file 'konqbookmarkmenu_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kbookmarks/src/konqbookmarkmenu_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'konqbookmarkmenu_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KImportedBookmarkMenu_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KImportedBookmarkMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KImportedBookmarkMenu_t qt_meta_stringdata_KImportedBookmarkMenu = {
    {
QT_MOC_LITERAL(0, 0, 21), // "KImportedBookmarkMenu"
QT_MOC_LITERAL(1, 22, 10), // "slotNSLoad"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "KImportedBookmarkMenu\0slotNSLoad\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KImportedBookmarkMenu[] = {

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
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void KImportedBookmarkMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KImportedBookmarkMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotNSLoad(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KImportedBookmarkMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<KBookmarkMenu::staticMetaObject>(),
    qt_meta_stringdata_KImportedBookmarkMenu.data,
    qt_meta_data_KImportedBookmarkMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KImportedBookmarkMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KImportedBookmarkMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KImportedBookmarkMenu.stringdata0))
        return static_cast<void*>(this);
    return KBookmarkMenu::qt_metacast(_clname);
}

int KImportedBookmarkMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KBookmarkMenu::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_KBookmarkMenuImporter_t {
    QByteArrayData data[8];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KBookmarkMenuImporter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KBookmarkMenuImporter_t qt_meta_stringdata_KBookmarkMenuImporter = {
    {
QT_MOC_LITERAL(0, 0, 21), // "KBookmarkMenuImporter"
QT_MOC_LITERAL(1, 22, 11), // "newBookmark"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "text"
QT_MOC_LITERAL(4, 40, 3), // "url"
QT_MOC_LITERAL(5, 44, 9), // "newFolder"
QT_MOC_LITERAL(6, 54, 12), // "newSeparator"
QT_MOC_LITERAL(7, 67, 9) // "endFolder"

    },
    "KBookmarkMenuImporter\0newBookmark\0\0"
    "text\0url\0newFolder\0newSeparator\0"
    "endFolder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KBookmarkMenuImporter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x09 /* Protected */,
       5,    3,   41,    2, 0x09 /* Protected */,
       6,    0,   48,    2, 0x09 /* Protected */,
       7,    0,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,    3,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KBookmarkMenuImporter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KBookmarkMenuImporter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newBookmark((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->newFolder((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->newSeparator(); break;
        case 3: _t->endFolder(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KBookmarkMenuImporter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KBookmarkMenuImporter.data,
    qt_meta_data_KBookmarkMenuImporter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KBookmarkMenuImporter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KBookmarkMenuImporter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KBookmarkMenuImporter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KBookmarkMenuImporter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_KImportedBookmarkActionMenu_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KImportedBookmarkActionMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KImportedBookmarkActionMenu_t qt_meta_stringdata_KImportedBookmarkActionMenu = {
    {
QT_MOC_LITERAL(0, 0, 27) // "KImportedBookmarkActionMenu"

    },
    "KImportedBookmarkActionMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KImportedBookmarkActionMenu[] = {

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

void KImportedBookmarkActionMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KImportedBookmarkActionMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<KActionMenu::staticMetaObject>(),
    qt_meta_stringdata_KImportedBookmarkActionMenu.data,
    qt_meta_data_KImportedBookmarkActionMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KImportedBookmarkActionMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KImportedBookmarkActionMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KImportedBookmarkActionMenu.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KBookmarkActionInterface"))
        return static_cast< KBookmarkActionInterface*>(this);
    return KActionMenu::qt_metacast(_clname);
}

int KImportedBookmarkActionMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KActionMenu::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
