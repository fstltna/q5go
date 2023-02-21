/********************************************************************************
** Form generated from reading UI file 'tips_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIPS_GUI_H
#define UI_TIPS_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_TipsDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *imgLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *startupCheckBox;
    QToolButton *prevButton;
    QToolButton *nextButton;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *textLabel;

    void setupUi(QDialog *TipsDialog)
    {
        if (TipsDialog->objectName().isEmpty())
            TipsDialog->setObjectName(QString::fromUtf8("TipsDialog"));
        TipsDialog->resize(434, 350);
        gridLayout = new QGridLayout(TipsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(TipsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/lightbulb.png")));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        imgLabel = new QLabel(TipsDialog);
        imgLabel->setObjectName(QString::fromUtf8("imgLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imgLabel->sizePolicy().hasHeightForWidth());
        imgLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(imgLabel, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        startupCheckBox = new QCheckBox(TipsDialog);
        startupCheckBox->setObjectName(QString::fromUtf8("startupCheckBox"));

        horizontalLayout->addWidget(startupCheckBox);

        prevButton = new QToolButton(TipsDialog);
        prevButton->setObjectName(QString::fromUtf8("prevButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/1leftarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        prevButton->setIcon(icon);

        horizontalLayout->addWidget(prevButton);

        nextButton = new QToolButton(TipsDialog);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/1rightarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextButton->setIcon(icon1);

        horizontalLayout->addWidget(nextButton);

        buttonBox = new QDialogButtonBox(TipsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        textLabel = new QLabel(TipsDialog);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        sizePolicy.setHeightForWidth(textLabel->sizePolicy().hasHeightForWidth());
        textLabel->setSizePolicy(sizePolicy);
        textLabel->setWordWrap(true);

        gridLayout->addWidget(textLabel, 3, 0, 1, 2);


        retranslateUi(TipsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TipsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TipsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TipsDialog);
    } // setupUi

    void retranslateUi(QDialog *TipsDialog)
    {
        TipsDialog->setWindowTitle(QCoreApplication::translate("TipsDialog", "Did you know...?", nullptr));
        label->setText(QString());
        imgLabel->setText(QString());
        startupCheckBox->setText(QCoreApplication::translate("TipsDialog", "&Show tips on startup", nullptr));
        prevButton->setText(QCoreApplication::translate("TipsDialog", "...", nullptr));
        nextButton->setText(QCoreApplication::translate("TipsDialog", "...", nullptr));
        textLabel->setText(QCoreApplication::translate("TipsDialog", "Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TipsDialog: public Ui_TipsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIPS_GUI_H
