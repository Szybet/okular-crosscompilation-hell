/****************************************************************************
** Meta object code from reading C++ file 'document.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../core/document.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'document.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Okular__Document_t {
    QByteArrayData data[91];
    char stringdata0[1258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Okular__Document_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Okular__Document_t qt_meta_stringdata_Okular__Document = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Okular::Document"
QT_MOC_LITERAL(1, 17, 12), // "aboutToClose"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "close"
QT_MOC_LITERAL(4, 37, 12), // "requestPrint"
QT_MOC_LITERAL(5, 50, 13), // "requestSaveAs"
QT_MOC_LITERAL(6, 64, 4), // "quit"
QT_MOC_LITERAL(7, 69, 8), // "linkFind"
QT_MOC_LITERAL(8, 78, 12), // "linkGoToPage"
QT_MOC_LITERAL(9, 91, 16), // "linkPresentation"
QT_MOC_LITERAL(10, 108, 19), // "linkEndPresentation"
QT_MOC_LITERAL(11, 128, 7), // "openUrl"
QT_MOC_LITERAL(12, 136, 3), // "url"
QT_MOC_LITERAL(13, 140, 5), // "error"
QT_MOC_LITERAL(14, 146, 4), // "text"
QT_MOC_LITERAL(15, 151, 8), // "duration"
QT_MOC_LITERAL(16, 160, 7), // "warning"
QT_MOC_LITERAL(17, 168, 6), // "notice"
QT_MOC_LITERAL(18, 175, 7), // "gotFont"
QT_MOC_LITERAL(19, 183, 16), // "Okular::FontInfo"
QT_MOC_LITERAL(20, 200, 4), // "font"
QT_MOC_LITERAL(21, 205, 19), // "fontReadingProgress"
QT_MOC_LITERAL(22, 225, 4), // "page"
QT_MOC_LITERAL(23, 230, 16), // "fontReadingEnded"
QT_MOC_LITERAL(24, 247, 14), // "searchFinished"
QT_MOC_LITERAL(25, 262, 8), // "searchID"
QT_MOC_LITERAL(26, 271, 30), // "Okular::Document::SearchStatus"
QT_MOC_LITERAL(27, 302, 9), // "endStatus"
QT_MOC_LITERAL(28, 312, 24), // "sourceReferenceActivated"
QT_MOC_LITERAL(29, 337, 11), // "absFileName"
QT_MOC_LITERAL(30, 349, 4), // "line"
QT_MOC_LITERAL(31, 354, 3), // "col"
QT_MOC_LITERAL(32, 358, 5), // "bool*"
QT_MOC_LITERAL(33, 364, 7), // "handled"
QT_MOC_LITERAL(34, 372, 18), // "processMovieAction"
QT_MOC_LITERAL(35, 391, 26), // "const Okular::MovieAction*"
QT_MOC_LITERAL(36, 418, 6), // "action"
QT_MOC_LITERAL(37, 425, 14), // "canUndoChanged"
QT_MOC_LITERAL(38, 440, 13), // "undoAvailable"
QT_MOC_LITERAL(39, 454, 14), // "canRedoChanged"
QT_MOC_LITERAL(40, 469, 13), // "redoAvailable"
QT_MOC_LITERAL(41, 483, 23), // "undoHistoryCleanChanged"
QT_MOC_LITERAL(42, 507, 5), // "clean"
QT_MOC_LITERAL(43, 513, 22), // "processRenditionAction"
QT_MOC_LITERAL(44, 536, 30), // "const Okular::RenditionAction*"
QT_MOC_LITERAL(45, 567, 35), // "annotationContentsChangedByUn..."
QT_MOC_LITERAL(46, 603, 19), // "Okular::Annotation*"
QT_MOC_LITERAL(47, 623, 10), // "annotation"
QT_MOC_LITERAL(48, 634, 8), // "contents"
QT_MOC_LITERAL(49, 643, 9), // "cursorPos"
QT_MOC_LITERAL(50, 653, 9), // "anchorPos"
QT_MOC_LITERAL(51, 663, 25), // "formTextChangedByUndoRedo"
QT_MOC_LITERAL(52, 689, 22), // "Okular::FormFieldText*"
QT_MOC_LITERAL(53, 712, 4), // "form"
QT_MOC_LITERAL(54, 717, 25), // "formListChangedByUndoRedo"
QT_MOC_LITERAL(55, 743, 24), // "Okular::FormFieldChoice*"
QT_MOC_LITERAL(56, 768, 10), // "QList<int>"
QT_MOC_LITERAL(57, 779, 7), // "choices"
QT_MOC_LITERAL(58, 787, 26), // "formComboChangedByUndoRedo"
QT_MOC_LITERAL(59, 814, 28), // "formButtonsChangedByUndoRedo"
QT_MOC_LITERAL(60, 843, 31), // "QList<Okular::FormFieldButton*>"
QT_MOC_LITERAL(61, 875, 11), // "formButtons"
QT_MOC_LITERAL(62, 887, 17), // "refreshFormWidget"
QT_MOC_LITERAL(63, 905, 18), // "Okular::FormField*"
QT_MOC_LITERAL(64, 924, 5), // "field"
QT_MOC_LITERAL(65, 930, 11), // "setRotation"
QT_MOC_LITERAL(66, 942, 8), // "rotation"
QT_MOC_LITERAL(67, 951, 11), // "setPageSize"
QT_MOC_LITERAL(68, 963, 16), // "Okular::PageSize"
QT_MOC_LITERAL(69, 980, 4), // "size"
QT_MOC_LITERAL(70, 985, 12), // "cancelSearch"
QT_MOC_LITERAL(71, 998, 4), // "undo"
QT_MOC_LITERAL(72, 1003, 4), // "redo"
QT_MOC_LITERAL(73, 1008, 12), // "editFormText"
QT_MOC_LITERAL(74, 1021, 10), // "pageNumber"
QT_MOC_LITERAL(75, 1032, 11), // "newContents"
QT_MOC_LITERAL(76, 1044, 12), // "newCursorPos"
QT_MOC_LITERAL(77, 1057, 13), // "prevCursorPos"
QT_MOC_LITERAL(78, 1071, 13), // "prevAnchorPos"
QT_MOC_LITERAL(79, 1085, 12), // "editFormList"
QT_MOC_LITERAL(80, 1098, 10), // "newChoices"
QT_MOC_LITERAL(81, 1109, 13), // "editFormCombo"
QT_MOC_LITERAL(82, 1123, 7), // "newText"
QT_MOC_LITERAL(83, 1131, 15), // "editFormButtons"
QT_MOC_LITERAL(84, 1147, 11), // "QList<bool>"
QT_MOC_LITERAL(85, 1159, 15), // "newButtonStates"
QT_MOC_LITERAL(86, 1175, 14), // "reloadDocument"
QT_MOC_LITERAL(87, 1190, 25), // "requestSignedRevisionData"
QT_MOC_LITERAL(88, 1216, 21), // "Okular::SignatureInfo"
QT_MOC_LITERAL(89, 1238, 4), // "info"
QT_MOC_LITERAL(90, 1243, 14) // "refreshPixmaps"

    },
    "Okular::Document\0aboutToClose\0\0close\0"
    "requestPrint\0requestSaveAs\0quit\0"
    "linkFind\0linkGoToPage\0linkPresentation\0"
    "linkEndPresentation\0openUrl\0url\0error\0"
    "text\0duration\0warning\0notice\0gotFont\0"
    "Okular::FontInfo\0font\0fontReadingProgress\0"
    "page\0fontReadingEnded\0searchFinished\0"
    "searchID\0Okular::Document::SearchStatus\0"
    "endStatus\0sourceReferenceActivated\0"
    "absFileName\0line\0col\0bool*\0handled\0"
    "processMovieAction\0const Okular::MovieAction*\0"
    "action\0canUndoChanged\0undoAvailable\0"
    "canRedoChanged\0redoAvailable\0"
    "undoHistoryCleanChanged\0clean\0"
    "processRenditionAction\0"
    "const Okular::RenditionAction*\0"
    "annotationContentsChangedByUndoRedo\0"
    "Okular::Annotation*\0annotation\0contents\0"
    "cursorPos\0anchorPos\0formTextChangedByUndoRedo\0"
    "Okular::FormFieldText*\0form\0"
    "formListChangedByUndoRedo\0"
    "Okular::FormFieldChoice*\0QList<int>\0"
    "choices\0formComboChangedByUndoRedo\0"
    "formButtonsChangedByUndoRedo\0"
    "QList<Okular::FormFieldButton*>\0"
    "formButtons\0refreshFormWidget\0"
    "Okular::FormField*\0field\0setRotation\0"
    "rotation\0setPageSize\0Okular::PageSize\0"
    "size\0cancelSearch\0undo\0redo\0editFormText\0"
    "pageNumber\0newContents\0newCursorPos\0"
    "prevCursorPos\0prevAnchorPos\0editFormList\0"
    "newChoices\0editFormCombo\0newText\0"
    "editFormButtons\0QList<bool>\0newButtonStates\0"
    "reloadDocument\0requestSignedRevisionData\0"
    "Okular::SignatureInfo\0info\0refreshPixmaps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Okular__Document[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      29,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x06 /* Public */,
       3,    0,  220,    2, 0x06 /* Public */,
       4,    0,  221,    2, 0x06 /* Public */,
       5,    0,  222,    2, 0x06 /* Public */,
       6,    0,  223,    2, 0x06 /* Public */,
       7,    0,  224,    2, 0x06 /* Public */,
       8,    0,  225,    2, 0x06 /* Public */,
       9,    0,  226,    2, 0x06 /* Public */,
      10,    0,  227,    2, 0x06 /* Public */,
      11,    1,  228,    2, 0x06 /* Public */,
      13,    2,  231,    2, 0x06 /* Public */,
      16,    2,  236,    2, 0x06 /* Public */,
      17,    2,  241,    2, 0x06 /* Public */,
      18,    1,  246,    2, 0x06 /* Public */,
      21,    1,  249,    2, 0x06 /* Public */,
      23,    0,  252,    2, 0x06 /* Public */,
      24,    2,  253,    2, 0x06 /* Public */,
      28,    4,  258,    2, 0x06 /* Public */,
      34,    1,  267,    2, 0x06 /* Public */,
      37,    1,  270,    2, 0x06 /* Public */,
      39,    1,  273,    2, 0x06 /* Public */,
      41,    1,  276,    2, 0x06 /* Public */,
      43,    1,  279,    2, 0x06 /* Public */,
      45,    4,  282,    2, 0x06 /* Public */,
      51,    5,  291,    2, 0x06 /* Public */,
      54,    3,  302,    2, 0x06 /* Public */,
      58,    5,  309,    2, 0x06 /* Public */,
      59,    2,  320,    2, 0x06 /* Public */,
      62,    1,  325,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      65,    1,  328,    2, 0x0a /* Public */,
      67,    1,  331,    2, 0x0a /* Public */,
      70,    0,  334,    2, 0x0a /* Public */,
      71,    0,  335,    2, 0x0a /* Public */,
      72,    0,  336,    2, 0x0a /* Public */,
      73,    6,  337,    2, 0x0a /* Public */,
      79,    3,  350,    2, 0x0a /* Public */,
      81,    6,  357,    2, 0x0a /* Public */,
      83,    3,  370,    2, 0x0a /* Public */,
      86,    0,  377,    2, 0x0a /* Public */,
      87,    1,  378,    2, 0x0a /* Public */,
      90,    1,  381,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   14,   15,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, 0x80000000 | 32,   29,   30,   31,   33,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   42,
    QMetaType::Void, 0x80000000 | 44,   36,
    QMetaType::Void, 0x80000000 | 46, QMetaType::QString, QMetaType::Int, QMetaType::Int,   47,   48,   49,   50,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 52, QMetaType::QString, QMetaType::Int, QMetaType::Int,   22,   53,   48,   49,   50,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 55, 0x80000000 | 56,   22,   53,   57,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 55, QMetaType::QString, QMetaType::Int, QMetaType::Int,   22,   53,   14,   49,   50,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 60,   22,   61,
    QMetaType::Void, 0x80000000 | 63,   64,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void, 0x80000000 | 68,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 52, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,   74,   53,   75,   76,   77,   78,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 55, 0x80000000 | 56,   74,   53,   80,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 55, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,   74,   53,   82,   76,   77,   78,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 60, 0x80000000 | 84,   74,   61,   85,
    QMetaType::Void,
    QMetaType::QByteArray, 0x80000000 | 88,   89,
    QMetaType::Void, QMetaType::Int,   74,

       0        // eod
};

