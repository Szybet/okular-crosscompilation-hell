/****************************************************************************
** Meta object code from reading C++ file 'kbookmarkcontextmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kbookmarks/src/kbookmarkcontextmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kbookmarkcontextmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KBookmarkContextMenu_t {
    QByteArrayData data[9];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KBookmarkContextMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KBookmarkContextMenu_t qt_meta_stringdata_KBookmarkContextMenu = {
    {
QT_MOC_LITERAL(0, 0, 20), // "KBookmarkContextMenu"
QT_MOC_LITERAL(1, 21, 10), // "slotEditAt"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "slotProperties"
QT_MOC_LITERAL(4, 48, 10), // "slotInsert"
QT_MOC_LITERAL(5, 59, 10), // "slotRemove"
QT_MOC_LITERAL(6, 70, 16), // "slotCopyLocation"
QT_MOC_LITERAL(7, 87, 20), // "slotOpenFolderInTabs"
QT_MOC_LITERAL(8, 108, 15) // "slotAboutToShow"

    },
    "KBookmarkContextMenu\0slotEditAt\0\0"
    "slotProperties\0slotInsert\0slotRemove\0"
    "slotCopyLocation\0slotOpenFolderInTabs\0"
    "slotAboutToShow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KBookmarkContextMenu[] = {

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
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KBookmarkContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KBookmarkContextMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotEditAt(); break;
        case 1: _t->slotProperties(); break;
        case 2: _t->slotInsert(); break;
        case 3: _t->slotRemove(); break;
        case 4: _t->slotCopyLocation(); break;
        case 5: _t->slotOpenFolderInTabs(); break;
        case 6: _t->slotAboutToShow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KBookmarkContextMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_KBookmarkContextMenu.data,
    qt_meta_data_KBookmarkContextMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KBookmarkContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KBookmarkContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KBookmarkContextMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int KBookmarkContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
