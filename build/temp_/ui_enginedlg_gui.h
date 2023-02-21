/********************************************************************************
** Form generated from reading UI file 'enginedlg_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENGINEDLG_GUI_H
#define UI_ENGINEDLG_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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

QT_BEGIN_NAMESPACE

class Ui_EngineDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QFrame *GoEnginegroup_box;
    QGridLayout *gridLayout_7;
    QLineEdit *engineArgs;
    QLabel *enginelabel_1;
    QLabel *enginelabel_2;
    QPushButton *enginePathButton;
    QLineEdit *engineName;
    QLabel *enginelabel_3;
    QLineEdit *enginePath;
    QGroupBox *engineRestrictions;
    QHBoxLayout *horizontalLayout;
    QLabel *enginelabel_4;
    QLineEdit *engineKomi;
    QLabel *enginelabel_5;
    QLineEdit *engineSize;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QCheckBox *engineAnalysis;

    void setupUi(QDialog *EngineDialog)
    {
        if (EngineDialog->objectName().isEmpty())
            EngineDialog->setObjectName(QString::fromUtf8("EngineDialog"));
        EngineDialog->resize(460, 253);
        gridLayout = new QGridLayout(EngineDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        GoEnginegroup_box = new QFrame(EngineDialog);
        GoEnginegroup_box->setObjectName(QString::fromUtf8("GoEnginegroup_box"));
        gridLayout_7 = new QGridLayout(GoEnginegroup_box);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        engineArgs = new QLineEdit(GoEnginegroup_box);
        engineArgs->setObjectName(QString::fromUtf8("engineArgs"));

        gridLayout_7->addWidget(engineArgs, 2, 1, 1, 2);

        enginelabel_1 = new QLabel(GoEnginegroup_box);
        enginelabel_1->setObjectName(QString::fromUtf8("enginelabel_1"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(enginelabel_1->sizePolicy().hasHeightForWidth());
        enginelabel_1->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(enginelabel_1, 0, 0, 1, 1);

        enginelabel_2 = new QLabel(GoEnginegroup_box);
        enginelabel_2->setObjectName(QString::fromUtf8("enginelabel_2"));
        sizePolicy.setHeightForWidth(enginelabel_2->sizePolicy().hasHeightForWidth());
        enginelabel_2->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(enginelabel_2, 1, 0, 1, 1);

        enginePathButton = new QPushButton(GoEnginegroup_box);
        enginePathButton->setObjectName(QString::fromUtf8("enginePathButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(enginePathButton->sizePolicy().hasHeightForWidth());
        enginePathButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        enginePathButton->setIcon(icon);

        gridLayout_7->addWidget(enginePathButton, 1, 3, 1, 1);

        engineName = new QLineEdit(GoEnginegroup_box);
        engineName->setObjectName(QString::fromUtf8("engineName"));

        gridLayout_7->addWidget(engineName, 0, 1, 1, 2);

        enginelabel_3 = new QLabel(GoEnginegroup_box);
        enginelabel_3->setObjectName(QString::fromUtf8("enginelabel_3"));
        sizePolicy.setHeightForWidth(enginelabel_3->sizePolicy().hasHeightForWidth());
        enginelabel_3->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(enginelabel_3, 2, 0, 1, 1);

        enginePath = new QLineEdit(GoEnginegroup_box);
        enginePath->setObjectName(QString::fromUtf8("enginePath"));

        gridLayout_7->addWidget(enginePath, 1, 1, 1, 2);

        engineRestrictions = new QGroupBox(GoEnginegroup_box);
        engineRestrictions->setObjectName(QString::fromUtf8("engineRestrictions"));
        engineRestrictions->setCheckable(true);
        horizontalLayout = new QHBoxLayout(engineRestrictions);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        enginelabel_4 = new QLabel(engineRestrictions);
        enginelabel_4->setObjectName(QString::fromUtf8("enginelabel_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(enginelabel_4->sizePolicy().hasHeightForWidth());
        enginelabel_4->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(enginelabel_4);

        engineKomi = new QLineEdit(engineRestrictions);
        engineKomi->setObjectName(QString::fromUtf8("engineKomi"));
        engineKomi->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(engineKomi);

        enginelabel_5 = new QLabel(engineRestrictions);
        enginelabel_5->setObjectName(QString::fromUtf8("enginelabel_5"));
        sizePolicy.setHeightForWidth(enginelabel_5->sizePolicy().hasHeightForWidth());
        enginelabel_5->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(enginelabel_5);

        engineSize = new QLineEdit(engineRestrictions);
        engineSize->setObjectName(QString::fromUtf8("engineSize"));
        engineSize->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(engineSize);

        horizontalSpacer = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_7->addWidget(engineRestrictions, 3, 0, 1, 4);


        gridLayout->addWidget(GoEnginegroup_box, 0, 0, 2, 2);

        buttonBox = new QDialogButtonBox(EngineDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 1);

        engineAnalysis = new QCheckBox(EngineDialog);
        engineAnalysis->setObjectName(QString::fromUtf8("engineAnalysis"));

        gridLayout->addWidget(engineAnalysis, 2, 0, 1, 1);

#if QT_CONFIG(shortcut)
        enginelabel_1->setBuddy(engineName);
        enginelabel_2->setBuddy(enginePath);
        enginelabel_3->setBuddy(engineArgs);
        enginelabel_4->setBuddy(engineKomi);
        enginelabel_5->setBuddy(engineSize);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(engineName, enginePath);
        QWidget::setTabOrder(enginePath, engineArgs);
        QWidget::setTabOrder(engineArgs, engineAnalysis);
        QWidget::setTabOrder(engineAnalysis, enginePathButton);

        retranslateUi(EngineDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EngineDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EngineDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EngineDialog);
    } // setupUi

    void retranslateUi(QDialog *EngineDialog)
    {
        EngineDialog->setWindowTitle(QCoreApplication::translate("EngineDialog", "Create a new engine configuration", nullptr));
#if QT_CONFIG(tooltip)
        engineArgs->setToolTip(QCoreApplication::translate("EngineDialog", "Any command line arguments that should be passed at startup.", nullptr));
#endif // QT_CONFIG(tooltip)
        enginelabel_1->setText(QCoreApplication::translate("EngineDialog", "Name:", nullptr));
        enginelabel_2->setText(QCoreApplication::translate("EngineDialog", "Executable:", nullptr));
        enginePathButton->setText(QString());
#if QT_CONFIG(tooltip)
        engineName->setToolTip(QCoreApplication::translate("EngineDialog", "The name of the engine by which it is selected in the new computer game dialog", nullptr));
#endif // QT_CONFIG(tooltip)
        enginelabel_3->setText(QCoreApplication::translate("EngineDialog", "Arguments:", nullptr));
#if QT_CONFIG(tooltip)
        enginePath->setToolTip(QCoreApplication::translate("EngineDialog", "The path to the GTP engine's executable.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        engineRestrictions->setToolTip(QCoreApplication::translate("EngineDialog", "<p>Some engines, like Leela Zero, are restricted in what board size or komi they can support.</p><p>Uncheck this box if this engine can support any reasonable setting (like Katago).</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        engineRestrictions->setTitle(QCoreApplication::translate("EngineDialog", "Restrictions", nullptr));
        enginelabel_4->setText(QCoreApplication::translate("EngineDialog", "Fixed komi:", nullptr));
#if QT_CONFIG(tooltip)
        engineKomi->setToolTip(QCoreApplication::translate("EngineDialog", "Set this to the komi value the engine expects, or leave empty if the engine allows arbitrary values for komi.", nullptr));
#endif // QT_CONFIG(tooltip)
        enginelabel_5->setText(QCoreApplication::translate("EngineDialog", "Board size:", nullptr));
#if QT_CONFIG(tooltip)
        engineSize->setToolTip(QCoreApplication::translate("EngineDialog", "Enter a board size if the engine supports only one board size.\n"
"Analysis engines currently require a fixed board size to be set.", nullptr));
#endif // QT_CONFIG(tooltip)
        engineAnalysis->setText(QCoreApplication::translate("EngineDialog", "Use for analysis (KataGo, Leela Zero or compatible)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EngineDialog: public Ui_EngineDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENGINEDLG_GUI_H
