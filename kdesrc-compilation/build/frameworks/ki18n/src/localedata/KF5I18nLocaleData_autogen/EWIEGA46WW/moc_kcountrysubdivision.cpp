/****************************************************************************
** Meta object code from reading C++ file 'kcountrysubdivision.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/ki18n/src/localedata/kcountrysubdivision.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcountrysubdivision.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCountrySubdivision_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCountrySubdivision_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCountrySubdivision_t qt_meta_stringdata_KCountrySubdivision = {
    {
QT_MOC_LITERAL(0, 0, 19), // "KCountrySubdivision"
QT_MOC_LITERAL(1, 20, 4), // "code"
QT_MOC_LITERAL(2, 25, 4), // "name"
QT_MOC_LITERAL(3, 30, 7), // "country"
QT_MOC_LITERAL(4, 38, 8), // "KCountry"
QT_MOC_LITERAL(5, 47, 6), // "parent"
QT_MOC_LITERAL(6, 54, 12), // "subdivisions"
QT_MOC_LITERAL(7, 67, 26), // "QList<KCountrySubdivision>"
QT_MOC_LITERAL(8, 94, 11) // "timeZoneIds"

    },
    "KCountrySubdivision\0code\0name\0country\0"
    "KCountry\0parent\0subdivisions\0"
    "QList<KCountrySubdivision>\0timeZoneIds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCountrySubdivision[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095001,
       2, QMetaType::QString, 0x00095001,
       3, 0x80000000 | 4, 0x00095009,
       5, 0x80000000 | 0, 0x00095009,
       6, 0x80000000 | 7, 0x00095009,
       8, QMetaType::QStringList, 0x00095001,

       0        // eod
};

void KCountrySubdivision::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KCountrySubdivision >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<KCountrySubdivision> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<KCountrySubdivision *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->code(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< KCountry*>(_v) = _t->country(); break;
        case 3: *reinterpret_cast< KCountrySubdivision*>(_v) = _t->parent(); break;
        case 4: *reinterpret_cast< QList<KCountrySubdivision>*>(_v) = _t->subdivisions(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->timeZoneIdsStringList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject KCountrySubdivision::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_KCountrySubdivision.data,
    qt_meta_data_KCountrySubdivision,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
