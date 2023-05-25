/****************************************************************************
** Meta object code from reading C++ file 'pagerouter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kirigami/src/pagerouter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagerouter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParsedRoute_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParsedRoute_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParsedRoute_t qt_meta_stringdata_ParsedRoute = {
    {
QT_MOC_LITERAL(0, 0, 11) // "ParsedRoute"

    },
    "ParsedRoute"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParsedRoute[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ParsedRoute::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ParsedRoute::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ParsedRoute.data,
    qt_meta_data_ParsedRoute,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParsedRoute::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParsedRoute::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParsedRoute.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ParsedRoute::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PreloadRouteGroup_t {
    QByteArrayData data[6];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreloadRouteGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreloadRouteGroup_t qt_meta_stringdata_PreloadRouteGroup = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PreloadRouteGroup"
QT_MOC_LITERAL(1, 18, 7), // "changed"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "route"
QT_MOC_LITERAL(4, 33, 8), // "QJSValue"
QT_MOC_LITERAL(5, 42, 4) // "when"

    },
    "PreloadRouteGroup\0changed\0\0route\0"
    "QJSValue\0when"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreloadRouteGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x0049510b,
       5, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void PreloadRouteGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PreloadRouteGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PreloadRouteGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreloadRouteGroup::changed)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PreloadRouteGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QJSValue*>(_v) = _t->m_route; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->m_when; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PreloadRouteGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRoute(*reinterpret_cast< QJSValue*>(_v)); break;
        case 1:
            if (_t->m_when != *reinterpret_cast< bool*>(_v)) {
                _t->m_when = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->changed();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PreloadRouteGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PreloadRouteGroup.data,
    qt_meta_data_PreloadRouteGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PreloadRouteGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreloadRouteGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PreloadRouteGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PreloadRouteGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PreloadRouteGroup::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_PageRoute_t {
    QByteArrayData data[10];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageRoute_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageRoute_t qt_meta_stringdata_PageRoute = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PageRoute"
QT_MOC_LITERAL(1, 10, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 26, 9), // "component"
QT_MOC_LITERAL(3, 36, 18), // "preloadDataChanged"
QT_MOC_LITERAL(4, 55, 0), // ""
QT_MOC_LITERAL(5, 56, 14), // "preloadChanged"
QT_MOC_LITERAL(6, 71, 4), // "name"
QT_MOC_LITERAL(7, 76, 14), // "QQmlComponent*"
QT_MOC_LITERAL(8, 91, 5), // "cache"
QT_MOC_LITERAL(9, 97, 4) // "cost"

    },
    "PageRoute\0DefaultProperty\0component\0"
    "preloadDataChanged\0\0preloadChanged\0"
    "name\0QQmlComponent*\0cache\0cost"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageRoute[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       4,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   26,    4, 0x06 /* Public */,
       5,    0,   27,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00095003,
       2, 0x80000000 | 7, 0x0009500b,
       8, QMetaType::Bool, 0x00095003,
       9, QMetaType::Int, 0x00095003,

       0        // eod
};

