/****************************************************************************
** Meta object code from reading C++ file 'colormodemenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/part/colormodemenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colormodemenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColorModeMenu_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorModeMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorModeMenu_t qt_meta_stringdata_ColorModeMenu = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ColorModeMenu"
QT_MOC_LITERAL(1, 14, 28), // "slotColorModeActionTriggered"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8), // "QAction*"
QT_MOC_LITERAL(4, 53, 6), // "action"
QT_MOC_LITERAL(5, 60, 19), // "slotSetChangeColors"
QT_MOC_LITERAL(6, 80, 2), // "on"
QT_MOC_LITERAL(7, 83, 17), // "slotConfigChanged"
QT_MOC_LITERAL(8, 101, 11) // "slotChanged"

    },
    "ColorModeMenu\0slotColorModeActionTriggered\0"
    "\0QAction*\0action\0slotSetChangeColors\0"
    "on\0slotConfigChanged\0slotChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorModeMenu[] = {

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
       1,    1,   34,    2, 0x09 /* Protected */,
       5,    1,   37,    2, 0x09 /* Protected */,
       7,    0,   40,    2, 0x09 /* Protected */,
       8,    0,   41,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ColorModeMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorModeMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotColorModeActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->slotSetChangeColors((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slotConfigChanged(); break;
        case 3: _t->slotChanged(); break;
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

QT_INIT_METAOBJECT const QMetaObject ColorModeMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<ToggleActionMenu::staticMetaObject>(),
    qt_meta_stringdata_ColorModeMenu.data,
    qt_meta_data_ColorModeMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorModeMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorModeMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorModeMenu.stringdata0))
        return static_cast<void*>(this);
    return ToggleActionMenu::qt_metacast(_clname);
}

int ColorModeMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleActionMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
