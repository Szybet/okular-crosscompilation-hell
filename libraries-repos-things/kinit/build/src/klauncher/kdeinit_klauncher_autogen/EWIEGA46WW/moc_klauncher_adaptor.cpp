/****************************************************************************
** Meta object code from reading C++ file 'klauncher_adaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/klauncher/klauncher_adaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'klauncher_adaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KLauncherAdaptor_t {
    QByteArrayData data[32];
    char stringdata0[369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KLauncherAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KLauncherAdaptor_t qt_meta_stringdata_KLauncherAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KLauncherAdaptor"
QT_MOC_LITERAL(1, 17, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 33, 17), // "org.kde.KLauncher"
QT_MOC_LITERAL(3, 51, 10), // "exec_blind"
QT_MOC_LITERAL(4, 62, 0), // ""
QT_MOC_LITERAL(5, 63, 4), // "name"
QT_MOC_LITERAL(6, 68, 8), // "arg_list"
QT_MOC_LITERAL(7, 77, 4), // "envs"
QT_MOC_LITERAL(8, 82, 10), // "startup_id"
QT_MOC_LITERAL(9, 93, 12), // "kdeinit_exec"
QT_MOC_LITERAL(10, 106, 3), // "app"
QT_MOC_LITERAL(11, 110, 4), // "args"
QT_MOC_LITERAL(12, 115, 3), // "env"
QT_MOC_LITERAL(13, 119, 12), // "QDBusMessage"
QT_MOC_LITERAL(14, 132, 3), // "msg"
QT_MOC_LITERAL(15, 136, 8), // "QString&"
QT_MOC_LITERAL(16, 145, 15), // "dbusServiceName"
QT_MOC_LITERAL(17, 161, 5), // "error"
QT_MOC_LITERAL(18, 167, 4), // "int&"
QT_MOC_LITERAL(19, 172, 3), // "pid"
QT_MOC_LITERAL(20, 176, 17), // "kdeinit_exec_wait"
QT_MOC_LITERAL(21, 194, 25), // "kdeinit_exec_with_workdir"
QT_MOC_LITERAL(22, 220, 7), // "workdir"
QT_MOC_LITERAL(23, 228, 20), // "reparseConfiguration"
QT_MOC_LITERAL(24, 249, 12), // "setLaunchEnv"
QT_MOC_LITERAL(25, 262, 5), // "value"
QT_MOC_LITERAL(26, 268, 29), // "start_service_by_desktop_name"
QT_MOC_LITERAL(27, 298, 11), // "serviceName"
QT_MOC_LITERAL(28, 310, 4), // "urls"
QT_MOC_LITERAL(29, 315, 5), // "blind"
QT_MOC_LITERAL(30, 321, 29), // "start_service_by_desktop_path"
QT_MOC_LITERAL(31, 351, 17) // "terminate_kdeinit"

    },
    "KLauncherAdaptor\0D-Bus Interface\0"
    "org.kde.KLauncher\0exec_blind\0\0name\0"
    "arg_list\0envs\0startup_id\0kdeinit_exec\0"
    "app\0args\0env\0QDBusMessage\0msg\0QString&\0"
    "dbusServiceName\0error\0int&\0pid\0"
    "kdeinit_exec_wait\0kdeinit_exec_with_workdir\0"
    "workdir\0reparseConfiguration\0setLaunchEnv\0"
    "value\0start_service_by_desktop_name\0"
    "serviceName\0urls\0blind\0"
    "start_service_by_desktop_path\0"
    "terminate_kdeinit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KLauncherAdaptor[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    2,   66,    4, 0x0a /* Public */,
       3,    4,   71,    4, 0x0a /* Public */,
       9,    8,   80,    4, 0x0a /* Public */,
      20,    8,   97,    4, 0x0a /* Public */,
      21,    9,  114,    4, 0x0a /* Public */,
      23,    0,  133,    4, 0x0a /* Public */,
      24,    2,  134,    4, 0x0a /* Public */,
      26,    9,  139,    4, 0x0a /* Public */,
      30,    9,  158,    4, 0x0a /* Public */,
      31,    0,  177,    4, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QString,    5,    6,    7,    8,
    QMetaType::Int, QMetaType::QString, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QString, 0x80000000 | 13, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 18,   10,   11,   12,    8,   14,   16,   17,   19,
    QMetaType::Int, QMetaType::QString, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QString, 0x80000000 | 13, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 18,   10,   11,   12,    8,   14,   16,   17,   19,
    QMetaType::Int, QMetaType::QString, QMetaType::QStringList, QMetaType::QString, QMetaType::QStringList, QMetaType::QString, 0x80000000 | 13, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 18,   10,   11,   22,   12,    8,   14,   16,   17,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,   25,
    QMetaType::Int, QMetaType::QString, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QString, QMetaType::Bool, 0x80000000 | 13, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 18,   27,   28,    7,    8,   29,   14,   16,   17,   19,
    QMetaType::Int, QMetaType::QString, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QString, QMetaType::Bool, 0x80000000 | 13, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 18,   27,   28,    7,    8,   29,   14,   16,   17,   19,
    QMetaType::Void,

       0        // eod
};

void KLauncherAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KLauncherAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->exec_blind((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 1: _t->exec_blind((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 2: { int _r = _t->kdeinit_exec((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QDBusMessage(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->kdeinit_exec_wait((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QDBusMessage(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->kdeinit_exec_with_workdir((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QStringList(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QDBusMessage(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->reparseConfiguration(); break;
        case 6: _t->setLaunchEnv((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: { int _r = _t->start_service_by_desktop_name((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< const QDBusMessage(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->start_service_by_desktop_path((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< const QDBusMessage(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->terminate_kdeinit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KLauncherAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_KLauncherAdaptor.data,
    qt_meta_data_KLauncherAdaptor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KLauncherAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KLauncherAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KLauncherAdaptor.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int KLauncherAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
