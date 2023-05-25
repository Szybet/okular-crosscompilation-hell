/****************************************************************************
** Meta object code from reading C++ file 'kdirnotify.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/core/kdirnotify.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdirnotify.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrgKdeKDirNotifyInterface_t {
    QByteArrayData data[16];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrgKdeKDirNotifyInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrgKdeKDirNotifyInterface_t qt_meta_stringdata_OrgKdeKDirNotifyInterface = {
    {
QT_MOC_LITERAL(0, 0, 25), // "OrgKdeKDirNotifyInterface"
QT_MOC_LITERAL(1, 26, 11), // "FileRenamed"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 3), // "src"
QT_MOC_LITERAL(4, 43, 3), // "dst"
QT_MOC_LITERAL(5, 47, 24), // "FileRenamedWithLocalPath"
QT_MOC_LITERAL(6, 72, 7), // "dstPath"
QT_MOC_LITERAL(7, 80, 9), // "FileMoved"
QT_MOC_LITERAL(8, 90, 10), // "FilesAdded"
QT_MOC_LITERAL(9, 101, 9), // "directory"
QT_MOC_LITERAL(10, 111, 12), // "FilesChanged"
QT_MOC_LITERAL(11, 124, 8), // "fileList"
QT_MOC_LITERAL(12, 133, 12), // "FilesRemoved"
QT_MOC_LITERAL(13, 146, 16), // "enteredDirectory"
QT_MOC_LITERAL(14, 163, 3), // "url"
QT_MOC_LITERAL(15, 167, 13) // "leftDirectory"

    },
    "OrgKdeKDirNotifyInterface\0FileRenamed\0"
    "\0src\0dst\0FileRenamedWithLocalPath\0"
    "dstPath\0FileMoved\0FilesAdded\0directory\0"
    "FilesChanged\0fileList\0FilesRemoved\0"
    "enteredDirectory\0url\0leftDirectory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrgKdeKDirNotifyInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    3,   59,    2, 0x06 /* Public */,
       7,    2,   66,    2, 0x06 /* Public */,
       8,    1,   71,    2, 0x06 /* Public */,
      10,    1,   74,    2, 0x06 /* Public */,
      12,    1,   77,    2, 0x06 /* Public */,
      13,    1,   80,    2, 0x06 /* Public */,
      15,    1,   83,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void OrgKdeKDirNotifyInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OrgKdeKDirNotifyInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FileRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->FileRenamedWithLocalPath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->FileMoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->FilesAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->FilesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->FilesRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: _t->enteredDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->leftDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OrgKdeKDirNotifyInterface::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgKdeKDirNotifyInterface::FileRenamed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OrgKdeKDirNotifyInterface::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgKdeKDirNotifyInterface::FileRenamedWithLocalPath)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OrgKdeKDirNotifyInterface::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgKdeKDirNotifyInterface::FileMoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OrgKdeKDirNotifyInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgKdeKDirNotifyInterface::FilesAdded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OrgKdeKDirNotifyInterface::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgKdeKDirNotifyInterface::FilesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OrgKdeKDirNotifyInterface::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgKdeKDirNotifyInterface::FilesRemoved)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (OrgKdeKDirNotifyInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgKdeKDirNotifyInterface::enteredDirectory)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (OrgKdeKDirNotifyInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgKdeKDirNotifyInterface::leftDirectory)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OrgKdeKDirNotifyInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_OrgKdeKDirNotifyInterface.data,
    qt_meta_data_OrgKdeKDirNotifyInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OrgKdeKDirNotifyInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKdeKDirNotifyInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrgKdeKDirNotifyInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKdeKDirNotifyInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OrgKdeKDirNotifyInterface::FileRenamed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OrgKdeKDirNotifyInterface::FileRenamedWithLocalPath(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OrgKdeKDirNotifyInterface::FileMoved(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OrgKdeKDirNotifyInterface::FilesAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OrgKdeKDirNotifyInterface::FilesChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OrgKdeKDirNotifyInterface::FilesRemoved(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OrgKdeKDirNotifyInterface::enteredDirectory(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OrgKdeKDirNotifyInterface::leftDirectory(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
