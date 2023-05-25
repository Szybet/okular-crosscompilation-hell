/****************************************************************************
** Meta object code from reading C++ file 'kfile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/widgets/kfile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KFile_t {
    QByteArrayData data[9];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFile_t qt_meta_stringdata_KFile = {
    {
QT_MOC_LITERAL(0, 0, 5), // "KFile"
QT_MOC_LITERAL(1, 6, 5), // "Modes"
QT_MOC_LITERAL(2, 12, 4), // "Mode"
QT_MOC_LITERAL(3, 17, 4), // "File"
QT_MOC_LITERAL(4, 22, 9), // "Directory"
QT_MOC_LITERAL(5, 32, 5), // "Files"
QT_MOC_LITERAL(6, 38, 12), // "ExistingOnly"
QT_MOC_LITERAL(7, 51, 9), // "LocalOnly"
QT_MOC_LITERAL(8, 61, 7) // "ModeMax"

    },
    "KFile\0Modes\0Mode\0File\0Directory\0Files\0"
    "ExistingOnly\0LocalOnly\0ModeMax"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFile[] = {

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
       1,    2, 0x1,    6,   19,

 // enum data: key, value
       3, uint(KFile::File),
       4, uint(KFile::Directory),
       5, uint(KFile::Files),
       6, uint(KFile::ExistingOnly),
       7, uint(KFile::LocalOnly),
       8, uint(KFile::ModeMax),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject KFile::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_KFile.data,
    qt_meta_data_KFile,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
