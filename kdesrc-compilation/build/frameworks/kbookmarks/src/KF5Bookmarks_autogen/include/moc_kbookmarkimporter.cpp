/****************************************************************************
** Meta object code from reading C++ file 'kbookmarkimporter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kbookmarks/src/kbookmarkimporter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kbookmarkimporter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KBookmarkImporterBase_t {
    QByteArrayData data[10];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KBookmarkImporterBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KBookmarkImporterBase_t qt_meta_stringdata_KBookmarkImporterBase = {
    {
QT_MOC_LITERAL(0, 0, 21), // "KBookmarkImporterBase"
QT_MOC_LITERAL(1, 22, 11), // "newBookmark"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "text"
QT_MOC_LITERAL(4, 40, 3), // "url"
QT_MOC_LITERAL(5, 44, 14), // "additionalInfo"
QT_MOC_LITERAL(6, 59, 9), // "newFolder"
QT_MOC_LITERAL(7, 69, 4), // "open"
QT_MOC_LITERAL(8, 74, 12), // "newSeparator"
QT_MOC_LITERAL(9, 87, 9) // "endFolder"

    },
    "KBookmarkImporterBase\0newBookmark\0\0"
    "text\0url\0additionalInfo\0newFolder\0"
    "open\0newSeparator\0endFolder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KBookmarkImporterBase[] = {

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
       1,    3,   34,    2, 0x06 /* Public */,
       6,    3,   41,    2, 0x06 /* Public */,
       8,    0,   48,    2, 0x06 /* Public */,
       9,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,    3,    7,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KBookmarkImporterBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KBookmarkImporterBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newBookmark((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->newFolder((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->newSeparator(); break;
        case 3: _t->endFolder(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KBookmarkImporterBase::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KBookmarkImporterBase::newBookmark)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KBookmarkImporterBase::*)(const QString & , bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KBookmarkImporterBase::newFolder)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KBookmarkImporterBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KBookmarkImporterBase::newSeparator)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KBookmarkImporterBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KBookmarkImporterBase::endFolder)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KBookmarkImporterBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KBookmarkImporterBase.data,
    qt_meta_data_KBookmarkImporterBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KBookmarkImporterBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KBookmarkImporterBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KBookmarkImporterBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KBookmarkImporterBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KBookmarkImporterBase::newBookmark(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KBookmarkImporterBase::newFolder(const QString & _t1, bool _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KBookmarkImporterBase::newSeparator()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KBookmarkImporterBase::endFolder()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_KXBELBookmarkImporterImpl_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KXBELBookmarkImporterImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KXBELBookmarkImporterImpl_t qt_meta_stringdata_KXBELBookmarkImporterImpl = {
    {
QT_MOC_LITERAL(0, 0, 25) // "KXBELBookmarkImporterImpl"

    },
    "KXBELBookmarkImporterImpl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KXBELBookmarkImporterImpl[] = {

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

void KXBELBookmarkImporterImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KXBELBookmarkImporterImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<KBookmarkImporterBase::staticMetaObject>(),
    qt_meta_stringdata_KXBELBookmarkImporterImpl.data,
    qt_meta_data_KXBELBookmarkImporterImpl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KXBELBookmarkImporterImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KXBELBookmarkImporterImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KXBELBookmarkImporterImpl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KBookmarkGroupTraverser"))
        return static_cast< KBookmarkGroupTraverser*>(this);
    return KBookmarkImporterBase::qt_metacast(_clname);
}

int KXBELBookmarkImporterImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KBookmarkImporterBase::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
