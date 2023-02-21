/********************************************************************************
** Form generated from reading UI file 'multisave_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTISAVE_GUI_H
#define UI_MULTISAVE_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiSaveDialog
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QToolButton *fileOpenButton;
    QLabel *label_2;
    QLineEdit *fileTemplateEdit;
    QRadioButton *allRadioButton;
    QRadioButton *someRadioButton;
    QLabel *countLabel;
    QCheckBox *overwriteCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *MultiSaveDialog)
    {
        if (MultiSaveDialog->objectName().isEmpty())
            MultiSaveDialog->setObjectName(QString::fromUtf8("MultiSaveDialog"));
        MultiSaveDialog->resize(545, 148);
        gridLayout_2 = new QGridLayout(MultiSaveDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(MultiSaveDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        fileOpenButton = new QToolButton(widget);
        fileOpenButton->setObjectName(QString::fromUtf8("fileOpenButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileOpenButton->setIcon(icon);

        gridLayout->addWidget(fileOpenButton, 0, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        fileTemplateEdit = new QLineEdit(widget);
        fileTemplateEdit->setObjectName(QString::fromUtf8("fileTemplateEdit"));

        gridLayout->addWidget(fileTemplateEdit, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 2);

        allRadioButton = new QRadioButton(MultiSaveDialog);
        allRadioButton->setObjectName(QString::fromUtf8("allRadioButton"));

        gridLayout_2->addWidget(allRadioButton, 1, 0, 1, 1);

        someRadioButton = new QRadioButton(MultiSaveDialog);
        someRadioButton->setObjectName(QString::fromUtf8("someRadioButton"));

        gridLayout_2->addWidget(someRadioButton, 2, 0, 1, 1);

        countLabel = new QLabel(MultiSaveDialog);
        countLabel->setObjectName(QString::fromUtf8("countLabel"));

        gridLayout_2->addWidget(countLabel, 3, 0, 1, 1);

        overwriteCheckBox = new QCheckBox(MultiSaveDialog);
        overwriteCheckBox->setObjectName(QString::fromUtf8("overwriteCheckBox"));

        gridLayout_2->addWidget(overwriteCheckBox, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(MultiSaveDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        gridLayout_2->addWidget(buttonBox, 3, 1, 1, 1);


        retranslateUi(MultiSaveDialog);

        QMetaObject::connectSlotsByName(MultiSaveDialog);
    } // setupUi

    void retranslateUi(QWidget *MultiSaveDialog)
    {
        MultiSaveDialog->setWindowTitle(QCoreApplication::translate("MultiSaveDialog", "Form", nullptr));
#if QT_CONFIG(tooltip)
        fileOpenButton->setToolTip(QCoreApplication::translate("MultiSaveDialog", "Choose a file name template\n"
"You will need to add '%n\" somewhere in the template to indicate the position where the current number should be substituted.", nullptr));
#endif // QT_CONFIG(tooltip)
        fileOpenButton->setText(QCoreApplication::translate("MultiSaveDialog", "...", nullptr));
        label_2->setText(QCoreApplication::translate("MultiSaveDialog", "Filename pattern (%n for number):", nullptr));
#if QT_CONFIG(tooltip)
        fileTemplateEdit->setToolTip(QCoreApplication::translate("MultiSaveDialog", "File name template\n"
"This should be a filename, with \"%n\" somewhere to indicate where the current number should be substituted.", nullptr));
#endif // QT_CONFIG(tooltip)
        allRadioButton->setText(QCoreApplication::translate("MultiSaveDialog", "All variations", nullptr));
        someRadioButton->setText(QCoreApplication::translate("MultiSaveDialog", "All variations from current position", nullptr));
        countLabel->setText(QCoreApplication::translate("MultiSaveDialog", "%1 files will be saved.", nullptr));
#if QT_CONFIG(tooltip)
        overwriteCheckBox->setToolTip(QCoreApplication::translate("MultiSaveDialog", "If checked, the Save button overwrites files without asking", nullptr));
#endif // QT_CONFIG(tooltip)
        overwriteCheckBox->setText(QCoreApplication::translate("MultiSaveDialog", "&Force overwrite", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MultiSaveDialog: public Ui_MultiSaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTISAVE_GUI_H
