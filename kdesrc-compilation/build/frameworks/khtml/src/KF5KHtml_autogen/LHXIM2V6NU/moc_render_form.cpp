/****************************************************************************
** Meta object code from reading C++ file 'render_form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/khtml/src/rendering/render_form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'render_form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_khtml__RenderButton_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_khtml__RenderButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_khtml__RenderButton_t qt_meta_stringdata_khtml__RenderButton = {
    {
QT_MOC_LITERAL(0, 0, 19) // "khtml::RenderButton"

    },
    "khtml::RenderButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_khtml__RenderButton[] = {

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

void khtml::RenderButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject khtml::RenderButton::staticMetaObject = { {
    QMetaObject::SuperData::link<RenderFormElement::staticMetaObject>(),
    qt_meta_stringdata_khtml__RenderButton.data,
    qt_meta_data_khtml__RenderButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *khtml::RenderButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *khtml::RenderButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_khtml__RenderButton.stringdata0))
        return static_cast<void*>(this);
    return RenderFormElement::qt_metacast(_clname);
}

int khtml::RenderButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RenderFormElement::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_khtml__RenderCheckBox_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_khtml__RenderCheckBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_khtml__RenderCheckBox_t qt_meta_stringdata_khtml__RenderCheckBox = {
    {
QT_MOC_LITERAL(0, 0, 21), // "khtml::RenderCheckBox"
QT_MOC_LITERAL(1, 22, 16), // "slotStateChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5) // "state"

    },
    "khtml::RenderCheckBox\0slotStateChanged\0"
    "\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_khtml__RenderCheckBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void khtml::RenderCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenderCheckBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject khtml::RenderCheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<RenderButton::staticMetaObject>(),
    qt_meta_stringdata_khtml__RenderCheckBox.data,
    qt_meta_data_khtml__RenderCheckBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *khtml::RenderCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *khtml::RenderCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_khtml__RenderCheckBox.stringdata0))
        return static_cast<void*>(this);
    return RenderButton::qt_metacast(_clname);
}

int khtml::RenderCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RenderButton::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_khtml__RenderRadioButton_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_khtml__RenderRadioButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_khtml__RenderRadioButton_t qt_meta_stringdata_khtml__RenderRadioButton = {
    {
QT_MOC_LITERAL(0, 0, 24), // "khtml::RenderRadioButton"
QT_MOC_LITERAL(1, 25, 11), // "slotToggled"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "khtml::RenderRadioButton\0slotToggled\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_khtml__RenderRadioButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void khtml::RenderRadioButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenderRadioButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject khtml::RenderRadioButton::staticMetaObject = { {
    QMetaObject::SuperData::link<RenderButton::staticMetaObject>(),
    qt_meta_stringdata_khtml__RenderRadioButton.data,
    qt_meta_data_khtml__RenderRadioButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *khtml::RenderRadioButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *khtml::RenderRadioButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_khtml__RenderRadioButton.stringdata0))
        return static_cast<void*>(this);
    return RenderButton::qt_metacast(_clname);
}

int khtml::RenderRadioButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RenderButton::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_khtml__RenderLineEdit_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_khtml__RenderLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_khtml__RenderLineEdit_t qt_meta_stringdata_khtml__RenderLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 21), // "khtml::RenderLineEdit"
QT_MOC_LITERAL(1, 22, 17), // "slotReturnPressed"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 15), // "slotTextChanged"
QT_MOC_LITERAL(4, 57, 6) // "string"

    },
    "khtml::RenderLineEdit\0slotReturnPressed\0"
    "\0slotTextChanged\0string"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_khtml__RenderLineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void khtml::RenderLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenderLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotReturnPressed(); break;
        case 1: _t->slotTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject khtml::RenderLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<RenderFormElement::staticMetaObject>(),
    qt_meta_stringdata_khtml__RenderLineEdit.data,
    qt_meta_data_khtml__RenderLineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *khtml::RenderLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *khtml::RenderLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_khtml__RenderLineEdit.stringdata0))
        return static_cast<void*>(this);
    return RenderFormElement::qt_metacast(_clname);
}

int khtml::RenderLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RenderFormElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_khtml__LineEditWidget_t {
    QByteArrayData data[12];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_khtml__LineEditWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_khtml__LineEditWidget_t qt_meta_stringdata_khtml__LineEditWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "khtml::LineEditWidget"
QT_MOC_LITERAL(1, 22, 21), // "clearHistoryActivated"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 17), // "slotCheckSpelling"
QT_MOC_LITERAL(4, 63, 18), // "slotSpellCheckDone"
QT_MOC_LITERAL(5, 82, 1), // "s"
QT_MOC_LITERAL(6, 84, 21), // "slotCreateWebShortcut"
QT_MOC_LITERAL(7, 106, 23), // "spellCheckerMisspelling"
QT_MOC_LITERAL(8, 130, 4), // "text"
QT_MOC_LITERAL(9, 135, 3), // "pos"
QT_MOC_LITERAL(10, 139, 21), // "spellCheckerCorrected"
QT_MOC_LITERAL(11, 161, 20) // "spellCheckerFinished"

    },
    "khtml::LineEditWidget\0clearHistoryActivated\0"
    "\0slotCheckSpelling\0slotSpellCheckDone\0"
    "s\0slotCreateWebShortcut\0spellCheckerMisspelling\0"
    "text\0pos\0spellCheckerCorrected\0"
    "spellCheckerFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_khtml__LineEditWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    2,   55,    2, 0x08 /* Private */,
      10,    3,   60,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void khtml::LineEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LineEditWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clearHistoryActivated(); break;
        case 1: _t->slotCheckSpelling(); break;
        case 2: _t->slotSpellCheckDone((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotCreateWebShortcut(); break;
        case 4: _t->spellCheckerMisspelling((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->spellCheckerCorrected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->spellCheckerFinished(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject khtml::LineEditWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<KLineEdit::staticMetaObject>(),
    qt_meta_stringdata_khtml__LineEditWidget.data,
    qt_meta_data_khtml__LineEditWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *khtml::LineEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *khtml::LineEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_khtml__LineEditWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KHTMLWidget"))
        return static_cast< KHTMLWidget*>(this);
    return KLineEdit::qt_metacast(_clname);
}

int khtml::LineEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_khtml__RenderFileButton_t {
    QByteArrayData data[6];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_khtml__RenderFileButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_khtml__RenderFileButton_t qt_meta_stringdata_khtml__RenderFileButton = {
    {
QT_MOC_LITERAL(0, 0, 23), // "khtml::RenderFileButton"
QT_MOC_LITERAL(1, 24, 17), // "slotReturnPressed"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 15), // "slotTextChanged"
QT_MOC_LITERAL(4, 59, 6), // "string"
QT_MOC_LITERAL(5, 66, 15) // "slotUrlSelected"

    },
    "khtml::RenderFileButton\0slotReturnPressed\0"
    "\0slotTextChanged\0string\0slotUrlSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_khtml__RenderFileButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void khtml::RenderFileButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenderFileButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotReturnPressed(); break;
        case 1: _t->slotTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotUrlSelected(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject khtml::RenderFileButton::staticMetaObject = { {
    QMetaObject::SuperData::link<RenderFormElement::staticMetaObject>(),
    qt_meta_stringdata_khtml__RenderFileButton.data,
    qt_meta_data_khtml__RenderFileButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *khtml::RenderFileButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *khtml::RenderFileButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_khtml__RenderFileButton.stringdata0))
        return static_cast<void*>(this);
    return RenderFormElement::qt_metacast(_clname);
}

int khtml::RenderFileButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RenderFormElement::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_khtml__RenderSelect_t {
    QByteArrayData data[5];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_khtml__RenderSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_khtml__RenderSelect_t qt_meta_stringdata_khtml__RenderSelect = {
    {
QT_MOC_LITERAL(0, 0, 19), // "khtml::RenderSelect"
QT_MOC_LITERAL(1, 20, 12), // "slotSelected"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "index"
QT_MOC_LITERAL(4, 40, 20) // "slotSelectionChanged"

    },
    "khtml::RenderSelect\0slotSelected\0\0"
    "index\0slotSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_khtml__RenderSelect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       4,    0,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void khtml::RenderSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenderSelect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotSelectionChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject khtml::RenderSelect::staticMetaObject = { {
    QMetaObject::SuperData::link<RenderFormElement::staticMetaObject>(),
    qt_meta_stringdata_khtml__RenderSelect.data,
    qt_meta_data_khtml__RenderSelect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *khtml::RenderSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *khtml::RenderSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_khtml__RenderSelect.stringdata0))
        return static_cast<void*>(this);
    return RenderFormElement::qt_metacast(_clname);
}

int khtml::RenderSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RenderFormElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_khtml__TextAreaWidget_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_khtml__TextAreaWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_khtml__TextAreaWidget_t qt_meta_stringdata_khtml__TextAreaWidget = {
    {
QT_MOC_LITERAL(0, 0, 21) // "khtml::TextAreaWidget"

    },
    "khtml::TextAreaWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_khtml__TextAreaWidget[] = {

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

void khtml::TextAreaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject khtml::TextAreaWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<KTextEdit::staticMetaObject>(),
    qt_meta_stringdata_khtml__TextAreaWidget.data,
    qt_meta_data_khtml__TextAreaWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *khtml::TextAreaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *khtml::TextAreaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_khtml__TextAreaWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KHTMLWidget"))
        return static_cast< KHTMLWidget*>(this);
    return KTextEdit::qt_metacast(_clname);
}

int khtml::TextAreaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KTextEdit::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_khtml__RenderTextArea_t {
    QByteArrayData data[3];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_khtml__RenderTextArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_khtml__RenderTextArea_t qt_meta_stringdata_khtml__RenderTextArea = {
    {
QT_MOC_LITERAL(0, 0, 21), // "khtml::RenderTextArea"
QT_MOC_LITERAL(1, 22, 15), // "slotTextChanged"
QT_MOC_LITERAL(2, 38, 0) // ""

    },
    "khtml::RenderTextArea\0slotTextChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_khtml__RenderTextArea[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void khtml::RenderTextArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenderTextArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotTextChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject khtml::RenderTextArea::staticMetaObject = { {
    QMetaObject::SuperData::link<RenderFormElement::staticMetaObject>(),
    qt_meta_stringdata_khtml__RenderTextArea.data,
    qt_meta_data_khtml__RenderTextArea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *khtml::RenderTextArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *khtml::RenderTextArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_khtml__RenderTextArea.stringdata0))
        return static_cast<void*>(this);
    return RenderFormElement::qt_metacast(_clname);
}

int khtml::RenderTextArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RenderFormElement::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
