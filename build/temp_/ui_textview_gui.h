/********************************************************************************
** Form generated from reading UI file 'textview_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTVIEW_GUI_H
#define UI_TEXTVIEW_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextViewGUI
{
public:
    QVBoxLayout *vboxLayout;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QWidget *exportBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *targetComboBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cb_numbering;
    QCheckBox *cb_coords;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *Horizontal_Spacing3;
    QPushButton *buttonToClip;
    QPushButton *buttonRefresh;
    QPushButton *buttonSave;
    QPushButton *buttonClose;
    QWidget *gtpBox;
    QHBoxLayout *gtpLayout;
    QSpacerItem *Horizontal_Spacing2;
    QPushButton *buttonAbort;

    void setupUi(QDialog *TextViewGUI)
    {
        if (TextViewGUI->objectName().isEmpty())
            TextViewGUI->setObjectName(QString::fromUtf8("TextViewGUI"));
        TextViewGUI->resize(565, 721);
        vboxLayout = new QVBoxLayout(TextViewGUI);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        textEdit = new QTextEdit(TextViewGUI);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(350, 350));

        verticalLayout_2->addWidget(textEdit);

        exportBox = new QWidget(TextViewGUI);
        exportBox->setObjectName(QString::fromUtf8("exportBox"));
        verticalLayout_3 = new QVBoxLayout(exportBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(exportBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        targetComboBox = new QComboBox(exportBox);
        targetComboBox->addItem(QString());
        targetComboBox->addItem(QString());
        targetComboBox->setObjectName(QString::fromUtf8("targetComboBox"));

        horizontalLayout_2->addWidget(targetComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cb_numbering = new QCheckBox(exportBox);
        cb_numbering->setObjectName(QString::fromUtf8("cb_numbering"));

        horizontalLayout_2->addWidget(cb_numbering);

        cb_coords = new QCheckBox(exportBox);
        cb_coords->setObjectName(QString::fromUtf8("cb_coords"));

        horizontalLayout_2->addWidget(cb_coords);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        Horizontal_Spacing3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(Horizontal_Spacing3);

        buttonToClip = new QPushButton(exportBox);
        buttonToClip->setObjectName(QString::fromUtf8("buttonToClip"));

        horizontalLayout->addWidget(buttonToClip);

        buttonRefresh = new QPushButton(exportBox);
        buttonRefresh->setObjectName(QString::fromUtf8("buttonRefresh"));

        horizontalLayout->addWidget(buttonRefresh);

        buttonSave = new QPushButton(exportBox);
        buttonSave->setObjectName(QString::fromUtf8("buttonSave"));

        horizontalLayout->addWidget(buttonSave);

        buttonClose = new QPushButton(exportBox);
        buttonClose->setObjectName(QString::fromUtf8("buttonClose"));
        buttonClose->setAutoDefault(true);

        horizontalLayout->addWidget(buttonClose);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(exportBox);

        gtpBox = new QWidget(TextViewGUI);
        gtpBox->setObjectName(QString::fromUtf8("gtpBox"));
        gtpLayout = new QHBoxLayout(gtpBox);
        gtpLayout->setSpacing(6);
        gtpLayout->setObjectName(QString::fromUtf8("gtpLayout"));
        gtpLayout->setContentsMargins(1, 1, 1, 1);
        Horizontal_Spacing2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gtpLayout->addItem(Horizontal_Spacing2);

        buttonAbort = new QPushButton(gtpBox);
        buttonAbort->setObjectName(QString::fromUtf8("buttonAbort"));

        gtpLayout->addWidget(buttonAbort);


        verticalLayout_2->addWidget(gtpBox);


        vboxLayout->addLayout(verticalLayout_2);


        retranslateUi(TextViewGUI);
        QObject::connect(buttonClose, SIGNAL(clicked()), TextViewGUI, SLOT(accept()));
        QObject::connect(buttonSave, SIGNAL(clicked()), TextViewGUI, SLOT(saveMe()));
        QObject::connect(buttonToClip, SIGNAL(clicked()), TextViewGUI, SLOT(toClipboard()));

        buttonClose->setDefault(true);


        QMetaObject::connectSlotsByName(TextViewGUI);
    } // setupUi

    void retranslateUi(QDialog *TextViewGUI)
    {
        TextViewGUI->setWindowTitle(QCoreApplication::translate("TextViewGUI", "Text View", nullptr));
        label->setText(QCoreApplication::translate("TextViewGUI", "Target:", nullptr));
        targetComboBox->setItemText(0, QCoreApplication::translate("TextViewGUI", "Forum", nullptr));
        targetComboBox->setItemText(1, QCoreApplication::translate("TextViewGUI", "SL", nullptr));

        cb_numbering->setText(QCoreApplication::translate("TextViewGUI", "Move numbering", nullptr));
        cb_coords->setText(QCoreApplication::translate("TextViewGUI", "Coordinates", nullptr));
#if QT_CONFIG(tooltip)
        buttonToClip->setToolTip(QCoreApplication::translate("TextViewGUI", "Copy position to clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonToClip->setText(QCoreApplication::translate("TextViewGUI", "&To clipboard", nullptr));
        buttonRefresh->setText(QCoreApplication::translate("TextViewGUI", "Refresh", nullptr));
#if QT_CONFIG(tooltip)
        buttonSave->setToolTip(QCoreApplication::translate("TextViewGUI", "Save position to file", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonSave->setText(QCoreApplication::translate("TextViewGUI", "&Save", nullptr));
#if QT_CONFIG(tooltip)
        buttonClose->setToolTip(QCoreApplication::translate("TextViewGUI", "Close this window", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonClose->setText(QCoreApplication::translate("TextViewGUI", "&Close", nullptr));
#if QT_CONFIG(tooltip)
        buttonAbort->setToolTip(QCoreApplication::translate("TextViewGUI", "Abort program startup", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonAbort->setText(QCoreApplication::translate("TextViewGUI", "&Abort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextViewGUI: public Ui_TextViewGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTVIEW_GUI_H
