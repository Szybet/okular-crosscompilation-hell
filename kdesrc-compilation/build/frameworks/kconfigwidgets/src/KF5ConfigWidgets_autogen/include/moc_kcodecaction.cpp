/****************************************************************************
** Meta object code from reading C++ file 'kcodecaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kconfigwidgets/src/kcodecaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcodecaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCodecAction_t {
    QByteArrayData data[15];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCodecAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCodecAction_t qt_meta_stringdata_KCodecAction = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KCodecAction"
QT_MOC_LITERAL(1, 13, 9), // "triggered"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "QTextCodec*"
QT_MOC_LITERAL(4, 36, 5), // "codec"
QT_MOC_LITERAL(5, 42, 14), // "codecTriggered"
QT_MOC_LITERAL(6, 57, 27), // "KEncodingProber::ProberType"
QT_MOC_LITERAL(7, 85, 23), // "encodingProberTriggered"
QT_MOC_LITERAL(8, 109, 18), // "codecNameTriggered"
QT_MOC_LITERAL(9, 128, 4), // "name"
QT_MOC_LITERAL(10, 133, 20), // "defaultItemTriggered"
QT_MOC_LITERAL(11, 154, 15), // "actionTriggered"
QT_MOC_LITERAL(12, 170, 8), // "QAction*"
QT_MOC_LITERAL(13, 179, 9), // "codecName"
QT_MOC_LITERAL(14, 189, 8) // "codecMib"

    },
    "KCodecAction\0triggered\0\0QTextCodec*\0"
    "codec\0codecTriggered\0KEncodingProber::ProberType\0"
    "encodingProberTriggered\0codecNameTriggered\0"
    "name\0defaultItemTriggered\0actionTriggered\0"
    "QAction*\0codecName\0codecMib"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCodecAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       1,    1,   55,    2, 0x06 /* Public */,
       7,    1,   58,    2, 0x06 /* Public */,
       8,    1,   61,    2, 0x06 /* Public */,
      10,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   65,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,    2,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00095003,
      14, QMetaType::Int, 0x00095001,

       0        // eod
};

void KCodecAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KCodecAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast< QTextCodec*(*)>(_a[1]))); break;
        case 1: _t->codecTriggered((*reinterpret_cast< QTextCodec*(*)>(_a[1]))); break;
        case 2: _t->triggered((*reinterpret_cast< KEncodingProber::ProberType(*)>(_a[1]))); break;
        case 3: _t->encodingProberTriggered((*reinterpret_cast< KEncodingProber::ProberType(*)>(_a[1]))); break;
        case 4: _t->codecNameTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->defaultItemTriggered(); break;
        case 6: _t->actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
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
            using _t = void (KCodecAction::*)(QTextCodec * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCodecAction::triggered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KCodecAction::*)(QTextCodec * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCodecAction::codecTriggered)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KCodecAction::*)(KEncodingProber::ProberType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCodecAction::triggered)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KCodecAction::*)(KEncodingProber::ProberType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCodecAction::encodingProberTriggered)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KCodecAction::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCodecAction::codecNameTriggered)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KCodecAction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCodecAction::defaultItemTriggered)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KCodecAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentCodecName(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentCodecMib(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KCodecAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentCodec(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KCodecAction::staticMetaObject = { {
    QMetaObject::SuperData::link<KSelectAction::staticMetaObject>(),
    qt_meta_stringdata_KCodecAction.data,
    qt_meta_data_KCodecAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCodecAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCodecAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCodecAction.stringdata0))
        return static_cast<void*>(this);
    return KSelectAction::qt_metacast(_clname);
}

int KCodecAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KSelectAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
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
void KCodecAction::triggered(QTextCodec * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KCodecAction::codecTriggered(QTextCodec * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KCodecAction::triggered(KEncodingProber::ProberType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KCodecAction::encodingProberTriggered(KEncodingProber::ProberType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KCodecAction::codecNameTriggered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KCodecAction::defaultItemTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
