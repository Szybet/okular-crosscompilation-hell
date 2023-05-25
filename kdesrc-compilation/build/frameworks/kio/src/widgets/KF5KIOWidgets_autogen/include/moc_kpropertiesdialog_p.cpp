/****************************************************************************
** Meta object code from reading C++ file 'kpropertiesdialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/widgets/kpropertiesdialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kpropertiesdialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDEPrivate__KFilePropsPlugin_t {
    QByteArrayData data[21];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDEPrivate__KFilePropsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDEPrivate__KFilePropsPlugin_t qt_meta_stringdata_KDEPrivate__KFilePropsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 28), // "KDEPrivate::KFilePropsPlugin"
QT_MOC_LITERAL(1, 29, 14), // "changesApplied"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 16), // "slotEditFileType"
QT_MOC_LITERAL(4, 62, 16), // "slotCopyFinished"
QT_MOC_LITERAL(5, 79, 5), // "KJob*"
QT_MOC_LITERAL(6, 85, 15), // "slotFileRenamed"
QT_MOC_LITERAL(7, 101, 9), // "KIO::Job*"
QT_MOC_LITERAL(8, 111, 17), // "slotDirSizeUpdate"
QT_MOC_LITERAL(9, 129, 19), // "slotDirSizeFinished"
QT_MOC_LITERAL(10, 149, 19), // "slotFreeSpaceResult"
QT_MOC_LITERAL(11, 169, 3), // "job"
QT_MOC_LITERAL(12, 173, 15), // "KIO::filesize_t"
QT_MOC_LITERAL(13, 189, 4), // "size"
QT_MOC_LITERAL(14, 194, 9), // "available"
QT_MOC_LITERAL(15, 204, 12), // "slotSizeStop"
QT_MOC_LITERAL(16, 217, 17), // "slotSizeDetermine"
QT_MOC_LITERAL(17, 235, 15), // "slotSizeDetails"
QT_MOC_LITERAL(18, 251, 15), // "nameFileChanged"
QT_MOC_LITERAL(19, 267, 4), // "text"
QT_MOC_LITERAL(20, 272, 15) // "slotIconChanged"

    },
    "KDEPrivate::KFilePropsPlugin\0"
    "changesApplied\0\0slotEditFileType\0"
    "slotCopyFinished\0KJob*\0slotFileRenamed\0"
    "KIO::Job*\0slotDirSizeUpdate\0"
    "slotDirSizeFinished\0slotFreeSpaceResult\0"
    "job\0KIO::filesize_t\0size\0available\0"
    "slotSizeStop\0slotSizeDetermine\0"
    "slotSizeDetails\0nameFileChanged\0text\0"
    "slotIconChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDEPrivate__KFilePropsPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x09 /* Protected */,
       4,    1,   76,    2, 0x09 /* Protected */,
       6,    3,   79,    2, 0x09 /* Protected */,
       8,    0,   86,    2, 0x09 /* Protected */,
       9,    1,   87,    2, 0x09 /* Protected */,
      10,    3,   90,    2, 0x09 /* Protected */,
      15,    0,   97,    2, 0x09 /* Protected */,
      16,    0,   98,    2, 0x09 /* Protected */,
      17,    0,   99,    2, 0x09 /* Protected */,
      18,    1,  100,    2, 0x08 /* Private */,
      20,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QUrl, QMetaType::QUrl,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 12, 0x80000000 | 12,   11,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,

       0        // eod
};

void KDEPrivate::KFilePropsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KFilePropsPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changesApplied(); break;
        case 1: _t->slotEditFileType(); break;
        case 2: _t->slotCopyFinished((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 3: _t->slotFileRenamed((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 4: _t->slotDirSizeUpdate(); break;
        case 5: _t->slotDirSizeFinished((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 6: _t->slotFreeSpaceResult((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< KIO::filesize_t(*)>(_a[2])),(*reinterpret_cast< KIO::filesize_t(*)>(_a[3]))); break;
        case 7: _t->slotSizeStop(); break;
        case 8: _t->slotSizeDetermine(); break;
        case 9: _t->slotSizeDetails(); break;
        case 10: _t->nameFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->slotIconChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KFilePropsPlugin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePropsPlugin::changesApplied)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDEPrivate::KFilePropsPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<KPropertiesDialogPlugin::staticMetaObject>(),
    qt_meta_stringdata_KDEPrivate__KFilePropsPlugin.data,
    qt_meta_data_KDEPrivate__KFilePropsPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDEPrivate::KFilePropsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDEPrivate::KFilePropsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDEPrivate__KFilePropsPlugin.stringdata0))
        return static_cast<void*>(this);
    return KPropertiesDialogPlugin::qt_metacast(_clname);
}

int KDEPrivate::KFilePropsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPropertiesDialogPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void KDEPrivate::KFilePropsPlugin::changesApplied()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_KDEPrivate__KFilePermissionsPropsPlugin_t {
    QByteArrayData data[4];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDEPrivate__KFilePermissionsPropsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDEPrivate__KFilePermissionsPropsPlugin_t qt_meta_stringdata_KDEPrivate__KFilePermissionsPropsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 39), // "KDEPrivate::KFilePermissionsP..."
QT_MOC_LITERAL(1, 40, 14), // "changesApplied"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 27) // "slotShowAdvancedPermissions"

    },
    "KDEPrivate::KFilePermissionsPropsPlugin\0"
    "changesApplied\0\0slotShowAdvancedPermissions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDEPrivate__KFilePermissionsPropsPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void KDEPrivate::KFilePermissionsPropsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KFilePermissionsPropsPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changesApplied(); break;
        case 1: _t->slotShowAdvancedPermissions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KFilePermissionsPropsPlugin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePermissionsPropsPlugin::changesApplied)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KDEPrivate::KFilePermissionsPropsPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<KPropertiesDialogPlugin::staticMetaObject>(),
    qt_meta_stringdata_KDEPrivate__KFilePermissionsPropsPlugin.data,
    qt_meta_data_KDEPrivate__KFilePermissionsPropsPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDEPrivate::KFilePermissionsPropsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDEPrivate::KFilePermissionsPropsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDEPrivate__KFilePermissionsPropsPlugin.stringdata0))
        return static_cast<void*>(this);
    return KPropertiesDialogPlugin::qt_metacast(_clname);
}

