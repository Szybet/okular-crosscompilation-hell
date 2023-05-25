/****************************************************************************
** Meta object code from reading C++ file 'ktoolinvocation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kservice/src/kdeinit/ktoolinvocation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ktoolinvocation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KToolInvocation_t {
    QByteArrayData data[27];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KToolInvocation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KToolInvocation_t qt_meta_stringdata_KToolInvocation = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KToolInvocation"
QT_MOC_LITERAL(1, 16, 17), // "kapplication_hook"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "QStringList&"
QT_MOC_LITERAL(4, 48, 3), // "env"
QT_MOC_LITERAL(5, 52, 11), // "QByteArray&"
QT_MOC_LITERAL(6, 64, 10), // "startup_id"
QT_MOC_LITERAL(7, 75, 12), // "invokeMailer"
QT_MOC_LITERAL(8, 88, 7), // "address"
QT_MOC_LITERAL(9, 96, 7), // "subject"
QT_MOC_LITERAL(10, 104, 9), // "mailtoURL"
QT_MOC_LITERAL(11, 114, 16), // "allowAttachments"
QT_MOC_LITERAL(12, 131, 2), // "to"
QT_MOC_LITERAL(13, 134, 2), // "cc"
QT_MOC_LITERAL(14, 137, 3), // "bcc"
QT_MOC_LITERAL(15, 141, 4), // "body"
QT_MOC_LITERAL(16, 146, 11), // "messageFile"
QT_MOC_LITERAL(17, 158, 10), // "attachURLs"
QT_MOC_LITERAL(18, 169, 13), // "invokeBrowser"
QT_MOC_LITERAL(19, 183, 3), // "url"
QT_MOC_LITERAL(20, 187, 14), // "invokeTerminal"
QT_MOC_LITERAL(21, 202, 7), // "command"
QT_MOC_LITERAL(22, 210, 4), // "envs"
QT_MOC_LITERAL(23, 215, 7), // "workdir"
QT_MOC_LITERAL(24, 223, 19), // "terminalApplication"
QT_MOC_LITERAL(25, 243, 11), // "KServicePtr"
QT_MOC_LITERAL(26, 255, 10) // "workingDir"

    },
    "KToolInvocation\0kapplication_hook\0\0"
    "QStringList&\0env\0QByteArray&\0startup_id\0"
    "invokeMailer\0address\0subject\0mailtoURL\0"
    "allowAttachments\0to\0cc\0bcc\0body\0"
    "messageFile\0attachURLs\0invokeBrowser\0"
    "url\0invokeTerminal\0command\0envs\0workdir\0"
    "terminalApplication\0KServicePtr\0"
    "workingDir"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KToolInvocation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    3,  124,    2, 0x0a /* Public */,
       7,    2,  131,    2, 0x2a /* Public | MethodCloned */,
       7,    3,  136,    2, 0x0a /* Public */,
       7,    2,  143,    2, 0x2a /* Public | MethodCloned */,
       7,    1,  148,    2, 0x2a /* Public | MethodCloned */,
       7,    8,  151,    2, 0x0a /* Public */,
       7,    7,  168,    2, 0x2a /* Public | MethodCloned */,
       7,    6,  183,    2, 0x2a /* Public | MethodCloned */,
       7,    5,  196,    2, 0x2a /* Public | MethodCloned */,
      18,    2,  207,    2, 0x0a /* Public */,
      18,    1,  212,    2, 0x2a /* Public | MethodCloned */,
      20,    4,  215,    2, 0x0a /* Public */,
      20,    3,  224,    2, 0x2a /* Public | MethodCloned */,
      20,    2,  231,    2, 0x2a /* Public | MethodCloned */,
      20,    3,  236,    2, 0x0a /* Public */,
      20,    2,  243,    2, 0x2a /* Public | MethodCloned */,
      20,    1,  248,    2, 0x2a /* Public | MethodCloned */,
      24,    2,  251,    2, 0x0a /* Public */,
      24,    1,  256,    2, 0x2a /* Public | MethodCloned */,
      24,    0,  259,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray,    8,    9,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QByteArray, QMetaType::Bool,   10,    6,   11,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QByteArray,   10,    6,
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QStringList, QMetaType::QByteArray,   12,   13,   14,    9,   15,   16,   17,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QStringList,   12,   13,   14,    9,   15,   16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   12,   13,   14,    9,   15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   12,   13,   14,    9,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   19,    6,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::QString, QMetaType::QByteArray,   21,   22,   23,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::QString,   21,   22,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   21,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray,   21,   23,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   21,   23,
    QMetaType::Void, QMetaType::QString,   21,
    0x80000000 | 25, QMetaType::QString, QMetaType::QString,   21,   26,
    0x80000000 | 25, QMetaType::QString,   21,
    0x80000000 | 25,

       0        // eod
};

void KToolInvocation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KToolInvocation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->kapplication_hook((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 1: _t->invokeMailer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 2: _t->invokeMailer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->invokeMailer((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->invokeMailer((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 5: _t->invokeMailer((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->invokeMailer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QStringList(*)>(_a[7])),(*reinterpret_cast< const QByteArray(*)>(_a[8]))); break;
        case 7: _t->invokeMailer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QStringList(*)>(_a[7]))); break;
        case 8: _t->invokeMailer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 9: _t->invokeMailer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 10: _t->invokeBrowser((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 11: _t->invokeBrowser((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->invokeTerminal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QByteArray(*)>(_a[4]))); break;
        case 13: _t->invokeTerminal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 14: _t->invokeTerminal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 15: _t->invokeTerminal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 16: _t->invokeTerminal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->invokeTerminal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: { KServicePtr _r = _t->terminalApplication((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< KServicePtr*>(_a[0]) = std::move(_r); }  break;
        case 19: { KServicePtr _r = _t->terminalApplication((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< KServicePtr*>(_a[0]) = std::move(_r); }  break;
        case 20: { KServicePtr _r = _t->terminalApplication();
            if (_a[0]) *reinterpret_cast< KServicePtr*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KToolInvocation::*)(QStringList & , QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KToolInvocation::kapplication_hook)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KToolInvocation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KToolInvocation.data,
    qt_meta_data_KToolInvocation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KToolInvocation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KToolInvocation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KToolInvocation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KToolInvocation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void KToolInvocation::kapplication_hook(QStringList & _t1, QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
