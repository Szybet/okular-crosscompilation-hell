/****************************************************************************
** Meta object code from reading C++ file 'resourceinstance.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kactivities/src/imports/resourceinstance.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resourceinstance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KActivities__Imports__ResourceInstance_t {
    QByteArrayData data[12];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KActivities__Imports__ResourceInstance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KActivities__Imports__ResourceInstance_t qt_meta_stringdata_KActivities__Imports__ResourceInstance = {
    {
QT_MOC_LITERAL(0, 0, 38), // "KActivities::Imports::Resourc..."
QT_MOC_LITERAL(1, 39, 10), // "uriChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 15), // "mimetypeChanged"
QT_MOC_LITERAL(4, 67, 12), // "titleChanged"
QT_MOC_LITERAL(5, 80, 7), // "syncWid"
QT_MOC_LITERAL(6, 88, 14), // "notifyModified"
QT_MOC_LITERAL(7, 103, 15), // "notifyFocusedIn"
QT_MOC_LITERAL(8, 119, 16), // "notifyFocusedOut"
QT_MOC_LITERAL(9, 136, 3), // "uri"
QT_MOC_LITERAL(10, 140, 8), // "mimetype"
QT_MOC_LITERAL(11, 149, 5) // "title"

    },
    "KActivities::Imports::ResourceInstance\0"
    "uriChanged\0\0mimetypeChanged\0titleChanged\0"
    "syncWid\0notifyModified\0notifyFocusedIn\0"
    "notifyFocusedOut\0uri\0mimetype\0title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KActivities__Imports__ResourceInstance[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x09 /* Protected */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QUrl, 0x00495103,
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void KActivities::Imports::ResourceInstance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ResourceInstance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uriChanged(); break;
        case 1: _t->mimetypeChanged(); break;
        case 2: _t->titleChanged(); break;
        case 3: _t->syncWid(); break;
        case 4: _t->notifyModified(); break;
        case 5: _t->notifyFocusedIn(); break;
        case 6: _t->notifyFocusedOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ResourceInstance::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResourceInstance::uriChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ResourceInstance::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResourceInstance::mimetypeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ResourceInstance::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResourceInstance::titleChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ResourceInstance *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->uri(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->mimetype(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ResourceInstance *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUri(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: _t->setMimetype(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KActivities::Imports::ResourceInstance::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_KActivities__Imports__ResourceInstance.data,
    qt_meta_data_KActivities__Imports__ResourceInstance,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KActivities::Imports::ResourceInstance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KActivities::Imports::ResourceInstance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KActivities__Imports__ResourceInstance.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int KActivities::Imports::ResourceInstance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
void KActivities::Imports::ResourceInstance::uriChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KActivities::Imports::ResourceInstance::mimetypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KActivities::Imports::ResourceInstance::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
