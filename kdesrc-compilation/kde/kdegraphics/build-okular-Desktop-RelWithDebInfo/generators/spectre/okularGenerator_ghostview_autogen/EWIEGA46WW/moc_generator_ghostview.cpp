/****************************************************************************
** Meta object code from reading C++ file 'generator_ghostview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../okular/generators/spectre/generator_ghostview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generator_ghostview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GSGenerator_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GSGenerator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GSGenerator_t qt_meta_stringdata_GSGenerator = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GSGenerator"
QT_MOC_LITERAL(1, 12, 18), // "slotImageGenerated"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "QImage*"
QT_MOC_LITERAL(4, 40, 3), // "img"
QT_MOC_LITERAL(5, 44, 22), // "Okular::PixmapRequest*"
QT_MOC_LITERAL(6, 67, 7) // "request"

    },
    "GSGenerator\0slotImageGenerated\0\0QImage*\0"
    "img\0Okular::PixmapRequest*\0request"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GSGenerator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

void GSGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GSGenerator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotImageGenerated((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< Okular::PixmapRequest*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Okular::PixmapRequest* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GSGenerator::staticMetaObject = { {
    QMetaObject::SuperData::link<Okular::Generator::staticMetaObject>(),
    qt_meta_stringdata_GSGenerator.data,
    qt_meta_data_GSGenerator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GSGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GSGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GSGenerator.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Okular::ConfigInterface"))
        return static_cast< Okular::ConfigInterface*>(this);
    if (!strcmp(_clname, "org.kde.okular.Generator"))
        return static_cast< Okular::Generator*>(this);
    if (!strcmp(_clname, "org.kde.okular.ConfigInterface/0.1"))
        return static_cast< Okular::ConfigInterface*>(this);
    return Okular::Generator::qt_metacast(_clname);
}

int GSGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Okular::Generator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
