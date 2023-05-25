/****************************************************************************
** Meta object code from reading C++ file 'kcoredirlister.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/core/kcoredirlister.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcoredirlister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCoreDirLister_t {
    QByteArrayData data[44];
    char stringdata0[531];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCoreDirLister_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCoreDirLister_t qt_meta_stringdata_KCoreDirLister = {
    {
QT_MOC_LITERAL(0, 0, 14), // "KCoreDirLister"
QT_MOC_LITERAL(1, 15, 7), // "started"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "dirUrl"
QT_MOC_LITERAL(4, 31, 9), // "completed"
QT_MOC_LITERAL(5, 41, 19), // "listingDirCompleted"
QT_MOC_LITERAL(6, 61, 8), // "canceled"
QT_MOC_LITERAL(7, 70, 18), // "listingDirCanceled"
QT_MOC_LITERAL(8, 89, 11), // "redirection"
QT_MOC_LITERAL(9, 101, 4), // "_url"
QT_MOC_LITERAL(10, 106, 6), // "oldUrl"
QT_MOC_LITERAL(11, 113, 6), // "newUrl"
QT_MOC_LITERAL(12, 120, 5), // "clear"
QT_MOC_LITERAL(13, 126, 8), // "clearDir"
QT_MOC_LITERAL(14, 135, 8), // "newItems"
QT_MOC_LITERAL(15, 144, 13), // "KFileItemList"
QT_MOC_LITERAL(16, 158, 5), // "items"
QT_MOC_LITERAL(17, 164, 10), // "itemsAdded"
QT_MOC_LITERAL(18, 175, 12), // "directoryUrl"
QT_MOC_LITERAL(19, 188, 19), // "itemsFilteredByMime"
QT_MOC_LITERAL(20, 208, 12), // "itemsDeleted"
QT_MOC_LITERAL(21, 221, 12), // "refreshItems"
QT_MOC_LITERAL(22, 234, 34), // "QList<QPair<KFileItem,KFileIt..."
QT_MOC_LITERAL(23, 269, 11), // "infoMessage"
QT_MOC_LITERAL(24, 281, 3), // "msg"
QT_MOC_LITERAL(25, 285, 7), // "percent"
QT_MOC_LITERAL(26, 293, 9), // "totalSize"
QT_MOC_LITERAL(27, 303, 15), // "KIO::filesize_t"
QT_MOC_LITERAL(28, 319, 4), // "size"
QT_MOC_LITERAL(29, 324, 13), // "processedSize"
QT_MOC_LITERAL(30, 338, 5), // "speed"
QT_MOC_LITERAL(31, 344, 16), // "bytes_per_second"
QT_MOC_LITERAL(32, 361, 8), // "jobError"
QT_MOC_LITERAL(33, 370, 9), // "KIO::Job*"
QT_MOC_LITERAL(34, 380, 3), // "job"
QT_MOC_LITERAL(35, 384, 10), // "autoUpdate"
QT_MOC_LITERAL(36, 395, 15), // "showingDotFiles"
QT_MOC_LITERAL(37, 411, 15), // "showHiddenFiles"
QT_MOC_LITERAL(38, 427, 11), // "dirOnlyMode"
QT_MOC_LITERAL(39, 439, 16), // "delayedMimeTypes"
QT_MOC_LITERAL(40, 456, 27), // "requestMimeTypeWhileListing"
QT_MOC_LITERAL(41, 484, 10), // "nameFilter"
QT_MOC_LITERAL(42, 495, 10), // "mimeFilter"
QT_MOC_LITERAL(43, 506, 24) // "autoErrorHandlingEnabled"

    },
    "KCoreDirLister\0started\0\0dirUrl\0completed\0"
    "listingDirCompleted\0canceled\0"
    "listingDirCanceled\0redirection\0_url\0"
    "oldUrl\0newUrl\0clear\0clearDir\0newItems\0"
    "KFileItemList\0items\0itemsAdded\0"
    "directoryUrl\0itemsFilteredByMime\0"
    "itemsDeleted\0refreshItems\0"
    "QList<QPair<KFileItem,KFileItem> >\0"
    "infoMessage\0msg\0percent\0totalSize\0"
    "KIO::filesize_t\0size\0processedSize\0"
    "speed\0bytes_per_second\0jobError\0"
    "KIO::Job*\0job\0autoUpdate\0showingDotFiles\0"
    "showHiddenFiles\0dirOnlyMode\0"
    "delayedMimeTypes\0requestMimeTypeWhileListing\0"
    "nameFilter\0mimeFilter\0autoErrorHandlingEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCoreDirLister[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       9,  196, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,
       4,    0,  132,    2, 0x06 /* Public */,
       4,    1,  133,    2, 0x06 /* Public */,
       5,    1,  136,    2, 0x06 /* Public */,
       6,    0,  139,    2, 0x06 /* Public */,
       6,    1,  140,    2, 0x06 /* Public */,
       7,    1,  143,    2, 0x06 /* Public */,
       8,    1,  146,    2, 0x06 /* Public */,
       8,    2,  149,    2, 0x06 /* Public */,
      12,    0,  154,    2, 0x06 /* Public */,
      12,    1,  155,    2, 0x06 /* Public */,
      13,    1,  158,    2, 0x06 /* Public */,
      14,    1,  161,    2, 0x06 /* Public */,
      17,    2,  164,    2, 0x06 /* Public */,
      19,    1,  169,    2, 0x06 /* Public */,
      20,    1,  172,    2, 0x06 /* Public */,
      21,    1,  175,    2, 0x06 /* Public */,
      23,    1,  178,    2, 0x06 /* Public */,
      25,    1,  181,    2, 0x06 /* Public */,
      26,    1,  184,    2, 0x06 /* Public */,
      29,    1,  187,    2, 0x06 /* Public */,
      30,    1,  190,    2, 0x06 /* Public */,
      32,    1,  193,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QUrl,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 15,   18,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 22,   16,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, 0x80000000 | 33,   34,

 // properties: name, type, flags
      35, QMetaType::Bool, 0x00095103,
      36, QMetaType::Bool, 0x00095103,
      37, QMetaType::Bool, 0x00095103,
      38, QMetaType::Bool, 0x00095103,
      39, QMetaType::Bool, 0x00095103,
      40, QMetaType::Bool, 0x00095103,
      41, QMetaType::QString, 0x00095103,
      42, QMetaType::QStringList, 0x00095107,
      43, QMetaType::Bool, 0x00095103,

       0        // eod
};

