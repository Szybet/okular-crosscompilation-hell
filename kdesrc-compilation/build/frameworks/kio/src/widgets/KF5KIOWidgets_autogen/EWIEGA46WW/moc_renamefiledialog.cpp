/****************************************************************************
** Meta object code from reading C++ file 'renamefiledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/widgets/renamefiledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'renamefiledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__RenameFileDialog_t {
    QByteArrayData data[15];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__RenameFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__RenameFileDialog_t qt_meta_stringdata_KIO__RenameFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "KIO::RenameFileDialog"
QT_MOC_LITERAL(1, 22, 16), // "renamingFinished"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "QList<QUrl>"
QT_MOC_LITERAL(4, 52, 4), // "urls"
QT_MOC_LITERAL(5, 57, 5), // "error"
QT_MOC_LITERAL(6, 63, 5), // "KJob*"
QT_MOC_LITERAL(7, 69, 12), // "slotAccepted"
QT_MOC_LITERAL(8, 82, 15), // "slotTextChanged"
QT_MOC_LITERAL(9, 98, 7), // "newName"
QT_MOC_LITERAL(10, 106, 15), // "slotFileRenamed"
QT_MOC_LITERAL(11, 122, 6), // "oldUrl"
QT_MOC_LITERAL(12, 129, 6), // "newUrl"
QT_MOC_LITERAL(13, 136, 10), // "slotResult"
QT_MOC_LITERAL(14, 147, 3) // "job"

    },
    "KIO::RenameFileDialog\0renamingFinished\0"
    "\0QList<QUrl>\0urls\0error\0KJob*\0"
    "slotAccepted\0slotTextChanged\0newName\0"
    "slotFileRenamed\0oldUrl\0newUrl\0slotResult\0"
    "job"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__RenameFileDialog[] = {

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
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   50,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,
      10,    2,   54,    2, 0x08 /* Private */,
      13,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QUrl,   11,   12,
    QMetaType::Void, 0x80000000 | 6,   14,

       0        // eod
};

void KIO::RenameFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenameFileDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->renamingFinished((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 2: _t->slotAccepted(); break;
        case 3: _t->slotTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotFileRenamed((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 5: _t->slotResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RenameFileDialog::*)(const QList<QUrl> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RenameFileDialog::renamingFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RenameFileDialog::*)(KJob * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RenameFileDialog::error)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::RenameFileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_KIO__RenameFileDialog.data,
    qt_meta_data_KIO__RenameFileDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::RenameFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::RenameFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__RenameFileDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int KIO::RenameFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void KIO::RenameFileDialog::renamingFinished(const QList<QUrl> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::RenameFileDialog::error(KJob * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
