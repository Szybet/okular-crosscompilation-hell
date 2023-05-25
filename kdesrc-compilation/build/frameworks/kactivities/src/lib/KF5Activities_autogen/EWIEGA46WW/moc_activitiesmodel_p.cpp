/****************************************************************************
** Meta object code from reading C++ file 'activitiesmodel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kactivities/src/lib/activitiesmodel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activitiesmodel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KActivities__ActivitiesModelPrivate_t {
    QByteArrayData data[21];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KActivities__ActivitiesModelPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KActivities__ActivitiesModelPrivate_t qt_meta_stringdata_KActivities__ActivitiesModelPrivate = {
    {
QT_MOC_LITERAL(0, 0, 35), // "KActivities::ActivitiesModelP..."
QT_MOC_LITERAL(1, 36, 21), // "onActivityNameChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 4), // "name"
QT_MOC_LITERAL(4, 64, 28), // "onActivityDescriptionChanged"
QT_MOC_LITERAL(5, 93, 11), // "description"
QT_MOC_LITERAL(6, 105, 21), // "onActivityIconChanged"
QT_MOC_LITERAL(7, 127, 4), // "icon"
QT_MOC_LITERAL(8, 132, 22), // "onActivityStateChanged"
QT_MOC_LITERAL(9, 155, 24), // "KActivities::Info::State"
QT_MOC_LITERAL(10, 180, 5), // "state"
QT_MOC_LITERAL(11, 186, 17), // "replaceActivities"
QT_MOC_LITERAL(12, 204, 10), // "activities"
QT_MOC_LITERAL(13, 215, 15), // "onActivityAdded"
QT_MOC_LITERAL(14, 231, 2), // "id"
QT_MOC_LITERAL(15, 234, 13), // "notifyClients"
QT_MOC_LITERAL(16, 248, 17), // "onActivityRemoved"
QT_MOC_LITERAL(17, 266, 24), // "onCurrentActivityChanged"
QT_MOC_LITERAL(18, 291, 16), // "setServiceStatus"
QT_MOC_LITERAL(19, 308, 36), // "KActivities::Consumer::Servic..."
QT_MOC_LITERAL(20, 345, 6) // "status"

    },
    "KActivities::ActivitiesModelPrivate\0"
    "onActivityNameChanged\0\0name\0"
    "onActivityDescriptionChanged\0description\0"
    "onActivityIconChanged\0icon\0"
    "onActivityStateChanged\0KActivities::Info::State\0"
    "state\0replaceActivities\0activities\0"
    "onActivityAdded\0id\0notifyClients\0"
    "onActivityRemoved\0onCurrentActivityChanged\0"
    "setServiceStatus\0KActivities::Consumer::ServiceStatus\0"
    "status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KActivities__ActivitiesModelPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    1,   67,    2, 0x0a /* Public */,
       6,    1,   70,    2, 0x0a /* Public */,
       8,    1,   73,    2, 0x0a /* Public */,
      11,    1,   76,    2, 0x0a /* Public */,
      13,    2,   79,    2, 0x0a /* Public */,
      13,    1,   84,    2, 0x2a /* Public | MethodCloned */,
      16,    1,   87,    2, 0x0a /* Public */,
      17,    1,   90,    2, 0x0a /* Public */,
      18,    1,   93,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QStringList,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   14,   15,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void KActivities::ActivitiesModelPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActivitiesModelPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onActivityNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onActivityDescriptionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onActivityIconChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onActivityStateChanged((*reinterpret_cast< KActivities::Info::State(*)>(_a[1]))); break;
        case 4: _t->replaceActivities((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->onActivityAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->onActivityAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onActivityRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->onCurrentActivityChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setServiceStatus((*reinterpret_cast< KActivities::Consumer::ServiceStatus(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KActivities::ActivitiesModelPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KActivities__ActivitiesModelPrivate.data,
    qt_meta_data_KActivities__ActivitiesModelPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KActivities::ActivitiesModelPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KActivities::ActivitiesModelPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KActivities__ActivitiesModelPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KActivities::ActivitiesModelPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
