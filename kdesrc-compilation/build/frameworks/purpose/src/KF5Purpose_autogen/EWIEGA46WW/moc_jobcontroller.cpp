/****************************************************************************
** Meta object code from reading C++ file 'jobcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/purpose/src/jobcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jobcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Purpose__JobController_t {
    QByteArrayData data[25];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Purpose__JobController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Purpose__JobController_t qt_meta_stringdata_Purpose__JobController = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Purpose::JobController"
QT_MOC_LITERAL(1, 23, 12), // "modelChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "indexChanged"
QT_MOC_LITERAL(4, 50, 12), // "stateChanged"
QT_MOC_LITERAL(5, 63, 13), // "configChanged"
QT_MOC_LITERAL(6, 77, 10), // "jobChanged"
QT_MOC_LITERAL(7, 88, 9), // "configure"
QT_MOC_LITERAL(8, 98, 8), // "startJob"
QT_MOC_LITERAL(9, 107, 6), // "cancel"
QT_MOC_LITERAL(10, 114, 5), // "model"
QT_MOC_LITERAL(11, 120, 18), // "AlternativesModel*"
QT_MOC_LITERAL(12, 139, 5), // "index"
QT_MOC_LITERAL(13, 145, 5), // "state"
QT_MOC_LITERAL(14, 151, 5), // "State"
QT_MOC_LITERAL(15, 157, 13), // "configuration"
QT_MOC_LITERAL(16, 171, 23), // "Purpose::Configuration*"
QT_MOC_LITERAL(17, 195, 3), // "job"
QT_MOC_LITERAL(18, 199, 13), // "Purpose::Job*"
QT_MOC_LITERAL(19, 213, 8), // "Inactive"
QT_MOC_LITERAL(20, 222, 11), // "Configuring"
QT_MOC_LITERAL(21, 234, 7), // "Running"
QT_MOC_LITERAL(22, 242, 8), // "Finished"
QT_MOC_LITERAL(23, 251, 9), // "Cancelled"
QT_MOC_LITERAL(24, 261, 5) // "Error"

    },
    "Purpose::JobController\0modelChanged\0"
    "\0indexChanged\0stateChanged\0configChanged\0"
    "jobChanged\0configure\0startJob\0cancel\0"
    "model\0AlternativesModel*\0index\0state\0"
    "State\0configuration\0Purpose::Configuration*\0"
    "job\0Purpose::Job*\0Inactive\0Configuring\0"
    "Running\0Finished\0Cancelled\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Purpose__JobController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       5,   62, // properties
       1,   82, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   59,    2, 0x02 /* Public */,
       8,    0,   60,    2, 0x02 /* Public */,
       9,    0,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x0049510b,
      12, QMetaType::Int, 0x00495103,
      13, 0x80000000 | 14, 0x00495009,
      15, 0x80000000 | 16, 0x00495009,
      17, 0x80000000 | 18, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

 // enums: name, alias, flags, count, data
      14,   14, 0x0,    6,   87,

 // enum data: key, value
      19, uint(Purpose::JobController::Inactive),
      20, uint(Purpose::JobController::Configuring),
      21, uint(Purpose::JobController::Running),
      22, uint(Purpose::JobController::Finished),
      23, uint(Purpose::JobController::Cancelled),
      24, uint(Purpose::JobController::Error),

       0        // eod
};

void Purpose::JobController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JobController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->indexChanged(); break;
        case 2: _t->stateChanged(); break;
        case 3: _t->configChanged(); break;
        case 4: _t->jobChanged(); break;
        case 5: _t->configure(); break;
        case 6: _t->startJob(); break;
        case 7: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JobController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobController::modelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JobController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobController::indexChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JobController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobController::stateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JobController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobController::configChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (JobController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobController::jobChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AlternativesModel* >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Purpose::Job* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<JobController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AlternativesModel**>(_v) = _t->model(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->index(); break;
        case 2: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 3: *reinterpret_cast< Purpose::Configuration**>(_v) = _t->config(); break;
        case 4: *reinterpret_cast< Purpose::Job**>(_v) = _t->job(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<JobController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModel(*reinterpret_cast< AlternativesModel**>(_v)); break;
        case 1: _t->setIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Purpose::JobController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Purpose__JobController.data,
    qt_meta_data_Purpose__JobController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Purpose::JobController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Purpose::JobController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Purpose__JobController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Purpose::JobController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Purpose::JobController::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Purpose::JobController::indexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Purpose::JobController::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Purpose::JobController::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Purpose::JobController::jobChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
