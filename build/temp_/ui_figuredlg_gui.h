/********************************************************************************
** Form generated from reading UI file 'figuredlg_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIGUREDLG_GUI_H
#define UI_FIGUREDLG_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FigureDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *titleEdit;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QComboBox *movenumComboBox;
    QLineEdit *movenumEdit;
    QCheckBox *moveOverrideCheckBox;
    QGridLayout *gridLayout;
    QCheckBox *coordsCheckBox;
    QCheckBox *titleCheckBox;
    QCheckBox *hoshiCheckBox;
    QCheckBox *remStoneCheckBox;
    QCheckBox *koCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FigureDialog)
    {
        if (FigureDialog->objectName().isEmpty())
            FigureDialog->setObjectName(QString::fromUtf8("FigureDialog"));
        FigureDialog->resize(479, 302);
        verticalLayout = new QVBoxLayout(FigureDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(FigureDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        titleEdit = new QLineEdit(FigureDialog);
        titleEdit->setObjectName(QString::fromUtf8("titleEdit"));

        horizontalLayout->addWidget(titleEdit);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(FigureDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        movenumComboBox = new QComboBox(FigureDialog);
        movenumComboBox->addItem(QString());
        movenumComboBox->addItem(QString());
        movenumComboBox->addItem(QString());
        movenumComboBox->addItem(QString());
        movenumComboBox->setObjectName(QString::fromUtf8("movenumComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(movenumComboBox->sizePolicy().hasHeightForWidth());
        movenumComboBox->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(movenumComboBox, 0, 1, 1, 1);

        movenumEdit = new QLineEdit(FigureDialog);
        movenumEdit->setObjectName(QString::fromUtf8("movenumEdit"));

        gridLayout_3->addWidget(movenumEdit, 1, 1, 1, 1);

        moveOverrideCheckBox = new QCheckBox(FigureDialog);
        moveOverrideCheckBox->setObjectName(QString::fromUtf8("moveOverrideCheckBox"));

        gridLayout_3->addWidget(moveOverrideCheckBox, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        coordsCheckBox = new QCheckBox(FigureDialog);
        coordsCheckBox->setObjectName(QString::fromUtf8("coordsCheckBox"));

        gridLayout->addWidget(coordsCheckBox, 1, 0, 1, 1);

        titleCheckBox = new QCheckBox(FigureDialog);
        titleCheckBox->setObjectName(QString::fromUtf8("titleCheckBox"));

        gridLayout->addWidget(titleCheckBox, 0, 0, 1, 1);

        hoshiCheckBox = new QCheckBox(FigureDialog);
        hoshiCheckBox->setObjectName(QString::fromUtf8("hoshiCheckBox"));

        gridLayout->addWidget(hoshiCheckBox, 2, 0, 1, 1);

        remStoneCheckBox = new QCheckBox(FigureDialog);
        remStoneCheckBox->setObjectName(QString::fromUtf8("remStoneCheckBox"));

        gridLayout->addWidget(remStoneCheckBox, 4, 0, 1, 1);

        koCheckBox = new QCheckBox(FigureDialog);
        koCheckBox->setObjectName(QString::fromUtf8("koCheckBox"));

        gridLayout->addWidget(koCheckBox, 3, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(FigureDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(titleEdit);
        label_2->setBuddy(movenumComboBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(FigureDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FigureDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FigureDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FigureDialog);
    } // setupUi

    void retranslateUi(QDialog *FigureDialog)
    {
        FigureDialog->setWindowTitle(QCoreApplication::translate("FigureDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FigureDialog", "&Title:", nullptr));
        label_2->setText(QCoreApplication::translate("FigureDialog", "Move &numbering:", nullptr));
        movenumComboBox->setItemText(0, QCoreApplication::translate("FigureDialog", "Unchanged from previous node", nullptr));
        movenumComboBox->setItemText(1, QCoreApplication::translate("FigureDialog", "None", nullptr));
        movenumComboBox->setItemText(2, QCoreApplication::translate("FigureDialog", "Shown", nullptr));
        movenumComboBox->setItemText(3, QCoreApplication::translate("FigureDialog", "Shown modulo 100", nullptr));

        moveOverrideCheckBox->setText(QCoreApplication::translate("FigureDialog", "Override move number:", nullptr));
        coordsCheckBox->setText(QCoreApplication::translate("FigureDialog", "Show coor&dinates", nullptr));
        titleCheckBox->setText(QCoreApplication::translate("FigureDialog", "&Show title in export", nullptr));
        hoshiCheckBox->setText(QCoreApplication::translate("FigureDialog", "Show &hoshi points", nullptr));
        remStoneCheckBox->setText(QCoreApplication::translate("FigureDialog", "&Remove stones (base display on final position)", nullptr));
        koCheckBox->setText(QCoreApplication::translate("FigureDialog", "Display invisible moves as text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FigureDialog: public Ui_FigureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIGUREDLG_GUI_H
