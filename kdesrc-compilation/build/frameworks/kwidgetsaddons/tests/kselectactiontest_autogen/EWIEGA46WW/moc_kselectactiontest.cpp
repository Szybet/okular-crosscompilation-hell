/****************************************************************************
** Meta object code from reading C++ file 'kselectactiontest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/tests/kselectactiontest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kselectactiontest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelectActionTest_t {
    QByteArrayData data[13];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectActionTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectActionTest_t qt_meta_stringdata_SelectActionTest = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SelectActionTest"
QT_MOC_LITERAL(1, 17, 15), // "actionTriggered"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "QAction*"
QT_MOC_LITERAL(4, 43, 6), // "action"
QT_MOC_LITERAL(5, 50, 14), // "indexTriggered"
QT_MOC_LITERAL(6, 65, 5), // "index"
QT_MOC_LITERAL(7, 71, 13), // "textTriggered"
QT_MOC_LITERAL(8, 85, 4), // "text"
QT_MOC_LITERAL(9, 90, 19), // "slotActionTriggered"
QT_MOC_LITERAL(10, 110, 5), // "state"
QT_MOC_LITERAL(11, 116, 9), // "addAction"
QT_MOC_LITERAL(12, 126, 12) // "removeAction"

    },
    "SelectActionTest\0actionTriggered\0\0"
    "QAction*\0action\0indexTriggered\0index\0"
    "textTriggered\0text\0slotActionTriggered\0"
    "state\0addAction\0removeAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectActionTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
       9,    1,   53,    2, 0x0a /* Public */,
      11,    0,   56,    2, 0x0a /* Public */,
      12,    0,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SelectActionTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectActionTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->indexTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->textTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->addAction(); break;
        case 5: _t->removeAction(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SelectActionTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_SelectActionTest.data,
    qt_meta_data_SelectActionTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SelectActionTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectActionTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectActionTest.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SelectActionTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
