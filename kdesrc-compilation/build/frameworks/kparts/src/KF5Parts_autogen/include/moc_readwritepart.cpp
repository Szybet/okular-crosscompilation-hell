/****************************************************************************
** Meta object code from reading C++ file 'readwritepart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kparts/src/readwritepart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'readwritepart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KParts__ReadWritePart_t {
    QByteArrayData data[9];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KParts__ReadWritePart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KParts__ReadWritePart_t qt_meta_stringdata_KParts__ReadWritePart = {
    {
QT_MOC_LITERAL(0, 0, 21), // "KParts::ReadWritePart"
QT_MOC_LITERAL(1, 22, 13), // "sigQueryClose"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "bool*"
QT_MOC_LITERAL(4, 43, 7), // "handled"
QT_MOC_LITERAL(5, 51, 12), // "abortClosing"
QT_MOC_LITERAL(6, 64, 11), // "setModified"
QT_MOC_LITERAL(7, 76, 4), // "save"
QT_MOC_LITERAL(8, 81, 16) // "waitSaveComplete"

    },
    "KParts::ReadWritePart\0sigQueryClose\0"
    "\0bool*\0handled\0abortClosing\0setModified\0"
    "save\0waitSaveComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KParts__ReadWritePart[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x0a /* Public */,
       7,    0,   40,    2, 0x0a /* Public */,
       8,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,

       0        // eod
};

void KParts::ReadWritePart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReadWritePart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigQueryClose((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 1: _t->setModified(); break;
        case 2: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->waitSaveComplete();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReadWritePart::*)(bool * , bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReadWritePart::sigQueryClose)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KParts::ReadWritePart::staticMetaObject = { {
    QMetaObject::SuperData::link<ReadOnlyPart::staticMetaObject>(),
    qt_meta_stringdata_KParts__ReadWritePart.data,
    qt_meta_data_KParts__ReadWritePart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KParts::ReadWritePart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KParts::ReadWritePart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KParts__ReadWritePart.stringdata0))
        return static_cast<void*>(this);
    return ReadOnlyPart::qt_metacast(_clname);
}

int KParts::ReadWritePart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReadOnlyPart::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KParts::ReadWritePart::sigQueryClose(bool * _t1, bool * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
