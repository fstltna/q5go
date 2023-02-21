/********************************************************************************
** Form generated from reading UI file 'patternsearch_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATTERNSEARCH_GUI_H
#define UI_PATTERNSEARCH_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "board.h"
#include "clickableviews.h"
#include "sizegraphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_PatternSearchWindow
{
public:
    QAction *navForward;
    QAction *navBackward;
    QAction *navFirst;
    QAction *navLast;
    QAction *editStone;
    QAction *editDelete;
    QAction *editClearSelect;
    QAction *fileNewBoard;
    QAction *fileClose;
    QAction *fileQuit;
    QAction *viewCoords;
    QAction *setPreferences;
    QAction *helpAbout;
    QAction *helpAboutQt;
    QAction *helpReadme;
    QAction *fileOpenDB;
    QAction *searchPattern;
    QAction *editBlack;
    QAction *editWhite;
    QAction *resetAll;
    QAction *helpUsing;
    QAction *searchAll;
    QAction *viewPercent;
    QAction *viewLetters;
    QAction *viewNumbers;
    QAction *navGotoCont;
    QAction *setDBPrefs;
    QAction *actionReset;
    QAction *anchorAction;
    QAction *forgetAction;
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
    SimpleBoard *boardView;
    QHBoxLayout *_4;
    QWidget *sliderWidget;
    QHBoxLayout *horizontalLayout_5;
    QMenuBar *menubar;
    QMenu *fileMenu;
    QMenu *settingsMenu;
    QMenu *viewMenu;
    QMenu *helpMenu;
    QMenu *menuSearch;
    QMenu *menu_Edit;
    QMenu *menu_Navigation;
    QToolBar *fileBar;
    QToolBar *toolBar;
    QToolBar *editBar;
    QDockWidget *listDock;
    QWidget *listContents;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    ClickableListView *dbListView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *openButton;
    QPushButton *resetButton;
    QProgressBar *progressBar;
    QDockWidget *chooseDock;
    QWidget *chooseDockContents;
    QGridLayout *gridLayout1;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    SizeGraphicsView *gameChoiceView;
    QDockWidget *infoDock;
    QWidget *infoContents;
    QHBoxLayout *horizontalLayout_3;
    QFrame *infoFrame;
    QHBoxLayout *horizontalLayout_6;
    QGraphicsView *gameInfoView;
    QToolBar *miscBar;
    QDockWidget *statsDock;
    QWidget *statsContents;
    QHBoxLayout *horizontalLayout_7;
    QFrame *statsFrame;
    QVBoxLayout *verticalLayout_3;
    QFrame *statsButtonFrame;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QSpacerItem *horizontalSpacer_2;
    SizeGraphicsView *statsView;
    QDockWidget *dockWidget_2;
    QWidget *resultContents;
    QVBoxLayout *verticalLayout_4;
    QFrame *resultFrame;
    QHBoxLayout *horizontalLayout_9;
    QGraphicsView *resultView;

    void setupUi(QMainWindow *PatternSearchWindow)
    {
        if (PatternSearchWindow->objectName().isEmpty())
            PatternSearchWindow->setObjectName(QString::fromUtf8("PatternSearchWindow"));
        PatternSearchWindow->resize(1192, 643);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/qgo.png"), QSize(), QIcon::Normal, QIcon::Off);
        PatternSearchWindow->setWindowIcon(icon);
        navForward = new QAction(PatternSearchWindow);
        navForward->setObjectName(QString::fromUtf8("navForward"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/1rightarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        navForward->setIcon(icon1);
        navBackward = new QAction(PatternSearchWindow);
        navBackward->setObjectName(QString::fromUtf8("navBackward"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/1leftarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        navBackward->setIcon(icon2);
        navFirst = new QAction(PatternSearchWindow);
        navFirst->setObjectName(QString::fromUtf8("navFirst"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/2leftarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        navFirst->setIcon(icon3);
        navLast = new QAction(PatternSearchWindow);
        navLast->setObjectName(QString::fromUtf8("navLast"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/2rightarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        navLast->setIcon(icon4);
        editStone = new QAction(PatternSearchWindow);
        editStone->setObjectName(QString::fromUtf8("editStone"));
        editStone->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/editstone.png"), QSize(), QIcon::Normal, QIcon::Off);
        editStone->setIcon(icon5);
        editDelete = new QAction(PatternSearchWindow);
        editDelete->setObjectName(QString::fromUtf8("editDelete"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/edit-cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        editDelete->setIcon(icon6);
        editDelete->setVisible(false);
        editClearSelect = new QAction(PatternSearchWindow);
        editClearSelect->setObjectName(QString::fromUtf8("editClearSelect"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/clear_select.png"), QSize(), QIcon::Normal, QIcon::Off);
        editClearSelect->setIcon(icon7);
        fileNewBoard = new QAction(PatternSearchWindow);
        fileNewBoard->setObjectName(QString::fromUtf8("fileNewBoard"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/new_board.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileNewBoard->setIcon(icon8);
        fileClose = new QAction(PatternSearchWindow);
        fileClose->setObjectName(QString::fromUtf8("fileClose"));
        fileQuit = new QAction(PatternSearchWindow);
        fileQuit->setObjectName(QString::fromUtf8("fileQuit"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/fileexit.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileQuit->setIcon(icon9);
        fileQuit->setMenuRole(QAction::QuitRole);
        viewCoords = new QAction(PatternSearchWindow);
        viewCoords->setObjectName(QString::fromUtf8("viewCoords"));
        viewCoords->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/coords.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewCoords->setIcon(icon10);
        setPreferences = new QAction(PatternSearchWindow);
        setPreferences->setObjectName(QString::fromUtf8("setPreferences"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/prefs.png"), QSize(), QIcon::Normal, QIcon::Off);
        setPreferences->setIcon(icon11);
        setPreferences->setMenuRole(QAction::PreferencesRole);
        helpAbout = new QAction(PatternSearchWindow);
        helpAbout->setObjectName(QString::fromUtf8("helpAbout"));
        helpAbout->setMenuRole(QAction::AboutRole);
        helpAboutQt = new QAction(PatternSearchWindow);
        helpAboutQt->setObjectName(QString::fromUtf8("helpAboutQt"));
        helpAboutQt->setMenuRole(QAction::AboutQtRole);
        helpReadme = new QAction(PatternSearchWindow);
        helpReadme->setObjectName(QString::fromUtf8("helpReadme"));
        fileOpenDB = new QAction(PatternSearchWindow);
        fileOpenDB->setObjectName(QString::fromUtf8("fileOpenDB"));
        searchPattern = new QAction(PatternSearchWindow);
        searchPattern->setObjectName(QString::fromUtf8("searchPattern"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchPattern->setIcon(icon12);
        editBlack = new QAction(PatternSearchWindow);
        editBlack->setObjectName(QString::fromUtf8("editBlack"));
        editBlack->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/stone_b32.png"), QSize(), QIcon::Normal, QIcon::Off);
        editBlack->setIcon(icon13);
        editWhite = new QAction(PatternSearchWindow);
        editWhite->setObjectName(QString::fromUtf8("editWhite"));
        editWhite->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/stone_w32.png"), QSize(), QIcon::Normal, QIcon::Off);
        editWhite->setIcon(icon14);
        resetAll = new QAction(PatternSearchWindow);
        resetAll->setObjectName(QString::fromUtf8("resetAll"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetAll->setIcon(icon15);
        helpUsing = new QAction(PatternSearchWindow);
        helpUsing->setObjectName(QString::fromUtf8("helpUsing"));
        searchAll = new QAction(PatternSearchWindow);
        searchAll->setObjectName(QString::fromUtf8("searchAll"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/searchall.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchAll->setIcon(icon16);
        viewPercent = new QAction(PatternSearchWindow);
        viewPercent->setObjectName(QString::fromUtf8("viewPercent"));
        viewPercent->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/viewpercent.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewPercent->setIcon(icon17);
        viewLetters = new QAction(PatternSearchWindow);
        viewLetters->setObjectName(QString::fromUtf8("viewLetters"));
        viewLetters->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/viewletters.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewLetters->setIcon(icon18);
        viewNumbers = new QAction(PatternSearchWindow);
        viewNumbers->setObjectName(QString::fromUtf8("viewNumbers"));
        viewNumbers->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/viewnumbers.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewNumbers->setIcon(icon19);
        navGotoCont = new QAction(PatternSearchWindow);
        navGotoCont->setObjectName(QString::fromUtf8("navGotoCont"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/goto-cont.png"), QSize(), QIcon::Normal, QIcon::Off);
        navGotoCont->setIcon(icon20);
        setDBPrefs = new QAction(PatternSearchWindow);
        setDBPrefs->setObjectName(QString::fromUtf8("setDBPrefs"));
        setDBPrefs->setMenuRole(QAction::PreferencesRole);
        actionReset = new QAction(PatternSearchWindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset->setIcon(icon21);
        anchorAction = new QAction(PatternSearchWindow);
        anchorAction->setObjectName(QString::fromUtf8("anchorAction"));
        anchorAction->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/anchor.png"), QSize(), QIcon::Normal, QIcon::Off);
        anchorAction->setIcon(icon22);
        forgetAction = new QAction(PatternSearchWindow);
        forgetAction->setObjectName(QString::fromUtf8("forgetAction"));
        centralwidget = new QWidget(PatternSearchWindow);
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
        _2->setSpacing(6);
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
        boardView = new SimpleBoard(boardFrame);
        boardView->setObjectName(QString::fromUtf8("boardView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(boardView->sizePolicy().hasHeightForWidth());
        boardView->setSizePolicy(sizePolicy1);
        boardView->setMinimumSize(QSize(300, 300));

        horizontalLayout_2->addWidget(boardView);


        _3->addLayout(horizontalLayout_2);

        _4 = new QHBoxLayout();
        _4->setSpacing(6);
        _4->setObjectName(QString::fromUtf8("_4"));
        _4->setContentsMargins(1, 1, 1, 1);

        _3->addLayout(_4);


        _2->addLayout(_3);


        gridLayout->addLayout(_2, 0, 0, 1, 1);

        sliderWidget = new QWidget(boardFrame);
        sliderWidget->setObjectName(QString::fromUtf8("sliderWidget"));
        horizontalLayout_5 = new QHBoxLayout(sliderWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(6, 0, 6, 0);

        gridLayout->addWidget(sliderWidget, 1, 0, 1, 1);


        mainGridLayout->addWidget(boardFrame, 0, 0, 1, 1);


        gridLayout_6->addWidget(widget, 0, 0, 1, 1);


        gridLayout_5->addWidget(mainWidget, 0, 1, 1, 1);

        PatternSearchWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PatternSearchWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1192, 23));
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        settingsMenu = new QMenu(menubar);
        settingsMenu->setObjectName(QString::fromUtf8("settingsMenu"));
        viewMenu = new QMenu(menubar);
        viewMenu->setObjectName(QString::fromUtf8("viewMenu"));
        helpMenu = new QMenu(menubar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        menuSearch = new QMenu(menubar);
        menuSearch->setObjectName(QString::fromUtf8("menuSearch"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        menu_Navigation = new QMenu(menubar);
        menu_Navigation->setObjectName(QString::fromUtf8("menu_Navigation"));
        PatternSearchWindow->setMenuBar(menubar);
        fileBar = new QToolBar(PatternSearchWindow);
        fileBar->setObjectName(QString::fromUtf8("fileBar"));
        PatternSearchWindow->addToolBar(Qt::TopToolBarArea, fileBar);
        toolBar = new QToolBar(PatternSearchWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        PatternSearchWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        editBar = new QToolBar(PatternSearchWindow);
        editBar->setObjectName(QString::fromUtf8("editBar"));
        PatternSearchWindow->addToolBar(Qt::TopToolBarArea, editBar);
        listDock = new QDockWidget(PatternSearchWindow);
        listDock->setObjectName(QString::fromUtf8("listDock"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listDock->sizePolicy().hasHeightForWidth());
        listDock->setSizePolicy(sizePolicy2);
        listDock->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        listContents = new QWidget();
        listContents->setObjectName(QString::fromUtf8("listContents"));
        horizontalLayout_4 = new QHBoxLayout(listContents);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dbListView = new ClickableListView(listContents);
        dbListView->setObjectName(QString::fromUtf8("dbListView"));
        dbListView->setSelectionBehavior(QAbstractItemView::SelectRows);
        dbListView->setUniformItemSizes(true);

        verticalLayout->addWidget(dbListView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        openButton = new QPushButton(listContents);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        openButton->setIcon(icon23);

        horizontalLayout->addWidget(openButton);

        resetButton = new QPushButton(listContents);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setIcon(icon21);

        horizontalLayout->addWidget(resetButton);


        verticalLayout->addLayout(horizontalLayout);

        progressBar = new QProgressBar(listContents);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);


        horizontalLayout_4->addLayout(verticalLayout);

        listDock->setWidget(listContents);
        PatternSearchWindow->addDockWidget(Qt::RightDockWidgetArea, listDock);
        chooseDock = new QDockWidget(PatternSearchWindow);
        chooseDock->setObjectName(QString::fromUtf8("chooseDock"));
        chooseDock->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        chooseDockContents = new QWidget();
        chooseDockContents->setObjectName(QString::fromUtf8("chooseDockContents"));
        gridLayout1 = new QGridLayout(chooseDockContents);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setVerticalSpacing(0);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(chooseDockContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gameChoiceView = new SizeGraphicsView(frame);
        gameChoiceView->setObjectName(QString::fromUtf8("gameChoiceView"));
        gameChoiceView->setMinimumSize(QSize(150, 0));
        gameChoiceView->setFrameShape(QFrame::NoFrame);
        gameChoiceView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        QBrush brush(QColor(211, 215, 207, 255));
        brush.setStyle(Qt::SolidPattern);
        gameChoiceView->setBackgroundBrush(brush);
        gameChoiceView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(gameChoiceView);


        gridLayout1->addWidget(frame, 0, 0, 1, 1);

        chooseDock->setWidget(chooseDockContents);
        PatternSearchWindow->addDockWidget(Qt::LeftDockWidgetArea, chooseDock);
        infoDock = new QDockWidget(PatternSearchWindow);
        infoDock->setObjectName(QString::fromUtf8("infoDock"));
        infoDock->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        infoContents = new QWidget();
        infoContents->setObjectName(QString::fromUtf8("infoContents"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(infoContents->sizePolicy().hasHeightForWidth());
        infoContents->setSizePolicy(sizePolicy3);
        horizontalLayout_3 = new QHBoxLayout(infoContents);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        infoFrame = new QFrame(infoContents);
        infoFrame->setObjectName(QString::fromUtf8("infoFrame"));
        sizePolicy3.setHeightForWidth(infoFrame->sizePolicy().hasHeightForWidth());
        infoFrame->setSizePolicy(sizePolicy3);
        infoFrame->setFrameShape(QFrame::StyledPanel);
        infoFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(infoFrame);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        gameInfoView = new QGraphicsView(infoFrame);
        gameInfoView->setObjectName(QString::fromUtf8("gameInfoView"));
        gameInfoView->setFrameShape(QFrame::NoFrame);
        gameInfoView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        gameInfoView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_6->addWidget(gameInfoView);


        horizontalLayout_3->addWidget(infoFrame);

        infoDock->setWidget(infoContents);
        PatternSearchWindow->addDockWidget(Qt::RightDockWidgetArea, infoDock);
        miscBar = new QToolBar(PatternSearchWindow);
        miscBar->setObjectName(QString::fromUtf8("miscBar"));
        PatternSearchWindow->addToolBar(Qt::TopToolBarArea, miscBar);
        statsDock = new QDockWidget(PatternSearchWindow);
        statsDock->setObjectName(QString::fromUtf8("statsDock"));
        statsContents = new QWidget();
        statsContents->setObjectName(QString::fromUtf8("statsContents"));
        horizontalLayout_7 = new QHBoxLayout(statsContents);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        statsFrame = new QFrame(statsContents);
        statsFrame->setObjectName(QString::fromUtf8("statsFrame"));
        statsFrame->setFrameShape(QFrame::StyledPanel);
        statsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(statsFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        statsButtonFrame = new QFrame(statsFrame);
        statsButtonFrame->setObjectName(QString::fromUtf8("statsButtonFrame"));
        horizontalLayout_8 = new QHBoxLayout(statsButtonFrame);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        toolButton = new QToolButton(statsButtonFrame);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/bars.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon24);

        horizontalLayout_8->addWidget(toolButton);

        toolButton_2 = new QToolButton(statsButtonFrame);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/lines.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon25);

        horizontalLayout_8->addWidget(toolButton_2);

        horizontalSpacer_2 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(statsButtonFrame);

        statsView = new SizeGraphicsView(statsFrame);
        statsView->setObjectName(QString::fromUtf8("statsView"));
        statsView->setMinimumSize(QSize(150, 0));
        statsView->setFrameShape(QFrame::NoFrame);
        statsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        statsView->setBackgroundBrush(brush);
        statsView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_3->addWidget(statsView);


        horizontalLayout_7->addWidget(statsFrame);

        statsDock->setWidget(statsContents);
        PatternSearchWindow->addDockWidget(Qt::RightDockWidgetArea, statsDock);
        dockWidget_2 = new QDockWidget(PatternSearchWindow);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        resultContents = new QWidget();
        resultContents->setObjectName(QString::fromUtf8("resultContents"));
        verticalLayout_4 = new QVBoxLayout(resultContents);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        resultFrame = new QFrame(resultContents);
        resultFrame->setObjectName(QString::fromUtf8("resultFrame"));
        sizePolicy3.setHeightForWidth(resultFrame->sizePolicy().hasHeightForWidth());
        resultFrame->setSizePolicy(sizePolicy3);
        resultFrame->setFrameShape(QFrame::StyledPanel);
        resultFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(resultFrame);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        resultView = new QGraphicsView(resultFrame);
        resultView->setObjectName(QString::fromUtf8("resultView"));
        resultView->setFrameShape(QFrame::NoFrame);
        resultView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        resultView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_9->addWidget(resultView);


        verticalLayout_4->addWidget(resultFrame);

        dockWidget_2->setWidget(resultContents);
        PatternSearchWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_2);

        menubar->addAction(fileMenu->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menubar->addAction(menu_Navigation->menuAction());
        menubar->addAction(viewMenu->menuAction());
        menubar->addAction(menuSearch->menuAction());
        menubar->addAction(settingsMenu->menuAction());
        menubar->addAction(helpMenu->menuAction());
        fileMenu->addAction(fileNewBoard);
        fileMenu->addSeparator();
        fileMenu->addAction(fileClose);
        settingsMenu->addAction(setPreferences);
        settingsMenu->addAction(setDBPrefs);
        settingsMenu->addSeparator();
        viewMenu->addAction(viewLetters);
        viewMenu->addAction(viewNumbers);
        viewMenu->addAction(viewPercent);
        viewMenu->addAction(viewCoords);
        helpMenu->addAction(helpUsing);
        helpMenu->addAction(helpReadme);
        helpMenu->addSeparator();
        helpMenu->addAction(helpAbout);
        helpMenu->addAction(helpAboutQt);
        menuSearch->addAction(anchorAction);
        menuSearch->addSeparator();
        menuSearch->addAction(searchPattern);
        menuSearch->addAction(searchAll);
        menuSearch->addSeparator();
        menuSearch->addAction(actionReset);
        menuSearch->addAction(resetAll);
        menuSearch->addAction(forgetAction);
        menu_Edit->addAction(editStone);
        menu_Edit->addAction(editBlack);
        menu_Edit->addAction(editWhite);
        menu_Edit->addSeparator();
        menu_Edit->addAction(editClearSelect);
        menu_Navigation->addAction(navFirst);
        menu_Navigation->addAction(navBackward);
        menu_Navigation->addAction(navForward);
        menu_Navigation->addAction(navLast);
        menu_Navigation->addAction(navGotoCont);
        fileBar->addAction(fileNewBoard);
        toolBar->addAction(navFirst);
        toolBar->addAction(navBackward);
        toolBar->addAction(navForward);
        toolBar->addAction(navLast);
        toolBar->addAction(navGotoCont);
        editBar->addAction(editDelete);
        editBar->addSeparator();
        editBar->addAction(editStone);
        editBar->addAction(editBlack);
        editBar->addAction(editWhite);
        editBar->addSeparator();
        editBar->addAction(editClearSelect);
        editBar->addAction(anchorAction);
        editBar->addAction(resetAll);
        editBar->addAction(actionReset);
        editBar->addAction(searchPattern);
        editBar->addAction(searchAll);
        editBar->addSeparator();
        editBar->addAction(viewLetters);
        editBar->addAction(viewNumbers);
        editBar->addAction(viewPercent);

        retranslateUi(PatternSearchWindow);

        QMetaObject::connectSlotsByName(PatternSearchWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PatternSearchWindow)
    {
        PatternSearchWindow->setWindowTitle(QCoreApplication::translate("PatternSearchWindow", "Pattern Search", nullptr));
        navForward->setText(QCoreApplication::translate("PatternSearchWindow", "&Next move", nullptr));
#if QT_CONFIG(shortcut)
        navForward->setShortcut(QCoreApplication::translate("PatternSearchWindow", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        navBackward->setText(QCoreApplication::translate("PatternSearchWindow", "&Previous move", nullptr));
#if QT_CONFIG(shortcut)
        navBackward->setShortcut(QCoreApplication::translate("PatternSearchWindow", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        navFirst->setText(QCoreApplication::translate("PatternSearchWindow", "&First move", nullptr));
#if QT_CONFIG(shortcut)
        navFirst->setShortcut(QCoreApplication::translate("PatternSearchWindow", "Home", nullptr));
#endif // QT_CONFIG(shortcut)
        navLast->setText(QCoreApplication::translate("PatternSearchWindow", "&Last move", nullptr));
#if QT_CONFIG(shortcut)
        navLast->setShortcut(QCoreApplication::translate("PatternSearchWindow", "End", nullptr));
#endif // QT_CONFIG(shortcut)
        editStone->setText(QCoreApplication::translate("PatternSearchWindow", "Place &stone", nullptr));
#if QT_CONFIG(tooltip)
        editStone->setToolTip(QCoreApplication::translate("PatternSearchWindow", "Normal mode, click to place a stone.", nullptr));
#endif // QT_CONFIG(tooltip)
        editDelete->setText(QCoreApplication::translate("PatternSearchWindow", "&Delete ", nullptr));
#if QT_CONFIG(tooltip)
        editDelete->setToolTip(QCoreApplication::translate("PatternSearchWindow", "Delete this and all following positions.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        editDelete->setShortcut(QCoreApplication::translate("PatternSearchWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        editClearSelect->setText(QCoreApplication::translate("PatternSearchWindow", "Cle&ar selection", nullptr));
#if QT_CONFIG(tooltip)
        editClearSelect->setToolTip(QCoreApplication::translate("PatternSearchWindow", "Clear the selected rectangle and select the whole board again.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        editClearSelect->setShortcut(QCoreApplication::translate("PatternSearchWindow", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        fileNewBoard->setText(QCoreApplication::translate("PatternSearchWindow", "New &board window", nullptr));
#if QT_CONFIG(shortcut)
        fileNewBoard->setShortcut(QCoreApplication::translate("PatternSearchWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        fileClose->setText(QCoreApplication::translate("PatternSearchWindow", "&Close", nullptr));
#if QT_CONFIG(tooltip)
        fileClose->setToolTip(QCoreApplication::translate("PatternSearchWindow", "Close this window.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        fileClose->setShortcut(QCoreApplication::translate("PatternSearchWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        fileQuit->setText(QCoreApplication::translate("PatternSearchWindow", "E&xit", nullptr));
#if QT_CONFIG(tooltip)
        fileQuit->setToolTip(QCoreApplication::translate("PatternSearchWindow", "Quit the application.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        fileQuit->setShortcut(QCoreApplication::translate("PatternSearchWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        viewCoords->setText(QCoreApplication::translate("PatternSearchWindow", "&Coordinates", nullptr));
#if QT_CONFIG(shortcut)
        viewCoords->setShortcut(QCoreApplication::translate("PatternSearchWindow", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        setPreferences->setText(QCoreApplication::translate("PatternSearchWindow", "&Preferences...", nullptr));
#if QT_CONFIG(tooltip)
        setPreferences->setToolTip(QCoreApplication::translate("PatternSearchWindow", "Bring up the preferences dialog", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        setPreferences->setShortcut(QCoreApplication::translate("PatternSearchWindow", "Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
        helpAbout->setText(QCoreApplication::translate("PatternSearchWindow", "&About..", nullptr));
        helpAboutQt->setText(QCoreApplication::translate("PatternSearchWindow", "About &Qt...", nullptr));
        helpReadme->setText(QCoreApplication::translate("PatternSearchWindow", "View &README", nullptr));
        fileOpenDB->setText(QCoreApplication::translate("PatternSearchWindow", "Open from &database...", nullptr));
        searchPattern->setText(QCoreApplication::translate("PatternSearchWindow", "Search &pattern", nullptr));
#if QT_CONFIG(tooltip)
        searchPattern->setToolTip(QCoreApplication::translate("PatternSearchWindow", "Search for the currently selected pattern", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        searchPattern->setShortcut(QCoreApplication::translate("PatternSearchWindow", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        editBlack->setText(QCoreApplication::translate("PatternSearchWindow", "Place &black stones", nullptr));
#if QT_CONFIG(tooltip)
        editBlack->setToolTip(QCoreApplication::translate("PatternSearchWindow", "<p>Click the board to place black stones. You can also hold down shift while clicking to force a black stone.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        editWhite->setText(QCoreApplication::translate("PatternSearchWindow", "Place &white stones", nullptr));
#if QT_CONFIG(tooltip)
        editWhite->setToolTip(QCoreApplication::translate("PatternSearchWindow", "<p>Click the board to place black stones. You can also hold down ctrl while clicking to force a black stone.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        resetAll->setText(QCoreApplication::translate("PatternSearchWindow", "&Reset all", nullptr));
#if QT_CONFIG(tooltip)
        resetAll->setToolTip(QCoreApplication::translate("PatternSearchWindow", "<p>Reset the game list and the board to their original state.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        helpUsing->setText(QCoreApplication::translate("PatternSearchWindow", "&Using pattern search...", nullptr));
        searchAll->setText(QCoreApplication::translate("PatternSearchWindow", "Search in &all games", nullptr));
#if QT_CONFIG(tooltip)
        searchAll->setToolTip(QCoreApplication::translate("PatternSearchWindow", "Search for the currently selected pattern in the full game list", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        searchAll->setShortcut(QCoreApplication::translate("PatternSearchWindow", "A", nullptr));
#endif // QT_CONFIG(shortcut)
        viewPercent->setText(QCoreApplication::translate("PatternSearchWindow", "Show continuations as &percentages", nullptr));
#if QT_CONFIG(tooltip)
        viewPercent->setToolTip(QCoreApplication::translate("PatternSearchWindow", "<p>When displaying continuations from a pattern, show percentages.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        viewLetters->setText(QCoreApplication::translate("PatternSearchWindow", "Show continuations as &letters", nullptr));
#if QT_CONFIG(tooltip)
        viewLetters->setToolTip(QCoreApplication::translate("PatternSearchWindow", "<p>When displaying continuations from a pattern, show the rank as a letter.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        viewNumbers->setText(QCoreApplication::translate("PatternSearchWindow", "Show continuations as &numbers", nullptr));
#if QT_CONFIG(tooltip)
        viewNumbers->setToolTip(QCoreApplication::translate("PatternSearchWindow", "<p>When displaying continuations from a pattern, show the number of continuations.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        navGotoCont->setText(QCoreApplication::translate("PatternSearchWindow", "Go to continuation", nullptr));
#if QT_CONFIG(tooltip)
        navGotoCont->setToolTip(QCoreApplication::translate("PatternSearchWindow", "Move forward to the first move within the current selection.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        navGotoCont->setShortcut(QCoreApplication::translate("PatternSearchWindow", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        setDBPrefs->setText(QCoreApplication::translate("PatternSearchWindow", "&Configure database paths...", nullptr));
#if QT_CONFIG(tooltip)
        setDBPrefs->setToolTip(QCoreApplication::translate("PatternSearchWindow", "Bring up the preferences dialog for configuring database paths", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReset->setText(QCoreApplication::translate("PatternSearchWindow", "Reset game list", nullptr));
#if QT_CONFIG(tooltip)
        actionReset->setToolTip(QCoreApplication::translate("PatternSearchWindow", "<p>Reset the list of games to its original contents.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        anchorAction->setText(QCoreApplication::translate("PatternSearchWindow", "Lock anchors", nullptr));
#if QT_CONFIG(tooltip)
        anchorAction->setToolTip(QCoreApplication::translate("PatternSearchWindow", "<p>When checked, patterns at the edge of the board will be anchored there during the search and will not be matched against patterns in the center.</p><p>This should normally be checked, since it tends to produce the expected results, while also being faster.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        forgetAction->setText(QCoreApplication::translate("PatternSearchWindow", "&Forget previous searches", nullptr));
#if QT_CONFIG(tooltip)
        forgetAction->setToolTip(QCoreApplication::translate("PatternSearchWindow", "<p>Remove the previews and data associated with all previous searches</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        boardView->setProperty("caption", QVariant(QString()));
        fileMenu->setTitle(QCoreApplication::translate("PatternSearchWindow", "&File", nullptr));
        settingsMenu->setTitle(QCoreApplication::translate("PatternSearchWindow", "&Settings", nullptr));
        viewMenu->setTitle(QCoreApplication::translate("PatternSearchWindow", "&View", nullptr));
        helpMenu->setTitle(QCoreApplication::translate("PatternSearchWindow", "&Help", nullptr));
        menuSearch->setTitle(QCoreApplication::translate("PatternSearchWindow", "Sea&rch", nullptr));
        menu_Edit->setTitle(QCoreApplication::translate("PatternSearchWindow", "&Edit", nullptr));
        menu_Navigation->setTitle(QCoreApplication::translate("PatternSearchWindow", "&Navigation", nullptr));
        fileBar->setWindowTitle(QCoreApplication::translate("PatternSearchWindow", "File toolbar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("PatternSearchWindow", "Navigation toolbar", nullptr));
        editBar->setWindowTitle(QCoreApplication::translate("PatternSearchWindow", "Edit toolbar", nullptr));
        listDock->setWindowTitle(QCoreApplication::translate("PatternSearchWindow", "Game list", nullptr));
        openButton->setText(QCoreApplication::translate("PatternSearchWindow", "Open for editing", nullptr));
        resetButton->setText(QCoreApplication::translate("PatternSearchWindow", "Reset Games", nullptr));
        chooseDock->setWindowTitle(QCoreApplication::translate("PatternSearchWindow", "Previous searches", nullptr));
        infoDock->setWindowTitle(QCoreApplication::translate("PatternSearchWindow", "Game information", nullptr));
        miscBar->setWindowTitle(QCoreApplication::translate("PatternSearchWindow", "Miscellaneous toolbar", nullptr));
        statsDock->setWindowTitle(QCoreApplication::translate("PatternSearchWindow", "Statistics", nullptr));
        toolButton->setText(QCoreApplication::translate("PatternSearchWindow", "...", nullptr));
        toolButton_2->setText(QCoreApplication::translate("PatternSearchWindow", "...", nullptr));
        dockWidget_2->setWindowTitle(QCoreApplication::translate("PatternSearchWindow", "Search result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatternSearchWindow: public Ui_PatternSearchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATTERNSEARCH_GUI_H
