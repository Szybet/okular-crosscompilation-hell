/****************************************************************************
** Meta object code from reading C++ file 'kcoredirlister_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/core/kcoredirlister_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcoredirlister_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCoreDirListerCache_t {
    QByteArrayData data[28];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCoreDirListerCache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCoreDirListerCache_t qt_meta_stringdata_KCoreDirListerCache = {
    {
QT_MOC_LITERAL(0, 0, 19), // "KCoreDirListerCache"
QT_MOC_LITERAL(1, 20, 14), // "slotFilesAdded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "urlDirectory"
QT_MOC_LITERAL(4, 49, 16), // "slotFilesRemoved"
QT_MOC_LITERAL(5, 66, 8), // "fileList"
QT_MOC_LITERAL(6, 75, 16), // "slotFilesChanged"
QT_MOC_LITERAL(7, 92, 15), // "slotFileRenamed"
QT_MOC_LITERAL(8, 108, 6), // "srcUrl"
QT_MOC_LITERAL(9, 115, 6), // "dstUrl"
QT_MOC_LITERAL(10, 122, 7), // "dstPath"
QT_MOC_LITERAL(11, 130, 13), // "slotFileDirty"
QT_MOC_LITERAL(12, 144, 5), // "_file"
QT_MOC_LITERAL(13, 150, 15), // "slotFileCreated"
QT_MOC_LITERAL(14, 166, 15), // "slotFileDeleted"
QT_MOC_LITERAL(15, 182, 11), // "slotEntries"
QT_MOC_LITERAL(16, 194, 9), // "KIO::Job*"
QT_MOC_LITERAL(17, 204, 3), // "job"
QT_MOC_LITERAL(18, 208, 17), // "KIO::UDSEntryList"
QT_MOC_LITERAL(19, 226, 7), // "entries"
QT_MOC_LITERAL(20, 234, 10), // "slotResult"
QT_MOC_LITERAL(21, 245, 5), // "KJob*"
QT_MOC_LITERAL(22, 251, 1), // "j"
QT_MOC_LITERAL(23, 253, 15), // "slotRedirection"
QT_MOC_LITERAL(24, 269, 3), // "url"
QT_MOC_LITERAL(25, 273, 17), // "slotUpdateEntries"
QT_MOC_LITERAL(26, 291, 16), // "slotUpdateResult"
QT_MOC_LITERAL(27, 308, 21) // "processPendingUpdates"

    },
    "KCoreDirListerCache\0slotFilesAdded\0\0"
    "urlDirectory\0slotFilesRemoved\0fileList\0"
    "slotFilesChanged\0slotFileRenamed\0"
    "srcUrl\0dstUrl\0dstPath\0slotFileDirty\0"
    "_file\0slotFileCreated\0slotFileDeleted\0"
    "slotEntries\0KIO::Job*\0job\0KIO::UDSEntryList\0"
    "entries\0slotResult\0KJob*\0j\0slotRedirection\0"
    "url\0slotUpdateEntries\0slotUpdateResult\0"
    "processPendingUpdates"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCoreDirListerCache[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       4,    1,   82,    2, 0x0a /* Public */,
       6,    1,   85,    2, 0x0a /* Public */,
       7,    3,   88,    2, 0x0a /* Public */,
      11,    1,   95,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      14,    1,  101,    2, 0x08 /* Private */,
      15,    2,  104,    2, 0x08 /* Private */,
      20,    1,  109,    2, 0x08 /* Private */,
      23,    2,  112,    2, 0x08 /* Private */,
      25,    2,  117,    2, 0x08 /* Private */,
      26,    1,  122,    2, 0x08 /* Private */,
      27,    0,  125,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 18,   17,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QUrl,   17,   24,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 18,   17,   19,
    QMetaType::Void, 0x80000000 | 21,   17,
    QMetaType::Void,

       0        // eod
};

void KCoreDirListerCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KCoreDirListerCache *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFilesAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotFilesRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->slotFilesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->slotFileRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->slotFileDirty((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slotFileCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotFileDeleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->slotEntries((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const KIO::UDSEntryList(*)>(_a[2]))); break;
        case 8: _t->slotResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 9: _t->slotRedirection((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 10: _t->slotUpdateEntries((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const KIO::UDSEntryList(*)>(_a[2]))); break;
        case 11: _t->slotUpdateResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 12: _t->processPendingUpdates(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KCoreDirListerCache::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KCoreDirListerCache.data,
    qt_meta_data_KCoreDirListerCache,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCoreDirListerCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCoreDirListerCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCoreDirListerCache.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KCoreDirListerCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
struct qt_meta_stringdata_KCoreDirListerPrivate__CachedItemsJob_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCoreDirListerPrivate__CachedItemsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCoreDirListerPrivate__CachedItemsJob_t qt_meta_stringdata_KCoreDirListerPrivate__CachedItemsJob = {
    {
QT_MOC_LITERAL(0, 0, 37), // "KCoreDirListerPrivate::Cached..."
QT_MOC_LITERAL(1, 38, 4), // "done"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "KCoreDirListerPrivate::CachedItemsJob\0"
    "done\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCoreDirListerPrivate__CachedItemsJob[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void KCoreDirListerPrivate::CachedItemsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CachedItemsJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KCoreDirListerPrivate::CachedItemsJob::staticMetaObject = { {
    QMetaObject::SuperData::link<KJob::staticMetaObject>(),
    qt_meta_stringdata_KCoreDirListerPrivate__CachedItemsJob.data,
    qt_meta_data_KCoreDirListerPrivate__CachedItemsJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCoreDirListerPrivate::CachedItemsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCoreDirListerPrivate::CachedItemsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCoreDirListerPrivate__CachedItemsJob.stringdata0))
        return static_cast<void*>(this);
    return KJob::qt_metacast(_clname);
}

int KCoreDirListerPrivate::CachedItemsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KJob::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
