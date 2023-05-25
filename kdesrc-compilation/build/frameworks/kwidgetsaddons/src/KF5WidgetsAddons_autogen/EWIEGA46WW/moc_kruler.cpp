/****************************************************************************
** Meta object code from reading C++ file 'kruler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/kruler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kruler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KRuler_t {
    QByteArrayData data[28];
    char stringdata0[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KRuler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KRuler_t qt_meta_stringdata_KRuler = {
    {
QT_MOC_LITERAL(0, 0, 6), // "KRuler"
QT_MOC_LITERAL(1, 7, 12), // "slotNewValue"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "slotNewOffset"
QT_MOC_LITERAL(4, 35, 13), // "slotEndOffset"
QT_MOC_LITERAL(5, 49, 13), // "showTinyMarks"
QT_MOC_LITERAL(6, 63, 15), // "showLittleMarks"
QT_MOC_LITERAL(7, 79, 15), // "showMediumMarks"
QT_MOC_LITERAL(8, 95, 12), // "showBigMarks"
QT_MOC_LITERAL(9, 108, 11), // "showPointer"
QT_MOC_LITERAL(10, 120, 12), // "showEndLabel"
QT_MOC_LITERAL(11, 133, 16), // "tinyMarkDistance"
QT_MOC_LITERAL(12, 150, 18), // "littleMarkDistance"
QT_MOC_LITERAL(13, 169, 18), // "mediumMarkDistance"
QT_MOC_LITERAL(14, 188, 15), // "bigMarkDistance"
QT_MOC_LITERAL(15, 204, 12), // "pixelPerMark"
QT_MOC_LITERAL(16, 217, 11), // "lengthFixed"
QT_MOC_LITERAL(17, 229, 8), // "endLabel"
QT_MOC_LITERAL(18, 238, 6), // "length"
QT_MOC_LITERAL(19, 245, 6), // "offset"
QT_MOC_LITERAL(20, 252, 9), // "endOffset"
QT_MOC_LITERAL(21, 262, 11), // "MetricStyle"
QT_MOC_LITERAL(22, 274, 6), // "Custom"
QT_MOC_LITERAL(23, 281, 5), // "Pixel"
QT_MOC_LITERAL(24, 287, 4), // "Inch"
QT_MOC_LITERAL(25, 292, 11), // "Millimetres"
QT_MOC_LITERAL(26, 304, 11), // "Centimetres"
QT_MOC_LITERAL(27, 316, 6) // "Metres"

    },
    "KRuler\0slotNewValue\0\0slotNewOffset\0"
    "slotEndOffset\0showTinyMarks\0showLittleMarks\0"
    "showMediumMarks\0showBigMarks\0showPointer\0"
    "showEndLabel\0tinyMarkDistance\0"
    "littleMarkDistance\0mediumMarkDistance\0"
    "bigMarkDistance\0pixelPerMark\0lengthFixed\0"
    "endLabel\0length\0offset\0endOffset\0"
    "MetricStyle\0Custom\0Pixel\0Inch\0Millimetres\0"
    "Centimetres\0Metres"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KRuler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      16,   38, // properties
       1,   86, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       3,    1,   32,    2, 0x0a /* Public */,
       4,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00095103,
       6, QMetaType::Bool, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::Int, 0x00095103,
      12, QMetaType::Int, 0x00095103,
      13, QMetaType::Int, 0x00095003,
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::Double, 0x00095103,
      16, QMetaType::Bool, 0x00095103,
      17, QMetaType::QString, 0x00095103,
      18, QMetaType::Int, 0x00095103,
      19, QMetaType::Int, 0x00095001,
      20, QMetaType::Int, 0x00095001,

 // enums: name, alias, flags, count, data
      21,   21, 0x0,    6,   91,

 // enum data: key, value
      22, uint(KRuler::Custom),
      23, uint(KRuler::Pixel),
      24, uint(KRuler::Inch),
      25, uint(KRuler::Millimetres),
      26, uint(KRuler::Centimetres),
      27, uint(KRuler::Metres),

       0        // eod
};

void KRuler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KRuler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotNewValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotNewOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotEndOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KRuler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showTinyMarks(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->showLittleMarks(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showMediumMarks(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->showBigMarks(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showPointer(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->showEndLabel(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->tinyMarkDistance(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->littleMarkDistance(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->mediumMarkDistance(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->bigMarkDistance(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->pixelPerMark(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->lengthFixed(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->endLabel(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->length(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->offset(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->endOffset(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KRuler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowTinyMarks(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setShowLittleMarks(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setShowMediumMarks(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setShowBigMarks(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setShowPointer(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setShowEndLabel(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setTinyMarkDistance(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setLittleMarkDistance(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setBigMarkDistance(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setBigMarkDistance(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setPixelPerMark(*reinterpret_cast< double*>(_v)); break;
        case 11: _t->setLengthFixed(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setEndLabel(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setLength(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KRuler::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractSlider::staticMetaObject>(),
    qt_meta_stringdata_KRuler.data,
    qt_meta_data_KRuler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KRuler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KRuler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KRuler.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSlider::qt_metacast(_clname);
}

int KRuler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
