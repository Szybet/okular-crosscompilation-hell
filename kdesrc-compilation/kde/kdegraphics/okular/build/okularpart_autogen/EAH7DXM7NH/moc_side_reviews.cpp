/****************************************************************************
** Meta object code from reading C++ file 'side_reviews.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../part/side_reviews.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'side_reviews.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Reviews_t {
    QByteArrayData data[15];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Reviews_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Reviews_t qt_meta_stringdata_Reviews = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Reviews"
QT_MOC_LITERAL(1, 8, 20), // "openAnnotationWindow"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 19), // "Okular::Annotation*"
QT_MOC_LITERAL(4, 50, 10), // "annotation"
QT_MOC_LITERAL(5, 61, 10), // "pageNumber"
QT_MOC_LITERAL(6, 72, 15), // "slotPageEnabled"
QT_MOC_LITERAL(7, 88, 17), // "slotAuthorEnabled"
QT_MOC_LITERAL(8, 106, 19), // "slotCurrentPageOnly"
QT_MOC_LITERAL(9, 126, 13), // "slotExpandAll"
QT_MOC_LITERAL(10, 140, 15), // "slotCollapseAll"
QT_MOC_LITERAL(11, 156, 9), // "activated"
QT_MOC_LITERAL(12, 166, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 178, 20), // "contextMenuRequested"
QT_MOC_LITERAL(14, 199, 17) // "saveSearchOptions"

    },
    "Reviews\0openAnnotationWindow\0\0"
    "Okular::Annotation*\0annotation\0"
    "pageNumber\0slotPageEnabled\0slotAuthorEnabled\0"
    "slotCurrentPageOnly\0slotExpandAll\0"
    "slotCollapseAll\0activated\0QModelIndex\0"
    "contextMenuRequested\0saveSearchOptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Reviews[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   64,    2, 0x0a /* Public */,
       7,    1,   67,    2, 0x0a /* Public */,
       8,    1,   70,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    0,   74,    2, 0x0a /* Public */,
      11,    1,   75,    2, 0x08 /* Private */,
      13,    1,   78,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,

       0        // eod
};

void Reviews::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Reviews *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openAnnotationWindow((*reinterpret_cast< Okular::Annotation*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->slotPageEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slotAuthorEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotCurrentPageOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slotExpandAll(); break;
        case 5: _t->slotCollapseAll(); break;
        case 6: _t->activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 8: _t->saveSearchOptions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Reviews::*)(Okular::Annotation * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Reviews::openAnnotationWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Reviews::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Reviews.data,
    qt_meta_data_Reviews,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Reviews::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Reviews::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Reviews.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Okular::DocumentObserver"))
        return static_cast< Okular::DocumentObserver*>(this);
    return QWidget::qt_metacast(_clname);
}

int Reviews::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Reviews::openAnnotationWindow(Okular::Annotation * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
