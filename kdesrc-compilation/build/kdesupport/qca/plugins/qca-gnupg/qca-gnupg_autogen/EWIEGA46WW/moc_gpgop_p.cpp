/****************************************************************************
** Meta object code from reading C++ file 'gpgop_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../kdesupport/qca/plugins/qca-gnupg/gpgop_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpgop_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gpgQCAPlugin__GpgOp__Private_t {
    QByteArrayData data[10];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gpgQCAPlugin__GpgOp__Private_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gpgQCAPlugin__GpgOp__Private_t qt_meta_stringdata_gpgQCAPlugin__GpgOp__Private = {
    {
QT_MOC_LITERAL(0, 0, 28), // "gpgQCAPlugin::GpgOp::Private"
QT_MOC_LITERAL(1, 29, 13), // "act_readyRead"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 16), // "act_bytesWritten"
QT_MOC_LITERAL(4, 61, 5), // "bytes"
QT_MOC_LITERAL(5, 67, 18), // "act_needPassphrase"
QT_MOC_LITERAL(6, 86, 5), // "keyId"
QT_MOC_LITERAL(7, 92, 12), // "act_needCard"
QT_MOC_LITERAL(8, 105, 27), // "act_readyReadDiagnosticText"
QT_MOC_LITERAL(9, 133, 12) // "act_finished"

    },
    "gpgQCAPlugin::GpgOp::Private\0act_readyRead\0"
    "\0act_bytesWritten\0bytes\0act_needPassphrase\0"
    "keyId\0act_needCard\0act_readyReadDiagnosticText\0"
    "act_finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gpgQCAPlugin__GpgOp__Private[] = {

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
       1,    0,   44,    2, 0x0a /* Public */,
       3,    1,   45,    2, 0x0a /* Public */,
       5,    1,   48,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,
       8,    0,   52,    2, 0x0a /* Public */,
       9,    0,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gpgQCAPlugin::GpgOp::Private::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Private *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->act_readyRead(); break;
        case 1: _t->act_bytesWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->act_needPassphrase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->act_needCard(); break;
        case 4: _t->act_readyReadDiagnosticText(); break;
        case 5: _t->act_finished(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gpgQCAPlugin::GpgOp::Private::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_gpgQCAPlugin__GpgOp__Private.data,
    qt_meta_data_gpgQCAPlugin__GpgOp__Private,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gpgQCAPlugin::GpgOp::Private::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gpgQCAPlugin::GpgOp::Private::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gpgQCAPlugin__GpgOp__Private.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int gpgQCAPlugin::GpgOp::Private::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
