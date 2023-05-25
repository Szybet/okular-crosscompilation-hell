/****************************************************************************
** Meta object code from reading C++ file 'component.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kglobalaccel/src/runtime/component.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'component.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Component_t {
    QByteArrayData data[24];
    char stringdata0[376];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Component_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Component_t qt_meta_stringdata_Component = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Component"
QT_MOC_LITERAL(1, 10, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 26, 30), // "org.kde.kglobalaccel.Component"
QT_MOC_LITERAL(3, 57, 21), // "globalShortcutPressed"
QT_MOC_LITERAL(4, 79, 0), // ""
QT_MOC_LITERAL(5, 80, 15), // "componentUnique"
QT_MOC_LITERAL(6, 96, 14), // "shortcutUnique"
QT_MOC_LITERAL(7, 111, 9), // "timestamp"
QT_MOC_LITERAL(8, 121, 22), // "globalShortcutReleased"
QT_MOC_LITERAL(9, 144, 7), // "cleanUp"
QT_MOC_LITERAL(10, 152, 8), // "isActive"
QT_MOC_LITERAL(11, 161, 13), // "shortcutNames"
QT_MOC_LITERAL(12, 175, 7), // "context"
QT_MOC_LITERAL(13, 183, 16), // "allShortcutInfos"
QT_MOC_LITERAL(14, 200, 26), // "QList<KGlobalShortcutInfo>"
QT_MOC_LITERAL(15, 227, 19), // "getShortcutContexts"
QT_MOC_LITERAL(16, 247, 25), // "emitGlobalShortcutPressed"
QT_MOC_LITERAL(17, 273, 14), // "GlobalShortcut"
QT_MOC_LITERAL(18, 288, 8), // "shortcut"
QT_MOC_LITERAL(19, 297, 26), // "emitGlobalShortcutReleased"
QT_MOC_LITERAL(20, 324, 14), // "invokeShortcut"
QT_MOC_LITERAL(21, 339, 12), // "shortcutName"
QT_MOC_LITERAL(22, 352, 12), // "friendlyName"
QT_MOC_LITERAL(23, 365, 10) // "uniqueName"

    },
    "Component\0D-Bus Interface\0"
    "org.kde.kglobalaccel.Component\0"
    "globalShortcutPressed\0\0componentUnique\0"
    "shortcutUnique\0timestamp\0"
    "globalShortcutReleased\0cleanUp\0isActive\0"
    "shortcutNames\0context\0allShortcutInfos\0"
    "QList<KGlobalShortcutInfo>\0"
    "getShortcutContexts\0emitGlobalShortcutPressed\0"
    "GlobalShortcut\0shortcut\0"
    "emitGlobalShortcutReleased\0invokeShortcut\0"
    "shortcutName\0friendlyName\0uniqueName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Component[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      13,   16, // methods
       2,  120, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    3,   81,    4, 0x46 /* Public | isScriptable */,
       8,    3,   88,    4, 0x46 /* Public | isScriptable */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   95,    4, 0x4a /* Public | isScriptable */,
      10,    0,   96,    4, 0x4a /* Public | isScriptable */,
      11,    1,   97,    4, 0x4a /* Public | isScriptable */,
      11,    0,  100,    4, 0x6a /* Public | MethodCloned | isScriptable */,
      13,    1,  101,    4, 0x4a /* Public | isScriptable */,
      13,    0,  104,    4, 0x6a /* Public | MethodCloned | isScriptable */,
      15,    0,  105,    4, 0x4a /* Public | isScriptable */,
      16,    1,  106,    4, 0x0a /* Public */,
      19,    1,  109,    4, 0x0a /* Public */,
      20,    2,  112,    4, 0x4a /* Public | isScriptable */,
      20,    1,  117,    4, 0x6a /* Public | MethodCloned | isScriptable */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::LongLong,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::LongLong,    5,    6,    7,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QStringList, QMetaType::QString,   12,
    QMetaType::QStringList,
    0x80000000 | 14, QMetaType::QString,   12,
    0x80000000 | 14,
    QMetaType::QStringList,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   21,   12,
    QMetaType::Void, QMetaType::QString,   21,

 // properties: name, type, flags
      22, QMetaType::QString, 0x00095001,
      23, QMetaType::QString, 0x00095001,

       0        // eod
};

void Component::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Component *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->globalShortcutPressed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< qlonglong(*)>(_a[3]))); break;
        case 1: _t->globalShortcutReleased((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< qlonglong(*)>(_a[3]))); break;
        case 2: { bool _r = _t->cleanUp();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->isActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { QStringList _r = _t->shortcutNames((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 5: { QStringList _r = _t->shortcutNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 6: { QList<KGlobalShortcutInfo> _r = _t->allShortcutInfos((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<KGlobalShortcutInfo>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QList<KGlobalShortcutInfo> _r = _t->allShortcutInfos();
            if (_a[0]) *reinterpret_cast< QList<KGlobalShortcutInfo>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QStringList _r = _t->getShortcutContexts();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->emitGlobalShortcutPressed((*reinterpret_cast< const GlobalShortcut(*)>(_a[1]))); break;
        case 10: _t->emitGlobalShortcutReleased((*reinterpret_cast< const GlobalShortcut(*)>(_a[1]))); break;
        case 11: _t->invokeShortcut((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->invokeShortcut((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Component::*)(const QString & , const QString & , qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Component::globalShortcutPressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Component::*)(const QString & , const QString & , qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Component::globalShortcutReleased)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Component *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->friendlyName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->uniqueName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Component::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Component.data,
    qt_meta_data_Component,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Component::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Component::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Component.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Component::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void Component::globalShortcutPressed(const QString & _t1, const QString & _t2, qlonglong _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Component::globalShortcutReleased(const QString & _t1, const QString & _t2, qlonglong _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
