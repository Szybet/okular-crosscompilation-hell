/****************************************************************************
** Meta object code from reading C++ file 'kmultitabbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/kmultitabbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kmultitabbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KMultiTabBar_t {
    QByteArrayData data[12];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KMultiTabBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KMultiTabBar_t qt_meta_stringdata_KMultiTabBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KMultiTabBar"
QT_MOC_LITERAL(1, 13, 8), // "position"
QT_MOC_LITERAL(2, 22, 20), // "KMultiTabBarPosition"
QT_MOC_LITERAL(3, 43, 8), // "tabStyle"
QT_MOC_LITERAL(4, 52, 17), // "KMultiTabBarStyle"
QT_MOC_LITERAL(5, 70, 4), // "Left"
QT_MOC_LITERAL(6, 75, 5), // "Right"
QT_MOC_LITERAL(7, 81, 3), // "Top"
QT_MOC_LITERAL(8, 85, 6), // "Bottom"
QT_MOC_LITERAL(9, 92, 5), // "VSNET"
QT_MOC_LITERAL(10, 98, 9), // "KDEV3ICON"
QT_MOC_LITERAL(11, 108, 9) // "STYLELAST"

    },
    "KMultiTabBar\0position\0KMultiTabBarPosition\0"
    "tabStyle\0KMultiTabBarStyle\0Left\0Right\0"
    "Top\0Bottom\0VSNET\0KDEV3ICON\0STYLELAST"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KMultiTabBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       2,   20, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, 0x80000000 | 4, 0x0009500b,

 // enums: name, alias, flags, count, data
       2,    2, 0x0,    4,   30,
       4,    4, 0x0,    3,   38,

 // enum data: key, value
       5, uint(KMultiTabBar::Left),
       6, uint(KMultiTabBar::Right),
       7, uint(KMultiTabBar::Top),
       8, uint(KMultiTabBar::Bottom),
       9, uint(KMultiTabBar::VSNET),
      10, uint(KMultiTabBar::KDEV3ICON),
      11, uint(KMultiTabBar::STYLELAST),

       0        // eod
};

void KMultiTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KMultiTabBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< KMultiTabBarPosition*>(_v) = _t->position(); break;
        case 1: *reinterpret_cast< KMultiTabBarStyle*>(_v) = _t->tabStyle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KMultiTabBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPosition(*reinterpret_cast< KMultiTabBarPosition*>(_v)); break;
        case 1: _t->setStyle(*reinterpret_cast< KMultiTabBarStyle*>(_v)); break;
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

QT_INIT_METAOBJECT const QMetaObject KMultiTabBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KMultiTabBar.data,
    qt_meta_data_KMultiTabBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KMultiTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KMultiTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KMultiTabBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KMultiTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_KMultiTabBarButton_t {
    QByteArrayData data[7];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KMultiTabBarButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KMultiTabBarButton_t qt_meta_stringdata_KMultiTabBarButton = {
    {
QT_MOC_LITERAL(0, 0, 18), // "KMultiTabBarButton"
QT_MOC_LITERAL(1, 19, 7), // "clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 2), // "id"
QT_MOC_LITERAL(4, 31, 7), // "setText"
QT_MOC_LITERAL(5, 39, 4), // "text"
QT_MOC_LITERAL(6, 44, 11) // "slotClicked"

    },
    "KMultiTabBarButton\0clicked\0\0id\0setText\0"
    "text\0slotClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KMultiTabBarButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void KMultiTabBarButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KMultiTabBarButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KMultiTabBarButton::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KMultiTabBarButton::clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KMultiTabBarButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_KMultiTabBarButton.data,
    qt_meta_data_KMultiTabBarButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KMultiTabBarButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KMultiTabBarButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KMultiTabBarButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int KMultiTabBarButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void KMultiTabBarButton::clicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_KMultiTabBarTab_t {
    QByteArrayData data[9];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KMultiTabBarTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KMultiTabBarTab_t qt_meta_stringdata_KMultiTabBarTab = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KMultiTabBarTab"
QT_MOC_LITERAL(1, 16, 11), // "setPosition"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 34), // "KMultiTabBar::KMultiTabBarPos..."
QT_MOC_LITERAL(4, 64, 8), // "setStyle"
QT_MOC_LITERAL(5, 73, 31), // "KMultiTabBar::KMultiTabBarStyle"
QT_MOC_LITERAL(6, 105, 8), // "setState"
QT_MOC_LITERAL(7, 114, 5), // "state"
QT_MOC_LITERAL(8, 120, 7) // "setIcon"

    },
    "KMultiTabBarTab\0setPosition\0\0"
    "KMultiTabBar::KMultiTabBarPosition\0"
    "setStyle\0KMultiTabBar::KMultiTabBarStyle\0"
    "setState\0state\0setIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KMultiTabBarTab[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,

       0        // eod
};

void KMultiTabBarTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KMultiTabBarTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPosition((*reinterpret_cast< KMultiTabBar::KMultiTabBarPosition(*)>(_a[1]))); break;
        case 1: _t->setStyle((*reinterpret_cast< KMultiTabBar::KMultiTabBarStyle(*)>(_a[1]))); break;
        case 2: _t->setState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setIcon((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setIcon((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KMultiTabBarTab::staticMetaObject = { {
    QMetaObject::SuperData::link<KMultiTabBarButton::staticMetaObject>(),
    qt_meta_stringdata_KMultiTabBarTab.data,
    qt_meta_data_KMultiTabBarTab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KMultiTabBarTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KMultiTabBarTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KMultiTabBarTab.stringdata0))
        return static_cast<void*>(this);
    return KMultiTabBarButton::qt_metacast(_clname);
}

int KMultiTabBarTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KMultiTabBarButton::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
