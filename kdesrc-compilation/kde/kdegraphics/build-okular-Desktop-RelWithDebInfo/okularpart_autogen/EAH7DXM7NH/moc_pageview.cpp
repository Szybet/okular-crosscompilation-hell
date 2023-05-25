/****************************************************************************
** Meta object code from reading C++ file 'pageview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/part/pageview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PageView_t {
    QByteArrayData data[84];
    char stringdata0[1445];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageView_t qt_meta_stringdata_PageView = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PageView"
QT_MOC_LITERAL(1, 9, 10), // "rightClick"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 19), // "const Okular::Page*"
QT_MOC_LITERAL(4, 41, 20), // "mouseBackButtonClick"
QT_MOC_LITERAL(5, 62, 23), // "mouseForwardButtonClick"
QT_MOC_LITERAL(6, 86, 10), // "escPressed"
QT_MOC_LITERAL(7, 97, 15), // "fitWindowToPage"
QT_MOC_LITERAL(8, 113, 16), // "pageViewPortSize"
QT_MOC_LITERAL(9, 130, 8), // "pageSize"
QT_MOC_LITERAL(10, 139, 13), // "triggerSearch"
QT_MOC_LITERAL(11, 153, 4), // "text"
QT_MOC_LITERAL(12, 158, 15), // "requestOpenFile"
QT_MOC_LITERAL(13, 174, 8), // "filePath"
QT_MOC_LITERAL(14, 183, 10), // "pageNumber"
QT_MOC_LITERAL(15, 194, 17), // "copyTextSelection"
QT_MOC_LITERAL(16, 212, 9), // "selectAll"
QT_MOC_LITERAL(17, 222, 20), // "openAnnotationWindow"
QT_MOC_LITERAL(18, 243, 19), // "Okular::Annotation*"
QT_MOC_LITERAL(19, 263, 10), // "annotation"
QT_MOC_LITERAL(20, 274, 11), // "reloadForms"
QT_MOC_LITERAL(21, 286, 14), // "slotSelectPage"
QT_MOC_LITERAL(22, 301, 10), // "slotAction"
QT_MOC_LITERAL(23, 312, 15), // "Okular::Action*"
QT_MOC_LITERAL(24, 328, 6), // "action"
QT_MOC_LITERAL(25, 335, 15), // "slotFormChanged"
QT_MOC_LITERAL(26, 351, 21), // "externalKeyPressEvent"
QT_MOC_LITERAL(27, 373, 10), // "QKeyEvent*"
QT_MOC_LITERAL(28, 384, 1), // "e"
QT_MOC_LITERAL(29, 386, 29), // "slotRealNotifyViewportChanged"
QT_MOC_LITERAL(30, 416, 10), // "smoothMove"
QT_MOC_LITERAL(31, 427, 17), // "slotRelayoutPages"
QT_MOC_LITERAL(32, 445, 18), // "delayedResizeEvent"
QT_MOC_LITERAL(33, 464, 25), // "slotRequestVisiblePixmaps"
QT_MOC_LITERAL(34, 490, 8), // "newValue"
QT_MOC_LITERAL(35, 499, 14), // "slotAutoScroll"
QT_MOC_LITERAL(36, 514, 14), // "slotDragScroll"
QT_MOC_LITERAL(37, 529, 15), // "slotShowWelcome"
QT_MOC_LITERAL(38, 545, 21), // "slotShowSizeAllCursor"
QT_MOC_LITERAL(39, 567, 27), // "slotHandleWebShortcutAction"
QT_MOC_LITERAL(40, 595, 25), // "slotConfigureWebShortcuts"
QT_MOC_LITERAL(41, 621, 8), // "slotZoom"
QT_MOC_LITERAL(42, 630, 10), // "slotZoomIn"
QT_MOC_LITERAL(43, 641, 11), // "slotZoomOut"
QT_MOC_LITERAL(44, 653, 14), // "slotZoomActual"
QT_MOC_LITERAL(45, 668, 21), // "slotFitToWidthToggled"
QT_MOC_LITERAL(46, 690, 20), // "slotFitToPageToggled"
QT_MOC_LITERAL(47, 711, 18), // "slotAutoFitToggled"
QT_MOC_LITERAL(48, 730, 12), // "slotViewMode"
QT_MOC_LITERAL(49, 743, 8), // "QAction*"
QT_MOC_LITERAL(50, 752, 21), // "slotContinuousToggled"
QT_MOC_LITERAL(51, 774, 27), // "slotReadingDirectionToggled"
QT_MOC_LITERAL(52, 802, 11), // "leftToRight"
QT_MOC_LITERAL(53, 814, 32), // "slotUpdateReadingDirectionAction"
QT_MOC_LITERAL(54, 847, 18), // "slotSetMouseNormal"
QT_MOC_LITERAL(55, 866, 16), // "slotSetMouseZoom"
QT_MOC_LITERAL(56, 883, 21), // "slotSetMouseMagnifier"
QT_MOC_LITERAL(57, 905, 18), // "slotSetMouseSelect"
QT_MOC_LITERAL(58, 924, 22), // "slotSetMouseTextSelect"
QT_MOC_LITERAL(59, 947, 23), // "slotSetMouseTableSelect"
QT_MOC_LITERAL(60, 971, 13), // "slotSignature"
QT_MOC_LITERAL(61, 985, 16), // "slotAutoScrollUp"
QT_MOC_LITERAL(62, 1002, 18), // "slotAutoScrollDown"
QT_MOC_LITERAL(63, 1021, 12), // "slotScrollUp"
QT_MOC_LITERAL(64, 1034, 6), // "nSteps"
QT_MOC_LITERAL(65, 1041, 14), // "slotScrollDown"
QT_MOC_LITERAL(66, 1056, 19), // "slotRotateClockwise"
QT_MOC_LITERAL(67, 1076, 26), // "slotRotateCounterClockwise"
QT_MOC_LITERAL(68, 1103, 18), // "slotRotateOriginal"
QT_MOC_LITERAL(69, 1122, 22), // "slotTrimMarginsToggled"
QT_MOC_LITERAL(70, 1145, 26), // "slotTrimToSelectionToggled"
QT_MOC_LITERAL(71, 1172, 15), // "slotToggleForms"
QT_MOC_LITERAL(72, 1188, 15), // "slotRefreshPage"
QT_MOC_LITERAL(73, 1204, 17), // "slotSpeakDocument"
QT_MOC_LITERAL(74, 1222, 20), // "slotSpeakCurrentPage"
QT_MOC_LITERAL(75, 1243, 14), // "slotStopSpeaks"
QT_MOC_LITERAL(76, 1258, 21), // "slotPauseResumeSpeech"
QT_MOC_LITERAL(77, 1280, 29), // "slotAnnotationWindowDestroyed"
QT_MOC_LITERAL(78, 1310, 6), // "window"
QT_MOC_LITERAL(79, 1317, 22), // "slotProcessMovieAction"
QT_MOC_LITERAL(80, 1340, 26), // "const Okular::MovieAction*"
QT_MOC_LITERAL(81, 1367, 26), // "slotProcessRenditionAction"
QT_MOC_LITERAL(82, 1394, 30), // "const Okular::RenditionAction*"
QT_MOC_LITERAL(83, 1425, 19) // "slotFitWindowToPage"

    },
    "PageView\0rightClick\0\0const Okular::Page*\0"
    "mouseBackButtonClick\0mouseForwardButtonClick\0"
    "escPressed\0fitWindowToPage\0pageViewPortSize\0"
    "pageSize\0triggerSearch\0text\0requestOpenFile\0"
    "filePath\0pageNumber\0copyTextSelection\0"
    "selectAll\0openAnnotationWindow\0"
    "Okular::Annotation*\0annotation\0"
    "reloadForms\0slotSelectPage\0slotAction\0"
    "Okular::Action*\0action\0slotFormChanged\0"
    "externalKeyPressEvent\0QKeyEvent*\0e\0"
    "slotRealNotifyViewportChanged\0smoothMove\0"
    "slotRelayoutPages\0delayedResizeEvent\0"
    "slotRequestVisiblePixmaps\0newValue\0"
    "slotAutoScroll\0slotDragScroll\0"
    "slotShowWelcome\0slotShowSizeAllCursor\0"
    "slotHandleWebShortcutAction\0"
    "slotConfigureWebShortcuts\0slotZoom\0"
    "slotZoomIn\0slotZoomOut\0slotZoomActual\0"
    "slotFitToWidthToggled\0slotFitToPageToggled\0"
    "slotAutoFitToggled\0slotViewMode\0"
    "QAction*\0slotContinuousToggled\0"
    "slotReadingDirectionToggled\0leftToRight\0"
    "slotUpdateReadingDirectionAction\0"
    "slotSetMouseNormal\0slotSetMouseZoom\0"
    "slotSetMouseMagnifier\0slotSetMouseSelect\0"
    "slotSetMouseTextSelect\0slotSetMouseTableSelect\0"
    "slotSignature\0slotAutoScrollUp\0"
    "slotAutoScrollDown\0slotScrollUp\0nSteps\0"
    "slotScrollDown\0slotRotateClockwise\0"
    "slotRotateCounterClockwise\0"
    "slotRotateOriginal\0slotTrimMarginsToggled\0"
    "slotTrimToSelectionToggled\0slotToggleForms\0"
    "slotRefreshPage\0slotSpeakDocument\0"
    "slotSpeakCurrentPage\0slotStopSpeaks\0"
    "slotPauseResumeSpeech\0"
    "slotAnnotationWindowDestroyed\0window\0"
    "slotProcessMovieAction\0"
    "const Okular::MovieAction*\0"
    "slotProcessRenditionAction\0"
    "const Okular::RenditionAction*\0"
    "slotFitWindowToPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      65,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  339,    2, 0x06 /* Public */,
       4,    0,  344,    2, 0x06 /* Public */,
       5,    0,  345,    2, 0x06 /* Public */,
       6,    0,  346,    2, 0x06 /* Public */,
       7,    2,  347,    2, 0x06 /* Public */,
      10,    1,  352,    2, 0x06 /* Public */,
      12,    2,  355,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  360,    2, 0x0a /* Public */,
      16,    0,  361,    2, 0x0a /* Public */,
      17,    2,  362,    2, 0x0a /* Public */,
      20,    0,  367,    2, 0x0a /* Public */,
      21,    0,  368,    2, 0x0a /* Public */,
      22,    1,  369,    2, 0x0a /* Public */,
      25,    1,  372,    2, 0x0a /* Public */,
      26,    1,  375,    2, 0x0a /* Public */,
      29,    1,  378,    2, 0x08 /* Private */,
      31,    0,  381,    2, 0x08 /* Private */,
      32,    0,  382,    2, 0x08 /* Private */,
      33,    1,  383,    2, 0x08 /* Private */,
      33,    0,  386,    2, 0x28 /* Private | MethodCloned */,
      35,    0,  387,    2, 0x08 /* Private */,
      36,    0,  388,    2, 0x08 /* Private */,
      37,    0,  389,    2, 0x08 /* Private */,
      38,    0,  390,    2, 0x08 /* Private */,
      39,    0,  391,    2, 0x08 /* Private */,
      40,    0,  392,    2, 0x08 /* Private */,
      41,    0,  393,    2, 0x08 /* Private */,
      42,    0,  394,    2, 0x08 /* Private */,
      43,    0,  395,    2, 0x08 /* Private */,
      44,    0,  396,    2, 0x08 /* Private */,
      45,    1,  397,    2, 0x08 /* Private */,
      46,    1,  400,    2, 0x08 /* Private */,
      47,    1,  403,    2, 0x08 /* Private */,
      48,    1,  406,    2, 0x08 /* Private */,
      50,    0,  409,    2, 0x08 /* Private */,
      51,    1,  410,    2, 0x08 /* Private */,
      53,    0,  413,    2, 0x08 /* Private */,
      54,    0,  414,    2, 0x08 /* Private */,
      55,    0,  415,    2, 0x08 /* Private */,
      56,    0,  416,    2, 0x08 /* Private */,
      57,    0,  417,    2, 0x08 /* Private */,
      58,    0,  418,    2, 0x08 /* Private */,
      59,    0,  419,    2, 0x08 /* Private */,
      60,    0,  420,    2, 0x08 /* Private */,
      61,    0,  421,    2, 0x08 /* Private */,
      62,    0,  422,    2, 0x08 /* Private */,
      63,    1,  423,    2, 0x08 /* Private */,
      63,    0,  426,    2, 0x28 /* Private | MethodCloned */,
      65,    1,  427,    2, 0x08 /* Private */,
      65,    0,  430,    2, 0x28 /* Private | MethodCloned */,
      66,    0,  431,    2, 0x08 /* Private */,
      67,    0,  432,    2, 0x08 /* Private */,
      68,    0,  433,    2, 0x08 /* Private */,
      69,    1,  434,    2, 0x08 /* Private */,
      70,    1,  437,    2, 0x08 /* Private */,
      71,    0,  440,    2, 0x08 /* Private */,
      72,    0,  441,    2, 0x08 /* Private */,
      73,    0,  442,    2, 0x08 /* Private */,
      74,    0,  443,    2, 0x08 /* Private */,
      75,    0,  444,    2, 0x08 /* Private */,
      76,    0,  445,    2, 0x08 /* Private */,
      77,    1,  446,    2, 0x08 /* Private */,
      79,    1,  449,    2, 0x08 /* Private */,
      81,    1,  452,    2, 0x08 /* Private */,
      83,    0,  455,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPoint,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize, QMetaType::QSize,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   13,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Int,   19,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 49,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   78,
    QMetaType::Void, 0x80000000 | 80,   24,
    QMetaType::Void, 0x80000000 | 82,   24,
    QMetaType::Void,

       0        // eod
};

