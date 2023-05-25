/****************************************************************************
** Meta object code from reading C++ file 'xmlhttprequest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/khtml/src/ecma/xmlhttprequest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmlhttprequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KJS__XMLHttpRequestQObject_t {
    QByteArrayData data[10];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KJS__XMLHttpRequestQObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KJS__XMLHttpRequestQObject_t qt_meta_stringdata_KJS__XMLHttpRequestQObject = {
    {
QT_MOC_LITERAL(0, 0, 26), // "KJS::XMLHttpRequestQObject"
QT_MOC_LITERAL(1, 27, 8), // "slotData"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 9), // "KIO::Job*"
QT_MOC_LITERAL(4, 47, 3), // "job"
QT_MOC_LITERAL(5, 51, 4), // "data"
QT_MOC_LITERAL(6, 56, 12), // "slotFinished"
QT_MOC_LITERAL(7, 69, 5), // "KJob*"
QT_MOC_LITERAL(8, 75, 15), // "slotRedirection"
QT_MOC_LITERAL(9, 91, 3) // "url"

    },
    "KJS::XMLHttpRequestQObject\0slotData\0"
    "\0KIO::Job*\0job\0data\0slotFinished\0KJob*\0"
    "slotRedirection\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KJS__XMLHttpRequestQObject[] = {

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
       1,    2,   29,    2, 0x0a /* Public */,
       6,    1,   34,    2, 0x0a /* Public */,
       8,    2,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QUrl,    4,    9,

       0        // eod
};

void KJS::XMLHttpRequestQObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XMLHttpRequestQObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotData((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->slotFinished((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 2: _t->slotRedirection((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KJS::XMLHttpRequestQObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KJS__XMLHttpRequestQObject.data,
    qt_meta_data_KJS__XMLHttpRequestQObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KJS::XMLHttpRequestQObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KJS::XMLHttpRequestQObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KJS__XMLHttpRequestQObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KJS::XMLHttpRequestQObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
