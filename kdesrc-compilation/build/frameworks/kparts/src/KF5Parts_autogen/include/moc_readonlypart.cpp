/****************************************************************************
** Meta object code from reading C++ file 'readonlypart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kparts/src/readonlypart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'readonlypart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KParts__ReadOnlyPart_t {
    QByteArrayData data[13];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KParts__ReadOnlyPart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KParts__ReadOnlyPart_t qt_meta_stringdata_KParts__ReadOnlyPart = {
    {
QT_MOC_LITERAL(0, 0, 20), // "KParts::ReadOnlyPart"
QT_MOC_LITERAL(1, 21, 7), // "started"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "KIO::Job*"
QT_MOC_LITERAL(4, 40, 3), // "job"
QT_MOC_LITERAL(5, 44, 9), // "completed"
QT_MOC_LITERAL(6, 54, 13), // "pendingAction"
QT_MOC_LITERAL(7, 68, 26), // "completedWithPendingAction"
QT_MOC_LITERAL(8, 95, 8), // "canceled"
QT_MOC_LITERAL(9, 104, 6), // "errMsg"
QT_MOC_LITERAL(10, 111, 10), // "urlChanged"
QT_MOC_LITERAL(11, 122, 3), // "url"
QT_MOC_LITERAL(12, 126, 7) // "openUrl"

    },
    "KParts::ReadOnlyPart\0started\0\0KIO::Job*\0"
    "job\0completed\0pendingAction\0"
    "completedWithPendingAction\0canceled\0"
    "errMsg\0urlChanged\0url\0openUrl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KParts__ReadOnlyPart[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,
       7,    0,   56,    2, 0x06 /* Public */,
       8,    1,   57,    2, 0x06 /* Public */,
      10,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QUrl,   11,

 // slots: parameters
    QMetaType::Bool, QMetaType::QUrl,   11,

 // properties: name, type, flags
      11, QMetaType::QUrl, 0x00095001,

       0        // eod
};

void KParts::ReadOnlyPart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReadOnlyPart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started((*reinterpret_cast< KIO::Job*(*)>(_a[1]))); break;
        case 1: _t->completed(); break;
        case 2: _t->completed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->completedWithPendingAction(); break;
        case 4: _t->canceled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: { bool _r = _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReadOnlyPart::*)(KIO::Job * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReadOnlyPart::started)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ReadOnlyPart::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReadOnlyPart::completed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ReadOnlyPart::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReadOnlyPart::completed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ReadOnlyPart::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReadOnlyPart::completedWithPendingAction)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ReadOnlyPart::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReadOnlyPart::canceled)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ReadOnlyPart::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReadOnlyPart::urlChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ReadOnlyPart *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KParts::ReadOnlyPart::staticMetaObject = { {
    QMetaObject::SuperData::link<Part::staticMetaObject>(),
    qt_meta_stringdata_KParts__ReadOnlyPart.data,
    qt_meta_data_KParts__ReadOnlyPart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KParts::ReadOnlyPart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KParts::ReadOnlyPart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KParts__ReadOnlyPart.stringdata0))
        return static_cast<void*>(this);
    return Part::qt_metacast(_clname);
}

int KParts::ReadOnlyPart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Part::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KParts::ReadOnlyPart::started(KIO::Job * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KParts::ReadOnlyPart::completed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KParts::ReadOnlyPart::completed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KParts::ReadOnlyPart::completedWithPendingAction()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KParts::ReadOnlyPart::canceled(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KParts::ReadOnlyPart::urlChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
