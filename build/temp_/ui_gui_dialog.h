/********************************************************************************
** Form generated from reading UI file 'gui_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_DIALOG_H
#define UI_GUI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Debug_Dialog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *TextView1;

    void setupUi(QDialog *Debug_Dialog)
    {
        if (Debug_Dialog->objectName().isEmpty())
            Debug_Dialog->setObjectName(QString::fromUtf8("Debug_Dialog"));
        Debug_Dialog->resize(336, 680);
        gridLayout = new QGridLayout(Debug_Dialog);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TextView1 = new QTextEdit(Debug_Dialog);
        TextView1->setObjectName(QString::fromUtf8("TextView1"));
        TextView1->setReadOnly(true);

        gridLayout->addWidget(TextView1, 0, 0, 1, 1);


        retranslateUi(Debug_Dialog);

        QMetaObject::connectSlotsByName(Debug_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Debug_Dialog)
    {
        Debug_Dialog->setWindowTitle(QCoreApplication::translate("Debug_Dialog", "Debug", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Debug_Dialog: public Ui_Debug_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_DIALOG_H
