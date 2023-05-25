/****************************************************************************
** Meta object code from reading C++ file 'fileundomanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/widgets/fileundomanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileundomanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__FileUndoManager_t {
    QByteArrayData data[12];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__FileUndoManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__FileUndoManager_t qt_meta_stringdata_KIO__FileUndoManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "KIO::FileUndoManager"
QT_MOC_LITERAL(1, 21, 13), // "undoAvailable"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "avail"
QT_MOC_LITERAL(4, 42, 15), // "undoTextChanged"
QT_MOC_LITERAL(5, 58, 4), // "text"
QT_MOC_LITERAL(6, 63, 15), // "undoJobFinished"
QT_MOC_LITERAL(7, 79, 19), // "jobRecordingStarted"
QT_MOC_LITERAL(8, 99, 11), // "CommandType"
QT_MOC_LITERAL(9, 111, 2), // "op"
QT_MOC_LITERAL(10, 114, 20), // "jobRecordingFinished"
QT_MOC_LITERAL(11, 135, 4) // "undo"

    },
    "KIO::FileUndoManager\0undoAvailable\0\0"
    "avail\0undoTextChanged\0text\0undoJobFinished\0"
    "jobRecordingStarted\0CommandType\0op\0"
    "jobRecordingFinished\0undo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__FileUndoManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    0,   50,    2, 0x06 /* Public */,
       7,    1,   51,    2, 0x06 /* Public */,
      10,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void KIO::FileUndoManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileUndoManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->undoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->undoTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->undoJobFinished(); break;
        case 3: _t->jobRecordingStarted((*reinterpret_cast< CommandType(*)>(_a[1]))); break;
        case 4: _t->jobRecordingFinished((*reinterpret_cast< CommandType(*)>(_a[1]))); break;
        case 5: _t->undo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileUndoManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileUndoManager::undoAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileUndoManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileUndoManager::undoTextChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileUndoManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileUndoManager::undoJobFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileUndoManager::*)(CommandType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileUndoManager::jobRecordingStarted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileUndoManager::*)(CommandType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileUndoManager::jobRecordingFinished)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::FileUndoManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KIO__FileUndoManager.data,
    qt_meta_data_KIO__FileUndoManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::FileUndoManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::FileUndoManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__FileUndoManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KIO::FileUndoManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KIO::FileUndoManager::undoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::FileUndoManager::undoTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KIO::FileUndoManager::undoJobFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KIO::FileUndoManager::jobRecordingStarted(CommandType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KIO::FileUndoManager::jobRecordingFinished(CommandType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
