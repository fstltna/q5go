/********************************************************************************
** Form generated from reading UI file 'slideshow_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDESHOW_GUI_H
#define UI_SLIDESHOW_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "sizegraphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_SlideshowDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTreeWidget *tutorialList;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    AspectContainer *aspectWidget;
    SizeGraphicsView *slideView;
    QHBoxLayout *_7;
    QCheckBox *aidCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *goFirstButton;
    QToolButton *goPrevButton;
    QToolButton *goNextButton;
    QToolButton *goLastButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *editButton;

    void setupUi(QWidget *SlideshowDialog)
    {
        if (SlideshowDialog->objectName().isEmpty())
            SlideshowDialog->setObjectName(QString::fromUtf8("SlideshowDialog"));
        SlideshowDialog->resize(1018, 548);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/qgo.png"), QSize(), QIcon::Normal, QIcon::Off);
        SlideshowDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SlideshowDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tutorialList = new QTreeWidget(SlideshowDialog);
        tutorialList->setObjectName(QString::fromUtf8("tutorialList"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tutorialList->sizePolicy().hasHeightForWidth());
        tutorialList->setSizePolicy(sizePolicy);
        tutorialList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tutorialList->setIndentation(0);
        tutorialList->setUniformRowHeights(true);
        tutorialList->setItemsExpandable(false);
        tutorialList->setExpandsOnDoubleClick(false);
        tutorialList->header()->setDefaultSectionSize(80);
        tutorialList->header()->setStretchLastSection(true);

        horizontalLayout->addWidget(tutorialList);

        widget = new QWidget(SlideshowDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        aspectWidget = new AspectContainer(widget);
        aspectWidget->setObjectName(QString::fromUtf8("aspectWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(aspectWidget->sizePolicy().hasHeightForWidth());
        aspectWidget->setSizePolicy(sizePolicy1);
        slideView = new SizeGraphicsView(aspectWidget);
        slideView->setObjectName(QString::fromUtf8("slideView"));
        slideView->setGeometry(QRect(9, 9, 256, 192));
        slideView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        slideView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        slideView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        slideView->setResizeAnchor(QGraphicsView::AnchorViewCenter);

        verticalLayout_2->addWidget(aspectWidget);

        _7 = new QHBoxLayout();
        _7->setSpacing(6);
        _7->setObjectName(QString::fromUtf8("_7"));
        _7->setContentsMargins(1, 1, 1, 1);
        aidCheckBox = new QCheckBox(widget);
        aidCheckBox->setObjectName(QString::fromUtf8("aidCheckBox"));

        _7->addWidget(aidCheckBox);

        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _7->addItem(horizontalSpacer_3);

        goFirstButton = new QToolButton(widget);
        goFirstButton->setObjectName(QString::fromUtf8("goFirstButton"));
        goFirstButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/2leftarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        goFirstButton->setIcon(icon1);

        _7->addWidget(goFirstButton);

        goPrevButton = new QToolButton(widget);
        goPrevButton->setObjectName(QString::fromUtf8("goPrevButton"));
        goPrevButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/1leftarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        goPrevButton->setIcon(icon2);

        _7->addWidget(goPrevButton);

        goNextButton = new QToolButton(widget);
        goNextButton->setObjectName(QString::fromUtf8("goNextButton"));
        goNextButton->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/1rightarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        goNextButton->setIcon(icon3);

        _7->addWidget(goNextButton);

        goLastButton = new QToolButton(widget);
        goLastButton->setObjectName(QString::fromUtf8("goLastButton"));
        goLastButton->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/2rightarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        goLastButton->setIcon(icon4);

        _7->addWidget(goLastButton);

        horizontalSpacer_4 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _7->addItem(horizontalSpacer_4);

        editButton = new QPushButton(widget);
        editButton->setObjectName(QString::fromUtf8("editButton"));

        _7->addWidget(editButton);


        verticalLayout_2->addLayout(_7);


        horizontalLayout->addWidget(widget);


        retranslateUi(SlideshowDialog);

        QMetaObject::connectSlotsByName(SlideshowDialog);
    } // setupUi

    void retranslateUi(QWidget *SlideshowDialog)
    {
        SlideshowDialog->setWindowTitle(QCoreApplication::translate("SlideshowDialog", "Go tutorials", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = tutorialList->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("SlideshowDialog", "Tutorials", nullptr));
        aidCheckBox->setText(QCoreApplication::translate("SlideshowDialog", "Visualization aid", nullptr));
#if QT_CONFIG(tooltip)
        goFirstButton->setToolTip(QCoreApplication::translate("SlideshowDialog", "Go to first move.", nullptr));
#endif // QT_CONFIG(tooltip)
        goFirstButton->setText(QCoreApplication::translate("SlideshowDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        goPrevButton->setToolTip(QCoreApplication::translate("SlideshowDialog", "Go to previous move.", nullptr));
#endif // QT_CONFIG(tooltip)
        goPrevButton->setText(QCoreApplication::translate("SlideshowDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        goNextButton->setToolTip(QCoreApplication::translate("SlideshowDialog", "Go to next move.", nullptr));
#endif // QT_CONFIG(tooltip)
        goNextButton->setText(QCoreApplication::translate("SlideshowDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        goLastButton->setToolTip(QCoreApplication::translate("SlideshowDialog", "Go to last move.", nullptr));
#endif // QT_CONFIG(tooltip)
        goLastButton->setText(QCoreApplication::translate("SlideshowDialog", "...", nullptr));
        editButton->setText(QCoreApplication::translate("SlideshowDialog", "Open in editor...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SlideshowDialog: public Ui_SlideshowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDESHOW_GUI_H
