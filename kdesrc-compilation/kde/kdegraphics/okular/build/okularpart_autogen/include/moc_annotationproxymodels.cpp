/****************************************************************************
** Meta object code from reading C++ file 'annotationproxymodels.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../part/annotationproxymodels.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'annotationproxymodels.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PageFilterProxyModel_t {
    QByteArrayData data[6];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageFilterProxyModel_t qt_meta_stringdata_PageFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PageFilterProxyModel"
QT_MOC_LITERAL(1, 21, 18), // "groupByCurrentPage"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "value"
QT_MOC_LITERAL(4, 47, 14), // "setCurrentPage"
QT_MOC_LITERAL(5, 62, 4) // "page"

    },
    "PageFilterProxyModel\0groupByCurrentPage\0"
    "\0value\0setCurrentPage\0page"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageFilterProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void PageFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PageFilterProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->groupByCurrentPage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setCurrentPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PageFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_PageFilterProxyModel.data,
    qt_meta_data_PageFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PageFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int PageFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PageGroupProxyModel_t {
    QByteArrayData data[11];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageGroupProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageGroupProxyModel_t qt_meta_stringdata_PageGroupProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PageGroupProxyModel"
QT_MOC_LITERAL(1, 20, 11), // "groupByPage"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "value"
QT_MOC_LITERAL(4, 39, 14), // "rebuildIndexes"
QT_MOC_LITERAL(5, 54, 17), // "sourceDataChanged"
QT_MOC_LITERAL(6, 72, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 84, 7), // "topLeft"
QT_MOC_LITERAL(8, 92, 11), // "bottomRight"
QT_MOC_LITERAL(9, 104, 12), // "QVector<int>"
QT_MOC_LITERAL(10, 117, 5) // "roles"

    },
    "PageGroupProxyModel\0groupByPage\0\0value\0"
    "rebuildIndexes\0sourceDataChanged\0"
    "QModelIndex\0topLeft\0bottomRight\0"
    "QVector<int>\0roles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageGroupProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    3,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 9,    7,    8,   10,

       0        // eod
};

void PageGroupProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PageGroupProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->groupByPage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->rebuildIndexes(); break;
        case 2: _t->sourceDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PageGroupProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractProxyModel::staticMetaObject>(),
    qt_meta_stringdata_PageGroupProxyModel.data,
    qt_meta_data_PageGroupProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PageGroupProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageGroupProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageGroupProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractProxyModel::qt_metacast(_clname);
}

int PageGroupProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_AuthorGroupProxyModel_t {
    QByteArrayData data[11];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuthorGroupProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuthorGroupProxyModel_t qt_meta_stringdata_AuthorGroupProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "AuthorGroupProxyModel"
QT_MOC_LITERAL(1, 22, 13), // "groupByAuthor"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 14), // "rebuildIndexes"
QT_MOC_LITERAL(5, 58, 17), // "sourceDataChanged"
QT_MOC_LITERAL(6, 76, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 88, 7), // "topLeft"
QT_MOC_LITERAL(8, 96, 11), // "bottomRight"
QT_MOC_LITERAL(9, 108, 12), // "QVector<int>"
QT_MOC_LITERAL(10, 121, 5) // "roles"

    },
    "AuthorGroupProxyModel\0groupByAuthor\0"
    "\0value\0rebuildIndexes\0sourceDataChanged\0"
    "QModelIndex\0topLeft\0bottomRight\0"
    "QVector<int>\0roles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuthorGroupProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    3,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 9,    7,    8,   10,

       0        // eod
};

void AuthorGroupProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AuthorGroupProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->groupByAuthor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->rebuildIndexes(); break;
        case 2: _t->sourceDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AuthorGroupProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractProxyModel::staticMetaObject>(),
    qt_meta_stringdata_AuthorGroupProxyModel.data,
    qt_meta_data_AuthorGroupProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AuthorGroupProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuthorGroupProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AuthorGroupProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractProxyModel::qt_metacast(_clname);
}

int AuthorGroupProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
