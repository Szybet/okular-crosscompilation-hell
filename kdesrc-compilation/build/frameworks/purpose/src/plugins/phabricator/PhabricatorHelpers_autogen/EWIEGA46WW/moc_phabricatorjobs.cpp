/****************************************************************************
** Meta object code from reading C++ file 'phabricatorjobs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../frameworks/purpose/src/plugins/phabricator/phabricatorjobs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'phabricatorjobs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Phabricator__DifferentialRevision_t {
    QByteArrayData data[6];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phabricator__DifferentialRevision_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phabricator__DifferentialRevision_t qt_meta_stringdata_Phabricator__DifferentialRevision = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Phabricator::DifferentialRevi..."
QT_MOC_LITERAL(1, 34, 4), // "done"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "exitCode"
QT_MOC_LITERAL(4, 49, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(5, 70, 10) // "exitStatus"

    },
    "Phabricator::DifferentialRevision\0"
    "done\0\0exitCode\0QProcess::ExitStatus\0"
    "exitStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phabricator__DifferentialRevision[] = {

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
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

       0        // eod
};

void Phabricator::DifferentialRevision::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DifferentialRevision *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Phabricator::DifferentialRevision::staticMetaObject = { {
    QMetaObject::SuperData::link<KJob::staticMetaObject>(),
    qt_meta_stringdata_Phabricator__DifferentialRevision.data,
    qt_meta_data_Phabricator__DifferentialRevision,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phabricator::DifferentialRevision::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phabricator::DifferentialRevision::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phabricator__DifferentialRevision.stringdata0))
        return static_cast<void*>(this);
    return KJob::qt_metacast(_clname);
}

int Phabricator::DifferentialRevision::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_Phabricator__NewDiffRev_t {
    QByteArrayData data[6];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phabricator__NewDiffRev_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phabricator__NewDiffRev_t qt_meta_stringdata_Phabricator__NewDiffRev = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Phabricator::NewDiffRev"
QT_MOC_LITERAL(1, 24, 4), // "done"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "exitCode"
QT_MOC_LITERAL(4, 39, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(5, 60, 10) // "exitStatus"

    },
    "Phabricator::NewDiffRev\0done\0\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phabricator__NewDiffRev[] = {

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
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

       0        // eod
};

void Phabricator::NewDiffRev::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewDiffRev *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Phabricator::NewDiffRev::staticMetaObject = { {
    QMetaObject::SuperData::link<DifferentialRevision::staticMetaObject>(),
    qt_meta_stringdata_Phabricator__NewDiffRev.data,
    qt_meta_data_Phabricator__NewDiffRev,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phabricator::NewDiffRev::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phabricator::NewDiffRev::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phabricator__NewDiffRev.stringdata0))
        return static_cast<void*>(this);
    return DifferentialRevision::qt_metacast(_clname);
}

int Phabricator::NewDiffRev::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DifferentialRevision::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Phabricator__UpdateDiffRev_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phabricator__UpdateDiffRev_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phabricator__UpdateDiffRev_t qt_meta_stringdata_Phabricator__UpdateDiffRev = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Phabricator::UpdateDiffRev"
QT_MOC_LITERAL(1, 27, 4), // "done"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "exitCode"
QT_MOC_LITERAL(4, 42, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(5, 63, 10) // "exitStatus"

    },
    "Phabricator::UpdateDiffRev\0done\0\0"
    "exitCode\0QProcess::ExitStatus\0exitStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phabricator__UpdateDiffRev[] = {

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
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

       0        // eod
};

void Phabricator::UpdateDiffRev::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateDiffRev *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Phabricator::UpdateDiffRev::staticMetaObject = { {
    QMetaObject::SuperData::link<DifferentialRevision::staticMetaObject>(),
    qt_meta_stringdata_Phabricator__UpdateDiffRev.data,
    qt_meta_data_Phabricator__UpdateDiffRev,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phabricator::UpdateDiffRev::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phabricator::UpdateDiffRev::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phabricator__UpdateDiffRev.stringdata0))
        return static_cast<void*>(this);
    return DifferentialRevision::qt_metacast(_clname);
}

int Phabricator::UpdateDiffRev::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DifferentialRevision::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Phabricator__DiffRevList_t {
    QByteArrayData data[10];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phabricator__DiffRevList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phabricator__DiffRevList_t qt_meta_stringdata_Phabricator__DiffRevList = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Phabricator::DiffRevList"
QT_MOC_LITERAL(1, 25, 4), // "done"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "exitCode"
QT_MOC_LITERAL(4, 40, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(5, 61, 10), // "exitStatus"
QT_MOC_LITERAL(6, 72, 6), // "Status"
QT_MOC_LITERAL(7, 79, 8), // "Accepted"
QT_MOC_LITERAL(8, 88, 11), // "NeedsReview"
QT_MOC_LITERAL(9, 100, 13) // "NeedsRevision"

    },
    "Phabricator::DiffRevList\0done\0\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0Status\0"
    "Accepted\0NeedsReview\0NeedsRevision"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phabricator__DiffRevList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   24, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    3,   29,

 // enum data: key, value
       7, uint(Phabricator::DiffRevList::Accepted),
       8, uint(Phabricator::DiffRevList::NeedsReview),
       9, uint(Phabricator::DiffRevList::NeedsRevision),

       0        // eod
};

void Phabricator::DiffRevList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiffRevList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Phabricator::DiffRevList::staticMetaObject = { {
    QMetaObject::SuperData::link<DifferentialRevision::staticMetaObject>(),
    qt_meta_stringdata_Phabricator__DiffRevList.data,
    qt_meta_data_Phabricator__DiffRevList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phabricator::DiffRevList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phabricator::DiffRevList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phabricator__DiffRevList.stringdata0))
        return static_cast<void*>(this);
    return DifferentialRevision::qt_metacast(_clname);
}

int Phabricator::DiffRevList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DifferentialRevision::qt_metacall(_c, _id, _a);
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
