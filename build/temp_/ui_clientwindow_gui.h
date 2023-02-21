/********************************************************************************
** Form generated from reading UI file 'clientwindow_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_GUI_H
#define UI_CLIENTWINDOW_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <gamestable.h>
#include <playertable.h>
#include "gamestable.h"
#include "playertable.h"

QT_BEGIN_NAMESPACE

class Ui_ClientWindowGui
{
public:
    QAction *fileOpen;
    QAction *helpManual;
    QAction *helpAboutApp;
    QAction *Disconnect;
    QAction *setLookingMode;
    QAction *setOpenMode;
    QAction *computerPlay;
    QAction *twoEnginePlay;
    QAction *refreshPlayers;
    QAction *refreshGames;
    QAction *setQuietMode;
    QAction *Connect;
    QAction *setPreferences;
    QAction *fileQuit;
    QAction *fileNewBoard;
    QAction *viewToolBar;
    QAction *editServers;
    QAction *viewMenuBar;
    QAction *viewStatusBar;
    QAction *helpAboutQt;
    QAction *fileNew;
    QAction *fileNewVariant;
    QAction *Seek;
    QAction *helpNewVersion;
    QAction *helpReadme;
    QAction *fileBatchAnalysis;
    QAction *fileOpenDB;
    QAction *actionTutorials;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSplitter *s1;
    QSplitter *s2;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout1;
    PlayerTable *ListView_players;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *whoBox1;
    QLabel *label;
    QComboBox *whoBox2;
    QCheckBox *whoOpenCheck;
    QSpacerItem *horizontalSpacer;
    QTabWidget *TabWidget_mini_2;
    QWidget *rooms;
    QGridLayout *gridLayout2;
    QPushButton *LeaveRoomButton;
    QListWidget *RoomList;
    QWidget *messages;
    QVBoxLayout *vboxLayout;
    QTextBrowser *MultiLineEdit3;
    QPushButton *pb_releaseTalkTabs;
    QSplitter *s3;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout3;
    GamesTable *ListView_games;
    QWidget *layout1;
    QGridLayout *gridLayout4;
    QTextBrowser *MultiLineEdit2;
    QComboBox *cb_cmdLine;
    QToolBar *FileToolbar;
    QToolBar *Toolbar;
    QToolButton *toolConnect;
    QComboBox *cb_connect;
    QToolButton *toolSeek;
    QComboBox *cb_seek_handicap;
    QToolButton *toolObserveMode;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *PopupMenu;
    QMenu *PopupMenu_2;
    QMenu *PopupMenu_3;
    QMenu *menu_Learn_Go;
    QMenu *helpMenu;

    void setupUi(QMainWindow *ClientWindowGui)
    {
        if (ClientWindowGui->objectName().isEmpty())
            ClientWindowGui->setObjectName(QString::fromUtf8("ClientWindowGui"));
        ClientWindowGui->resize(773, 591);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClientWindowGui->sizePolicy().hasHeightForWidth());
        ClientWindowGui->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/qgo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ClientWindowGui->setWindowIcon(icon);
        fileOpen = new QAction(ClientWindowGui);
        fileOpen->setObjectName(QString::fromUtf8("fileOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileOpen->setIcon(icon1);
        fileOpen->setProperty("name", QVariant(QByteArray("fileOpen")));
        helpManual = new QAction(ClientWindowGui);
        helpManual->setObjectName(QString::fromUtf8("helpManual"));
        helpManual->setProperty("name", QVariant(QByteArray("helpManual")));
        helpAboutApp = new QAction(ClientWindowGui);
        helpAboutApp->setObjectName(QString::fromUtf8("helpAboutApp"));
        helpAboutApp->setProperty("name", QVariant(QByteArray("helpAboutApp")));
        helpAboutApp->setMenuRole(QAction::AboutRole);
        Disconnect = new QAction(ClientWindowGui);
        Disconnect->setObjectName(QString::fromUtf8("Disconnect"));
        Disconnect->setCheckable(false);
        Disconnect->setChecked(false);
        Disconnect->setEnabled(true);
        Disconnect->setProperty("name", QVariant(QByteArray("Disconnect")));
        setLookingMode = new QAction(ClientWindowGui);
        setLookingMode->setObjectName(QString::fromUtf8("setLookingMode"));
        setLookingMode->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/not_looking.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/looking.png"), QSize(), QIcon::Normal, QIcon::On);
        setLookingMode->setIcon(icon2);
        setLookingMode->setProperty("name", QVariant(QByteArray("setLookingMode")));
        setOpenMode = new QAction(ClientWindowGui);
        setOpenMode->setObjectName(QString::fromUtf8("setOpenMode"));
        setOpenMode->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/not_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/open.png"), QSize(), QIcon::Normal, QIcon::On);
        setOpenMode->setIcon(icon3);
        setOpenMode->setProperty("name", QVariant(QByteArray("setOpenMode")));
        computerPlay = new QAction(ClientWindowGui);
        computerPlay->setObjectName(QString::fromUtf8("computerPlay"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/computerplay.png"), QSize(), QIcon::Normal, QIcon::Off);
        computerPlay->setIcon(icon4);
        computerPlay->setProperty("name", QVariant(QByteArray("computerPlay")));
        twoEnginePlay = new QAction(ClientWindowGui);
        twoEnginePlay->setObjectName(QString::fromUtf8("twoEnginePlay"));
        twoEnginePlay->setProperty("name", QVariant(QByteArray("twoEnginePlay")));
        refreshPlayers = new QAction(ClientWindowGui);
        refreshPlayers->setObjectName(QString::fromUtf8("refreshPlayers"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/refresh_players.png"), QSize(), QIcon::Normal, QIcon::Off);
        refreshPlayers->setIcon(icon5);
        refreshPlayers->setProperty("name", QVariant(QByteArray("refreshPlayers")));
        refreshGames = new QAction(ClientWindowGui);
        refreshGames->setObjectName(QString::fromUtf8("refreshGames"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/refresh_games.png"), QSize(), QIcon::Normal, QIcon::Off);
        refreshGames->setIcon(icon6);
        refreshGames->setProperty("name", QVariant(QByteArray("refreshGames")));
        setQuietMode = new QAction(ClientWindowGui);
        setQuietMode->setObjectName(QString::fromUtf8("setQuietMode"));
        setQuietMode->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/not_quiet.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/quiet.png"), QSize(), QIcon::Normal, QIcon::On);
        setQuietMode->setIcon(icon7);
        setQuietMode->setProperty("name", QVariant(QByteArray("setQuietMode")));
        Connect = new QAction(ClientWindowGui);
        Connect->setObjectName(QString::fromUtf8("Connect"));
        Connect->setCheckable(false);
        Connect->setChecked(false);
        Connect->setEnabled(true);
        Connect->setProperty("name", QVariant(QByteArray("Connect")));
        setPreferences = new QAction(ClientWindowGui);
        setPreferences->setObjectName(QString::fromUtf8("setPreferences"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/prefs.png"), QSize(), QIcon::Normal, QIcon::Off);
        setPreferences->setIcon(icon8);
        setPreferences->setProperty("name", QVariant(QByteArray("setPreferences")));
        setPreferences->setMenuRole(QAction::PreferencesRole);
        fileQuit = new QAction(ClientWindowGui);
        fileQuit->setObjectName(QString::fromUtf8("fileQuit"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/fileexit.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileQuit->setIcon(icon9);
        fileQuit->setProperty("name", QVariant(QByteArray("fileQuit")));
        fileQuit->setMenuRole(QAction::QuitRole);
        fileNewBoard = new QAction(ClientWindowGui);
        fileNewBoard->setObjectName(QString::fromUtf8("fileNewBoard"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/new_board.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileNewBoard->setIcon(icon10);
        fileNewBoard->setProperty("name", QVariant(QByteArray("fileNewBoard")));
        viewToolBar = new QAction(ClientWindowGui);
        viewToolBar->setObjectName(QString::fromUtf8("viewToolBar"));
        viewToolBar->setCheckable(true);
        viewToolBar->setChecked(true);
        viewToolBar->setProperty("name", QVariant(QByteArray("viewToolBar")));
        editServers = new QAction(ClientWindowGui);
        editServers->setObjectName(QString::fromUtf8("editServers"));
        editServers->setProperty("name", QVariant(QByteArray("editServers")));
        viewMenuBar = new QAction(ClientWindowGui);
        viewMenuBar->setObjectName(QString::fromUtf8("viewMenuBar"));
        viewMenuBar->setCheckable(true);
        viewMenuBar->setChecked(true);
        viewMenuBar->setProperty("name", QVariant(QByteArray("viewMenuBar")));
        viewStatusBar = new QAction(ClientWindowGui);
        viewStatusBar->setObjectName(QString::fromUtf8("viewStatusBar"));
        viewStatusBar->setCheckable(true);
        viewStatusBar->setChecked(true);
        viewStatusBar->setProperty("name", QVariant(QByteArray("viewStatusBar")));
        helpAboutQt = new QAction(ClientWindowGui);
        helpAboutQt->setObjectName(QString::fromUtf8("helpAboutQt"));
        helpAboutQt->setProperty("name", QVariant(QByteArray("helpAboutQt")));
        helpAboutQt->setMenuRole(QAction::AboutQtRole);
        fileNew = new QAction(ClientWindowGui);
        fileNew->setObjectName(QString::fromUtf8("fileNew"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileNew->setIcon(icon11);
        fileNew->setProperty("name", QVariant(QByteArray("fileNew")));
        fileNewVariant = new QAction(ClientWindowGui);
        fileNewVariant->setObjectName(QString::fromUtf8("fileNewVariant"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/torus.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileNewVariant->setIcon(icon12);
        fileNewVariant->setProperty("name", QVariant(QByteArray("fileNew")));
        Seek = new QAction(ClientWindowGui);
        Seek->setObjectName(QString::fromUtf8("Seek"));
        Seek->setCheckable(true);
        Seek->setProperty("name", QVariant(QByteArray("Seek")));
        helpNewVersion = new QAction(ClientWindowGui);
        helpNewVersion->setObjectName(QString::fromUtf8("helpNewVersion"));
        helpNewVersion->setProperty("name", QVariant(QByteArray("helpNewVersion")));
        helpReadme = new QAction(ClientWindowGui);
        helpReadme->setObjectName(QString::fromUtf8("helpReadme"));
        fileBatchAnalysis = new QAction(ClientWindowGui);
        fileBatchAnalysis->setObjectName(QString::fromUtf8("fileBatchAnalysis"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/gear.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileBatchAnalysis->setIcon(icon13);
        fileOpenDB = new QAction(ClientWindowGui);
        fileOpenDB->setObjectName(QString::fromUtf8("fileOpenDB"));
        actionTutorials = new QAction(ClientWindowGui);
        actionTutorials->setObjectName(QString::fromUtf8("actionTutorials"));
        widget = new QWidget(ClientWindowGui);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        s1 = new QSplitter(widget);
        s1->setObjectName(QString::fromUtf8("s1"));
        sizePolicy.setHeightForWidth(s1->sizePolicy().hasHeightForWidth());
        s1->setSizePolicy(sizePolicy);
        s1->setOrientation(Qt::Horizontal);
        s2 = new QSplitter(s1);
        s2->setObjectName(QString::fromUtf8("s2"));
        s2->setOrientation(Qt::Vertical);
        groupBox1 = new QGroupBox(s2);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        sizePolicy.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
        groupBox1->setSizePolicy(sizePolicy);
        gridLayout1 = new QGridLayout(groupBox1);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(3, 3, 3, 3);
        ListView_players = new PlayerTable(groupBox1);
        ListView_players->setObjectName(QString::fromUtf8("ListView_players"));
        sizePolicy.setHeightForWidth(ListView_players->sizePolicy().hasHeightForWidth());
        ListView_players->setSizePolicy(sizePolicy);
        ListView_players->setMinimumSize(QSize(0, 10));

        gridLayout1->addWidget(ListView_players, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        whoBox1 = new QComboBox(groupBox1);
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->addItem(QString());
        whoBox1->setObjectName(QString::fromUtf8("whoBox1"));

        horizontalLayout->addWidget(whoBox1);

        label = new QLabel(groupBox1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        whoBox2 = new QComboBox(groupBox1);
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->addItem(QString());
        whoBox2->setObjectName(QString::fromUtf8("whoBox2"));

        horizontalLayout->addWidget(whoBox2);

        whoOpenCheck = new QCheckBox(groupBox1);
        whoOpenCheck->setObjectName(QString::fromUtf8("whoOpenCheck"));

        horizontalLayout->addWidget(whoOpenCheck);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout1->addLayout(horizontalLayout, 1, 0, 1, 2);

        s2->addWidget(groupBox1);
        TabWidget_mini_2 = new QTabWidget(s2);
        TabWidget_mini_2->setObjectName(QString::fromUtf8("TabWidget_mini_2"));
        TabWidget_mini_2->setTabPosition(QTabWidget::South);
        rooms = new QWidget();
        rooms->setObjectName(QString::fromUtf8("rooms"));
        gridLayout2 = new QGridLayout(rooms);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        LeaveRoomButton = new QPushButton(rooms);
        LeaveRoomButton->setObjectName(QString::fromUtf8("LeaveRoomButton"));
        LeaveRoomButton->setMaximumSize(QSize(22, 22));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/image1.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        LeaveRoomButton->setIcon(icon14);

        gridLayout2->addWidget(LeaveRoomButton, 1, 1, 1, 1);

        RoomList = new QListWidget(rooms);
        RoomList->setObjectName(QString::fromUtf8("RoomList"));

        gridLayout2->addWidget(RoomList, 0, 0, 1, 2);

        TabWidget_mini_2->addTab(rooms, QString());
        messages = new QWidget();
        messages->setObjectName(QString::fromUtf8("messages"));
        vboxLayout = new QVBoxLayout(messages);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        MultiLineEdit3 = new QTextBrowser(messages);
        MultiLineEdit3->setObjectName(QString::fromUtf8("MultiLineEdit3"));
        sizePolicy.setHeightForWidth(MultiLineEdit3->sizePolicy().hasHeightForWidth());
        MultiLineEdit3->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(MultiLineEdit3);

        pb_releaseTalkTabs = new QPushButton(messages);
        pb_releaseTalkTabs->setObjectName(QString::fromUtf8("pb_releaseTalkTabs"));

        vboxLayout->addWidget(pb_releaseTalkTabs);

        TabWidget_mini_2->addTab(messages, QString());
        s2->addWidget(TabWidget_mini_2);
        s1->addWidget(s2);
        s3 = new QSplitter(s1);
        s3->setObjectName(QString::fromUtf8("s3"));
        s3->setOrientation(Qt::Vertical);
        groupBox2 = new QGroupBox(s3);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        gridLayout3 = new QGridLayout(groupBox2);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout3->setContentsMargins(3, 3, 3, 3);
        ListView_games = new GamesTable(groupBox2);
        ListView_games->setObjectName(QString::fromUtf8("ListView_games"));
        sizePolicy.setHeightForWidth(ListView_games->sizePolicy().hasHeightForWidth());
        ListView_games->setSizePolicy(sizePolicy);

        gridLayout3->addWidget(ListView_games, 0, 0, 1, 1);

        s3->addWidget(groupBox2);
        layout1 = new QWidget(s3);
        layout1->setObjectName(QString::fromUtf8("layout1"));
        gridLayout4 = new QGridLayout(layout1);
        gridLayout4->setSpacing(0);
        gridLayout4->setContentsMargins(11, 11, 11, 11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout4->setContentsMargins(0, 0, 0, 0);
        MultiLineEdit2 = new QTextBrowser(layout1);
        MultiLineEdit2->setObjectName(QString::fromUtf8("MultiLineEdit2"));
        sizePolicy.setHeightForWidth(MultiLineEdit2->sizePolicy().hasHeightForWidth());
        MultiLineEdit2->setSizePolicy(sizePolicy);

        gridLayout4->addWidget(MultiLineEdit2, 0, 0, 1, 1);

        cb_cmdLine = new QComboBox(layout1);
        cb_cmdLine->setObjectName(QString::fromUtf8("cb_cmdLine"));
        cb_cmdLine->setEditable(true);
        cb_cmdLine->setInsertPolicy(QComboBox::InsertAtTop);
        cb_cmdLine->setDuplicatesEnabled(true);

        gridLayout4->addWidget(cb_cmdLine, 1, 0, 1, 1);

        s3->addWidget(layout1);
        s1->addWidget(s3);

        gridLayout->addWidget(s1, 0, 0, 1, 1);

        ClientWindowGui->setCentralWidget(widget);
        FileToolbar = new QToolBar(ClientWindowGui);
        FileToolbar->setObjectName(QString::fromUtf8("FileToolbar"));
        ClientWindowGui->addToolBar(Qt::TopToolBarArea, FileToolbar);
        Toolbar = new QToolBar(ClientWindowGui);
        Toolbar->setObjectName(QString::fromUtf8("Toolbar"));
        toolConnect = new QToolButton(Toolbar);
        toolConnect->setObjectName(QString::fromUtf8("toolConnect"));
        toolConnect->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/disconnected.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolConnect->setIcon(icon15);
        Toolbar->addWidget(toolConnect);
        cb_connect = new QComboBox(Toolbar);
        cb_connect->setObjectName(QString::fromUtf8("cb_connect"));
        cb_connect->setFocusPolicy(Qt::NoFocus);
        Toolbar->addWidget(cb_connect);
        toolSeek = new QToolButton(Toolbar);
        toolSeek->setObjectName(QString::fromUtf8("toolSeek"));
        toolSeek->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/not_seeking.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolSeek->setIcon(icon16);
        Toolbar->addWidget(toolSeek);
        cb_seek_handicap = new QComboBox(Toolbar);
        cb_seek_handicap->addItem(QString());
        cb_seek_handicap->addItem(QString());
        cb_seek_handicap->addItem(QString());
        cb_seek_handicap->addItem(QString());
        cb_seek_handicap->addItem(QString());
        cb_seek_handicap->addItem(QString());
        cb_seek_handicap->setObjectName(QString::fromUtf8("cb_seek_handicap"));
        Toolbar->addWidget(cb_seek_handicap);
        toolObserveMode = new QToolButton(Toolbar);
        toolObserveMode->setObjectName(QString::fromUtf8("toolObserveMode"));
        toolObserveMode->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/observe-multi.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon17.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/observe-single.png"), QSize(), QIcon::Normal, QIcon::On);
        toolObserveMode->setIcon(icon17);
        Toolbar->addWidget(toolObserveMode);
        ClientWindowGui->addToolBar(Qt::TopToolBarArea, Toolbar);
        menuBar = new QMenuBar(ClientWindowGui);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 773, 23));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        PopupMenu = new QMenu(menuBar);
        PopupMenu->setObjectName(QString::fromUtf8("PopupMenu"));
        PopupMenu_2 = new QMenu(menuBar);
        PopupMenu_2->setObjectName(QString::fromUtf8("PopupMenu_2"));
        PopupMenu_3 = new QMenu(menuBar);
        PopupMenu_3->setObjectName(QString::fromUtf8("PopupMenu_3"));
        menu_Learn_Go = new QMenu(menuBar);
        menu_Learn_Go->setObjectName(QString::fromUtf8("menu_Learn_Go"));
        helpMenu = new QMenu(menuBar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        ClientWindowGui->setMenuBar(menuBar);

        FileToolbar->addAction(fileNewBoard);
        FileToolbar->addAction(fileNew);
        FileToolbar->addAction(fileNewVariant);
        FileToolbar->addAction(fileOpen);
        FileToolbar->addSeparator();
        FileToolbar->addAction(fileBatchAnalysis);
        FileToolbar->addAction(computerPlay);
        Toolbar->addSeparator();
        Toolbar->addAction(setLookingMode);
        Toolbar->addAction(setQuietMode);
        Toolbar->addAction(setOpenMode);
        Toolbar->addSeparator();
        Toolbar->addAction(refreshPlayers);
        Toolbar->addAction(refreshGames);
        menuBar->addAction(fileMenu->menuAction());
        menuBar->addAction(PopupMenu->menuAction());
        menuBar->addAction(PopupMenu_2->menuAction());
        menuBar->addAction(PopupMenu_3->menuAction());
        menuBar->addAction(menu_Learn_Go->menuAction());
        menuBar->addAction(helpMenu->menuAction());
        fileMenu->addAction(fileNewBoard);
        fileMenu->addAction(fileNew);
        fileMenu->addAction(fileNewVariant);
        fileMenu->addAction(fileOpen);
        fileMenu->addAction(fileOpenDB);
        fileMenu->addSeparator();
        fileMenu->addAction(computerPlay);
        fileMenu->addAction(twoEnginePlay);
        fileMenu->addAction(fileBatchAnalysis);
        fileMenu->addSeparator();
        fileMenu->addAction(fileQuit);
        PopupMenu->addAction(Connect);
        PopupMenu->addAction(Disconnect);
        PopupMenu->addSeparator();
        PopupMenu->addAction(editServers);
        PopupMenu_2->addAction(setPreferences);
        PopupMenu_2->addSeparator();
        PopupMenu_2->addAction(setLookingMode);
        PopupMenu_2->addAction(setOpenMode);
        PopupMenu_2->addAction(setQuietMode);
        PopupMenu_3->addAction(viewToolBar);
        PopupMenu_3->addAction(viewMenuBar);
        PopupMenu_3->addAction(viewStatusBar);
        menu_Learn_Go->addAction(actionTutorials);
        helpMenu->addAction(helpManual);
        helpMenu->addAction(helpReadme);
        helpMenu->addSeparator();
        helpMenu->addAction(helpAboutApp);
        helpMenu->addAction(helpAboutQt);
        helpMenu->addAction(helpNewVersion);

        retranslateUi(ClientWindowGui);
        QObject::connect(setQuietMode, SIGNAL(triggered(bool)), ClientWindowGui, SLOT(slot_cbquiet(bool)));
        QObject::connect(setOpenMode, SIGNAL(triggered(bool)), ClientWindowGui, SLOT(slot_cbopen(bool)));
        QObject::connect(setLookingMode, SIGNAL(triggered(bool)), ClientWindowGui, SLOT(slot_cblooking(bool)));
        QObject::connect(refreshGames, SIGNAL(triggered(bool)), ClientWindowGui, SLOT(slot_pbrefreshgames(bool)));
        QObject::connect(refreshPlayers, SIGNAL(triggered(bool)), ClientWindowGui, SLOT(slot_pbrefreshplayers(bool)));
        QObject::connect(pb_releaseTalkTabs, SIGNAL(clicked()), ClientWindowGui, SLOT(slot_pbRelTabs()));
        QObject::connect(RoomList, SIGNAL(itemDoubleClicked(QListWidgetItem*)), ClientWindowGui, SLOT(slot_RoomListClicked(QListWidgetItem*)));
        QObject::connect(LeaveRoomButton, SIGNAL(clicked()), ClientWindowGui, SLOT(slot_leaveRoom()));
        QObject::connect(cb_connect, SIGNAL(activated(QString)), ClientWindowGui, SLOT(slot_cbconnect(QString)));
        QObject::connect(toolConnect, SIGNAL(toggled(bool)), ClientWindowGui, SLOT(slot_connect(bool)));
        QObject::connect(toolSeek, SIGNAL(toggled(bool)), ClientWindowGui, SLOT(slot_seek(bool)));

        whoBox1->setCurrentIndex(24);
        whoBox2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ClientWindowGui);
    } // setupUi

    void retranslateUi(QMainWindow *ClientWindowGui)
    {
        ClientWindowGui->setWindowTitle(QCoreApplication::translate("ClientWindowGui", "qGo Client V2", nullptr));
        fileOpen->setText(QCoreApplication::translate("ClientWindowGui", "&Open...", nullptr));
        fileOpen->setIconText(QCoreApplication::translate("ClientWindowGui", "Open", nullptr));
#if QT_CONFIG(whatsthis)
        fileOpen->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Open\n"
"\n"
"	Open a sgf file.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        fileOpen->setShortcut(QCoreApplication::translate("ClientWindowGui", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        helpManual->setText(QCoreApplication::translate("ClientWindowGui", "&Manual", nullptr));
        helpManual->setIconText(QCoreApplication::translate("ClientWindowGui", "Manual", nullptr));
#if QT_CONFIG(tooltip)
        helpManual->setToolTip(QCoreApplication::translate("ClientWindowGui", "Opens the manual", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        helpManual->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Help\n"
"\n"
"	Opens the manual of the application.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        helpManual->setShortcut(QCoreApplication::translate("ClientWindowGui", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        helpAboutApp->setText(QCoreApplication::translate("ClientWindowGui", "&About", nullptr));
        helpAboutApp->setIconText(QCoreApplication::translate("ClientWindowGui", "About", nullptr));
#if QT_CONFIG(tooltip)
        helpAboutApp->setToolTip(QCoreApplication::translate("ClientWindowGui", "About the application.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        helpAboutApp->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "About\n"
"\n"
"	About the application.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        helpAboutApp->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        Disconnect->setText(QCoreApplication::translate("ClientWindowGui", "&Disconnect", nullptr));
        Disconnect->setIconText(QCoreApplication::translate("ClientWindowGui", "Disconnect", nullptr));
#if QT_CONFIG(tooltip)
        Disconnect->setToolTip(QCoreApplication::translate("ClientWindowGui", "Disconnect from server", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        Disconnect->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Disconnect from server", nullptr));
#endif // QT_CONFIG(whatsthis)
        setLookingMode->setText(QCoreApplication::translate("ClientWindowGui", "&Looking", nullptr));
        setLookingMode->setIconText(QCoreApplication::translate("ClientWindowGui", "Looking", nullptr));
#if QT_CONFIG(tooltip)
        setLookingMode->setToolTip(QCoreApplication::translate("ClientWindowGui", "toggles looking for matches", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        setLookingMode->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "If checked then you are looking for matches, that means you are ready to play. After refreshing the player table having a '!' mark indicates to be looking for matches. Clicking this checkbox toggles the mode. You have to be open too, if you are looking. Thus, the Go server sets you open for matches (no 'X')!", nullptr));
#endif // QT_CONFIG(whatsthis)
        setOpenMode->setText(QCoreApplication::translate("ClientWindowGui", "&Open", nullptr));
        setOpenMode->setIconText(QCoreApplication::translate("ClientWindowGui", "Open", nullptr));
#if QT_CONFIG(tooltip)
        setOpenMode->setToolTip(QCoreApplication::translate("ClientWindowGui", "toggles open for matches", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        setOpenMode->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "If checked you are open for matches. After refreshing the player table having a 'X' mark indicates to be NOT open for matches. Clicking this checkbox toggles the mode.", nullptr));
#endif // QT_CONFIG(whatsthis)
        computerPlay->setText(QCoreApplication::translate("ClientWindowGui", "&Play with program", nullptr));
        computerPlay->setIconText(QCoreApplication::translate("ClientWindowGui", "Play with program", nullptr));
#if QT_CONFIG(statustip)
        computerPlay->setStatusTip(QCoreApplication::translate("ClientWindowGui", "Play with program", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        computerPlay->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Play with a program\n"
"\n"
"	Sets a playing session with a pGo program using GTP (like GNUGO)", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        computerPlay->setShortcut(QCoreApplication::translate("ClientWindowGui", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        twoEnginePlay->setText(QCoreApplication::translate("ClientWindowGui", "&Computer vs. computer play", nullptr));
        twoEnginePlay->setIconText(QCoreApplication::translate("ClientWindowGui", "Automatic computer vs. computer play", nullptr));
#if QT_CONFIG(statustip)
        twoEnginePlay->setStatusTip(QCoreApplication::translate("ClientWindowGui", "Select two engines and let them play one or more games", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        twoEnginePlay->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Brings up a dialog to set up play between two engines.\n"
"\n"
"	You can set up one game or a multi-game match, optionally starting from\n"
"	a single position, or from multiple positions found in a loaded game file.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        twoEnginePlay->setShortcut(QCoreApplication::translate("ClientWindowGui", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        refreshPlayers->setText(QCoreApplication::translate("ClientWindowGui", "Refresh players", nullptr));
        refreshPlayers->setIconText(QCoreApplication::translate("ClientWindowGui", "Refresh players", nullptr));
#if QT_CONFIG(tooltip)
        refreshPlayers->setToolTip(QCoreApplication::translate("ClientWindowGui", "Get new players table from server", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        refreshPlayers->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Get new players table from server", nullptr));
#endif // QT_CONFIG(whatsthis)
        refreshGames->setText(QCoreApplication::translate("ClientWindowGui", "Refresh Games", nullptr));
        refreshGames->setIconText(QCoreApplication::translate("ClientWindowGui", "Refresh Games", nullptr));
#if QT_CONFIG(tooltip)
        refreshGames->setToolTip(QCoreApplication::translate("ClientWindowGui", "Get new games table from server", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        refreshGames->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Get new games table from server", nullptr));
#endif // QT_CONFIG(whatsthis)
        setQuietMode->setText(QCoreApplication::translate("ClientWindowGui", "&Quiet", nullptr));
        setQuietMode->setIconText(QCoreApplication::translate("ClientWindowGui", "Quiet", nullptr));
#if QT_CONFIG(tooltip)
        setQuietMode->setToolTip(QCoreApplication::translate("ClientWindowGui", "toggles system messages", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        setQuietMode->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "If checked then you don't receive system messages, that means you are not informed about connecting/disconnecting players, started/finished games etc. Clicking this checkbox toggles the mode. To be quiet is indicated with a 'Q' in the playertable.\n"
"\n"
"	Note : some features cannot work if set to quiet (checked box):\n"
"	- sound when watched players enter/leave\n"
"	- update of player/gamestable", nullptr));
#endif // QT_CONFIG(whatsthis)
        Connect->setText(QCoreApplication::translate("ClientWindowGui", "&Connect", nullptr));
        Connect->setIconText(QCoreApplication::translate("ClientWindowGui", "Connect", nullptr));
#if QT_CONFIG(tooltip)
        Connect->setToolTip(QCoreApplication::translate("ClientWindowGui", "Connects to the server", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Connect->setStatusTip(QCoreApplication::translate("ClientWindowGui", "Connects to the server", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Connect->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Connects to the server", nullptr));
#endif // QT_CONFIG(whatsthis)
        setPreferences->setText(QCoreApplication::translate("ClientWindowGui", "Preferences", nullptr));
        setPreferences->setIconText(QCoreApplication::translate("ClientWindowGui", "Preferences", nullptr));
#if QT_CONFIG(tooltip)
        setPreferences->setToolTip(QCoreApplication::translate("ClientWindowGui", "Edit the preferences", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        setPreferences->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Preferences\n"
"\n"
"	Edit the applications preferences.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        setPreferences->setShortcut(QCoreApplication::translate("ClientWindowGui", "Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
        fileQuit->setText(QCoreApplication::translate("ClientWindowGui", "E&xit", nullptr));
        fileQuit->setIconText(QCoreApplication::translate("ClientWindowGui", "Exit", nullptr));
#if QT_CONFIG(tooltip)
        fileQuit->setToolTip(QCoreApplication::translate("ClientWindowGui", "Quits the application", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        fileQuit->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Exit\n"
"\n"
"	Quits the application.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        fileQuit->setShortcut(QCoreApplication::translate("ClientWindowGui", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        fileNewBoard->setText(QCoreApplication::translate("ClientWindowGui", "New &Board 19x19", nullptr));
        fileNewBoard->setIconText(QCoreApplication::translate("ClientWindowGui", "New Board 19x19", nullptr));
#if QT_CONFIG(tooltip)
        fileNewBoard->setToolTip(QCoreApplication::translate("ClientWindowGui", "Creates a new board with size 19x19", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        fileNewBoard->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "New\n"
"\n"
"	Creates a new 19x19 board.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        fileNewBoard->setShortcut(QCoreApplication::translate("ClientWindowGui", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        viewToolBar->setText(QCoreApplication::translate("ClientWindowGui", "&ToolBar", nullptr));
        viewToolBar->setIconText(QCoreApplication::translate("ClientWindowGui", "ToolBar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolBar->setToolTip(QCoreApplication::translate("ClientWindowGui", "Enables/disables the toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        viewToolBar->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Navigation toolbar\n"
"\n"
"	Enables/disables the toolbar.", nullptr));
#endif // QT_CONFIG(whatsthis)
        editServers->setText(QCoreApplication::translate("ClientWindowGui", "&Edit servers", nullptr));
        editServers->setIconText(QCoreApplication::translate("ClientWindowGui", "Edit servers", nullptr));
#if QT_CONFIG(whatsthis)
        editServers->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Edit servers", nullptr));
#endif // QT_CONFIG(whatsthis)
        viewMenuBar->setText(QCoreApplication::translate("ClientWindowGui", "&Menubar", nullptr));
        viewMenuBar->setIconText(QCoreApplication::translate("ClientWindowGui", "Menubar", nullptr));
#if QT_CONFIG(tooltip)
        viewMenuBar->setToolTip(QCoreApplication::translate("ClientWindowGui", "Enables/disables the menubar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        viewMenuBar->setShortcut(QCoreApplication::translate("ClientWindowGui", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        viewStatusBar->setText(QCoreApplication::translate("ClientWindowGui", "&Statusbar", nullptr));
        viewStatusBar->setIconText(QCoreApplication::translate("ClientWindowGui", "Statusbar", nullptr));
#if QT_CONFIG(tooltip)
        viewStatusBar->setToolTip(QCoreApplication::translate("ClientWindowGui", "Enables/disables the statusbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        viewStatusBar->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Statusbar\n"
"\n"
"	Enables/disables the statusbar.", nullptr));
#endif // QT_CONFIG(whatsthis)
        helpAboutQt->setText(QCoreApplication::translate("ClientWindowGui", "About &Qt", nullptr));
        helpAboutQt->setIconText(QCoreApplication::translate("ClientWindowGui", "About Qt", nullptr));
#if QT_CONFIG(whatsthis)
        helpAboutQt->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "About Qt\n"
"\n"
"	About Qt.", nullptr));
#endif // QT_CONFIG(whatsthis)
        fileNew->setText(QCoreApplication::translate("ClientWindowGui", "&New Board", nullptr));
        fileNew->setIconText(QCoreApplication::translate("ClientWindowGui", "New Board", nullptr));
#if QT_CONFIG(whatsthis)
        fileNew->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Creates a new board", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        fileNew->setShortcut(QCoreApplication::translate("ClientWindowGui", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        fileNewVariant->setText(QCoreApplication::translate("ClientWindowGui", "New &Variant Board", nullptr));
        fileNewVariant->setIconText(QCoreApplication::translate("ClientWindowGui", "New Board", nullptr));
#if QT_CONFIG(tooltip)
        fileNewVariant->setToolTip(QCoreApplication::translate("ClientWindowGui", "New Variant Board", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        fileNewVariant->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Creates a new board", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        fileNewVariant->setShortcut(QCoreApplication::translate("ClientWindowGui", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        Seek->setText(QCoreApplication::translate("ClientWindowGui", "Action", nullptr));
        Seek->setIconText(QCoreApplication::translate("ClientWindowGui", "Action", nullptr));
#if QT_CONFIG(tooltip)
        Seek->setToolTip(QCoreApplication::translate("ClientWindowGui", "Seek game", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        Seek->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "Seek game\n"
"\n"
"	Use this button to 'seek' a game, with the given time settings (popup menu), and handicap range (list beside)\n"
"	The server will automatically launch a game against an opponent with matching settings.", nullptr));
#endif // QT_CONFIG(whatsthis)
        helpNewVersion->setIconText(QCoreApplication::translate("ClientWindowGui", "New version message", nullptr));
#if QT_CONFIG(tooltip)
        helpNewVersion->setToolTip(QCoreApplication::translate("ClientWindowGui", "shows new version message", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        helpNewVersion->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "new version message\n"
"\n"
"	displays the message box that appears at launch of a new version", nullptr));
#endif // QT_CONFIG(whatsthis)
        helpReadme->setText(QCoreApplication::translate("ClientWindowGui", "View &README", nullptr));
        fileBatchAnalysis->setText(QCoreApplication::translate("ClientWindowGui", "Batch analysis...", nullptr));
#if QT_CONFIG(tooltip)
        fileBatchAnalysis->setToolTip(QCoreApplication::translate("ClientWindowGui", "Batch analysis\n"
"	Open the batch analysis dialog which allows you to add SGF files to a queue to be analysed by an engine.\n"
"	", nullptr));
#endif // QT_CONFIG(tooltip)
        fileOpenDB->setText(QCoreApplication::translate("ClientWindowGui", "Open from &database...", nullptr));
        actionTutorials->setText(QCoreApplication::translate("ClientWindowGui", "&Tutorials...", nullptr));
#if QT_CONFIG(tooltip)
        actionTutorials->setToolTip(QCoreApplication::translate("ClientWindowGui", "Show the beginner tutorials dialog.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox1->setTitle(QCoreApplication::translate("ClientWindowGui", "Players", nullptr));
        label_2->setText(QCoreApplication::translate("ClientWindowGui", "From:", nullptr));
        whoBox1->setItemText(0, QString());
        whoBox1->setItemText(1, QCoreApplication::translate("ClientWindowGui", "1p-9p", nullptr));
        whoBox1->setItemText(2, QCoreApplication::translate("ClientWindowGui", "9d", nullptr));
        whoBox1->setItemText(3, QCoreApplication::translate("ClientWindowGui", "8d", nullptr));
        whoBox1->setItemText(4, QCoreApplication::translate("ClientWindowGui", "7d", nullptr));
        whoBox1->setItemText(5, QCoreApplication::translate("ClientWindowGui", "6d", nullptr));
        whoBox1->setItemText(6, QCoreApplication::translate("ClientWindowGui", "5d", nullptr));
        whoBox1->setItemText(7, QCoreApplication::translate("ClientWindowGui", "4d", nullptr));
        whoBox1->setItemText(8, QCoreApplication::translate("ClientWindowGui", "3d", nullptr));
        whoBox1->setItemText(9, QCoreApplication::translate("ClientWindowGui", "2d", nullptr));
        whoBox1->setItemText(10, QCoreApplication::translate("ClientWindowGui", "1d", nullptr));
        whoBox1->setItemText(11, QCoreApplication::translate("ClientWindowGui", "1k", nullptr));
        whoBox1->setItemText(12, QCoreApplication::translate("ClientWindowGui", "2k", nullptr));
        whoBox1->setItemText(13, QCoreApplication::translate("ClientWindowGui", "3k", nullptr));
        whoBox1->setItemText(14, QCoreApplication::translate("ClientWindowGui", "4k", nullptr));
        whoBox1->setItemText(15, QCoreApplication::translate("ClientWindowGui", "5k", nullptr));
        whoBox1->setItemText(16, QCoreApplication::translate("ClientWindowGui", "6k", nullptr));
        whoBox1->setItemText(17, QCoreApplication::translate("ClientWindowGui", "7k", nullptr));
        whoBox1->setItemText(18, QCoreApplication::translate("ClientWindowGui", "8k", nullptr));
        whoBox1->setItemText(19, QCoreApplication::translate("ClientWindowGui", "9k", nullptr));
        whoBox1->setItemText(20, QCoreApplication::translate("ClientWindowGui", "10k", nullptr));
        whoBox1->setItemText(21, QCoreApplication::translate("ClientWindowGui", "15k", nullptr));
        whoBox1->setItemText(22, QCoreApplication::translate("ClientWindowGui", "20k", nullptr));
        whoBox1->setItemText(23, QCoreApplication::translate("ClientWindowGui", "25k", nullptr));
        whoBox1->setItemText(24, QCoreApplication::translate("ClientWindowGui", "30k", nullptr));
        whoBox1->setItemText(25, QCoreApplication::translate("ClientWindowGui", "BC", nullptr));

#if QT_CONFIG(tooltip)
        whoBox1->setToolTip(QCoreApplication::translate("ClientWindowGui", "Select players rank boundaries", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        whoBox1->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "<html><head/><body><p>Select players ranks boundaries</p><p>Use these lists to select the rank of players you want to see in the list. </p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("ClientWindowGui", "To:", nullptr));
        whoBox2->setItemText(0, QString());
        whoBox2->setItemText(1, QCoreApplication::translate("ClientWindowGui", "1p-9p", nullptr));
        whoBox2->setItemText(2, QCoreApplication::translate("ClientWindowGui", "9d", nullptr));
        whoBox2->setItemText(3, QCoreApplication::translate("ClientWindowGui", "8d", nullptr));
        whoBox2->setItemText(4, QCoreApplication::translate("ClientWindowGui", "7d", nullptr));
        whoBox2->setItemText(5, QCoreApplication::translate("ClientWindowGui", "6d", nullptr));
        whoBox2->setItemText(6, QCoreApplication::translate("ClientWindowGui", "5d", nullptr));
        whoBox2->setItemText(7, QCoreApplication::translate("ClientWindowGui", "4d", nullptr));
        whoBox2->setItemText(8, QCoreApplication::translate("ClientWindowGui", "3d", nullptr));
        whoBox2->setItemText(9, QCoreApplication::translate("ClientWindowGui", "2d", nullptr));
        whoBox2->setItemText(10, QCoreApplication::translate("ClientWindowGui", "1d", nullptr));
        whoBox2->setItemText(11, QCoreApplication::translate("ClientWindowGui", "1k", nullptr));
        whoBox2->setItemText(12, QCoreApplication::translate("ClientWindowGui", "2k", nullptr));
        whoBox2->setItemText(13, QCoreApplication::translate("ClientWindowGui", "3k", nullptr));
        whoBox2->setItemText(14, QCoreApplication::translate("ClientWindowGui", "4k", nullptr));
        whoBox2->setItemText(15, QCoreApplication::translate("ClientWindowGui", "5k", nullptr));
        whoBox2->setItemText(16, QCoreApplication::translate("ClientWindowGui", "6k", nullptr));
        whoBox2->setItemText(17, QCoreApplication::translate("ClientWindowGui", "7k", nullptr));
        whoBox2->setItemText(18, QCoreApplication::translate("ClientWindowGui", "8k", nullptr));
        whoBox2->setItemText(19, QCoreApplication::translate("ClientWindowGui", "9k", nullptr));
        whoBox2->setItemText(20, QCoreApplication::translate("ClientWindowGui", "10k", nullptr));
        whoBox2->setItemText(21, QCoreApplication::translate("ClientWindowGui", "15k", nullptr));
        whoBox2->setItemText(22, QCoreApplication::translate("ClientWindowGui", "20k", nullptr));
        whoBox2->setItemText(23, QCoreApplication::translate("ClientWindowGui", "25k", nullptr));
        whoBox2->setItemText(24, QCoreApplication::translate("ClientWindowGui", "30k", nullptr));

#if QT_CONFIG(tooltip)
        whoBox2->setToolTip(QCoreApplication::translate("ClientWindowGui", "Select players rank boundaries", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        whoBox2->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "<html><head/><body><p>Select players ranks boundaries</p><p>Use these lists to select the rank of players you want to see in the list. </p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        whoOpenCheck->setToolTip(QCoreApplication::translate("ClientWindowGui", "toggle for displaying only open players", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        whoOpenCheck->setWhatsThis(QCoreApplication::translate("ClientWindowGui", "<html><head/><body><p>Open players</p><p><br/></p><p>Check this box if you want the list to display only open players (uncheck if you want all players).</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        whoOpenCheck->setText(QCoreApplication::translate("ClientWindowGui", "open", nullptr));
        LeaveRoomButton->setText(QString());
        TabWidget_mini_2->setTabText(TabWidget_mini_2->indexOf(rooms), QCoreApplication::translate("ClientWindowGui", "Rooms*", nullptr));
        pb_releaseTalkTabs->setText(QCoreApplication::translate("ClientWindowGui", "Close all talk tabs", nullptr));
        TabWidget_mini_2->setTabText(TabWidget_mini_2->indexOf(messages), QCoreApplication::translate("ClientWindowGui", "Msg*", nullptr));
        groupBox2->setTitle(QCoreApplication::translate("ClientWindowGui", "Games", nullptr));
#if QT_CONFIG(tooltip)
        MultiLineEdit2->setToolTip(QCoreApplication::translate("ClientWindowGui", "relevant messages from/to server", nullptr));
#endif // QT_CONFIG(tooltip)
        FileToolbar->setWindowTitle(QCoreApplication::translate("ClientWindowGui", "File toolbar", nullptr));
        Toolbar->setWindowTitle(QCoreApplication::translate("ClientWindowGui", "Main toolbar", nullptr));
        toolConnect->setText(QString());
#if QT_CONFIG(whatsthis)
        toolConnect->setProperty("whatsThis", QVariant(QCoreApplication::translate("ClientWindowGui", "Connect\n"
"\n"
"	  Connect with/Disconnect from selected Go server.", nullptr)));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        cb_connect->setProperty("toolTip", QVariant(QCoreApplication::translate("ClientWindowGui", "choose server", nullptr)));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        cb_connect->setProperty("whatsThis", QVariant(QCoreApplication::translate("ClientWindowGui", "chose Go server to connect to or use 'Preferences' to add/change a Go server entry", nullptr)));
#endif // QT_CONFIG(whatsthis)
        toolSeek->setText(QString());
#if QT_CONFIG(tooltip)
        toolSeek->setProperty("toolTip", QVariant(QCoreApplication::translate("ClientWindowGui", "Seek game", nullptr)));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        toolSeek->setProperty("whatsThis", QVariant(QCoreApplication::translate("ClientWindowGui", "Seek game\n"
"\n"
"	  Use this button to 'seek' a game, with the given time settings (popup menu), and handicap range (list beside)\n"
"	  The server will automatically launch a game against an opponent with matching settings.", nullptr)));
#endif // QT_CONFIG(whatsthis)
        cb_seek_handicap->setItemText(0, QCoreApplication::translate("ClientWindowGui", "even", nullptr));
        cb_seek_handicap->setItemText(1, QCoreApplication::translate("ClientWindowGui", "within 2 stones", nullptr));
        cb_seek_handicap->setItemText(2, QCoreApplication::translate("ClientWindowGui", "within 5 stones", nullptr));
        cb_seek_handicap->setItemText(3, QCoreApplication::translate("ClientWindowGui", "anyone", nullptr));
        cb_seek_handicap->setItemText(4, QCoreApplication::translate("ClientWindowGui", "same or stronger", nullptr));
        cb_seek_handicap->setItemText(5, QCoreApplication::translate("ClientWindowGui", "same or weaker", nullptr));

#if QT_CONFIG(tooltip)
        cb_seek_handicap->setProperty("toolTip", QVariant(QCoreApplication::translate("ClientWindowGui", "Set the handicap range you want for seeking games", nullptr)));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        cb_seek_handicap->setProperty("whatsThis", QVariant(QCoreApplication::translate("ClientWindowGui", "handicap range\n"
"\n"
"	  Set the handicap range you wish when seeking a game. See 'seek' button for more", nullptr)));
#endif // QT_CONFIG(whatsthis)
        toolObserveMode->setText(QString());
#if QT_CONFIG(tooltip)
        toolObserveMode->setProperty("toolTip", QVariant(QCoreApplication::translate("ClientWindowGui", "Observe mode\n"
"Choose between single window or multiple windows.", nullptr)));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        toolObserveMode->setProperty("whatsThis", QVariant(QCoreApplication::translate("ClientWindowGui", "Observe mode\n"
"\n"
"Use this button to choose whether observed games will open in individual windows, or in a single\n"
"window with a selection pane for choosing which game to observe.", nullptr)));
#endif // QT_CONFIG(whatsthis)
        fileMenu->setTitle(QCoreApplication::translate("ClientWindowGui", "&File", nullptr));
        PopupMenu->setTitle(QCoreApplication::translate("ClientWindowGui", "&Connections", nullptr));
        PopupMenu_2->setTitle(QCoreApplication::translate("ClientWindowGui", "&Settings", nullptr));
        PopupMenu_3->setTitle(QCoreApplication::translate("ClientWindowGui", "&View", nullptr));
        menu_Learn_Go->setTitle(QCoreApplication::translate("ClientWindowGui", "&Learn Go", nullptr));
        helpMenu->setTitle(QCoreApplication::translate("ClientWindowGui", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWindowGui: public Ui_ClientWindowGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_GUI_H