int KDEPrivate::KFilePermissionsPropsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPropertiesDialogPlugin::qt_metacall(_c, _id, _a);
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
void KDEPrivate::KFilePermissionsPropsPlugin::changesApplied()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_KDEPrivate__KChecksumsPlugin_t {
    QByteArrayData data[9];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDEPrivate__KChecksumsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDEPrivate__KChecksumsPlugin_t qt_meta_stringdata_KDEPrivate__KChecksumsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 28), // "KDEPrivate::KChecksumsPlugin"
QT_MOC_LITERAL(1, 29, 19), // "slotInvalidateCache"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 11), // "slotShowMd5"
QT_MOC_LITERAL(4, 62, 12), // "slotShowSha1"
QT_MOC_LITERAL(5, 75, 14), // "slotShowSha256"
QT_MOC_LITERAL(6, 90, 14), // "slotShowSha512"
QT_MOC_LITERAL(7, 105, 18), // "slotVerifyChecksum"
QT_MOC_LITERAL(8, 124, 5) // "input"

    },
    "KDEPrivate::KChecksumsPlugin\0"
    "slotInvalidateCache\0\0slotShowMd5\0"
    "slotShowSha1\0slotShowSha256\0slotShowSha512\0"
    "slotVerifyChecksum\0input"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDEPrivate__KChecksumsPlugin[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void KDEPrivate::KChecksumsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KChecksumsPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotInvalidateCache(); break;
        case 1: _t->slotShowMd5(); break;
        case 2: _t->slotShowSha1(); break;
        case 3: _t->slotShowSha256(); break;
        case 4: _t->slotShowSha512(); break;
        case 5: _t->slotVerifyChecksum((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDEPrivate::KChecksumsPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<KPropertiesDialogPlugin::staticMetaObject>(),
    qt_meta_stringdata_KDEPrivate__KChecksumsPlugin.data,
    qt_meta_data_KDEPrivate__KChecksumsPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDEPrivate::KChecksumsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDEPrivate::KChecksumsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDEPrivate__KChecksumsPlugin.stringdata0))
        return static_cast<void*>(this);
    return KPropertiesDialogPlugin::qt_metacast(_clname);
}

int KDEPrivate::KChecksumsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPropertiesDialogPlugin::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_KDEPrivate__KUrlPropsPlugin_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDEPrivate__KUrlPropsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDEPrivate__KUrlPropsPlugin_t qt_meta_stringdata_KDEPrivate__KUrlPropsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 27) // "KDEPrivate::KUrlPropsPlugin"

    },
    "KDEPrivate::KUrlPropsPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDEPrivate__KUrlPropsPlugin[] = {

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

void KDEPrivate::KUrlPropsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KDEPrivate::KUrlPropsPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<KPropertiesDialogPlugin::staticMetaObject>(),
    qt_meta_stringdata_KDEPrivate__KUrlPropsPlugin.data,
    qt_meta_data_KDEPrivate__KUrlPropsPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDEPrivate::KUrlPropsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDEPrivate::KUrlPropsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDEPrivate__KUrlPropsPlugin.stringdata0))
        return static_cast<void*>(this);
    return KPropertiesDialogPlugin::qt_metacast(_clname);
}

int KDEPrivate::KUrlPropsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPropertiesDialogPlugin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_KDEPrivate__KDesktopPropsPlugin_t {
    QByteArrayData data[6];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDEPrivate__KDesktopPropsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDEPrivate__KDesktopPropsPlugin_t qt_meta_stringdata_KDEPrivate__KDesktopPropsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 31), // "KDEPrivate::KDesktopPropsPlugin"
QT_MOC_LITERAL(1, 32, 15), // "slotAddFiletype"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 15), // "slotDelFiletype"
QT_MOC_LITERAL(4, 65, 14), // "slotBrowseExec"
QT_MOC_LITERAL(5, 80, 12) // "slotAdvanced"

    },
    "KDEPrivate::KDesktopPropsPlugin\0"
    "slotAddFiletype\0\0slotDelFiletype\0"
    "slotBrowseExec\0slotAdvanced"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDEPrivate__KDesktopPropsPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KDEPrivate::KDesktopPropsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KDesktopPropsPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotAddFiletype(); break;
        case 1: _t->slotDelFiletype(); break;
        case 2: _t->slotBrowseExec(); break;
        case 3: _t->slotAdvanced(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KDEPrivate::KDesktopPropsPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<KPropertiesDialogPlugin::staticMetaObject>(),
    qt_meta_stringdata_KDEPrivate__KDesktopPropsPlugin.data,
    qt_meta_data_KDEPrivate__KDesktopPropsPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDEPrivate::KDesktopPropsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDEPrivate::KDesktopPropsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDEPrivate__KDesktopPropsPlugin.stringdata0))
        return static_cast<void*>(this);
    return KPropertiesDialogPlugin::qt_metacast(_clname);
}

int KDEPrivate::KDesktopPropsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPropertiesDialogPlugin::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
