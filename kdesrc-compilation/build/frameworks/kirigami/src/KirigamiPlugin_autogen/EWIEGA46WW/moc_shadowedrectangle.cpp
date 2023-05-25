/****************************************************************************
** Meta object code from reading C++ file 'shadowedrectangle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kirigami/src/shadowedrectangle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shadowedrectangle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BorderGroup_t {
    QByteArrayData data[5];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BorderGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BorderGroup_t qt_meta_stringdata_BorderGroup = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BorderGroup"
QT_MOC_LITERAL(1, 12, 7), // "changed"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "width"
QT_MOC_LITERAL(4, 27, 5) // "color"

    },
    "BorderGroup\0changed\0\0width\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BorderGroup[] = {

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
       3, QMetaType::QReal, 0x00495103,
       4, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void BorderGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BorderGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BorderGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BorderGroup::changed)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BorderGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->width(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BorderGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BorderGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BorderGroup.data,
    qt_meta_data_BorderGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BorderGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BorderGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BorderGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BorderGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void BorderGroup::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ShadowGroup_t {
    QByteArrayData data[7];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShadowGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShadowGroup_t qt_meta_stringdata_ShadowGroup = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ShadowGroup"
QT_MOC_LITERAL(1, 12, 7), // "changed"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "size"
QT_MOC_LITERAL(4, 26, 7), // "xOffset"
QT_MOC_LITERAL(5, 34, 7), // "yOffset"
QT_MOC_LITERAL(6, 42, 5) // "color"

    },
    "ShadowGroup\0changed\0\0size\0xOffset\0"
    "yOffset\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShadowGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495103,
       4, QMetaType::QReal, 0x00495103,
       5, QMetaType::QReal, 0x00495103,
       6, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void ShadowGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShadowGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShadowGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShadowGroup::changed)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ShadowGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->size(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->xOffset(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->yOffset(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ShadowGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSize(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setXOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setYOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ShadowGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ShadowGroup.data,
    qt_meta_data_ShadowGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShadowGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShadowGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShadowGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ShadowGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ShadowGroup::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_CornersGroup_t {
    QByteArrayData data[7];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CornersGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CornersGroup_t qt_meta_stringdata_CornersGroup = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CornersGroup"
QT_MOC_LITERAL(1, 13, 7), // "changed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 13), // "topLeftRadius"
QT_MOC_LITERAL(4, 36, 14), // "topRightRadius"
QT_MOC_LITERAL(5, 51, 16), // "bottomLeftRadius"
QT_MOC_LITERAL(6, 68, 17) // "bottomRightRadius"

    },
    "CornersGroup\0changed\0\0topLeftRadius\0"
    "topRightRadius\0bottomLeftRadius\0"
    "bottomRightRadius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CornersGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495003,
       4, QMetaType::QReal, 0x00495003,
       5, QMetaType::QReal, 0x00495003,
       6, QMetaType::QReal, 0x00495003,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void CornersGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CornersGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CornersGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CornersGroup::changed)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CornersGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->topLeft(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->topRight(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->bottomLeft(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->bottomRight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CornersGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTopLeft(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setTopRight(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setBottomLeft(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setBottomRight(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CornersGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CornersGroup.data,
    qt_meta_data_CornersGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CornersGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CornersGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CornersGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CornersGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CornersGroup::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ShadowedRectangle_t {
    QByteArrayData data[21];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShadowedRectangle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShadowedRectangle_t qt_meta_stringdata_ShadowedRectangle = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ShadowedRectangle"
QT_MOC_LITERAL(1, 18, 13), // "radiusChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "colorChanged"
QT_MOC_LITERAL(4, 46, 17), // "renderTypeChanged"
QT_MOC_LITERAL(5, 64, 24), // "softwareRenderingChanged"
QT_MOC_LITERAL(6, 89, 6), // "radius"
QT_MOC_LITERAL(7, 96, 5), // "color"
QT_MOC_LITERAL(8, 102, 6), // "border"
QT_MOC_LITERAL(9, 109, 12), // "BorderGroup*"
QT_MOC_LITERAL(10, 122, 6), // "shadow"
QT_MOC_LITERAL(11, 129, 12), // "ShadowGroup*"
QT_MOC_LITERAL(12, 142, 7), // "corners"
QT_MOC_LITERAL(13, 150, 13), // "CornersGroup*"
QT_MOC_LITERAL(14, 164, 10), // "renderType"
QT_MOC_LITERAL(15, 175, 10), // "RenderType"
QT_MOC_LITERAL(16, 186, 17), // "softwareRendering"
QT_MOC_LITERAL(17, 204, 4), // "Auto"
QT_MOC_LITERAL(18, 209, 11), // "HighQuality"
QT_MOC_LITERAL(19, 221, 10), // "LowQuality"
QT_MOC_LITERAL(20, 232, 8) // "Software"

    },
    "ShadowedRectangle\0radiusChanged\0\0"
    "colorChanged\0renderTypeChanged\0"
    "softwareRenderingChanged\0radius\0color\0"
    "border\0BorderGroup*\0shadow\0ShadowGroup*\0"
    "corners\0CornersGroup*\0renderType\0"
    "RenderType\0softwareRendering\0Auto\0"
    "HighQuality\0LowQuality\0Software"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShadowedRectangle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       7,   38, // properties
       1,   66, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QReal, 0x00495103,
       7, QMetaType::QColor, 0x00495103,
       8, 0x80000000 | 9, 0x00095409,
      10, 0x80000000 | 11, 0x00095409,
      12, 0x80000000 | 13, 0x00095409,
      14, 0x80000000 | 15, 0x0009510b,
      16, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,
       0,
       0,
       3,

 // enums: name, alias, flags, count, data
      15,   15, 0x0,    4,   71,

 // enum data: key, value
      17, uint(ShadowedRectangle::Auto),
      18, uint(ShadowedRectangle::HighQuality),
      19, uint(ShadowedRectangle::LowQuality),
      20, uint(ShadowedRectangle::Software),

       0        // eod
};

void ShadowedRectangle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShadowedRectangle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->radiusChanged(); break;
        case 1: _t->colorChanged(); break;
        case 2: _t->renderTypeChanged(); break;
        case 3: _t->softwareRenderingChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShadowedRectangle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShadowedRectangle::radiusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ShadowedRectangle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShadowedRectangle::colorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ShadowedRectangle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShadowedRectangle::renderTypeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ShadowedRectangle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShadowedRectangle::softwareRenderingChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BorderGroup* >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CornersGroup* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ShadowGroup* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ShadowedRectangle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->radius(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 2: *reinterpret_cast< BorderGroup**>(_v) = _t->border(); break;
        case 3: *reinterpret_cast< ShadowGroup**>(_v) = _t->shadow(); break;
        case 4: *reinterpret_cast< CornersGroup**>(_v) = _t->corners(); break;
        case 5: *reinterpret_cast< RenderType*>(_v) = _t->renderType(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isSoftwareRendering(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ShadowedRectangle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setRenderType(*reinterpret_cast< RenderType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ShadowedRectangle::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_ShadowedRectangle.data,
    qt_meta_data_ShadowedRectangle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShadowedRectangle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShadowedRectangle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShadowedRectangle.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int ShadowedRectangle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ShadowedRectangle::radiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ShadowedRectangle::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ShadowedRectangle::renderTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ShadowedRectangle::softwareRenderingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
