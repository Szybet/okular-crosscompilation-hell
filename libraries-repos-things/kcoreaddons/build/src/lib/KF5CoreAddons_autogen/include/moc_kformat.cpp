/****************************************************************************
** Meta object code from reading C++ file 'kformat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/lib/util/kformat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kformat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KFormat_t {
    QByteArrayData data[7];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFormat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFormat_t qt_meta_stringdata_KFormat = {
    {
QT_MOC_LITERAL(0, 0, 7), // "KFormat"
QT_MOC_LITERAL(1, 8, 20), // "DurationFormatOption"
QT_MOC_LITERAL(2, 29, 15), // "DefaultDuration"
QT_MOC_LITERAL(3, 45, 15), // "InitialDuration"
QT_MOC_LITERAL(4, 61, 16), // "ShowMilliseconds"
QT_MOC_LITERAL(5, 78, 11), // "HideSeconds"
QT_MOC_LITERAL(6, 90, 9) // "FoldHours"

    },
    "KFormat\0DurationFormatOption\0"
    "DefaultDuration\0InitialDuration\0"
    "ShowMilliseconds\0HideSeconds\0FoldHours"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFormat[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x1,    5,   19,

 // enum data: key, value
       2, uint(KFormat::DefaultDuration),
       3, uint(KFormat::InitialDuration),
       4, uint(KFormat::ShowMilliseconds),
       5, uint(KFormat::HideSeconds),
       6, uint(KFormat::FoldHours),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject KFormat::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_KFormat.data,
    qt_meta_data_KFormat,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
