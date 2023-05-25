/****************************************************************************
** Meta object code from reading C++ file 'dviRenderer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../okular/generators/dvi/dviRenderer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dviRenderer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dviRenderer_t {
    QByteArrayData data[29];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dviRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dviRenderer_t qt_meta_stringdata_dviRenderer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "dviRenderer"
QT_MOC_LITERAL(1, 12, 5), // "error"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 7), // "message"
QT_MOC_LITERAL(4, 27, 8), // "duration"
QT_MOC_LITERAL(5, 36, 7), // "warning"
QT_MOC_LITERAL(6, 44, 6), // "notice"
QT_MOC_LITERAL(7, 51, 8), // "exportPS"
QT_MOC_LITERAL(8, 60, 5), // "fname"
QT_MOC_LITERAL(9, 66, 7), // "options"
QT_MOC_LITERAL(10, 74, 9), // "QPrinter*"
QT_MOC_LITERAL(11, 84, 7), // "printer"
QT_MOC_LITERAL(12, 92, 21), // "QPrinter::Orientation"
QT_MOC_LITERAL(13, 114, 11), // "orientation"
QT_MOC_LITERAL(14, 126, 9), // "exportPDF"
QT_MOC_LITERAL(15, 136, 13), // "handleSRCLink"
QT_MOC_LITERAL(16, 150, 8), // "linkText"
QT_MOC_LITERAL(17, 159, 5), // "point"
QT_MOC_LITERAL(18, 165, 15), // "DocumentWidget*"
QT_MOC_LITERAL(19, 181, 6), // "widget"
QT_MOC_LITERAL(20, 188, 15), // "embedPostScript"
QT_MOC_LITERAL(21, 204, 8), // "drawPage"
QT_MOC_LITERAL(22, 213, 12), // "dviPageInfo*"
QT_MOC_LITERAL(23, 226, 4), // "page"
QT_MOC_LITERAL(24, 231, 7), // "getText"
QT_MOC_LITERAL(25, 239, 10), // "sizeOfPage"
QT_MOC_LITERAL(26, 250, 14), // "SimplePageSize"
QT_MOC_LITERAL(27, 265, 10), // "PageNumber"
QT_MOC_LITERAL(28, 276, 13) // "sourceAnchors"

    },
    "dviRenderer\0error\0\0message\0duration\0"
    "warning\0notice\0exportPS\0fname\0options\0"
    "QPrinter*\0printer\0QPrinter::Orientation\0"
    "orientation\0exportPDF\0handleSRCLink\0"
    "linkText\0point\0DocumentWidget*\0widget\0"
    "embedPostScript\0drawPage\0dviPageInfo*\0"
    "page\0getText\0sizeOfPage\0SimplePageSize\0"
    "PageNumber\0sourceAnchors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dviRenderer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       5,    2,   94,    2, 0x06 /* Public */,
       6,    2,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    4,  104,    2, 0x0a /* Public */,
       7,    3,  113,    2, 0x2a /* Public | MethodCloned */,
       7,    2,  120,    2, 0x2a /* Public | MethodCloned */,
       7,    1,  125,    2, 0x2a /* Public | MethodCloned */,
       7,    0,  128,    2, 0x2a /* Public | MethodCloned */,
      14,    0,  129,    2, 0x0a /* Public */,
      15,    3,  130,    2, 0x0a /* Public */,
      20,    0,  137,    2, 0x0a /* Public */,
      21,    1,  138,    2, 0x0a /* Public */,
      24,    1,  141,    2, 0x0a /* Public */,
      25,    1,  144,    2, 0x0a /* Public */,
      28,    0,  147,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, 0x80000000 | 10, 0x80000000 | 12,    8,    9,   11,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, 0x80000000 | 10,    8,    9,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    8,    9,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QPoint, 0x80000000 | 18,   16,   17,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,
    0x80000000 | 26, 0x80000000 | 27,   23,
    QMetaType::Void,

       0        // eod
};

void dviRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dviRenderer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->warning((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->notice((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->exportPS((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< QPrinter*(*)>(_a[3])),(*reinterpret_cast< QPrinter::Orientation(*)>(_a[4]))); break;
        case 4: _t->exportPS((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< QPrinter*(*)>(_a[3]))); break;
        case 5: _t->exportPS((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 6: _t->exportPS((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->exportPS(); break;
        case 8: _t->exportPDF(); break;
        case 9: _t->handleSRCLink((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< DocumentWidget*(*)>(_a[3]))); break;
        case 10: _t->embedPostScript(); break;
        case 11: _t->drawPage((*reinterpret_cast< dviPageInfo*(*)>(_a[1]))); break;
        case 12: _t->getText((*reinterpret_cast< dviPageInfo*(*)>(_a[1]))); break;
        case 13: { SimplePageSize _r = _t->sizeOfPage((*reinterpret_cast< const PageNumber(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< SimplePageSize*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->sourceAnchors(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (dviRenderer::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&dviRenderer::error)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (dviRenderer::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&dviRenderer::warning)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (dviRenderer::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&dviRenderer::notice)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dviRenderer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_dviRenderer.data,
    qt_meta_data_dviRenderer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dviRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dviRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dviRenderer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "bigEndianByteReader"))
        return static_cast< bigEndianByteReader*>(this);
    return QObject::qt_metacast(_clname);
}

int dviRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void dviRenderer::error(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dviRenderer::warning(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dviRenderer::notice(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
