/****************************************************************************
** Meta object code from reading C++ file 'kmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kxmlgui/src/kmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KMainWindow_t {
    QByteArrayData data[16];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KMainWindow_t qt_meta_stringdata_KMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "KMainWindow"
QT_MOC_LITERAL(1, 12, 10), // "setCaption"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "caption"
QT_MOC_LITERAL(4, 32, 8), // "modified"
QT_MOC_LITERAL(5, 41, 15), // "setPlainCaption"
QT_MOC_LITERAL(6, 57, 16), // "appHelpActivated"
QT_MOC_LITERAL(7, 74, 16), // "setSettingsDirty"
QT_MOC_LITERAL(8, 91, 20), // "showAboutApplication"
QT_MOC_LITERAL(9, 112, 20), // "saveAutoSaveSettings"
QT_MOC_LITERAL(10, 133, 22), // "_k_slotSettingsChanged"
QT_MOC_LITERAL(11, 156, 23), // "_k_slotSaveAutoSaveSize"
QT_MOC_LITERAL(12, 180, 27), // "_k_slotSaveAutoSavePosition"
QT_MOC_LITERAL(13, 208, 10), // "hasMenuBar"
QT_MOC_LITERAL(14, 219, 16), // "autoSaveSettings"
QT_MOC_LITERAL(15, 236, 13) // "autoSaveGroup"

    },
    "KMainWindow\0setCaption\0\0caption\0"
    "modified\0setPlainCaption\0appHelpActivated\0"
    "setSettingsDirty\0showAboutApplication\0"
    "saveAutoSaveSettings\0_k_slotSettingsChanged\0"
    "_k_slotSaveAutoSaveSize\0"
    "_k_slotSaveAutoSavePosition\0hasMenuBar\0"
    "autoSaveSettings\0autoSaveGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       1,    2,   67,    2, 0x0a /* Public */,
       5,    1,   72,    2, 0x0a /* Public */,
       6,    0,   75,    2, 0x0a /* Public */,
       7,    0,   76,    2, 0x0a /* Public */,
       8,    0,   77,    2, 0x09 /* Protected */,
       9,    0,   78,    2, 0x09 /* Protected */,
      10,    1,   79,    2, 0x08 /* Private */,
      11,    0,   82,    2, 0x08 /* Private */,
      12,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00095001,
      14, QMetaType::Bool, 0x00095001,
      15, QMetaType::QString, 0x00095001,

       0        // eod
};

void KMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCaption((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setCaption((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->setPlainCaption((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->appHelpActivated(); break;
        case 4: _t->setSettingsDirty(); break;
        case 5: _t->showAboutApplication(); break;
        case 6: _t->saveAutoSaveSettings(); break;
        case 7: _t->d_func()->_k_slotSettingsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->d_func()->_k_slotSaveAutoSaveSize(); break;
        case 9: _t->d_func()->_k_slotSaveAutoSavePosition(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KMainWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasMenuBar(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->autoSaveSettings(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->autoSaveGroup(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_KMainWindow.data,
    qt_meta_data_KMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int KMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
