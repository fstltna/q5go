/********************************************************************************
** Form generated from reading UI file 'greeterwindow_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GREETERWINDOW_GUI_H
#define UI_GREETERWINDOW_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GreeterWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QToolButton *dbLoadButton;
    QToolButton *newButton;
    QToolButton *quitButton;
    QToolButton *onlineButton;
    QToolButton *patsearchButton;
    QToolButton *loadButton;
    QToolButton *newVarButton;
    QToolButton *enginePlayButton;
    QToolButton *analyzeButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *learnButton;
    QToolButton *settingsButton;
    QLabel *label_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *GreeterWindow)
    {
        if (GreeterWindow->objectName().isEmpty())
            GreeterWindow->setObjectName(QString::fromUtf8("GreeterWindow"));
        GreeterWindow->resize(594, 732);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/qgo.png"), QSize(), QIcon::Normal, QIcon::Off);
        GreeterWindow->setWindowIcon(icon);
        centralwidget = new QWidget(GreeterWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 5);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/goboard-small.png")));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        dbLoadButton = new QToolButton(widget);
        dbLoadButton->setObjectName(QString::fromUtf8("dbLoadButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dbLoadButton->sizePolicy().hasHeightForWidth());
        dbLoadButton->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/open-search.png"), QSize(), QIcon::Normal, QIcon::Off);
        dbLoadButton->setIcon(icon1);
        dbLoadButton->setIconSize(QSize(100, 64));
        dbLoadButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        dbLoadButton->setAutoRaise(false);

        gridLayout_2->addWidget(dbLoadButton, 0, 3, 1, 1);

        newButton = new QToolButton(widget);
        newButton->setObjectName(QString::fromUtf8("newButton"));
        sizePolicy1.setHeightForWidth(newButton->sizePolicy().hasHeightForWidth());
        newButton->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/new_board.png"), QSize(), QIcon::Normal, QIcon::Off);
        newButton->setIcon(icon2);
        newButton->setIconSize(QSize(100, 64));
        newButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        newButton->setAutoRaise(false);

        gridLayout_2->addWidget(newButton, 0, 0, 1, 1);

        quitButton = new QToolButton(widget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        sizePolicy1.setHeightForWidth(quitButton->sizePolicy().hasHeightForWidth());
        quitButton->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        quitButton->setIcon(icon3);
        quitButton->setIconSize(QSize(100, 64));
        quitButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        quitButton->setAutoRaise(false);

        gridLayout_2->addWidget(quitButton, 2, 3, 1, 1);

        onlineButton = new QToolButton(widget);
        onlineButton->setObjectName(QString::fromUtf8("onlineButton"));
        sizePolicy1.setHeightForWidth(onlineButton->sizePolicy().hasHeightForWidth());
        onlineButton->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/world.png"), QSize(), QIcon::Normal, QIcon::Off);
        onlineButton->setIcon(icon4);
        onlineButton->setIconSize(QSize(100, 64));
        onlineButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        onlineButton->setArrowType(Qt::NoArrow);

        gridLayout_2->addWidget(onlineButton, 1, 0, 1, 1);

        patsearchButton = new QToolButton(widget);
        patsearchButton->setObjectName(QString::fromUtf8("patsearchButton"));
        sizePolicy1.setHeightForWidth(patsearchButton->sizePolicy().hasHeightForWidth());
        patsearchButton->setSizePolicy(sizePolicy1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        patsearchButton->setIcon(icon5);
        patsearchButton->setIconSize(QSize(100, 64));
        patsearchButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        patsearchButton->setAutoRaise(false);

        gridLayout_2->addWidget(patsearchButton, 1, 3, 1, 1);

        loadButton = new QToolButton(widget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        sizePolicy1.setHeightForWidth(loadButton->sizePolicy().hasHeightForWidth());
        loadButton->setSizePolicy(sizePolicy1);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadButton->setIcon(icon6);
        loadButton->setIconSize(QSize(100, 64));
        loadButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        loadButton->setAutoRaise(false);

        gridLayout_2->addWidget(loadButton, 0, 2, 1, 1);

        newVarButton = new QToolButton(widget);
        newVarButton->setObjectName(QString::fromUtf8("newVarButton"));
        sizePolicy1.setHeightForWidth(newVarButton->sizePolicy().hasHeightForWidth());
        newVarButton->setSizePolicy(sizePolicy1);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/torus.png"), QSize(), QIcon::Normal, QIcon::Off);
        newVarButton->setIcon(icon7);
        newVarButton->setIconSize(QSize(64, 64));
        newVarButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        newVarButton->setAutoRaise(false);

        gridLayout_2->addWidget(newVarButton, 0, 1, 1, 1);

        enginePlayButton = new QToolButton(widget);
        enginePlayButton->setObjectName(QString::fromUtf8("enginePlayButton"));
        sizePolicy1.setHeightForWidth(enginePlayButton->sizePolicy().hasHeightForWidth());
        enginePlayButton->setSizePolicy(sizePolicy1);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/human-robot.png"), QSize(), QIcon::Normal, QIcon::Off);
        enginePlayButton->setIcon(icon8);
        enginePlayButton->setIconSize(QSize(100, 64));
        enginePlayButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        enginePlayButton->setAutoRaise(false);

        gridLayout_2->addWidget(enginePlayButton, 1, 1, 1, 1);

        analyzeButton = new QToolButton(widget);
        analyzeButton->setObjectName(QString::fromUtf8("analyzeButton"));
        sizePolicy1.setHeightForWidth(analyzeButton->sizePolicy().hasHeightForWidth());
        analyzeButton->setSizePolicy(sizePolicy1);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/gear.png"), QSize(), QIcon::Normal, QIcon::Off);
        analyzeButton->setIcon(icon9);
        analyzeButton->setIconSize(QSize(100, 64));
        analyzeButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        analyzeButton->setAutoRaise(false);

        gridLayout_2->addWidget(analyzeButton, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 3, 3, 1, 1);

        learnButton = new QToolButton(widget);
        learnButton->setObjectName(QString::fromUtf8("learnButton"));
        sizePolicy1.setHeightForWidth(learnButton->sizePolicy().hasHeightForWidth());
        learnButton->setSizePolicy(sizePolicy1);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        learnButton->setIcon(icon10);
        learnButton->setIconSize(QSize(64, 64));
        learnButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        learnButton->setAutoRaise(false);

        gridLayout_2->addWidget(learnButton, 2, 0, 1, 1);

        settingsButton = new QToolButton(widget);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        sizePolicy1.setHeightForWidth(settingsButton->sizePolicy().hasHeightForWidth());
        settingsButton->setSizePolicy(sizePolicy1);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/prefs.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingsButton->setIcon(icon11);
        settingsButton->setIconSize(QSize(64, 64));
        settingsButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        settingsButton->setAutoRaise(false);

        gridLayout_2->addWidget(settingsButton, 2, 1, 1, 1);


        verticalLayout->addWidget(widget);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        GreeterWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GreeterWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 594, 23));
        GreeterWindow->setMenuBar(menubar);

        retranslateUi(GreeterWindow);

        QMetaObject::connectSlotsByName(GreeterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GreeterWindow)
    {
        GreeterWindow->setWindowTitle(QCoreApplication::translate("GreeterWindow", "MainWindow", nullptr));
        label->setText(QString());
        dbLoadButton->setText(QCoreApplication::translate("GreeterWindow", "Load SGF file\n"
"from database", nullptr));
        newButton->setText(QCoreApplication::translate("GreeterWindow", "Open a\n"
"board window", nullptr));
        quitButton->setText(QCoreApplication::translate("GreeterWindow", "Quit", nullptr));
        onlineButton->setText(QCoreApplication::translate("GreeterWindow", "Play online", nullptr));
        patsearchButton->setText(QCoreApplication::translate("GreeterWindow", "Pattern search", nullptr));
        loadButton->setText(QCoreApplication::translate("GreeterWindow", "Load SGF file", nullptr));
        newVarButton->setText(QCoreApplication::translate("GreeterWindow", "Open a\n"
"variant board", nullptr));
        enginePlayButton->setText(QCoreApplication::translate("GreeterWindow", "Play against\n"
"the machine", nullptr));
        analyzeButton->setText(QCoreApplication::translate("GreeterWindow", "Batch analysis", nullptr));
        learnButton->setText(QCoreApplication::translate("GreeterWindow", "Learn Go", nullptr));
        settingsButton->setText(QCoreApplication::translate("GreeterWindow", "Settings", nullptr));
        label_2->setText(QCoreApplication::translate("GreeterWindow", "Choose \"Play online\" to bring up the client window with more options.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GreeterWindow: public Ui_GreeterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GREETERWINDOW_GUI_H
