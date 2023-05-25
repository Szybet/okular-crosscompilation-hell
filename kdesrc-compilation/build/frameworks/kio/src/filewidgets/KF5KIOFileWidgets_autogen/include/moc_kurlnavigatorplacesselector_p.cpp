/****************************************************************************
** Meta object code from reading C++ file 'kurlnavigatorplacesselector_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/filewidgets/kurlnavigatorplacesselector_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kurlnavigatorplacesselector_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDEPrivate__KUrlNavigatorPlacesSelector_t {
    QByteArrayData data[16];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDEPrivate__KUrlNavigatorPlacesSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDEPrivate__KUrlNavigatorPlacesSelector_t qt_meta_stringdata_KDEPrivate__KUrlNavigatorPlacesSelector = {
    {
QT_MOC_LITERAL(0, 0, 39), // "KDEPrivate::KUrlNavigatorPlac..."
QT_MOC_LITERAL(1, 40, 14), // "placeActivated"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 3), // "url"
QT_MOC_LITERAL(4, 60, 12), // "tabRequested"
QT_MOC_LITERAL(5, 73, 13), // "activatePlace"
QT_MOC_LITERAL(6, 87, 8), // "QAction*"
QT_MOC_LITERAL(7, 96, 6), // "action"
QT_MOC_LITERAL(8, 103, 16), // "ActivationSignal"
QT_MOC_LITERAL(9, 120, 16), // "activationSignal"
QT_MOC_LITERAL(10, 137, 10), // "updateMenu"
QT_MOC_LITERAL(11, 148, 20), // "updateTeardownAction"
QT_MOC_LITERAL(12, 169, 18), // "onStorageSetupDone"
QT_MOC_LITERAL(13, 188, 11), // "QModelIndex"
QT_MOC_LITERAL(14, 200, 5), // "index"
QT_MOC_LITERAL(15, 206, 7) // "success"

    },
    "KDEPrivate::KUrlNavigatorPlacesSelector\0"
    "placeActivated\0\0url\0tabRequested\0"
    "activatePlace\0QAction*\0action\0"
    "ActivationSignal\0activationSignal\0"
    "updateMenu\0updateTeardownAction\0"
    "onStorageSetupDone\0QModelIndex\0index\0"
    "success"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDEPrivate__KUrlNavigatorPlacesSelector[] = {

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
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   50,    2, 0x08 /* Private */,
      10,    0,   55,    2, 0x08 /* Private */,
      11,    0,   56,    2, 0x08 /* Private */,
      12,    2,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Bool,   14,   15,

       0        // eod
};

void KDEPrivate::KUrlNavigatorPlacesSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KUrlNavigatorPlacesSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->placeActivated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->tabRequested((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->activatePlace((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< ActivationSignal(*)>(_a[2]))); break;
        case 3: _t->updateMenu(); break;
        case 4: _t->updateTeardownAction(); break;
        case 5: _t->onStorageSetupDone((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KUrlNavigatorPlacesSelector::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlNavigatorPlacesSelector::placeActivated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KUrlNavigatorPlacesSelector::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlNavigatorPlacesSelector::tabRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDEPrivate::KUrlNavigatorPlacesSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<KUrlNavigatorButtonBase::staticMetaObject>(),
    qt_meta_stringdata_KDEPrivate__KUrlNavigatorPlacesSelector.data,
    qt_meta_data_KDEPrivate__KUrlNavigatorPlacesSelector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDEPrivate::KUrlNavigatorPlacesSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDEPrivate::KUrlNavigatorPlacesSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDEPrivate__KUrlNavigatorPlacesSelector.stringdata0))
        return static_cast<void*>(this);
    return KUrlNavigatorButtonBase::qt_metacast(_clname);
}

int KDEPrivate::KUrlNavigatorPlacesSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KUrlNavigatorButtonBase::qt_metacall(_c, _id, _a);
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
void KDEPrivate::KUrlNavigatorPlacesSelector::placeActivated(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDEPrivate::KUrlNavigatorPlacesSelector::tabRequested(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
