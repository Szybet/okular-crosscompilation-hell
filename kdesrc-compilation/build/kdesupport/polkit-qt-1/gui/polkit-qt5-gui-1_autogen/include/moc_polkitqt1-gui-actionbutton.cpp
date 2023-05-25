/****************************************************************************
** Meta object code from reading C++ file 'polkitqt1-gui-actionbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../kdesupport/polkit-qt-1/gui/polkitqt1-gui-actionbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'polkitqt1-gui-actionbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PolkitQt1__Gui__ActionButton_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PolkitQt1__Gui__ActionButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PolkitQt1__Gui__ActionButton_t qt_meta_stringdata_PolkitQt1__Gui__ActionButton = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PolkitQt1::Gui::ActionButton"
QT_MOC_LITERAL(1, 29, 7), // "clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 55, 6), // "button"
QT_MOC_LITERAL(5, 62, 7), // "checked"
QT_MOC_LITERAL(6, 70, 8), // "activate"
QT_MOC_LITERAL(7, 79, 12), // "updateButton"
QT_MOC_LITERAL(8, 92, 13) // "streamClicked"

    },
    "PolkitQt1::Gui::ActionButton\0clicked\0"
    "\0QAbstractButton*\0button\0checked\0"
    "activate\0updateButton\0streamClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PolkitQt1__Gui__ActionButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       1,    1,   44,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   47,    2, 0x0a /* Public */,
       7,    0,   48,    2, 0x08 /* Private */,
       8,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void PolkitQt1::Gui::ActionButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActionButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->activate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->d_func()->updateButton(); break;
        case 4: _t->d_func()->streamClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActionButton::*)(QAbstractButton * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionButton::clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PolkitQt1::Gui::ActionButton::staticMetaObject = { {
    QMetaObject::SuperData::link<Action::staticMetaObject>(),
    qt_meta_stringdata_PolkitQt1__Gui__ActionButton.data,
    qt_meta_data_PolkitQt1__Gui__ActionButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PolkitQt1::Gui::ActionButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PolkitQt1::Gui::ActionButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PolkitQt1__Gui__ActionButton.stringdata0))
        return static_cast<void*>(this);
    return Action::qt_metacast(_clname);
}

int PolkitQt1::Gui::ActionButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Action::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PolkitQt1::Gui::ActionButton::clicked(QAbstractButton * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
