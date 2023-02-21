/********************************************************************************
** Form generated from reading UI file 'textedit_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDIT_GUI_H
#define UI_TEXTEDIT_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TextEditDialog
{
public:
    QLabel *TextLabel1;
    QLineEdit *textLineEdit;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *TextEditDialog)
    {
        if (TextEditDialog->objectName().isEmpty())
            TextEditDialog->setObjectName(QString::fromUtf8("TextEditDialog"));
        TextEditDialog->resize(190, 100);
        TextEditDialog->setMinimumSize(QSize(190, 100));
        TextEditDialog->setMaximumSize(QSize(190, 100));
        TextLabel1 = new QLabel(TextEditDialog);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setGeometry(QRect(10, 10, 148, 15));
        TextLabel1->setWordWrap(false);
        textLineEdit = new QLineEdit(TextEditDialog);
        textLineEdit->setObjectName(QString::fromUtf8("textLineEdit"));
        textLineEdit->setGeometry(QRect(10, 30, 170, 23));
        textLineEdit->setMaxLength(20);
        buttonOk = new QPushButton(TextEditDialog);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setGeometry(QRect(10, 60, 80, 32));
        buttonOk->setAutoDefault(true);
        buttonCancel = new QPushButton(TextEditDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setGeometry(QRect(100, 60, 80, 32));
        buttonCancel->setAutoDefault(true);
        QWidget::setTabOrder(textLineEdit, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(TextEditDialog);
        QObject::connect(buttonOk, SIGNAL(clicked()), TextEditDialog, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), TextEditDialog, SLOT(reject()));

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(TextEditDialog);
    } // setupUi

    void retranslateUi(QDialog *TextEditDialog)
    {
        TextEditDialog->setWindowTitle(QCoreApplication::translate("TextEditDialog", "Text Label", nullptr));
        TextLabel1->setText(QCoreApplication::translate("TextEditDialog", "Enter the text for this label:", nullptr));
        buttonOk->setText(QCoreApplication::translate("TextEditDialog", "&OK", nullptr));
        buttonCancel->setText(QCoreApplication::translate("TextEditDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextEditDialog: public Ui_TextEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDIT_GUI_H
