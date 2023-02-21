/********************************************************************************
** Form generated from reading UI file 'newlocalgame_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWLOCALGAME_GUI_H
#define UI_NEWLOCALGAME_GUI_H

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

class Ui_NewLocalGameDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *Frame13;
    QGridLayout *gridLayout1;
    QLabel *TextLabel2;
    QLabel *TextLabel1;
    QLineEdit *playerBlackEdit;
    QLabel *TextLabel2_2;
    QLineEdit *playerWhiteEdit;
    QLineEdit *playerWhiteRkEdit;
    QLineEdit *playerBlackRkEdit;
    QLabel *TextLabel2_3;
    QFrame *Frame14;
    QGridLayout *gridLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel3;
    QSpinBox *boardSizeSpin;
    QHBoxLayout *hboxLayout1;
    QLabel *TextLabel5;
    QSpinBox *handicapSpin;
    QHBoxLayout *hboxLayout2;
    QLabel *TextLabel4;
    KomiSpinBox *komiSpin;
    QFrame *frame;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *Horizontal_Spacing2;
    QDialogButtonBox *buttonBox;
    QFrame *line;
    QFrame *Frame14_2;
    QGridLayout *gridLayout3;
    QHBoxLayout *hboxLayout4;
    QLabel *TextLabel7;
    QSpinBox *byoTimeSpin;
    QHBoxLayout *hboxLayout5;
    QLabel *TextLabel6;
    QSpinBox *timeSpin;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QFrame *line_3;

    void setupUi(QDialog *NewLocalGameDialog)
    {
        if (NewLocalGameDialog->objectName().isEmpty())
            NewLocalGameDialog->setObjectName(QString::fromUtf8("NewLocalGameDialog"));
        NewLocalGameDialog->resize(298, 345);
        NewLocalGameDialog->setMaximumSize(QSize(300, 380));
        gridLayout = new QGridLayout(NewLocalGameDialog);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Frame13 = new QFrame(NewLocalGameDialog);
        Frame13->setObjectName(QString::fromUtf8("Frame13"));
        Frame13->setFrameShape(QFrame::NoFrame);
        gridLayout1 = new QGridLayout(Frame13);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        TextLabel2 = new QLabel(Frame13);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        TextLabel2->setWordWrap(false);

        gridLayout1->addWidget(TextLabel2, 1, 0, 1, 1);

        TextLabel1 = new QLabel(Frame13);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setWordWrap(false);

        gridLayout1->addWidget(TextLabel1, 2, 0, 1, 1);

        playerBlackEdit = new QLineEdit(Frame13);
        playerBlackEdit->setObjectName(QString::fromUtf8("playerBlackEdit"));

        gridLayout1->addWidget(playerBlackEdit, 2, 1, 1, 1);

        TextLabel2_2 = new QLabel(Frame13);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));
        TextLabel2_2->setWordWrap(false);

        gridLayout1->addWidget(TextLabel2_2, 0, 1, 1, 1);

        playerWhiteEdit = new QLineEdit(Frame13);
        playerWhiteEdit->setObjectName(QString::fromUtf8("playerWhiteEdit"));

        gridLayout1->addWidget(playerWhiteEdit, 1, 1, 1, 1);

        playerWhiteRkEdit = new QLineEdit(Frame13);
        playerWhiteRkEdit->setObjectName(QString::fromUtf8("playerWhiteRkEdit"));
        playerWhiteRkEdit->setMaximumSize(QSize(60, 16777215));

        gridLayout1->addWidget(playerWhiteRkEdit, 1, 2, 1, 1);

        playerBlackRkEdit = new QLineEdit(Frame13);
        playerBlackRkEdit->setObjectName(QString::fromUtf8("playerBlackRkEdit"));
        playerBlackRkEdit->setMaximumSize(QSize(60, 16777215));

        gridLayout1->addWidget(playerBlackRkEdit, 2, 2, 1, 1);

        TextLabel2_3 = new QLabel(Frame13);
        TextLabel2_3->setObjectName(QString::fromUtf8("TextLabel2_3"));
        TextLabel2_3->setWordWrap(false);

        gridLayout1->addWidget(TextLabel2_3, 0, 2, 1, 1);


        gridLayout->addWidget(Frame13, 0, 0, 1, 1);

        Frame14 = new QFrame(NewLocalGameDialog);
        Frame14->setObjectName(QString::fromUtf8("Frame14"));
        Frame14->setFrameShape(QFrame::NoFrame);
        gridLayout2 = new QGridLayout(Frame14);
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        TextLabel3 = new QLabel(Frame14);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
        TextLabel3->setWordWrap(false);

        hboxLayout->addWidget(TextLabel3);

        boardSizeSpin = new QSpinBox(Frame14);
        boardSizeSpin->setObjectName(QString::fromUtf8("boardSizeSpin"));
        boardSizeSpin->setMaximumSize(QSize(60, 32767));
        boardSizeSpin->setMinimum(4);
        boardSizeSpin->setMaximum(52);
        boardSizeSpin->setValue(19);

        hboxLayout->addWidget(boardSizeSpin);


        gridLayout2->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        TextLabel5 = new QLabel(Frame14);
        TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
        TextLabel5->setWordWrap(false);

        hboxLayout1->addWidget(TextLabel5);

        handicapSpin = new QSpinBox(Frame14);
        handicapSpin->setObjectName(QString::fromUtf8("handicapSpin"));
        handicapSpin->setMaximumSize(QSize(60, 32767));
        handicapSpin->setMaximum(13);

        hboxLayout1->addWidget(handicapSpin);


        gridLayout2->addLayout(hboxLayout1, 2, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        TextLabel4 = new QLabel(Frame14);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        TextLabel4->setWordWrap(false);

        hboxLayout2->addWidget(TextLabel4);

        komiSpin = new KomiSpinBox(Frame14);
        komiSpin->setObjectName(QString::fromUtf8("komiSpin"));
        komiSpin->setMaximumSize(QSize(60, 32767));
        komiSpin->setFocusPolicy(Qt::StrongFocus);
        komiSpin->setAcceptDrops(true);
        komiSpin->setDecimals(1);

        hboxLayout2->addWidget(komiSpin);


        gridLayout2->addLayout(hboxLayout2, 1, 0, 1, 1);


        gridLayout->addWidget(Frame14, 2, 0, 1, 1);

        frame = new QFrame(NewLocalGameDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        hboxLayout3 = new QHBoxLayout(frame);
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        Horizontal_Spacing2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(Horizontal_Spacing2);

        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout3->addWidget(buttonBox);


        gridLayout->addWidget(frame, 7, 0, 1, 1);

        line = new QFrame(NewLocalGameDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);

        Frame14_2 = new QFrame(NewLocalGameDialog);
        Frame14_2->setObjectName(QString::fromUtf8("Frame14_2"));
        Frame14_2->setFrameShape(QFrame::NoFrame);
        gridLayout3 = new QGridLayout(Frame14_2);
        gridLayout3->setSpacing(6);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        TextLabel7 = new QLabel(Frame14_2);
        TextLabel7->setObjectName(QString::fromUtf8("TextLabel7"));
        TextLabel7->setWordWrap(false);

        hboxLayout4->addWidget(TextLabel7);

        byoTimeSpin = new QSpinBox(Frame14_2);
        byoTimeSpin->setObjectName(QString::fromUtf8("byoTimeSpin"));
        byoTimeSpin->setMaximumSize(QSize(60, 32767));
        byoTimeSpin->setValue(10);

        hboxLayout4->addWidget(byoTimeSpin);


        gridLayout3->addLayout(hboxLayout4, 1, 0, 1, 1);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        TextLabel6 = new QLabel(Frame14_2);
        TextLabel6->setObjectName(QString::fromUtf8("TextLabel6"));
        TextLabel6->setWordWrap(false);

        hboxLayout5->addWidget(TextLabel6);

        timeSpin = new QSpinBox(Frame14_2);
        timeSpin->setObjectName(QString::fromUtf8("timeSpin"));
        timeSpin->setMaximumSize(QSize(60, 32767));
        timeSpin->setValue(10);

        hboxLayout5->addWidget(timeSpin);


        gridLayout3->addLayout(hboxLayout5, 0, 0, 1, 1);


        gridLayout->addWidget(Frame14_2, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        line_2 = new QFrame(NewLocalGameDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 0, 1, 1);

        line_3 = new QFrame(NewLocalGameDialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 6, 0, 1, 1);

        QWidget::setTabOrder(playerWhiteEdit, playerWhiteRkEdit);
        QWidget::setTabOrder(playerWhiteRkEdit, playerBlackEdit);
        QWidget::setTabOrder(playerBlackEdit, playerBlackRkEdit);
        QWidget::setTabOrder(playerBlackRkEdit, boardSizeSpin);
        QWidget::setTabOrder(boardSizeSpin, komiSpin);
        QWidget::setTabOrder(komiSpin, handicapSpin);
        QWidget::setTabOrder(handicapSpin, timeSpin);
        QWidget::setTabOrder(timeSpin, byoTimeSpin);

        retranslateUi(NewLocalGameDialog);

        QMetaObject::connectSlotsByName(NewLocalGameDialog);
    } // setupUi

    void retranslateUi(QDialog *NewLocalGameDialog)
    {
        NewLocalGameDialog->setWindowTitle(QCoreApplication::translate("NewLocalGameDialog", "New Game", nullptr));
        TextLabel2->setText(QCoreApplication::translate("NewLocalGameDialog", "White:", nullptr));
        TextLabel1->setText(QCoreApplication::translate("NewLocalGameDialog", "Black:", nullptr));
        playerBlackEdit->setText(QCoreApplication::translate("NewLocalGameDialog", "Black", nullptr));
        TextLabel2_2->setText(QCoreApplication::translate("NewLocalGameDialog", "Player Name:", nullptr));
        playerWhiteEdit->setText(QCoreApplication::translate("NewLocalGameDialog", "White", nullptr));
        TextLabel2_3->setText(QCoreApplication::translate("NewLocalGameDialog", "Rank:", nullptr));
        TextLabel3->setText(QCoreApplication::translate("NewLocalGameDialog", "Board size:", nullptr));
        TextLabel5->setText(QCoreApplication::translate("NewLocalGameDialog", "Handicap:", nullptr));
        TextLabel4->setText(QCoreApplication::translate("NewLocalGameDialog", "Komi:", nullptr));
        TextLabel7->setText(QCoreApplication::translate("NewLocalGameDialog", "Byoyomi Time:", nullptr));
#if QT_CONFIG(tooltip)
        byoTimeSpin->setToolTip(QCoreApplication::translate("NewLocalGameDialog", "Additional time for 25 moves; after 25 moves the byoyomi time starts again and again", nullptr));
#endif // QT_CONFIG(tooltip)
        TextLabel6->setText(QCoreApplication::translate("NewLocalGameDialog", "Time:", nullptr));
#if QT_CONFIG(tooltip)
        timeSpin->setToolTip(QCoreApplication::translate("NewLocalGameDialog", "Playing time", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class NewLocalGameDialog: public Ui_NewLocalGameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWLOCALGAME_GUI_H
