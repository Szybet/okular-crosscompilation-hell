/****************************************************************************
** Meta object code from reading C++ file 'kdbusservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kdbusaddons/src/kdbusservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdbusservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDBusService_t {
    QByteArrayData data[18];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDBusService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDBusService_t qt_meta_stringdata_KDBusService = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KDBusService"
QT_MOC_LITERAL(1, 13, 17), // "activateRequested"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "arguments"
QT_MOC_LITERAL(4, 42, 16), // "workingDirectory"
QT_MOC_LITERAL(5, 59, 13), // "openRequested"
QT_MOC_LITERAL(6, 73, 11), // "QList<QUrl>"
QT_MOC_LITERAL(7, 85, 4), // "uris"
QT_MOC_LITERAL(8, 90, 23), // "activateActionRequested"
QT_MOC_LITERAL(9, 114, 10), // "actionName"
QT_MOC_LITERAL(10, 125, 9), // "parameter"
QT_MOC_LITERAL(11, 135, 10), // "unregister"
QT_MOC_LITERAL(12, 146, 13), // "StartupOption"
QT_MOC_LITERAL(13, 160, 6), // "Unique"
QT_MOC_LITERAL(14, 167, 8), // "Multiple"
QT_MOC_LITERAL(15, 176, 15), // "NoExitOnFailure"
QT_MOC_LITERAL(16, 192, 7), // "Replace"
QT_MOC_LITERAL(17, 200, 14) // "StartupOptions"

    },
    "KDBusService\0activateRequested\0\0"
    "arguments\0workingDirectory\0openRequested\0"
    "QList<QUrl>\0uris\0activateActionRequested\0"
    "actionName\0parameter\0unregister\0"
    "StartupOption\0Unique\0Multiple\0"
    "NoExitOnFailure\0Replace\0StartupOptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDBusService[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       2,   48, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    1,   39,    2, 0x06 /* Public */,
       8,    2,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    9,   10,

 // slots: parameters
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      12,   12, 0x0,    4,   58,
      17,   12, 0x1,    4,   66,

 // enum data: key, value
      13, uint(KDBusService::Unique),
      14, uint(KDBusService::Multiple),
      15, uint(KDBusService::NoExitOnFailure),
      16, uint(KDBusService::Replace),
      13, uint(KDBusService::Unique),
      14, uint(KDBusService::Multiple),
      15, uint(KDBusService::NoExitOnFailure),
      16, uint(KDBusService::Replace),

       0        // eod
};

void KDBusService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KDBusService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activateRequested((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->openRequested((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 2: _t->activateActionRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->unregister(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KDBusService::*)(const QStringList & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDBusService::activateRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KDBusService::*)(const QList<QUrl> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDBusService::openRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KDBusService::*)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDBusService::activateActionRequested)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDBusService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KDBusService.data,
    qt_meta_data_KDBusService,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDBusService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDBusService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDBusService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KDBusService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KDBusService::activateRequested(const QStringList & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDBusService::openRequested(const QList<QUrl> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KDBusService::activateActionRequested(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
