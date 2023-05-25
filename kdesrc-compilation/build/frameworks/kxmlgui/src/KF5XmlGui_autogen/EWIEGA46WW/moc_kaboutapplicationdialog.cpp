/****************************************************************************
** Meta object code from reading C++ file 'kaboutapplicationdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kxmlgui/src/kaboutapplicationdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kaboutapplicationdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KAboutApplicationDialog_t {
    QByteArrayData data[7];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KAboutApplicationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KAboutApplicationDialog_t qt_meta_stringdata_KAboutApplicationDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "KAboutApplicationDialog"
QT_MOC_LITERAL(1, 24, 7), // "Options"
QT_MOC_LITERAL(2, 32, 6), // "Option"
QT_MOC_LITERAL(3, 39, 9), // "NoOptions"
QT_MOC_LITERAL(4, 49, 15), // "HideTranslators"
QT_MOC_LITERAL(5, 65, 13), // "HideLibraries"
QT_MOC_LITERAL(6, 79, 14) // "HideKdeVersion"

    },
    "KAboutApplicationDialog\0Options\0Option\0"
    "NoOptions\0HideTranslators\0HideLibraries\0"
    "HideKdeVersion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KAboutApplicationDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    2, 0x1,    4,   19,

 // enum data: key, value
       3, uint(KAboutApplicationDialog::NoOptions),
       4, uint(KAboutApplicationDialog::HideTranslators),
       5, uint(KAboutApplicationDialog::HideLibraries),
       6, uint(KAboutApplicationDialog::HideKdeVersion),

       0        // eod
};

void KAboutApplicationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KAboutApplicationDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_KAboutApplicationDialog.data,
    qt_meta_data_KAboutApplicationDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KAboutApplicationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KAboutApplicationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KAboutApplicationDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int KAboutApplicationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
