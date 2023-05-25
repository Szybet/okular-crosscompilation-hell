/****************************************************************************
** Meta object code from reading C++ file 'fileundomanager_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/widgets/fileundomanager_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileundomanager_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__CommandRecorder_t {
    QByteArrayData data[16];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__CommandRecorder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__CommandRecorder_t qt_meta_stringdata_KIO__CommandRecorder = {
    {
QT_MOC_LITERAL(0, 0, 20), // "KIO::CommandRecorder"
QT_MOC_LITERAL(1, 21, 10), // "slotResult"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "KJob*"
QT_MOC_LITERAL(4, 39, 3), // "job"
QT_MOC_LITERAL(5, 43, 15), // "slotCopyingDone"
QT_MOC_LITERAL(6, 59, 9), // "KIO::Job*"
QT_MOC_LITERAL(7, 69, 4), // "from"
QT_MOC_LITERAL(8, 74, 2), // "to"
QT_MOC_LITERAL(9, 77, 9), // "directory"
QT_MOC_LITERAL(10, 87, 7), // "renamed"
QT_MOC_LITERAL(11, 95, 19), // "slotCopyingLinkDone"
QT_MOC_LITERAL(12, 115, 6), // "target"
QT_MOC_LITERAL(13, 122, 20), // "slotDirectoryCreated"
QT_MOC_LITERAL(14, 143, 3), // "url"
QT_MOC_LITERAL(15, 147, 21) // "slotBatchRenamingDone"

    },
    "KIO::CommandRecorder\0slotResult\0\0KJob*\0"
    "job\0slotCopyingDone\0KIO::Job*\0from\0"
    "to\0directory\0renamed\0slotCopyingLinkDone\0"
    "target\0slotDirectoryCreated\0url\0"
    "slotBatchRenamingDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__CommandRecorder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       5,    6,   42,    2, 0x08 /* Private */,
      11,    4,   55,    2, 0x08 /* Private */,
      13,    1,   64,    2, 0x08 /* Private */,
      15,    2,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QUrl, QMetaType::QUrl, QMetaType::QDateTime, QMetaType::Bool, QMetaType::Bool,    2,    7,    8,    2,    9,   10,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QUrl, QMetaType::QString, QMetaType::QUrl,    2,    7,   12,    8,
    QMetaType::Void, QMetaType::QUrl,   14,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QUrl,    7,    8,

       0        // eod
};

void KIO::CommandRecorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommandRecorder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 1: _t->slotCopyingDone((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])),(*reinterpret_cast< const QDateTime(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 2: _t->slotCopyingLinkDone((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QUrl(*)>(_a[4]))); break;
        case 3: _t->slotDirectoryCreated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->slotBatchRenamingDone((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::CommandRecorder::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KIO__CommandRecorder.data,
    qt_meta_data_KIO__CommandRecorder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::CommandRecorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::CommandRecorder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__CommandRecorder.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KIO::CommandRecorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_KIO__FileUndoManagerPrivate_t {
    QByteArrayData data[14];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__FileUndoManagerPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__FileUndoManagerPrivate_t qt_meta_stringdata_KIO__FileUndoManagerPrivate = {
    {
QT_MOC_LITERAL(0, 0, 27), // "KIO::FileUndoManagerPrivate"
QT_MOC_LITERAL(1, 28, 4), // "push"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "command"
QT_MOC_LITERAL(4, 42, 3), // "pop"
QT_MOC_LITERAL(5, 46, 4), // "lock"
QT_MOC_LITERAL(6, 51, 6), // "unlock"
QT_MOC_LITERAL(7, 58, 8), // "slotPush"
QT_MOC_LITERAL(8, 67, 7), // "slotPop"
QT_MOC_LITERAL(9, 75, 8), // "slotLock"
QT_MOC_LITERAL(10, 84, 10), // "slotUnlock"
QT_MOC_LITERAL(11, 95, 8), // "undoStep"
QT_MOC_LITERAL(12, 104, 10), // "slotResult"
QT_MOC_LITERAL(13, 115, 5) // "KJob*"

    },
    "KIO::FileUndoManagerPrivate\0push\0\0"
    "command\0pop\0lock\0unlock\0slotPush\0"
    "slotPop\0slotLock\0slotUnlock\0undoStep\0"
    "slotResult\0KJob*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__FileUndoManagerPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    0,   67,    2, 0x06 /* Public */,
       5,    0,   68,    2, 0x06 /* Public */,
       6,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   70,    2, 0x0a /* Public */,
       8,    0,   73,    2, 0x0a /* Public */,
       9,    0,   74,    2, 0x0a /* Public */,
      10,    0,   75,    2, 0x0a /* Public */,
      11,    0,   76,    2, 0x0a /* Public */,
      12,    1,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,

       0        // eod
};

void KIO::FileUndoManagerPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileUndoManagerPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->push((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->pop(); break;
        case 2: _t->lock(); break;
        case 3: _t->unlock(); break;
        case 4: _t->slotPush((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->slotPop(); break;
        case 6: _t->slotLock(); break;
        case 7: _t->slotUnlock(); break;
        case 8: _t->undoStep(); break;
        case 9: _t->slotResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileUndoManagerPrivate::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileUndoManagerPrivate::push)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileUndoManagerPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileUndoManagerPrivate::pop)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileUndoManagerPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileUndoManagerPrivate::lock)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileUndoManagerPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileUndoManagerPrivate::unlock)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::FileUndoManagerPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KIO__FileUndoManagerPrivate.data,
    qt_meta_data_KIO__FileUndoManagerPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::FileUndoManagerPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::FileUndoManagerPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__FileUndoManagerPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KIO::FileUndoManagerPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void KIO::FileUndoManagerPrivate::push(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::FileUndoManagerPrivate::pop()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KIO::FileUndoManagerPrivate::lock()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KIO::FileUndoManagerPrivate::unlock()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
