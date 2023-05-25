/****************************************************************************
** Meta object code from reading C++ file 'sizegroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kirigami/src/sizegroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sizegroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SizeGroup_t {
    QByteArrayData data[12];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SizeGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SizeGroup_t qt_meta_stringdata_SizeGroup = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SizeGroup"
QT_MOC_LITERAL(1, 10, 11), // "modeChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "relayout"
QT_MOC_LITERAL(4, 32, 4), // "mode"
QT_MOC_LITERAL(5, 37, 4), // "Mode"
QT_MOC_LITERAL(6, 42, 5), // "items"
QT_MOC_LITERAL(7, 48, 28), // "QQmlListProperty<QQuickItem>"
QT_MOC_LITERAL(8, 77, 4), // "None"
QT_MOC_LITERAL(9, 82, 5), // "Width"
QT_MOC_LITERAL(10, 88, 6), // "Height"
QT_MOC_LITERAL(11, 95, 4) // "Both"

    },
    "SizeGroup\0modeChanged\0\0relayout\0mode\0"
    "Mode\0items\0QQmlListProperty<QQuickItem>\0"
    "None\0Width\0Height\0Both"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SizeGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       1,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x0049500b,
       6, 0x80000000 | 7, 0x00095409,

 // properties: notify_signal_id
       0,
       0,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,    4,   39,

 // enum data: key, value
       8, uint(SizeGroup::None),
       9, uint(SizeGroup::Width),
      10, uint(SizeGroup::Height),
      11, uint(SizeGroup::Both),

       0        // eod
};

void SizeGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SizeGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modeChanged(); break;
        case 1: _t->relayout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SizeGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SizeGroup::modeChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QQuickItem> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SizeGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Mode*>(_v) = _t->m_mode; break;
        case 1: *reinterpret_cast< QQmlListProperty<QQuickItem>*>(_v) = _t->items(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SizeGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_mode != *reinterpret_cast< Mode*>(_v)) {
                _t->m_mode = *reinterpret_cast< Mode*>(_v);
                Q_EMIT _t->modeChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SizeGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SizeGroup.data,
    qt_meta_data_SizeGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SizeGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SizeGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SizeGroup.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int SizeGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SizeGroup::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
