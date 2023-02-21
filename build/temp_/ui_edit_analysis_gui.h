/********************************************************************************
** Form generated from reading UI file 'edit_analysis_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_ANALYSIS_GUI_H
#define UI_EDIT_ANALYSIS_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "clickableviews.h"

QT_BEGIN_NAMESPACE

class Ui_EditAnalysisDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_1;
    QGridLayout *gridLayout;
    ClickableListView *anIdListView;
    QLabel *countLabel;
    QLabel *label;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *delDiagsButton;
    QPushButton *delAllButton;
    QDialogButtonBox *buttonBox;
    QCheckBox *keepMultiCheckBox;

    void setupUi(QDialog *EditAnalysisDialog)
    {
        if (EditAnalysisDialog->objectName().isEmpty())
            EditAnalysisDialog->setObjectName(QString::fromUtf8("EditAnalysisDialog"));
        EditAnalysisDialog->resize(636, 346);
        EditAnalysisDialog->setMinimumSize(QSize(571, 0));
        gridLayout_2 = new QGridLayout(EditAnalysisDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_1 = new QGroupBox(EditAnalysisDialog);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        gridLayout = new QGridLayout(groupBox_1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        anIdListView = new ClickableListView(groupBox_1);
        anIdListView->setObjectName(QString::fromUtf8("anIdListView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(anIdListView->sizePolicy().hasHeightForWidth());
        anIdListView->setSizePolicy(sizePolicy);
        anIdListView->setFocusPolicy(Qt::NoFocus);
        anIdListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        anIdListView->setSelectionBehavior(QAbstractItemView::SelectRows);
        anIdListView->setUniformItemSizes(true);

        gridLayout->addWidget(anIdListView, 0, 0, 1, 1);

        countLabel = new QLabel(groupBox_1);
        countLabel->setObjectName(QString::fromUtf8("countLabel"));

        gridLayout->addWidget(countLabel, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_1, 0, 0, 1, 3);

        label = new QLabel(EditAnalysisDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 4, 0, 1, 1);

        groupBox_2 = new QGroupBox(EditAnalysisDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        delDiagsButton = new QPushButton(groupBox_2);
        delDiagsButton->setObjectName(QString::fromUtf8("delDiagsButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(delDiagsButton->sizePolicy().hasHeightForWidth());
        delDiagsButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(delDiagsButton);

        delAllButton = new QPushButton(groupBox_2);
        delAllButton->setObjectName(QString::fromUtf8("delAllButton"));

        horizontalLayout->addWidget(delAllButton);


        gridLayout_2->addWidget(groupBox_2, 2, 0, 1, 3);

        buttonBox = new QDialogButtonBox(EditAnalysisDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout_2->addWidget(buttonBox, 5, 0, 1, 3);

        keepMultiCheckBox = new QCheckBox(EditAnalysisDialog);
        keepMultiCheckBox->setObjectName(QString::fromUtf8("keepMultiCheckBox"));

        gridLayout_2->addWidget(keepMultiCheckBox, 3, 0, 1, 1);


        retranslateUi(EditAnalysisDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditAnalysisDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditAnalysisDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditAnalysisDialog);
    } // setupUi

    void retranslateUi(QDialog *EditAnalysisDialog)
    {
        EditAnalysisDialog->setWindowTitle(QCoreApplication::translate("EditAnalysisDialog", "Remove existing analysis", nullptr));
        groupBox_1->setTitle(QCoreApplication::translate("EditAnalysisDialog", "Available engine analyses", nullptr));
        countLabel->setText(QString());
        label->setText(QCoreApplication::translate("EditAnalysisDialog", "Please note: undo is not available for these operations.", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("EditAnalysisDialog", "Delete selected analysis", nullptr));
#if QT_CONFIG(tooltip)
        delDiagsButton->setToolTip(QCoreApplication::translate("EditAnalysisDialog", "<p>Deletes all diagrams that look like they were created for the selected analysis. Evaluations are kept for the game positions.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        delDiagsButton->setText(QCoreApplication::translate("EditAnalysisDialog", "Delete &diagrams", nullptr));
#if QT_CONFIG(tooltip)
        delAllButton->setToolTip(QCoreApplication::translate("EditAnalysisDialog", "<p>Delete all trace of the selected analysis.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        delAllButton->setText(QCoreApplication::translate("EditAnalysisDialog", "Delete diagrams and evaluations", nullptr));
#if QT_CONFIG(tooltip)
        keepMultiCheckBox->setToolTip(QCoreApplication::translate("EditAnalysisDialog", "<p>Diagrams created by q5go's batch analysis feature only have an evaluation from one analysis engine. However, it is possible to add more evaluations to them, for example with live analysis. If this checkbox is enabled, such diagrams will always be kept.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        keepMultiCheckBox->setText(QCoreApplication::translate("EditAnalysisDialog", "Always retain diagrams with analysis from multiple sources", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditAnalysisDialog: public Ui_EditAnalysisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_ANALYSIS_GUI_H
