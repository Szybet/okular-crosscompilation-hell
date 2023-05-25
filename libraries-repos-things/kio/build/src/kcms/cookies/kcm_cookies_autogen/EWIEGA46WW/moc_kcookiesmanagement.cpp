/****************************************************************************
** Meta object code from reading C++ file 'kcookiesmanagement.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/kcms/cookies/kcookiesmanagement.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcookiesmanagement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCookiesManagement_t {
    QByteArrayData data[9];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCookiesManagement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCookiesManagement_t qt_meta_stringdata_KCookiesManagement = {
    {
QT_MOC_LITERAL(0, 0, 18), // "KCookiesManagement"
QT_MOC_LITERAL(1, 19, 13), // "deleteCurrent"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 9), // "deleteAll"
QT_MOC_LITERAL(4, 44, 6), // "reload"
QT_MOC_LITERAL(5, 51, 20), // "listCookiesForDomain"
QT_MOC_LITERAL(6, 72, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 89, 13), // "updateForItem"
QT_MOC_LITERAL(8, 103, 22) // "showConfigPolicyDialog"

    },
    "KCookiesManagement\0deleteCurrent\0\0"
    "deleteAll\0reload\0listCookiesForDomain\0"
    "QTreeWidgetItem*\0updateForItem\0"
    "showConfigPolicyDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCookiesManagement[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       8,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,

       0        // eod
};

void KCookiesManagement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KCookiesManagement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteCurrent(); break;
        case 1: _t->deleteAll(); break;
        case 2: _t->reload(); break;
        case 3: _t->listCookiesForDomain((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->updateForItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->showConfigPolicyDialog(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KCookiesManagement::staticMetaObject = { {
    QMetaObject::SuperData::link<KCModule::staticMetaObject>(),
    qt_meta_stringdata_KCookiesManagement.data,
    qt_meta_data_KCookiesManagement,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCookiesManagement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCookiesManagement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCookiesManagement.stringdata0))
        return static_cast<void*>(this);
    return KCModule::qt_metacast(_clname);
}

int KCookiesManagement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KCModule::qt_metacall(_c, _id, _a);
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
