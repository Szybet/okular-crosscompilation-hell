/****************************************************************************
** Meta object code from reading C++ file 'kpixmapsequenceoverlaypainter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/kpixmapsequenceoverlaypainter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kpixmapsequenceoverlaypainter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KPixmapSequenceOverlayPainter_t {
    QByteArrayData data[19];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KPixmapSequenceOverlayPainter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KPixmapSequenceOverlayPainter_t qt_meta_stringdata_KPixmapSequenceOverlayPainter = {
    {
QT_MOC_LITERAL(0, 0, 29), // "KPixmapSequenceOverlayPainter"
QT_MOC_LITERAL(1, 30, 11), // "setSequence"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 15), // "KPixmapSequence"
QT_MOC_LITERAL(4, 59, 3), // "seq"
QT_MOC_LITERAL(5, 63, 11), // "setInterval"
QT_MOC_LITERAL(6, 75, 5), // "msecs"
QT_MOC_LITERAL(7, 81, 9), // "setWidget"
QT_MOC_LITERAL(8, 91, 8), // "QWidget*"
QT_MOC_LITERAL(9, 100, 1), // "w"
QT_MOC_LITERAL(10, 102, 7), // "setRect"
QT_MOC_LITERAL(11, 110, 4), // "rect"
QT_MOC_LITERAL(12, 115, 12), // "setAlignment"
QT_MOC_LITERAL(13, 128, 13), // "Qt::Alignment"
QT_MOC_LITERAL(14, 142, 5), // "align"
QT_MOC_LITERAL(15, 148, 9), // "setOffset"
QT_MOC_LITERAL(16, 158, 6), // "offset"
QT_MOC_LITERAL(17, 165, 5), // "start"
QT_MOC_LITERAL(18, 171, 4) // "stop"

    },
    "KPixmapSequenceOverlayPainter\0setSequence\0"
    "\0KPixmapSequence\0seq\0setInterval\0msecs\0"
    "setWidget\0QWidget*\0w\0setRect\0rect\0"
    "setAlignment\0Qt::Alignment\0align\0"
    "setOffset\0offset\0start\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KPixmapSequenceOverlayPainter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       7,    1,   60,    2, 0x0a /* Public */,
      10,    1,   63,    2, 0x0a /* Public */,
      12,    1,   66,    2, 0x0a /* Public */,
      15,    1,   69,    2, 0x0a /* Public */,
      17,    0,   72,    2, 0x0a /* Public */,
      18,    0,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QRect,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QPoint,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KPixmapSequenceOverlayPainter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KPixmapSequenceOverlayPainter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSequence((*reinterpret_cast< const KPixmapSequence(*)>(_a[1]))); break;
        case 1: _t->setInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 3: _t->setRect((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 4: _t->setAlignment((*reinterpret_cast< Qt::Alignment(*)>(_a[1]))); break;
        case 5: _t->setOffset((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->start(); break;
        case 7: _t->stop(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KPixmapSequenceOverlayPainter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KPixmapSequenceOverlayPainter.data,
    qt_meta_data_KPixmapSequenceOverlayPainter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KPixmapSequenceOverlayPainter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KPixmapSequenceOverlayPainter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KPixmapSequenceOverlayPainter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KPixmapSequenceOverlayPainter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
