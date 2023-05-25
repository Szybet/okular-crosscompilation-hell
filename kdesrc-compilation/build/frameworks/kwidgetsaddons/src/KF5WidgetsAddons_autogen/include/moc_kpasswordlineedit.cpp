/****************************************************************************
** Meta object code from reading C++ file 'kpasswordlineedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/kpasswordlineedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kpasswordlineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KPasswordLineEdit_t {
    QByteArrayData data[8];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KPasswordLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KPasswordLineEdit_t qt_meta_stringdata_KPasswordLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KPasswordLineEdit"
QT_MOC_LITERAL(1, 18, 15), // "echoModeChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "QLineEdit::EchoMode"
QT_MOC_LITERAL(4, 55, 8), // "echoMode"
QT_MOC_LITERAL(5, 64, 15), // "passwordChanged"
QT_MOC_LITERAL(6, 80, 8), // "password"
QT_MOC_LITERAL(7, 89, 18) // "clearButtonEnabled"

    },
    "KPasswordLineEdit\0echoModeChanged\0\0"
    "QLineEdit::EchoMode\0echoMode\0"
    "passwordChanged\0password\0clearButtonEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KPasswordLineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495103,
       7, QMetaType::Bool, 0x00095103,
       4, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       1,
       0,
       0,

       0        // eod
};

void KPasswordLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KPasswordLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->echoModeChanged((*reinterpret_cast< QLineEdit::EchoMode(*)>(_a[1]))); break;
        case 1: _t->passwordChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KPasswordLineEdit::*)(QLineEdit::EchoMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPasswordLineEdit::echoModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KPasswordLineEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPasswordLineEdit::passwordChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KPasswordLineEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->password(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isClearButtonEnabled(); break;
        case 2: *reinterpret_cast< QLineEdit::EchoMode*>(_v) = _t->echoMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KPasswordLineEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setClearButtonEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setEchoMode(*reinterpret_cast< QLineEdit::EchoMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_KPasswordLineEdit[] = {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject KPasswordLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KPasswordLineEdit.data,
    qt_meta_data_KPasswordLineEdit,
    qt_static_metacall,
    qt_meta_extradata_KPasswordLineEdit,
    nullptr
} };


const QMetaObject *KPasswordLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KPasswordLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KPasswordLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KPasswordLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void KPasswordLineEdit::echoModeChanged(QLineEdit::EchoMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KPasswordLineEdit::passwordChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
