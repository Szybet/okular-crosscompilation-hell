/****************************************************************************
** Meta object code from reading C++ file 'consumer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kactivities/src/lib/consumer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'consumer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KActivities__Consumer_t {
    QByteArrayData data[16];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KActivities__Consumer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KActivities__Consumer_t qt_meta_stringdata_KActivities__Consumer = {
    {
QT_MOC_LITERAL(0, 0, 21), // "KActivities::Consumer"
QT_MOC_LITERAL(1, 22, 22), // "currentActivityChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 2), // "id"
QT_MOC_LITERAL(4, 49, 20), // "serviceStatusChanged"
QT_MOC_LITERAL(5, 70, 23), // "Consumer::ServiceStatus"
QT_MOC_LITERAL(6, 94, 6), // "status"
QT_MOC_LITERAL(7, 101, 13), // "activityAdded"
QT_MOC_LITERAL(8, 115, 15), // "activityRemoved"
QT_MOC_LITERAL(9, 131, 17), // "activitiesChanged"
QT_MOC_LITERAL(10, 149, 10), // "activities"
QT_MOC_LITERAL(11, 160, 24), // "runningActivitiesChanged"
QT_MOC_LITERAL(12, 185, 17), // "runningActivities"
QT_MOC_LITERAL(13, 203, 15), // "currentActivity"
QT_MOC_LITERAL(14, 219, 13), // "serviceStatus"
QT_MOC_LITERAL(15, 233, 13) // "ServiceStatus"

    },
    "KActivities::Consumer\0currentActivityChanged\0"
    "\0id\0serviceStatusChanged\0"
    "Consumer::ServiceStatus\0status\0"
    "activityAdded\0activityRemoved\0"
    "activitiesChanged\0activities\0"
    "runningActivitiesChanged\0runningActivities\0"
    "currentActivity\0serviceStatus\0"
    "ServiceStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KActivities__Consumer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,
       8,    1,   53,    2, 0x06 /* Public */,
       9,    1,   56,    2, 0x06 /* Public */,
      11,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,   10,
    QMetaType::Void, QMetaType::QStringList,   12,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00495001,
      10, QMetaType::QStringList, 0x00495001,
      12, QMetaType::QStringList, 0x00495001,
      14, 0x80000000 | 15, 0x00495009,

 // properties: notify_signal_id
       0,
       4,
       5,
       1,

       0        // eod
};

void KActivities::Consumer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Consumer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentActivityChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->serviceStatusChanged((*reinterpret_cast< Consumer::ServiceStatus(*)>(_a[1]))); break;
        case 2: _t->activityAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->activityRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->activitiesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->runningActivitiesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Consumer::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Consumer::currentActivityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Consumer::*)(Consumer::ServiceStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Consumer::serviceStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Consumer::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Consumer::activityAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Consumer::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Consumer::activityRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Consumer::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Consumer::activitiesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Consumer::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Consumer::runningActivitiesChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Consumer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentActivity(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->activities(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->runningActivities(); break;
        case 3: *reinterpret_cast< ServiceStatus*>(_v) = _t->serviceStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KActivities::Consumer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KActivities__Consumer.data,
    qt_meta_data_KActivities__Consumer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KActivities::Consumer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KActivities::Consumer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KActivities__Consumer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KActivities::Consumer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KActivities::Consumer::currentActivityChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KActivities::Consumer::serviceStatusChanged(Consumer::ServiceStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KActivities::Consumer::activityAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KActivities::Consumer::activityRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KActivities::Consumer::activitiesChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KActivities::Consumer::runningActivitiesChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
