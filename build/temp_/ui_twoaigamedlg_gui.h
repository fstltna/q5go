/********************************************************************************
** Form generated from reading UI file 'twoaigamedlg_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWOAIGAMEDLG_GUI_H
#define UI_TWOAIGAMEDLG_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "komispinbox.h"

QT_BEGIN_NAMESPACE

class Ui_TwoAIGameDlgGui
{
public:
    QGridLayout *gridLayout_7;
    QHBoxLayout *hboxLayout;
    QSpacerItem *Horizontal_Spacing2;
    QDialogButtonBox *buttonBox;
    QGroupBox *loadBox;
    QGridLayout *gridLayout_6;
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QLineEdit *gameToLoad;
    QToolButton *filePathButton;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *numGamesEdit;
    QSpacerItem *horizontalSpacer;
    QCheckBox *playOpeningsCheckBox;
    QGroupBox *gameParamsBox;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QSpinBox *handicapSpinBox;
    QLabel *TextLabel3;
    QLabel *TextLabel4;
    QSpinBox *boardsizeSpinBox;
    QLabel *TextLabel5;
    KomiSpinBox *komiSpin;
    QSpinBox *boardsizeYSpinBox;
    QComboBox *boardTypeComboBox;
    QGroupBox *timeBox;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *mainTimeEdit;
    QGroupBox *overtimeGroupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *overPeriodEdit;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *overStonesSpinBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *engineWComboBox;
    QLabel *label_3;
    QComboBox *engineBComboBox;
    QLabel *TextLabel2;
    QLabel *TextLabel1;
    QSpacerItem *spacer3;

    void setupUi(QDialog *TwoAIGameDlgGui)
    {
        if (TwoAIGameDlgGui->objectName().isEmpty())
            TwoAIGameDlgGui->setObjectName(QString::fromUtf8("TwoAIGameDlgGui"));
        TwoAIGameDlgGui->setEnabled(true);
        TwoAIGameDlgGui->resize(480, 508);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TwoAIGameDlgGui->sizePolicy().hasHeightForWidth());
        TwoAIGameDlgGui->setSizePolicy(sizePolicy);
        TwoAIGameDlgGui->setSizeGripEnabled(true);
        TwoAIGameDlgGui->setModal(false);
        gridLayout_7 = new QGridLayout(TwoAIGameDlgGui);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        Horizontal_Spacing2 = new QSpacerItem(224, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(Horizontal_Spacing2);

        buttonBox = new QDialogButtonBox(TwoAIGameDlgGui);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        gridLayout_7->addLayout(hboxLayout, 4, 0, 1, 3);

        loadBox = new QGroupBox(TwoAIGameDlgGui);
        loadBox->setObjectName(QString::fromUtf8("loadBox"));
        sizePolicy.setHeightForWidth(loadBox->sizePolicy().hasHeightForWidth());
        loadBox->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(loadBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        widget = new QWidget(loadBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_5 = new QGridLayout(widget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

        gameToLoad = new QLineEdit(widget);
        gameToLoad->setObjectName(QString::fromUtf8("gameToLoad"));
        gameToLoad->setEnabled(true);

        gridLayout_5->addWidget(gameToLoad, 0, 1, 1, 1);


        gridLayout_6->addWidget(widget, 1, 0, 1, 2);

        filePathButton = new QToolButton(loadBox);
        filePathButton->setObjectName(QString::fromUtf8("filePathButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        filePathButton->setIcon(icon);

        gridLayout_6->addWidget(filePathButton, 1, 2, 1, 1);

        widget_2 = new QWidget(loadBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        numGamesEdit = new QLineEdit(widget_2);
        numGamesEdit->setObjectName(QString::fromUtf8("numGamesEdit"));
        numGamesEdit->setMaximumSize(QSize(60, 16777215));
        numGamesEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(numGamesEdit);

        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_6->addWidget(widget_2, 0, 0, 1, 3);

        playOpeningsCheckBox = new QCheckBox(loadBox);
        playOpeningsCheckBox->setObjectName(QString::fromUtf8("playOpeningsCheckBox"));

        gridLayout_6->addWidget(playOpeningsCheckBox, 2, 0, 1, 3);


        gridLayout_7->addWidget(loadBox, 2, 0, 1, 3);

        gameParamsBox = new QGroupBox(TwoAIGameDlgGui);
        gameParamsBox->setObjectName(QString::fromUtf8("gameParamsBox"));
        sizePolicy.setHeightForWidth(gameParamsBox->sizePolicy().hasHeightForWidth());
        gameParamsBox->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(gameParamsBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_7 = new QLabel(gameParamsBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 1, 2, 1, 1);

        handicapSpinBox = new QSpinBox(gameParamsBox);
        handicapSpinBox->setObjectName(QString::fromUtf8("handicapSpinBox"));
        handicapSpinBox->setMaximumSize(QSize(60, 32767));
        handicapSpinBox->setMaximum(13);

        gridLayout_4->addWidget(handicapSpinBox, 3, 1, 1, 1);

        TextLabel3 = new QLabel(gameParamsBox);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
        TextLabel3->setWordWrap(false);

        gridLayout_4->addWidget(TextLabel3, 1, 0, 1, 1);

        TextLabel4 = new QLabel(gameParamsBox);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        TextLabel4->setWordWrap(false);

        gridLayout_4->addWidget(TextLabel4, 2, 0, 1, 1);

        boardsizeSpinBox = new QSpinBox(gameParamsBox);
        boardsizeSpinBox->setObjectName(QString::fromUtf8("boardsizeSpinBox"));
        boardsizeSpinBox->setMaximumSize(QSize(60, 32767));
        boardsizeSpinBox->setMinimum(4);
        boardsizeSpinBox->setMaximum(52);
        boardsizeSpinBox->setValue(19);

        gridLayout_4->addWidget(boardsizeSpinBox, 1, 1, 1, 1);

        TextLabel5 = new QLabel(gameParamsBox);
        TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
        TextLabel5->setWordWrap(false);

        gridLayout_4->addWidget(TextLabel5, 3, 0, 1, 1);

        komiSpin = new KomiSpinBox(gameParamsBox);
        komiSpin->setObjectName(QString::fromUtf8("komiSpin"));
        komiSpin->setMaximumSize(QSize(60, 32767));
        komiSpin->setFocusPolicy(Qt::StrongFocus);
        komiSpin->setAcceptDrops(true);
        komiSpin->setDecimals(1);

        gridLayout_4->addWidget(komiSpin, 2, 1, 1, 1);

        boardsizeYSpinBox = new QSpinBox(gameParamsBox);
        boardsizeYSpinBox->setObjectName(QString::fromUtf8("boardsizeYSpinBox"));
        boardsizeYSpinBox->setMaximumSize(QSize(60, 32767));
        boardsizeYSpinBox->setMinimum(4);
        boardsizeYSpinBox->setMaximum(52);
        boardsizeYSpinBox->setValue(19);

        gridLayout_4->addWidget(boardsizeYSpinBox, 1, 3, 1, 1);

        boardTypeComboBox = new QComboBox(gameParamsBox);
        boardTypeComboBox->addItem(QString());
        boardTypeComboBox->addItem(QString());
        boardTypeComboBox->setObjectName(QString::fromUtf8("boardTypeComboBox"));

        gridLayout_4->addWidget(boardTypeComboBox, 0, 0, 1, 4);


        gridLayout_7->addWidget(gameParamsBox, 1, 0, 1, 1);

        timeBox = new QGroupBox(TwoAIGameDlgGui);
        timeBox->setObjectName(QString::fromUtf8("timeBox"));
        timeBox->setCheckable(true);
        gridLayout_3 = new QGridLayout(timeBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(timeBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        mainTimeEdit = new QLineEdit(timeBox);
        mainTimeEdit->setObjectName(QString::fromUtf8("mainTimeEdit"));
        mainTimeEdit->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(mainTimeEdit, 0, 1, 1, 1);

        overtimeGroupBox = new QGroupBox(timeBox);
        overtimeGroupBox->setObjectName(QString::fromUtf8("overtimeGroupBox"));
        overtimeGroupBox->setCheckable(true);
        overtimeGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(overtimeGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        overPeriodEdit = new QLineEdit(overtimeGroupBox);
        overPeriodEdit->setObjectName(QString::fromUtf8("overPeriodEdit"));
        overPeriodEdit->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(overPeriodEdit, 0, 1, 1, 1);

        label_4 = new QLabel(overtimeGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(overtimeGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        overStonesSpinBox = new QSpinBox(overtimeGroupBox);
        overStonesSpinBox->setObjectName(QString::fromUtf8("overStonesSpinBox"));
        overStonesSpinBox->setValue(5);

        gridLayout_2->addWidget(overStonesSpinBox, 1, 1, 1, 1);


        gridLayout_3->addWidget(overtimeGroupBox, 1, 0, 1, 2);


        gridLayout_7->addWidget(timeBox, 1, 2, 1, 1);

        groupBox = new QGroupBox(TwoAIGameDlgGui);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        engineWComboBox = new QComboBox(groupBox);
        engineWComboBox->setObjectName(QString::fromUtf8("engineWComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(engineWComboBox->sizePolicy().hasHeightForWidth());
        engineWComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(engineWComboBox, 0, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        engineBComboBox = new QComboBox(groupBox);
        engineBComboBox->setObjectName(QString::fromUtf8("engineBComboBox"));
        sizePolicy.setHeightForWidth(engineBComboBox->sizePolicy().hasHeightForWidth());
        engineBComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(engineBComboBox, 1, 2, 1, 1);

        TextLabel2 = new QLabel(groupBox);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        TextLabel2->setPixmap(QPixmap(QString::fromUtf8(":/images/stone_w16.png")));
        TextLabel2->setWordWrap(false);

        gridLayout->addWidget(TextLabel2, 0, 0, 1, 1);

        TextLabel1 = new QLabel(groupBox);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setPixmap(QPixmap(QString::fromUtf8(":/images/stone_b16.png")));
        TextLabel1->setWordWrap(false);

        gridLayout->addWidget(TextLabel1, 1, 0, 1, 1);


        gridLayout_7->addWidget(groupBox, 0, 0, 1, 3);

        spacer3 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(spacer3, 3, 1, 1, 2);

        QWidget::setTabOrder(engineWComboBox, engineBComboBox);
        QWidget::setTabOrder(engineBComboBox, boardTypeComboBox);
        QWidget::setTabOrder(boardTypeComboBox, boardsizeSpinBox);
        QWidget::setTabOrder(boardsizeSpinBox, boardsizeYSpinBox);
        QWidget::setTabOrder(boardsizeYSpinBox, komiSpin);
        QWidget::setTabOrder(komiSpin, handicapSpinBox);
        QWidget::setTabOrder(handicapSpinBox, overPeriodEdit);
        QWidget::setTabOrder(overPeriodEdit, overStonesSpinBox);

        retranslateUi(TwoAIGameDlgGui);
        QObject::connect(filePathButton, SIGNAL(clicked()), TwoAIGameDlgGui, SLOT(slotGetFileName()));

        QMetaObject::connectSlotsByName(TwoAIGameDlgGui);
    } // setupUi

    void retranslateUi(QDialog *TwoAIGameDlgGui)
    {
        TwoAIGameDlgGui->setWindowTitle(QCoreApplication::translate("TwoAIGameDlgGui", "Computer Game", nullptr));
        loadBox->setTitle(QCoreApplication::translate("TwoAIGameDlgGui", "Playing mode", nullptr));
        label_8->setText(QCoreApplication::translate("TwoAIGameDlgGui", "Game file:", nullptr));
        filePathButton->setText(QString());
        label_6->setText(QCoreApplication::translate("TwoAIGameDlgGui", "Number of games:", nullptr));
        numGamesEdit->setText(QCoreApplication::translate("TwoAIGameDlgGui", "1", nullptr));
        playOpeningsCheckBox->setText(QCoreApplication::translate("TwoAIGameDlgGui", "Use game file as opening book\n"
"and play the selected number of games per line", nullptr));
        gameParamsBox->setTitle(QCoreApplication::translate("TwoAIGameDlgGui", "Game parameters", nullptr));
        label_7->setText(QCoreApplication::translate("TwoAIGameDlgGui", "x", nullptr));
        TextLabel3->setText(QCoreApplication::translate("TwoAIGameDlgGui", "Board size:", nullptr));
        TextLabel4->setText(QCoreApplication::translate("TwoAIGameDlgGui", "Komi:", nullptr));
        TextLabel5->setText(QCoreApplication::translate("TwoAIGameDlgGui", "Handicap:", nullptr));
        boardTypeComboBox->setItemText(0, QCoreApplication::translate("TwoAIGameDlgGui", "Square board size", nullptr));
        boardTypeComboBox->setItemText(1, QCoreApplication::translate("TwoAIGameDlgGui", "Rectangular board", nullptr));

        timeBox->setTitle(QCoreApplication::translate("TwoAIGameDlgGui", "Time", nullptr));
        label->setText(QCoreApplication::translate("TwoAIGameDlgGui", "Main time (minutes):", nullptr));
        mainTimeEdit->setText(QCoreApplication::translate("TwoAIGameDlgGui", "60", nullptr));
        overtimeGroupBox->setTitle(QCoreApplication::translate("TwoAIGameDlgGui", "Overtime", nullptr));
        overPeriodEdit->setText(QCoreApplication::translate("TwoAIGameDlgGui", "10", nullptr));
        label_4->setText(QCoreApplication::translate("TwoAIGameDlgGui", "Period (minutes):", nullptr));
        label_5->setText(QCoreApplication::translate("TwoAIGameDlgGui", "Stones per period:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TwoAIGameDlgGui", "Players", nullptr));
        label_2->setText(QCoreApplication::translate("TwoAIGameDlgGui", "Engine (white):", nullptr));
        label_3->setText(QCoreApplication::translate("TwoAIGameDlgGui", "Engine (black):", nullptr));
        TextLabel2->setText(QString());
        TextLabel1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TwoAIGameDlgGui: public Ui_TwoAIGameDlgGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWOAIGAMEDLG_GUI_H
