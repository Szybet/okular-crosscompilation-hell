/****************************************************************************
** Meta object code from reading C++ file 'kcookiespolicies.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/kcms/cookies/kcookiespolicies.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcookiespolicies.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCookiesPolicies_t {
    QByteArrayData data[12];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCookiesPolicies_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCookiesPolicies_t qt_meta_stringdata_KCookiesPolicies = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KCookiesPolicies"
QT_MOC_LITERAL(1, 17, 14), // "cookiesEnabled"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "configChanged"
QT_MOC_LITERAL(4, 47, 16), // "selectionChanged"
QT_MOC_LITERAL(5, 64, 13), // "updateButtons"
QT_MOC_LITERAL(6, 78, 16), // "deleteAllPressed"
QT_MOC_LITERAL(7, 95, 13), // "deletePressed"
QT_MOC_LITERAL(8, 109, 13), // "changePressed"
QT_MOC_LITERAL(9, 123, 10), // "addPressed"
QT_MOC_LITERAL(10, 134, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(11, 151, 5) // "state"

    },
    "KCookiesPolicies\0cookiesEnabled\0\0"
    "configChanged\0selectionChanged\0"
    "updateButtons\0deleteAllPressed\0"
    "deletePressed\0changePressed\0addPressed\0"
    "QTreeWidgetItem*\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCookiesPolicies[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x09 /* Protected */,
       3,    0,   77,    2, 0x09 /* Protected */,
       4,    0,   78,    2, 0x09 /* Protected */,
       5,    0,   79,    2, 0x09 /* Protected */,
       6,    0,   80,    2, 0x09 /* Protected */,
       7,    0,   81,    2, 0x09 /* Protected */,
       8,    0,   82,    2, 0x09 /* Protected */,
       9,    0,   83,    2, 0x09 /* Protected */,
       8,    2,   84,    2, 0x09 /* Protected */,
       8,    1,   89,    2, 0x29 /* Protected | MethodCloned */,
       9,    2,   92,    2, 0x09 /* Protected */,
       9,    1,   97,    2, 0x29 /* Protected | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,    2,   11,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,   11,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void KCookiesPolicies::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KCookiesPolicies *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cookiesEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->configChanged(); break;
        case 2: _t->selectionChanged(); break;
        case 3: _t->updateButtons(); break;
        case 4: _t->deleteAllPressed(); break;
        case 5: _t->deletePressed(); break;
        case 6: _t->changePressed(); break;
        case 7: _t->addPressed(); break;
        case 8: _t->changePressed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->changePressed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->addPressed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->addPressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KCookiesPolicies::staticMetaObject = { {
    QMetaObject::SuperData::link<KCModule::staticMetaObject>(),
    qt_meta_stringdata_KCookiesPolicies.data,
    qt_meta_data_KCookiesPolicies,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCookiesPolicies::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCookiesPolicies::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCookiesPolicies.stringdata0))
        return static_cast<void*>(this);
    return KCModule::qt_metacast(_clname);
}

int KCookiesPolicies::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KCModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
