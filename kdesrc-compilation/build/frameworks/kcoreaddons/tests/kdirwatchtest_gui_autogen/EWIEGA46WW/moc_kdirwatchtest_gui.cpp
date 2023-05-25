/****************************************************************************
** Meta object code from reading C++ file 'kdirwatchtest_gui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kcoreaddons/tests/kdirwatchtest_gui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdirwatchtest_gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDirWatchTest_GUI_t {
    QByteArrayData data[11];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDirWatchTest_GUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDirWatchTest_GUI_t qt_meta_stringdata_KDirWatchTest_GUI = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KDirWatchTest_GUI"
QT_MOC_LITERAL(1, 18, 14), // "slotNewClicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "slotDeleteClicked"
QT_MOC_LITERAL(4, 52, 8), // "slotDir1"
QT_MOC_LITERAL(5, 61, 4), // "path"
QT_MOC_LITERAL(6, 66, 8), // "slotDir2"
QT_MOC_LITERAL(7, 75, 8), // "slotDir3"
QT_MOC_LITERAL(8, 84, 9), // "slotDirty"
QT_MOC_LITERAL(9, 94, 11), // "slotCreated"
QT_MOC_LITERAL(10, 106, 11) // "slotDeleted"

    },
    "KDirWatchTest_GUI\0slotNewClicked\0\0"
    "slotDeleteClicked\0slotDir1\0path\0"
    "slotDir2\0slotDir3\0slotDirty\0slotCreated\0"
    "slotDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDirWatchTest_GUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x09 /* Protected */,
       3,    0,   55,    2, 0x09 /* Protected */,
       4,    1,   56,    2, 0x09 /* Protected */,
       6,    1,   59,    2, 0x09 /* Protected */,
       7,    1,   62,    2, 0x09 /* Protected */,
       8,    1,   65,    2, 0x09 /* Protected */,
       9,    1,   68,    2, 0x09 /* Protected */,
      10,    1,   71,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void KDirWatchTest_GUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KDirWatchTest_GUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotNewClicked(); break;
        case 1: _t->slotDeleteClicked(); break;
        case 2: _t->slotDir1((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotDir2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotDir3((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slotDirty((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->slotDeleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDirWatchTest_GUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KDirWatchTest_GUI.data,
    qt_meta_data_KDirWatchTest_GUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDirWatchTest_GUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDirWatchTest_GUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDirWatchTest_GUI.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KDirWatchTest_GUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
