/****************************************************************************
** Meta object code from reading C++ file 'qca_keystore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../kdesupport/qca/include/QtCrypto/qca_keystore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qca_keystore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCA__KeyStoreEntryWatcher_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__KeyStoreEntryWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__KeyStoreEntryWatcher_t qt_meta_stringdata_QCA__KeyStoreEntryWatcher = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QCA::KeyStoreEntryWatcher"
QT_MOC_LITERAL(1, 26, 9), // "available"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11) // "unavailable"

    },
    "QCA::KeyStoreEntryWatcher\0available\0"
    "\0unavailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__KeyStoreEntryWatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QCA::KeyStoreEntryWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KeyStoreEntryWatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->available(); break;
        case 1: _t->unavailable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KeyStoreEntryWatcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyStoreEntryWatcher::available)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KeyStoreEntryWatcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyStoreEntryWatcher::unavailable)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::KeyStoreEntryWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__KeyStoreEntryWatcher.data,
    qt_meta_data_QCA__KeyStoreEntryWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::KeyStoreEntryWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::KeyStoreEntryWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__KeyStoreEntryWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::KeyStoreEntryWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QCA::KeyStoreEntryWatcher::available()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QCA::KeyStoreEntryWatcher::unavailable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QCA__KeyStore_t {
    QByteArrayData data[8];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__KeyStore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__KeyStore_t qt_meta_stringdata_QCA__KeyStore = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QCA::KeyStore"
QT_MOC_LITERAL(1, 14, 7), // "updated"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "unavailable"
QT_MOC_LITERAL(4, 35, 12), // "entryWritten"
QT_MOC_LITERAL(5, 48, 7), // "entryId"
QT_MOC_LITERAL(6, 56, 12), // "entryRemoved"
QT_MOC_LITERAL(7, 69, 7) // "success"

    },
    "QCA::KeyStore\0updated\0\0unavailable\0"
    "entryWritten\0entryId\0entryRemoved\0"
    "success"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__KeyStore[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,
       6,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void QCA::KeyStore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KeyStore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updated(); break;
        case 1: _t->unavailable(); break;
        case 2: _t->entryWritten((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->entryRemoved((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KeyStore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyStore::updated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KeyStore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyStore::unavailable)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KeyStore::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyStore::entryWritten)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KeyStore::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyStore::entryRemoved)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QCA::KeyStore::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__KeyStore.data,
    qt_meta_data_QCA__KeyStore,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::KeyStore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::KeyStore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__KeyStore.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Algorithm"))
        return static_cast< Algorithm*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::KeyStore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QCA::KeyStore::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QCA::KeyStore::unavailable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QCA::KeyStore::entryWritten(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCA::KeyStore::entryRemoved(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_QCA__KeyStoreManager_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__KeyStoreManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__KeyStoreManager_t qt_meta_stringdata_QCA__KeyStoreManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QCA::KeyStoreManager"
QT_MOC_LITERAL(1, 21, 11), // "busyStarted"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "busyFinished"
QT_MOC_LITERAL(4, 47, 17), // "keyStoreAvailable"
QT_MOC_LITERAL(5, 65, 2) // "id"

    },
    "QCA::KeyStoreManager\0busyStarted\0\0"
    "busyFinished\0keyStoreAvailable\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__KeyStoreManager[] = {

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
       3,    0,   30,    2, 0x06 /* Public */,
       4,    1,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void QCA::KeyStoreManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KeyStoreManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->busyStarted(); break;
        case 1: _t->busyFinished(); break;
        case 2: _t->keyStoreAvailable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KeyStoreManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyStoreManager::busyStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KeyStoreManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyStoreManager::busyFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KeyStoreManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyStoreManager::keyStoreAvailable)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QCA::KeyStoreManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__KeyStoreManager.data,
    qt_meta_data_QCA__KeyStoreManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::KeyStoreManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::KeyStoreManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__KeyStoreManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::KeyStoreManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QCA::KeyStoreManager::busyStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QCA::KeyStoreManager::busyFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QCA::KeyStoreManager::keyStoreAvailable(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
