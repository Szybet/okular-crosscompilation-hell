/****************************************************************************
** Meta object code from reading C++ file 'mymessagecontext.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../kdesupport/qca/plugins/qca-gnupg/mymessagecontext.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mymessagecontext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gpgQCAPlugin__MyMessageContext_t {
    QByteArrayData data[12];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gpgQCAPlugin__MyMessageContext_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gpgQCAPlugin__MyMessageContext_t qt_meta_stringdata_gpgQCAPlugin__MyMessageContext = {
    {
QT_MOC_LITERAL(0, 0, 30), // "gpgQCAPlugin::MyMessageContext"
QT_MOC_LITERAL(1, 31, 13), // "gpg_readyRead"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 16), // "gpg_bytesWritten"
QT_MOC_LITERAL(4, 63, 5), // "bytes"
QT_MOC_LITERAL(5, 69, 12), // "gpg_finished"
QT_MOC_LITERAL(6, 82, 18), // "gpg_needPassphrase"
QT_MOC_LITERAL(7, 101, 8), // "in_keyId"
QT_MOC_LITERAL(8, 110, 12), // "gpg_needCard"
QT_MOC_LITERAL(9, 123, 27), // "gpg_readyReadDiagnosticText"
QT_MOC_LITERAL(10, 151, 19), // "asker_responseReady"
QT_MOC_LITERAL(11, 171, 24) // "tokenAsker_responseReady"

    },
    "gpgQCAPlugin::MyMessageContext\0"
    "gpg_readyRead\0\0gpg_bytesWritten\0bytes\0"
    "gpg_finished\0gpg_needPassphrase\0"
    "in_keyId\0gpg_needCard\0gpg_readyReadDiagnosticText\0"
    "asker_responseReady\0tokenAsker_responseReady"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gpgQCAPlugin__MyMessageContext[] = {

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
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gpgQCAPlugin::MyMessageContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyMessageContext *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gpg_readyRead(); break;
        case 1: _t->gpg_bytesWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->gpg_finished(); break;
        case 3: _t->gpg_needPassphrase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->gpg_needCard(); break;
        case 5: _t->gpg_readyReadDiagnosticText(); break;
        case 6: _t->asker_responseReady(); break;
        case 7: _t->tokenAsker_responseReady(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gpgQCAPlugin::MyMessageContext::staticMetaObject = { {
    QMetaObject::SuperData::link<QCA::MessageContext::staticMetaObject>(),
    qt_meta_stringdata_gpgQCAPlugin__MyMessageContext.data,
    qt_meta_data_gpgQCAPlugin__MyMessageContext,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gpgQCAPlugin::MyMessageContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gpgQCAPlugin::MyMessageContext::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gpgQCAPlugin__MyMessageContext.stringdata0))
        return static_cast<void*>(this);
    return QCA::MessageContext::qt_metacast(_clname);
}

int gpgQCAPlugin::MyMessageContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCA::MessageContext::qt_metacall(_c, _id, _a);
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
