/****************************************************************************
** Meta object code from reading C++ file 'qca_support.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../kdesupport/qca/include/QtCrypto/qca_support.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qca_support.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCA__SyncThread_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__SyncThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__SyncThread_t qt_meta_stringdata_QCA__SyncThread = {
    {
QT_MOC_LITERAL(0, 0, 15) // "QCA::SyncThread"

    },
    "QCA::SyncThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__SyncThread[] = {

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

void QCA::SyncThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::SyncThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_QCA__SyncThread.data,
    qt_meta_data_QCA__SyncThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::SyncThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::SyncThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__SyncThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QCA::SyncThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCA__Synchronizer_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__Synchronizer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__Synchronizer_t qt_meta_stringdata_QCA__Synchronizer = {
    {
QT_MOC_LITERAL(0, 0, 17) // "QCA::Synchronizer"

    },
    "QCA::Synchronizer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__Synchronizer[] = {

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

void QCA::Synchronizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::Synchronizer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__Synchronizer.data,
    qt_meta_data_QCA__Synchronizer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::Synchronizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::Synchronizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__Synchronizer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::Synchronizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCA__DirWatch_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__DirWatch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__DirWatch_t qt_meta_stringdata_QCA__DirWatch = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QCA::DirWatch"
QT_MOC_LITERAL(1, 14, 7), // "changed"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "QCA::DirWatch\0changed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__DirWatch[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QCA::DirWatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DirWatch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DirWatch::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DirWatch::changed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::DirWatch::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__DirWatch.data,
    qt_meta_data_QCA__DirWatch,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::DirWatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::DirWatch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__DirWatch.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::DirWatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QCA::DirWatch::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QCA__FileWatch_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__FileWatch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__FileWatch_t qt_meta_stringdata_QCA__FileWatch = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QCA::FileWatch"
QT_MOC_LITERAL(1, 15, 7), // "changed"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "QCA::FileWatch\0changed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__FileWatch[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QCA::FileWatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileWatch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileWatch::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileWatch::changed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::FileWatch::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__FileWatch.data,
    qt_meta_data_QCA__FileWatch,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::FileWatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::FileWatch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__FileWatch.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::FileWatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QCA::FileWatch::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QCA__Console_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__Console_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__Console_t qt_meta_stringdata_QCA__Console = {
    {
QT_MOC_LITERAL(0, 0, 12) // "QCA::Console"

    },
    "QCA::Console"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__Console[] = {

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

void QCA::Console::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::Console::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__Console.data,
    qt_meta_data_QCA__Console,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::Console::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::Console::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__Console.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::Console::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCA__ConsoleReference_t {
    QByteArrayData data[7];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__ConsoleReference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__ConsoleReference_t qt_meta_stringdata_QCA__ConsoleReference = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QCA::ConsoleReference"
QT_MOC_LITERAL(1, 22, 9), // "readyRead"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "bytesWritten"
QT_MOC_LITERAL(4, 46, 5), // "bytes"
QT_MOC_LITERAL(5, 52, 11), // "inputClosed"
QT_MOC_LITERAL(6, 64, 12) // "outputClosed"

    },
    "QCA::ConsoleReference\0readyRead\0\0"
    "bytesWritten\0bytes\0inputClosed\0"
    "outputClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__ConsoleReference[] = {

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
       3,    1,   35,    2, 0x06 /* Public */,
       5,    0,   38,    2, 0x06 /* Public */,
       6,    0,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QCA::ConsoleReference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConsoleReference *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->bytesWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->inputClosed(); break;
        case 3: _t->outputClosed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConsoleReference::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsoleReference::readyRead)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConsoleReference::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsoleReference::bytesWritten)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConsoleReference::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsoleReference::inputClosed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ConsoleReference::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsoleReference::outputClosed)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QCA::ConsoleReference::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__ConsoleReference.data,
    qt_meta_data_QCA__ConsoleReference,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::ConsoleReference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::ConsoleReference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__ConsoleReference.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::ConsoleReference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QCA::ConsoleReference::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QCA::ConsoleReference::bytesWritten(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCA::ConsoleReference::inputClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QCA::ConsoleReference::outputClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_QCA__ConsolePrompt_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__ConsolePrompt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__ConsolePrompt_t qt_meta_stringdata_QCA__ConsolePrompt = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QCA::ConsolePrompt"
QT_MOC_LITERAL(1, 19, 8), // "finished"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "QCA::ConsolePrompt\0finished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__ConsolePrompt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QCA::ConsolePrompt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConsolePrompt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConsolePrompt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsolePrompt::finished)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::ConsolePrompt::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__ConsolePrompt.data,
    qt_meta_data_QCA__ConsolePrompt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::ConsolePrompt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::ConsolePrompt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__ConsolePrompt.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::ConsolePrompt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QCA::ConsolePrompt::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QCA__Logger_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__Logger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__Logger_t qt_meta_stringdata_QCA__Logger = {
    {
QT_MOC_LITERAL(0, 0, 11) // "QCA::Logger"

    },
    "QCA::Logger"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__Logger[] = {

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

void QCA::Logger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::Logger::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__Logger.data,
    qt_meta_data_QCA__Logger,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::Logger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::Logger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__Logger.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::Logger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCA__AbstractLogDevice_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCA__AbstractLogDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCA__AbstractLogDevice_t qt_meta_stringdata_QCA__AbstractLogDevice = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QCA::AbstractLogDevice"

    },
    "QCA::AbstractLogDevice"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__AbstractLogDevice[] = {

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

void QCA::AbstractLogDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QCA::AbstractLogDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCA__AbstractLogDevice.data,
    qt_meta_data_QCA__AbstractLogDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCA::AbstractLogDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::AbstractLogDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__AbstractLogDevice.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCA::AbstractLogDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