void Okular::Document::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Document *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToClose(); break;
        case 1: _t->close(); break;
        case 2: _t->requestPrint(); break;
        case 3: _t->requestSaveAs(); break;
        case 4: _t->quit(); break;
        case 5: _t->linkFind(); break;
        case 6: _t->linkGoToPage(); break;
        case 7: _t->linkPresentation(); break;
        case 8: _t->linkEndPresentation(); break;
        case 9: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 10: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->warning((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->notice((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->gotFont((*reinterpret_cast< const Okular::FontInfo(*)>(_a[1]))); break;
        case 14: _t->fontReadingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->fontReadingEnded(); break;
        case 16: _t->searchFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Okular::Document::SearchStatus(*)>(_a[2]))); break;
        case 17: _t->sourceReferenceActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool*(*)>(_a[4]))); break;
        case 18: _t->processMovieAction((*reinterpret_cast< const Okular::MovieAction*(*)>(_a[1]))); break;
        case 19: _t->canUndoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->canRedoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->undoHistoryCleanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->processRenditionAction((*reinterpret_cast< const Okular::RenditionAction*(*)>(_a[1]))); break;
        case 23: _t->annotationContentsChangedByUndoRedo((*reinterpret_cast< Okular::Annotation*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 24: _t->formTextChangedByUndoRedo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Okular::FormFieldText*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 25: _t->formListChangedByUndoRedo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Okular::FormFieldChoice*(*)>(_a[2])),(*reinterpret_cast< const QList<int>(*)>(_a[3]))); break;
        case 26: _t->formComboChangedByUndoRedo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Okular::FormFieldChoice*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 27: _t->formButtonsChangedByUndoRedo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<Okular::FormFieldButton*>(*)>(_a[2]))); break;
        case 28: _t->refreshFormWidget((*reinterpret_cast< Okular::FormField*(*)>(_a[1]))); break;
        case 29: _t->setRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->setPageSize((*reinterpret_cast< const Okular::PageSize(*)>(_a[1]))); break;
        case 31: _t->cancelSearch(); break;
        case 32: _t->undo(); break;
        case 33: _t->redo(); break;
        case 34: _t->editFormText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Okular::FormFieldText*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 35: _t->editFormList((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Okular::FormFieldChoice*(*)>(_a[2])),(*reinterpret_cast< const QList<int>(*)>(_a[3]))); break;
        case 36: _t->editFormCombo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Okular::FormFieldChoice*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 37: _t->editFormButtons((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<Okular::FormFieldButton*>(*)>(_a[2])),(*reinterpret_cast< const QList<bool>(*)>(_a[3]))); break;
        case 38: _t->reloadDocument(); break;
        case 39: { QByteArray _r = _t->requestSignedRevisionData((*reinterpret_cast< const Okular::SignatureInfo(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->refreshPixmaps((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<bool> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Document::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::aboutToClose)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Document::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::close)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Document::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::requestPrint)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Document::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::requestSaveAs)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Document::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::quit)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Document::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::linkFind)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Document::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::linkGoToPage)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Document::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::linkPresentation)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Document::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::linkEndPresentation)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Document::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::openUrl)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Document::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::error)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Document::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::warning)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Document::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::notice)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Document::*)(const Okular::FontInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::gotFont)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Document::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::fontReadingProgress)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Document::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::fontReadingEnded)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Document::*)(int , Okular::Document::SearchStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::searchFinished)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Document::*)(const QString & , int , int , bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::sourceReferenceActivated)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Document::*)(const Okular::MovieAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::processMovieAction)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Document::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::canUndoChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Document::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::canRedoChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Document::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::undoHistoryCleanChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Document::*)(const Okular::RenditionAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::processRenditionAction)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Document::*)(Okular::Annotation * , const QString & , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::annotationContentsChangedByUndoRedo)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Document::*)(int , Okular::FormFieldText * , const QString & , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::formTextChangedByUndoRedo)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Document::*)(int , Okular::FormFieldChoice * , const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::formListChangedByUndoRedo)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Document::*)(int , Okular::FormFieldChoice * , const QString & , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::formComboChangedByUndoRedo)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Document::*)(int , const QList<Okular::FormFieldButton*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::formButtonsChangedByUndoRedo)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Document::*)(Okular::FormField * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Document::refreshFormWidget)) {
                *result = 28;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Okular::Document::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Okular__Document.data,
    qt_meta_data_Okular__Document,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Okular::Document::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Okular::Document::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Okular__Document.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Okular::Document::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void Okular::Document::aboutToClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Okular::Document::close()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Okular::Document::requestPrint()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Okular::Document::requestSaveAs()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Okular::Document::quit()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Okular::Document::linkFind()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Okular::Document::linkGoToPage()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Okular::Document::linkPresentation()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Okular::Document::linkEndPresentation()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Okular::Document::openUrl(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Okular::Document::error(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Okular::Document::warning(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Okular::Document::notice(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Okular::Document::gotFont(const Okular::FontInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Okular::Document::fontReadingProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Okular::Document::fontReadingEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Okular::Document::searchFinished(int _t1, Okular::Document::SearchStatus _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Okular::Document::sourceReferenceActivated(const QString & _t1, int _t2, int _t3, bool * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Okular::Document::processMovieAction(const Okular::MovieAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Okular::Document::canUndoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Okular::Document::canRedoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Okular::Document::undoHistoryCleanChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Okular::Document::processRenditionAction(const Okular::RenditionAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Okular::Document::annotationContentsChangedByUndoRedo(Okular::Annotation * _t1, const QString & _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Okular::Document::formTextChangedByUndoRedo(int _t1, Okular::FormFieldText * _t2, const QString & _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Okular::Document::formListChangedByUndoRedo(int _t1, Okular::FormFieldChoice * _t2, const QList<int> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Okular::Document::formComboChangedByUndoRedo(int _t1, Okular::FormFieldChoice * _t2, const QString & _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Okular::Document::formButtonsChangedByUndoRedo(int _t1, const QList<Okular::FormFieldButton*> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Okular::Document::refreshFormWidget(Okular::FormField * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
