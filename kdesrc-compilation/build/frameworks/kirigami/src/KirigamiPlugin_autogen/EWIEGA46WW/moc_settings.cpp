/****************************************************************************
** Meta object code from reading C++ file 'settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kirigami/src/settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Settings_t {
    QByteArrayData data[15];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Settings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Settings_t qt_meta_stringdata_Settings = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Settings"
QT_MOC_LITERAL(1, 9, 26), // "tabletModeAvailableChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "tabletModeChanged"
QT_MOC_LITERAL(4, 55, 15), // "isMobileChanged"
QT_MOC_LITERAL(5, 71, 29), // "hasTransientTouchInputChanged"
QT_MOC_LITERAL(6, 101, 19), // "tabletModeAvailable"
QT_MOC_LITERAL(7, 121, 8), // "isMobile"
QT_MOC_LITERAL(8, 130, 10), // "tabletMode"
QT_MOC_LITERAL(9, 141, 18), // "hasPlatformMenuBar"
QT_MOC_LITERAL(10, 160, 22), // "hasTransientTouchInput"
QT_MOC_LITERAL(11, 183, 5), // "style"
QT_MOC_LITERAL(12, 189, 21), // "mouseWheelScrollLines"
QT_MOC_LITERAL(13, 211, 11), // "information"
QT_MOC_LITERAL(14, 223, 21) // "applicationWindowIcon"

    },
    "Settings\0tabletModeAvailableChanged\0"
    "\0tabletModeChanged\0isMobileChanged\0"
    "hasTransientTouchInputChanged\0"
    "tabletModeAvailable\0isMobile\0tabletMode\0"
    "hasPlatformMenuBar\0hasTransientTouchInput\0"
    "style\0mouseWheelScrollLines\0information\0"
    "applicationWindowIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Settings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       9,   38, // properties
       0,    0, // enums/sets
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
       6, QMetaType::Bool, 0x00495001,
       7, QMetaType::Bool, 0x00495001,
       8, QMetaType::Bool, 0x00495001,
       9, QMetaType::Bool, 0x00095401,
      10, QMetaType::Bool, 0x00495001,
      11, QMetaType::QString, 0x00095401,
      12, QMetaType::Int, 0x00095401,
      13, QMetaType::QStringList, 0x00095401,
      14, QMetaType::QVariant, 0x00095401,

 // properties: notify_signal_id
       0,
       2,
       1,
       0,
       3,
       0,
       0,
       0,
       0,

       0        // eod
};

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Settings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tabletModeAvailableChanged(); break;
        case 1: _t->tabletModeChanged(); break;
        case 2: _t->isMobileChanged(); break;
        case 3: _t->hasTransientTouchInputChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Settings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::tabletModeAvailableChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Settings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::tabletModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Settings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::isMobileChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Settings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::hasTransientTouchInputChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Settings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isTabletModeAvailable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isMobile(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->tabletMode(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hasPlatformMenuBar(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasTransientTouchInput(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->style(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->mouseWheelScrollLines(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->information(); break;
        case 8: *reinterpret_cast< QVariant*>(_v) = _t->applicationWindowIcon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Settings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Settings.data,
    qt_meta_data_Settings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Settings.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Settings::tabletModeAvailableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Settings::tabletModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Settings::isMobileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Settings::hasTransientTouchInputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
