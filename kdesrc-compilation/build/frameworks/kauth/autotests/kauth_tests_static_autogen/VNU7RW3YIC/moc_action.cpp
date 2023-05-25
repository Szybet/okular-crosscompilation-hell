/****************************************************************************
** Meta object code from reading C++ file 'action.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kauth/src/action.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'action.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KAuth__Action_t {
    QByteArrayData data[14];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KAuth__Action_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KAuth__Action_t qt_meta_stringdata_KAuth__Action = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KAuth::Action"
QT_MOC_LITERAL(1, 14, 10), // "AuthStatus"
QT_MOC_LITERAL(2, 25, 12), // "DeniedStatus"
QT_MOC_LITERAL(3, 38, 11), // "ErrorStatus"
QT_MOC_LITERAL(4, 50, 13), // "InvalidStatus"
QT_MOC_LITERAL(5, 64, 16), // "AuthorizedStatus"
QT_MOC_LITERAL(6, 81, 18), // "AuthRequiredStatus"
QT_MOC_LITERAL(7, 100, 19), // "UserCancelledStatus"
QT_MOC_LITERAL(8, 120, 13), // "ExecutionMode"
QT_MOC_LITERAL(9, 134, 11), // "ExecuteMode"
QT_MOC_LITERAL(10, 146, 17), // "AuthorizeOnlyMode"
QT_MOC_LITERAL(11, 164, 10), // "AuthDetail"
QT_MOC_LITERAL(12, 175, 11), // "DetailOther"
QT_MOC_LITERAL(13, 187, 13) // "DetailMessage"

    },
    "KAuth::Action\0AuthStatus\0DeniedStatus\0"
    "ErrorStatus\0InvalidStatus\0AuthorizedStatus\0"
    "AuthRequiredStatus\0UserCancelledStatus\0"
    "ExecutionMode\0ExecuteMode\0AuthorizeOnlyMode\0"
    "AuthDetail\0DetailOther\0DetailMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KAuth__Action[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    6,   29,
       8,    8, 0x0,    2,   41,
      11,   11, 0x2,    2,   45,

 // enum data: key, value
       2, uint(KAuth::Action::DeniedStatus),
       3, uint(KAuth::Action::ErrorStatus),
       4, uint(KAuth::Action::InvalidStatus),
       5, uint(KAuth::Action::AuthorizedStatus),
       6, uint(KAuth::Action::AuthRequiredStatus),
       7, uint(KAuth::Action::UserCancelledStatus),
       9, uint(KAuth::Action::ExecuteMode),
      10, uint(KAuth::Action::AuthorizeOnlyMode),
      12, uint(KAuth::Action::AuthDetail::DetailOther),
      13, uint(KAuth::Action::AuthDetail::DetailMessage),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject KAuth::Action::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_KAuth__Action.data,
    qt_meta_data_KAuth__Action,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
