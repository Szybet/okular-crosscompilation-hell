/****************************************************************************
** Meta object code from reading C++ file 'kfileplacesview_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/filewidgets/kfileplacesview_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kfileplacesview_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KFilePlacesViewDelegate_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFilePlacesViewDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFilePlacesViewDelegate_t qt_meta_stringdata_KFilePlacesViewDelegate = {
    {
QT_MOC_LITERAL(0, 0, 23) // "KFilePlacesViewDelegate"

    },
    "KFilePlacesViewDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFilePlacesViewDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void KFilePlacesViewDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KFilePlacesViewDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_KFilePlacesViewDelegate.data,
    qt_meta_data_KFilePlacesViewDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KFilePlacesViewDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KFilePlacesViewDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KFilePlacesViewDelegate.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemDelegate::qt_metacast(_clname);
}

int KFilePlacesViewDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_KFilePlacesEventWatcher_t {
    QByteArrayData data[16];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFilePlacesEventWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFilePlacesEventWatcher_t qt_meta_stringdata_KFilePlacesEventWatcher = {
    {
QT_MOC_LITERAL(0, 0, 23), // "KFilePlacesEventWatcher"
QT_MOC_LITERAL(1, 24, 18), // "entryMiddleClicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 56, 5), // "index"
QT_MOC_LITERAL(5, 62, 17), // "headerAreaEntered"
QT_MOC_LITERAL(6, 80, 14), // "headerAreaLeft"
QT_MOC_LITERAL(7, 95, 13), // "actionEntered"
QT_MOC_LITERAL(8, 109, 10), // "actionLeft"
QT_MOC_LITERAL(9, 120, 13), // "actionClicked"
QT_MOC_LITERAL(10, 134, 15), // "windowActivated"
QT_MOC_LITERAL(11, 150, 17), // "windowDeactivated"
QT_MOC_LITERAL(12, 168, 14), // "paletteChanged"
QT_MOC_LITERAL(13, 183, 21), // "qScrollerStateChanged"
QT_MOC_LITERAL(14, 205, 16), // "QScroller::State"
QT_MOC_LITERAL(15, 222, 8) // "newState"

    },
    "KFilePlacesEventWatcher\0entryMiddleClicked\0"
    "\0QModelIndex\0index\0headerAreaEntered\0"
    "headerAreaLeft\0actionEntered\0actionLeft\0"
    "actionClicked\0windowActivated\0"
    "windowDeactivated\0paletteChanged\0"
    "qScrollerStateChanged\0QScroller::State\0"
    "newState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFilePlacesEventWatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       7,    1,   73,    2, 0x06 /* Public */,
       8,    1,   76,    2, 0x06 /* Public */,
       9,    1,   79,    2, 0x06 /* Public */,
      10,    0,   82,    2, 0x06 /* Public */,
      11,    0,   83,    2, 0x06 /* Public */,
      12,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void KFilePlacesEventWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KFilePlacesEventWatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->entryMiddleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->headerAreaEntered((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->headerAreaLeft((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->actionEntered((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->actionLeft((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->actionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->windowActivated(); break;
        case 7: _t->windowDeactivated(); break;
        case 8: _t->paletteChanged(); break;
        case 9: _t->qScrollerStateChanged((*reinterpret_cast< const QScroller::State(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KFilePlacesEventWatcher::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesEventWatcher::entryMiddleClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KFilePlacesEventWatcher::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesEventWatcher::headerAreaEntered)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KFilePlacesEventWatcher::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesEventWatcher::headerAreaLeft)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KFilePlacesEventWatcher::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesEventWatcher::actionEntered)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KFilePlacesEventWatcher::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesEventWatcher::actionLeft)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KFilePlacesEventWatcher::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesEventWatcher::actionClicked)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KFilePlacesEventWatcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesEventWatcher::windowActivated)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (KFilePlacesEventWatcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesEventWatcher::windowDeactivated)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (KFilePlacesEventWatcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesEventWatcher::paletteChanged)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KFilePlacesEventWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KFilePlacesEventWatcher.data,
    qt_meta_data_KFilePlacesEventWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KFilePlacesEventWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KFilePlacesEventWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KFilePlacesEventWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KFilePlacesEventWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void KFilePlacesEventWatcher::entryMiddleClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KFilePlacesEventWatcher::headerAreaEntered(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KFilePlacesEventWatcher::headerAreaLeft(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KFilePlacesEventWatcher::actionEntered(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KFilePlacesEventWatcher::actionLeft(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KFilePlacesEventWatcher::actionClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KFilePlacesEventWatcher::windowActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KFilePlacesEventWatcher::windowDeactivated()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KFilePlacesEventWatcher::paletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
