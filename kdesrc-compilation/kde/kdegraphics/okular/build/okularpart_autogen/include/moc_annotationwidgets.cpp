/****************************************************************************
** Meta object code from reading C++ file 'annotationwidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../part/annotationwidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'annotationwidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PixmapPreviewSelector_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PixmapPreviewSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PixmapPreviewSelector_t qt_meta_stringdata_PixmapPreviewSelector = {
    {
QT_MOC_LITERAL(0, 0, 21), // "PixmapPreviewSelector"
QT_MOC_LITERAL(1, 22, 11), // "iconChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "iconComboChanged"
QT_MOC_LITERAL(4, 52, 4), // "icon"
QT_MOC_LITERAL(5, 57, 17) // "selectCustomStamp"

    },
    "PixmapPreviewSelector\0iconChanged\0\0"
    "iconComboChanged\0icon\0selectCustomStamp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PixmapPreviewSelector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   32,    2, 0x08 /* Private */,
       5,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void PixmapPreviewSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PixmapPreviewSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iconChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->iconComboChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->selectCustomStamp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PixmapPreviewSelector::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PixmapPreviewSelector::iconChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PixmapPreviewSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PixmapPreviewSelector.data,
    qt_meta_data_PixmapPreviewSelector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PixmapPreviewSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PixmapPreviewSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PixmapPreviewSelector.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PixmapPreviewSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PixmapPreviewSelector::iconChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AnnotationWidget_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnnotationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnnotationWidget_t qt_meta_stringdata_AnnotationWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AnnotationWidget"
QT_MOC_LITERAL(1, 17, 11), // "dataChanged"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "AnnotationWidget\0dataChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnnotationWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void AnnotationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnnotationWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnnotationWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnnotationWidget::dataChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AnnotationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AnnotationWidget.data,
    qt_meta_data_AnnotationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AnnotationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnnotationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnnotationWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AnnotationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void AnnotationWidget::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_TextAnnotationWidget_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextAnnotationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextAnnotationWidget_t qt_meta_stringdata_TextAnnotationWidget = {
    {
QT_MOC_LITERAL(0, 0, 20) // "TextAnnotationWidget"

    },
    "TextAnnotationWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextAnnotationWidget[] = {

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

void TextAnnotationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TextAnnotationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AnnotationWidget::staticMetaObject>(),
    qt_meta_stringdata_TextAnnotationWidget.data,
    qt_meta_data_TextAnnotationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TextAnnotationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextAnnotationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextAnnotationWidget.stringdata0))
        return static_cast<void*>(this);
    return AnnotationWidget::qt_metacast(_clname);
}

int TextAnnotationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnnotationWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StampAnnotationWidget_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StampAnnotationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StampAnnotationWidget_t qt_meta_stringdata_StampAnnotationWidget = {
    {
QT_MOC_LITERAL(0, 0, 21) // "StampAnnotationWidget"

    },
    "StampAnnotationWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StampAnnotationWidget[] = {

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

void StampAnnotationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StampAnnotationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AnnotationWidget::staticMetaObject>(),
    qt_meta_stringdata_StampAnnotationWidget.data,
    qt_meta_data_StampAnnotationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StampAnnotationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StampAnnotationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StampAnnotationWidget.stringdata0))
        return static_cast<void*>(this);
    return AnnotationWidget::qt_metacast(_clname);
}

int StampAnnotationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnnotationWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LineAnnotationWidget_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineAnnotationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineAnnotationWidget_t qt_meta_stringdata_LineAnnotationWidget = {
    {
QT_MOC_LITERAL(0, 0, 20) // "LineAnnotationWidget"

    },
    "LineAnnotationWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineAnnotationWidget[] = {

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

void LineAnnotationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LineAnnotationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AnnotationWidget::staticMetaObject>(),
    qt_meta_stringdata_LineAnnotationWidget.data,
    qt_meta_data_LineAnnotationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LineAnnotationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineAnnotationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LineAnnotationWidget.stringdata0))
        return static_cast<void*>(this);
    return AnnotationWidget::qt_metacast(_clname);
}

int LineAnnotationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnnotationWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HighlightAnnotationWidget_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HighlightAnnotationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HighlightAnnotationWidget_t qt_meta_stringdata_HighlightAnnotationWidget = {
    {
QT_MOC_LITERAL(0, 0, 25) // "HighlightAnnotationWidget"

    },
    "HighlightAnnotationWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HighlightAnnotationWidget[] = {

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

void HighlightAnnotationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HighlightAnnotationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AnnotationWidget::staticMetaObject>(),
    qt_meta_stringdata_HighlightAnnotationWidget.data,
    qt_meta_data_HighlightAnnotationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HighlightAnnotationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HighlightAnnotationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HighlightAnnotationWidget.stringdata0))
        return static_cast<void*>(this);
    return AnnotationWidget::qt_metacast(_clname);
}

int HighlightAnnotationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnnotationWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GeomAnnotationWidget_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeomAnnotationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeomAnnotationWidget_t qt_meta_stringdata_GeomAnnotationWidget = {
    {
QT_MOC_LITERAL(0, 0, 20) // "GeomAnnotationWidget"

    },
    "GeomAnnotationWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeomAnnotationWidget[] = {

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

void GeomAnnotationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GeomAnnotationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AnnotationWidget::staticMetaObject>(),
    qt_meta_stringdata_GeomAnnotationWidget.data,
    qt_meta_data_GeomAnnotationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GeomAnnotationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeomAnnotationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeomAnnotationWidget.stringdata0))
        return static_cast<void*>(this);
    return AnnotationWidget::qt_metacast(_clname);
}

int GeomAnnotationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnnotationWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FileAttachmentAnnotationWidget_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileAttachmentAnnotationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileAttachmentAnnotationWidget_t qt_meta_stringdata_FileAttachmentAnnotationWidget = {
    {
QT_MOC_LITERAL(0, 0, 30) // "FileAttachmentAnnotationWidget"

    },
    "FileAttachmentAnnotationWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileAttachmentAnnotationWidget[] = {

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

void FileAttachmentAnnotationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FileAttachmentAnnotationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AnnotationWidget::staticMetaObject>(),
    qt_meta_stringdata_FileAttachmentAnnotationWidget.data,
    qt_meta_data_FileAttachmentAnnotationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileAttachmentAnnotationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileAttachmentAnnotationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileAttachmentAnnotationWidget.stringdata0))
        return static_cast<void*>(this);
    return AnnotationWidget::qt_metacast(_clname);
}

int FileAttachmentAnnotationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnnotationWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CaretAnnotationWidget_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CaretAnnotationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CaretAnnotationWidget_t qt_meta_stringdata_CaretAnnotationWidget = {
    {
QT_MOC_LITERAL(0, 0, 21) // "CaretAnnotationWidget"

    },
    "CaretAnnotationWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CaretAnnotationWidget[] = {

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

void CaretAnnotationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CaretAnnotationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AnnotationWidget::staticMetaObject>(),
    qt_meta_stringdata_CaretAnnotationWidget.data,
    qt_meta_data_CaretAnnotationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CaretAnnotationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaretAnnotationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CaretAnnotationWidget.stringdata0))
        return static_cast<void*>(this);
    return AnnotationWidget::qt_metacast(_clname);
}

int CaretAnnotationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnnotationWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_InkAnnotationWidget_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InkAnnotationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InkAnnotationWidget_t qt_meta_stringdata_InkAnnotationWidget = {
    {
QT_MOC_LITERAL(0, 0, 19) // "InkAnnotationWidget"

    },
    "InkAnnotationWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InkAnnotationWidget[] = {

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

void InkAnnotationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject InkAnnotationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AnnotationWidget::staticMetaObject>(),
    qt_meta_stringdata_InkAnnotationWidget.data,
    qt_meta_data_InkAnnotationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InkAnnotationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InkAnnotationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InkAnnotationWidget.stringdata0))
        return static_cast<void*>(this);
    return AnnotationWidget::qt_metacast(_clname);
}

int InkAnnotationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnnotationWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
