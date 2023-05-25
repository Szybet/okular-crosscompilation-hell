/****************************************************************************
** Meta object code from reading C++ file 'kpassivepopup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/knotifications/src/kpassivepopup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kpassivepopup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KPassivePopup_t {
    QByteArrayData data[14];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KPassivePopup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KPassivePopup_t qt_meta_stringdata_KPassivePopup = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KPassivePopup"
QT_MOC_LITERAL(1, 14, 7), // "clicked"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3), // "pos"
QT_MOC_LITERAL(4, 27, 10), // "setTimeout"
QT_MOC_LITERAL(5, 38, 5), // "delay"
QT_MOC_LITERAL(6, 44, 13), // "setPopupStyle"
QT_MOC_LITERAL(7, 58, 10), // "popupstyle"
QT_MOC_LITERAL(8, 69, 4), // "show"
QT_MOC_LITERAL(9, 74, 1), // "p"
QT_MOC_LITERAL(10, 76, 10), // "setVisible"
QT_MOC_LITERAL(11, 87, 7), // "visible"
QT_MOC_LITERAL(12, 95, 10), // "autoDelete"
QT_MOC_LITERAL(13, 106, 7) // "timeout"

    },
    "KPassivePopup\0clicked\0\0pos\0setTimeout\0"
    "delay\0setPopupStyle\0popupstyle\0show\0"
    "p\0setVisible\0visible\0autoDelete\0timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KPassivePopup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       1,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   48,    2, 0x0a /* Public */,
       6,    1,   51,    2, 0x0a /* Public */,
       8,    1,   54,    2, 0x0a /* Public */,
      10,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QPoint,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00095103,
      13, QMetaType::Int, 0x00095103,

       0        // eod
};

void KPassivePopup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KPassivePopup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->clicked((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->setTimeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setPopupStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->show((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KPassivePopup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPassivePopup::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KPassivePopup::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPassivePopup::clicked)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KPassivePopup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->autoDelete(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->timeout(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KPassivePopup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoDelete(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setTimeout(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KPassivePopup::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_KPassivePopup.data,
    qt_meta_data_KPassivePopup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KPassivePopup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KPassivePopup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KPassivePopup.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int KPassivePopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void KPassivePopup::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KPassivePopup::clicked(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
