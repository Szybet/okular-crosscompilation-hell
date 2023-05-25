/****************************************************************************
** Meta object code from reading C++ file 'kpagewidgettest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/tests/kpagewidgettest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kpagewidgettest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KPageWidgetTest_t {
    QByteArrayData data[15];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KPageWidgetTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KPageWidgetTest_t qt_meta_stringdata_KPageWidgetTest = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KPageWidgetTest"
QT_MOC_LITERAL(1, 16, 11), // "setAutoFace"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "setPlainFace"
QT_MOC_LITERAL(4, 42, 11), // "setListFace"
QT_MOC_LITERAL(5, 54, 11), // "setTreeFace"
QT_MOC_LITERAL(6, 66, 13), // "setTabbedFace"
QT_MOC_LITERAL(7, 80, 15), // "setFlatListFace"
QT_MOC_LITERAL(8, 96, 7), // "addPage"
QT_MOC_LITERAL(9, 104, 10), // "addSubPage"
QT_MOC_LITERAL(10, 115, 10), // "insertPage"
QT_MOC_LITERAL(11, 126, 10), // "deletePage"
QT_MOC_LITERAL(12, 137, 18), // "currentPageChanged"
QT_MOC_LITERAL(13, 156, 16), // "KPageWidgetItem*"
QT_MOC_LITERAL(14, 173, 11) // "pageToggled"

    },
    "KPageWidgetTest\0setAutoFace\0\0setPlainFace\0"
    "setListFace\0setTreeFace\0setTabbedFace\0"
    "setFlatListFace\0addPage\0addSubPage\0"
    "insertPage\0deletePage\0currentPageChanged\0"
    "KPageWidgetItem*\0pageToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KPageWidgetTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    2,   84,    2, 0x08 /* Private */,
      14,    2,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,    2,    2,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Bool,    2,    2,

       0        // eod
};

void KPageWidgetTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KPageWidgetTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setAutoFace(); break;
        case 1: _t->setPlainFace(); break;
        case 2: _t->setListFace(); break;
        case 3: _t->setTreeFace(); break;
        case 4: _t->setTabbedFace(); break;
        case 5: _t->setFlatListFace(); break;
        case 6: _t->addPage(); break;
        case 7: _t->addSubPage(); break;
        case 8: _t->insertPage(); break;
        case 9: _t->deletePage(); break;
        case 10: _t->currentPageChanged((*reinterpret_cast< KPageWidgetItem*(*)>(_a[1])),(*reinterpret_cast< KPageWidgetItem*(*)>(_a[2]))); break;
        case 11: _t->pageToggled((*reinterpret_cast< KPageWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KPageWidgetItem* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KPageWidgetItem* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KPageWidgetTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KPageWidgetTest.data,
    qt_meta_data_KPageWidgetTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KPageWidgetTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KPageWidgetTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KPageWidgetTest.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KPageWidgetTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
