/****************************************************************************
** Meta object code from reading C++ file 'kdiroperator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/filewidgets/kdiroperator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdiroperator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDirOperator_t {
    QByteArrayData data[60];
    char stringdata0[714];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDirOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDirOperator_t qt_meta_stringdata_KDirOperator = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KDirOperator"
QT_MOC_LITERAL(1, 13, 10), // "urlEntered"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 17), // "updateInformation"
QT_MOC_LITERAL(4, 43, 5), // "files"
QT_MOC_LITERAL(5, 49, 4), // "dirs"
QT_MOC_LITERAL(6, 54, 10), // "completion"
QT_MOC_LITERAL(7, 65, 15), // "finishedLoading"
QT_MOC_LITERAL(8, 81, 11), // "viewChanged"
QT_MOC_LITERAL(9, 93, 18), // "QAbstractItemView*"
QT_MOC_LITERAL(10, 112, 7), // "newView"
QT_MOC_LITERAL(11, 120, 15), // "fileHighlighted"
QT_MOC_LITERAL(12, 136, 9), // "KFileItem"
QT_MOC_LITERAL(13, 146, 4), // "item"
QT_MOC_LITERAL(14, 151, 12), // "dirActivated"
QT_MOC_LITERAL(15, 164, 12), // "fileSelected"
QT_MOC_LITERAL(16, 177, 7), // "dropped"
QT_MOC_LITERAL(17, 185, 11), // "QDropEvent*"
QT_MOC_LITERAL(18, 197, 5), // "event"
QT_MOC_LITERAL(19, 203, 11), // "QList<QUrl>"
QT_MOC_LITERAL(20, 215, 4), // "urls"
QT_MOC_LITERAL(21, 220, 22), // "contextMenuAboutToShow"
QT_MOC_LITERAL(22, 243, 6), // "QMenu*"
QT_MOC_LITERAL(23, 250, 4), // "menu"
QT_MOC_LITERAL(24, 255, 22), // "currentIconSizeChanged"
QT_MOC_LITERAL(25, 278, 4), // "size"
QT_MOC_LITERAL(26, 283, 21), // "keyEnterReturnPressed"
QT_MOC_LITERAL(27, 305, 16), // "renamingFinished"
QT_MOC_LITERAL(28, 322, 4), // "back"
QT_MOC_LITERAL(29, 327, 7), // "forward"
QT_MOC_LITERAL(30, 335, 4), // "home"
QT_MOC_LITERAL(31, 340, 4), // "cdUp"
QT_MOC_LITERAL(32, 345, 9), // "updateDir"
QT_MOC_LITERAL(33, 355, 9), // "rereadDir"
QT_MOC_LITERAL(34, 365, 5), // "mkdir"
QT_MOC_LITERAL(35, 371, 14), // "deleteSelected"
QT_MOC_LITERAL(36, 386, 31), // "updateSelectionDependentActions"
QT_MOC_LITERAL(37, 418, 14), // "makeCompletion"
QT_MOC_LITERAL(38, 433, 17), // "makeDirCompletion"
QT_MOC_LITERAL(39, 451, 14), // "renameSelected"
QT_MOC_LITERAL(40, 466, 13), // "trashSelected"
QT_MOC_LITERAL(41, 480, 12), // "setIconsZoom"
QT_MOC_LITERAL(42, 493, 5), // "value"
QT_MOC_LITERAL(43, 499, 11), // "setIconSize"
QT_MOC_LITERAL(44, 511, 19), // "setSupportedSchemes"
QT_MOC_LITERAL(45, 531, 7), // "schemes"
QT_MOC_LITERAL(46, 539, 11), // "resetCursor"
QT_MOC_LITERAL(47, 551, 11), // "pathChanged"
QT_MOC_LITERAL(48, 563, 9), // "selectDir"
QT_MOC_LITERAL(49, 573, 10), // "selectFile"
QT_MOC_LITERAL(50, 584, 13), // "highlightFile"
QT_MOC_LITERAL(51, 598, 10), // "sortByName"
QT_MOC_LITERAL(52, 609, 10), // "sortBySize"
QT_MOC_LITERAL(53, 620, 10), // "sortByDate"
QT_MOC_LITERAL(54, 631, 10), // "sortByType"
QT_MOC_LITERAL(55, 642, 12), // "sortReversed"
QT_MOC_LITERAL(56, 655, 15), // "toggleDirsFirst"
QT_MOC_LITERAL(57, 671, 16), // "toggleIgnoreCase"
QT_MOC_LITERAL(58, 688, 19), // "slotCompletionMatch"
QT_MOC_LITERAL(59, 708, 5) // "match"

    },
    "KDirOperator\0urlEntered\0\0updateInformation\0"
    "files\0dirs\0completion\0finishedLoading\0"
    "viewChanged\0QAbstractItemView*\0newView\0"
    "fileHighlighted\0KFileItem\0item\0"
    "dirActivated\0fileSelected\0dropped\0"
    "QDropEvent*\0event\0QList<QUrl>\0urls\0"
    "contextMenuAboutToShow\0QMenu*\0menu\0"
    "currentIconSizeChanged\0size\0"
    "keyEnterReturnPressed\0renamingFinished\0"
    "back\0forward\0home\0cdUp\0updateDir\0"
    "rereadDir\0mkdir\0deleteSelected\0"
    "updateSelectionDependentActions\0"
    "makeCompletion\0makeDirCompletion\0"
    "renameSelected\0trashSelected\0setIconsZoom\0"
    "value\0setIconSize\0setSupportedSchemes\0"
    "schemes\0resetCursor\0pathChanged\0"
    "selectDir\0selectFile\0highlightFile\0"
    "sortByName\0sortBySize\0sortByDate\0"
    "sortByType\0sortReversed\0toggleDirsFirst\0"
    "toggleIgnoreCase\0slotCompletionMatch\0"
    "match"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDirOperator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  224,    2, 0x06 /* Public */,
       3,    2,  227,    2, 0x06 /* Public */,
       6,    1,  232,    2, 0x06 /* Public */,
       7,    0,  235,    2, 0x06 /* Public */,
       8,    1,  236,    2, 0x06 /* Public */,
      11,    1,  239,    2, 0x06 /* Public */,
      14,    1,  242,    2, 0x06 /* Public */,
      15,    1,  245,    2, 0x06 /* Public */,
      16,    3,  248,    2, 0x06 /* Public */,
      21,    2,  255,    2, 0x06 /* Public */,
      24,    1,  260,    2, 0x06 /* Public */,
      26,    0,  263,    2, 0x06 /* Public */,
      27,    1,  264,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    0,  267,    2, 0x0a /* Public */,
      29,    0,  268,    2, 0x0a /* Public */,
      30,    0,  269,    2, 0x0a /* Public */,
      31,    0,  270,    2, 0x0a /* Public */,
      32,    0,  271,    2, 0x0a /* Public */,
      33,    0,  272,    2, 0x0a /* Public */,
      34,    0,  273,    2, 0x0a /* Public */,
      35,    0,  274,    2, 0x0a /* Public */,
      36,    0,  275,    2, 0x0a /* Public */,
      37,    1,  276,    2, 0x0a /* Public */,
      38,    1,  279,    2, 0x0a /* Public */,
      39,    0,  282,    2, 0x0a /* Public */,
      40,    0,  283,    2, 0x0a /* Public */,
      41,    1,  284,    2, 0x0a /* Public */,
      43,    1,  287,    2, 0x0a /* Public */,
      44,    1,  290,    2, 0x0a /* Public */,
      46,    0,  293,    2, 0x09 /* Protected */,
      47,    0,  294,    2, 0x09 /* Protected */,
      48,    1,  295,    2, 0x09 /* Protected */,
      49,    1,  298,    2, 0x09 /* Protected */,
      50,    1,  301,    2, 0x09 /* Protected */,
      51,    0,  304,    2, 0x09 /* Protected */,
      52,    0,  305,    2, 0x09 /* Protected */,
      53,    0,  306,    2, 0x09 /* Protected */,
      54,    0,  307,    2, 0x09 /* Protected */,
      55,    0,  308,    2, 0x09 /* Protected */,
      56,    0,  309,    2, 0x09 /* Protected */,
      57,    0,  310,    2, 0x09 /* Protected */,
      58,    1,  311,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 17, 0x80000000 | 19,   13,   18,   20,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 22,   13,   23,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    2,
    QMetaType::QString, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, QMetaType::QStringList,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   59,

       0        // eod
};

void KDirOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KDirOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->urlEntered((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->updateInformation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->completion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->finishedLoading(); break;
        case 4: _t->viewChanged((*reinterpret_cast< QAbstractItemView*(*)>(_a[1]))); break;
        case 5: _t->fileHighlighted((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 6: _t->dirActivated((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 7: _t->fileSelected((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 8: _t->dropped((*reinterpret_cast< const KFileItem(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[3]))); break;
        case 9: _t->contextMenuAboutToShow((*reinterpret_cast< const KFileItem(*)>(_a[1])),(*reinterpret_cast< QMenu*(*)>(_a[2]))); break;
        case 10: _t->currentIconSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->keyEnterReturnPressed(); break;
        case 12: _t->renamingFinished((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 13: _t->back(); break;
        case 14: _t->forward(); break;
        case 15: _t->home(); break;
        case 16: _t->cdUp(); break;
        case 17: _t->updateDir(); break;
        case 18: _t->rereadDir(); break;
        case 19: _t->mkdir(); break;
        case 20: _t->deleteSelected(); break;
        case 21: _t->updateSelectionDependentActions(); break;
        case 22: { QString _r = _t->makeCompletion((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 23: { QString _r = _t->makeDirCompletion((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->renameSelected(); break;
        case 25: _t->trashSelected(); break;
        case 26: _t->setIconsZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->setIconSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->setSupportedSchemes((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 29: _t->resetCursor(); break;
        case 30: _t->pathChanged(); break;
        case 31: _t->selectDir((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 32: _t->selectFile((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 33: _t->highlightFile((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 34: _t->sortByName(); break;
        case 35: _t->sortBySize(); break;
        case 36: _t->sortByDate(); break;
        case 37: _t->sortByType(); break;
        case 38: _t->sortReversed(); break;
        case 39: _t->toggleDirsFirst(); break;
        case 40: _t->toggleIgnoreCase(); break;
        case 41: _t->slotCompletionMatch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KDirOperator::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirOperator::urlEntered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KDirOperator::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirOperator::updateInformation)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KDirOperator::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirOperator::completion)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KDirOperator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirOperator::finishedLoading)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KDirOperator::*)(QAbstractItemView * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirOperator::viewChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KDirOperator::*)(const KFileItem & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirOperator::fileHighlighted)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KDirOperator::*)(const KFileItem & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirOperator::dirActivated)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (KDirOperator::*)(const KFileItem & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirOperator::fileSelected)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (KDirOperator::*)(const KFileItem & , QDropEvent * , const QList<QUrl> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirOperator::dropped)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (KDirOperator::*)(const KFileItem & , QMenu * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirOperator::contextMenuAboutToShow)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (KDirOperator::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirOperator::currentIconSizeChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (KDirOperator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirOperator::keyEnterReturnPressed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (KDirOperator::*)(const QList<QUrl> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirOperator::renamingFinished)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDirOperator::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KDirOperator.data,
    qt_meta_data_KDirOperator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDirOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDirOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDirOperator.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KDirOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void KDirOperator::urlEntered(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDirOperator::updateInformation(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KDirOperator::completion(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KDirOperator::finishedLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KDirOperator::viewChanged(QAbstractItemView * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KDirOperator::fileHighlighted(const KFileItem & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KDirOperator::dirActivated(const KFileItem & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void KDirOperator::fileSelected(const KFileItem & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void KDirOperator::dropped(const KFileItem & _t1, QDropEvent * _t2, const QList<QUrl> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void KDirOperator::contextMenuAboutToShow(const KFileItem & _t1, QMenu * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void KDirOperator::currentIconSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void KDirOperator::keyEnterReturnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void KDirOperator::renamingFinished(const QList<QUrl> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
