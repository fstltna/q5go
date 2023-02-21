/********************************************************************************
** Form generated from reading UI file 'nthmove_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NTHMOVE_GUI_H
#define UI_NTHMOVE_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_NthMoveDialog
{
public:
    QPushButton *buttonCancel;
    QLabel *TextLabel1;
    QPushButton *buttonOk;
    QSpinBox *moveSpinBox;

    void setupUi(QDialog *NthMoveDialog)
    {
        if (NthMoveDialog->objectName().isEmpty())
            NthMoveDialog->setObjectName(QString::fromUtf8("NthMoveDialog"));
        NthMoveDialog->resize(210, 90);
        NthMoveDialog->setMinimumSize(QSize(210, 90));
        NthMoveDialog->setMaximumSize(QSize(210, 90));
        buttonCancel = new QPushButton(NthMoveDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setGeometry(QRect(110, 50, 80, 32));
        buttonCancel->setAutoDefault(true);
        TextLabel1 = new QLabel(NthMoveDialog);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setGeometry(QRect(10, 10, 120, 20));
        TextLabel1->setWordWrap(false);
        buttonOk = new QPushButton(NthMoveDialog);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setGeometry(QRect(20, 50, 80, 32));
        buttonOk->setAutoDefault(true);
        moveSpinBox = new QSpinBox(NthMoveDialog);
        moveSpinBox->setObjectName(QString::fromUtf8("moveSpinBox"));
        moveSpinBox->setGeometry(QRect(140, 10, 50, 20));
        moveSpinBox->setMaximum(999);
        QWidget::setTabOrder(moveSpinBox, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(NthMoveDialog);
        QObject::connect(buttonOk, SIGNAL(clicked()), NthMoveDialog, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), NthMoveDialog, SLOT(reject()));

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(NthMoveDialog);
    } // setupUi

    void retranslateUi(QDialog *NthMoveDialog)
    {
        NthMoveDialog->setWindowTitle(QCoreApplication::translate("NthMoveDialog", "Move Number", nullptr));
        buttonCancel->setText(QCoreApplication::translate("NthMoveDialog", "&Cancel", nullptr));
        TextLabel1->setText(QCoreApplication::translate("NthMoveDialog", "Enter move number:", nullptr));
        buttonOk->setText(QCoreApplication::translate("NthMoveDialog", "&OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NthMoveDialog: public Ui_NthMoveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NTHMOVE_GUI_H
