/****************************************************************************
** Meta object code from reading C++ file 'volumeslider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../phonon/volumeslider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'volumeslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Phonon__VolumeSlider_t {
    QByteArrayData data[23];
    char stringdata0[316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phonon__VolumeSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phonon__VolumeSlider_t qt_meta_stringdata_Phonon__VolumeSlider = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Phonon::VolumeSlider"
QT_MOC_LITERAL(1, 21, 16), // "setMaximumVolume"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 14), // "setOrientation"
QT_MOC_LITERAL(4, 54, 15), // "Qt::Orientation"
QT_MOC_LITERAL(5, 70, 14), // "setMuteVisible"
QT_MOC_LITERAL(6, 85, 11), // "setIconSize"
QT_MOC_LITERAL(7, 97, 4), // "size"
QT_MOC_LITERAL(8, 102, 14), // "setAudioOutput"
QT_MOC_LITERAL(9, 117, 20), // "Phonon::AudioOutput*"
QT_MOC_LITERAL(10, 138, 16), // "_k_sliderChanged"
QT_MOC_LITERAL(11, 155, 16), // "_k_volumeChanged"
QT_MOC_LITERAL(12, 172, 15), // "_k_mutedChanged"
QT_MOC_LITERAL(13, 188, 16), // "_k_buttonClicked"
QT_MOC_LITERAL(14, 205, 16), // "_k_sliderPressed"
QT_MOC_LITERAL(15, 222, 17), // "_k_sliderReleased"
QT_MOC_LITERAL(16, 240, 13), // "maximumVolume"
QT_MOC_LITERAL(17, 254, 11), // "orientation"
QT_MOC_LITERAL(18, 266, 8), // "tracking"
QT_MOC_LITERAL(19, 275, 8), // "pageStep"
QT_MOC_LITERAL(20, 284, 10), // "singleStep"
QT_MOC_LITERAL(21, 295, 11), // "muteVisible"
QT_MOC_LITERAL(22, 307, 8) // "iconSize"

    },
    "Phonon::VolumeSlider\0setMaximumVolume\0"
    "\0setOrientation\0Qt::Orientation\0"
    "setMuteVisible\0setIconSize\0size\0"
    "setAudioOutput\0Phonon::AudioOutput*\0"
    "_k_sliderChanged\0_k_volumeChanged\0"
    "_k_mutedChanged\0_k_buttonClicked\0"
    "_k_sliderPressed\0_k_sliderReleased\0"
    "maximumVolume\0orientation\0tracking\0"
    "pageStep\0singleStep\0muteVisible\0"
    "iconSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phonon__VolumeSlider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       7,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       3,    1,   72,    2, 0x0a /* Public */,
       5,    1,   75,    2, 0x0a /* Public */,
       6,    1,   78,    2, 0x0a /* Public */,
       8,    1,   81,    2, 0x0a /* Public */,
      10,    1,   84,    2, 0x08 /* Private */,
      11,    1,   87,    2, 0x08 /* Private */,
      12,    1,   90,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QSize,    7,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::QReal, 0x00095103,
      17, 0x80000000 | 4, 0x0009510b,
      18, QMetaType::Bool, 0x00095103,
      19, QMetaType::Int, 0x00095103,
      20, QMetaType::Int, 0x00095103,
      21, QMetaType::Bool, 0x00095103,
      22, QMetaType::QSize, 0x00095103,

       0        // eod
};

void Phonon::VolumeSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VolumeSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setMaximumVolume((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->setOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 2: _t->setMuteVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setIconSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 4: _t->setAudioOutput((*reinterpret_cast< Phonon::AudioOutput*(*)>(_a[1]))); break;
        case 5: _t->k_ptr->_k_sliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->k_ptr->_k_volumeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->k_ptr->_k_mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->k_ptr->_k_buttonClicked(); break;
        case 9: _t->k_ptr->_k_sliderPressed(); break;
        case 10: _t->k_ptr->_k_sliderReleased(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VolumeSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->maximumVolume(); break;
        case 1: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasTracking(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->pageStep(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->singleStep(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isMuteVisible(); break;
        case 6: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VolumeSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMaximumVolume(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 2: _t->setTracking(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setPageStep(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setSingleStep(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setMuteVisible(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Phonon::VolumeSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Phonon__VolumeSlider.data,
    qt_meta_data_Phonon__VolumeSlider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phonon::VolumeSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phonon::VolumeSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__VolumeSlider.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Phonon::VolumeSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
