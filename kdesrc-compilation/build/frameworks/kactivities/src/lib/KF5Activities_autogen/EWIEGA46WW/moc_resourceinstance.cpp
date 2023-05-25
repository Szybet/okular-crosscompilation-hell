/****************************************************************************
** Meta object code from reading C++ file 'resourceinstance.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kactivities/src/lib/resourceinstance.h"
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
struct qt_meta_stringdata_KActivities__ResourceInstance_t {
    QByteArrayData data[15];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KActivities__ResourceInstance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KActivities__ResourceInstance_t qt_meta_stringdata_KActivities__ResourceInstance = {
    {
QT_MOC_LITERAL(0, 0, 29), // "KActivities::ResourceInstance"
QT_MOC_LITERAL(1, 30, 13), // "requestsFocus"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 14), // "notifyModified"
QT_MOC_LITERAL(4, 60, 15), // "notifyFocusedIn"
QT_MOC_LITERAL(5, 76, 16), // "notifyFocusedOut"
QT_MOC_LITERAL(6, 93, 6), // "setUri"
QT_MOC_LITERAL(7, 100, 6), // "newUri"
QT_MOC_LITERAL(8, 107, 11), // "setMimetype"
QT_MOC_LITERAL(9, 119, 8), // "mimetype"
QT_MOC_LITERAL(10, 128, 8), // "setTitle"
QT_MOC_LITERAL(11, 137, 5), // "title"
QT_MOC_LITERAL(12, 143, 3), // "uri"
QT_MOC_LITERAL(13, 147, 5), // "winId"
QT_MOC_LITERAL(14, 153, 8) // "quintptr"

    },
    "KActivities::ResourceInstance\0"
    "requestsFocus\0\0notifyModified\0"
    "notifyFocusedIn\0notifyFocusedOut\0"
    "setUri\0newUri\0setMimetype\0mimetype\0"
    "setTitle\0title\0uri\0winId\0quintptr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KActivities__ResourceInstance[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,

 // properties: name, type, flags
      12, QMetaType::QUrl, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      11, QMetaType::QString, 0x00095103,
      13, 0x80000000 | 14, 0x00095009,

       0        // eod
};

void KActivities::ResourceInstance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ResourceInstance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestsFocus(); break;
        case 1: _t->notifyModified(); break;
        case 2: _t->notifyFocusedIn(); break;
        case 3: _t->notifyFocusedOut(); break;
        case 4: _t->setUri((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->setMimetype((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ResourceInstance::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResourceInstance::requestsFocus)) {
                *result = 0;
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
        case 3: *reinterpret_cast< quintptr*>(_v) = _t->winId(); break;
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
}

QT_INIT_METAOBJECT const QMetaObject KActivities::ResourceInstance::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KActivities__ResourceInstance.data,
    qt_meta_data_KActivities__ResourceInstance,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KActivities::ResourceInstance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KActivities::ResourceInstance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KActivities__ResourceInstance.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KActivities::ResourceInstance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void KActivities::ResourceInstance::requestsFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
