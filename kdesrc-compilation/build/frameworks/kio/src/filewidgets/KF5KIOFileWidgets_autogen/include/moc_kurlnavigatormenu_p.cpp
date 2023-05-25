/****************************************************************************
** Meta object code from reading C++ file 'kurlnavigatormenu_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/filewidgets/kurlnavigatormenu_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kurlnavigatormenu_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDEPrivate__KUrlNavigatorMenu_t {
    QByteArrayData data[10];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDEPrivate__KUrlNavigatorMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDEPrivate__KUrlNavigatorMenu_t qt_meta_stringdata_KDEPrivate__KUrlNavigatorMenu = {
    {
QT_MOC_LITERAL(0, 0, 29), // "KDEPrivate::KUrlNavigatorMenu"
QT_MOC_LITERAL(1, 30, 11), // "urlsDropped"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "QAction*"
QT_MOC_LITERAL(4, 52, 6), // "action"
QT_MOC_LITERAL(5, 59, 11), // "QDropEvent*"
QT_MOC_LITERAL(6, 71, 5), // "event"
QT_MOC_LITERAL(7, 77, 18), // "mouseButtonClicked"
QT_MOC_LITERAL(8, 96, 15), // "Qt::MouseButton"
QT_MOC_LITERAL(9, 112, 6) // "button"

    },
    "KDEPrivate::KUrlNavigatorMenu\0urlsDropped\0"
    "\0QAction*\0action\0QDropEvent*\0event\0"
    "mouseButtonClicked\0Qt::MouseButton\0"
    "button"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDEPrivate__KUrlNavigatorMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       7,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 8,    4,    9,

       0        // eod
};

void KDEPrivate::KUrlNavigatorMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KUrlNavigatorMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->urlsDropped((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2]))); break;
        case 1: _t->mouseButtonClicked((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< Qt::MouseButton(*)>(_a[2]))); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KUrlNavigatorMenu::*)(QAction * , QDropEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlNavigatorMenu::urlsDropped)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KUrlNavigatorMenu::*)(QAction * , Qt::MouseButton );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlNavigatorMenu::mouseButtonClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDEPrivate::KUrlNavigatorMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_KDEPrivate__KUrlNavigatorMenu.data,
    qt_meta_data_KDEPrivate__KUrlNavigatorMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDEPrivate::KUrlNavigatorMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDEPrivate::KUrlNavigatorMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDEPrivate__KUrlNavigatorMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int KDEPrivate::KUrlNavigatorMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void KDEPrivate::KUrlNavigatorMenu::urlsDropped(QAction * _t1, QDropEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDEPrivate::KUrlNavigatorMenu::mouseButtonClicked(QAction * _t1, Qt::MouseButton _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
