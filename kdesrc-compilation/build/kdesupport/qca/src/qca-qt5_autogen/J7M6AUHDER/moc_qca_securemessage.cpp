/****************************************************************************
** Meta object code from reading C++ file 'qca_securemessage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../kdesupport/qca/include/QtCrypto/qca_securemessage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qca_securemessage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCA__SecureMessage_t {
    QByteArrayData data[6];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__SecureMessage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__SecureMessage_t qt_meta_stringdata_QCA__SecureMessage = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QCA::SecureMessage"
QT_MOC_LITERAL(1, 19, 9), // "readyRead"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "bytesWritten"
QT_MOC_LITERAL(4, 43, 5), // "bytes"
QT_MOC_LITERAL(5, 49, 8) // "finished"

    },
    "QCA::SecureMessage\0readyRead\0\0"
    "bytesWritten\0bytes\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__SecureMessage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,
       5,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

       0        // eod
};

void QCA::SecureMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SecureMessage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->bytesWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SecureMessage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SecureMessage::readyRead)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SecureMessage::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SecureMessage::bytesWritten)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SecureMessage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SecureMessage::finished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QCA::SecureMessage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__SecureMessage.data,
    qt_meta_data_QCA__SecureMessage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::SecureMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::SecureMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__SecureMessage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Algorithm"))
        return static_cast< Algorithm*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::SecureMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QCA::SecureMessage::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QCA::SecureMessage::bytesWritten(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCA::SecureMessage::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_QCA__SecureMessageSystem_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__SecureMessageSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__SecureMessageSystem_t qt_meta_stringdata_QCA__SecureMessageSystem = {
    {
QT_MOC_LITERAL(0, 0, 24) // "QCA::SecureMessageSystem"

    },
    "QCA::SecureMessageSystem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__SecureMessageSystem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCA::SecureMessageSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::SecureMessageSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__SecureMessageSystem.data,
    qt_meta_data_QCA__SecureMessageSystem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::SecureMessageSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::SecureMessageSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__SecureMessageSystem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Algorithm"))
        return static_cast< Algorithm*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::SecureMessageSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCA__OpenPGP_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__OpenPGP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__OpenPGP_t qt_meta_stringdata_QCA__OpenPGP = {
    {
QT_MOC_LITERAL(0, 0, 12) // "QCA::OpenPGP"

    },
    "QCA::OpenPGP"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__OpenPGP[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCA::OpenPGP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::OpenPGP::staticMetaObject = { {
    QMetaObject::SuperData::link<SecureMessageSystem::staticMetaObject>(),
    qt_meta_stringdata_QCA__OpenPGP.data,
    qt_meta_data_QCA__OpenPGP,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::OpenPGP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::OpenPGP::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__OpenPGP.stringdata0))
        return static_cast<void*>(this);
    return SecureMessageSystem::qt_metacast(_clname);
}

int QCA::OpenPGP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SecureMessageSystem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCA__CMS_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__CMS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__CMS_t qt_meta_stringdata_QCA__CMS = {
    {
QT_MOC_LITERAL(0, 0, 8) // "QCA::CMS"

    },
    "QCA::CMS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__CMS[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCA::CMS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::CMS::staticMetaObject = { {
    QMetaObject::SuperData::link<SecureMessageSystem::staticMetaObject>(),
    qt_meta_stringdata_QCA__CMS.data,
    qt_meta_data_QCA__CMS,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::CMS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::CMS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__CMS.stringdata0))
        return static_cast<void*>(this);
    return SecureMessageSystem::qt_metacast(_clname);
}

int QCA::CMS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SecureMessageSystem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
