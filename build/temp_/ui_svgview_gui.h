/********************************************************************************
** Form generated from reading UI file 'svgview_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SVGVIEW_GUI_H
#define UI_SVGVIEW_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "sizegraphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_SvgViewGUI
{
public:
    QVBoxLayout *vboxLayout;
    AspectContainer *aspectWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *exportBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cb_numbering;
    QCheckBox *cb_coords;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *Horizontal_Spacing3;
    QPushButton *buttonToClip;
    QPushButton *buttonRefresh;
    QPushButton *buttonSave;
    QPushButton *buttonClose;

    void setupUi(QDialog *SvgViewGUI)
    {
        if (SvgViewGUI->objectName().isEmpty())
            SvgViewGUI->setObjectName(QString::fromUtf8("SvgViewGUI"));
        SvgViewGUI->resize(565, 721);
        vboxLayout = new QVBoxLayout(SvgViewGUI);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        aspectWidget = new AspectContainer(SvgViewGUI);
        aspectWidget->setObjectName(QString::fromUtf8("aspectWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aspectWidget->sizePolicy().hasHeightForWidth());
        aspectWidget->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(aspectWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        exportBox = new QWidget(SvgViewGUI);
        exportBox->setObjectName(QString::fromUtf8("exportBox"));
        verticalLayout_3 = new QVBoxLayout(exportBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
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


        vboxLayout->addLayout(verticalLayout_2);


        retranslateUi(SvgViewGUI);
        QObject::connect(buttonClose, SIGNAL(clicked()), SvgViewGUI, SLOT(accept()));
        QObject::connect(buttonSave, SIGNAL(clicked()), SvgViewGUI, SLOT(saveMe()));
        QObject::connect(buttonToClip, SIGNAL(clicked()), SvgViewGUI, SLOT(toClipboard()));

        buttonClose->setDefault(true);


        QMetaObject::connectSlotsByName(SvgViewGUI);
    } // setupUi

    void retranslateUi(QDialog *SvgViewGUI)
    {
        SvgViewGUI->setWindowTitle(QCoreApplication::translate("SvgViewGUI", "SVG export", nullptr));
        cb_numbering->setText(QCoreApplication::translate("SvgViewGUI", "Move numbering", nullptr));
        cb_coords->setText(QCoreApplication::translate("SvgViewGUI", "Coordinates", nullptr));
#if QT_CONFIG(tooltip)
        buttonToClip->setToolTip(QCoreApplication::translate("SvgViewGUI", "Copy position to clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonToClip->setText(QCoreApplication::translate("SvgViewGUI", "&To clipboard (as text)", nullptr));
        buttonRefresh->setText(QCoreApplication::translate("SvgViewGUI", "Refresh", nullptr));
#if QT_CONFIG(tooltip)
        buttonSave->setToolTip(QCoreApplication::translate("SvgViewGUI", "Save position to file", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonSave->setText(QCoreApplication::translate("SvgViewGUI", "&Save", nullptr));
#if QT_CONFIG(tooltip)
        buttonClose->setToolTip(QCoreApplication::translate("SvgViewGUI", "Close this window", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonClose->setText(QCoreApplication::translate("SvgViewGUI", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SvgViewGUI: public Ui_SvgViewGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SVGVIEW_GUI_H
