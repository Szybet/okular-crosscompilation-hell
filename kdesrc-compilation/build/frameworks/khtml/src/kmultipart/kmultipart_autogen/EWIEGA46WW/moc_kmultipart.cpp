/****************************************************************************
** Meta object code from reading C++ file 'kmultipart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/khtml/src/kmultipart/kmultipart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kmultipart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KMultiPart_t {
    QByteArrayData data[12];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KMultiPart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KMultiPart_t qt_meta_stringdata_KMultiPart = {
    {
QT_MOC_LITERAL(0, 0, 10), // "KMultiPart"
QT_MOC_LITERAL(1, 11, 14), // "reallySendData"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "line"
QT_MOC_LITERAL(4, 32, 15), // "slotJobFinished"
QT_MOC_LITERAL(5, 48, 5), // "KJob*"
QT_MOC_LITERAL(6, 54, 3), // "job"
QT_MOC_LITERAL(7, 58, 8), // "slotData"
QT_MOC_LITERAL(8, 67, 9), // "KIO::Job*"
QT_MOC_LITERAL(9, 77, 17), // "slotPartCompleted"
QT_MOC_LITERAL(10, 95, 11), // "startHeader"
QT_MOC_LITERAL(11, 107, 16) // "slotProgressInfo"

    },
    "KMultiPart\0reallySendData\0\0line\0"
    "slotJobFinished\0KJob*\0job\0slotData\0"
    "KIO::Job*\0slotPartCompleted\0startHeader\0"
    "slotProgressInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KMultiPart[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       7,    2,   50,    2, 0x08 /* Private */,
       9,    0,   55,    2, 0x08 /* Private */,
      10,    0,   56,    2, 0x08 /* Private */,
      11,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QByteArray,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KMultiPart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KMultiPart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reallySendData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->slotJobFinished((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 2: _t->slotData((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: _t->slotPartCompleted(); break;
        case 4: _t->startHeader(); break;
        case 5: _t->slotProgressInfo(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KMultiPart::staticMetaObject = { {
    QMetaObject::SuperData::link<KParts::ReadOnlyPart::staticMetaObject>(),
    qt_meta_stringdata_KMultiPart.data,
    qt_meta_data_KMultiPart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KMultiPart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KMultiPart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KMultiPart.stringdata0))
        return static_cast<void*>(this);
    return KParts::ReadOnlyPart::qt_metacast(_clname);
}

int KMultiPart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KParts::ReadOnlyPart::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
