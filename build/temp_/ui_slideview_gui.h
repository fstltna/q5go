/********************************************************************************
** Form generated from reading UI file 'slideview_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDEVIEW_GUI_H
#define UI_SLIDEVIEW_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "sizegraphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_SlideViewDialog
{
public:
    QVBoxLayout *verticalLayout;
    AspectContainer *aspectWidget;
    SizeGraphicsView *slideView;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_14;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_26;
    QLineEdit *slideXEdit;
    QLabel *label_28;
    QLineEdit *slideYEdit;
    QWidget *settingsFormWidget;
    QFormLayout *formLayout;
    QLabel *label_29;
    QSpinBox *slideLinesSpinBox;
    QLabel *label;
    QSpinBox *slideMarginSpinBox;
    QCheckBox *slideBoldCheckBox;
    QCheckBox *slideWBCheckBox;
    QCheckBox *slideCoordsCheckBox;
    QCheckBox *slideItalicCheckBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *fileNrSpinBox;
    QCheckBox *overwriteCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *fileTemplateEdit;
    QToolButton *fileOpenButton;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *saveAllMainButton;
    QPushButton *saveComButton;
    QPushButton *saveComMainButton;
    QPushButton *saveAllButton;
    QPushButton *saveButton;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *toClipButton;
    QPushButton *saveAsButton;

    void setupUi(QWidget *SlideViewDialog)
    {
        if (SlideViewDialog->objectName().isEmpty())
            SlideViewDialog->setObjectName(QString::fromUtf8("SlideViewDialog"));
        SlideViewDialog->resize(861, 663);
        verticalLayout = new QVBoxLayout(SlideViewDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        aspectWidget = new AspectContainer(SlideViewDialog);
        aspectWidget->setObjectName(QString::fromUtf8("aspectWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aspectWidget->sizePolicy().hasHeightForWidth());
        aspectWidget->setSizePolicy(sizePolicy);
        slideView = new SizeGraphicsView(aspectWidget);
        slideView->setObjectName(QString::fromUtf8("slideView"));
        slideView->setGeometry(QRect(9, 9, 256, 192));
        slideView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        slideView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        slideView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        slideView->setResizeAnchor(QGraphicsView::AnchorViewCenter);

        verticalLayout->addWidget(aspectWidget);

        groupBox_9 = new QGroupBox(SlideViewDialog);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_14 = new QGridLayout(groupBox_9);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(6, 6, 6, 6);
        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        widget = new QWidget(groupBox_9);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_19 = new QHBoxLayout(widget);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(widget);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_19->addWidget(label_26);

        slideXEdit = new QLineEdit(widget);
        slideXEdit->setObjectName(QString::fromUtf8("slideXEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(slideXEdit->sizePolicy().hasHeightForWidth());
        slideXEdit->setSizePolicy(sizePolicy1);
        slideXEdit->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_19->addWidget(slideXEdit);

        label_28 = new QLabel(widget);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_19->addWidget(label_28);

        slideYEdit = new QLineEdit(widget);
        slideYEdit->setObjectName(QString::fromUtf8("slideYEdit"));
        sizePolicy1.setHeightForWidth(slideYEdit->sizePolicy().hasHeightForWidth());
        slideYEdit->setSizePolicy(sizePolicy1);
        slideYEdit->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_19->addWidget(slideYEdit);


        gridLayout_14->addWidget(widget, 0, 0, 1, 1);

        settingsFormWidget = new QWidget(groupBox_9);
        settingsFormWidget->setObjectName(QString::fromUtf8("settingsFormWidget"));
        formLayout = new QFormLayout(settingsFormWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(settingsFormWidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_29);

        slideLinesSpinBox = new QSpinBox(settingsFormWidget);
        slideLinesSpinBox->setObjectName(QString::fromUtf8("slideLinesSpinBox"));
        slideLinesSpinBox->setMinimum(2);

        formLayout->setWidget(0, QFormLayout::FieldRole, slideLinesSpinBox);

        label = new QLabel(settingsFormWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        slideMarginSpinBox = new QSpinBox(settingsFormWidget);
        slideMarginSpinBox->setObjectName(QString::fromUtf8("slideMarginSpinBox"));
        slideMarginSpinBox->setMaximum(5);

        formLayout->setWidget(1, QFormLayout::FieldRole, slideMarginSpinBox);


        gridLayout_14->addWidget(settingsFormWidget, 1, 0, 2, 1);

        slideBoldCheckBox = new QCheckBox(groupBox_9);
        slideBoldCheckBox->setObjectName(QString::fromUtf8("slideBoldCheckBox"));

        gridLayout_14->addWidget(slideBoldCheckBox, 1, 2, 1, 1);

        slideWBCheckBox = new QCheckBox(groupBox_9);
        slideWBCheckBox->setObjectName(QString::fromUtf8("slideWBCheckBox"));

        gridLayout_14->addWidget(slideWBCheckBox, 1, 1, 1, 1);

        slideCoordsCheckBox = new QCheckBox(groupBox_9);
        slideCoordsCheckBox->setObjectName(QString::fromUtf8("slideCoordsCheckBox"));

        gridLayout_14->addWidget(slideCoordsCheckBox, 0, 1, 1, 1);

        slideItalicCheckBox = new QCheckBox(groupBox_9);
        slideItalicCheckBox->setObjectName(QString::fromUtf8("slideItalicCheckBox"));

        gridLayout_14->addWidget(slideItalicCheckBox, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox_9);

        groupBox = new QGroupBox(SlideViewDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        fileNrSpinBox = new QSpinBox(groupBox);
        fileNrSpinBox->setObjectName(QString::fromUtf8("fileNrSpinBox"));
        fileNrSpinBox->setMinimum(1);
        fileNrSpinBox->setMaximum(9999);

        horizontalLayout_5->addWidget(fileNrSpinBox);

        overwriteCheckBox = new QCheckBox(groupBox);
        overwriteCheckBox->setObjectName(QString::fromUtf8("overwriteCheckBox"));

        horizontalLayout_5->addWidget(overwriteCheckBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        fileTemplateEdit = new QLineEdit(groupBox);
        fileTemplateEdit->setObjectName(QString::fromUtf8("fileTemplateEdit"));

        gridLayout->addWidget(fileTemplateEdit, 0, 1, 1, 1);

        fileOpenButton = new QToolButton(groupBox);
        fileOpenButton->setObjectName(QString::fromUtf8("fileOpenButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileOpenButton->setIcon(icon);

        gridLayout->addWidget(fileOpenButton, 0, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        saveAllMainButton = new QPushButton(groupBox_2);
        saveAllMainButton->setObjectName(QString::fromUtf8("saveAllMainButton"));
        saveAllMainButton->setFocusPolicy(Qt::TabFocus);

        gridLayout_2->addWidget(saveAllMainButton, 1, 2, 1, 1);

        saveComButton = new QPushButton(groupBox_2);
        saveComButton->setObjectName(QString::fromUtf8("saveComButton"));
        saveComButton->setFocusPolicy(Qt::TabFocus);

        gridLayout_2->addWidget(saveComButton, 0, 3, 1, 1);

        saveComMainButton = new QPushButton(groupBox_2);
        saveComMainButton->setObjectName(QString::fromUtf8("saveComMainButton"));
        saveComMainButton->setFocusPolicy(Qt::TabFocus);

        gridLayout_2->addWidget(saveComMainButton, 1, 3, 1, 1);

        saveAllButton = new QPushButton(groupBox_2);
        saveAllButton->setObjectName(QString::fromUtf8("saveAllButton"));
        saveAllButton->setFocusPolicy(Qt::TabFocus);

        gridLayout_2->addWidget(saveAllButton, 0, 2, 1, 1);

        saveButton = new QPushButton(groupBox_2);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setFocusPolicy(Qt::TabFocus);

        gridLayout_2->addWidget(saveButton, 0, 4, 1, 1);


        gridLayout->addWidget(groupBox_2, 2, 0, 1, 3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toClipButton = new QPushButton(SlideViewDialog);
        toClipButton->setObjectName(QString::fromUtf8("toClipButton"));

        horizontalLayout->addWidget(toClipButton);

        saveAsButton = new QPushButton(SlideViewDialog);
        saveAsButton->setObjectName(QString::fromUtf8("saveAsButton"));

        horizontalLayout->addWidget(saveAsButton);


        verticalLayout->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label_29->setBuddy(slideLinesSpinBox);
        label->setBuddy(slideMarginSpinBox);
        label_2->setBuddy(fileTemplateEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SlideViewDialog);

        QMetaObject::connectSlotsByName(SlideViewDialog);
    } // setupUi

    void retranslateUi(QWidget *SlideViewDialog)
    {
        SlideViewDialog->setWindowTitle(QCoreApplication::translate("SlideViewDialog", "Form", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("SlideViewDialog", "View settings", nullptr));
        label_26->setText(QCoreApplication::translate("SlideViewDialog", "Exported size:", nullptr));
#if QT_CONFIG(tooltip)
        slideXEdit->setToolTip(QCoreApplication::translate("SlideViewDialog", "The dimensions used when saving.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_28->setText(QCoreApplication::translate("SlideViewDialog", "x", nullptr));
#if QT_CONFIG(tooltip)
        slideYEdit->setToolTip(QCoreApplication::translate("SlideViewDialog", "The dimensions used when saving.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_29->setText(QCoreApplication::translate("SlideViewDialog", "Lines of comment text:", nullptr));
#if QT_CONFIG(tooltip)
        slideLinesSpinBox->setToolTip(QCoreApplication::translate("SlideViewDialog", "This controls the font size for the comments display", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("SlideViewDialog", "Comment margin:", nullptr));
#if QT_CONFIG(tooltip)
        slideBoldCheckBox->setToolTip(QCoreApplication::translate("SlideViewDialog", "<p>Determines how the first paragraph of the comments should be displayed.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        slideBoldCheckBox->setText(QCoreApplication::translate("SlideViewDialog", "Bold header", nullptr));
#if QT_CONFIG(tooltip)
        slideWBCheckBox->setToolTip(QCoreApplication::translate("SlideViewDialog", "Choose the color scheme for the comments", nullptr));
#endif // QT_CONFIG(tooltip)
        slideWBCheckBox->setText(QCoreApplication::translate("SlideViewDialog", "White on black text", nullptr));
#if QT_CONFIG(tooltip)
        slideCoordsCheckBox->setToolTip(QCoreApplication::translate("SlideViewDialog", "Show board coordinates", nullptr));
#endif // QT_CONFIG(tooltip)
        slideCoordsCheckBox->setText(QCoreApplication::translate("SlideViewDialog", "Coordinates", nullptr));
#if QT_CONFIG(tooltip)
        slideItalicCheckBox->setToolTip(QCoreApplication::translate("SlideViewDialog", "<p>Determines how the first paragraph of the comments should be displayed.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        slideItalicCheckBox->setText(QCoreApplication::translate("SlideViewDialog", "Italic header", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SlideViewDialog", "Automatic file naming (numbered sequence)", nullptr));
#if QT_CONFIG(tooltip)
        fileNrSpinBox->setToolTip(QCoreApplication::translate("SlideViewDialog", "<p>Counts the number of the slide, incremented on every save.\n"
"This is substituted into the filename template when choosing the Save button.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        overwriteCheckBox->setToolTip(QCoreApplication::translate("SlideViewDialog", "<p>If checked, the Save button overwrites files without asking.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        overwriteCheckBox->setText(QCoreApplication::translate("SlideViewDialog", "&Force overwrite", nullptr));
#if QT_CONFIG(tooltip)
        fileTemplateEdit->setToolTip(QCoreApplication::translate("SlideViewDialog", "<p>File name template</p><p>This should be a filename, with \"%n\" somewhere to indicate where the current number should be substituted.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        fileOpenButton->setToolTip(QCoreApplication::translate("SlideViewDialog", "<p>Choose a file name template</p><p>You will need to add '%n\" somewhere in the template to indicate the position where the current number should be substituted.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        fileOpenButton->setText(QCoreApplication::translate("SlideViewDialog", "...", nullptr));
        label_3->setText(QCoreApplication::translate("SlideViewDialog", "Current number:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SlideViewDialog", "Save and increment", nullptr));
        saveAllMainButton->setText(QCoreApplication::translate("SlideViewDialog", "All positions on main branch", nullptr));
        saveComButton->setText(QCoreApplication::translate("SlideViewDialog", "All commented positions", nullptr));
        saveComMainButton->setText(QCoreApplication::translate("SlideViewDialog", "Commented positions on main branch", nullptr));
        saveAllButton->setText(QCoreApplication::translate("SlideViewDialog", "All positions", nullptr));
        saveButton->setText(QCoreApplication::translate("SlideViewDialog", "Current position", nullptr));
        label_2->setText(QCoreApplication::translate("SlideViewDialog", "Filename pattern (%n for number):", nullptr));
#if QT_CONFIG(tooltip)
        toClipButton->setToolTip(QCoreApplication::translate("SlideViewDialog", "Export the current slide to the clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        toClipButton->setText(QCoreApplication::translate("SlideViewDialog", "To &clipboard", nullptr));
#if QT_CONFIG(tooltip)
        saveAsButton->setToolTip(QCoreApplication::translate("SlideViewDialog", "Choose a file name and save the current slide, without using the template.", nullptr));
#endif // QT_CONFIG(tooltip)
        saveAsButton->setText(QCoreApplication::translate("SlideViewDialog", "Save &as...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SlideViewDialog: public Ui_SlideViewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDEVIEW_GUI_H
