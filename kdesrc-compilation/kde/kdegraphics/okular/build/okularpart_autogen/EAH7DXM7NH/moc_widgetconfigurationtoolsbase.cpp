/****************************************************************************
** Meta object code from reading C++ file 'widgetconfigurationtoolsbase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../part/widgetconfigurationtoolsbase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetconfigurationtoolsbase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetConfigurationToolsBase_t {
    QByteArrayData data[10];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetConfigurationToolsBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetConfigurationToolsBase_t qt_meta_stringdata_WidgetConfigurationToolsBase = {
    {
QT_MOC_LITERAL(0, 0, 28), // "WidgetConfigurationToolsBase"
QT_MOC_LITERAL(1, 29, 7), // "changed"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "slotAdd"
QT_MOC_LITERAL(4, 46, 8), // "slotEdit"
QT_MOC_LITERAL(5, 55, 13), // "updateButtons"
QT_MOC_LITERAL(6, 69, 10), // "slotRemove"
QT_MOC_LITERAL(7, 80, 10), // "slotMoveUp"
QT_MOC_LITERAL(8, 91, 12), // "slotMoveDown"
QT_MOC_LITERAL(9, 104, 5) // "tools"

    },
    "WidgetConfigurationToolsBase\0changed\0"
    "\0slotAdd\0slotEdit\0updateButtons\0"
    "slotRemove\0slotMoveUp\0slotMoveDown\0"
    "tools"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetConfigurationToolsBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x09 /* Protected */,
       4,    0,   51,    2, 0x09 /* Protected */,
       5,    0,   52,    2, 0x09 /* Protected */,
       6,    0,   53,    2, 0x09 /* Protected */,
       7,    0,   54,    2, 0x09 /* Protected */,
       8,    0,   55,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QStringList, 0x00595103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void WidgetConfigurationToolsBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetConfigurationToolsBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->slotAdd(); break;
        case 2: _t->slotEdit(); break;
        case 3: _t->updateButtons(); break;
        case 4: _t->slotRemove(); break;
        case 5: _t->slotMoveUp(); break;
        case 6: _t->slotMoveDown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WidgetConfigurationToolsBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetConfigurationToolsBase::changed)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<WidgetConfigurationToolsBase *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->tools(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<WidgetConfigurationToolsBase *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTools(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WidgetConfigurationToolsBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WidgetConfigurationToolsBase.data,
    qt_meta_data_WidgetConfigurationToolsBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WidgetConfigurationToolsBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetConfigurationToolsBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetConfigurationToolsBase.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WidgetConfigurationToolsBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WidgetConfigurationToolsBase::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
