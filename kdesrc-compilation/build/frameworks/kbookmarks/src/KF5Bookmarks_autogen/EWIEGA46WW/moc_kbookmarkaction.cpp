/****************************************************************************
** Meta object code from reading C++ file 'kbookmarkaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kbookmarks/src/kbookmarkaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kbookmarkaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KBookmarkAction_t {
    QByteArrayData data[8];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KBookmarkAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KBookmarkAction_t qt_meta_stringdata_KBookmarkAction = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KBookmarkAction"
QT_MOC_LITERAL(1, 16, 12), // "slotSelected"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(4, 47, 2), // "mb"
QT_MOC_LITERAL(5, 50, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(6, 72, 2), // "km"
QT_MOC_LITERAL(7, 75, 13) // "slotTriggered"

    },
    "KBookmarkAction\0slotSelected\0\0"
    "Qt::MouseButtons\0mb\0Qt::KeyboardModifiers\0"
    "km\0slotTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KBookmarkAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       7,    0,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,

       0        // eod
};

void KBookmarkAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KBookmarkAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotSelected((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2]))); break;
        case 1: _t->slotTriggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KBookmarkAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_KBookmarkAction.data,
    qt_meta_data_KBookmarkAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KBookmarkAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KBookmarkAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KBookmarkAction.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KBookmarkActionInterface"))
        return static_cast< KBookmarkActionInterface*>(this);
    return QAction::qt_metacast(_clname);
}

int KBookmarkAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
