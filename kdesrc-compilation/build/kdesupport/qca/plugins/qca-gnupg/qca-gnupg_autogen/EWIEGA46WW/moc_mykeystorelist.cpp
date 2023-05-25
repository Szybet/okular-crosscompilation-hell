/****************************************************************************
** Meta object code from reading C++ file 'mykeystorelist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../kdesupport/qca/plugins/qca-gnupg/mykeystorelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mykeystorelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gpgQCAPlugin__MyKeyStoreList_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gpgQCAPlugin__MyKeyStoreList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gpgQCAPlugin__MyKeyStoreList_t qt_meta_stringdata_gpgQCAPlugin__MyKeyStoreList = {
    {
QT_MOC_LITERAL(0, 0, 28), // "gpgQCAPlugin::MyKeyStoreList"
QT_MOC_LITERAL(1, 29, 12), // "gpg_finished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 12), // "ring_changed"
QT_MOC_LITERAL(4, 56, 8) // "filePath"

    },
    "gpgQCAPlugin::MyKeyStoreList\0gpg_finished\0"
    "\0ring_changed\0filePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gpgQCAPlugin__MyKeyStoreList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void gpgQCAPlugin::MyKeyStoreList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyKeyStoreList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gpg_finished(); break;
        case 1: _t->ring_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gpgQCAPlugin::MyKeyStoreList::staticMetaObject = { {
    QMetaObject::SuperData::link<QCA::KeyStoreListContext::staticMetaObject>(),
    qt_meta_stringdata_gpgQCAPlugin__MyKeyStoreList.data,
    qt_meta_data_gpgQCAPlugin__MyKeyStoreList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gpgQCAPlugin::MyKeyStoreList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gpgQCAPlugin::MyKeyStoreList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gpgQCAPlugin__MyKeyStoreList.stringdata0))
        return static_cast<void*>(this);
    return QCA::KeyStoreListContext::qt_metacast(_clname);
}

int gpgQCAPlugin::MyKeyStoreList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCA::KeyStoreListContext::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
