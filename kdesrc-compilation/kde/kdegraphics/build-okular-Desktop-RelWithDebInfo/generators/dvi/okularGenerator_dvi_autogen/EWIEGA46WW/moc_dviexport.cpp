/****************************************************************************
** Meta object code from reading C++ file 'dviexport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../okular/generators/dvi/dviexport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dviexport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DVIExport_t {
    QByteArrayData data[9];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DVIExport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DVIExport_t qt_meta_stringdata_DVIExport = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DVIExport"
QT_MOC_LITERAL(1, 10, 5), // "error"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 7), // "message"
QT_MOC_LITERAL(4, 25, 8), // "duration"
QT_MOC_LITERAL(5, 34, 13), // "abort_process"
QT_MOC_LITERAL(6, 48, 8), // "finished"
QT_MOC_LITERAL(7, 57, 9), // "exit_code"
QT_MOC_LITERAL(8, 67, 15) // "output_receiver"

    },
    "DVIExport\0error\0\0message\0duration\0"
    "abort_process\0finished\0exit_code\0"
    "output_receiver"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DVIExport[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   39,    2, 0x08 /* Private */,
       6,    1,   40,    2, 0x08 /* Private */,
       8,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void DVIExport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DVIExport *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->abort_process(); break;
        case 2: _t->finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->output_receiver(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DVIExport::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DVIExport::error)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DVIExport::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DVIExport.data,
    qt_meta_data_DVIExport,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DVIExport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DVIExport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DVIExport.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QSharedData"))
        return static_cast< QSharedData*>(this);
    return QObject::qt_metacast(_clname);
}

int DVIExport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DVIExport::error(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_DVIExportToPDF_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DVIExportToPDF_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DVIExportToPDF_t qt_meta_stringdata_DVIExportToPDF = {
    {
QT_MOC_LITERAL(0, 0, 14) // "DVIExportToPDF"

    },
    "DVIExportToPDF"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DVIExportToPDF[] = {

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

void DVIExportToPDF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject DVIExportToPDF::staticMetaObject = { {
    QMetaObject::SuperData::link<DVIExport::staticMetaObject>(),
    qt_meta_stringdata_DVIExportToPDF.data,
    qt_meta_data_DVIExportToPDF,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DVIExportToPDF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DVIExportToPDF::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DVIExportToPDF.stringdata0))
        return static_cast<void*>(this);
    return DVIExport::qt_metacast(_clname);
}

int DVIExportToPDF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DVIExport::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DVIExportToPS_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DVIExportToPS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DVIExportToPS_t qt_meta_stringdata_DVIExportToPS = {
    {
QT_MOC_LITERAL(0, 0, 13) // "DVIExportToPS"

    },
    "DVIExportToPS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DVIExportToPS[] = {

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

void DVIExportToPS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject DVIExportToPS::staticMetaObject = { {
    QMetaObject::SuperData::link<DVIExport::staticMetaObject>(),
    qt_meta_stringdata_DVIExportToPS.data,
    qt_meta_data_DVIExportToPS,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DVIExportToPS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DVIExportToPS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DVIExportToPS.stringdata0))
        return static_cast<void*>(this);
    return DVIExport::qt_metacast(_clname);
}

int DVIExportToPS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DVIExport::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
