/****************************************************************************
** Meta object code from reading C++ file 'kaboutplugindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kxmlgui/src/kaboutplugindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kaboutplugindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KAboutPluginDialog_t {
    QByteArrayData data[5];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KAboutPluginDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KAboutPluginDialog_t qt_meta_stringdata_KAboutPluginDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "KAboutPluginDialog"
QT_MOC_LITERAL(1, 19, 7), // "Options"
QT_MOC_LITERAL(2, 27, 6), // "Option"
QT_MOC_LITERAL(3, 34, 9), // "NoOptions"
QT_MOC_LITERAL(4, 44, 15) // "HideTranslators"

    },
    "KAboutPluginDialog\0Options\0Option\0"
    "NoOptions\0HideTranslators"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KAboutPluginDialog[] = {

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
       1,    2, 0x1,    2,   19,

 // enum data: key, value
       3, uint(KAboutPluginDialog::NoOptions),
       4, uint(KAboutPluginDialog::HideTranslators),

       0        // eod
};

void KAboutPluginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KAboutPluginDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_KAboutPluginDialog.data,
    qt_meta_data_KAboutPluginDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KAboutPluginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KAboutPluginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KAboutPluginDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int KAboutPluginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
