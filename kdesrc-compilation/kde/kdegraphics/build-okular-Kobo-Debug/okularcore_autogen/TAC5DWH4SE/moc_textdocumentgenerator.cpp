/****************************************************************************
** Meta object code from reading C++ file 'textdocumentgenerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/core/textdocumentgenerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textdocumentgenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Okular__TextDocumentConverter_t {
    QByteArrayData data[24];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Okular__TextDocumentConverter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Okular__TextDocumentConverter_t qt_meta_stringdata_Okular__TextDocumentConverter = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Okular::TextDocumentConverter"
QT_MOC_LITERAL(1, 30, 9), // "addAction"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 15), // "Okular::Action*"
QT_MOC_LITERAL(4, 57, 4), // "link"
QT_MOC_LITERAL(5, 62, 11), // "cursorBegin"
QT_MOC_LITERAL(6, 74, 9), // "cursorEnd"
QT_MOC_LITERAL(7, 84, 13), // "addAnnotation"
QT_MOC_LITERAL(8, 98, 19), // "Okular::Annotation*"
QT_MOC_LITERAL(9, 118, 10), // "annotation"
QT_MOC_LITERAL(10, 129, 8), // "addTitle"
QT_MOC_LITERAL(11, 138, 5), // "level"
QT_MOC_LITERAL(12, 144, 5), // "title"
QT_MOC_LITERAL(13, 150, 10), // "QTextBlock"
QT_MOC_LITERAL(14, 161, 8), // "position"
QT_MOC_LITERAL(15, 170, 11), // "addMetaData"
QT_MOC_LITERAL(16, 182, 17), // "DocumentInfo::Key"
QT_MOC_LITERAL(17, 200, 3), // "key"
QT_MOC_LITERAL(18, 204, 5), // "value"
QT_MOC_LITERAL(19, 210, 5), // "error"
QT_MOC_LITERAL(20, 216, 7), // "message"
QT_MOC_LITERAL(21, 224, 8), // "duration"
QT_MOC_LITERAL(22, 233, 7), // "warning"
QT_MOC_LITERAL(23, 241, 6) // "notice"

    },
    "Okular::TextDocumentConverter\0addAction\0"
    "\0Okular::Action*\0link\0cursorBegin\0"
    "cursorEnd\0addAnnotation\0Okular::Annotation*\0"
    "annotation\0addTitle\0level\0title\0"
    "QTextBlock\0position\0addMetaData\0"
    "DocumentInfo::Key\0key\0value\0error\0"
    "message\0duration\0warning\0notice"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Okular__TextDocumentConverter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x06 /* Public */,
       7,    3,   56,    2, 0x06 /* Public */,
      10,    3,   63,    2, 0x06 /* Public */,
      15,    2,   70,    2, 0x06 /* Public */,
      19,    2,   75,    2, 0x06 /* Public */,
      22,    2,   80,    2, 0x06 /* Public */,
      23,    2,   85,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Int,    9,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 13,   11,   12,   14,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QString,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   20,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   20,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   20,   21,

       0        // eod
};

void Okular::TextDocumentConverter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextDocumentConverter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addAction((*reinterpret_cast< Okular::Action*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->addAnnotation((*reinterpret_cast< Okular::Annotation*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->addTitle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QTextBlock(*)>(_a[3]))); break;
        case 3: _t->addMetaData((*reinterpret_cast< DocumentInfo::Key(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->warning((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->notice((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TextDocumentConverter::*)(Okular::Action * , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextDocumentConverter::addAction)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TextDocumentConverter::*)(Okular::Annotation * , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextDocumentConverter::addAnnotation)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TextDocumentConverter::*)(int , const QString & , const QTextBlock & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextDocumentConverter::addTitle)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TextDocumentConverter::*)(DocumentInfo::Key , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextDocumentConverter::addMetaData)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TextDocumentConverter::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextDocumentConverter::error)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TextDocumentConverter::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextDocumentConverter::warning)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TextDocumentConverter::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextDocumentConverter::notice)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Okular::TextDocumentConverter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Okular__TextDocumentConverter.data,
    qt_meta_data_Okular__TextDocumentConverter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Okular::TextDocumentConverter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Okular::TextDocumentConverter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Okular__TextDocumentConverter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Okular::TextDocumentConverter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Okular::TextDocumentConverter::addAction(Okular::Action * _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Okular::TextDocumentConverter::addAnnotation(Okular::Annotation * _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Okular::TextDocumentConverter::addTitle(int _t1, const QString & _t2, const QTextBlock & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Okular::TextDocumentConverter::addMetaData(DocumentInfo::Key _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Okular::TextDocumentConverter::error(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Okular::TextDocumentConverter::warning(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Okular::TextDocumentConverter::notice(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
struct qt_meta_stringdata_Okular__TextDocumentGenerator_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Okular__TextDocumentGenerator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Okular__TextDocumentGenerator_t qt_meta_stringdata_Okular__TextDocumentGenerator = {
    {
QT_MOC_LITERAL(0, 0, 29) // "Okular::TextDocumentGenerator"

    },
    "Okular::TextDocumentGenerator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Okular__TextDocumentGenerator[] = {

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

void Okular::TextDocumentGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Okular::TextDocumentGenerator::staticMetaObject = { {
    QMetaObject::SuperData::link<Generator::staticMetaObject>(),
    qt_meta_stringdata_Okular__TextDocumentGenerator.data,
    qt_meta_data_Okular__TextDocumentGenerator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Okular::TextDocumentGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Okular::TextDocumentGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Okular__TextDocumentGenerator.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Okular::ConfigInterface"))
        return static_cast< Okular::ConfigInterface*>(this);
    if (!strcmp(_clname, "org.kde.okular.ConfigInterface/0.1"))
        return static_cast< Okular::ConfigInterface*>(this);
    return Generator::qt_metacast(_clname);
}

int Okular::TextDocumentGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Generator::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
