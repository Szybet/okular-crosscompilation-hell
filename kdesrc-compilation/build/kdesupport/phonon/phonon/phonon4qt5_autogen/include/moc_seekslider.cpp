/****************************************************************************
** Meta object code from reading C++ file 'seekslider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../kdesupport/phonon/phonon/seekslider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seekslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Phonon__SeekSlider_t {
    QByteArrayData data[22];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phonon__SeekSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phonon__SeekSlider_t qt_meta_stringdata_Phonon__SeekSlider = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Phonon::SeekSlider"
QT_MOC_LITERAL(1, 19, 14), // "setOrientation"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "Qt::Orientation"
QT_MOC_LITERAL(4, 51, 14), // "setIconVisible"
QT_MOC_LITERAL(5, 66, 11), // "setIconSize"
QT_MOC_LITERAL(6, 78, 4), // "size"
QT_MOC_LITERAL(7, 83, 14), // "setMediaObject"
QT_MOC_LITERAL(8, 98, 12), // "MediaObject*"
QT_MOC_LITERAL(9, 111, 15), // "_k_stateChanged"
QT_MOC_LITERAL(10, 127, 13), // "Phonon::State"
QT_MOC_LITERAL(11, 141, 7), // "_k_seek"
QT_MOC_LITERAL(12, 149, 7), // "_k_tick"
QT_MOC_LITERAL(13, 157, 9), // "_k_length"
QT_MOC_LITERAL(14, 167, 18), // "_k_seekableChanged"
QT_MOC_LITERAL(15, 186, 23), // "_k_currentSourceChanged"
QT_MOC_LITERAL(16, 210, 11), // "iconVisible"
QT_MOC_LITERAL(17, 222, 8), // "tracking"
QT_MOC_LITERAL(18, 231, 8), // "pageStep"
QT_MOC_LITERAL(19, 240, 10), // "singleStep"
QT_MOC_LITERAL(20, 251, 11), // "orientation"
QT_MOC_LITERAL(21, 263, 8) // "iconSize"

    },
    "Phonon::SeekSlider\0setOrientation\0\0"
    "Qt::Orientation\0setIconVisible\0"
    "setIconSize\0size\0setMediaObject\0"
    "MediaObject*\0_k_stateChanged\0Phonon::State\0"
    "_k_seek\0_k_tick\0_k_length\0_k_seekableChanged\0"
    "_k_currentSourceChanged\0iconVisible\0"
    "tracking\0pageStep\0singleStep\0orientation\0"
    "iconSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phonon__SeekSlider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       6,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    1,   67,    2, 0x0a /* Public */,
       5,    1,   70,    2, 0x0a /* Public */,
       7,    1,   73,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x08 /* Private */,
      11,    1,   79,    2, 0x08 /* Private */,
      12,    1,   82,    2, 0x08 /* Private */,
      13,    1,   85,    2, 0x08 /* Private */,
      14,    1,   88,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QSize,    6,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::Bool, 0x00095103,
      17, QMetaType::Bool, 0x00095103,
      18, QMetaType::Int, 0x00095103,
      19, QMetaType::Int, 0x00095103,
      20, 0x80000000 | 3, 0x0009510b,
      21, QMetaType::QSize, 0x00095103,

       0        // eod
};

void Phonon::SeekSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SeekSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 1: _t->setIconVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setIconSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 3: _t->setMediaObject((*reinterpret_cast< MediaObject*(*)>(_a[1]))); break;
        case 4: _t->k_func()->_k_stateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1]))); break;
        case 5: _t->k_func()->_k_seek((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->k_func()->_k_tick((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->k_func()->_k_length((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->k_func()->_k_seekableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->k_func()->_k_currentSourceChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Phonon::State >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SeekSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isIconVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasTracking(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->pageStep(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->singleStep(); break;
        case 4: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 5: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SeekSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIconVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setTracking(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setPageStep(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSingleStep(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 5: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Phonon::SeekSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Phonon__SeekSlider.data,
    qt_meta_data_Phonon__SeekSlider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phonon::SeekSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phonon::SeekSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__SeekSlider.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Phonon::SeekSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
