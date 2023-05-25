/****************************************************************************
** Meta object code from reading C++ file 'generator_pdf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../generators/poppler/generator_pdf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generator_pdf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PDFGenerator_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PDFGenerator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PDFGenerator_t qt_meta_stringdata_PDFGenerator = {
    {
QT_MOC_LITERAL(0, 0, 12) // "PDFGenerator"

    },
    "PDFGenerator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PDFGenerator[] = {

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

void PDFGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PDFGenerator::staticMetaObject = { {
    QMetaObject::SuperData::link<Okular::Generator::staticMetaObject>(),
    qt_meta_stringdata_PDFGenerator.data,
    qt_meta_data_PDFGenerator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PDFGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PDFGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PDFGenerator.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Okular::ConfigInterface"))
        return static_cast< Okular::ConfigInterface*>(this);
    if (!strcmp(_clname, "Okular::PrintInterface"))
        return static_cast< Okular::PrintInterface*>(this);
    if (!strcmp(_clname, "Okular::SaveInterface"))
        return static_cast< Okular::SaveInterface*>(this);
    if (!strcmp(_clname, "org.kde.okular.Generator"))
        return static_cast< Okular::Generator*>(this);
    if (!strcmp(_clname, "org.kde.okular.ConfigInterface/0.1"))
        return static_cast< Okular::ConfigInterface*>(this);
    if (!strcmp(_clname, "org.kde.okular.PrintInterface/0.1"))
        return static_cast< Okular::PrintInterface*>(this);
    if (!strcmp(_clname, "org.kde.okular.SaveInterface/0.3"))
        return static_cast< Okular::SaveInterface*>(this);
    return Okular::Generator::qt_metacast(_clname);
}

int PDFGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Okular::Generator::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
