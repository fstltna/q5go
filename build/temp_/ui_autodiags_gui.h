/********************************************************************************
** Form generated from reading UI file 'autodiags_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTODIAGS_GUI_H
#define UI_AUTODIAGS_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AutoDiagsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLineEdit *maxMovesEdit;
    QCheckBox *overlapCheckBox;
    QLabel *label;
    QCheckBox *clearOldCheckBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *varDiagsCheckBox;
    QCheckBox *varOneCheckBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QCheckBox *hoshiCheckBox;
    QCheckBox *remStoneCheckBox;
    QCheckBox *titleCheckBox;
    QCheckBox *coordsCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AutoDiagsDialog)
    {
        if (AutoDiagsDialog->objectName().isEmpty())
            AutoDiagsDialog->setObjectName(QString::fromUtf8("AutoDiagsDialog"));
        AutoDiagsDialog->resize(479, 441);
        verticalLayout = new QVBoxLayout(AutoDiagsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(AutoDiagsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        maxMovesEdit = new QLineEdit(groupBox);
        maxMovesEdit->setObjectName(QString::fromUtf8("maxMovesEdit"));

        gridLayout_3->addWidget(maxMovesEdit, 0, 1, 1, 1);

        overlapCheckBox = new QCheckBox(groupBox);
        overlapCheckBox->setObjectName(QString::fromUtf8("overlapCheckBox"));
        overlapCheckBox->setChecked(true);

        gridLayout_3->addWidget(overlapCheckBox, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        clearOldCheckBox = new QCheckBox(groupBox);
        clearOldCheckBox->setObjectName(QString::fromUtf8("clearOldCheckBox"));

        gridLayout_3->addWidget(clearOldCheckBox, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(AutoDiagsDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        varDiagsCheckBox = new QCheckBox(groupBox_2);
        varDiagsCheckBox->setObjectName(QString::fromUtf8("varDiagsCheckBox"));
        varDiagsCheckBox->setChecked(true);

        gridLayout_2->addWidget(varDiagsCheckBox, 0, 0, 2, 2);

        varOneCheckBox = new QCheckBox(groupBox_2);
        varOneCheckBox->setObjectName(QString::fromUtf8("varOneCheckBox"));
        varOneCheckBox->setChecked(true);

        gridLayout_2->addWidget(varOneCheckBox, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(AutoDiagsDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        hoshiCheckBox = new QCheckBox(groupBox_3);
        hoshiCheckBox->setObjectName(QString::fromUtf8("hoshiCheckBox"));
        hoshiCheckBox->setChecked(true);

        gridLayout_4->addWidget(hoshiCheckBox, 1, 0, 1, 1);

        remStoneCheckBox = new QCheckBox(groupBox_3);
        remStoneCheckBox->setObjectName(QString::fromUtf8("remStoneCheckBox"));
        remStoneCheckBox->setChecked(true);

        gridLayout_4->addWidget(remStoneCheckBox, 0, 0, 1, 1);

        titleCheckBox = new QCheckBox(groupBox_3);
        titleCheckBox->setObjectName(QString::fromUtf8("titleCheckBox"));

        gridLayout_4->addWidget(titleCheckBox, 2, 0, 1, 1);

        coordsCheckBox = new QCheckBox(groupBox_3);
        coordsCheckBox->setObjectName(QString::fromUtf8("coordsCheckBox"));

        gridLayout_4->addWidget(coordsCheckBox, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AutoDiagsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(maxMovesEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AutoDiagsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AutoDiagsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AutoDiagsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AutoDiagsDialog);
    } // setupUi

    void retranslateUi(QDialog *AutoDiagsDialog)
    {
        AutoDiagsDialog->setWindowTitle(QCoreApplication::translate("AutoDiagsDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AutoDiagsDialog", "Main line", nullptr));
        maxMovesEdit->setText(QCoreApplication::translate("AutoDiagsDialog", "30", nullptr));
        overlapCheckBox->setText(QCoreApplication::translate("AutoDiagsDialog", "Break when overlap occurs", nullptr));
        label->setText(QCoreApplication::translate("AutoDiagsDialog", "Maximum number of moves per diagram:", nullptr));
        clearOldCheckBox->setText(QCoreApplication::translate("AutoDiagsDialog", "Remove preexisting diagrams", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AutoDiagsDialog", "Variations", nullptr));
        varDiagsCheckBox->setText(QCoreApplication::translate("AutoDiagsDialog", "Add diagram for each variation start", nullptr));
        varOneCheckBox->setText(QCoreApplication::translate("AutoDiagsDialog", "Set move number for variation start to 1", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AutoDiagsDialog", "Default flags", nullptr));
        hoshiCheckBox->setText(QCoreApplication::translate("AutoDiagsDialog", "Show &hoshi points", nullptr));
        remStoneCheckBox->setText(QCoreApplication::translate("AutoDiagsDialog", "&Remove stones (base display on final position)", nullptr));
        titleCheckBox->setText(QCoreApplication::translate("AutoDiagsDialog", "&Show title in export", nullptr));
        coordsCheckBox->setText(QCoreApplication::translate("AutoDiagsDialog", "Show coor&dinates", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutoDiagsDialog: public Ui_AutoDiagsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTODIAGS_GUI_H