void PageView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PageView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rightClick((*reinterpret_cast< const Okular::Page*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 1: _t->mouseBackButtonClick(); break;
        case 2: _t->mouseForwardButtonClick(); break;
        case 3: _t->escPressed(); break;
        case 4: _t->fitWindowToPage((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 5: _t->triggerSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->requestOpenFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->copyTextSelection(); break;
        case 8: _t->selectAll(); break;
        case 9: _t->openAnnotationWindow((*reinterpret_cast< Okular::Annotation*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->reloadForms(); break;
        case 11: _t->slotSelectPage(); break;
        case 12: _t->slotAction((*reinterpret_cast< Okular::Action*(*)>(_a[1]))); break;
        case 13: _t->slotFormChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->externalKeyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 15: _t->slotRealNotifyViewportChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->slotRelayoutPages(); break;
        case 17: _t->delayedResizeEvent(); break;
        case 18: _t->slotRequestVisiblePixmaps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->slotRequestVisiblePixmaps(); break;
        case 20: _t->slotAutoScroll(); break;
        case 21: _t->slotDragScroll(); break;
        case 22: _t->slotShowWelcome(); break;
        case 23: _t->slotShowSizeAllCursor(); break;
        case 24: _t->slotHandleWebShortcutAction(); break;
        case 25: _t->slotConfigureWebShortcuts(); break;
        case 26: _t->slotZoom(); break;
        case 27: _t->slotZoomIn(); break;
        case 28: _t->slotZoomOut(); break;
        case 29: _t->slotZoomActual(); break;
        case 30: _t->slotFitToWidthToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->slotFitToPageToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->slotAutoFitToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->slotViewMode((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 34: _t->slotContinuousToggled(); break;
        case 35: _t->slotReadingDirectionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->slotUpdateReadingDirectionAction(); break;
        case 37: _t->slotSetMouseNormal(); break;
        case 38: _t->slotSetMouseZoom(); break;
        case 39: _t->slotSetMouseMagnifier(); break;
        case 40: _t->slotSetMouseSelect(); break;
        case 41: _t->slotSetMouseTextSelect(); break;
        case 42: _t->slotSetMouseTableSelect(); break;
        case 43: _t->slotSignature(); break;
        case 44: _t->slotAutoScrollUp(); break;
        case 45: _t->slotAutoScrollDown(); break;
        case 46: _t->slotScrollUp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->slotScrollUp(); break;
        case 48: _t->slotScrollDown((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->slotScrollDown(); break;
        case 50: _t->slotRotateClockwise(); break;
        case 51: _t->slotRotateCounterClockwise(); break;
        case 52: _t->slotRotateOriginal(); break;
        case 53: _t->slotTrimMarginsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->slotTrimToSelectionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->slotToggleForms(); break;
        case 56: _t->slotRefreshPage(); break;
        case 57: _t->slotSpeakDocument(); break;
        case 58: _t->slotSpeakCurrentPage(); break;
        case 59: _t->slotStopSpeaks(); break;
        case 60: _t->slotPauseResumeSpeech(); break;
        case 61: _t->slotAnnotationWindowDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 62: _t->slotProcessMovieAction((*reinterpret_cast< const Okular::MovieAction*(*)>(_a[1]))); break;
        case 63: _t->slotProcessRenditionAction((*reinterpret_cast< const Okular::RenditionAction*(*)>(_a[1]))); break;
        case 64: _t->slotFitWindowToPage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PageView::*)(const Okular::Page * , const QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageView::rightClick)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PageView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageView::mouseBackButtonClick)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PageView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageView::mouseForwardButtonClick)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PageView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageView::escPressed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PageView::*)(const QSize , const QSize );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageView::fitWindowToPage)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PageView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageView::triggerSearch)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PageView::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageView::requestOpenFile)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PageView::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_meta_stringdata_PageView.data,
    qt_meta_data_PageView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PageView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Okular::DocumentObserver"))
        return static_cast< Okular::DocumentObserver*>(this);
    if (!strcmp(_clname, "Okular::View"))
        return static_cast< Okular::View*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int PageView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 65)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 65;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 65)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 65;
    }
    return _id;
}

// SIGNAL 0
void PageView::rightClick(const Okular::Page * _t1, const QPoint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PageView::mouseBackButtonClick()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PageView::mouseForwardButtonClick()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PageView::escPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PageView::fitWindowToPage(const QSize _t1, const QSize _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PageView::triggerSearch(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PageView::requestOpenFile(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
