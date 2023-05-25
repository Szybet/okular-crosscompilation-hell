/****************************************************************************
** Meta object code from reading C++ file 'kstandardaction_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kconfigwidgets/src/kstandardaction_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kstandardaction_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KStandardAction__AutomaticAction_t {
    QByteArrayData data[10];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KStandardAction__AutomaticAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KStandardAction__AutomaticAction_t qt_meta_stringdata_KStandardAction__AutomaticAction = {
    {
QT_MOC_LITERAL(0, 0, 32), // "KStandardAction::AutomaticAction"
QT_MOC_LITERAL(1, 33, 3), // "cut"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "copy"
QT_MOC_LITERAL(4, 43, 5), // "paste"
QT_MOC_LITERAL(5, 49, 5), // "clear"
QT_MOC_LITERAL(6, 55, 9), // "selectAll"
QT_MOC_LITERAL(7, 65, 14), // "invokeEditSlot"
QT_MOC_LITERAL(8, 80, 11), // "const char*"
QT_MOC_LITERAL(9, 92, 4) // "slot"

    },
    "KStandardAction::AutomaticAction\0cut\0"
    "\0copy\0paste\0clear\0selectAll\0invokeEditSlot\0"
    "const char*\0slot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KStandardAction__AutomaticAction[] = {

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
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void KStandardAction::AutomaticAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutomaticAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cut(); break;
        case 1: _t->copy(); break;
        case 2: _t->paste(); break;
        case 3: _t->clear(); break;
        case 4: _t->selectAll(); break;
        case 5: _t->invokeEditSlot((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KStandardAction::AutomaticAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_KStandardAction__AutomaticAction.data,
    qt_meta_data_KStandardAction__AutomaticAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KStandardAction::AutomaticAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KStandardAction::AutomaticAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KStandardAction__AutomaticAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int KStandardAction::AutomaticAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
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
