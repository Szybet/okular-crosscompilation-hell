/****************************************************************************
** Meta object code from reading C++ file 'ktextedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/ktextwidgets/src/widgets/ktextedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ktextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KTextEdit_t {
    QByteArrayData data[34];
    char stringdata0[518];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KTextEdit_t qt_meta_stringdata_KTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 9), // "KTextEdit"
QT_MOC_LITERAL(1, 10, 20), // "checkSpellingChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "spellCheckStatus"
QT_MOC_LITERAL(4, 49, 15), // "languageChanged"
QT_MOC_LITERAL(5, 65, 8), // "language"
QT_MOC_LITERAL(6, 74, 22), // "aboutToShowContextMenu"
QT_MOC_LITERAL(7, 97, 6), // "QMenu*"
QT_MOC_LITERAL(8, 104, 4), // "menu"
QT_MOC_LITERAL(9, 109, 23), // "spellCheckerAutoCorrect"
QT_MOC_LITERAL(10, 133, 11), // "currentWord"
QT_MOC_LITERAL(11, 145, 15), // "autoCorrectWord"
QT_MOC_LITERAL(12, 161, 21), // "spellCheckingFinished"
QT_MOC_LITERAL(13, 183, 21), // "spellCheckingCanceled"
QT_MOC_LITERAL(14, 205, 24), // "setSpellCheckingLanguage"
QT_MOC_LITERAL(15, 230, 13), // "checkSpelling"
QT_MOC_LITERAL(16, 244, 21), // "showSpellConfigDialog"
QT_MOC_LITERAL(17, 266, 10), // "windowIcon"
QT_MOC_LITERAL(18, 277, 7), // "replace"
QT_MOC_LITERAL(19, 285, 16), // "addTextDecorator"
QT_MOC_LITERAL(20, 302, 28), // "Sonnet::SpellCheckDecorator*"
QT_MOC_LITERAL(21, 331, 9), // "decorator"
QT_MOC_LITERAL(22, 341, 14), // "clearDecorator"
QT_MOC_LITERAL(23, 356, 13), // "slotDoReplace"
QT_MOC_LITERAL(24, 370, 15), // "slotReplaceNext"
QT_MOC_LITERAL(25, 386, 10), // "slotDoFind"
QT_MOC_LITERAL(26, 397, 8), // "slotFind"
QT_MOC_LITERAL(27, 406, 12), // "slotFindNext"
QT_MOC_LITERAL(28, 419, 16), // "slotFindPrevious"
QT_MOC_LITERAL(29, 436, 11), // "slotReplace"
QT_MOC_LITERAL(30, 448, 13), // "slotSpeakText"
QT_MOC_LITERAL(31, 462, 12), // "clickMessage"
QT_MOC_LITERAL(32, 475, 20), // "checkSpellingEnabled"
QT_MOC_LITERAL(33, 496, 21) // "spellCheckingLanguage"

    },
    "KTextEdit\0checkSpellingChanged\0\0"
    "spellCheckStatus\0languageChanged\0"
    "language\0aboutToShowContextMenu\0QMenu*\0"
    "menu\0spellCheckerAutoCorrect\0currentWord\0"
    "autoCorrectWord\0spellCheckingFinished\0"
    "spellCheckingCanceled\0setSpellCheckingLanguage\0"
    "checkSpelling\0showSpellConfigDialog\0"
    "windowIcon\0replace\0addTextDecorator\0"
    "Sonnet::SpellCheckDecorator*\0decorator\0"
    "clearDecorator\0slotDoReplace\0"
    "slotReplaceNext\0slotDoFind\0slotFind\0"
    "slotFindNext\0slotFindPrevious\0slotReplace\0"
    "slotSpeakText\0clickMessage\0"
    "checkSpellingEnabled\0spellCheckingLanguage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KTextEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       3,  164, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       3,    1,  127,    2, 0x06 /* Public */,
       4,    1,  130,    2, 0x06 /* Public */,
       6,    1,  133,    2, 0x06 /* Public */,
       9,    2,  136,    2, 0x06 /* Public */,
      12,    0,  141,    2, 0x06 /* Public */,
      13,    0,  142,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,  143,    2, 0x0a /* Public */,
      15,    0,  146,    2, 0x0a /* Public */,
      16,    1,  147,    2, 0x0a /* Public */,
      16,    0,  150,    2, 0x2a /* Public | MethodCloned */,
      18,    0,  151,    2, 0x0a /* Public */,
      19,    1,  152,    2, 0x0a /* Public */,
      22,    0,  155,    2, 0x0a /* Public */,
      23,    0,  156,    2, 0x09 /* Protected */,
      24,    0,  157,    2, 0x09 /* Protected */,
      25,    0,  158,    2, 0x09 /* Protected */,
      26,    0,  159,    2, 0x09 /* Protected */,
      27,    0,  160,    2, 0x09 /* Protected */,
      28,    0,  161,    2, 0x09 /* Protected */,
      29,    0,  162,    2, 0x09 /* Protected */,
      30,    0,  163,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      31, QMetaType::QString, 0x00095103,
      32, QMetaType::Bool, 0x00095103,
      33, QMetaType::QString, 0x00095103,

       0        // eod
};

void KTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkSpellingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->spellCheckStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->languageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->aboutToShowContextMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 4: _t->spellCheckerAutoCorrect((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->spellCheckingFinished(); break;
        case 6: _t->spellCheckingCanceled(); break;
        case 7: _t->setSpellCheckingLanguage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->checkSpelling(); break;
        case 9: _t->showSpellConfigDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->showSpellConfigDialog(); break;
        case 11: _t->replace(); break;
        case 12: _t->addTextDecorator((*reinterpret_cast< Sonnet::SpellCheckDecorator*(*)>(_a[1]))); break;
        case 13: _t->clearDecorator(); break;
        case 14: _t->slotDoReplace(); break;
        case 15: _t->slotReplaceNext(); break;
        case 16: _t->slotDoFind(); break;
        case 17: _t->slotFind(); break;
        case 18: _t->slotFindNext(); break;
        case 19: _t->slotFindPrevious(); break;
        case 20: _t->slotReplace(); break;
        case 21: _t->slotSpeakText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KTextEdit::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTextEdit::checkSpellingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KTextEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTextEdit::spellCheckStatus)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KTextEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTextEdit::languageChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KTextEdit::*)(QMenu * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTextEdit::aboutToShowContextMenu)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KTextEdit::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTextEdit::spellCheckerAutoCorrect)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KTextEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTextEdit::spellCheckingFinished)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KTextEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KTextEdit::spellCheckingCanceled)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KTextEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->clickMessage(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->checkSpellingEnabled(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->spellCheckingLanguage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KTextEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setClickMessage(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCheckSpellingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setSpellCheckingLanguage(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextEdit::staticMetaObject>(),
    qt_meta_stringdata_KTextEdit.data,
    qt_meta_data_KTextEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KTextEdit.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int KTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KTextEdit::checkSpellingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KTextEdit::spellCheckStatus(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KTextEdit::languageChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KTextEdit::aboutToShowContextMenu(QMenu * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KTextEdit::spellCheckerAutoCorrect(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KTextEdit::spellCheckingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KTextEdit::spellCheckingCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
