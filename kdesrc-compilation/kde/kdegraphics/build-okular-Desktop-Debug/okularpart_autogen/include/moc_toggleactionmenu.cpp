/****************************************************************************
** Meta object code from reading C++ file 'toggleactionmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/part/toggleactionmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toggleactionmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ToggleActionMenu_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToggleActionMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToggleActionMenu_t qt_meta_stringdata_ToggleActionMenu = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ToggleActionMenu"
QT_MOC_LITERAL(1, 17, 16), // "setDefaultAction"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "QAction*"
QT_MOC_LITERAL(4, 44, 6) // "action"

    },
    "ToggleActionMenu\0setDefaultAction\0\0"
    "QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToggleActionMenu[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void ToggleActionMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToggleActionMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setDefaultAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToggleActionMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<KActionMenu::staticMetaObject>(),
    qt_meta_stringdata_ToggleActionMenu.data,
    qt_meta_data_ToggleActionMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToggleActionMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToggleActionMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToggleActionMenu.stringdata0))
        return static_cast<void*>(this);
    return KActionMenu::qt_metacast(_clname);
}

int ToggleActionMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KActionMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
