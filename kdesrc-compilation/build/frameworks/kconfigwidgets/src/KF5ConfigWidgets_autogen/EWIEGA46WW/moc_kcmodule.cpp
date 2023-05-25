/****************************************************************************
** Meta object code from reading C++ file 'kcmodule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kconfigwidgets/src/kcmodule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcmodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCModule_t {
    QByteArrayData data[24];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCModule_t qt_meta_stringdata_KCModule = {
    {
QT_MOC_LITERAL(0, 0, 8), // "KCModule"
QT_MOC_LITERAL(1, 9, 7), // "changed"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "state"
QT_MOC_LITERAL(4, 24, 9), // "defaulted"
QT_MOC_LITERAL(5, 34, 16), // "quickHelpChanged"
QT_MOC_LITERAL(6, 51, 22), // "rootOnlyMessageChanged"
QT_MOC_LITERAL(7, 74, 3), // "use"
QT_MOC_LITERAL(8, 78, 7), // "message"
QT_MOC_LITERAL(9, 86, 32), // "defaultsIndicatorsVisibleChanged"
QT_MOC_LITERAL(10, 119, 4), // "show"
QT_MOC_LITERAL(11, 124, 4), // "load"
QT_MOC_LITERAL(12, 129, 4), // "save"
QT_MOC_LITERAL(13, 134, 8), // "defaults"
QT_MOC_LITERAL(14, 143, 28), // "setDefaultsIndicatorsVisible"
QT_MOC_LITERAL(15, 172, 6), // "widget"
QT_MOC_LITERAL(16, 179, 8), // "QWidget*"
QT_MOC_LITERAL(17, 188, 12), // "setNeedsSave"
QT_MOC_LITERAL(18, 201, 9), // "needsSave"
QT_MOC_LITERAL(19, 211, 13), // "markAsChanged"
QT_MOC_LITERAL(20, 225, 13), // "widgetChanged"
QT_MOC_LITERAL(21, 239, 17), // "authStatusChanged"
QT_MOC_LITERAL(22, 257, 25), // "KAuth::Action::AuthStatus"
QT_MOC_LITERAL(23, 283, 6) // "status"

    },
    "KCModule\0changed\0\0state\0defaulted\0"
    "quickHelpChanged\0rootOnlyMessageChanged\0"
    "use\0message\0defaultsIndicatorsVisibleChanged\0"
    "show\0load\0save\0defaults\0"
    "setDefaultsIndicatorsVisible\0widget\0"
    "QWidget*\0setNeedsSave\0needsSave\0"
    "markAsChanged\0widgetChanged\0"
    "authStatusChanged\0KAuth::Action::AuthStatus\0"
    "status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCModule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       5,    0,   95,    2, 0x06 /* Public */,
       6,    2,   96,    2, 0x06 /* Public */,
       9,    1,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  104,    2, 0x0a /* Public */,
      12,    0,  105,    2, 0x0a /* Public */,
      13,    0,  106,    2, 0x0a /* Public */,
      14,    1,  107,    2, 0x0a /* Public */,
      15,    0,  110,    2, 0x0a /* Public */,
      17,    1,  111,    2, 0x0a /* Public */,
       1,    0,  114,    2, 0x09 /* Protected */,
      19,    0,  115,    2, 0x09 /* Protected */,
      20,    0,  116,    2, 0x09 /* Protected */,
      21,    1,  117,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::Bool,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    0x80000000 | 16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

void KCModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KCModule *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->defaulted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->quickHelpChanged(); break;
        case 3: _t->rootOnlyMessageChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->defaultsIndicatorsVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->load(); break;
        case 6: _t->save(); break;
        case 7: _t->defaults(); break;
        case 8: _t->setDefaultsIndicatorsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: { QWidget* _r = _t->widget();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setNeedsSave((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->changed(); break;
        case 12: _t->markAsChanged(); break;
        case 13: _t->widgetChanged(); break;
        case 14: _t->authStatusChanged((*reinterpret_cast< KAuth::Action::AuthStatus(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KCModule::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCModule::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KCModule::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCModule::defaulted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KCModule::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCModule::quickHelpChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KCModule::*)(bool , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCModule::rootOnlyMessageChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KCModule::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCModule::defaultsIndicatorsVisibleChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KCModule::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KCModule.data,
    qt_meta_data_KCModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCModule.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KCModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void KCModule::changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KCModule::defaulted(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KCModule::quickHelpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KCModule::rootOnlyMessageChanged(bool _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KCModule::defaultsIndicatorsVisibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
