/****************************************************************************
** Meta object code from reading C++ file 'kbookmarkmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kbookmarks/src/kbookmarkmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kbookmarkmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KBookmarkMenu_t {
    QByteArrayData data[9];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KBookmarkMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KBookmarkMenu_t qt_meta_stringdata_KBookmarkMenu = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KBookmarkMenu"
QT_MOC_LITERAL(1, 14, 20), // "slotBookmarksChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "slotAboutToShow"
QT_MOC_LITERAL(4, 52, 20), // "slotAddBookmarksList"
QT_MOC_LITERAL(5, 73, 15), // "slotAddBookmark"
QT_MOC_LITERAL(6, 89, 13), // "slotNewFolder"
QT_MOC_LITERAL(7, 103, 20), // "slotOpenFolderInTabs"
QT_MOC_LITERAL(8, 124, 21) // "slotCustomContextMenu"

    },
    "KBookmarkMenu\0slotBookmarksChanged\0\0"
    "slotAboutToShow\0slotAddBookmarksList\0"
    "slotAddBookmark\0slotNewFolder\0"
    "slotOpenFolderInTabs\0slotCustomContextMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KBookmarkMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       3,    0,   52,    2, 0x09 /* Protected */,
       4,    0,   53,    2, 0x09 /* Protected */,
       5,    0,   54,    2, 0x09 /* Protected */,
       6,    0,   55,    2, 0x09 /* Protected */,
       7,    0,   56,    2, 0x09 /* Protected */,
       8,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,

       0        // eod
};

void KBookmarkMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KBookmarkMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotBookmarksChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotAboutToShow(); break;
        case 2: _t->slotAddBookmarksList(); break;
        case 3: _t->slotAddBookmark(); break;
        case 4: _t->slotNewFolder(); break;
        case 5: _t->slotOpenFolderInTabs(); break;
        case 6: _t->slotCustomContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KBookmarkMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KBookmarkMenu.data,
    qt_meta_data_KBookmarkMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KBookmarkMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KBookmarkMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KBookmarkMenu.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KBookmarkMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
