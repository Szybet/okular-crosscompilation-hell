/****************************************************************************
** Meta object code from reading C++ file 'polkitqt1-gui-action.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../kdesupport/polkit-qt-1/gui/polkitqt1-gui-action.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'polkitqt1-gui-action.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PolkitQt1__Gui__Action_t {
    QByteArrayData data[9];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PolkitQt1__Gui__Action_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PolkitQt1__Gui__Action_t qt_meta_stringdata_PolkitQt1__Gui__Action = {
    {
QT_MOC_LITERAL(0, 0, 22), // "PolkitQt1::Gui::Action"
QT_MOC_LITERAL(1, 23, 11), // "dataChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "authorized"
QT_MOC_LITERAL(4, 47, 8), // "activate"
QT_MOC_LITERAL(5, 56, 10), // "setChecked"
QT_MOC_LITERAL(6, 67, 7), // "checked"
QT_MOC_LITERAL(7, 75, 6), // "revoke"
QT_MOC_LITERAL(8, 82, 13) // "configChanged"

    },
    "PolkitQt1::Gui::Action\0dataChanged\0\0"
    "authorized\0activate\0setChecked\0checked\0"
    "revoke\0configChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PolkitQt1__Gui__Action[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PolkitQt1::Gui::Action::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Action *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->authorized(); break;
        case 2: { bool _r = _t->activate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->revoke(); break;
        case 5: _t->d->configChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Action::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Action::dataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Action::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Action::authorized)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PolkitQt1::Gui::Action::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_PolkitQt1__Gui__Action.data,
    qt_meta_data_PolkitQt1__Gui__Action,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PolkitQt1::Gui::Action::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PolkitQt1::Gui::Action::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PolkitQt1__Gui__Action.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int PolkitQt1::Gui::Action::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PolkitQt1::Gui::Action::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PolkitQt1::Gui::Action::authorized()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
