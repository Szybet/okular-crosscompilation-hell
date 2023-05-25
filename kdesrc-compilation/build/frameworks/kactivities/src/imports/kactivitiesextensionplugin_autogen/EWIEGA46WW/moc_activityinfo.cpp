/****************************************************************************
** Meta object code from reading C++ file 'activityinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kactivities/src/imports/activityinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activityinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KActivities__Imports__ActivityInfo_t {
    QByteArrayData data[18];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KActivities__Imports__ActivityInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KActivities__Imports__ActivityInfo_t qt_meta_stringdata_KActivities__Imports__ActivityInfo = {
    {
QT_MOC_LITERAL(0, 0, 34), // "KActivities::Imports::Activit..."
QT_MOC_LITERAL(1, 35, 17), // "activityIdChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 2), // "id"
QT_MOC_LITERAL(4, 57, 11), // "nameChanged"
QT_MOC_LITERAL(5, 69, 4), // "name"
QT_MOC_LITERAL(6, 74, 18), // "descriptionChanged"
QT_MOC_LITERAL(7, 93, 11), // "description"
QT_MOC_LITERAL(8, 105, 11), // "iconChanged"
QT_MOC_LITERAL(9, 117, 4), // "icon"
QT_MOC_LITERAL(10, 122, 12), // "validChanged"
QT_MOC_LITERAL(11, 135, 5), // "valid"
QT_MOC_LITERAL(12, 141, 13), // "setActivityId"
QT_MOC_LITERAL(13, 155, 10), // "activityId"
QT_MOC_LITERAL(14, 166, 7), // "setName"
QT_MOC_LITERAL(15, 174, 14), // "setDescription"
QT_MOC_LITERAL(16, 189, 7), // "setIcon"
QT_MOC_LITERAL(17, 197, 18) // "setCurrentActivity"

    },
    "KActivities::Imports::ActivityInfo\0"
    "activityIdChanged\0\0id\0nameChanged\0"
    "name\0descriptionChanged\0description\0"
    "iconChanged\0icon\0validChanged\0valid\0"
    "setActivityId\0activityId\0setName\0"
    "setDescription\0setIcon\0setCurrentActivity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KActivities__Imports__ActivityInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       5,  124, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       6,    1,   95,    2, 0x06 /* Public */,
       8,    1,   98,    2, 0x06 /* Public */,
      10,    1,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  104,    2, 0x0a /* Public */,
      13,    0,  107,    2, 0x0a /* Public */,
      14,    1,  108,    2, 0x0a /* Public */,
       5,    0,  111,    2, 0x0a /* Public */,
      15,    1,  112,    2, 0x0a /* Public */,
       7,    0,  115,    2, 0x0a /* Public */,
      16,    1,  116,    2, 0x0a /* Public */,
       9,    0,  119,    2, 0x0a /* Public */,
      11,    0,  120,    2, 0x0a /* Public */,
      17,    1,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,    3,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00495103,
       5, QMetaType::QString, 0x00495103,
       7, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,
      11, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void KActivities::Imports::ActivityInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActivityInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activityIdChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->descriptionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->iconChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->validChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setActivityId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: { QString _r = _t->activityId();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: { QString _r = _t->name();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setDescription((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: { QString _r = _t->description();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setIcon((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: { QString _r = _t->icon();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->valid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setCurrentActivity((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActivityInfo::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActivityInfo::activityIdChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActivityInfo::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActivityInfo::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ActivityInfo::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActivityInfo::descriptionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ActivityInfo::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActivityInfo::iconChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ActivityInfo::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActivityInfo::validChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActivityInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->activityId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->icon(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->valid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ActivityInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActivityId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setIcon(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KActivities::Imports::ActivityInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KActivities__Imports__ActivityInfo.data,
    qt_meta_data_KActivities__Imports__ActivityInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KActivities::Imports::ActivityInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KActivities::Imports::ActivityInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KActivities__Imports__ActivityInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KActivities::Imports::ActivityInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KActivities::Imports::ActivityInfo::activityIdChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KActivities::Imports::ActivityInfo::nameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KActivities::Imports::ActivityInfo::descriptionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KActivities::Imports::ActivityInfo::iconChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KActivities::Imports::ActivityInfo::validChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
