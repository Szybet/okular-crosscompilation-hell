/****************************************************************************
** Meta object code from reading C++ file 'avatar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kirigami/src/avatar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avatar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NameUtils_t {
    QByteArrayData data[6];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NameUtils_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NameUtils_t qt_meta_stringdata_NameUtils = {
    {
QT_MOC_LITERAL(0, 0, 9), // "NameUtils"
QT_MOC_LITERAL(1, 10, 18), // "initialsFromString"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "name"
QT_MOC_LITERAL(4, 35, 16), // "colorsFromString"
QT_MOC_LITERAL(5, 52, 29) // "isStringUnsuitableForInitials"

    },
    "NameUtils\0initialsFromString\0\0name\0"
    "colorsFromString\0isStringUnsuitableForInitials"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NameUtils[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x02 /* Public */,
       4,    1,   32,    2, 0x02 /* Public */,
       5,    1,   35,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QColor, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,

       0        // eod
};

void NameUtils::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NameUtils *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->initialsFromString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QColor _r = _t->colorsFromString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->isStringUnsuitableForInitials((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NameUtils::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NameUtils.data,
    qt_meta_data_NameUtils,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NameUtils::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NameUtils::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NameUtils.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NameUtils::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_AvatarGroup_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AvatarGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AvatarGroup_t qt_meta_stringdata_AvatarGroup = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AvatarGroup"
QT_MOC_LITERAL(1, 12, 17), // "mainActionChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 22), // "secondaryActionChanged"
QT_MOC_LITERAL(4, 54, 4), // "main"
QT_MOC_LITERAL(5, 59, 9) // "secondary"

    },
    "AvatarGroup\0mainActionChanged\0\0"
    "secondaryActionChanged\0main\0secondary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvatarGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QVariant, 0x00495003,
       5, QMetaType::QVariant, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void AvatarGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AvatarGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mainActionChanged(); break;
        case 1: _t->secondaryActionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AvatarGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarGroup::mainActionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AvatarGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarGroup::secondaryActionChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AvatarGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->mainAction; break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->secondaryAction; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AvatarGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->mainAction != *reinterpret_cast< QVariant*>(_v)) {
                _t->mainAction = *reinterpret_cast< QVariant*>(_v);
                Q_EMIT _t->mainActionChanged();
            }
            break;
        case 1:
            if (_t->secondaryAction != *reinterpret_cast< QVariant*>(_v)) {
                _t->secondaryAction = *reinterpret_cast< QVariant*>(_v);
                Q_EMIT _t->secondaryActionChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AvatarGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AvatarGroup.data,
    qt_meta_data_AvatarGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AvatarGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvatarGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AvatarGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AvatarGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AvatarGroup::mainActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AvatarGroup::secondaryActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
