/****************************************************************************
** Meta object code from reading C++ file 'kxmlguiwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kxmlgui/src/kxmlguiwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kxmlguiwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KXmlGuiWindow_t {
    QByteArrayData data[18];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KXmlGuiWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KXmlGuiWindow_t qt_meta_stringdata_KXmlGuiWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KXmlGuiWindow"
QT_MOC_LITERAL(1, 14, 17), // "configureToolbars"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "slotStateChanged"
QT_MOC_LITERAL(4, 50, 8), // "newstate"
QT_MOC_LITERAL(5, 59, 7), // "reverse"
QT_MOC_LITERAL(6, 67, 20), // "saveNewToolbarConfig"
QT_MOC_LITERAL(7, 88, 10), // "hasMenuBar"
QT_MOC_LITERAL(8, 99, 16), // "autoSaveSettings"
QT_MOC_LITERAL(9, 116, 13), // "autoSaveGroup"
QT_MOC_LITERAL(10, 130, 26), // "standardToolBarMenuEnabled"
QT_MOC_LITERAL(11, 157, 20), // "StandardWindowOption"
QT_MOC_LITERAL(12, 178, 7), // "ToolBar"
QT_MOC_LITERAL(13, 186, 4), // "Keys"
QT_MOC_LITERAL(14, 191, 9), // "StatusBar"
QT_MOC_LITERAL(15, 201, 4), // "Save"
QT_MOC_LITERAL(16, 206, 6), // "Create"
QT_MOC_LITERAL(17, 213, 7) // "Default"

    },
    "KXmlGuiWindow\0configureToolbars\0\0"
    "slotStateChanged\0newstate\0reverse\0"
    "saveNewToolbarConfig\0hasMenuBar\0"
    "autoSaveSettings\0autoSaveGroup\0"
    "standardToolBarMenuEnabled\0"
    "StandardWindowOption\0ToolBar\0Keys\0"
    "StatusBar\0Save\0Create\0Default"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KXmlGuiWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   44, // properties
       1,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       3,    2,   38,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    4,    5,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00095001,
       8, QMetaType::Bool, 0x00095001,
       9, QMetaType::QString, 0x00095001,
      10, QMetaType::Bool, 0x00095103,

 // enums: name, alias, flags, count, data
      11,   11, 0x1,    6,   61,

 // enum data: key, value
      12, uint(KXmlGuiWindow::ToolBar),
      13, uint(KXmlGuiWindow::Keys),
      14, uint(KXmlGuiWindow::StatusBar),
      15, uint(KXmlGuiWindow::Save),
      16, uint(KXmlGuiWindow::Create),
      17, uint(KXmlGuiWindow::Default),

       0        // eod
};

void KXmlGuiWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KXmlGuiWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configureToolbars(); break;
        case 1: _t->slotStateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotStateChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->saveNewToolbarConfig(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KXmlGuiWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasMenuBar(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->autoSaveSettings(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->autoSaveGroup(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isStandardToolBarMenuEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KXmlGuiWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setStandardToolBarMenuEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KXmlGuiWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<KMainWindow::staticMetaObject>(),
    qt_meta_stringdata_KXmlGuiWindow.data,
    qt_meta_data_KXmlGuiWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KXmlGuiWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KXmlGuiWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KXmlGuiWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KXMLGUIBuilder"))
        return static_cast< KXMLGUIBuilder*>(this);
    if (!strcmp(_clname, "KXMLGUIClient"))
        return static_cast< KXMLGUIClient*>(this);
    return KMainWindow::qt_metacast(_clname);
}

int KXmlGuiWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
