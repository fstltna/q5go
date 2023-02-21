/********************************************************************************
** Form generated from reading UI file 'dbdialog_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBDIALOG_GUI_H
#define UI_DBDIALOG_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "board.h"
#include "clickableviews.h"

QT_BEGIN_NAMESPACE

class Ui_DBDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    ClickableListView *dbListView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *eventEdit_2;
    QLabel *label_7;
    QLineEdit *fromEdit;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *toEdit;
    QLineEdit *eventEdit;
    QLineEdit *p2Edit;
    QLineEdit *p1Edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *gameNumLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resetButton;
    QPushButton *clearButton;
    QPushButton *applyButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *dbConfButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QGroupBox *overwriteSGFEncoding;
    QVBoxLayout *verticalLayout_2;
    QComboBox *encodingList;
    FigureView *boardView;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *File_Size;
    QLabel *label_19;
    QLabel *File_Date;
    QLabel *File_Handicap;
    QLabel *label_2;
    QLabel *label_20;
    QLabel *label_14;
    QLabel *File_Komi;
    QLabel *File_Result;
    QLabel *label_17;
    QLabel *label;
    QLabel *File_BlackPlayer;
    QLabel *File_WhitePlayer;
    QLabel *label_16;
    QLabel *label_3;
    QLabel *File_Event;
    QLabel *label_4;
    QLabel *File_Round;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *_7;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *goFirstButton;
    QToolButton *goPrevButton;
    QToolButton *goNextButton;
    QToolButton *goLastButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *DBDialog)
    {
        if (DBDialog->objectName().isEmpty())
            DBDialog->setObjectName(QString::fromUtf8("DBDialog"));
        DBDialog->resize(922, 640);
        DBDialog->setMinimumSize(QSize(200, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/qgo.png"), QSize(), QIcon::Normal, QIcon::Off);
        DBDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(DBDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dbListView = new ClickableListView(DBDialog);
        dbListView->setObjectName(QString::fromUtf8("dbListView"));
        dbListView->setSelectionBehavior(QAbstractItemView::SelectRows);
        dbListView->setUniformItemSizes(true);

        verticalLayout->addWidget(dbListView);

        groupBox_2 = new QGroupBox(DBDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        eventEdit_2 = new QLabel(groupBox_2);
        eventEdit_2->setObjectName(QString::fromUtf8("eventEdit_2"));

        gridLayout_2->addWidget(eventEdit_2, 2, 0, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        fromEdit = new QLineEdit(groupBox_2);
        fromEdit->setObjectName(QString::fromUtf8("fromEdit"));

        gridLayout_2->addWidget(fromEdit, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 2, 1, 1);

        toEdit = new QLineEdit(groupBox_2);
        toEdit->setObjectName(QString::fromUtf8("toEdit"));

        gridLayout_2->addWidget(toEdit, 3, 3, 1, 1);

        eventEdit = new QLineEdit(groupBox_2);
        eventEdit->setObjectName(QString::fromUtf8("eventEdit"));

        gridLayout_2->addWidget(eventEdit, 2, 1, 1, 3);

        p2Edit = new QLineEdit(groupBox_2);
        p2Edit->setObjectName(QString::fromUtf8("p2Edit"));

        gridLayout_2->addWidget(p2Edit, 1, 1, 1, 3);

        p1Edit = new QLineEdit(groupBox_2);
        p1Edit->setObjectName(QString::fromUtf8("p1Edit"));

        gridLayout_2->addWidget(p1Edit, 0, 1, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gameNumLabel = new QLabel(groupBox_2);
        gameNumLabel->setObjectName(QString::fromUtf8("gameNumLabel"));

        horizontalLayout_2->addWidget(gameNumLabel);

        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        resetButton = new QPushButton(groupBox_2);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        horizontalLayout_2->addWidget(resetButton);

        clearButton = new QPushButton(groupBox_2);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        horizontalLayout_2->addWidget(clearButton);

        applyButton = new QPushButton(groupBox_2);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        horizontalLayout_2->addWidget(applyButton);


        gridLayout_2->addLayout(horizontalLayout_2, 6, 0, 1, 4);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dbConfButton = new QPushButton(DBDialog);
        dbConfButton->setObjectName(QString::fromUtf8("dbConfButton"));

        horizontalLayout->addWidget(dbConfButton);

        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(DBDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);

        overwriteSGFEncoding = new QGroupBox(DBDialog);
        overwriteSGFEncoding->setObjectName(QString::fromUtf8("overwriteSGFEncoding"));
        overwriteSGFEncoding->setCheckable(true);
        overwriteSGFEncoding->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(overwriteSGFEncoding);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        encodingList = new QComboBox(overwriteSGFEncoding);
        encodingList->addItem(QString());
        encodingList->addItem(QString());
        encodingList->addItem(QString());
        encodingList->addItem(QString());
        encodingList->addItem(QString());
        encodingList->addItem(QString());
        encodingList->addItem(QString());
        encodingList->setObjectName(QString::fromUtf8("encodingList"));

        verticalLayout_2->addWidget(encodingList);


        verticalLayout->addWidget(overwriteSGFEncoding);


        gridLayout->addLayout(verticalLayout, 0, 0, 4, 1);

        boardView = new FigureView(DBDialog);
        boardView->setObjectName(QString::fromUtf8("boardView"));
        boardView->setEnabled(false);
        boardView->setMinimumSize(QSize(250, 250));

        gridLayout->addWidget(boardView, 0, 1, 1, 1);

        groupBox = new QGroupBox(DBDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 6, 6, 6);
        File_Size = new QLabel(groupBox);
        File_Size->setObjectName(QString::fromUtf8("File_Size"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(File_Size->sizePolicy().hasHeightForWidth());
        File_Size->setSizePolicy(sizePolicy1);
        File_Size->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_Size, 5, 1, 1, 1);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 5, 2, 1, 1);

        File_Date = new QLabel(groupBox);
        File_Date->setObjectName(QString::fromUtf8("File_Date"));
        sizePolicy1.setHeightForWidth(File_Date->sizePolicy().hasHeightForWidth());
        File_Date->setSizePolicy(sizePolicy1);
        File_Date->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_Date, 4, 1, 1, 5);

        File_Handicap = new QLabel(groupBox);
        File_Handicap->setObjectName(QString::fromUtf8("File_Handicap"));
        sizePolicy1.setHeightForWidth(File_Handicap->sizePolicy().hasHeightForWidth());
        File_Handicap->setSizePolicy(sizePolicy1);
        File_Handicap->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_Handicap, 5, 5, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 5, 0, 1, 1);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_3->addWidget(label_20, 5, 4, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 4, 0, 1, 1);

        File_Komi = new QLabel(groupBox);
        File_Komi->setObjectName(QString::fromUtf8("File_Komi"));
        sizePolicy1.setHeightForWidth(File_Komi->sizePolicy().hasHeightForWidth());
        File_Komi->setSizePolicy(sizePolicy1);
        File_Komi->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_Komi, 5, 3, 1, 1);

        File_Result = new QLabel(groupBox);
        File_Result->setObjectName(QString::fromUtf8("File_Result"));
        sizePolicy1.setHeightForWidth(File_Result->sizePolicy().hasHeightForWidth());
        File_Result->setSizePolicy(sizePolicy1);
        File_Result->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_Result, 2, 1, 1, 5);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/images/stone_b16.png")));

        gridLayout_3->addWidget(label_17, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        File_BlackPlayer = new QLabel(groupBox);
        File_BlackPlayer->setObjectName(QString::fromUtf8("File_BlackPlayer"));
        File_BlackPlayer->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_BlackPlayer, 1, 1, 1, 5);

        File_WhitePlayer = new QLabel(groupBox);
        File_WhitePlayer->setObjectName(QString::fromUtf8("File_WhitePlayer"));
        File_WhitePlayer->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_WhitePlayer, 0, 1, 1, 5);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/images/stone_w16.png")));

        gridLayout_3->addWidget(label_16, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 3, 0, 1, 1);

        File_Event = new QLabel(groupBox);
        File_Event->setObjectName(QString::fromUtf8("File_Event"));
        File_Event->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_Event, 3, 1, 1, 3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 3, 4, 1, 1);

        File_Round = new QLabel(groupBox);
        File_Round->setObjectName(QString::fromUtf8("File_Round"));
        File_Round->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_Round, 3, 5, 1, 1);


        gridLayout->addWidget(groupBox, 2, 1, 1, 1);

        widget = new QWidget(DBDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        _7 = new QHBoxLayout();
        _7->setSpacing(6);
        _7->setObjectName(QString::fromUtf8("_7"));
        _7->setContentsMargins(1, 1, 1, 1);
        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _7->addItem(horizontalSpacer_3);

        goFirstButton = new QToolButton(widget);
        goFirstButton->setObjectName(QString::fromUtf8("goFirstButton"));
        goFirstButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/2leftarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        goFirstButton->setIcon(icon1);

        _7->addWidget(goFirstButton);

        goPrevButton = new QToolButton(widget);
        goPrevButton->setObjectName(QString::fromUtf8("goPrevButton"));
        goPrevButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/1leftarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        goPrevButton->setIcon(icon2);

        _7->addWidget(goPrevButton);

        goNextButton = new QToolButton(widget);
        goNextButton->setObjectName(QString::fromUtf8("goNextButton"));
        goNextButton->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/1rightarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        goNextButton->setIcon(icon3);

        _7->addWidget(goNextButton);

        goLastButton = new QToolButton(widget);
        goLastButton->setObjectName(QString::fromUtf8("goLastButton"));
        goLastButton->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/2rightarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        goLastButton->setIcon(icon4);

        _7->addWidget(goLastButton);

        horizontalSpacer_4 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _7->addItem(horizontalSpacer_4);


        horizontalLayout_3->addLayout(_7);


        gridLayout->addWidget(widget, 1, 1, 1, 1);

#if QT_CONFIG(shortcut)
        label_6->setBuddy(p2Edit);
        label_5->setBuddy(p1Edit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(dbListView, p1Edit);
        QWidget::setTabOrder(p1Edit, p2Edit);
        QWidget::setTabOrder(p2Edit, eventEdit);
        QWidget::setTabOrder(eventEdit, fromEdit);
        QWidget::setTabOrder(fromEdit, toEdit);
        QWidget::setTabOrder(toEdit, resetButton);
        QWidget::setTabOrder(resetButton, clearButton);
        QWidget::setTabOrder(clearButton, applyButton);
        QWidget::setTabOrder(applyButton, dbConfButton);
        QWidget::setTabOrder(dbConfButton, overwriteSGFEncoding);
        QWidget::setTabOrder(overwriteSGFEncoding, encodingList);
        QWidget::setTabOrder(encodingList, boardView);

        retranslateUi(DBDialog);

        QMetaObject::connectSlotsByName(DBDialog);
    } // setupUi

    void retranslateUi(QWidget *DBDialog)
    {
        DBDialog->setWindowTitle(QCoreApplication::translate("DBDialog", "Open database file", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DBDialog", "Filters", nullptr));
        label_6->setText(QCoreApplication::translate("DBDialog", "Player 2:", nullptr));
        eventEdit_2->setText(QCoreApplication::translate("DBDialog", "Event:", nullptr));
        label_7->setText(QCoreApplication::translate("DBDialog", "From:", nullptr));
        label_5->setText(QCoreApplication::translate("DBDialog", "Player 1:", nullptr));
        label_8->setText(QCoreApplication::translate("DBDialog", "To:", nullptr));
        gameNumLabel->setText(QString());
        resetButton->setText(QCoreApplication::translate("DBDialog", "Reset Games", nullptr));
        clearButton->setText(QCoreApplication::translate("DBDialog", "Clear", nullptr));
        applyButton->setText(QCoreApplication::translate("DBDialog", "Apply", nullptr));
        dbConfButton->setText(QCoreApplication::translate("DBDialog", "Configure database &paths...", nullptr));
        overwriteSGFEncoding->setTitle(QCoreApplication::translate("DBDialog", "Override character set for text in SGF file:", nullptr));
        encodingList->setItemText(0, QCoreApplication::translate("DBDialog", "UTF-8", nullptr));
        encodingList->setItemText(1, QCoreApplication::translate("DBDialog", "GB18030", nullptr));
        encodingList->setItemText(2, QCoreApplication::translate("DBDialog", "EUC-KR", nullptr));
        encodingList->setItemText(3, QCoreApplication::translate("DBDialog", "EUC-JP", nullptr));
        encodingList->setItemText(4, QCoreApplication::translate("DBDialog", "ISO-2022-JP", nullptr));
        encodingList->setItemText(5, QCoreApplication::translate("DBDialog", "Shift-JIS", nullptr));
        encodingList->setItemText(6, QCoreApplication::translate("DBDialog", "Big5", nullptr));

        groupBox->setTitle(QCoreApplication::translate("DBDialog", "File properties", nullptr));
        File_Size->setText(QCoreApplication::translate("DBDialog", "19", nullptr));
        label_19->setText(QCoreApplication::translate("DBDialog", "Komi:", nullptr));
        File_Date->setText(QCoreApplication::translate("DBDialog", "Date", nullptr));
        File_Handicap->setText(QString());
        label_2->setText(QCoreApplication::translate("DBDialog", "Size:", nullptr));
        label_20->setText(QCoreApplication::translate("DBDialog", "Handicap:", nullptr));
        label_14->setText(QCoreApplication::translate("DBDialog", "Date:", nullptr));
        File_Komi->setText(QCoreApplication::translate("DBDialog", "6.5", nullptr));
        File_Result->setText(QString());
        label_17->setText(QString());
        label->setText(QCoreApplication::translate("DBDialog", "Result:", nullptr));
        File_BlackPlayer->setText(QCoreApplication::translate("DBDialog", "Black", nullptr));
        File_WhitePlayer->setText(QCoreApplication::translate("DBDialog", "White", nullptr));
        label_16->setText(QString());
        label_3->setText(QCoreApplication::translate("DBDialog", "Event:", nullptr));
        File_Event->setText(QString());
        label_4->setText(QCoreApplication::translate("DBDialog", "Round:", nullptr));
        File_Round->setText(QString());
#if QT_CONFIG(tooltip)
        goFirstButton->setToolTip(QCoreApplication::translate("DBDialog", "Go to first move.", nullptr));
#endif // QT_CONFIG(tooltip)
        goFirstButton->setText(QCoreApplication::translate("DBDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        goPrevButton->setToolTip(QCoreApplication::translate("DBDialog", "Go to previous move.", nullptr));
#endif // QT_CONFIG(tooltip)
        goPrevButton->setText(QCoreApplication::translate("DBDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        goNextButton->setToolTip(QCoreApplication::translate("DBDialog", "Go to next move.", nullptr));
#endif // QT_CONFIG(tooltip)
        goNextButton->setText(QCoreApplication::translate("DBDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        goLastButton->setToolTip(QCoreApplication::translate("DBDialog", "Go to last move.", nullptr));
#endif // QT_CONFIG(tooltip)
        goLastButton->setText(QCoreApplication::translate("DBDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DBDialog: public Ui_DBDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBDIALOG_GUI_H
