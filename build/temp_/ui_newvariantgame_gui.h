/********************************************************************************
** Form generated from reading UI file 'newvariantgame_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWVARIANTGAME_GUI_H
#define UI_NEWVARIANTGAME_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "komispinbox.h"
#include "sizegraphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_NewVariantGameDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *GroupBox13;
    QGridLayout *gridLayout;
    QLabel *TextLabel2;
    QLabel *TextLabel1;
    QLineEdit *playerBlackEdit;
    QLabel *TextLabel2_2;
    QLineEdit *playerWhiteEdit;
    QLineEdit *playerWhiteRkEdit;
    QLineEdit *playerBlackRkEdit;
    QLabel *TextLabel2_3;
    QGroupBox *GroupBox14;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel4;
    KomiSpinBox *komiSpin;
    QHBoxLayout *hboxLayout1;
    QLabel *TextLabel3;
    QSpacerItem *horizontalSpacer;
    QSpinBox *xSizeSpin;
    QLabel *label;
    QSpinBox *ySizeSpin;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *hTorusCheckBox;
    QCheckBox *vTorusCheckBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    SizeGraphicsView *graphicsView;
    QFrame *frame_2;
    QGridLayout *gridLayout_1;
    QPushButton *resetButton;
    QPushButton *clearSelButton;
    QPushButton *removeSelButton;
    QPushButton *addSelButton;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *Horizontal_Spacing2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewVariantGameDialog)
    {
        if (NewVariantGameDialog->objectName().isEmpty())
            NewVariantGameDialog->setObjectName(QString::fromUtf8("NewVariantGameDialog"));
        NewVariantGameDialog->resize(579, 390);
        verticalLayout = new QVBoxLayout(NewVariantGameDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        GroupBox13 = new QGroupBox(NewVariantGameDialog);
        GroupBox13->setObjectName(QString::fromUtf8("GroupBox13"));
        gridLayout = new QGridLayout(GroupBox13);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(11, 11, 11, 11);
        TextLabel2 = new QLabel(GroupBox13);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        TextLabel2->setPixmap(QPixmap(QString::fromUtf8(":/images/stone_w16.png")));
        TextLabel2->setWordWrap(false);

        gridLayout->addWidget(TextLabel2, 2, 0, 1, 1);

        TextLabel1 = new QLabel(GroupBox13);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setPixmap(QPixmap(QString::fromUtf8(":/images/stone_b16.png")));
        TextLabel1->setWordWrap(false);

        gridLayout->addWidget(TextLabel1, 3, 0, 1, 1);

        playerBlackEdit = new QLineEdit(GroupBox13);
        playerBlackEdit->setObjectName(QString::fromUtf8("playerBlackEdit"));

        gridLayout->addWidget(playerBlackEdit, 3, 1, 1, 1);

        TextLabel2_2 = new QLabel(GroupBox13);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));
        TextLabel2_2->setWordWrap(false);

        gridLayout->addWidget(TextLabel2_2, 1, 1, 1, 1);

        playerWhiteEdit = new QLineEdit(GroupBox13);
        playerWhiteEdit->setObjectName(QString::fromUtf8("playerWhiteEdit"));

        gridLayout->addWidget(playerWhiteEdit, 2, 1, 1, 1);

        playerWhiteRkEdit = new QLineEdit(GroupBox13);
        playerWhiteRkEdit->setObjectName(QString::fromUtf8("playerWhiteRkEdit"));
        playerWhiteRkEdit->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(playerWhiteRkEdit, 2, 2, 1, 1);

        playerBlackRkEdit = new QLineEdit(GroupBox13);
        playerBlackRkEdit->setObjectName(QString::fromUtf8("playerBlackRkEdit"));
        playerBlackRkEdit->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(playerBlackRkEdit, 3, 2, 1, 1);

        TextLabel2_3 = new QLabel(GroupBox13);
        TextLabel2_3->setObjectName(QString::fromUtf8("TextLabel2_3"));
        TextLabel2_3->setWordWrap(false);

        gridLayout->addWidget(TextLabel2_3, 1, 2, 1, 1);


        verticalLayout_2->addWidget(GroupBox13);

        GroupBox14 = new QGroupBox(NewVariantGameDialog);
        GroupBox14->setObjectName(QString::fromUtf8("GroupBox14"));
        gridLayout1 = new QGridLayout(GroupBox14);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        TextLabel4 = new QLabel(GroupBox14);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        TextLabel4->setWordWrap(false);

        hboxLayout->addWidget(TextLabel4);

        komiSpin = new KomiSpinBox(GroupBox14);
        komiSpin->setObjectName(QString::fromUtf8("komiSpin"));
        komiSpin->setMaximumSize(QSize(60, 32767));
        komiSpin->setFocusPolicy(Qt::StrongFocus);
        komiSpin->setAcceptDrops(true);
        komiSpin->setDecimals(1);

        hboxLayout->addWidget(komiSpin);


        gridLayout1->addLayout(hboxLayout, 1, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        TextLabel3 = new QLabel(GroupBox14);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
        TextLabel3->setWordWrap(false);

        hboxLayout1->addWidget(TextLabel3);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(horizontalSpacer);

        xSizeSpin = new QSpinBox(GroupBox14);
        xSizeSpin->setObjectName(QString::fromUtf8("xSizeSpin"));
        xSizeSpin->setMinimum(3);
        xSizeSpin->setMaximum(25);
        xSizeSpin->setValue(19);

        hboxLayout1->addWidget(xSizeSpin);

        label = new QLabel(GroupBox14);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(label);

        ySizeSpin = new QSpinBox(GroupBox14);
        ySizeSpin->setObjectName(QString::fromUtf8("ySizeSpin"));
        ySizeSpin->setMaximumSize(QSize(60, 32767));
        ySizeSpin->setMinimum(4);
        ySizeSpin->setMaximum(36);
        ySizeSpin->setValue(19);

        hboxLayout1->addWidget(ySizeSpin);


        gridLayout1->addLayout(hboxLayout1, 0, 0, 1, 1);


        verticalLayout_2->addWidget(GroupBox14);

        groupBox = new QGroupBox(NewVariantGameDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        hTorusCheckBox = new QCheckBox(groupBox);
        hTorusCheckBox->setObjectName(QString::fromUtf8("hTorusCheckBox"));

        horizontalLayout->addWidget(hTorusCheckBox);

        vTorusCheckBox = new QCheckBox(groupBox);
        vTorusCheckBox->setObjectName(QString::fromUtf8("vTorusCheckBox"));

        horizontalLayout->addWidget(vTorusCheckBox);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        graphicsView = new SizeGraphicsView(NewVariantGameDialog);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setMinimumSize(QSize(240, 0));
        graphicsView->setLineWidth(1);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        graphicsView->setDragMode(QGraphicsView::RubberBandDrag);
        graphicsView->setTransformationAnchor(QGraphicsView::AnchorViewCenter);
        graphicsView->setRubberBandSelectionMode(Qt::IntersectsItemBoundingRect);

        verticalLayout_3->addWidget(graphicsView);

        frame_2 = new QFrame(NewVariantGameDialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        gridLayout_1 = new QGridLayout(frame_2);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        resetButton = new QPushButton(frame_2);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        gridLayout_1->addWidget(resetButton, 1, 1, 1, 1);

        clearSelButton = new QPushButton(frame_2);
        clearSelButton->setObjectName(QString::fromUtf8("clearSelButton"));

        gridLayout_1->addWidget(clearSelButton, 1, 0, 1, 1);

        removeSelButton = new QPushButton(frame_2);
        removeSelButton->setObjectName(QString::fromUtf8("removeSelButton"));

        gridLayout_1->addWidget(removeSelButton, 0, 0, 1, 1);

        addSelButton = new QPushButton(frame_2);
        addSelButton->setObjectName(QString::fromUtf8("addSelButton"));

        gridLayout_1->addWidget(addSelButton, 0, 1, 1, 1);


        verticalLayout_3->addWidget(frame_2);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        Horizontal_Spacing2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(Horizontal_Spacing2);

        buttonBox = new QDialogButtonBox(NewVariantGameDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout2->addWidget(buttonBox);


        verticalLayout->addLayout(hboxLayout2);

        QWidget::setTabOrder(playerWhiteEdit, playerWhiteRkEdit);
        QWidget::setTabOrder(playerWhiteRkEdit, playerBlackEdit);
        QWidget::setTabOrder(playerBlackEdit, playerBlackRkEdit);
        QWidget::setTabOrder(playerBlackRkEdit, xSizeSpin);
        QWidget::setTabOrder(xSizeSpin, ySizeSpin);
        QWidget::setTabOrder(ySizeSpin, komiSpin);
        QWidget::setTabOrder(komiSpin, hTorusCheckBox);
        QWidget::setTabOrder(hTorusCheckBox, vTorusCheckBox);

        retranslateUi(NewVariantGameDialog);

        QMetaObject::connectSlotsByName(NewVariantGameDialog);
    } // setupUi

    void retranslateUi(QDialog *NewVariantGameDialog)
    {
        NewVariantGameDialog->setWindowTitle(QCoreApplication::translate("NewVariantGameDialog", "New Variant Game", nullptr));
        GroupBox13->setTitle(QCoreApplication::translate("NewVariantGameDialog", "Players", nullptr));
        TextLabel2->setText(QString());
        TextLabel1->setText(QString());
        playerBlackEdit->setText(QCoreApplication::translate("NewVariantGameDialog", "Black", nullptr));
        TextLabel2_2->setText(QCoreApplication::translate("NewVariantGameDialog", "Name:", nullptr));
        playerWhiteEdit->setText(QCoreApplication::translate("NewVariantGameDialog", "White", nullptr));
        TextLabel2_3->setText(QCoreApplication::translate("NewVariantGameDialog", "Rank:", nullptr));
        GroupBox14->setTitle(QCoreApplication::translate("NewVariantGameDialog", "Board shape", nullptr));
        TextLabel4->setText(QCoreApplication::translate("NewVariantGameDialog", "Komi:", nullptr));
        TextLabel3->setText(QCoreApplication::translate("NewVariantGameDialog", "Board size:", nullptr));
        label->setText(QCoreApplication::translate("NewVariantGameDialog", "x", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NewVariantGameDialog", "Toroidal Go", nullptr));
        hTorusCheckBox->setText(QCoreApplication::translate("NewVariantGameDialog", "Horizontally", nullptr));
        vTorusCheckBox->setText(QCoreApplication::translate("NewVariantGameDialog", "Vertically", nullptr));
#if QT_CONFIG(tooltip)
        resetButton->setToolTip(QCoreApplication::translate("NewVariantGameDialog", "Restores the board to its original state, with no intersections removed", nullptr));
#endif // QT_CONFIG(tooltip)
        resetButton->setText(QCoreApplication::translate("NewVariantGameDialog", "Reset grid", nullptr));
#if QT_CONFIG(tooltip)
        clearSelButton->setToolTip(QCoreApplication::translate("NewVariantGameDialog", "Clears the selection", nullptr));
#endif // QT_CONFIG(tooltip)
        clearSelButton->setText(QCoreApplication::translate("NewVariantGameDialog", "Clear selection", nullptr));
#if QT_CONFIG(tooltip)
        removeSelButton->setToolTip(QCoreApplication::translate("NewVariantGameDialog", "Remove the selected intersections from the board", nullptr));
#endif // QT_CONFIG(tooltip)
        removeSelButton->setText(QCoreApplication::translate("NewVariantGameDialog", "Remove selected", nullptr));
#if QT_CONFIG(tooltip)
        addSelButton->setToolTip(QCoreApplication::translate("NewVariantGameDialog", "Add the selected intersections to the board", nullptr));
#endif // QT_CONFIG(tooltip)
        addSelButton->setText(QCoreApplication::translate("NewVariantGameDialog", "Add selected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewVariantGameDialog: public Ui_NewVariantGameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWVARIANTGAME_GUI_H