void KCoreDirLister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KCoreDirLister *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->completed(); break;
        case 2: _t->completed((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->listingDirCompleted((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->canceled(); break;
        case 5: _t->canceled((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->listingDirCanceled((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->redirection((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->redirection((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 9: _t->clear(); break;
        case 10: _t->clear((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 11: _t->clearDir((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 12: _t->newItems((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        case 13: _t->itemsAdded((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const KFileItemList(*)>(_a[2]))); break;
        case 14: _t->itemsFilteredByMime((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        case 15: _t->itemsDeleted((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        case 16: _t->refreshItems((*reinterpret_cast< const QList<QPair<KFileItem,KFileItem> >(*)>(_a[1]))); break;
        case 17: _t->infoMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->percent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->totalSize((*reinterpret_cast< KIO::filesize_t(*)>(_a[1]))); break;
        case 20: _t->processedSize((*reinterpret_cast< KIO::filesize_t(*)>(_a[1]))); break;
        case 21: _t->speed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->jobError((*reinterpret_cast< KIO::Job*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KCoreDirLister::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::started)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::completed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::completed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::listingDirCompleted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::canceled)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::canceled)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::listingDirCanceled)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::redirection)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(const QUrl & , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::redirection)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::clear)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::clear)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::clearDir)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(const KFileItemList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::newItems)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(const QUrl & , const KFileItemList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::itemsAdded)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(const KFileItemList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::itemsFilteredByMime)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(const KFileItemList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::itemsDeleted)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(const QList<QPair<KFileItem,KFileItem>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::refreshItems)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::infoMessage)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::percent)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(KIO::filesize_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::totalSize)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(KIO::filesize_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::processedSize)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::speed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (KCoreDirLister::*)(KIO::Job * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreDirLister::jobError)) {
                *result = 22;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KCoreDirLister *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->autoUpdate(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->showingDotFiles(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showHiddenFiles(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->dirOnlyMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->delayedMimeTypes(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->requestMimeTypeWhileListing(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->nameFilter(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->mimeFilters(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->autoErrorHandlingEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KCoreDirLister *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoUpdate(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setShowingDotFiles(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setShowHiddenFiles(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setDirOnlyMode(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setDelayedMimeTypes(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setRequestMimeTypeWhileListing(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setNameFilter(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setMimeFilter(*reinterpret_cast< QStringList*>(_v)); break;
        case 8: _t->setAutoErrorHandlingEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        KCoreDirLister *_t = static_cast<KCoreDirLister *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 7: _t->clearMimeFilter(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KCoreDirLister::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KCoreDirLister.data,
    qt_meta_data_KCoreDirLister,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCoreDirLister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCoreDirLister::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCoreDirLister.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KCoreDirLister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KCoreDirLister::started(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KCoreDirLister::completed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KCoreDirLister::completed(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KCoreDirLister::listingDirCompleted(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KCoreDirLister::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KCoreDirLister::canceled(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KCoreDirLister::listingDirCanceled(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void KCoreDirLister::redirection(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void KCoreDirLister::redirection(const QUrl & _t1, const QUrl & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void KCoreDirLister::clear()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void KCoreDirLister::clear(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void KCoreDirLister::clearDir(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void KCoreDirLister::newItems(const KFileItemList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void KCoreDirLister::itemsAdded(const QUrl & _t1, const KFileItemList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void KCoreDirLister::itemsFilteredByMime(const KFileItemList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void KCoreDirLister::itemsDeleted(const KFileItemList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void KCoreDirLister::refreshItems(const QList<QPair<KFileItem,KFileItem>> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void KCoreDirLister::infoMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void KCoreDirLister::percent(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void KCoreDirLister::totalSize(KIO::filesize_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void KCoreDirLister::processedSize(KIO::filesize_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void KCoreDirLister::speed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void KCoreDirLister::jobError(KIO::Job * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
