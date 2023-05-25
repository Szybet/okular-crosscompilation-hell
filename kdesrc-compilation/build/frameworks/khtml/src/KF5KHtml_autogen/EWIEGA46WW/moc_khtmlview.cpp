/****************************************************************************
** Meta object code from reading C++ file 'khtmlview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/khtml/src/khtmlview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'khtmlview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KHTMLView_t {
    QByteArrayData data[17];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KHTMLView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KHTMLView_t qt_meta_stringdata_KHTMLView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "KHTMLView"
QT_MOC_LITERAL(1, 10, 14), // "finishedLayout"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "cleared"
QT_MOC_LITERAL(4, 34, 8), // "zoomView"
QT_MOC_LITERAL(5, 43, 14), // "hideAccessKeys"
QT_MOC_LITERAL(6, 58, 17), // "repaintAccessKeys"
QT_MOC_LITERAL(7, 76, 15), // "findAheadActive"
QT_MOC_LITERAL(8, 92, 14), // "resizeContents"
QT_MOC_LITERAL(9, 107, 1), // "w"
QT_MOC_LITERAL(10, 109, 1), // "h"
QT_MOC_LITERAL(11, 111, 6), // "layout"
QT_MOC_LITERAL(12, 118, 18), // "slotPaletteChanged"
QT_MOC_LITERAL(13, 137, 18), // "tripleClickTimeout"
QT_MOC_LITERAL(14, 156, 17), // "accessKeysTimeout"
QT_MOC_LITERAL(15, 174, 10), // "scrollTick"
QT_MOC_LITERAL(16, 185, 20) // "slotMouseScrollTimer"

    },
    "KHTMLView\0finishedLayout\0\0cleared\0"
    "zoomView\0hideAccessKeys\0repaintAccessKeys\0"
    "findAheadActive\0resizeContents\0w\0h\0"
    "layout\0slotPaletteChanged\0tripleClickTimeout\0"
    "accessKeysTimeout\0scrollTick\0"
    "slotMouseScrollTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KHTMLView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    1,   81,    2, 0x06 /* Public */,
       5,    0,   84,    2, 0x06 /* Public */,
       6,    0,   85,    2, 0x06 /* Public */,
       7,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   89,    2, 0x0a /* Public */,
      11,    0,   94,    2, 0x0a /* Public */,
      12,    0,   95,    2, 0x09 /* Protected */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KHTMLView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KHTMLView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finishedLayout(); break;
        case 1: _t->cleared(); break;
        case 2: _t->zoomView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->hideAccessKeys(); break;
        case 4: _t->repaintAccessKeys(); break;
        case 5: _t->findAheadActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->resizeContents((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->layout(); break;
        case 8: _t->slotPaletteChanged(); break;
        case 9: _t->tripleClickTimeout(); break;
        case 10: _t->accessKeysTimeout(); break;
        case 11: _t->scrollTick(); break;
        case 12: _t->slotMouseScrollTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KHTMLView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KHTMLView::finishedLayout)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KHTMLView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KHTMLView::cleared)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KHTMLView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KHTMLView::zoomView)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KHTMLView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KHTMLView::hideAccessKeys)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KHTMLView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KHTMLView::repaintAccessKeys)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KHTMLView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KHTMLView::findAheadActive)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KHTMLView::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_meta_stringdata_KHTMLView.data,
    qt_meta_data_KHTMLView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KHTMLView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KHTMLView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KHTMLView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "khtml::KHTMLWidget"))
        return static_cast< khtml::KHTMLWidget*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int KHTMLView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void KHTMLView::finishedLayout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KHTMLView::cleared()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KHTMLView::zoomView(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KHTMLView::hideAccessKeys()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KHTMLView::repaintAccessKeys()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KHTMLView::findAheadActive(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
