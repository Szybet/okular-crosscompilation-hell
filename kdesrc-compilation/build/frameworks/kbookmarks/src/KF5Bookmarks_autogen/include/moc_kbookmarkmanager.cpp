/****************************************************************************
** Meta object code from reading C++ file 'kbookmarkmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kbookmarks/src/kbookmarkmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kbookmarkmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KBookmarkManager_t {
    QByteArrayData data[21];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KBookmarkManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KBookmarkManager_t qt_meta_stringdata_KBookmarkManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KBookmarkManager"
QT_MOC_LITERAL(1, 17, 22), // "bookmarkCompleteChange"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "caller"
QT_MOC_LITERAL(4, 48, 16), // "bookmarksChanged"
QT_MOC_LITERAL(5, 65, 12), // "groupAddress"
QT_MOC_LITERAL(6, 78, 21), // "bookmarkConfigChanged"
QT_MOC_LITERAL(7, 100, 7), // "changed"
QT_MOC_LITERAL(8, 108, 13), // "configChanged"
QT_MOC_LITERAL(9, 122, 5), // "error"
QT_MOC_LITERAL(10, 128, 12), // "errorMessage"
QT_MOC_LITERAL(11, 141, 17), // "slotEditBookmarks"
QT_MOC_LITERAL(12, 159, 26), // "slotEditBookmarksAtAddress"
QT_MOC_LITERAL(13, 186, 7), // "address"
QT_MOC_LITERAL(14, 194, 20), // "notifyCompleteChange"
QT_MOC_LITERAL(15, 215, 13), // "notifyChanged"
QT_MOC_LITERAL(16, 229, 12), // "QDBusMessage"
QT_MOC_LITERAL(17, 242, 3), // "msg"
QT_MOC_LITERAL(18, 246, 19), // "notifyConfigChanged"
QT_MOC_LITERAL(19, 266, 15), // "slotFileChanged"
QT_MOC_LITERAL(20, 282, 4) // "path"

    },
    "KBookmarkManager\0bookmarkCompleteChange\0"
    "\0caller\0bookmarksChanged\0groupAddress\0"
    "bookmarkConfigChanged\0changed\0"
    "configChanged\0error\0errorMessage\0"
    "slotEditBookmarks\0slotEditBookmarksAtAddress\0"
    "address\0notifyCompleteChange\0notifyChanged\0"
    "QDBusMessage\0msg\0notifyConfigChanged\0"
    "slotFileChanged\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KBookmarkManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    0,   80,    2, 0x06 /* Public */,
       7,    2,   81,    2, 0x06 /* Public */,
       8,    0,   86,    2, 0x06 /* Public */,
       9,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   90,    2, 0x0a /* Public */,
      12,    1,   91,    2, 0x0a /* Public */,
      14,    1,   94,    2, 0x0a /* Public */,
      15,    2,   97,    2, 0x0a /* Public */,
      18,    0,  102,    2, 0x0a /* Public */,
      19,    1,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 16,    5,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,

       0        // eod
};

void KBookmarkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KBookmarkManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bookmarkCompleteChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->bookmarksChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->bookmarkConfigChanged(); break;
        case 3: _t->changed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->configChanged(); break;
        case 5: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotEditBookmarks(); break;
        case 7: _t->slotEditBookmarksAtAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->notifyCompleteChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->notifyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        case 10: _t->notifyConfigChanged(); break;
        case 11: _t->slotFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KBookmarkManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KBookmarkManager::bookmarkCompleteChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KBookmarkManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KBookmarkManager::bookmarksChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KBookmarkManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KBookmarkManager::bookmarkConfigChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KBookmarkManager::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KBookmarkManager::changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KBookmarkManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KBookmarkManager::configChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KBookmarkManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KBookmarkManager::error)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KBookmarkManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KBookmarkManager.data,
    qt_meta_data_KBookmarkManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KBookmarkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KBookmarkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KBookmarkManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KBookmarkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void KBookmarkManager::bookmarkCompleteChange(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KBookmarkManager::bookmarksChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KBookmarkManager::bookmarkConfigChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KBookmarkManager::changed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KBookmarkManager::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KBookmarkManager::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
