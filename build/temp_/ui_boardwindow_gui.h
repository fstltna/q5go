/********************************************************************************
** Form generated from reading UI file 'boardwindow_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDWINDOW_GUI_H
#define UI_BOARDWINDOW_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "board.h"
#include "clickableviews.h"
#include "evalgraph.h"
#include "gametree.h"
#include "normaltools.h"
#include "scoretools.h"
#include "sizegraphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_BoardWindow
{
public:
    QAction *navForward;
    QAction *navBackward;
    QAction *navFirst;
    QAction *navLast;
    QAction *navPrevVar;
    QAction *navNextVar;
    QAction *navMainBranch;
    QAction *navStartVar;
    QAction *navNextBranch;
    QAction *navPrevComment;
    QAction *navNextComment;
    QAction *navPrevFigure;
    QAction *navNextFigure;
    QAction *navNthMove;
    QAction *navIntersection;
    QAction *setGameInfo;
    QAction *editStone;
    QAction *editTriangle;
    QAction *editCircle;
    QAction *editSquare;
    QAction *editCross;
    QAction *editLetter;
    QAction *editNumber;
    QAction *editDelete;
    QAction *editRectSelect;
    QAction *editClearSelect;
    QAction *editFigure;
    QAction *fileNewBoard;
    QAction *fileNew;
    QAction *fileNewVariant;
    QAction *fileSave;
    QAction *fileOpen;
    QAction *fileSaveAs;
    QAction *fileClose;
    QAction *fileQuit;
    QAction *fileExportASCII;
    QAction *fileExportSVG;
    QAction *fileImportSgfClipB;
    QAction *fileExportSgfClipB;
    QAction *fileExportPic;
    QAction *fileExportPicClipB;
    QAction *viewStatusBar;
    QAction *viewSlider;
    QAction *viewSidebar;
    QAction *viewFullscreen;
    QAction *viewNumbers;
    QAction *viewCoords;
    QAction *layoutSaveDefault;
    QAction *layoutSaveCurrent;
    QAction *layoutRestoreDefault;
    QAction *layoutRestoreCurrent;
    QAction *layoutLandscape;
    QAction *layoutPortrait;
    QAction *viewMenuBar;
    QAction *setPreferences;
    QAction *soundToggle;
    QAction *helpManual;
    QAction *helpAbout;
    QAction *helpAboutQt;
    QAction *anConnect;
    QAction *anDisconnect;
    QAction *anPause;
    QAction *viewDiagComments;
    QAction *helpReadme;
    QAction *anBatch;
    QAction *editAutoDiags;
    QAction *fileOpenDB;
    QAction *fileExportSlide;
    QAction *anPlay;
    QAction *editUndo;
    QAction *editRedo;
    QAction *viewConnections;
    QAction *fileSaveVariations;
    QAction *anEdit;
    QAction *actionTutorials;
    QAction *searchPattern;
    QAction *editCopyPos;
    QAction *editPastePos;
    QAction *anMessages;
    QAction *rulesGuess;
    QAction *rulesJapanese;
    QAction *rulesChinese;
    QAction *navAutoplay;
    QWidget *centralwidget;
    QGridLayout *gridLayout_5;
    QWidget *mainWidget;
    QGridLayout *gridLayout_6;
    QWidget *widget;
    QGridLayout *mainGridLayout;
    QFrame *boardFrame;
    QGridLayout *gridLayout;
    QVBoxLayout *_2;
    QVBoxLayout *_3;
    QHBoxLayout *horizontalLayout_2;
    SizeGraphicsView *evalView;
    Board *gfx_board;
    QHBoxLayout *_4;
    QWidget *autoBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QToolButton *autoplayToolButton;
    QToolButton *autoPauseButton;
    QLabel *label_2;
    QSlider *autoSlider;
    QLabel *autoSpeedLabel;
    QSpacerItem *horizontalSpacer;
    QWidget *sliderWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *sliderLeftLabel;
    QSlider *slider;
    QLabel *sliderRightLabel;
    QFrame *toolsFrame;
    QVBoxLayout *_5;
    QVBoxLayout *_6;
    QLabel *moveNumLabel;
    QHBoxLayout *_7;
    QToolButton *goFirstButton;
    QToolButton *goPrevButton;
    QToolButton *goNextButton;
    QToolButton *goLastButton;
    QHBoxLayout *horizontalLayout;
    QToolButton *prevCommentButton;
    QToolButton *nextCommentButton;
    QToolButton *prevNumberButton;
    QToolButton *nextNumberButton;
    QHBoxLayout *stupidThing;
    QLabel *turnLabel;
    QLabel *turnWarning;
    QToolButton *colorButton;
    QSplitter *splitter1;
    QWidget *layout14;
    QVBoxLayout *_8;
    QPushButton *refreshButton;
    QPushButton *leaveMatchButton;
    QPushButton *followButton;
    QPushButton *passButton;
    QPushButton *againButton;
    QPushButton *undoButton;
    QPushButton *adjournButton;
    QPushButton *scoreButton;
    QPushButton *doneButton;
    QPushButton *editButton;
    QPushButton *editPosButton;
    QPushButton *editAppendButton;
    QPushButton *editInsertButton;
    QPushButton *editReplaceButton;
    QPushButton *resignButton;
    QPushButton *unobserveButton;
    QTabWidget *toolsTabWidget;
    QWidget *tab_ns;
    QVBoxLayout *_9;
    NormalTools *normalTools;
    ScoreTools *scoreTools;
    QWidget *tab_tg;
    QGridLayout *_10;
    QFrame *Frame9_2;
    QGridLayout *_11;
    QVBoxLayout *_12;
    QLabel *TextLabel_opponent;
    QComboBox *cb_opponent;
    QHBoxLayout *_13;
    QPushButton *pb_controls;
    QPushButton *pb_mark;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *fileMenu;
    QMenu *menu_Import_Export;
    QMenu *editMenu;
    QMenu *navMenu;
    QMenu *settingsMenu;
    QMenu *viewMenu;
    QMenu *menuSave_layout;
    QMenu *menuRestore_layout;
    QMenu *anMenu;
    QMenu *anChooseMenu;
    QMenu *menuRuleset;
    QMenu *menu_Learn_Go;
    QMenu *helpMenu;
    QToolBar *fileBar;
    QToolBar *toolBar;
    QToolBar *editBar;
    QDockWidget *diagsDock;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_3;
    FigureView *diagView;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QComboBox *diagComboBox;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *spacer;
    QPushButton *diagASCIIButton;
    QPushButton *diagSVGButton;
    QPushButton *diagEditButton;
    QDockWidget *observersDock;
    QWidget *dockWidgetContents_4;
    QGridLayout *gridLayout_2;
    QTreeView *ListView_observers;
    QDockWidget *graphDock;
    QWidget *dockWidgetContents_5;
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    EvalGraph *evalGraph;
    ClickableListView *anIdListView;
    QDockWidget *commentsDock;
    QWidget *dockWidgetContents_8;
    QVBoxLayout *verticalLayout;
    QWidget *comments_widget;
    QVBoxLayout *_15;
    QTextEdit *commentEdit;
    QLineEdit *commentEdit2;
    QTextEdit *diagCommentView;
    QDockWidget *treeDock;
    QWidget *treeDockContents;
    QGridLayout *gridLayout_1;
    QFrame *treeFrame;
    QVBoxLayout *treeLayout;
    QGraphicsView *gtHeaderView;
    GameTree *gameTreeView;
    QDockWidget *chooseDock;
    QWidget *chooseDockContents;
    QGridLayout *gridLayout_4;
    QFrame *chooseFrame;
    QVBoxLayout *chooseLayout;
    SizeGraphicsView *gameChoiceView;
    QToolBar *miscBar;

    void setupUi(QMainWindow *BoardWindow)
    {
        if (BoardWindow->objectName().isEmpty())
            BoardWindow->setObjectName(QString::fromUtf8("BoardWindow"));
        BoardWindow->resize(1192, 982);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/qgo.png"), QSize(), QIcon::Normal, QIcon::Off);
        BoardWindow->setWindowIcon(icon);
        navForward = new QAction(BoardWindow);
        navForward->setObjectName(QString::fromUtf8("navForward"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/1rightarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        navForward->setIcon(icon1);
        navBackward = new QAction(BoardWindow);
        navBackward->setObjectName(QString::fromUtf8("navBackward"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/1leftarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        navBackward->setIcon(icon2);
        navFirst = new QAction(BoardWindow);
        navFirst->setObjectName(QString::fromUtf8("navFirst"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/2leftarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        navFirst->setIcon(icon3);
        navLast = new QAction(BoardWindow);
        navLast->setObjectName(QString::fromUtf8("navLast"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/2rightarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        navLast->setIcon(icon4);
        navPrevVar = new QAction(BoardWindow);
        navPrevVar->setObjectName(QString::fromUtf8("navPrevVar"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/bluearrow-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        navPrevVar->setIcon(icon5);
        navNextVar = new QAction(BoardWindow);
        navNextVar->setObjectName(QString::fromUtf8("navNextVar"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/bluearrow-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        navNextVar->setIcon(icon6);
        navMainBranch = new QAction(BoardWindow);
        navMainBranch->setObjectName(QString::fromUtf8("navMainBranch"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/bluearrow-end-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        navMainBranch->setIcon(icon7);
        navStartVar = new QAction(BoardWindow);
        navStartVar->setObjectName(QString::fromUtf8("navStartVar"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/bluearrow-end-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        navStartVar->setIcon(icon8);
        navNextBranch = new QAction(BoardWindow);
        navNextBranch->setObjectName(QString::fromUtf8("navNextBranch"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/bluearrow-end-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        navNextBranch->setIcon(icon9);
        navPrevComment = new QAction(BoardWindow);
        navPrevComment->setObjectName(QString::fromUtf8("navPrevComment"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/1leftcomment.png"), QSize(), QIcon::Normal, QIcon::Off);
        navPrevComment->setIcon(icon10);
        navNextComment = new QAction(BoardWindow);
        navNextComment->setObjectName(QString::fromUtf8("navNextComment"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/1rightcomment.png"), QSize(), QIcon::Normal, QIcon::Off);
        navNextComment->setIcon(icon11);
        navPrevFigure = new QAction(BoardWindow);
        navPrevFigure->setObjectName(QString::fromUtf8("navPrevFigure"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/1left123.png"), QSize(), QIcon::Normal, QIcon::Off);
        navPrevFigure->setIcon(icon12);
        navNextFigure = new QAction(BoardWindow);
        navNextFigure->setObjectName(QString::fromUtf8("navNextFigure"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/1right123.png"), QSize(), QIcon::Normal, QIcon::Off);
        navNextFigure->setIcon(icon13);
        navNthMove = new QAction(BoardWindow);
        navNthMove->setObjectName(QString::fromUtf8("navNthMove"));
        navIntersection = new QAction(BoardWindow);
        navIntersection->setObjectName(QString::fromUtf8("navIntersection"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/navclicked.png"), QSize(), QIcon::Normal, QIcon::Off);
        navIntersection->setIcon(icon14);
        setGameInfo = new QAction(BoardWindow);
        setGameInfo->setObjectName(QString::fromUtf8("setGameInfo"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/docprop.png"), QSize(), QIcon::Normal, QIcon::Off);
        setGameInfo->setIcon(icon15);
        editStone = new QAction(BoardWindow);
        editStone->setObjectName(QString::fromUtf8("editStone"));
        editStone->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/editstone.png"), QSize(), QIcon::Normal, QIcon::Off);
        editStone->setIcon(icon16);
        editTriangle = new QAction(BoardWindow);
        editTriangle->setObjectName(QString::fromUtf8("editTriangle"));
        editTriangle->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/edittriangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        editTriangle->setIcon(icon17);
        editCircle = new QAction(BoardWindow);
        editCircle->setObjectName(QString::fromUtf8("editCircle"));
        editCircle->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/editcircle.png"), QSize(), QIcon::Normal, QIcon::Off);
        editCircle->setIcon(icon18);
        editSquare = new QAction(BoardWindow);
        editSquare->setObjectName(QString::fromUtf8("editSquare"));
        editSquare->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/editsquare.png"), QSize(), QIcon::Normal, QIcon::Off);
        editSquare->setIcon(icon19);
        editCross = new QAction(BoardWindow);
        editCross->setObjectName(QString::fromUtf8("editCross"));
        editCross->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/editcross.png"), QSize(), QIcon::Normal, QIcon::Off);
        editCross->setIcon(icon20);
        editLetter = new QAction(BoardWindow);
        editLetter->setObjectName(QString::fromUtf8("editLetter"));
        editLetter->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/editletter.png"), QSize(), QIcon::Normal, QIcon::Off);
        editLetter->setIcon(icon21);
        editNumber = new QAction(BoardWindow);
        editNumber->setObjectName(QString::fromUtf8("editNumber"));
        editNumber->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/editnumber.png"), QSize(), QIcon::Normal, QIcon::Off);
        editNumber->setIcon(icon22);
        editDelete = new QAction(BoardWindow);
        editDelete->setObjectName(QString::fromUtf8("editDelete"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/edit-cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        editDelete->setIcon(icon23);
        editRectSelect = new QAction(BoardWindow);
        editRectSelect->setObjectName(QString::fromUtf8("editRectSelect"));
        editRectSelect->setCheckable(true);
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/rect_select.png"), QSize(), QIcon::Normal, QIcon::Off);
        editRectSelect->setIcon(icon24);
        editClearSelect = new QAction(BoardWindow);
        editClearSelect->setObjectName(QString::fromUtf8("editClearSelect"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/clear_select.png"), QSize(), QIcon::Normal, QIcon::Off);
        editClearSelect->setIcon(icon25);
        editFigure = new QAction(BoardWindow);
        editFigure->setObjectName(QString::fromUtf8("editFigure"));
        editFigure->setCheckable(true);
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/figure.png"), QSize(), QIcon::Normal, QIcon::Off);
        editFigure->setIcon(icon26);
        fileNewBoard = new QAction(BoardWindow);
        fileNewBoard->setObjectName(QString::fromUtf8("fileNewBoard"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/new_board.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileNewBoard->setIcon(icon27);
        fileNew = new QAction(BoardWindow);
        fileNew->setObjectName(QString::fromUtf8("fileNew"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileNew->setIcon(icon28);
        fileNewVariant = new QAction(BoardWindow);
        fileNewVariant->setObjectName(QString::fromUtf8("fileNewVariant"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/torus.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileNewVariant->setIcon(icon29);
        fileSave = new QAction(BoardWindow);
        fileSave->setObjectName(QString::fromUtf8("fileSave"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileSave->setIcon(icon30);
        fileOpen = new QAction(BoardWindow);
        fileOpen->setObjectName(QString::fromUtf8("fileOpen"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileOpen->setIcon(icon31);
        fileSaveAs = new QAction(BoardWindow);
        fileSaveAs->setObjectName(QString::fromUtf8("fileSaveAs"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/filesaveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileSaveAs->setIcon(icon32);
        fileClose = new QAction(BoardWindow);
        fileClose->setObjectName(QString::fromUtf8("fileClose"));
        fileQuit = new QAction(BoardWindow);
        fileQuit->setObjectName(QString::fromUtf8("fileQuit"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/fileexit.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileQuit->setIcon(icon33);
        fileQuit->setMenuRole(QAction::QuitRole);
        fileExportASCII = new QAction(BoardWindow);
        fileExportASCII->setObjectName(QString::fromUtf8("fileExportASCII"));
        fileExportSVG = new QAction(BoardWindow);
        fileExportSVG->setObjectName(QString::fromUtf8("fileExportSVG"));
        fileImportSgfClipB = new QAction(BoardWindow);
        fileImportSgfClipB->setObjectName(QString::fromUtf8("fileImportSgfClipB"));
        fileExportSgfClipB = new QAction(BoardWindow);
        fileExportSgfClipB->setObjectName(QString::fromUtf8("fileExportSgfClipB"));
        fileExportPic = new QAction(BoardWindow);
        fileExportPic->setObjectName(QString::fromUtf8("fileExportPic"));
        fileExportPicClipB = new QAction(BoardWindow);
        fileExportPicClipB->setObjectName(QString::fromUtf8("fileExportPicClipB"));
        viewStatusBar = new QAction(BoardWindow);
        viewStatusBar->setObjectName(QString::fromUtf8("viewStatusBar"));
        viewStatusBar->setCheckable(true);
        viewSlider = new QAction(BoardWindow);
        viewSlider->setObjectName(QString::fromUtf8("viewSlider"));
        viewSlider->setCheckable(true);
        viewSidebar = new QAction(BoardWindow);
        viewSidebar->setObjectName(QString::fromUtf8("viewSidebar"));
        viewSidebar->setCheckable(true);
        viewFullscreen = new QAction(BoardWindow);
        viewFullscreen->setObjectName(QString::fromUtf8("viewFullscreen"));
        viewFullscreen->setCheckable(true);
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewFullscreen->setIcon(icon34);
        viewNumbers = new QAction(BoardWindow);
        viewNumbers->setObjectName(QString::fromUtf8("viewNumbers"));
        viewNumbers->setCheckable(true);
        viewCoords = new QAction(BoardWindow);
        viewCoords->setObjectName(QString::fromUtf8("viewCoords"));
        viewCoords->setCheckable(true);
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/coords.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewCoords->setIcon(icon35);
        layoutSaveDefault = new QAction(BoardWindow);
        layoutSaveDefault->setObjectName(QString::fromUtf8("layoutSaveDefault"));
        layoutSaveCurrent = new QAction(BoardWindow);
        layoutSaveCurrent->setObjectName(QString::fromUtf8("layoutSaveCurrent"));
        layoutRestoreDefault = new QAction(BoardWindow);
        layoutRestoreDefault->setObjectName(QString::fromUtf8("layoutRestoreDefault"));
        layoutRestoreCurrent = new QAction(BoardWindow);
        layoutRestoreCurrent->setObjectName(QString::fromUtf8("layoutRestoreCurrent"));
        layoutLandscape = new QAction(BoardWindow);
        layoutLandscape->setObjectName(QString::fromUtf8("layoutLandscape"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/landscape.png"), QSize(), QIcon::Normal, QIcon::Off);
        layoutLandscape->setIcon(icon36);
        layoutPortrait = new QAction(BoardWindow);
        layoutPortrait->setObjectName(QString::fromUtf8("layoutPortrait"));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/portrait.png"), QSize(), QIcon::Normal, QIcon::Off);
        layoutPortrait->setIcon(icon37);
        viewMenuBar = new QAction(BoardWindow);
        viewMenuBar->setObjectName(QString::fromUtf8("viewMenuBar"));
        viewMenuBar->setCheckable(true);
        setPreferences = new QAction(BoardWindow);
        setPreferences->setObjectName(QString::fromUtf8("setPreferences"));
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/prefs.png"), QSize(), QIcon::Normal, QIcon::Off);
        setPreferences->setIcon(icon38);
        setPreferences->setMenuRole(QAction::PreferencesRole);
        soundToggle = new QAction(BoardWindow);
        soundToggle->setObjectName(QString::fromUtf8("soundToggle"));
        soundToggle->setCheckable(true);
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/audio-on.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon39.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/audio-muted.png"), QSize(), QIcon::Normal, QIcon::On);
        soundToggle->setIcon(icon39);
        helpManual = new QAction(BoardWindow);
        helpManual->setObjectName(QString::fromUtf8("helpManual"));
        helpAbout = new QAction(BoardWindow);
        helpAbout->setObjectName(QString::fromUtf8("helpAbout"));
        helpAbout->setMenuRole(QAction::AboutRole);
        helpAboutQt = new QAction(BoardWindow);
        helpAboutQt->setObjectName(QString::fromUtf8("helpAboutQt"));
        helpAboutQt->setMenuRole(QAction::AboutQtRole);
        anConnect = new QAction(BoardWindow);
        anConnect->setObjectName(QString::fromUtf8("anConnect"));
        anDisconnect = new QAction(BoardWindow);
        anDisconnect->setObjectName(QString::fromUtf8("anDisconnect"));
        anPause = new QAction(BoardWindow);
        anPause->setObjectName(QString::fromUtf8("anPause"));
        anPause->setCheckable(true);
        viewDiagComments = new QAction(BoardWindow);
        viewDiagComments->setObjectName(QString::fromUtf8("viewDiagComments"));
        viewDiagComments->setCheckable(true);
        helpReadme = new QAction(BoardWindow);
        helpReadme->setObjectName(QString::fromUtf8("helpReadme"));
        anBatch = new QAction(BoardWindow);
        anBatch->setObjectName(QString::fromUtf8("anBatch"));
        editAutoDiags = new QAction(BoardWindow);
        editAutoDiags->setObjectName(QString::fromUtf8("editAutoDiags"));
        fileOpenDB = new QAction(BoardWindow);
        fileOpenDB->setObjectName(QString::fromUtf8("fileOpenDB"));
        fileExportSlide = new QAction(BoardWindow);
        fileExportSlide->setObjectName(QString::fromUtf8("fileExportSlide"));
        anPlay = new QAction(BoardWindow);
        anPlay->setObjectName(QString::fromUtf8("anPlay"));
        editUndo = new QAction(BoardWindow);
        editUndo->setObjectName(QString::fromUtf8("editUndo"));
        editRedo = new QAction(BoardWindow);
        editRedo->setObjectName(QString::fromUtf8("editRedo"));
        viewConnections = new QAction(BoardWindow);
        viewConnections->setObjectName(QString::fromUtf8("viewConnections"));
        viewConnections->setCheckable(true);
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/connected.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewConnections->setIcon(icon40);
        fileSaveVariations = new QAction(BoardWindow);
        fileSaveVariations->setObjectName(QString::fromUtf8("fileSaveVariations"));
        anEdit = new QAction(BoardWindow);
        anEdit->setObjectName(QString::fromUtf8("anEdit"));
        actionTutorials = new QAction(BoardWindow);
        actionTutorials->setObjectName(QString::fromUtf8("actionTutorials"));
        searchPattern = new QAction(BoardWindow);
        searchPattern->setObjectName(QString::fromUtf8("searchPattern"));
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchPattern->setIcon(icon41);
        editCopyPos = new QAction(BoardWindow);
        editCopyPos->setObjectName(QString::fromUtf8("editCopyPos"));
        editPastePos = new QAction(BoardWindow);
        editPastePos->setObjectName(QString::fromUtf8("editPastePos"));
        anMessages = new QAction(BoardWindow);
        anMessages->setObjectName(QString::fromUtf8("anMessages"));
        rulesGuess = new QAction(BoardWindow);
        rulesGuess->setObjectName(QString::fromUtf8("rulesGuess"));
        rulesGuess->setCheckable(true);
        rulesJapanese = new QAction(BoardWindow);
        rulesJapanese->setObjectName(QString::fromUtf8("rulesJapanese"));
        rulesJapanese->setCheckable(true);
        rulesChinese = new QAction(BoardWindow);
        rulesChinese->setObjectName(QString::fromUtf8("rulesChinese"));
        rulesChinese->setCheckable(true);
        navAutoplay = new QAction(BoardWindow);
        navAutoplay->setObjectName(QString::fromUtf8("navAutoplay"));
        navAutoplay->setCheckable(true);
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/autoplay.png"), QSize(), QIcon::Normal, QIcon::Off);
        navAutoplay->setIcon(icon42);
        centralwidget = new QWidget(BoardWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(centralwidget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        mainWidget = new QWidget(centralwidget);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        sizePolicy.setHeightForWidth(mainWidget->sizePolicy().hasHeightForWidth());
        mainWidget->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(mainWidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(mainWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        mainGridLayout = new QGridLayout(widget);
        mainGridLayout->setObjectName(QString::fromUtf8("mainGridLayout"));
        mainGridLayout->setHorizontalSpacing(0);
        mainGridLayout->setContentsMargins(0, 0, 0, 0);
        boardFrame = new QFrame(widget);
        boardFrame->setObjectName(QString::fromUtf8("boardFrame"));
        sizePolicy.setHeightForWidth(boardFrame->sizePolicy().hasHeightForWidth());
        boardFrame->setSizePolicy(sizePolicy);
        boardFrame->setFrameShape(QFrame::StyledPanel);
        boardFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(boardFrame);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        _2 = new QVBoxLayout();
        _2->setSpacing(0);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        _3 = new QVBoxLayout();
        _3->setSpacing(0);
        _3->setObjectName(QString::fromUtf8("_3"));
        _3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(4, -1, 4, -1);
        evalView = new SizeGraphicsView(boardFrame);
        evalView->setObjectName(QString::fromUtf8("evalView"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(evalView->sizePolicy().hasHeightForWidth());
        evalView->setSizePolicy(sizePolicy1);
        evalView->setMinimumSize(QSize(15, 0));
        evalView->setMaximumSize(QSize(15, 16777215));
        evalView->setFocusPolicy(Qt::NoFocus);
        evalView->setFrameShadow(QFrame::Raised);
        evalView->setLineWidth(1);
        evalView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        evalView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        evalView->setBackgroundBrush(brush);
        evalView->setSceneRect(QRectF(0, 0, 15, 0));
        evalView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        evalView->setTransformationAnchor(QGraphicsView::NoAnchor);

        horizontalLayout_2->addWidget(evalView);

        gfx_board = new Board(boardFrame);
        gfx_board->setObjectName(QString::fromUtf8("gfx_board"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(gfx_board->sizePolicy().hasHeightForWidth());
        gfx_board->setSizePolicy(sizePolicy2);
        gfx_board->setMinimumSize(QSize(300, 300));

        horizontalLayout_2->addWidget(gfx_board);


        _3->addLayout(horizontalLayout_2);

        _4 = new QHBoxLayout();
        _4->setSpacing(6);
        _4->setObjectName(QString::fromUtf8("_4"));
        _4->setContentsMargins(1, 1, 1, 1);

        _3->addLayout(_4);


        _2->addLayout(_3);

        autoBox = new QWidget(boardFrame);
        autoBox->setObjectName(QString::fromUtf8("autoBox"));
        horizontalLayout_6 = new QHBoxLayout(autoBox);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(2, 2, 2, 2);
        label_3 = new QLabel(autoBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        autoplayToolButton = new QToolButton(autoBox);
        autoplayToolButton->setObjectName(QString::fromUtf8("autoplayToolButton"));

        horizontalLayout_6->addWidget(autoplayToolButton);

        autoPauseButton = new QToolButton(autoBox);
        autoPauseButton->setObjectName(QString::fromUtf8("autoPauseButton"));
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/images/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        autoPauseButton->setIcon(icon43);
        autoPauseButton->setCheckable(true);

        horizontalLayout_6->addWidget(autoPauseButton);

        label_2 = new QLabel(autoBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        autoSlider = new QSlider(autoBox);
        autoSlider->setObjectName(QString::fromUtf8("autoSlider"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(autoSlider->sizePolicy().hasHeightForWidth());
        autoSlider->setSizePolicy(sizePolicy3);
        autoSlider->setMaximumSize(QSize(32767, 20));
        autoSlider->setFocusPolicy(Qt::NoFocus);
        autoSlider->setMinimum(1);
        autoSlider->setMaximum(40);
        autoSlider->setPageStep(5);
        autoSlider->setValue(2);
        autoSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(autoSlider);

        autoSpeedLabel = new QLabel(autoBox);
        autoSpeedLabel->setObjectName(QString::fromUtf8("autoSpeedLabel"));

        horizontalLayout_6->addWidget(autoSpeedLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        _2->addWidget(autoBox);


        gridLayout->addLayout(_2, 0, 0, 1, 1);

        sliderWidget = new QWidget(boardFrame);
        sliderWidget->setObjectName(QString::fromUtf8("sliderWidget"));
        horizontalLayout_5 = new QHBoxLayout(sliderWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(6, 0, 6, 0);
        sliderLeftLabel = new QLabel(sliderWidget);
        sliderLeftLabel->setObjectName(QString::fromUtf8("sliderLeftLabel"));
        QFont font;
        sliderLeftLabel->setFont(font);
        sliderLeftLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sliderLeftLabel->setWordWrap(false);
        sliderLeftLabel->setMargin(2);

        horizontalLayout_5->addWidget(sliderLeftLabel);

        slider = new QSlider(sliderWidget);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setMaximumSize(QSize(32767, 20));
        slider->setFocusPolicy(Qt::NoFocus);
        slider->setMaximum(10);
        slider->setPageStep(1);
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(slider);

        sliderRightLabel = new QLabel(sliderWidget);
        sliderRightLabel->setObjectName(QString::fromUtf8("sliderRightLabel"));
        sliderRightLabel->setFont(font);
        sliderRightLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sliderRightLabel->setWordWrap(false);
        sliderRightLabel->setMargin(2);

        horizontalLayout_5->addWidget(sliderRightLabel);


        gridLayout->addWidget(sliderWidget, 1, 0, 1, 1);


        mainGridLayout->addWidget(boardFrame, 0, 0, 1, 1);

        toolsFrame = new QFrame(widget);
        toolsFrame->setObjectName(QString::fromUtf8("toolsFrame"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(toolsFrame->sizePolicy().hasHeightForWidth());
        toolsFrame->setSizePolicy(sizePolicy4);
        toolsFrame->setMinimumSize(QSize(148, 230));
        toolsFrame->setMaximumSize(QSize(150, 32767));
        toolsFrame->setFrameShape(QFrame::NoFrame);
        toolsFrame->setFrameShadow(QFrame::Raised);
        _5 = new QVBoxLayout(toolsFrame);
        _5->setSpacing(6);
        _5->setObjectName(QString::fromUtf8("_5"));
        _5->setContentsMargins(2, 0, 2, 0);
        _6 = new QVBoxLayout();
        _6->setSpacing(6);
        _6->setObjectName(QString::fromUtf8("_6"));
        _6->setContentsMargins(0, 0, 0, 0);
        moveNumLabel = new QLabel(toolsFrame);
        moveNumLabel->setObjectName(QString::fromUtf8("moveNumLabel"));
        moveNumLabel->setMinimumSize(QSize(120, 0));
        QPalette palette;
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(192, 192, 192, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush3(QColor(223, 223, 223, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(96, 96, 96, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(128, 128, 128, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush6(QColor(170, 167, 165, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Active, QPalette::Link, brush1);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        QBrush brush7(QColor(220, 220, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush1);
        moveNumLabel->setPalette(palette);
        moveNumLabel->setFrameShape(QFrame::Panel);
        moveNumLabel->setFrameShadow(QFrame::Sunken);
        moveNumLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        moveNumLabel->setWordWrap(false);

        _6->addWidget(moveNumLabel);

        _7 = new QHBoxLayout();
        _7->setSpacing(6);
        _7->setObjectName(QString::fromUtf8("_7"));
        _7->setContentsMargins(1, 1, 1, 1);
        goFirstButton = new QToolButton(toolsFrame);
        goFirstButton->setObjectName(QString::fromUtf8("goFirstButton"));
        goFirstButton->setEnabled(false);
        goFirstButton->setIcon(icon3);

        _7->addWidget(goFirstButton);

        goPrevButton = new QToolButton(toolsFrame);
        goPrevButton->setObjectName(QString::fromUtf8("goPrevButton"));
        goPrevButton->setEnabled(false);
        goPrevButton->setIcon(icon2);

        _7->addWidget(goPrevButton);

        goNextButton = new QToolButton(toolsFrame);
        goNextButton->setObjectName(QString::fromUtf8("goNextButton"));
        goNextButton->setEnabled(false);
        goNextButton->setIcon(icon1);

        _7->addWidget(goNextButton);

        goLastButton = new QToolButton(toolsFrame);
        goLastButton->setObjectName(QString::fromUtf8("goLastButton"));
        goLastButton->setEnabled(false);
        goLastButton->setIcon(icon4);

        _7->addWidget(goLastButton);


        _6->addLayout(_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        prevCommentButton = new QToolButton(toolsFrame);
        prevCommentButton->setObjectName(QString::fromUtf8("prevCommentButton"));
        prevCommentButton->setEnabled(false);
        prevCommentButton->setIcon(icon10);

        horizontalLayout->addWidget(prevCommentButton);

        nextCommentButton = new QToolButton(toolsFrame);
        nextCommentButton->setObjectName(QString::fromUtf8("nextCommentButton"));
        nextCommentButton->setEnabled(false);
        nextCommentButton->setIcon(icon11);

        horizontalLayout->addWidget(nextCommentButton);

        prevNumberButton = new QToolButton(toolsFrame);
        prevNumberButton->setObjectName(QString::fromUtf8("prevNumberButton"));
        prevNumberButton->setEnabled(false);
        prevNumberButton->setIcon(icon12);

        horizontalLayout->addWidget(prevNumberButton);

        nextNumberButton = new QToolButton(toolsFrame);
        nextNumberButton->setObjectName(QString::fromUtf8("nextNumberButton"));
        nextNumberButton->setEnabled(false);
        nextNumberButton->setIcon(icon13);

        horizontalLayout->addWidget(nextNumberButton);


        _6->addLayout(horizontalLayout);

        stupidThing = new QHBoxLayout();
        stupidThing->setSpacing(4);
        stupidThing->setObjectName(QString::fromUtf8("stupidThing"));
        stupidThing->setContentsMargins(-1, -1, 0, 0);
        turnLabel = new QLabel(toolsFrame);
        turnLabel->setObjectName(QString::fromUtf8("turnLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(turnLabel->sizePolicy().hasHeightForWidth());
        turnLabel->setSizePolicy(sizePolicy5);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush1);
        palette1.setBrush(QPalette::Active, QPalette::LinkVisited, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush1);
        turnLabel->setPalette(palette1);
        turnLabel->setFrameShape(QFrame::Panel);
        turnLabel->setFrameShadow(QFrame::Sunken);
        turnLabel->setWordWrap(false);

        stupidThing->addWidget(turnLabel);

        turnWarning = new QLabel(toolsFrame);
        turnWarning->setObjectName(QString::fromUtf8("turnWarning"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(turnWarning->sizePolicy().hasHeightForWidth());
        turnWarning->setSizePolicy(sizePolicy6);
        turnWarning->setPixmap(QPixmap(QString::fromUtf8(":/images/warn-tri16.png")));

        stupidThing->addWidget(turnWarning);

        colorButton = new QToolButton(toolsFrame);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/images/stone_b16.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon44.addFile(QString::fromUtf8(":/images/stone_w16.png"), QSize(), QIcon::Normal, QIcon::On);
        colorButton->setIcon(icon44);
        colorButton->setCheckable(true);

        stupidThing->addWidget(colorButton);


        _6->addLayout(stupidThing);


        _5->addLayout(_6);

        splitter1 = new QSplitter(toolsFrame);
        splitter1->setObjectName(QString::fromUtf8("splitter1"));
        splitter1->setOrientation(Qt::Horizontal);
        layout14 = new QWidget(splitter1);
        layout14->setObjectName(QString::fromUtf8("layout14"));
        _8 = new QVBoxLayout(layout14);
        _8->setSpacing(0);
        _8->setObjectName(QString::fromUtf8("_8"));
        _8->setContentsMargins(0, 0, 0, 0);
        refreshButton = new QPushButton(layout14);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setFocusPolicy(Qt::NoFocus);

        _8->addWidget(refreshButton);

        leaveMatchButton = new QPushButton(layout14);
        leaveMatchButton->setObjectName(QString::fromUtf8("leaveMatchButton"));

        _8->addWidget(leaveMatchButton);

        followButton = new QPushButton(layout14);
        followButton->setObjectName(QString::fromUtf8("followButton"));

        _8->addWidget(followButton);

        passButton = new QPushButton(layout14);
        passButton->setObjectName(QString::fromUtf8("passButton"));
        passButton->setFocusPolicy(Qt::NoFocus);

        _8->addWidget(passButton);

        againButton = new QPushButton(layout14);
        againButton->setObjectName(QString::fromUtf8("againButton"));
        againButton->setFocusPolicy(Qt::NoFocus);

        _8->addWidget(againButton);

        undoButton = new QPushButton(layout14);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));
        undoButton->setFocusPolicy(Qt::NoFocus);

        _8->addWidget(undoButton);

        adjournButton = new QPushButton(layout14);
        adjournButton->setObjectName(QString::fromUtf8("adjournButton"));
        adjournButton->setFocusPolicy(Qt::NoFocus);

        _8->addWidget(adjournButton);

        scoreButton = new QPushButton(layout14);
        scoreButton->setObjectName(QString::fromUtf8("scoreButton"));
        scoreButton->setFocusPolicy(Qt::NoFocus);
        scoreButton->setCheckable(true);

        _8->addWidget(scoreButton);

        doneButton = new QPushButton(layout14);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setFocusPolicy(Qt::NoFocus);

        _8->addWidget(doneButton);

        editButton = new QPushButton(layout14);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setFocusPolicy(Qt::NoFocus);

        _8->addWidget(editButton);

        editPosButton = new QPushButton(layout14);
        editPosButton->setObjectName(QString::fromUtf8("editPosButton"));
        editPosButton->setFocusPolicy(Qt::NoFocus);
        editPosButton->setCheckable(true);

        _8->addWidget(editPosButton);

        editAppendButton = new QPushButton(layout14);
        editAppendButton->setObjectName(QString::fromUtf8("editAppendButton"));

        _8->addWidget(editAppendButton);

        editInsertButton = new QPushButton(layout14);
        editInsertButton->setObjectName(QString::fromUtf8("editInsertButton"));

        _8->addWidget(editInsertButton);

        editReplaceButton = new QPushButton(layout14);
        editReplaceButton->setObjectName(QString::fromUtf8("editReplaceButton"));

        _8->addWidget(editReplaceButton);

        resignButton = new QPushButton(layout14);
        resignButton->setObjectName(QString::fromUtf8("resignButton"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(resignButton->sizePolicy().hasHeightForWidth());
        resignButton->setSizePolicy(sizePolicy7);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush8(QColor(181, 179, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush9(QColor(218, 217, 237, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(90, 89, 110, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(120, 119, 146, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush12(QColor(212, 208, 200, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        QBrush brush13(QColor(10, 36, 106, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette2.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Link, brush1);
        palette2.setBrush(QPalette::Active, QPalette::LinkVisited, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        QBrush brush14(QColor(208, 205, 253, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Link, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Link, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush1);
        resignButton->setPalette(palette2);
        resignButton->setFocusPolicy(Qt::NoFocus);
        resignButton->setCheckable(false);

        _8->addWidget(resignButton);

        unobserveButton = new QPushButton(layout14);
        unobserveButton->setObjectName(QString::fromUtf8("unobserveButton"));

        _8->addWidget(unobserveButton);

        splitter1->addWidget(layout14);

        _5->addWidget(splitter1);

        toolsTabWidget = new QTabWidget(toolsFrame);
        toolsTabWidget->setObjectName(QString::fromUtf8("toolsTabWidget"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(toolsTabWidget->sizePolicy().hasHeightForWidth());
        toolsTabWidget->setSizePolicy(sizePolicy8);
        toolsTabWidget->setTabPosition(QTabWidget::South);
        toolsTabWidget->setTabBarAutoHide(true);
        tab_ns = new QWidget();
        tab_ns->setObjectName(QString::fromUtf8("tab_ns"));
        _9 = new QVBoxLayout(tab_ns);
        _9->setSpacing(2);
        _9->setObjectName(QString::fromUtf8("_9"));
        _9->setContentsMargins(0, 0, 0, 0);
        normalTools = new NormalTools(tab_ns);
        normalTools->setObjectName(QString::fromUtf8("normalTools"));
        normalTools->setMinimumSize(QSize(138, 260));

        _9->addWidget(normalTools);

        scoreTools = new ScoreTools(tab_ns);
        scoreTools->setObjectName(QString::fromUtf8("scoreTools"));

        _9->addWidget(scoreTools);

        toolsTabWidget->addTab(tab_ns, QString());
        tab_tg = new QWidget();
        tab_tg->setObjectName(QString::fromUtf8("tab_tg"));
        _10 = new QGridLayout(tab_tg);
        _10->setSpacing(2);
        _10->setObjectName(QString::fromUtf8("_10"));
        _10->setContentsMargins(0, 0, 0, 0);
        Frame9_2 = new QFrame(tab_tg);
        Frame9_2->setObjectName(QString::fromUtf8("Frame9_2"));
        sizePolicy4.setHeightForWidth(Frame9_2->sizePolicy().hasHeightForWidth());
        Frame9_2->setSizePolicy(sizePolicy4);
        Frame9_2->setMinimumSize(QSize(0, 60));
        Frame9_2->setFrameShape(QFrame::StyledPanel);
        Frame9_2->setFrameShadow(QFrame::Raised);
        _11 = new QGridLayout(Frame9_2);
        _11->setSpacing(2);
        _11->setObjectName(QString::fromUtf8("_11"));
        _11->setContentsMargins(0, 0, 0, 0);
        _12 = new QVBoxLayout();
        _12->setSpacing(6);
        _12->setObjectName(QString::fromUtf8("_12"));
        _12->setContentsMargins(0, 0, 0, 0);
        TextLabel_opponent = new QLabel(Frame9_2);
        TextLabel_opponent->setObjectName(QString::fromUtf8("TextLabel_opponent"));
        TextLabel_opponent->setWordWrap(false);

        _12->addWidget(TextLabel_opponent);

        cb_opponent = new QComboBox(Frame9_2);
        cb_opponent->addItem(QString());
        cb_opponent->setObjectName(QString::fromUtf8("cb_opponent"));

        _12->addWidget(cb_opponent);

        _13 = new QHBoxLayout();
        _13->setSpacing(6);
        _13->setObjectName(QString::fromUtf8("_13"));
        _13->setContentsMargins(0, 0, 0, 0);
        pb_controls = new QPushButton(Frame9_2);
        pb_controls->setObjectName(QString::fromUtf8("pb_controls"));
        pb_controls->setMaximumSize(QSize(50, 32767));
        pb_controls->setCheckable(true);

        _13->addWidget(pb_controls);

        pb_mark = new QPushButton(Frame9_2);
        pb_mark->setObjectName(QString::fromUtf8("pb_mark"));
        pb_mark->setMaximumSize(QSize(50, 32767));
        pb_mark->setCheckable(true);

        _13->addWidget(pb_mark);


        _12->addLayout(_13);


        _11->addLayout(_12, 0, 0, 1, 1);


        _10->addWidget(Frame9_2, 0, 0, 1, 1);

        toolsTabWidget->addTab(tab_tg, QString());

        _5->addWidget(toolsTabWidget);


        mainGridLayout->addWidget(toolsFrame, 0, 1, 1, 1);


        gridLayout_6->addWidget(widget, 0, 0, 1, 1);


        gridLayout_5->addWidget(mainWidget, 0, 1, 1, 1);

        BoardWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BoardWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BoardWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(BoardWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1192, 23));
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        menu_Import_Export = new QMenu(fileMenu);
        menu_Import_Export->setObjectName(QString::fromUtf8("menu_Import_Export"));
        editMenu = new QMenu(menubar);
        editMenu->setObjectName(QString::fromUtf8("editMenu"));
        navMenu = new QMenu(menubar);
        navMenu->setObjectName(QString::fromUtf8("navMenu"));
        settingsMenu = new QMenu(menubar);
        settingsMenu->setObjectName(QString::fromUtf8("settingsMenu"));
        viewMenu = new QMenu(menubar);
        viewMenu->setObjectName(QString::fromUtf8("viewMenu"));
        menuSave_layout = new QMenu(viewMenu);
        menuSave_layout->setObjectName(QString::fromUtf8("menuSave_layout"));
        menuRestore_layout = new QMenu(viewMenu);
        menuRestore_layout->setObjectName(QString::fromUtf8("menuRestore_layout"));
        anMenu = new QMenu(menubar);
        anMenu->setObjectName(QString::fromUtf8("anMenu"));
        anChooseMenu = new QMenu(anMenu);
        anChooseMenu->setObjectName(QString::fromUtf8("anChooseMenu"));
        menuRuleset = new QMenu(anMenu);
        menuRuleset->setObjectName(QString::fromUtf8("menuRuleset"));
        menu_Learn_Go = new QMenu(menubar);
        menu_Learn_Go->setObjectName(QString::fromUtf8("menu_Learn_Go"));
        helpMenu = new QMenu(menubar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        BoardWindow->setMenuBar(menubar);
        fileBar = new QToolBar(BoardWindow);
        fileBar->setObjectName(QString::fromUtf8("fileBar"));
        BoardWindow->addToolBar(Qt::TopToolBarArea, fileBar);
        toolBar = new QToolBar(BoardWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        BoardWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        editBar = new QToolBar(BoardWindow);
        editBar->setObjectName(QString::fromUtf8("editBar"));
        BoardWindow->addToolBar(Qt::TopToolBarArea, editBar);
        diagsDock = new QDockWidget(BoardWindow);
        diagsDock->setObjectName(QString::fromUtf8("diagsDock"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        diagView = new FigureView(dockWidgetContents);
        diagView->setObjectName(QString::fromUtf8("diagView"));

        verticalLayout_3->addWidget(diagView);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy6.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy6);

        horizontalLayout_4->addWidget(label);

        diagComboBox = new QComboBox(dockWidgetContents);
        diagComboBox->setObjectName(QString::fromUtf8("diagComboBox"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(diagComboBox->sizePolicy().hasHeightForWidth());
        diagComboBox->setSizePolicy(sizePolicy9);

        horizontalLayout_4->addWidget(diagComboBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacer);

        diagASCIIButton = new QPushButton(dockWidgetContents);
        diagASCIIButton->setObjectName(QString::fromUtf8("diagASCIIButton"));

        horizontalLayout_3->addWidget(diagASCIIButton);

        diagSVGButton = new QPushButton(dockWidgetContents);
        diagSVGButton->setObjectName(QString::fromUtf8("diagSVGButton"));

        horizontalLayout_3->addWidget(diagSVGButton);

        diagEditButton = new QPushButton(dockWidgetContents);
        diagEditButton->setObjectName(QString::fromUtf8("diagEditButton"));
        diagEditButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(diagEditButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        diagsDock->setWidget(dockWidgetContents);
        BoardWindow->addDockWidget(Qt::RightDockWidgetArea, diagsDock);
        observersDock = new QDockWidget(BoardWindow);
        observersDock->setObjectName(QString::fromUtf8("observersDock"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        gridLayout_2 = new QGridLayout(dockWidgetContents_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        ListView_observers = new QTreeView(dockWidgetContents_4);
        ListView_observers->setObjectName(QString::fromUtf8("ListView_observers"));
        ListView_observers->setMinimumSize(QSize(120, 40));
        ListView_observers->setFocusPolicy(Qt::NoFocus);
        ListView_observers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ListView_observers->setSortingEnabled(true);

        gridLayout_2->addWidget(ListView_observers, 0, 0, 1, 1);

        observersDock->setWidget(dockWidgetContents_4);
        BoardWindow->addDockWidget(Qt::BottomDockWidgetArea, observersDock);
        graphDock = new QDockWidget(BoardWindow);
        graphDock->setObjectName(QString::fromUtf8("graphDock"));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        gridLayout_3 = new QGridLayout(dockWidgetContents_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(dockWidgetContents_5);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        evalGraph = new EvalGraph(splitter);
        evalGraph->setObjectName(QString::fromUtf8("evalGraph"));
        sizePolicy.setHeightForWidth(evalGraph->sizePolicy().hasHeightForWidth());
        evalGraph->setSizePolicy(sizePolicy);
        evalGraph->setFocusPolicy(Qt::NoFocus);
        evalGraph->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        evalGraph->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush15(QColor(211, 215, 207, 255));
        brush15.setStyle(Qt::SolidPattern);
        evalGraph->setBackgroundBrush(brush15);
        splitter->addWidget(evalGraph);
        anIdListView = new ClickableListView(splitter);
        anIdListView->setObjectName(QString::fromUtf8("anIdListView"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(anIdListView->sizePolicy().hasHeightForWidth());
        anIdListView->setSizePolicy(sizePolicy10);
        anIdListView->setFocusPolicy(Qt::NoFocus);
        anIdListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        anIdListView->setSelectionBehavior(QAbstractItemView::SelectRows);
        anIdListView->setUniformItemSizes(true);
        splitter->addWidget(anIdListView);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);

        graphDock->setWidget(dockWidgetContents_5);
        BoardWindow->addDockWidget(Qt::BottomDockWidgetArea, graphDock);
        commentsDock = new QDockWidget(BoardWindow);
        commentsDock->setObjectName(QString::fromUtf8("commentsDock"));
        dockWidgetContents_8 = new QWidget();
        dockWidgetContents_8->setObjectName(QString::fromUtf8("dockWidgetContents_8"));
        verticalLayout = new QVBoxLayout(dockWidgetContents_8);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comments_widget = new QWidget(dockWidgetContents_8);
        comments_widget->setObjectName(QString::fromUtf8("comments_widget"));
        _15 = new QVBoxLayout(comments_widget);
        _15->setObjectName(QString::fromUtf8("_15"));
        _15->setContentsMargins(0, 0, 0, 0);
        commentEdit = new QTextEdit(comments_widget);
        commentEdit->setObjectName(QString::fromUtf8("commentEdit"));
        commentEdit->setMinimumSize(QSize(120, 20));
        commentEdit->setAcceptRichText(false);

        _15->addWidget(commentEdit);

        commentEdit2 = new QLineEdit(comments_widget);
        commentEdit2->setObjectName(QString::fromUtf8("commentEdit2"));

        _15->addWidget(commentEdit2);


        verticalLayout->addWidget(comments_widget);

        diagCommentView = new QTextEdit(dockWidgetContents_8);
        diagCommentView->setObjectName(QString::fromUtf8("diagCommentView"));
        diagCommentView->setReadOnly(true);

        verticalLayout->addWidget(diagCommentView);

        commentsDock->setWidget(dockWidgetContents_8);
        BoardWindow->addDockWidget(Qt::RightDockWidgetArea, commentsDock);
        treeDock = new QDockWidget(BoardWindow);
        treeDock->setObjectName(QString::fromUtf8("treeDock"));
        treeDockContents = new QWidget();
        treeDockContents->setObjectName(QString::fromUtf8("treeDockContents"));
        gridLayout_1 = new QGridLayout(treeDockContents);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        gridLayout_1->setVerticalSpacing(0);
        gridLayout_1->setContentsMargins(0, 0, 0, 0);
        treeFrame = new QFrame(treeDockContents);
        treeFrame->setObjectName(QString::fromUtf8("treeFrame"));
        treeFrame->setFrameShape(QFrame::StyledPanel);
        treeFrame->setFrameShadow(QFrame::Raised);
        treeLayout = new QVBoxLayout(treeFrame);
        treeLayout->setSpacing(0);
        treeLayout->setObjectName(QString::fromUtf8("treeLayout"));
        treeLayout->setContentsMargins(0, 0, 0, 0);
        gtHeaderView = new QGraphicsView(treeFrame);
        gtHeaderView->setObjectName(QString::fromUtf8("gtHeaderView"));
        sizePolicy9.setHeightForWidth(gtHeaderView->sizePolicy().hasHeightForWidth());
        gtHeaderView->setSizePolicy(sizePolicy9);
        gtHeaderView->setMaximumSize(QSize(16777215, 20));
        gtHeaderView->setFrameShape(QFrame::NoFrame);
        gtHeaderView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        gtHeaderView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        gtHeaderView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        QBrush brush16(QColor(240, 240, 240, 255));
        brush16.setStyle(Qt::SolidPattern);
        gtHeaderView->setBackgroundBrush(brush16);
        gtHeaderView->setInteractive(false);
        gtHeaderView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        treeLayout->addWidget(gtHeaderView);

        gameTreeView = new GameTree(treeFrame);
        gameTreeView->setObjectName(QString::fromUtf8("gameTreeView"));
        gameTreeView->setFrameShape(QFrame::NoFrame);
        gameTreeView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        gameTreeView->setBackgroundBrush(brush15);
        gameTreeView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        treeLayout->addWidget(gameTreeView);


        gridLayout_1->addWidget(treeFrame, 0, 0, 1, 1);

        treeDock->setWidget(treeDockContents);
        BoardWindow->addDockWidget(Qt::BottomDockWidgetArea, treeDock);
        chooseDock = new QDockWidget(BoardWindow);
        chooseDock->setObjectName(QString::fromUtf8("chooseDock"));
        chooseDockContents = new QWidget();
        chooseDockContents->setObjectName(QString::fromUtf8("chooseDockContents"));
        gridLayout_4 = new QGridLayout(chooseDockContents);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        chooseFrame = new QFrame(chooseDockContents);
        chooseFrame->setObjectName(QString::fromUtf8("chooseFrame"));
        chooseFrame->setFrameShape(QFrame::StyledPanel);
        chooseFrame->setFrameShadow(QFrame::Raised);
        chooseLayout = new QVBoxLayout(chooseFrame);
        chooseLayout->setSpacing(0);
        chooseLayout->setObjectName(QString::fromUtf8("chooseLayout"));
        chooseLayout->setContentsMargins(0, 0, 0, 0);
        gameChoiceView = new SizeGraphicsView(chooseFrame);
        gameChoiceView->setObjectName(QString::fromUtf8("gameChoiceView"));
        gameChoiceView->setFrameShape(QFrame::NoFrame);
        gameChoiceView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        gameChoiceView->setBackgroundBrush(brush15);
        gameChoiceView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        chooseLayout->addWidget(gameChoiceView);


        gridLayout_4->addWidget(chooseFrame, 0, 0, 1, 1);

        chooseDock->setWidget(chooseDockContents);
        BoardWindow->addDockWidget(Qt::LeftDockWidgetArea, chooseDock);
        miscBar = new QToolBar(BoardWindow);
        miscBar->setObjectName(QString::fromUtf8("miscBar"));
        BoardWindow->addToolBar(Qt::TopToolBarArea, miscBar);

        menubar->addAction(fileMenu->menuAction());
        menubar->addAction(editMenu->menuAction());
        menubar->addAction(navMenu->menuAction());
        menubar->addAction(anMenu->menuAction());
        menubar->addAction(viewMenu->menuAction());
        menubar->addAction(settingsMenu->menuAction());
        menubar->addAction(menu_Learn_Go->menuAction());
        menubar->addAction(helpMenu->menuAction());
        fileMenu->addAction(fileNewBoard);
        fileMenu->addAction(fileNew);
        fileMenu->addAction(fileNewVariant);
        fileMenu->addAction(fileOpen);
        fileMenu->addAction(fileOpenDB);
        fileMenu->addAction(fileSave);
        fileMenu->addAction(fileSaveAs);
        fileMenu->addAction(fileSaveVariations);
        fileMenu->addAction(fileClose);
        fileMenu->addSeparator();
        fileMenu->addAction(menu_Import_Export->menuAction());
        fileMenu->addSeparator();
        fileMenu->addAction(fileQuit);
        menu_Import_Export->addAction(fileExportASCII);
        menu_Import_Export->addAction(fileExportSVG);
        menu_Import_Export->addSeparator();
        menu_Import_Export->addAction(fileImportSgfClipB);
        menu_Import_Export->addAction(fileExportSgfClipB);
        menu_Import_Export->addSeparator();
        menu_Import_Export->addAction(fileExportPic);
        menu_Import_Export->addAction(fileExportPicClipB);
        menu_Import_Export->addSeparator();
        menu_Import_Export->addAction(fileExportSlide);
        editMenu->addAction(editUndo);
        editMenu->addAction(editRedo);
        editMenu->addSeparator();
        editMenu->addAction(setGameInfo);
        editMenu->addSeparator();
        editMenu->addAction(editCopyPos);
        editMenu->addAction(editPastePos);
        editMenu->addAction(editDelete);
        editMenu->addSeparator();
        editMenu->addAction(editStone);
        editMenu->addAction(editTriangle);
        editMenu->addAction(editCircle);
        editMenu->addAction(editSquare);
        editMenu->addAction(editCross);
        editMenu->addAction(editLetter);
        editMenu->addAction(editNumber);
        editMenu->addSeparator();
        editMenu->addAction(editFigure);
        editMenu->addAction(editAutoDiags);
        editMenu->addSeparator();
        editMenu->addAction(editRectSelect);
        editMenu->addAction(editClearSelect);
        editMenu->addAction(searchPattern);
        navMenu->addAction(navFirst);
        navMenu->addAction(navBackward);
        navMenu->addAction(navForward);
        navMenu->addAction(navLast);
        navMenu->addAction(navPrevComment);
        navMenu->addAction(navNextComment);
        navMenu->addAction(navPrevFigure);
        navMenu->addAction(navNextFigure);
        navMenu->addSeparator();
        navMenu->addAction(navAutoplay);
        navMenu->addAction(navNthMove);
        navMenu->addSeparator();
        navMenu->addAction(navMainBranch);
        navMenu->addAction(navPrevVar);
        navMenu->addAction(navNextVar);
        navMenu->addAction(navStartVar);
        navMenu->addAction(navNextBranch);
        navMenu->addSeparator();
        settingsMenu->addAction(setPreferences);
        settingsMenu->addSeparator();
        settingsMenu->addAction(soundToggle);
        viewMenu->addAction(viewStatusBar);
        viewMenu->addAction(viewMenuBar);
        viewMenu->addAction(viewSlider);
        viewMenu->addAction(viewSidebar);
        viewMenu->addSeparator();
        viewMenu->addAction(viewFullscreen);
        viewMenu->addSeparator();
        viewMenu->addAction(menuSave_layout->menuAction());
        viewMenu->addAction(menuRestore_layout->menuAction());
        viewMenu->addSeparator();
        viewMenu->addAction(viewNumbers);
        viewMenu->addAction(viewCoords);
        viewMenu->addAction(viewDiagComments);
        viewMenu->addAction(viewConnections);
        menuSave_layout->addAction(layoutSaveDefault);
        menuSave_layout->addAction(layoutSaveCurrent);
        menuRestore_layout->addAction(layoutRestoreDefault);
        menuRestore_layout->addAction(layoutRestoreCurrent);
        menuRestore_layout->addSeparator();
        menuRestore_layout->addAction(layoutLandscape);
        menuRestore_layout->addAction(layoutPortrait);
        anMenu->addAction(anChooseMenu->menuAction());
        anMenu->addAction(anConnect);
        anMenu->addAction(anDisconnect);
        anMenu->addAction(anPause);
        anMenu->addAction(anMessages);
        anMenu->addAction(menuRuleset->menuAction());
        anMenu->addSeparator();
        anMenu->addAction(anEdit);
        anMenu->addSeparator();
        anMenu->addAction(anPlay);
        anMenu->addSeparator();
        anMenu->addAction(anBatch);
        menuRuleset->addAction(rulesGuess);
        menuRuleset->addAction(rulesJapanese);
        menuRuleset->addAction(rulesChinese);
        menu_Learn_Go->addAction(actionTutorials);
        helpMenu->addAction(helpManual);
        helpMenu->addAction(helpReadme);
        helpMenu->addSeparator();
        helpMenu->addAction(helpAbout);
        helpMenu->addAction(helpAboutQt);
        fileBar->addAction(fileNewBoard);
        fileBar->addAction(fileNew);
        fileBar->addAction(fileNewVariant);
        fileBar->addAction(fileOpen);
        fileBar->addAction(fileSave);
        fileBar->addAction(fileSaveAs);
        toolBar->addAction(navMainBranch);
        toolBar->addAction(navPrevVar);
        toolBar->addAction(navNextVar);
        toolBar->addAction(navStartVar);
        toolBar->addAction(navNextBranch);
        toolBar->addAction(navIntersection);
        toolBar->addSeparator();
        toolBar->addAction(navAutoplay);
        editBar->addAction(setGameInfo);
        editBar->addSeparator();
        editBar->addAction(editDelete);
        editBar->addSeparator();
        editBar->addAction(editStone);
        editBar->addAction(editTriangle);
        editBar->addAction(editCircle);
        editBar->addAction(editSquare);
        editBar->addAction(editCross);
        editBar->addAction(editLetter);
        editBar->addAction(editNumber);
        editBar->addSeparator();
        editBar->addAction(editFigure);
        editBar->addSeparator();
        editBar->addAction(editRectSelect);
        editBar->addAction(editClearSelect);
        editBar->addAction(searchPattern);
        miscBar->addAction(soundToggle);

        retranslateUi(BoardWindow);

        toolsTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BoardWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BoardWindow)
    {
        BoardWindow->setWindowTitle(QCoreApplication::translate("BoardWindow", "MainWindow", nullptr));
        navForward->setText(QCoreApplication::translate("BoardWindow", "&Next move", nullptr));
#if QT_CONFIG(shortcut)
        navForward->setShortcut(QCoreApplication::translate("BoardWindow", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        navBackward->setText(QCoreApplication::translate("BoardWindow", "&Previous move", nullptr));
#if QT_CONFIG(shortcut)
        navBackward->setShortcut(QCoreApplication::translate("BoardWindow", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        navFirst->setText(QCoreApplication::translate("BoardWindow", "&First move", nullptr));
#if QT_CONFIG(shortcut)
        navFirst->setShortcut(QCoreApplication::translate("BoardWindow", "Home", nullptr));
#endif // QT_CONFIG(shortcut)
        navLast->setText(QCoreApplication::translate("BoardWindow", "&Last move", nullptr));
#if QT_CONFIG(shortcut)
        navLast->setShortcut(QCoreApplication::translate("BoardWindow", "End", nullptr));
#endif // QT_CONFIG(shortcut)
        navPrevVar->setText(QCoreApplication::translate("BoardWindow", "P&revious variation", nullptr));
#if QT_CONFIG(shortcut)
        navPrevVar->setShortcut(QCoreApplication::translate("BoardWindow", "Up", nullptr));
#endif // QT_CONFIG(shortcut)
        navNextVar->setText(QCoreApplication::translate("BoardWindow", "N&ext variation", nullptr));
#if QT_CONFIG(shortcut)
        navNextVar->setShortcut(QCoreApplication::translate("BoardWindow", "Down", nullptr));
#endif // QT_CONFIG(shortcut)
        navMainBranch->setText(QCoreApplication::translate("BoardWindow", "&Main branch", nullptr));
#if QT_CONFIG(shortcut)
        navMainBranch->setShortcut(QCoreApplication::translate("BoardWindow", "Ins", nullptr));
#endif // QT_CONFIG(shortcut)
        navStartVar->setText(QCoreApplication::translate("BoardWindow", "Variation &start", nullptr));
#if QT_CONFIG(tooltip)
        navStartVar->setToolTip(QCoreApplication::translate("BoardWindow", "To start of variation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        navStartVar->setShortcut(QCoreApplication::translate("BoardWindow", "PgUp", nullptr));
#endif // QT_CONFIG(shortcut)
        navNextBranch->setText(QCoreApplication::translate("BoardWindow", "Next &branch", nullptr));
#if QT_CONFIG(tooltip)
        navNextBranch->setToolTip(QCoreApplication::translate("BoardWindow", "Move to next branch starting a variation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        navNextBranch->setShortcut(QCoreApplication::translate("BoardWindow", "PgDown", nullptr));
#endif // QT_CONFIG(shortcut)
        navPrevComment->setText(QCoreApplication::translate("BoardWindow", "Previous &commented move", nullptr));
#if QT_CONFIG(tooltip)
        navPrevComment->setToolTip(QCoreApplication::translate("BoardWindow", "Move to the previous move that has a comment", nullptr));
#endif // QT_CONFIG(tooltip)
        navNextComment->setText(QCoreApplication::translate("BoardWindow", "Next c&ommented move", nullptr));
#if QT_CONFIG(tooltip)
        navNextComment->setToolTip(QCoreApplication::translate("BoardWindow", "Move to the next move that has a comment", nullptr));
#endif // QT_CONFIG(tooltip)
        navPrevFigure->setText(QCoreApplication::translate("BoardWindow", "Previous &diagram", nullptr));
#if QT_CONFIG(tooltip)
        navPrevFigure->setToolTip(QCoreApplication::translate("BoardWindow", "Move to the previous move that starts a diagram", nullptr));
#endif // QT_CONFIG(tooltip)
        navNextFigure->setText(QCoreApplication::translate("BoardWindow", "Next dia&gram", nullptr));
#if QT_CONFIG(tooltip)
        navNextFigure->setToolTip(QCoreApplication::translate("BoardWindow", "Move to the next move that starts a diagram", nullptr));
#endif // QT_CONFIG(tooltip)
        navNthMove->setText(QCoreApplication::translate("BoardWindow", "&Go to move...", nullptr));
#if QT_CONFIG(tooltip)
        navNthMove->setToolTip(QCoreApplication::translate("BoardWindow", "Enter a move number and move there", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        navNthMove->setShortcut(QCoreApplication::translate("BoardWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        navIntersection->setText(QCoreApplication::translate("BoardWindow", "Go to clic&ked move", nullptr));
#if QT_CONFIG(tooltip)
        navIntersection->setToolTip(QCoreApplication::translate("BoardWindow", "<p>Click on an intersection and move to stone played there (if any)</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        setGameInfo->setText(QCoreApplication::translate("BoardWindow", "Game &information...", nullptr));
#if QT_CONFIG(tooltip)
        setGameInfo->setToolTip(QCoreApplication::translate("BoardWindow", "Display and edit game information", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        setGameInfo->setShortcut(QCoreApplication::translate("BoardWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        editStone->setText(QCoreApplication::translate("BoardWindow", "Place &stone", nullptr));
#if QT_CONFIG(tooltip)
        editStone->setToolTip(QCoreApplication::translate("BoardWindow", "Normal mode, click to place a stone.", nullptr));
#endif // QT_CONFIG(tooltip)
        editTriangle->setText(QCoreApplication::translate("BoardWindow", "Set &triangle mark", nullptr));
#if QT_CONFIG(tooltip)
        editTriangle->setToolTip(QCoreApplication::translate("BoardWindow", "Clicking places a triangle mark.", nullptr));
#endif // QT_CONFIG(tooltip)
        editCircle->setText(QCoreApplication::translate("BoardWindow", "Set &circle mark", nullptr));
#if QT_CONFIG(tooltip)
        editCircle->setToolTip(QCoreApplication::translate("BoardWindow", "Clicking places a circle mark.", nullptr));
#endif // QT_CONFIG(tooltip)
        editSquare->setText(QCoreApplication::translate("BoardWindow", "Set s&quare mark", nullptr));
#if QT_CONFIG(tooltip)
        editSquare->setToolTip(QCoreApplication::translate("BoardWindow", "Clicking places a square mark.", nullptr));
#endif // QT_CONFIG(tooltip)
        editCross->setText(QCoreApplication::translate("BoardWindow", "Set cr&oss mark", nullptr));
#if QT_CONFIG(tooltip)
        editCross->setToolTip(QCoreApplication::translate("BoardWindow", "Clicking places a cross mark.", nullptr));
#endif // QT_CONFIG(tooltip)
        editLetter->setText(QCoreApplication::translate("BoardWindow", "Set &letter mark", nullptr));
#if QT_CONFIG(tooltip)
        editLetter->setToolTip(QCoreApplication::translate("BoardWindow", "<p>Clicking places a letter mark.</p><p>Hold shift to add a freely editable text mark.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        editNumber->setText(QCoreApplication::translate("BoardWindow", "Set &number mark", nullptr));
#if QT_CONFIG(tooltip)
        editNumber->setToolTip(QCoreApplication::translate("BoardWindow", "Clicking places a number mark.", nullptr));
#endif // QT_CONFIG(tooltip)
        editDelete->setText(QCoreApplication::translate("BoardWindow", "&Delete ", nullptr));
#if QT_CONFIG(tooltip)
        editDelete->setToolTip(QCoreApplication::translate("BoardWindow", "Delete this and all following positions.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        editDelete->setShortcut(QCoreApplication::translate("BoardWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        editRectSelect->setText(QCoreApplication::translate("BoardWindow", "Select &rectangle", nullptr));
#if QT_CONFIG(tooltip)
        editRectSelect->setToolTip(QCoreApplication::translate("BoardWindow", "<p>Choose a rectangle to export.</p>\n"
"<p>In play or edit mode, click to begin choosing a rectangle to be used when exporting to ASCII or SVG.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        editRectSelect->setShortcut(QCoreApplication::translate("BoardWindow", "R", nullptr));
#endif // QT_CONFIG(shortcut)
        editClearSelect->setText(QCoreApplication::translate("BoardWindow", "Cle&ar selection", nullptr));
#if QT_CONFIG(tooltip)
        editClearSelect->setToolTip(QCoreApplication::translate("BoardWindow", "Clear the selected rectangle and select the whole board again.", nullptr));
#endif // QT_CONFIG(tooltip)
        editFigure->setText(QCoreApplication::translate("BoardWindow", "Start dia&gram here", nullptr));
#if QT_CONFIG(tooltip)
        editFigure->setToolTip(QCoreApplication::translate("BoardWindow", "<p>If selected, the current node starts a diagram. Enable diagram display in the View menu to view and edit diagrams.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        editFigure->setShortcut(QCoreApplication::translate("BoardWindow", "G", nullptr));
#endif // QT_CONFIG(shortcut)
        fileNewBoard->setText(QCoreApplication::translate("BoardWindow", "New &board window", nullptr));
#if QT_CONFIG(shortcut)
        fileNewBoard->setShortcut(QCoreApplication::translate("BoardWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        fileNew->setText(QCoreApplication::translate("BoardWindow", "&New game", nullptr));
#if QT_CONFIG(tooltip)
        fileNew->setToolTip(QCoreApplication::translate("BoardWindow", "Creates a new game on this board.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        fileNew->setShortcut(QCoreApplication::translate("BoardWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        fileNewVariant->setText(QCoreApplication::translate("BoardWindow", "New &variant game", nullptr));
#if QT_CONFIG(tooltip)
        fileNewVariant->setToolTip(QCoreApplication::translate("BoardWindow", "Creates a new Go variant game on this board", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        fileNewVariant->setShortcut(QCoreApplication::translate("BoardWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        fileSave->setText(QCoreApplication::translate("BoardWindow", "&Save", nullptr));
#if QT_CONFIG(tooltip)
        fileSave->setToolTip(QCoreApplication::translate("BoardWindow", "Save an sgf file.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        fileSave->setShortcut(QCoreApplication::translate("BoardWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        fileOpen->setText(QCoreApplication::translate("BoardWindow", "&Open...", nullptr));
#if QT_CONFIG(tooltip)
        fileOpen->setToolTip(QCoreApplication::translate("BoardWindow", "Open an sgf file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        fileOpen->setShortcut(QCoreApplication::translate("BoardWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        fileSaveAs->setText(QCoreApplication::translate("BoardWindow", "Save &as...", nullptr));
#if QT_CONFIG(tooltip)
        fileSaveAs->setToolTip(QCoreApplication::translate("BoardWindow", "Save a sgf file under a new name.", nullptr));
#endif // QT_CONFIG(tooltip)
        fileClose->setText(QCoreApplication::translate("BoardWindow", "&Close", nullptr));
#if QT_CONFIG(tooltip)
        fileClose->setToolTip(QCoreApplication::translate("BoardWindow", "Close this window.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        fileClose->setShortcut(QCoreApplication::translate("BoardWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        fileQuit->setText(QCoreApplication::translate("BoardWindow", "E&xit", nullptr));
#if QT_CONFIG(tooltip)
        fileQuit->setToolTip(QCoreApplication::translate("BoardWindow", "Quit the application.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        fileQuit->setShortcut(QCoreApplication::translate("BoardWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        fileExportASCII->setText(QCoreApplication::translate("BoardWindow", "Export &ASCII...", nullptr));
#if QT_CONFIG(tooltip)
        fileExportASCII->setToolTip(QCoreApplication::translate("BoardWindow", "Export ASCII\n"
"Export current board to ASCII diagrams, for use in web forums.", nullptr));
#endif // QT_CONFIG(tooltip)
        fileExportSVG->setText(QCoreApplication::translate("BoardWindow", "Export S&VG...", nullptr));
#if QT_CONFIG(tooltip)
        fileExportSVG->setToolTip(QCoreApplication::translate("BoardWindow", "<p>Export SVG</p><p>Export the current board to an SVG vector graphics file.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        fileImportSgfClipB->setText(QCoreApplication::translate("BoardWindow", "Import SGF &from clipboard", nullptr));
#if QT_CONFIG(tooltip)
        fileImportSgfClipB->setToolTip(QCoreApplication::translate("BoardWindow", "<p>Import SGF from clipboard</p><p>Import a complete game in SGF format from the clipboard.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        fileExportSgfClipB->setText(QCoreApplication::translate("BoardWindow", "E&xport SGF &to clipboard", nullptr));
#if QT_CONFIG(tooltip)
        fileExportSgfClipB->setToolTip(QCoreApplication::translate("BoardWindow", "<p>Export SGF to clipboard</p><p>Export a complete game in SGF format to the clipboard.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        fileExportPic->setText(QCoreApplication::translate("BoardWindow", "Export &image...", nullptr));
#if QT_CONFIG(tooltip)
        fileExportPic->setToolTip(QCoreApplication::translate("BoardWindow", "<p>Export image</p><p>Take a screen grab of the current board and export it to an image file.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        fileExportPicClipB->setText(QCoreApplication::translate("BoardWindow", "&Export image to clipboard", nullptr));
#if QT_CONFIG(tooltip)
        fileExportPicClipB->setToolTip(QCoreApplication::translate("BoardWindow", "<p>Export image to clipboard</p><p>Take a screen grab of the current board position and export it to the clipboard as an image.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        viewStatusBar->setText(QCoreApplication::translate("BoardWindow", "Status bar", nullptr));
        viewSlider->setText(QCoreApplication::translate("BoardWindow", "Slider", nullptr));
        viewSidebar->setText(QCoreApplication::translate("BoardWindow", "Sidebar", nullptr));
#if QT_CONFIG(shortcut)
        viewSidebar->setShortcut(QCoreApplication::translate("BoardWindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        viewFullscreen->setText(QCoreApplication::translate("BoardWindow", "&Fullscreen", nullptr));
#if QT_CONFIG(shortcut)
        viewFullscreen->setShortcut(QCoreApplication::translate("BoardWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        viewNumbers->setText(QCoreApplication::translate("BoardWindow", "Move &numbers", nullptr));
        viewCoords->setText(QCoreApplication::translate("BoardWindow", "&Coordinates", nullptr));
#if QT_CONFIG(shortcut)
        viewCoords->setShortcut(QCoreApplication::translate("BoardWindow", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        layoutSaveDefault->setText(QCoreApplication::translate("BoardWindow", "As general default", nullptr));
        layoutSaveCurrent->setText(QCoreApplication::translate("BoardWindow", "For current combination of visible docks", nullptr));
        layoutRestoreDefault->setText(QCoreApplication::translate("BoardWindow", "General &default", nullptr));
        layoutRestoreCurrent->setText(QCoreApplication::translate("BoardWindow", "For &current combination of visible docks", nullptr));
#if QT_CONFIG(shortcut)
        layoutRestoreCurrent->setShortcut(QCoreApplication::translate("BoardWindow", "L", nullptr));
#endif // QT_CONFIG(shortcut)
        layoutLandscape->setText(QCoreApplication::translate("BoardWindow", "Default &landscape arrangement", nullptr));
        layoutPortrait->setText(QCoreApplication::translate("BoardWindow", "Default &portrait arrangement", nullptr));
        viewMenuBar->setText(QCoreApplication::translate("BoardWindow", "Menu bar", nullptr));
#if QT_CONFIG(shortcut)
        viewMenuBar->setShortcut(QCoreApplication::translate("BoardWindow", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        setPreferences->setText(QCoreApplication::translate("BoardWindow", "&Preferences...", nullptr));
#if QT_CONFIG(tooltip)
        setPreferences->setToolTip(QCoreApplication::translate("BoardWindow", "Bring up the preferences dialog", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        setPreferences->setShortcut(QCoreApplication::translate("BoardWindow", "Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
        soundToggle->setText(QCoreApplication::translate("BoardWindow", "&Mute stone sound", nullptr));
        helpManual->setText(QCoreApplication::translate("BoardWindow", "&Manual", nullptr));
#if QT_CONFIG(shortcut)
        helpManual->setShortcut(QCoreApplication::translate("BoardWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        helpAbout->setText(QCoreApplication::translate("BoardWindow", "&About..", nullptr));
        helpAboutQt->setText(QCoreApplication::translate("BoardWindow", "About &Qt...", nullptr));
        anConnect->setText(QCoreApplication::translate("BoardWindow", "&Connect analysis engine", nullptr));
#if QT_CONFIG(tooltip)
        anConnect->setToolTip(QCoreApplication::translate("BoardWindow", "<p>Connect analysis engine</p><p>Try to find an engine configured as an analysis tool in the engine list and connect to it.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        anDisconnect->setText(QCoreApplication::translate("BoardWindow", "&Disconnect analysis engine", nullptr));
        anPause->setText(QCoreApplication::translate("BoardWindow", "Pause analysis engine", nullptr));
#if QT_CONFIG(tooltip)
        anPause->setToolTip(QCoreApplication::translate("BoardWindow", "Click to pause or unpause the analysis engine", nullptr));
#endif // QT_CONFIG(tooltip)
        viewDiagComments->setText(QCoreApplication::translate("BoardWindow", "Dia&gram comments", nullptr));
#if QT_CONFIG(shortcut)
        viewDiagComments->setShortcut(QCoreApplication::translate("BoardWindow", "Alt+G", nullptr));
#endif // QT_CONFIG(shortcut)
        helpReadme->setText(QCoreApplication::translate("BoardWindow", "View &README", nullptr));
        anBatch->setText(QCoreApplication::translate("BoardWindow", "Batch analysis...", nullptr));
#if QT_CONFIG(tooltip)
        anBatch->setToolTip(QCoreApplication::translate("BoardWindow", "<p>Batch analysis</p><p>Open the batch analysis dialog which allows you to add SGF files to a queue to be analysed by an engine.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        editAutoDiags->setText(QCoreApplication::translate("BoardWindow", "A&utomatic diagrams...", nullptr));
        fileOpenDB->setText(QCoreApplication::translate("BoardWindow", "Open from &database...", nullptr));
        fileExportSlide->setText(QCoreApplication::translate("BoardWindow", "S&lide export...", nullptr));
#if QT_CONFIG(tooltip)
        fileExportSlide->setToolTip(QCoreApplication::translate("BoardWindow", "Open the slide export dialog", nullptr));
#endif // QT_CONFIG(tooltip)
        anPlay->setText(QCoreApplication::translate("BoardWindow", "Play against engine from current position...", nullptr));
#if QT_CONFIG(tooltip)
        anPlay->setToolTip(QCoreApplication::translate("BoardWindow", "Start a game against an engine from the current position", nullptr));
#endif // QT_CONFIG(tooltip)
        editUndo->setText(QCoreApplication::translate("BoardWindow", "&Undo", nullptr));
#if QT_CONFIG(shortcut)
        editUndo->setShortcut(QCoreApplication::translate("BoardWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        editRedo->setText(QCoreApplication::translate("BoardWindow", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        editRedo->setToolTip(QCoreApplication::translate("BoardWindow", "R&edo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        editRedo->setShortcut(QCoreApplication::translate("BoardWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        viewConnections->setText(QCoreApplication::translate("BoardWindow", "&Visualize connections", nullptr));
#if QT_CONFIG(tooltip)
        viewConnections->setToolTip(QCoreApplication::translate("BoardWindow", "<p>Show thicker lines to visualize connections between stones. May be helpful for beginners.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        fileSaveVariations->setText(QCoreApplication::translate("BoardWindow", "Export &individual variations as...", nullptr));
#if QT_CONFIG(tooltip)
        fileSaveVariations->setToolTip(QCoreApplication::translate("BoardWindow", "<p>Choose a pattern of file names and save every variation as its own file.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        anEdit->setText(QCoreApplication::translate("BoardWindow", "&Remove analysis...", nullptr));
#if QT_CONFIG(tooltip)
        anEdit->setToolTip(QCoreApplication::translate("BoardWindow", "Delete existing analysis from the file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTutorials->setText(QCoreApplication::translate("BoardWindow", "&Tutorials...", nullptr));
#if QT_CONFIG(tooltip)
        actionTutorials->setToolTip(QCoreApplication::translate("BoardWindow", "Show the beginner tutorials dialog.", nullptr));
#endif // QT_CONFIG(tooltip)
        searchPattern->setText(QCoreApplication::translate("BoardWindow", "Search &pattern...", nullptr));
#if QT_CONFIG(tooltip)
        searchPattern->setToolTip(QCoreApplication::translate("BoardWindow", "<p>Open the pattern search window and start a search for the currently selected pattern.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        searchPattern->setShortcut(QCoreApplication::translate("BoardWindow", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        editCopyPos->setText(QCoreApplication::translate("BoardWindow", "Copy position", nullptr));
#if QT_CONFIG(tooltip)
        editCopyPos->setToolTip(QCoreApplication::translate("BoardWindow", "Copy the board position into the clipboard. It can be pasted in edit mode.", nullptr));
#endif // QT_CONFIG(tooltip)
        editPastePos->setText(QCoreApplication::translate("BoardWindow", "Paste position (Edit mode only)", nullptr));
#if QT_CONFIG(tooltip)
        editPastePos->setToolTip(QCoreApplication::translate("BoardWindow", "Paste a position from the clipboard.", nullptr));
#endif // QT_CONFIG(tooltip)
        anMessages->setText(QCoreApplication::translate("BoardWindow", "&Show engine messages", nullptr));
        rulesGuess->setText(QCoreApplication::translate("BoardWindow", "Best guess from SGF", nullptr));
        rulesJapanese->setText(QCoreApplication::translate("BoardWindow", "Japanese", nullptr));
        rulesChinese->setText(QCoreApplication::translate("BoardWindow", "Chinese", nullptr));
        navAutoplay->setText(QCoreApplication::translate("BoardWindow", "&Autoplay", nullptr));
#if QT_CONFIG(tooltip)
        navAutoplay->setToolTip(QCoreApplication::translate("BoardWindow", "Autoplay", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        navAutoplay->setShortcut(QCoreApplication::translate("BoardWindow", "Ctrl+Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(whatsthis)
        gfx_board->setWhatsThis(QCoreApplication::translate("BoardWindow", "Click on the board to place a stone.\n"
"\n"
"When in normal mode, left click plays moves in alternating colors.\n"
"Shift + left click moves to the first move in the main branch.\n"
"Shift + right click moves to the next move in the current branch.\n"
"When in edit mode and editing stones, left click places a black, right click a white stone, clicking on an existant stone removes it.\n"
"When editing marks, left click sets, right click removes the mark. When editing letter marks, shift-click allows to customize the mark text.\n"
"When in score mode, left click to mark a group as dead, right click to mark it alive in seki. Click again to unmark as dead or seki.", nullptr));
#endif // QT_CONFIG(whatsthis)
        gfx_board->setProperty("caption", QVariant(QString()));
        label_3->setText(QCoreApplication::translate("BoardWindow", "Autoplay in progress", nullptr));
        autoplayToolButton->setText(QCoreApplication::translate("BoardWindow", "Stop autoplay", nullptr));
        autoPauseButton->setText(QCoreApplication::translate("BoardWindow", "...", nullptr));
        label_2->setText(QCoreApplication::translate("BoardWindow", "Speed:", nullptr));
#if QT_CONFIG(tooltip)
        autoSlider->setToolTip(QCoreApplication::translate("BoardWindow", "Set the speed for autoplay, in half-second increments", nullptr));
#endif // QT_CONFIG(tooltip)
        autoSpeedLabel->setText(QCoreApplication::translate("BoardWindow", "TextLabel", nullptr));
#if QT_CONFIG(whatsthis)
        sliderLeftLabel->setWhatsThis(QCoreApplication::translate("BoardWindow", "Slider min value\n"
"\n"
"Minimum game move the slider can currently show.", nullptr));
#endif // QT_CONFIG(whatsthis)
        sliderLeftLabel->setText(QCoreApplication::translate("BoardWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        slider->setToolTip(QCoreApplication::translate("BoardWindow", "Navigate through the game", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        slider->setWhatsThis(QCoreApplication::translate("BoardWindow", "Navigate to move\n"
"\n"
"Use the slider to quickly navigate through the current branch of the game.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        sliderRightLabel->setWhatsThis(QCoreApplication::translate("BoardWindow", "Slider max value\n"
"\n"
"Maximum game move the slider can currently show.", nullptr));
#endif // QT_CONFIG(whatsthis)
        sliderRightLabel->setText(QCoreApplication::translate("BoardWindow", "000", nullptr));
#if QT_CONFIG(tooltip)
        moveNumLabel->setToolTip(QCoreApplication::translate("BoardWindow", "Move number", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        moveNumLabel->setWhatsThis(QCoreApplication::translate("BoardWindow", "Move number\n"
"\n"
"Number of the currently displayed move.", nullptr));
#endif // QT_CONFIG(whatsthis)
        moveNumLabel->setText(QCoreApplication::translate("BoardWindow", "Move 0\n"
"Variation 1 of 20\n"
"0 child positions", nullptr));
#if QT_CONFIG(tooltip)
        goFirstButton->setToolTip(QCoreApplication::translate("BoardWindow", "Go to first move.", nullptr));
#endif // QT_CONFIG(tooltip)
        goFirstButton->setText(QCoreApplication::translate("BoardWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        goPrevButton->setToolTip(QCoreApplication::translate("BoardWindow", "Go to previous move.", nullptr));
#endif // QT_CONFIG(tooltip)
        goPrevButton->setText(QCoreApplication::translate("BoardWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        goNextButton->setToolTip(QCoreApplication::translate("BoardWindow", "Go to next move.", nullptr));
#endif // QT_CONFIG(tooltip)
        goNextButton->setText(QCoreApplication::translate("BoardWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        goLastButton->setToolTip(QCoreApplication::translate("BoardWindow", "Go to last move.", nullptr));
#endif // QT_CONFIG(tooltip)
        goLastButton->setText(QCoreApplication::translate("BoardWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        prevCommentButton->setToolTip(QCoreApplication::translate("BoardWindow", "Go to previous commented move.", nullptr));
#endif // QT_CONFIG(tooltip)
        prevCommentButton->setText(QCoreApplication::translate("BoardWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        nextCommentButton->setToolTip(QCoreApplication::translate("BoardWindow", "Go to next commented move.", nullptr));
#endif // QT_CONFIG(tooltip)
        nextCommentButton->setText(QCoreApplication::translate("BoardWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        prevNumberButton->setToolTip(QCoreApplication::translate("BoardWindow", "Go to previous figure.", nullptr));
#endif // QT_CONFIG(tooltip)
        prevNumberButton->setText(QCoreApplication::translate("BoardWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        nextNumberButton->setToolTip(QCoreApplication::translate("BoardWindow", "Go to next figure.", nullptr));
#endif // QT_CONFIG(tooltip)
        nextNumberButton->setText(QCoreApplication::translate("BoardWindow", "next", nullptr));
#if QT_CONFIG(tooltip)
        turnLabel->setToolTip(QCoreApplication::translate("BoardWindow", "Player to play", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        turnLabel->setWhatsThis(QCoreApplication::translate("BoardWindow", "Player to play\n"
"\n"
"Indicates whether it is black's or white's turn.", nullptr));
#endif // QT_CONFIG(whatsthis)
        turnLabel->setText(QCoreApplication::translate("BoardWindow", "Black to play", nullptr));
#if QT_CONFIG(tooltip)
        turnWarning->setToolTip(QCoreApplication::translate("BoardWindow", "Indicates that it's not the expected player's move.", nullptr));
#endif // QT_CONFIG(tooltip)
        turnWarning->setText(QString());
#if QT_CONFIG(tooltip)
        colorButton->setToolTip(QCoreApplication::translate("BoardWindow", "Toggle player to move.", nullptr));
#endif // QT_CONFIG(tooltip)
        colorButton->setText(QCoreApplication::translate("BoardWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        refreshButton->setToolTip(QCoreApplication::translate("BoardWindow", "Update game record from on-line game", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        refreshButton->setWhatsThis(QCoreApplication::translate("BoardWindow", "Update from online game.\n"
"This window was opened through \"Edit game\" while observing an online game.\n"
"The update button refreshes the game in this window, adding any moves that were made in the actual game in the meantime. This operation discards any edits you may have made.", nullptr));
#endif // QT_CONFIG(whatsthis)
        refreshButton->setText(QCoreApplication::translate("BoardWindow", "Update", nullptr));
#if QT_CONFIG(tooltip)
        leaveMatchButton->setToolTip(QCoreApplication::translate("BoardWindow", "Turn this window into a normal SGF editing window.\n"
"Currently, it is in a post-game state where you can still chat with the opponent.", nullptr));
#endif // QT_CONFIG(tooltip)
        leaveMatchButton->setText(QCoreApplication::translate("BoardWindow", "Disconnect chat", nullptr));
        followButton->setText(QCoreApplication::translate("BoardWindow", "Follow", nullptr));
#if QT_CONFIG(tooltip)
        passButton->setToolTip(QCoreApplication::translate("BoardWindow", "Pass move", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        passButton->setWhatsThis(QCoreApplication::translate("BoardWindow", "Pass\n"
"\n"
"Pass your turn.", nullptr));
#endif // QT_CONFIG(whatsthis)
        passButton->setText(QCoreApplication::translate("BoardWindow", "Pass", nullptr));
#if QT_CONFIG(tooltip)
        againButton->setToolTip(QCoreApplication::translate("BoardWindow", "Restart the game against the computer.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        againButton->setWhatsThis(QCoreApplication::translate("BoardWindow", "Restart the game against the computer.", nullptr));
#endif // QT_CONFIG(whatsthis)
        againButton->setText(QCoreApplication::translate("BoardWindow", "Play again", nullptr));
#if QT_CONFIG(tooltip)
        undoButton->setToolTip(QCoreApplication::translate("BoardWindow", "Undo last move", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        undoButton->setWhatsThis(QCoreApplication::translate("BoardWindow", "Undo\n"
"\n"
"Undo the opponent's last move.", nullptr));
#endif // QT_CONFIG(whatsthis)
        undoButton->setText(QCoreApplication::translate("BoardWindow", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        adjournButton->setToolTip(QCoreApplication::translate("BoardWindow", "Request adjournment", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        adjournButton->setWhatsThis(QCoreApplication::translate("BoardWindow", "Adjourn.\n"
"\n"
"Send adjournment request to your opponent. If he accept it, the game will be adjourned and saved.", nullptr));
#endif // QT_CONFIG(whatsthis)
        adjournButton->setText(QCoreApplication::translate("BoardWindow", "Adjourn", nullptr));
#if QT_CONFIG(tooltip)
        scoreButton->setToolTip(QCoreApplication::translate("BoardWindow", "Score the game", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        scoreButton->setWhatsThis(QCoreApplication::translate("BoardWindow", "Switch to coring mode.", nullptr));
#endif // QT_CONFIG(whatsthis)
        scoreButton->setText(QCoreApplication::translate("BoardWindow", "Score", nullptr));
#if QT_CONFIG(tooltip)
        doneButton->setToolTip(QCoreApplication::translate("BoardWindow", "Accept the score and end the game.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        doneButton->setWhatsThis(QCoreApplication::translate("BoardWindow", "Accept the score, leave scoring mode and end the game.", nullptr));
#endif // QT_CONFIG(whatsthis)
        doneButton->setText(QCoreApplication::translate("BoardWindow", "Done", nullptr));
#if QT_CONFIG(tooltip)
        editButton->setToolTip(QCoreApplication::translate("BoardWindow", "Edit the game in a new window.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        editButton->setWhatsThis(QCoreApplication::translate("BoardWindow", "Open a window with an offline copy of the game for editing.", nullptr));
#endif // QT_CONFIG(whatsthis)
        editButton->setText(QCoreApplication::translate("BoardWindow", "Edit Game", nullptr));
#if QT_CONFIG(tooltip)
        editPosButton->setToolTip(QCoreApplication::translate("BoardWindow", "Enter and leave edit mode where stones can be placed freely.\n"
"When you enter edit mode from any position, you always have the option to append your edits\n"
"as a new position after the current one. Depending on circumstances, you may also have the\n"
"option to replace an edited position, or to insert your edits before the current position.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        editPosButton->setWhatsThis(QCoreApplication::translate("BoardWindow", "Freely edit the board position. Edited positions are added below the current one.", nullptr));
#endif // QT_CONFIG(whatsthis)
        editPosButton->setText(QCoreApplication::translate("BoardWindow", "Edit Position", nullptr));
#if QT_CONFIG(tooltip)
        editAppendButton->setToolTip(QCoreApplication::translate("BoardWindow", "Append your edits as a successor to the current position.", nullptr));
#endif // QT_CONFIG(tooltip)
        editAppendButton->setText(QCoreApplication::translate("BoardWindow", "Append", nullptr));
#if QT_CONFIG(tooltip)
        editInsertButton->setToolTip(QCoreApplication::translate("BoardWindow", "Insert your edits before the current position.", nullptr));
#endif // QT_CONFIG(tooltip)
        editInsertButton->setText(QCoreApplication::translate("BoardWindow", "Insert before", nullptr));
#if QT_CONFIG(tooltip)
        editReplaceButton->setToolTip(QCoreApplication::translate("BoardWindow", "Replace the current position with your edits.", nullptr));
#endif // QT_CONFIG(tooltip)
        editReplaceButton->setText(QCoreApplication::translate("BoardWindow", "Replace", nullptr));
#if QT_CONFIG(tooltip)
        resignButton->setToolTip(QCoreApplication::translate("BoardWindow", "Default Loss", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        resignButton->setWhatsThis(QCoreApplication::translate("BoardWindow", "Resign.\n"
"\n"
"Resign the game immediately. Clicking here is a default loss. Your opponent wins. Game ends.", nullptr));
#endif // QT_CONFIG(whatsthis)
        resignButton->setText(QCoreApplication::translate("BoardWindow", "RESIGN", nullptr));
        unobserveButton->setText(QCoreApplication::translate("BoardWindow", "Close game", nullptr));
#if QT_CONFIG(whatsthis)
        toolsTabWidget->setWhatsThis(QCoreApplication::translate("BoardWindow", "Tools tab\n"
"\n"
"N/S	normal/score tools\n"
"TG	teaching tools", nullptr));
#endif // QT_CONFIG(whatsthis)
        toolsTabWidget->setTabText(toolsTabWidget->indexOf(tab_ns), QCoreApplication::translate("BoardWindow", "NS", nullptr));
        TextLabel_opponent->setText(QCoreApplication::translate("BoardWindow", "opponent:", nullptr));
        cb_opponent->setItemText(0, QCoreApplication::translate("BoardWindow", "-- none --", nullptr));

#if QT_CONFIG(tooltip)
        cb_opponent->setToolTip(QCoreApplication::translate("BoardWindow", "opponent: invited by teacher", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        cb_opponent->setWhatsThis(QCoreApplication::translate("BoardWindow", "opponent\n"
"\n"
"choose opponent from list to enable him playing with you in a teaching game.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        pb_controls->setToolTip(QCoreApplication::translate("BoardWindow", "hand over controls to opponent", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pb_controls->setWhatsThis(QCoreApplication::translate("BoardWindow", "hand over controls to opponent to allow him placing black and white stones, undo etc.\n"
"\n"
"Only teacher can give control,\n"
"both teacher and pupil can release control.", nullptr));
#endif // QT_CONFIG(whatsthis)
        pb_controls->setText(QCoreApplication::translate("BoardWindow", "controls", nullptr));
#if QT_CONFIG(tooltip)
        pb_mark->setToolTip(QCoreApplication::translate("BoardWindow", "remember that point for fast return", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pb_mark->setWhatsThis(QCoreApplication::translate("BoardWindow", "push button at starting point to enable remembering.\n"
"After placing and/or undo release button for returning to starting point automatically.", nullptr));
#endif // QT_CONFIG(whatsthis)
        pb_mark->setText(QCoreApplication::translate("BoardWindow", "mark", nullptr));
        toolsTabWidget->setTabText(toolsTabWidget->indexOf(tab_tg), QCoreApplication::translate("BoardWindow", "TG", nullptr));
        fileMenu->setTitle(QCoreApplication::translate("BoardWindow", "&File", nullptr));
        menu_Import_Export->setTitle(QCoreApplication::translate("BoardWindow", "Import/E&xport", nullptr));
        editMenu->setTitle(QCoreApplication::translate("BoardWindow", "&Edit", nullptr));
        navMenu->setTitle(QCoreApplication::translate("BoardWindow", "&Navigation", nullptr));
        settingsMenu->setTitle(QCoreApplication::translate("BoardWindow", "&Settings", nullptr));
        viewMenu->setTitle(QCoreApplication::translate("BoardWindow", "&View", nullptr));
        menuSave_layout->setTitle(QCoreApplication::translate("BoardWindow", "&Save layout", nullptr));
        menuRestore_layout->setTitle(QCoreApplication::translate("BoardWindow", "&Restore layout", nullptr));
        anMenu->setTitle(QCoreApplication::translate("BoardWindow", "&Analysis", nullptr));
        anChooseMenu->setTitle(QCoreApplication::translate("BoardWindow", "Choose analysis engine", nullptr));
        menuRuleset->setTitle(QCoreApplication::translate("BoardWindow", "Ruleset", nullptr));
        menu_Learn_Go->setTitle(QCoreApplication::translate("BoardWindow", "&Learn Go", nullptr));
        helpMenu->setTitle(QCoreApplication::translate("BoardWindow", "&Help", nullptr));
        fileBar->setWindowTitle(QCoreApplication::translate("BoardWindow", "File toolbar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("BoardWindow", "Navigation toolbar", nullptr));
        editBar->setWindowTitle(QCoreApplication::translate("BoardWindow", "Edit toolbar", nullptr));
        diagsDock->setWindowTitle(QCoreApplication::translate("BoardWindow", "Diagrams", nullptr));
        label->setText(QCoreApplication::translate("BoardWindow", "Choose:", nullptr));
        diagASCIIButton->setText(QCoreApplication::translate("BoardWindow", "E&xport ASCII", nullptr));
        diagSVGButton->setText(QCoreApplication::translate("BoardWindow", "Export S&VG", nullptr));
        diagEditButton->setText(QCoreApplication::translate("BoardWindow", "Edit &Diagram", nullptr));
        observersDock->setWindowTitle(QCoreApplication::translate("BoardWindow", "Observers", nullptr));
        graphDock->setWindowTitle(QCoreApplication::translate("BoardWindow", "Evaluation graph", nullptr));
        commentsDock->setWindowTitle(QCoreApplication::translate("BoardWindow", "Comments", nullptr));
        treeDock->setWindowTitle(QCoreApplication::translate("BoardWindow", "Game tree", nullptr));
        chooseDock->setWindowTitle(QCoreApplication::translate("BoardWindow", "Game selection", nullptr));
        miscBar->setWindowTitle(QCoreApplication::translate("BoardWindow", "Miscellaneous toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoardWindow: public Ui_BoardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDWINDOW_GUI_H
