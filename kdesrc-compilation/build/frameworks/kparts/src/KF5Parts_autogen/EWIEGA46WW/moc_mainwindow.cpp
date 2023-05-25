/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kparts/src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KParts__MainWindow_t {
    QByteArrayData data[10];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KParts__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KParts__MainWindow_t qt_meta_stringdata_KParts__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 18), // "KParts::MainWindow"
QT_MOC_LITERAL(1, 19, 17), // "configureToolbars"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 9), // "createGUI"
QT_MOC_LITERAL(4, 48, 13), // "KParts::Part*"
QT_MOC_LITERAL(5, 62, 4), // "part"
QT_MOC_LITERAL(6, 67, 22), // "setWindowTitleHandling"
QT_MOC_LITERAL(7, 90, 7), // "enabled"
QT_MOC_LITERAL(8, 98, 20), // "slotSetStatusBarText"
QT_MOC_LITERAL(9, 119, 20) // "saveNewToolbarConfig"

    },
    "KParts::MainWindow\0configureToolbars\0"
    "\0createGUI\0KParts::Part*\0part\0"
    "setWindowTitleHandling\0enabled\0"
    "slotSetStatusBarText\0saveNewToolbarConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KParts__MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x09 /* Protected */,
       6,    1,   43,    2, 0x09 /* Protected */,
       8,    1,   46,    2, 0x09 /* Protected */,
       9,    0,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void KParts::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configureToolbars(); break;
        case 1: _t->createGUI((*reinterpret_cast< KParts::Part*(*)>(_a[1]))); break;
        case 2: _t->setWindowTitleHandling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotSetStatusBarText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->saveNewToolbarConfig(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KParts::Part* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KParts::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<KXmlGuiWindow::staticMetaObject>(),
    qt_meta_stringdata_KParts__MainWindow.data,
    qt_meta_data_KParts__MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KParts::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KParts::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KParts__MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PartBase"))
        return static_cast< PartBase*>(this);
    return KXmlGuiWindow::qt_metacast(_clname);
}

int KParts::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KXmlGuiWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
