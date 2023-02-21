/********************************************************************************
** Form generated from reading UI file 'newaigamedlg_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWAIGAMEDLG_GUI_H
#define UI_NEWAIGAMEDLG_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include "komispinbox.h"

QT_BEGIN_NAMESPACE

class Ui_NewAIGameDlgGui
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *textLabel1_3;
    QLineEdit *humanPlayerLineEdit;
    QLabel *label_2;
    QComboBox *engineComboBox;
    QLabel *label;
    QToolButton *engineColorButton;
    QGroupBox *gameParamsBox;
    QGridLayout *gridLayout_4;
    QComboBox *boardTypeComboBox;
    QLabel *label_6;
    QSpinBox *handicapSpinBox;
    QLabel *TextLabel3;
    QLabel *TextLabel4;
    QSpinBox *boardsizeSpinBox;
    QLabel *TextLabel5;
    KomiSpinBox *komiSpin;
    QSpinBox *boardsizeYSpinBox;
    QGroupBox *timeBox;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLineEdit *mainTimeEdit;
    QGroupBox *overtimeGroupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *overPeriodEdit;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *overStonesSpinBox;
    QGroupBox *loadBox;
    QHBoxLayout *hboxLayout;
    QLineEdit *gameToLoad;
    QToolButton *filePathButton;
    QSpacerItem *spacer3;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *Horizontal_Spacing2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewAIGameDlgGui)
    {
        if (NewAIGameDlgGui->objectName().isEmpty())
            NewAIGameDlgGui->setObjectName(QString::fromUtf8("NewAIGameDlgGui"));
        NewAIGameDlgGui->setEnabled(true);
        NewAIGameDlgGui->resize(517, 503);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewAIGameDlgGui->sizePolicy().hasHeightForWidth());
        NewAIGameDlgGui->setSizePolicy(sizePolicy);
        NewAIGameDlgGui->setSizeGripEnabled(true);
        NewAIGameDlgGui->setModal(false);
        gridLayout = new QGridLayout(NewAIGameDlgGui);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(NewAIGameDlgGui);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        textLabel1_3 = new QLabel(groupBox);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        textLabel1_3->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, textLabel1_3);

        humanPlayerLineEdit = new QLineEdit(groupBox);
        humanPlayerLineEdit->setObjectName(QString::fromUtf8("humanPlayerLineEdit"));
        sizePolicy.setHeightForWidth(humanPlayerLineEdit->sizePolicy().hasHeightForWidth());
        humanPlayerLineEdit->setSizePolicy(sizePolicy);
        humanPlayerLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, humanPlayerLineEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        engineComboBox = new QComboBox(groupBox);
        engineComboBox->setObjectName(QString::fromUtf8("engineComboBox"));
        sizePolicy.setHeightForWidth(engineComboBox->sizePolicy().hasHeightForWidth());
        engineComboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, engineComboBox);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        engineColorButton = new QToolButton(groupBox);
        engineColorButton->setObjectName(QString::fromUtf8("engineColorButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/stone_b16.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/images/stone_w16.png"), QSize(), QIcon::Normal, QIcon::On);
        engineColorButton->setIcon(icon);
        engineColorButton->setCheckable(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, engineColorButton);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        gameParamsBox = new QGroupBox(NewAIGameDlgGui);
        gameParamsBox->setObjectName(QString::fromUtf8("gameParamsBox"));
        sizePolicy.setHeightForWidth(gameParamsBox->sizePolicy().hasHeightForWidth());
        gameParamsBox->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(gameParamsBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        boardTypeComboBox = new QComboBox(gameParamsBox);
        boardTypeComboBox->addItem(QString());
        boardTypeComboBox->addItem(QString());
        boardTypeComboBox->setObjectName(QString::fromUtf8("boardTypeComboBox"));

        gridLayout_4->addWidget(boardTypeComboBox, 0, 0, 1, 4);

        label_6 = new QLabel(gameParamsBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 1, 2, 1, 1);

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


        gridLayout->addWidget(gameParamsBox, 1, 0, 1, 1);

        timeBox = new QGroupBox(NewAIGameDlgGui);
        timeBox->setObjectName(QString::fromUtf8("timeBox"));
        timeBox->setCheckable(true);
        gridLayout_3 = new QGridLayout(timeBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(timeBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

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


        gridLayout->addWidget(timeBox, 1, 1, 1, 1);

        loadBox = new QGroupBox(NewAIGameDlgGui);
        loadBox->setObjectName(QString::fromUtf8("loadBox"));
        sizePolicy.setHeightForWidth(loadBox->sizePolicy().hasHeightForWidth());
        loadBox->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(loadBox);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        gameToLoad = new QLineEdit(loadBox);
        gameToLoad->setObjectName(QString::fromUtf8("gameToLoad"));
        gameToLoad->setEnabled(true);

        hboxLayout->addWidget(gameToLoad);

        filePathButton = new QToolButton(loadBox);
        filePathButton->setObjectName(QString::fromUtf8("filePathButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        filePathButton->setIcon(icon1);

        hboxLayout->addWidget(filePathButton);


        gridLayout->addWidget(loadBox, 2, 0, 1, 2);

        spacer3 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer3, 3, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        Horizontal_Spacing2 = new QSpacerItem(224, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(Horizontal_Spacing2);

        buttonBox = new QDialogButtonBox(NewAIGameDlgGui);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout1->addWidget(buttonBox);


        gridLayout->addLayout(hboxLayout1, 4, 0, 1, 2);

        QWidget::setTabOrder(humanPlayerLineEdit, engineComboBox);
        QWidget::setTabOrder(engineComboBox, engineColorButton);
        QWidget::setTabOrder(engineColorButton, boardTypeComboBox);
        QWidget::setTabOrder(boardTypeComboBox, boardsizeSpinBox);
        QWidget::setTabOrder(boardsizeSpinBox, boardsizeYSpinBox);
        QWidget::setTabOrder(boardsizeYSpinBox, komiSpin);
        QWidget::setTabOrder(komiSpin, handicapSpinBox);
        QWidget::setTabOrder(handicapSpinBox, timeBox);
        QWidget::setTabOrder(timeBox, mainTimeEdit);
        QWidget::setTabOrder(mainTimeEdit, overtimeGroupBox);
        QWidget::setTabOrder(overtimeGroupBox, overPeriodEdit);
        QWidget::setTabOrder(overPeriodEdit, overStonesSpinBox);
        QWidget::setTabOrder(overStonesSpinBox, gameToLoad);
        QWidget::setTabOrder(gameToLoad, filePathButton);

        retranslateUi(NewAIGameDlgGui);
        QObject::connect(filePathButton, SIGNAL(clicked()), NewAIGameDlgGui, SLOT(slotGetFileName()));

        QMetaObject::connectSlotsByName(NewAIGameDlgGui);
    } // setupUi

    void retranslateUi(QDialog *NewAIGameDlgGui)
    {
        NewAIGameDlgGui->setWindowTitle(QCoreApplication::translate("NewAIGameDlgGui", "Computer Game", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NewAIGameDlgGui", "Players", nullptr));
        textLabel1_3->setText(QCoreApplication::translate("NewAIGameDlgGui", "Human:", nullptr));
        label_2->setText(QCoreApplication::translate("NewAIGameDlgGui", "Engine:", nullptr));
        label->setText(QCoreApplication::translate("NewAIGameDlgGui", "Computer plays:", nullptr));
        engineColorButton->setText(QCoreApplication::translate("NewAIGameDlgGui", "...", nullptr));
        gameParamsBox->setTitle(QCoreApplication::translate("NewAIGameDlgGui", "Game parameters", nullptr));
        boardTypeComboBox->setItemText(0, QCoreApplication::translate("NewAIGameDlgGui", "Square board size", nullptr));
        boardTypeComboBox->setItemText(1, QCoreApplication::translate("NewAIGameDlgGui", "Rectangular board", nullptr));

        label_6->setText(QCoreApplication::translate("NewAIGameDlgGui", "x", nullptr));
        TextLabel3->setText(QCoreApplication::translate("NewAIGameDlgGui", "Board size:", nullptr));
        TextLabel4->setText(QCoreApplication::translate("NewAIGameDlgGui", "Komi:", nullptr));
        TextLabel5->setText(QCoreApplication::translate("NewAIGameDlgGui", "Handicap:", nullptr));
        timeBox->setTitle(QCoreApplication::translate("NewAIGameDlgGui", "Time", nullptr));
        label_3->setText(QCoreApplication::translate("NewAIGameDlgGui", "Main time (minutes):", nullptr));
        mainTimeEdit->setText(QCoreApplication::translate("NewAIGameDlgGui", "60", nullptr));
        overtimeGroupBox->setTitle(QCoreApplication::translate("NewAIGameDlgGui", "Overtime", nullptr));
        overPeriodEdit->setText(QCoreApplication::translate("NewAIGameDlgGui", "10", nullptr));
        label_4->setText(QCoreApplication::translate("NewAIGameDlgGui", "Period (minutes):", nullptr));
        label_5->setText(QCoreApplication::translate("NewAIGameDlgGui", "Stones per period:", nullptr));
        loadBox->setTitle(QCoreApplication::translate("NewAIGameDlgGui", "Load game", nullptr));
        filePathButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewAIGameDlgGui: public Ui_NewAIGameDlgGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWAIGAMEDLG_GUI_H