void PageRoute::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PageRoute *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->preloadDataChanged(); break;
        case 1: _t->preloadChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PageRoute::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageRoute::preloadDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PageRoute::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageRoute::preloadChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PageRoute *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QQmlComponent**>(_v) = _t->component(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->cache(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->m_cost; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PageRoute *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_name != *reinterpret_cast< QString*>(_v)) {
                _t->m_name = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->m_component != *reinterpret_cast< QQmlComponent**>(_v)) {
                _t->m_component = *reinterpret_cast< QQmlComponent**>(_v);
            }
            break;
        case 2:
            if (_t->m_cache != *reinterpret_cast< bool*>(_v)) {
                _t->m_cache = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 3:
            if (_t->m_cost != *reinterpret_cast< int*>(_v)) {
                _t->m_cost = *reinterpret_cast< int*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PageRoute::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PageRoute.data,
    qt_meta_data_PageRoute,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PageRoute::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageRoute::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageRoute.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PageRoute::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void PageRoute::preloadDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PageRoute::preloadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_PageRouter_t {
    QByteArrayData data[25];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageRouter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageRouter_t qt_meta_stringdata_PageRouter = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PageRouter"
QT_MOC_LITERAL(1, 11, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 27, 6), // "routes"
QT_MOC_LITERAL(3, 34, 13), // "routesChanged"
QT_MOC_LITERAL(4, 48, 0), // ""
QT_MOC_LITERAL(5, 49, 19), // "initialRouteChanged"
QT_MOC_LITERAL(6, 69, 16), // "pageStackChanged"
QT_MOC_LITERAL(7, 86, 19), // "currentIndexChanged"
QT_MOC_LITERAL(8, 106, 17), // "navigationChanged"
QT_MOC_LITERAL(9, 124, 15), // "navigateToRoute"
QT_MOC_LITERAL(10, 140, 8), // "QJSValue"
QT_MOC_LITERAL(11, 149, 5), // "route"
QT_MOC_LITERAL(12, 155, 11), // "routeActive"
QT_MOC_LITERAL(13, 167, 9), // "pushRoute"
QT_MOC_LITERAL(14, 177, 8), // "popRoute"
QT_MOC_LITERAL(15, 186, 11), // "bringToView"
QT_MOC_LITERAL(16, 198, 13), // "currentRoutes"
QT_MOC_LITERAL(17, 212, 27), // "QQmlListProperty<PageRoute>"
QT_MOC_LITERAL(18, 240, 12), // "initialRoute"
QT_MOC_LITERAL(19, 253, 9), // "pageStack"
QT_MOC_LITERAL(20, 263, 11), // "ColumnView*"
QT_MOC_LITERAL(21, 275, 13), // "cacheCapacity"
QT_MOC_LITERAL(22, 289, 21), // "preloadedPoolCapacity"
QT_MOC_LITERAL(23, 311, 6), // "params"
QT_MOC_LITERAL(24, 318, 16) // "QQmlPropertyMap*"

    },
    "PageRouter\0DefaultProperty\0routes\0"
    "routesChanged\0\0initialRouteChanged\0"
    "pageStackChanged\0currentIndexChanged\0"
    "navigationChanged\0navigateToRoute\0"
    "QJSValue\0route\0routeActive\0pushRoute\0"
    "popRoute\0bringToView\0currentRoutes\0"
    "QQmlListProperty<PageRoute>\0initialRoute\0"
    "pageStack\0ColumnView*\0cacheCapacity\0"
    "preloadedPoolCapacity\0params\0"
    "QQmlPropertyMap*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageRouter[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      11,   16, // methods
       6,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   71,    4, 0x06 /* Public */,
       5,    0,   72,    4, 0x06 /* Public */,
       6,    0,   73,    4, 0x06 /* Public */,
       7,    0,   74,    4, 0x06 /* Public */,
       8,    0,   75,    4, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    1,   76,    4, 0x02 /* Public */,
      12,    1,   79,    4, 0x02 /* Public */,
      13,    1,   82,    4, 0x02 /* Public */,
      14,    0,   85,    4, 0x02 /* Public */,
      15,    1,   86,    4, 0x02 /* Public */,
      16,    0,   89,    4, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Bool, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    0x80000000 | 10,

 // properties: name, type, flags
       2, 0x80000000 | 17, 0x00095009,
      18, 0x80000000 | 10, 0x0049510b,
      19, 0x80000000 | 20, 0x0049500b,
      21, QMetaType::Int, 0x00095103,
      22, QMetaType::Int, 0x00095103,
      23, 0x80000000 | 24, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,
       0,
       0,

       0        // eod
};

void PageRouter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PageRouter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->routesChanged(); break;
        case 1: _t->initialRouteChanged(); break;
        case 2: _t->pageStackChanged(); break;
        case 3: _t->currentIndexChanged(); break;
        case 4: _t->navigationChanged(); break;
        case 5: _t->navigateToRoute((*reinterpret_cast< QJSValue(*)>(_a[1]))); break;
        case 6: { bool _r = _t->routeActive((*reinterpret_cast< QJSValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->pushRoute((*reinterpret_cast< QJSValue(*)>(_a[1]))); break;
        case 8: _t->popRoute(); break;
        case 9: _t->bringToView((*reinterpret_cast< QJSValue(*)>(_a[1]))); break;
        case 10: { QJSValue _r = _t->currentRoutes();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PageRouter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageRouter::routesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PageRouter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageRouter::initialRouteChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PageRouter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageRouter::pageStackChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PageRouter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageRouter::currentIndexChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PageRouter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageRouter::navigationChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ColumnView* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlPropertyMap* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PageRouter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<PageRoute>*>(_v) = _t->routes(); break;
        case 1: *reinterpret_cast< QJSValue*>(_v) = _t->initialRoute(); break;
        case 2: *reinterpret_cast< ColumnView**>(_v) = _t->m_pageStack; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->cacheCapacity(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->preloadedPoolCapacity(); break;
        case 5: *reinterpret_cast< QQmlPropertyMap**>(_v) = _t->params(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PageRouter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setInitialRoute(*reinterpret_cast< QJSValue*>(_v)); break;
        case 2:
            if (_t->m_pageStack != *reinterpret_cast< ColumnView**>(_v)) {
                _t->m_pageStack = *reinterpret_cast< ColumnView**>(_v);
                Q_EMIT _t->pageStackChanged();
            }
            break;
        case 3: _t->setCacheCapacity(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setPreloadedPoolCapacity(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PageRouter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PageRouter.data,
    qt_meta_data_PageRouter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PageRouter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageRouter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageRouter.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int PageRouter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PageRouter::routesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PageRouter::initialRouteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PageRouter::pageStackChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PageRouter::currentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PageRouter::navigationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_PageRouterAttached_t {
    QByteArrayData data[25];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageRouterAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageRouterAttached_t qt_meta_stringdata_PageRouterAttached = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PageRouterAttached"
QT_MOC_LITERAL(1, 19, 13), // "routerChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "dataChanged"
QT_MOC_LITERAL(4, 46, 16), // "isCurrentChanged"
QT_MOC_LITERAL(5, 63, 17), // "navigationChanged"
QT_MOC_LITERAL(6, 81, 19), // "watchedRouteChanged"
QT_MOC_LITERAL(7, 101, 15), // "navigateToRoute"
QT_MOC_LITERAL(8, 117, 8), // "QJSValue"
QT_MOC_LITERAL(9, 126, 5), // "route"
QT_MOC_LITERAL(10, 132, 11), // "routeActive"
QT_MOC_LITERAL(11, 144, 9), // "pushRoute"
QT_MOC_LITERAL(12, 154, 8), // "popRoute"
QT_MOC_LITERAL(13, 163, 11), // "bringToView"
QT_MOC_LITERAL(14, 175, 12), // "pushFromHere"
QT_MOC_LITERAL(15, 188, 11), // "popFromHere"
QT_MOC_LITERAL(16, 200, 15), // "replaceFromHere"
QT_MOC_LITERAL(17, 216, 6), // "router"
QT_MOC_LITERAL(18, 223, 11), // "PageRouter*"
QT_MOC_LITERAL(19, 235, 4), // "data"
QT_MOC_LITERAL(20, 240, 9), // "isCurrent"
QT_MOC_LITERAL(21, 250, 12), // "watchedRoute"
QT_MOC_LITERAL(22, 263, 7), // "preload"
QT_MOC_LITERAL(23, 271, 18), // "PreloadRouteGroup*"
QT_MOC_LITERAL(24, 290, 18) // "watchedRouteActive"

    },
    "PageRouterAttached\0routerChanged\0\0"
    "dataChanged\0isCurrentChanged\0"
    "navigationChanged\0watchedRouteChanged\0"
    "navigateToRoute\0QJSValue\0route\0"
    "routeActive\0pushRoute\0popRoute\0"
    "bringToView\0pushFromHere\0popFromHere\0"
    "replaceFromHere\0router\0PageRouter*\0"
    "data\0isCurrent\0watchedRoute\0preload\0"
    "PreloadRouteGroup*\0watchedRouteActive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageRouterAttached[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   84,    2, 0x02 /* Public */,
      10,    1,   87,    2, 0x02 /* Public */,
      11,    1,   90,    2, 0x02 /* Public */,
      12,    0,   93,    2, 0x02 /* Public */,
      13,    1,   94,    2, 0x02 /* Public */,
      14,    1,   97,    2, 0x02 /* Public */,
      15,    0,  100,    2, 0x02 /* Public */,
      16,    1,  101,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x0049510b,
      19, QMetaType::QVariant, 0x00495003,
      20, QMetaType::Bool, 0x00495001,
      21, 0x80000000 | 8, 0x0049510b,
      22, 0x80000000 | 23, 0x00095009,
      24, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       4,
       0,
       3,

       0        // eod
};

void PageRouterAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PageRouterAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->routerChanged(); break;
        case 1: _t->dataChanged(); break;
        case 2: _t->isCurrentChanged(); break;
        case 3: _t->navigationChanged(); break;
        case 4: _t->watchedRouteChanged(); break;
        case 5: _t->navigateToRoute((*reinterpret_cast< QJSValue(*)>(_a[1]))); break;
        case 6: { bool _r = _t->routeActive((*reinterpret_cast< QJSValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->pushRoute((*reinterpret_cast< QJSValue(*)>(_a[1]))); break;
        case 8: _t->popRoute(); break;
        case 9: _t->bringToView((*reinterpret_cast< QJSValue(*)>(_a[1]))); break;
        case 10: _t->pushFromHere((*reinterpret_cast< QJSValue(*)>(_a[1]))); break;
        case 11: _t->popFromHere(); break;
        case 12: _t->replaceFromHere((*reinterpret_cast< QJSValue(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PageRouterAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageRouterAttached::routerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PageRouterAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageRouterAttached::dataChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PageRouterAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageRouterAttached::isCurrentChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PageRouterAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageRouterAttached::navigationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PageRouterAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageRouterAttached::watchedRouteChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PageRouter* >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PreloadRouteGroup* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PageRouterAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PageRouter**>(_v) = _t->router(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->data(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isCurrent(); break;
        case 3: *reinterpret_cast< QJSValue*>(_v) = _t->watchedRoute(); break;
        case 4: *reinterpret_cast< PreloadRouteGroup**>(_v) = _t->preload(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->watchedRouteActive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PageRouterAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRouter(*reinterpret_cast< PageRouter**>(_v)); break;
        case 1:
            if (_t->m_data != *reinterpret_cast< QVariant*>(_v)) {
                _t->m_data = *reinterpret_cast< QVariant*>(_v);
                Q_EMIT _t->dataChanged();
            }
            break;
        case 3: _t->setWatchedRoute(*reinterpret_cast< QJSValue*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PageRouterAttached::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PageRouterAttached.data,
    qt_meta_data_PageRouterAttached,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PageRouterAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageRouterAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageRouterAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PageRouterAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PageRouterAttached::routerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PageRouterAttached::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PageRouterAttached::isCurrentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PageRouterAttached::navigationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PageRouterAttached::watchedRouteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
