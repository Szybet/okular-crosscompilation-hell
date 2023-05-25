/****************************************************************************
** Meta object code from reading C++ file 'pageviewannotator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/part/pageviewannotator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageviewannotator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PageViewAnnotator_t {
    QByteArrayData data[12];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageViewAnnotator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageViewAnnotator_t qt_meta_stringdata_PageViewAnnotator = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PageViewAnnotator"
QT_MOC_LITERAL(1, 18, 10), // "toolActive"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "active"
QT_MOC_LITERAL(4, 37, 15), // "requestOpenFile"
QT_MOC_LITERAL(5, 53, 8), // "filePath"
QT_MOC_LITERAL(6, 62, 10), // "pageNumber"
QT_MOC_LITERAL(7, 73, 17), // "setContinuousMode"
QT_MOC_LITERAL(8, 91, 7), // "enabled"
QT_MOC_LITERAL(9, 99, 25), // "setConstrainRatioAndAngle"
QT_MOC_LITERAL(10, 125, 21), // "addToQuickAnnotations"
QT_MOC_LITERAL(11, 147, 20) // "slotAdvancedSettings"

    },
    "PageViewAnnotator\0toolActive\0\0active\0"
    "requestOpenFile\0filePath\0pageNumber\0"
    "setContinuousMode\0enabled\0"
    "setConstrainRatioAndAngle\0"
    "addToQuickAnnotations\0slotAdvancedSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageViewAnnotator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    2,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   52,    2, 0x0a /* Public */,
       9,    1,   55,    2, 0x0a /* Public */,
      10,    0,   58,    2, 0x0a /* Public */,
      11,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PageViewAnnotator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PageViewAnnotator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toolActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->requestOpenFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setContinuousMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setConstrainRatioAndAngle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->addToQuickAnnotations(); break;
        case 5: _t->slotAdvancedSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PageViewAnnotator::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageViewAnnotator::toolActive)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PageViewAnnotator::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageViewAnnotator::requestOpenFile)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PageViewAnnotator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PageViewAnnotator.data,
    qt_meta_data_PageViewAnnotator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PageViewAnnotator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageViewAnnotator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageViewAnnotator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PageViewAnnotator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PageViewAnnotator::toolActive(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PageViewAnnotator::requestOpenFile(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
