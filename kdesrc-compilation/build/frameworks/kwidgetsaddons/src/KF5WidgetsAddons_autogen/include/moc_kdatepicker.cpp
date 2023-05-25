/****************************************************************************
** Meta object code from reading C++ file 'kdatepicker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/kdatepicker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdatepicker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDatePicker_t {
    QByteArrayData data[21];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDatePicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDatePicker_t qt_meta_stringdata_KDatePicker = {
    {
QT_MOC_LITERAL(0, 0, 11), // "KDatePicker"
QT_MOC_LITERAL(1, 12, 11), // "dateChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "date"
QT_MOC_LITERAL(4, 30, 12), // "dateSelected"
QT_MOC_LITERAL(5, 43, 11), // "dateEntered"
QT_MOC_LITERAL(6, 55, 12), // "tableClicked"
QT_MOC_LITERAL(7, 68, 15), // "dateChangedSlot"
QT_MOC_LITERAL(8, 84, 16), // "tableClickedSlot"
QT_MOC_LITERAL(9, 101, 19), // "monthForwardClicked"
QT_MOC_LITERAL(10, 121, 20), // "monthBackwardClicked"
QT_MOC_LITERAL(11, 142, 18), // "yearForwardClicked"
QT_MOC_LITERAL(12, 161, 19), // "yearBackwardClicked"
QT_MOC_LITERAL(13, 181, 18), // "selectMonthClicked"
QT_MOC_LITERAL(14, 200, 17), // "selectYearClicked"
QT_MOC_LITERAL(15, 218, 19), // "uncheckYearSelector"
QT_MOC_LITERAL(16, 238, 16), // "lineEnterPressed"
QT_MOC_LITERAL(17, 255, 18), // "todayButtonClicked"
QT_MOC_LITERAL(18, 274, 12), // "weekSelected"
QT_MOC_LITERAL(19, 287, 11), // "closeButton"
QT_MOC_LITERAL(20, 299, 8) // "fontSize"

    },
    "KDatePicker\0dateChanged\0\0date\0"
    "dateSelected\0dateEntered\0tableClicked\0"
    "dateChangedSlot\0tableClickedSlot\0"
    "monthForwardClicked\0monthBackwardClicked\0"
    "yearForwardClicked\0yearBackwardClicked\0"
    "selectMonthClicked\0selectYearClicked\0"
    "uncheckYearSelector\0lineEnterPressed\0"
    "todayButtonClicked\0weekSelected\0"
    "closeButton\0fontSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDatePicker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       3,  120, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       5,    1,  100,    2, 0x06 /* Public */,
       6,    0,  103,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  104,    2, 0x09 /* Protected */,
       8,    0,  107,    2, 0x09 /* Protected */,
       9,    0,  108,    2, 0x09 /* Protected */,
      10,    0,  109,    2, 0x09 /* Protected */,
      11,    0,  110,    2, 0x09 /* Protected */,
      12,    0,  111,    2, 0x09 /* Protected */,
      13,    0,  112,    2, 0x09 /* Protected */,
      14,    0,  113,    2, 0x09 /* Protected */,
      15,    0,  114,    2, 0x09 /* Protected */,
      16,    0,  115,    2, 0x09 /* Protected */,
      17,    0,  116,    2, 0x09 /* Protected */,
      18,    1,  117,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // properties: name, type, flags
       3, QMetaType::QDate, 0x00595103,
      19, QMetaType::Bool, 0x00095103,
      20, QMetaType::Int, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void KDatePicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KDatePicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 1: _t->dateSelected((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 2: _t->dateEntered((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 3: _t->tableClicked(); break;
        case 4: _t->dateChangedSlot((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 5: _t->tableClickedSlot(); break;
        case 6: _t->monthForwardClicked(); break;
        case 7: _t->monthBackwardClicked(); break;
        case 8: _t->yearForwardClicked(); break;
        case 9: _t->yearBackwardClicked(); break;
        case 10: _t->selectMonthClicked(); break;
        case 11: _t->selectYearClicked(); break;
        case 12: _t->uncheckYearSelector(); break;
        case 13: _t->lineEnterPressed(); break;
        case 14: _t->todayButtonClicked(); break;
        case 15: _t->weekSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KDatePicker::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDatePicker::dateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KDatePicker::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDatePicker::dateSelected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KDatePicker::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDatePicker::dateEntered)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KDatePicker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDatePicker::tableClicked)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KDatePicker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDate*>(_v) = _t->date(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasCloseButton(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->fontSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KDatePicker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDate(*reinterpret_cast< QDate*>(_v)); break;
        case 1: _t->setCloseButton(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KDatePicker::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_KDatePicker.data,
    qt_meta_data_KDatePicker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDatePicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDatePicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDatePicker.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int KDatePicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KDatePicker::dateChanged(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDatePicker::dateSelected(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KDatePicker::dateEntered(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KDatePicker::tableClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
