/****************************************************************************
** Meta object code from reading C++ file 'findbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/part/findbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FindBar_t {
    QByteArrayData data[12];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FindBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FindBar_t qt_meta_stringdata_FindBar = {
    {
QT_MOC_LITERAL(0, 0, 7), // "FindBar"
QT_MOC_LITERAL(1, 8, 20), // "forwardKeyPressEvent"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "QKeyEvent*"
QT_MOC_LITERAL(4, 41, 20), // "onCloseButtonPressed"
QT_MOC_LITERAL(5, 62, 8), // "findNext"
QT_MOC_LITERAL(6, 71, 8), // "findPrev"
QT_MOC_LITERAL(7, 80, 11), // "resetSearch"
QT_MOC_LITERAL(8, 92, 22), // "caseSensitivityChanged"
QT_MOC_LITERAL(9, 115, 22), // "fromCurrentPageChanged"
QT_MOC_LITERAL(10, 138, 20), // "findAsYouTypeChanged"
QT_MOC_LITERAL(11, 159, 18) // "closeAndStopSearch"

    },
    "FindBar\0forwardKeyPressEvent\0\0QKeyEvent*\0"
    "onCloseButtonPressed\0findNext\0findPrev\0"
    "resetSearch\0caseSensitivityChanged\0"
    "fromCurrentPageChanged\0findAsYouTypeChanged\0"
    "closeAndStopSearch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   63,    2, 0x0a /* Public */,
       6,    0,   64,    2, 0x0a /* Public */,
       7,    0,   65,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FindBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FindBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->forwardKeyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 1: _t->onCloseButtonPressed(); break;
        case 2: _t->findNext(); break;
        case 3: _t->findPrev(); break;
        case 4: _t->resetSearch(); break;
        case 5: _t->caseSensitivityChanged(); break;
        case 6: _t->fromCurrentPageChanged(); break;
        case 7: _t->findAsYouTypeChanged(); break;
        case 8: _t->closeAndStopSearch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FindBar::*)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FindBar::forwardKeyPressEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FindBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FindBar::onCloseButtonPressed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FindBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FindBar.data,
    qt_meta_data_FindBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FindBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FindBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FindBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FindBar::forwardKeyPressEvent(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FindBar::onCloseButtonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
