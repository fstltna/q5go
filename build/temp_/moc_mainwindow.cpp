/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[65];
    char stringdata0[1084];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "signal_sendcomment"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "signal_closeevent"
QT_MOC_LITERAL(4, 49, 9), // "slotFocus"
QT_MOC_LITERAL(5, 59, 16), // "slotFileNewBoard"
QT_MOC_LITERAL(6, 76, 15), // "slotFileNewGame"
QT_MOC_LITERAL(7, 92, 22), // "slotFileNewVariantGame"
QT_MOC_LITERAL(8, 115, 12), // "slotFileOpen"
QT_MOC_LITERAL(9, 128, 14), // "slotFileOpenDB"
QT_MOC_LITERAL(10, 143, 12), // "slotFileSave"
QT_MOC_LITERAL(11, 156, 13), // "slotFileClose"
QT_MOC_LITERAL(12, 170, 14), // "slotFileSaveAs"
QT_MOC_LITERAL(13, 185, 22), // "slotFileSaveVariations"
QT_MOC_LITERAL(14, 208, 19), // "slotFileExportASCII"
QT_MOC_LITERAL(15, 228, 17), // "slotFileExportSVG"
QT_MOC_LITERAL(16, 246, 22), // "slotFileImportSgfClipB"
QT_MOC_LITERAL(17, 269, 22), // "slotFileExportSgfClipB"
QT_MOC_LITERAL(18, 292, 17), // "slotFileExportPic"
QT_MOC_LITERAL(19, 310, 22), // "slotFileExportPicClipB"
QT_MOC_LITERAL(20, 333, 15), // "slotEditCopyPos"
QT_MOC_LITERAL(21, 349, 16), // "slotEditPastePos"
QT_MOC_LITERAL(22, 366, 14), // "slotEditDelete"
QT_MOC_LITERAL(23, 381, 14), // "slotEditFigure"
QT_MOC_LITERAL(24, 396, 19), // "slotNavIntersection"
QT_MOC_LITERAL(25, 416, 14), // "slotNavNthMove"
QT_MOC_LITERAL(26, 431, 21), // "slotNavSwapVariations"
QT_MOC_LITERAL(27, 453, 15), // "slotNavAutoplay"
QT_MOC_LITERAL(28, 469, 17), // "autoSliderChanged"
QT_MOC_LITERAL(29, 487, 15), // "slotSetGameInfo"
QT_MOC_LITERAL(30, 503, 15), // "slotViewMenuBar"
QT_MOC_LITERAL(31, 519, 6), // "toggle"
QT_MOC_LITERAL(32, 526, 17), // "slotViewStatusBar"
QT_MOC_LITERAL(33, 544, 14), // "slotViewCoords"
QT_MOC_LITERAL(34, 559, 14), // "slotViewSlider"
QT_MOC_LITERAL(35, 574, 19), // "slotViewLeftSidebar"
QT_MOC_LITERAL(36, 594, 15), // "slotViewSidebar"
QT_MOC_LITERAL(37, 610, 18), // "slotViewFullscreen"
QT_MOC_LITERAL(38, 629, 19), // "slotViewMoveNumbers"
QT_MOC_LITERAL(39, 649, 20), // "slotViewDiagComments"
QT_MOC_LITERAL(40, 670, 19), // "slotViewConnections"
QT_MOC_LITERAL(41, 690, 16), // "slotTimerForward"
QT_MOC_LITERAL(42, 707, 17), // "slotAutoplayTimer"
QT_MOC_LITERAL(43, 725, 15), // "slotSoundToggle"
QT_MOC_LITERAL(44, 741, 17), // "slotUpdateComment"
QT_MOC_LITERAL(45, 759, 18), // "slotUpdateComment2"
QT_MOC_LITERAL(46, 778, 13), // "slotEditGroup"
QT_MOC_LITERAL(47, 792, 18), // "slotEditRectSelect"
QT_MOC_LITERAL(48, 811, 19), // "slotEditClearSelect"
QT_MOC_LITERAL(49, 831, 16), // "slotPlayFromHere"
QT_MOC_LITERAL(50, 848, 16), // "slotEditAnalysis"
QT_MOC_LITERAL(51, 865, 12), // "slotDiagEdit"
QT_MOC_LITERAL(52, 878, 13), // "slotDiagASCII"
QT_MOC_LITERAL(53, 892, 11), // "slotDiagSVG"
QT_MOC_LITERAL(54, 904, 14), // "slotDiagChosen"
QT_MOC_LITERAL(55, 919, 15), // "slotEngineGroup"
QT_MOC_LITERAL(56, 935, 22), // "slotToggleHideAnalysis"
QT_MOC_LITERAL(57, 958, 22), // "on_colorButton_clicked"
QT_MOC_LITERAL(58, 981, 11), // "doRealScore"
QT_MOC_LITERAL(59, 993, 6), // "doEdit"
QT_MOC_LITERAL(60, 1000, 9), // "doEditPos"
QT_MOC_LITERAL(61, 1010, 13), // "sliderChanged"
QT_MOC_LITERAL(62, 1024, 14), // "perform_search"
QT_MOC_LITERAL(63, 1039, 21), // "enable_search_pattern"
QT_MOC_LITERAL(64, 1061, 22) // "disable_search_pattern"

    },
    "MainWindow\0signal_sendcomment\0\0"
    "signal_closeevent\0slotFocus\0"
    "slotFileNewBoard\0slotFileNewGame\0"
    "slotFileNewVariantGame\0slotFileOpen\0"
    "slotFileOpenDB\0slotFileSave\0slotFileClose\0"
    "slotFileSaveAs\0slotFileSaveVariations\0"
    "slotFileExportASCII\0slotFileExportSVG\0"
    "slotFileImportSgfClipB\0slotFileExportSgfClipB\0"
    "slotFileExportPic\0slotFileExportPicClipB\0"
    "slotEditCopyPos\0slotEditPastePos\0"
    "slotEditDelete\0slotEditFigure\0"
    "slotNavIntersection\0slotNavNthMove\0"
    "slotNavSwapVariations\0slotNavAutoplay\0"
    "autoSliderChanged\0slotSetGameInfo\0"
    "slotViewMenuBar\0toggle\0slotViewStatusBar\0"
    "slotViewCoords\0slotViewSlider\0"
    "slotViewLeftSidebar\0slotViewSidebar\0"
    "slotViewFullscreen\0slotViewMoveNumbers\0"
    "slotViewDiagComments\0slotViewConnections\0"
    "slotTimerForward\0slotAutoplayTimer\0"
    "slotSoundToggle\0slotUpdateComment\0"
    "slotUpdateComment2\0slotEditGroup\0"
    "slotEditRectSelect\0slotEditClearSelect\0"
    "slotPlayFromHere\0slotEditAnalysis\0"
    "slotDiagEdit\0slotDiagASCII\0slotDiagSVG\0"
    "slotDiagChosen\0slotEngineGroup\0"
    "slotToggleHideAnalysis\0on_colorButton_clicked\0"
    "doRealScore\0doEdit\0doEditPos\0sliderChanged\0"
    "perform_search\0enable_search_pattern\0"
    "disable_search_pattern"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      63,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  329,    2, 0x06 /* Public */,
       3,    0,  332,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  333,    2, 0x0a /* Public */,
       5,    1,  336,    2, 0x0a /* Public */,
       6,    1,  339,    2, 0x0a /* Public */,
       7,    1,  342,    2, 0x0a /* Public */,
       8,    1,  345,    2, 0x0a /* Public */,
       9,    1,  348,    2, 0x0a /* Public */,
      10,    1,  351,    2, 0x0a /* Public */,
      10,    0,  354,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  355,    2, 0x0a /* Public */,
      12,    1,  358,    2, 0x0a /* Public */,
      13,    1,  361,    2, 0x0a /* Public */,
      14,    1,  364,    2, 0x0a /* Public */,
      15,    1,  367,    2, 0x0a /* Public */,
      16,    1,  370,    2, 0x0a /* Public */,
      17,    1,  373,    2, 0x0a /* Public */,
      18,    1,  376,    2, 0x0a /* Public */,
      19,    1,  379,    2, 0x0a /* Public */,
      20,    1,  382,    2, 0x0a /* Public */,
      21,    1,  385,    2, 0x0a /* Public */,
      22,    1,  388,    2, 0x0a /* Public */,
      23,    1,  391,    2, 0x0a /* Public */,
      24,    1,  394,    2, 0x0a /* Public */,
      25,    1,  397,    2, 0x0a /* Public */,
      26,    1,  400,    2, 0x0a /* Public */,
      27,    1,  403,    2, 0x0a /* Public */,
      28,    1,  406,    2, 0x0a /* Public */,
      29,    1,  409,    2, 0x0a /* Public */,
      30,    1,  412,    2, 0x0a /* Public */,
      32,    1,  415,    2, 0x0a /* Public */,
      33,    1,  418,    2, 0x0a /* Public */,
      34,    1,  421,    2, 0x0a /* Public */,
      35,    0,  424,    2, 0x0a /* Public */,
      36,    1,  425,    2, 0x0a /* Public */,
      37,    1,  428,    2, 0x0a /* Public */,
      38,    1,  431,    2, 0x0a /* Public */,
      39,    1,  434,    2, 0x0a /* Public */,
      40,    1,  437,    2, 0x0a /* Public */,
      41,    0,  440,    2, 0x0a /* Public */,
      42,    0,  441,    2, 0x0a /* Public */,
      43,    1,  442,    2, 0x0a /* Public */,
      44,    0,  445,    2, 0x0a /* Public */,
      45,    0,  446,    2, 0x0a /* Public */,
      46,    1,  447,    2, 0x0a /* Public */,
      47,    1,  450,    2, 0x0a /* Public */,
      48,    1,  453,    2, 0x0a /* Public */,
      49,    1,  456,    2, 0x0a /* Public */,
      50,    1,  459,    2, 0x0a /* Public */,
      51,    1,  462,    2, 0x0a /* Public */,
      52,    1,  465,    2, 0x0a /* Public */,
      53,    1,  468,    2, 0x0a /* Public */,
      54,    1,  471,    2, 0x0a /* Public */,
      55,    1,  474,    2, 0x0a /* Public */,
      56,    1,  477,    2, 0x0a /* Public */,
      57,    1,  480,    2, 0x0a /* Public */,
      58,    1,  483,    2, 0x0a /* Public */,
      59,    0,  486,    2, 0x0a /* Public */,
      60,    1,  487,    2, 0x0a /* Public */,
      61,    1,  490,    2, 0x0a /* Public */,
      62,    0,  493,    2, 0x0a /* Public */,
      63,    0,  494,    2, 0x0a /* Public */,
      64,    0,  495,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool, QMetaType::Bool,    2,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_sendcomment((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->signal_closeevent(); break;
        case 2: _t->slotFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotFileNewBoard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slotFileNewGame((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slotFileNewVariantGame((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slotFileOpen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slotFileOpenDB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: { bool _r = _t->slotFileSave((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->slotFileSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->slotFileClose((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { bool _r = _t->slotFileSaveAs((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->slotFileSaveVariations((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->slotFileExportASCII((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->slotFileExportSVG((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->slotFileImportSgfClipB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->slotFileExportSgfClipB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->slotFileExportPic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->slotFileExportPicClipB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->slotEditCopyPos((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->slotEditPastePos((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->slotEditDelete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->slotEditFigure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->slotNavIntersection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->slotNavNthMove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->slotNavSwapVariations((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->slotNavAutoplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->autoSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->slotSetGameInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->slotViewMenuBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->slotViewStatusBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->slotViewCoords((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->slotViewSlider((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->slotViewLeftSidebar(); break;
        case 34: _t->slotViewSidebar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->slotViewFullscreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->slotViewMoveNumbers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->slotViewDiagComments((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->slotViewConnections((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->slotTimerForward(); break;
        case 40: _t->slotAutoplayTimer(); break;
        case 41: _t->slotSoundToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->slotUpdateComment(); break;
        case 43: _t->slotUpdateComment2(); break;
        case 44: _t->slotEditGroup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->slotEditRectSelect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->slotEditClearSelect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->slotPlayFromHere((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->slotEditAnalysis((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->slotDiagEdit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->slotDiagASCII((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->slotDiagSVG((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->slotDiagChosen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->slotEngineGroup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->slotToggleHideAnalysis((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->on_colorButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->doRealScore((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->doEdit(); break;
        case 58: _t->doEditPos((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->sliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->perform_search(); break;
        case 61: _t->enable_search_pattern(); break;
        case 62: _t->disable_search_pattern(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_sendcomment)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_closeevent)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::BoardWindow"))
        return static_cast< Ui::BoardWindow*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 63)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 63;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::signal_sendcomment(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::signal_closeevent()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
