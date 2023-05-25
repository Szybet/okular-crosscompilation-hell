/****************************************************************************
** Meta object code from reading C++ file 'liveconnectextension.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kparts/src/liveconnectextension.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'liveconnectextension.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KParts__LiveConnectExtension_t {
    QByteArrayData data[7];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KParts__LiveConnectExtension_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KParts__LiveConnectExtension_t qt_meta_stringdata_KParts__LiveConnectExtension = {
    {
QT_MOC_LITERAL(0, 0, 28), // "KParts::LiveConnectExtension"
QT_MOC_LITERAL(1, 29, 9), // "partEvent"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "objid"
QT_MOC_LITERAL(4, 46, 5), // "event"
QT_MOC_LITERAL(5, 52, 37), // "KParts::LiveConnectExtension:..."
QT_MOC_LITERAL(6, 90, 4) // "args"

    },
    "KParts::LiveConnectExtension\0partEvent\0"
    "\0objid\0event\0KParts::LiveConnectExtension::ArgList\0"
    "args"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KParts__LiveConnectExtension[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULong, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,

       0        // eod
};

void KParts::LiveConnectExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LiveConnectExtension *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->partEvent((*reinterpret_cast< const ulong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const KParts::LiveConnectExtension::ArgList(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LiveConnectExtension::*)(const unsigned long , const QString & , const KParts::LiveConnectExtension::ArgList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LiveConnectExtension::partEvent)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KParts::LiveConnectExtension::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KParts__LiveConnectExtension.data,
    qt_meta_data_KParts__LiveConnectExtension,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KParts::LiveConnectExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KParts::LiveConnectExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KParts__LiveConnectExtension.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KParts::LiveConnectExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KParts::LiveConnectExtension::partEvent(const unsigned long _t1, const QString & _t2, const KParts::LiveConnectExtension::ArgList & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
