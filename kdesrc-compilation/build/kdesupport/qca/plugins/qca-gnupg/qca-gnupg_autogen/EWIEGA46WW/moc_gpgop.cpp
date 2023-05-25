/****************************************************************************
** Meta object code from reading C++ file 'gpgop.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../kdesupport/qca/plugins/qca-gnupg/gpgop.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpgop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gpgQCAPlugin__GpgOp_t {
    QByteArrayData data[10];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gpgQCAPlugin__GpgOp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gpgQCAPlugin__GpgOp_t qt_meta_stringdata_gpgQCAPlugin__GpgOp = {
    {
QT_MOC_LITERAL(0, 0, 19), // "gpgQCAPlugin::GpgOp"
QT_MOC_LITERAL(1, 20, 9), // "readyRead"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "bytesWritten"
QT_MOC_LITERAL(4, 44, 5), // "bytes"
QT_MOC_LITERAL(5, 50, 8), // "finished"
QT_MOC_LITERAL(6, 59, 14), // "needPassphrase"
QT_MOC_LITERAL(7, 74, 5), // "keyId"
QT_MOC_LITERAL(8, 80, 8), // "needCard"
QT_MOC_LITERAL(9, 89, 23) // "readyReadDiagnosticText"

    },
    "gpgQCAPlugin::GpgOp\0readyRead\0\0"
    "bytesWritten\0bytes\0finished\0needPassphrase\0"
    "keyId\0needCard\0readyReadDiagnosticText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gpgQCAPlugin__GpgOp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    0,   48,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       8,    0,   52,    2, 0x06 /* Public */,
       9,    0,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gpgQCAPlugin::GpgOp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GpgOp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->bytesWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->finished(); break;
        case 3: _t->needPassphrase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->needCard(); break;
        case 5: _t->readyReadDiagnosticText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GpgOp::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GpgOp::readyRead)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GpgOp::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GpgOp::bytesWritten)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GpgOp::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GpgOp::finished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GpgOp::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GpgOp::needPassphrase)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GpgOp::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GpgOp::needCard)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GpgOp::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GpgOp::readyReadDiagnosticText)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gpgQCAPlugin::GpgOp::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_gpgQCAPlugin__GpgOp.data,
    qt_meta_data_gpgQCAPlugin__GpgOp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gpgQCAPlugin::GpgOp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gpgQCAPlugin::GpgOp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gpgQCAPlugin__GpgOp.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int gpgQCAPlugin::GpgOp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void gpgQCAPlugin::GpgOp::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void gpgQCAPlugin::GpgOp::bytesWritten(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gpgQCAPlugin::GpgOp::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void gpgQCAPlugin::GpgOp::needPassphrase(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void gpgQCAPlugin::GpgOp::needCard()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void gpgQCAPlugin::GpgOp::readyReadDiagnosticText()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
