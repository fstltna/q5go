/********************************************************************************
** Form generated from reading UI file 'sgfpreview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SGFPREVIEW_H
#define UI_SGFPREVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "board.h"

QT_BEGIN_NAMESPACE

class Ui_SGFPreview
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *dialogWidget;
    QGroupBox *overwriteSGFEncoding;
    QVBoxLayout *verticalLayout_2;
    QComboBox *encodingList;
    FigureView *boardView;
    QGridLayout *gridLayout_3;
    QLabel *label_19;
    QLabel *label_17;
    QLabel *File_BlackPlayer;
    QLabel *label_20;
    QLabel *File_Date;
    QLabel *label;
    QLabel *File_Handicap;
    QLabel *File_Size;
    QLabel *File_WhitePlayer;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *File_Komi;
    QLabel *File_Result;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *File_Event;
    QLabel *label_4;
    QLabel *File_Round;

    void setupUi(QWidget *SGFPreview)
    {
        if (SGFPreview->objectName().isEmpty())
            SGFPreview->setObjectName(QString::fromUtf8("SGFPreview"));
        SGFPreview->resize(922, 640);
        SGFPreview->setMinimumSize(QSize(200, 0));
        gridLayout = new QGridLayout(SGFPreview);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        gridLayout->addLayout(gridLayout_2, 3, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dialogWidget = new QWidget(SGFPreview);
        dialogWidget->setObjectName(QString::fromUtf8("dialogWidget"));

        verticalLayout->addWidget(dialogWidget);

        overwriteSGFEncoding = new QGroupBox(SGFPreview);
        overwriteSGFEncoding->setObjectName(QString::fromUtf8("overwriteSGFEncoding"));
        overwriteSGFEncoding->setCheckable(true);
        overwriteSGFEncoding->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(overwriteSGFEncoding);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
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

        verticalLayout->setStretch(0, 1);

        gridLayout->addLayout(verticalLayout, 0, 0, 4, 1);

        boardView = new FigureView(SGFPreview);
        boardView->setObjectName(QString::fromUtf8("boardView"));
        boardView->setEnabled(false);
        boardView->setMinimumSize(QSize(250, 250));

        gridLayout->addWidget(boardView, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_19 = new QLabel(SGFPreview);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 6, 2, 1, 1);

        label_17 = new QLabel(SGFPreview);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/images/stone_b16.png")));

        gridLayout_3->addWidget(label_17, 1, 0, 1, 1);

        File_BlackPlayer = new QLabel(SGFPreview);
        File_BlackPlayer->setObjectName(QString::fromUtf8("File_BlackPlayer"));
        File_BlackPlayer->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_BlackPlayer, 1, 1, 1, 5);

        label_20 = new QLabel(SGFPreview);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_3->addWidget(label_20, 6, 4, 1, 1);

        File_Date = new QLabel(SGFPreview);
        File_Date->setObjectName(QString::fromUtf8("File_Date"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(File_Date->sizePolicy().hasHeightForWidth());
        File_Date->setSizePolicy(sizePolicy);
        File_Date->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_Date, 5, 1, 1, 5);

        label = new QLabel(SGFPreview);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 3, 0, 1, 1);

        File_Handicap = new QLabel(SGFPreview);
        File_Handicap->setObjectName(QString::fromUtf8("File_Handicap"));
        sizePolicy.setHeightForWidth(File_Handicap->sizePolicy().hasHeightForWidth());
        File_Handicap->setSizePolicy(sizePolicy);
        File_Handicap->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_Handicap, 6, 5, 1, 1);

        File_Size = new QLabel(SGFPreview);
        File_Size->setObjectName(QString::fromUtf8("File_Size"));
        sizePolicy.setHeightForWidth(File_Size->sizePolicy().hasHeightForWidth());
        File_Size->setSizePolicy(sizePolicy);
        File_Size->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_Size, 6, 1, 1, 1);

        File_WhitePlayer = new QLabel(SGFPreview);
        File_WhitePlayer->setObjectName(QString::fromUtf8("File_WhitePlayer"));
        File_WhitePlayer->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_WhitePlayer, 0, 1, 1, 5);

        label_16 = new QLabel(SGFPreview);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/images/stone_w16.png")));

        gridLayout_3->addWidget(label_16, 0, 0, 1, 1);

        label_14 = new QLabel(SGFPreview);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 5, 0, 1, 1);

        File_Komi = new QLabel(SGFPreview);
        File_Komi->setObjectName(QString::fromUtf8("File_Komi"));
        sizePolicy.setHeightForWidth(File_Komi->sizePolicy().hasHeightForWidth());
        File_Komi->setSizePolicy(sizePolicy);
        File_Komi->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_Komi, 6, 3, 1, 1);

        File_Result = new QLabel(SGFPreview);
        File_Result->setObjectName(QString::fromUtf8("File_Result"));
        sizePolicy.setHeightForWidth(File_Result->sizePolicy().hasHeightForWidth());
        File_Result->setSizePolicy(sizePolicy);
        File_Result->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_Result, 3, 1, 1, 5);

        label_2 = new QLabel(SGFPreview);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 6, 0, 1, 1);

        label_3 = new QLabel(SGFPreview);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 4, 0, 1, 1);

        File_Event = new QLabel(SGFPreview);
        File_Event->setObjectName(QString::fromUtf8("File_Event"));
        File_Event->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_Event, 4, 1, 1, 3);

        label_4 = new QLabel(SGFPreview);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 4, 4, 1, 1);

        File_Round = new QLabel(SGFPreview);
        File_Round->setObjectName(QString::fromUtf8("File_Round"));
        File_Round->setFrameShape(QFrame::StyledPanel);

        gridLayout_3->addWidget(File_Round, 4, 5, 1, 1);


        gridLayout->addLayout(gridLayout_3, 2, 1, 1, 1);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(File_Event);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SGFPreview);

        QMetaObject::connectSlotsByName(SGFPreview);
    } // setupUi

    void retranslateUi(QWidget *SGFPreview)
    {
        overwriteSGFEncoding->setTitle(QCoreApplication::translate("SGFPreview", "Override character set for text in SGF file:", nullptr));
        encodingList->setItemText(0, QCoreApplication::translate("SGFPreview", "UTF-8", nullptr));
        encodingList->setItemText(1, QCoreApplication::translate("SGFPreview", "GB18030", nullptr));
        encodingList->setItemText(2, QCoreApplication::translate("SGFPreview", "EUC-KR", nullptr));
        encodingList->setItemText(3, QCoreApplication::translate("SGFPreview", "EUC-JP", nullptr));
        encodingList->setItemText(4, QCoreApplication::translate("SGFPreview", "ISO-2022-JP", nullptr));
        encodingList->setItemText(5, QCoreApplication::translate("SGFPreview", "Shift-JIS", nullptr));
        encodingList->setItemText(6, QCoreApplication::translate("SGFPreview", "Big5", nullptr));

        label_19->setText(QCoreApplication::translate("SGFPreview", "Komi:", nullptr));
        label_17->setText(QString());
        File_BlackPlayer->setText(QCoreApplication::translate("SGFPreview", "Black", nullptr));
        label_20->setText(QCoreApplication::translate("SGFPreview", "Handicap:", nullptr));
        File_Date->setText(QCoreApplication::translate("SGFPreview", "Date", nullptr));
        label->setText(QCoreApplication::translate("SGFPreview", "Result:", nullptr));
        File_Handicap->setText(QString());
        File_Size->setText(QCoreApplication::translate("SGFPreview", "19", nullptr));
        File_WhitePlayer->setText(QCoreApplication::translate("SGFPreview", "White", nullptr));
        label_16->setText(QString());
        label_14->setText(QCoreApplication::translate("SGFPreview", "Date:", nullptr));
        File_Komi->setText(QCoreApplication::translate("SGFPreview", "6.5", nullptr));
        File_Result->setText(QString());
        label_2->setText(QCoreApplication::translate("SGFPreview", "Size:", nullptr));
        label_3->setText(QCoreApplication::translate("SGFPreview", "Event:", nullptr));
        File_Event->setText(QString());
        label_4->setText(QCoreApplication::translate("SGFPreview", "Round:", nullptr));
        File_Round->setText(QString());
        (void)SGFPreview;
    } // retranslateUi

};

namespace Ui {
    class SGFPreview: public Ui_SGFPreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SGFPREVIEW_H
