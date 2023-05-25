/****************************************************************************
** Meta object code from reading C++ file 'kurlrequester.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/widgets/kurlrequester.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kurlrequester.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KUrlRequester_t {
    QByteArrayData data[26];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KUrlRequester_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KUrlRequester_t qt_meta_stringdata_KUrlRequester = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KUrlRequester"
QT_MOC_LITERAL(1, 14, 11), // "textChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "textEdited"
QT_MOC_LITERAL(4, 38, 13), // "returnPressed"
QT_MOC_LITERAL(5, 52, 4), // "text"
QT_MOC_LITERAL(6, 57, 14), // "openFileDialog"
QT_MOC_LITERAL(7, 72, 14), // "KUrlRequester*"
QT_MOC_LITERAL(8, 87, 11), // "urlSelected"
QT_MOC_LITERAL(9, 99, 6), // "setUrl"
QT_MOC_LITERAL(10, 106, 3), // "url"
QT_MOC_LITERAL(11, 110, 11), // "setStartDir"
QT_MOC_LITERAL(12, 122, 8), // "startDir"
QT_MOC_LITERAL(13, 131, 7), // "setPath"
QT_MOC_LITERAL(14, 139, 4), // "path"
QT_MOC_LITERAL(15, 144, 7), // "setText"
QT_MOC_LITERAL(16, 152, 5), // "clear"
QT_MOC_LITERAL(17, 158, 6), // "filter"
QT_MOC_LITERAL(18, 165, 4), // "mode"
QT_MOC_LITERAL(19, 170, 12), // "KFile::Modes"
QT_MOC_LITERAL(20, 183, 10), // "acceptMode"
QT_MOC_LITERAL(21, 194, 23), // "QFileDialog::AcceptMode"
QT_MOC_LITERAL(22, 218, 12), // "clickMessage"
QT_MOC_LITERAL(23, 231, 15), // "placeholderText"
QT_MOC_LITERAL(24, 247, 18), // "fileDialogModality"
QT_MOC_LITERAL(25, 266, 18) // "Qt::WindowModality"

    },
    "KUrlRequester\0textChanged\0\0textEdited\0"
    "returnPressed\0text\0openFileDialog\0"
    "KUrlRequester*\0urlSelected\0setUrl\0url\0"
    "setStartDir\0startDir\0setPath\0path\0"
    "setText\0clear\0filter\0mode\0KFile::Modes\0"
    "acceptMode\0QFileDialog::AcceptMode\0"
    "clickMessage\0placeholderText\0"
    "fileDialogModality\0Qt::WindowModality"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KUrlRequester[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       8,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,
       4,    0,   75,    2, 0x06 /* Public */,
       4,    1,   76,    2, 0x06 /* Public */,
       6,    1,   79,    2, 0x06 /* Public */,
       8,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   85,    2, 0x0a /* Public */,
      11,    1,   88,    2, 0x0a /* Public */,
      13,    1,   91,    2, 0x0a /* Public */,
      15,    1,   94,    2, 0x0a /* Public */,
      16,    0,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QUrl,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void, QMetaType::QUrl,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QUrl, 0x00595103,
      17, QMetaType::QString, 0x00095103,
      18, 0x80000000 | 19, 0x0009510b,
      20, 0x80000000 | 21, 0x0009510b,
      22, QMetaType::QString, 0x00095103,
      23, QMetaType::QString, 0x00095103,
       5, QMetaType::QString, 0x00495103,
      24, 0x80000000 | 25, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void KUrlRequester::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KUrlRequester *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->returnPressed(); break;
        case 3: _t->returnPressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->openFileDialog((*reinterpret_cast< KUrlRequester*(*)>(_a[1]))); break;
        case 5: _t->urlSelected((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->setUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->setStartDir((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->setPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KUrlRequester* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KUrlRequester::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlRequester::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KUrlRequester::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlRequester::textEdited)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KUrlRequester::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlRequester::returnPressed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KUrlRequester::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlRequester::returnPressed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KUrlRequester::*)(KUrlRequester * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlRequester::openFileDialog)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KUrlRequester::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlRequester::urlSelected)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KUrlRequester *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->filter(); break;
        case 2: *reinterpret_cast< KFile::Modes*>(_v) = _t->mode(); break;
        case 3: *reinterpret_cast< QFileDialog::AcceptMode*>(_v) = _t->acceptMode(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->clickMessage(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->placeholderText(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 7: *reinterpret_cast< Qt::WindowModality*>(_v) = _t->fileDialogModality(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KUrlRequester *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: _t->setFilter(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setMode(*reinterpret_cast< KFile::Modes*>(_v)); break;
        case 3: _t->setAcceptMode(*reinterpret_cast< QFileDialog::AcceptMode*>(_v)); break;
        case 4: _t->setClickMessage(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setPlaceholderText(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setFileDialogModality(*reinterpret_cast< Qt::WindowModality*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_KUrlRequester[] = {
    QMetaObject::SuperData::link<KFile::staticMetaObject>(),
    QMetaObject::SuperData::link<QFileDialog::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject KUrlRequester::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KUrlRequester.data,
    qt_meta_data_KUrlRequester,
    qt_static_metacall,
    qt_meta_extradata_KUrlRequester,
    nullptr
} };


const QMetaObject *KUrlRequester::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KUrlRequester::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KUrlRequester.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KUrlRequester::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KUrlRequester::textChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KUrlRequester::textEdited(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KUrlRequester::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KUrlRequester::returnPressed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KUrlRequester::openFileDialog(KUrlRequester * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KUrlRequester::urlSelected(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_KUrlComboRequester_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KUrlComboRequester_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KUrlComboRequester_t qt_meta_stringdata_KUrlComboRequester = {
    {
QT_MOC_LITERAL(0, 0, 18) // "KUrlComboRequester"

    },
    "KUrlComboRequester"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KUrlComboRequester[] = {

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

void KUrlComboRequester::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KUrlComboRequester::staticMetaObject = { {
    QMetaObject::SuperData::link<KUrlRequester::staticMetaObject>(),
    qt_meta_stringdata_KUrlComboRequester.data,
    qt_meta_data_KUrlComboRequester,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KUrlComboRequester::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KUrlComboRequester::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KUrlComboRequester.stringdata0))
        return static_cast<void*>(this);
    return KUrlRequester::qt_metacast(_clname);
}

int KUrlComboRequester::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KUrlRequester::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
