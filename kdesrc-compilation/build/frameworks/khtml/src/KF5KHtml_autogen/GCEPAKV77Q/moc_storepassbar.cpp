/****************************************************************************
** Meta object code from reading C++ file 'storepassbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/khtml/src/ui/passwordbar/storepassbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'storepassbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StorePassBar_t {
    QByteArrayData data[5];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StorePassBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StorePassBar_t qt_meta_stringdata_StorePassBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "StorePassBar"
QT_MOC_LITERAL(1, 13, 12), // "storeClicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 23), // "neverForThisSiteClicked"
QT_MOC_LITERAL(4, 51, 17) // "doNotStoreClicked"

    },
    "StorePassBar\0storeClicked\0\0"
    "neverForThisSiteClicked\0doNotStoreClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StorePassBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StorePassBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StorePassBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->storeClicked(); break;
        case 1: _t->neverForThisSiteClicked(); break;
        case 2: _t->doNotStoreClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StorePassBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StorePassBar::storeClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StorePassBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StorePassBar::neverForThisSiteClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StorePassBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StorePassBar::doNotStoreClicked)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StorePassBar::staticMetaObject = { {
    QMetaObject::SuperData::link<KHTMLViewBarWidget::staticMetaObject>(),
    qt_meta_stringdata_StorePassBar.data,
    qt_meta_data_StorePassBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StorePassBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StorePassBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StorePassBar.stringdata0))
        return static_cast<void*>(this);
    return KHTMLViewBarWidget::qt_metacast(_clname);
}

int StorePassBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KHTMLViewBarWidget::qt_metacall(_c, _id, _a);
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
void StorePassBar::storeClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void StorePassBar::neverForThisSiteClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void StorePassBar::doNotStoreClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_StorePass_t {
    QByteArrayData data[5];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StorePass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StorePass_t qt_meta_stringdata_StorePass = {
    {
QT_MOC_LITERAL(0, 0, 9), // "StorePass"
QT_MOC_LITERAL(1, 10, 16), // "slotStoreClicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 27), // "slotNeverForThisSiteClicked"
QT_MOC_LITERAL(4, 56, 21) // "slotDoNotStoreClicked"

    },
    "StorePass\0slotStoreClicked\0\0"
    "slotNeverForThisSiteClicked\0"
    "slotDoNotStoreClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StorePass[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StorePass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StorePass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotStoreClicked(); break;
        case 1: _t->slotNeverForThisSiteClicked(); break;
        case 2: _t->slotDoNotStoreClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StorePass::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_StorePass.data,
    qt_meta_data_StorePass,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StorePass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StorePass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StorePass.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StorePass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
