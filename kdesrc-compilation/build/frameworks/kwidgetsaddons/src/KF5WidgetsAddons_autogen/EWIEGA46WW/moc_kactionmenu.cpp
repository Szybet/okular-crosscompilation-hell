/****************************************************************************
** Meta object code from reading C++ file 'kactionmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/kactionmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kactionmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KActionMenu_t {
    QByteArrayData data[5];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KActionMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KActionMenu_t qt_meta_stringdata_KActionMenu = {
    {
QT_MOC_LITERAL(0, 0, 11), // "KActionMenu"
QT_MOC_LITERAL(1, 12, 7), // "delayed"
QT_MOC_LITERAL(2, 20, 10), // "stickyMenu"
QT_MOC_LITERAL(3, 31, 9), // "popupMode"
QT_MOC_LITERAL(4, 41, 32) // "QToolButton::ToolButtonPopupMode"

    },
    "KActionMenu\0delayed\0stickyMenu\0popupMode\0"
    "QToolButton::ToolButtonPopupMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KActionMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095103,
       2, QMetaType::Bool, 0x00095103,
       3, 0x80000000 | 4, 0x0009510b,

       0        // eod
};

void KActionMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KActionMenu *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->delayed(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->stickyMenu(); break;
        case 2: *reinterpret_cast< QToolButton::ToolButtonPopupMode*>(_v) = _t->popupMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KActionMenu *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDelayed(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setStickyMenu(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setPopupMode(*reinterpret_cast< QToolButton::ToolButtonPopupMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

static const QMetaObject::SuperData qt_meta_extradata_KActionMenu[] = {
    QMetaObject::SuperData::link<QToolButton::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject KActionMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidgetAction::staticMetaObject>(),
    qt_meta_stringdata_KActionMenu.data,
    qt_meta_data_KActionMenu,
    qt_static_metacall,
    qt_meta_extradata_KActionMenu,
    nullptr
} };


const QMetaObject *KActionMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KActionMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KActionMenu.stringdata0))
        return static_cast<void*>(this);
    return QWidgetAction::qt_metacast(_clname);
}

int KActionMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidgetAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
