/****************************************************************************
** Meta object code from reading C++ file 'kstandardshortcutwatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kconfig/src/gui/kstandardshortcutwatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kstandardshortcutwatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KStandardShortcut__StandardShortcutWatcher_t {
    QByteArrayData data[7];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KStandardShortcut__StandardShortcutWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KStandardShortcut__StandardShortcutWatcher_t qt_meta_stringdata_KStandardShortcut__StandardShortcutWatcher = {
    {
QT_MOC_LITERAL(0, 0, 42), // "KStandardShortcut::StandardSh..."
QT_MOC_LITERAL(1, 43, 15), // "shortcutChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 35), // "KStandardShortcut::StandardSh..."
QT_MOC_LITERAL(4, 96, 2), // "id"
QT_MOC_LITERAL(5, 99, 19), // "QList<QKeySequence>"
QT_MOC_LITERAL(6, 119, 8) // "shortcut"

    },
    "KStandardShortcut::StandardShortcutWatcher\0"
    "shortcutChanged\0\0KStandardShortcut::StandardShortcut\0"
    "id\0QList<QKeySequence>\0shortcut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KStandardShortcut__StandardShortcutWatcher[] = {

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
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

void KStandardShortcut::StandardShortcutWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StandardShortcutWatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shortcutChanged((*reinterpret_cast< KStandardShortcut::StandardShortcut(*)>(_a[1])),(*reinterpret_cast< const QList<QKeySequence>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QKeySequence> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StandardShortcutWatcher::*)(KStandardShortcut::StandardShortcut , const QList<QKeySequence> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StandardShortcutWatcher::shortcutChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KStandardShortcut::StandardShortcutWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KStandardShortcut__StandardShortcutWatcher.data,
    qt_meta_data_KStandardShortcut__StandardShortcutWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KStandardShortcut::StandardShortcutWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KStandardShortcut::StandardShortcutWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KStandardShortcut__StandardShortcutWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KStandardShortcut::StandardShortcutWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KStandardShortcut::StandardShortcutWatcher::shortcutChanged(KStandardShortcut::StandardShortcut _t1, const QList<QKeySequence> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
