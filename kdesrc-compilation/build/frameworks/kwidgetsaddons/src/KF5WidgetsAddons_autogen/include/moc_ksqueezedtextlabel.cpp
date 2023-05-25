/****************************************************************************
** Meta object code from reading C++ file 'ksqueezedtextlabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/ksqueezedtextlabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ksqueezedtextlabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KSqueezedTextLabel_t {
    QByteArrayData data[9];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KSqueezedTextLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KSqueezedTextLabel_t qt_meta_stringdata_KSqueezedTextLabel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "KSqueezedTextLabel"
QT_MOC_LITERAL(1, 19, 7), // "setText"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "text"
QT_MOC_LITERAL(4, 33, 5), // "clear"
QT_MOC_LITERAL(5, 39, 13), // "textElideMode"
QT_MOC_LITERAL(6, 53, 17), // "Qt::TextElideMode"
QT_MOC_LITERAL(7, 71, 6), // "indent"
QT_MOC_LITERAL(8, 78, 6) // "margin"

    },
    "KSqueezedTextLabel\0setText\0\0text\0clear\0"
    "textElideMode\0Qt::TextElideMode\0indent\0"
    "margin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KSqueezedTextLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0009510b,
       7, QMetaType::Int, 0x00095103,
       8, QMetaType::Int, 0x00095103,

       0        // eod
};

void KSqueezedTextLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KSqueezedTextLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->clear(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KSqueezedTextLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::TextElideMode*>(_v) = _t->textElideMode(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->indent(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->margin(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KSqueezedTextLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTextElideMode(*reinterpret_cast< Qt::TextElideMode*>(_v)); break;
        case 1: _t->setIndent(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setMargin(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KSqueezedTextLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_KSqueezedTextLabel.data,
    qt_meta_data_KSqueezedTextLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KSqueezedTextLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KSqueezedTextLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KSqueezedTextLabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int KSqueezedTextLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
