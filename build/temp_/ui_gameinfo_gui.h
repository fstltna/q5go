/********************************************************************************
** Form generated from reading UI file 'gameinfo_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEINFO_GUI_H
#define UI_GAMEINFO_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include "komispinbox.h"

QT_BEGIN_NAMESPACE

class Ui_GameInfoDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel10;
    QLineEdit *gameNameEdit;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *Horizontal_Spacing2;
    QDialogButtonBox *buttonBox;
    QFrame *Frame1;
    QGridLayout *gridLayout1;
    QLabel *TextLabel1;
    QLabel *TextLabel3;
    QLineEdit *playerWhiteEdit;
    QLabel *TextLabel2;
    QLineEdit *blackRankEdit;
    QLineEdit *whiteRankEdit;
    QLineEdit *playerBlackEdit;
    QLabel *TextLabe4;
    QFrame *line_2;
    QFrame *Frame2;
    QGridLayout *gridLayout_1;
    QLabel *TextLabel9;
    QLabel *TextLabel8;
    QLineEdit *placeEdit;
    QLabel *TextLabel7;
    QLineEdit *dateEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *roundEdit;
    QLabel *TextLabel5;
    QLineEdit *copyrightEdit;
    QSpinBox *handicapSpin;
    QLabel *TextLabel4;
    QLineEdit *eventEdit;
    KomiSpinBox *komiSpin;
    QLabel *TextLabel6;
    QLineEdit *resultEdit;
    QLabel *TextLabel7_2;
    QLineEdit *rulesEdit;
    QSpacerItem *verticalSpacer;
    QFrame *line;

    void setupUi(QDialog *GameInfoDialog)
    {
        if (GameInfoDialog->objectName().isEmpty())
            GameInfoDialog->setObjectName(QString::fromUtf8("GameInfoDialog"));
        GameInfoDialog->resize(484, 399);
        GameInfoDialog->setMaximumSize(QSize(500, 400));
        gridLayout = new QGridLayout(GameInfoDialog);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        TextLabel10 = new QLabel(GameInfoDialog);
        TextLabel10->setObjectName(QString::fromUtf8("TextLabel10"));
        TextLabel10->setMinimumSize(QSize(80, 0));
        TextLabel10->setWordWrap(false);

        hboxLayout->addWidget(TextLabel10);

        gameNameEdit = new QLineEdit(GameInfoDialog);
        gameNameEdit->setObjectName(QString::fromUtf8("gameNameEdit"));

        hboxLayout->addWidget(gameNameEdit);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        Horizontal_Spacing2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(Horizontal_Spacing2);

        buttonBox = new QDialogButtonBox(GameInfoDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout1->addWidget(buttonBox);


        gridLayout->addLayout(hboxLayout1, 6, 0, 1, 1);

        Frame1 = new QFrame(GameInfoDialog);
        Frame1->setObjectName(QString::fromUtf8("Frame1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Frame1->sizePolicy().hasHeightForWidth());
        Frame1->setSizePolicy(sizePolicy);
        gridLayout1 = new QGridLayout(Frame1);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        TextLabel1 = new QLabel(Frame1);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setPixmap(QPixmap(QString::fromUtf8(":/images/stone_w16.png")));
        TextLabel1->setWordWrap(false);

        gridLayout1->addWidget(TextLabel1, 3, 0, 1, 1);

        TextLabel3 = new QLabel(Frame1);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
        TextLabel3->setWordWrap(false);

        gridLayout1->addWidget(TextLabel3, 2, 1, 1, 1);

        playerWhiteEdit = new QLineEdit(Frame1);
        playerWhiteEdit->setObjectName(QString::fromUtf8("playerWhiteEdit"));
        playerWhiteEdit->setMinimumSize(QSize(0, 0));

        gridLayout1->addWidget(playerWhiteEdit, 3, 1, 1, 1);

        TextLabel2 = new QLabel(Frame1);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        TextLabel2->setPixmap(QPixmap(QString::fromUtf8(":/images/stone_b16.png")));
        TextLabel2->setWordWrap(false);

        gridLayout1->addWidget(TextLabel2, 4, 0, 1, 1);

        blackRankEdit = new QLineEdit(Frame1);
        blackRankEdit->setObjectName(QString::fromUtf8("blackRankEdit"));
        blackRankEdit->setMaximumSize(QSize(50, 32767));

        gridLayout1->addWidget(blackRankEdit, 4, 2, 1, 1);

        whiteRankEdit = new QLineEdit(Frame1);
        whiteRankEdit->setObjectName(QString::fromUtf8("whiteRankEdit"));
        whiteRankEdit->setMaximumSize(QSize(50, 32767));

        gridLayout1->addWidget(whiteRankEdit, 3, 2, 1, 1);

        playerBlackEdit = new QLineEdit(Frame1);
        playerBlackEdit->setObjectName(QString::fromUtf8("playerBlackEdit"));

        gridLayout1->addWidget(playerBlackEdit, 4, 1, 1, 1);

        TextLabe4 = new QLabel(Frame1);
        TextLabe4->setObjectName(QString::fromUtf8("TextLabe4"));
        TextLabe4->setWordWrap(false);

        gridLayout1->addWidget(TextLabe4, 2, 2, 1, 1);


        gridLayout->addWidget(Frame1, 2, 0, 1, 1);

        line_2 = new QFrame(GameInfoDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 0, 1, 1);

        Frame2 = new QFrame(GameInfoDialog);
        Frame2->setObjectName(QString::fromUtf8("Frame2"));
        Frame2->setFrameShape(QFrame::NoFrame);
        gridLayout_1 = new QGridLayout(Frame2);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        gridLayout_1->setContentsMargins(0, 0, 0, -1);
        TextLabel9 = new QLabel(Frame2);
        TextLabel9->setObjectName(QString::fromUtf8("TextLabel9"));
        TextLabel9->setWordWrap(false);

        gridLayout_1->addWidget(TextLabel9, 4, 0, 1, 1);

        TextLabel8 = new QLabel(Frame2);
        TextLabel8->setObjectName(QString::fromUtf8("TextLabel8"));
        TextLabel8->setMinimumSize(QSize(80, 0));
        TextLabel8->setWordWrap(false);

        gridLayout_1->addWidget(TextLabel8, 3, 0, 1, 1);

        placeEdit = new QLineEdit(Frame2);
        placeEdit->setObjectName(QString::fromUtf8("placeEdit"));

        gridLayout_1->addWidget(placeEdit, 4, 1, 1, 2);

        TextLabel7 = new QLabel(Frame2);
        TextLabel7->setObjectName(QString::fromUtf8("TextLabel7"));
        TextLabel7->setWordWrap(false);

        gridLayout_1->addWidget(TextLabel7, 4, 3, 1, 1);

        dateEdit = new QLineEdit(Frame2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMaximumSize(QSize(100, 16777215));

        gridLayout_1->addWidget(dateEdit, 4, 4, 1, 1);

        label = new QLabel(Frame2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_1->addWidget(label, 5, 0, 1, 1);

        label_2 = new QLabel(Frame2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_1->addWidget(label_2, 5, 3, 1, 1);

        roundEdit = new QLineEdit(Frame2);
        roundEdit->setObjectName(QString::fromUtf8("roundEdit"));
        roundEdit->setMaximumSize(QSize(100, 16777215));

        gridLayout_1->addWidget(roundEdit, 5, 4, 1, 1);

        TextLabel5 = new QLabel(Frame2);
        TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
        TextLabel5->setWordWrap(false);

        gridLayout_1->addWidget(TextLabel5, 1, 0, 1, 1);

        copyrightEdit = new QLineEdit(Frame2);
        copyrightEdit->setObjectName(QString::fromUtf8("copyrightEdit"));

        gridLayout_1->addWidget(copyrightEdit, 3, 1, 1, 2);

        handicapSpin = new QSpinBox(Frame2);
        handicapSpin->setObjectName(QString::fromUtf8("handicapSpin"));
        handicapSpin->setMinimumSize(QSize(0, 0));
        handicapSpin->setMaximumSize(QSize(60, 32767));
        handicapSpin->setMaximum(13);

        gridLayout_1->addWidget(handicapSpin, 1, 1, 1, 1);

        TextLabel4 = new QLabel(Frame2);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        TextLabel4->setWordWrap(false);

        gridLayout_1->addWidget(TextLabel4, 0, 0, 1, 1);

        eventEdit = new QLineEdit(Frame2);
        eventEdit->setObjectName(QString::fromUtf8("eventEdit"));

        gridLayout_1->addWidget(eventEdit, 5, 1, 1, 2);

        komiSpin = new KomiSpinBox(Frame2);
        komiSpin->setObjectName(QString::fromUtf8("komiSpin"));
        sizePolicy.setHeightForWidth(komiSpin->sizePolicy().hasHeightForWidth());
        komiSpin->setSizePolicy(sizePolicy);
        komiSpin->setMaximumSize(QSize(60, 32767));
        komiSpin->setFocusPolicy(Qt::StrongFocus);
        komiSpin->setAcceptDrops(true);
        komiSpin->setDecimals(1);

        gridLayout_1->addWidget(komiSpin, 0, 1, 1, 1);

        TextLabel6 = new QLabel(Frame2);
        TextLabel6->setObjectName(QString::fromUtf8("TextLabel6"));
        TextLabel6->setWordWrap(false);

        gridLayout_1->addWidget(TextLabel6, 2, 0, 1, 1);

        resultEdit = new QLineEdit(Frame2);
        resultEdit->setObjectName(QString::fromUtf8("resultEdit"));

        gridLayout_1->addWidget(resultEdit, 2, 1, 1, 2);

        TextLabel7_2 = new QLabel(Frame2);
        TextLabel7_2->setObjectName(QString::fromUtf8("TextLabel7_2"));
        TextLabel7_2->setWordWrap(false);

        gridLayout_1->addWidget(TextLabel7_2, 3, 3, 1, 1);

        rulesEdit = new QLineEdit(Frame2);
        rulesEdit->setObjectName(QString::fromUtf8("rulesEdit"));
        rulesEdit->setMaximumSize(QSize(100, 16777215));

        gridLayout_1->addWidget(rulesEdit, 3, 4, 1, 1);


        gridLayout->addWidget(Frame2, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        line = new QFrame(GameInfoDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        TextLabel10->setBuddy(gameNameEdit);
        TextLabel9->setBuddy(placeEdit);
        TextLabel8->setBuddy(copyrightEdit);
        TextLabel7->setBuddy(dateEdit);
        label->setBuddy(eventEdit);
        label_2->setBuddy(roundEdit);
        TextLabel5->setBuddy(handicapSpin);
        TextLabel4->setBuddy(komiSpin);
        TextLabel6->setBuddy(resultEdit);
        TextLabel7_2->setBuddy(rulesEdit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(gameNameEdit, playerWhiteEdit);
        QWidget::setTabOrder(playerWhiteEdit, whiteRankEdit);
        QWidget::setTabOrder(whiteRankEdit, playerBlackEdit);
        QWidget::setTabOrder(playerBlackEdit, blackRankEdit);
        QWidget::setTabOrder(blackRankEdit, komiSpin);
        QWidget::setTabOrder(komiSpin, handicapSpin);
        QWidget::setTabOrder(handicapSpin, resultEdit);
        QWidget::setTabOrder(resultEdit, copyrightEdit);
        QWidget::setTabOrder(copyrightEdit, rulesEdit);
        QWidget::setTabOrder(rulesEdit, placeEdit);
        QWidget::setTabOrder(placeEdit, dateEdit);
        QWidget::setTabOrder(dateEdit, eventEdit);
        QWidget::setTabOrder(eventEdit, roundEdit);

        retranslateUi(GameInfoDialog);

        QMetaObject::connectSlotsByName(GameInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *GameInfoDialog)
    {
        GameInfoDialog->setWindowTitle(QCoreApplication::translate("GameInfoDialog", "Game Information", nullptr));
        TextLabel10->setText(QCoreApplication::translate("GameInfoDialog", "Game Name:", nullptr));
        TextLabel1->setText(QString());
        TextLabel3->setText(QCoreApplication::translate("GameInfoDialog", "Name", nullptr));
        playerWhiteEdit->setText(QCoreApplication::translate("GameInfoDialog", "White", nullptr));
        TextLabel2->setText(QString());
        playerBlackEdit->setText(QCoreApplication::translate("GameInfoDialog", "Black", nullptr));
        TextLabe4->setText(QCoreApplication::translate("GameInfoDialog", "Rank", nullptr));
        TextLabel9->setText(QCoreApplication::translate("GameInfoDialog", "&Played at:", nullptr));
        TextLabel8->setText(QCoreApplication::translate("GameInfoDialog", "&Copyright:", nullptr));
        TextLabel7->setText(QCoreApplication::translate("GameInfoDialog", "&Date:", nullptr));
        label->setText(QCoreApplication::translate("GameInfoDialog", "&Event:", nullptr));
        label_2->setText(QCoreApplication::translate("GameInfoDialog", "R&ound:", nullptr));
        TextLabel5->setText(QCoreApplication::translate("GameInfoDialog", "&Handicap:", nullptr));
        TextLabel4->setText(QCoreApplication::translate("GameInfoDialog", "Komi:", nullptr));
        TextLabel6->setText(QCoreApplication::translate("GameInfoDialog", "&Result:", nullptr));
        TextLabel7_2->setText(QCoreApplication::translate("GameInfoDialog", "R&uleset:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameInfoDialog: public Ui_GameInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEINFO_GUI_H
