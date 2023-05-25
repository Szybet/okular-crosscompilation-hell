/****************************************************************************
** Meta object code from reading C++ file 'kbookmarkmanageradaptor_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kbookmarks/src/kbookmarkmanageradaptor_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kbookmarkmanageradaptor_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KBookmarkManagerAdaptor_t {
    QByteArrayData data[10];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KBookmarkManagerAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KBookmarkManagerAdaptor_t qt_meta_stringdata_KBookmarkManagerAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 23), // "KBookmarkManagerAdaptor"
QT_MOC_LITERAL(1, 24, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 40, 28), // "org.kde.KIO.KBookmarkManager"
QT_MOC_LITERAL(3, 69, 22), // "bookmarkCompleteChange"
QT_MOC_LITERAL(4, 92, 0), // ""
QT_MOC_LITERAL(5, 93, 6), // "caller"
QT_MOC_LITERAL(6, 100, 16), // "bookmarksChanged"
QT_MOC_LITERAL(7, 117, 12), // "groupAddress"
QT_MOC_LITERAL(8, 130, 21), // "bookmarkConfigChanged"
QT_MOC_LITERAL(9, 152, 20) // "notifyCompleteChange"

    },
    "KBookmarkManagerAdaptor\0D-Bus Interface\0"
    "org.kde.KIO.KBookmarkManager\0"
    "bookmarkCompleteChange\0\0caller\0"
    "bookmarksChanged\0groupAddress\0"
    "bookmarkConfigChanged\0notifyCompleteChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KBookmarkManagerAdaptor[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   36,    4, 0x06 /* Public */,
       6,    1,   39,    4, 0x06 /* Public */,
       8,    0,   42,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   43,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void KBookmarkManagerAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KBookmarkManagerAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bookmarkCompleteChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->bookmarksChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->bookmarkConfigChanged(); break;
        case 3: _t->notifyCompleteChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KBookmarkManagerAdaptor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KBookmarkManagerAdaptor::bookmarkCompleteChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KBookmarkManagerAdaptor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KBookmarkManagerAdaptor::bookmarksChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KBookmarkManagerAdaptor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KBookmarkManagerAdaptor::bookmarkConfigChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KBookmarkManagerAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_KBookmarkManagerAdaptor.data,
    qt_meta_data_KBookmarkManagerAdaptor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KBookmarkManagerAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KBookmarkManagerAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KBookmarkManagerAdaptor.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int KBookmarkManagerAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
void KBookmarkManagerAdaptor::bookmarkCompleteChange(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KBookmarkManagerAdaptor::bookmarksChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KBookmarkManagerAdaptor::bookmarkConfigChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
