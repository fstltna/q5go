/********************************************************************************
** Form generated from reading UI file 'analyze_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYZE_GUI_H
#define UI_ANALYZE_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnalyzeDialog
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QProgressBar *progressBar;
    QToolButton *openButton;
    QListView *jobView;
    QToolButton *trashButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hboxLayout;
    QSpacerItem *Horizontal_Spacing2;
    QPushButton *closeButton;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QListView *doneView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *trashDoneButton;
    QToolButton *openDoneButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLineEdit *secondsEdit;
    QCheckBox *commentsCheckBox;
    QLineEdit *maxlinesEdit;
    QLabel *label_2;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QComboBox *rulesComboBox;
    QLabel *label_6;
    QComboBox *komiComboBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *filenameEdit;
    QToolButton *fileselButton;
    QToolButton *dbselButton;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *enqueueButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *enqueueDirButton;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *engineComboBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QSpinBox *boardsizeSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *engineStartButton;
    QPushButton *engineStopButton;
    QToolButton *enginePauseButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *engineStatusLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *engineLogButton;
    QPushButton *configureButton;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QMainWindow *AnalyzeDialog)
    {
        if (AnalyzeDialog->objectName().isEmpty())
            AnalyzeDialog->setObjectName(QString::fromUtf8("AnalyzeDialog"));
        AnalyzeDialog->resize(657, 550);
        centralwidget = new QWidget(AnalyzeDialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        progressBar = new QProgressBar(groupBox_3);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 1, 1, 1, 1);

        openButton = new QToolButton(groupBox_3);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/new_board.png"), QSize(), QIcon::Normal, QIcon::Off);
        openButton->setIcon(icon);

        gridLayout->addWidget(openButton, 1, 3, 1, 1);

        jobView = new QListView(groupBox_3);
        jobView->setObjectName(QString::fromUtf8("jobView"));
        jobView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        jobView->setDragEnabled(true);
        jobView->setDragDropMode(QAbstractItemView::InternalMove);

        gridLayout->addWidget(jobView, 0, 1, 1, 3);

        trashButton = new QToolButton(groupBox_3);
        trashButton->setObjectName(QString::fromUtf8("trashButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        trashButton->setIcon(icon1);

        gridLayout->addWidget(trashButton, 1, 2, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 5, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        Horizontal_Spacing2 = new QSpacerItem(224, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(Horizontal_Spacing2);

        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setAutoDefault(true);

        hboxLayout->addWidget(closeButton);


        gridLayout_6->addLayout(hboxLayout, 6, 0, 1, 2);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        doneView = new QListView(groupBox_5);
        doneView->setObjectName(QString::fromUtf8("doneView"));
        doneView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        doneView->setDragEnabled(true);
        doneView->setDragDropMode(QAbstractItemView::InternalMove);

        gridLayout_5->addWidget(doneView, 0, 1, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        trashDoneButton = new QToolButton(groupBox_5);
        trashDoneButton->setObjectName(QString::fromUtf8("trashDoneButton"));
        trashDoneButton->setIcon(icon1);

        horizontalLayout_2->addWidget(trashDoneButton);

        openDoneButton = new QToolButton(groupBox_5);
        openDoneButton->setObjectName(QString::fromUtf8("openDoneButton"));
        openDoneButton->setEnabled(false);
        openDoneButton->setIcon(icon);

        horizontalLayout_2->addWidget(openDoneButton);


        gridLayout_5->addLayout(horizontalLayout_2, 1, 1, 1, 2);


        gridLayout_6->addWidget(groupBox_5, 4, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        secondsEdit = new QLineEdit(groupBox_2);
        secondsEdit->setObjectName(QString::fromUtf8("secondsEdit"));
        secondsEdit->setMaximumSize(QSize(50, 16777215));

        gridLayout_4->addWidget(secondsEdit, 0, 1, 1, 1);

        commentsCheckBox = new QCheckBox(groupBox_2);
        commentsCheckBox->setObjectName(QString::fromUtf8("commentsCheckBox"));
        commentsCheckBox->setChecked(true);

        gridLayout_4->addWidget(commentsCheckBox, 3, 0, 1, 2);

        maxlinesEdit = new QLineEdit(groupBox_2);
        maxlinesEdit->setObjectName(QString::fromUtf8("maxlinesEdit"));
        maxlinesEdit->setMaximumSize(QSize(50, 16777215));

        gridLayout_4->addWidget(maxlinesEdit, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        widget = new QWidget(groupBox_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        rulesComboBox = new QComboBox(widget);
        rulesComboBox->addItem(QString());
        rulesComboBox->addItem(QString());
        rulesComboBox->addItem(QString());
        rulesComboBox->setObjectName(QString::fromUtf8("rulesComboBox"));

        gridLayout_3->addWidget(rulesComboBox, 1, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        komiComboBox = new QComboBox(widget);
        komiComboBox->addItem(QString());
        komiComboBox->addItem(QString());
        komiComboBox->addItem(QString());
        komiComboBox->setObjectName(QString::fromUtf8("komiComboBox"));

        gridLayout_3->addWidget(komiComboBox, 0, 1, 1, 1);


        gridLayout_4->addWidget(widget, 2, 0, 1, 2);


        gridLayout_6->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        filenameEdit = new QLineEdit(groupBox);
        filenameEdit->setObjectName(QString::fromUtf8("filenameEdit"));

        horizontalLayout->addWidget(filenameEdit);

        fileselButton = new QToolButton(groupBox);
        fileselButton->setObjectName(QString::fromUtf8("fileselButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ClientWindowGui/images/clientwindow/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileselButton->setIcon(icon2);

        horizontalLayout->addWidget(fileselButton);

        dbselButton = new QToolButton(groupBox);
        dbselButton->setObjectName(QString::fromUtf8("dbselButton"));
        dbselButton->setIcon(icon2);
        dbselButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(dbselButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        enqueueButton = new QPushButton(groupBox);
        enqueueButton->setObjectName(QString::fromUtf8("enqueueButton"));

        horizontalLayout_5->addWidget(enqueueButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        enqueueDirButton = new QPushButton(groupBox);
        enqueueDirButton->setObjectName(QString::fromUtf8("enqueueDirButton"));
        enqueueDirButton->setIcon(icon2);

        horizontalLayout_5->addWidget(enqueueDirButton);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout_6->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 1);

        frame = new QFrame(groupBox_4);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        engineComboBox = new QComboBox(frame);
        engineComboBox->setObjectName(QString::fromUtf8("engineComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(engineComboBox->sizePolicy().hasHeightForWidth());
        engineComboBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::FieldRole, engineComboBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        boardsizeSpinBox = new QSpinBox(frame);
        boardsizeSpinBox->setObjectName(QString::fromUtf8("boardsizeSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(boardsizeSpinBox->sizePolicy().hasHeightForWidth());
        boardsizeSpinBox->setSizePolicy(sizePolicy2);
        boardsizeSpinBox->setMinimum(7);
        boardsizeSpinBox->setMaximum(39);
        boardsizeSpinBox->setValue(19);

        horizontalLayout_7->addWidget(boardsizeSpinBox);

        horizontalSpacer_4 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        formLayout->setLayout(1, QFormLayout::SpanningRole, horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        engineStartButton = new QPushButton(frame);
        engineStartButton->setObjectName(QString::fromUtf8("engineStartButton"));

        horizontalLayout_6->addWidget(engineStartButton);

        engineStopButton = new QPushButton(frame);
        engineStopButton->setObjectName(QString::fromUtf8("engineStopButton"));

        horizontalLayout_6->addWidget(engineStopButton);

        enginePauseButton = new QToolButton(frame);
        enginePauseButton->setObjectName(QString::fromUtf8("enginePauseButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        enginePauseButton->setIcon(icon3);
        enginePauseButton->setCheckable(true);

        horizontalLayout_6->addWidget(enginePauseButton);

        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        formLayout->setLayout(3, QFormLayout::SpanningRole, horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        engineStatusLabel = new QLabel(frame);
        engineStatusLabel->setObjectName(QString::fromUtf8("engineStatusLabel"));

        horizontalLayout_4->addWidget(engineStatusLabel);

        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        engineLogButton = new QPushButton(frame);
        engineLogButton->setObjectName(QString::fromUtf8("engineLogButton"));

        horizontalLayout_4->addWidget(engineLogButton);


        formLayout->setLayout(5, QFormLayout::SpanningRole, horizontalLayout_4);


        gridLayout_2->addWidget(frame, 1, 0, 1, 4);

        configureButton = new QPushButton(groupBox_4);
        configureButton->setObjectName(QString::fromUtf8("configureButton"));
        sizePolicy1.setHeightForWidth(configureButton->sizePolicy().hasHeightForWidth());
        configureButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(configureButton, 5, 3, 1, 1);


        gridLayout_6->addWidget(groupBox_4, 0, 1, 3, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        gridLayout_6->addLayout(horizontalLayout_8, 2, 0, 1, 1);

        gridLayout_6->setColumnStretch(0, 1);
        AnalyzeDialog->setCentralWidget(centralwidget);
#if QT_CONFIG(shortcut)
        label_4->setBuddy(maxlinesEdit);
        label_2->setBuddy(secondsEdit);
        label_7->setBuddy(rulesComboBox);
        label_6->setBuddy(komiComboBox);
        label_3->setBuddy(engineComboBox);
        label->setBuddy(boardsizeSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(secondsEdit, maxlinesEdit);
        QWidget::setTabOrder(maxlinesEdit, commentsCheckBox);
        QWidget::setTabOrder(commentsCheckBox, filenameEdit);
        QWidget::setTabOrder(filenameEdit, fileselButton);
        QWidget::setTabOrder(fileselButton, dbselButton);
        QWidget::setTabOrder(dbselButton, enqueueButton);
        QWidget::setTabOrder(enqueueButton, boardsizeSpinBox);
        QWidget::setTabOrder(boardsizeSpinBox, configureButton);
        QWidget::setTabOrder(configureButton, engineComboBox);
        QWidget::setTabOrder(engineComboBox, engineStartButton);
        QWidget::setTabOrder(engineStartButton, engineStopButton);
        QWidget::setTabOrder(engineStopButton, enginePauseButton);
        QWidget::setTabOrder(enginePauseButton, engineLogButton);
        QWidget::setTabOrder(engineLogButton, jobView);
        QWidget::setTabOrder(jobView, trashButton);
        QWidget::setTabOrder(trashButton, openButton);
        QWidget::setTabOrder(openButton, doneView);
        QWidget::setTabOrder(doneView, trashDoneButton);
        QWidget::setTabOrder(trashDoneButton, openDoneButton);
        QWidget::setTabOrder(openDoneButton, closeButton);

        retranslateUi(AnalyzeDialog);

        QMetaObject::connectSlotsByName(AnalyzeDialog);
    } // setupUi

    void retranslateUi(QMainWindow *AnalyzeDialog)
    {
        AnalyzeDialog->setWindowTitle(QCoreApplication::translate("AnalyzeDialog", "Batch computer analysis", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AnalyzeDialog", "Job queue", nullptr));
#if QT_CONFIG(tooltip)
        openButton->setToolTip(QCoreApplication::translate("AnalyzeDialog", "Observe progress in board window", nullptr));
#endif // QT_CONFIG(tooltip)
        openButton->setText(QCoreApplication::translate("AnalyzeDialog", "...", nullptr));
        trashButton->setText(QCoreApplication::translate("AnalyzeDialog", "...", nullptr));
        closeButton->setText(QCoreApplication::translate("AnalyzeDialog", "&Close", nullptr));
#if QT_CONFIG(shortcut)
        closeButton->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        groupBox_5->setTitle(QCoreApplication::translate("AnalyzeDialog", "Completed jobs", nullptr));
        trashDoneButton->setText(QCoreApplication::translate("AnalyzeDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        openDoneButton->setToolTip(QCoreApplication::translate("AnalyzeDialog", "Observe progress in board window", nullptr));
#endif // QT_CONFIG(tooltip)
        openDoneButton->setText(QCoreApplication::translate("AnalyzeDialog", "...", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AnalyzeDialog", "Analysis parameters", nullptr));
        label_4->setText(QCoreApplication::translate("AnalyzeDialog", "Maximum number of lines to add:", nullptr));
        secondsEdit->setText(QCoreApplication::translate("AnalyzeDialog", "5", nullptr));
        commentsCheckBox->setText(QCoreApplication::translate("AnalyzeDialog", "Add evaluation info to comments", nullptr));
#if QT_CONFIG(tooltip)
        maxlinesEdit->setToolTip(QCoreApplication::translate("AnalyzeDialog", "Limits the number of variations added for engine lines", nullptr));
#endif // QT_CONFIG(tooltip)
        maxlinesEdit->setText(QCoreApplication::translate("AnalyzeDialog", "10", nullptr));
        label_2->setText(QCoreApplication::translate("AnalyzeDialog", "Number of seconds per move: ", nullptr));
        label_7->setText(QCoreApplication::translate("AnalyzeDialog", "Ruleset:", nullptr));
        rulesComboBox->setItemText(0, QCoreApplication::translate("AnalyzeDialog", "Use best guess", nullptr));
        rulesComboBox->setItemText(1, QCoreApplication::translate("AnalyzeDialog", "Japanese", nullptr));
        rulesComboBox->setItemText(2, QCoreApplication::translate("AnalyzeDialog", "Chinese", nullptr));

#if QT_CONFIG(tooltip)
        rulesComboBox->setToolTip(QCoreApplication::translate("AnalyzeDialog", "<p>Controls how to behave if the engine only supports a fixed value for komi.</p>\n"
"<p>If the analyzed game has negative komi, the game can be analyzed with reversed colors for better results.\n"
"It is also possible to analyze with both normal and flipped komi, for example for zero-komi games.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        rulesComboBox->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        label_6->setText(QCoreApplication::translate("AnalyzeDialog", "If fixed engine komi:", nullptr));
        komiComboBox->setItemText(0, QCoreApplication::translate("AnalyzeDialog", "Use default", nullptr));
        komiComboBox->setItemText(1, QCoreApplication::translate("AnalyzeDialog", "Swap if better", nullptr));
        komiComboBox->setItemText(2, QCoreApplication::translate("AnalyzeDialog", "Analyze both", nullptr));

#if QT_CONFIG(tooltip)
        komiComboBox->setToolTip(QCoreApplication::translate("AnalyzeDialog", "<p>Controls how to behave if the engine only supports a fixed value for komi.</p>\n"
"<p>If the analyzed game has negative komi, the game can be analyzed with reversed colors for better results.\n"
"It is also possible to analyze with both normal and flipped komi, for example for zero-komi games.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        komiComboBox->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        groupBox->setTitle(QCoreApplication::translate("AnalyzeDialog", "File to analyse", nullptr));
#if QT_CONFIG(tooltip)
        fileselButton->setToolTip(QCoreApplication::translate("AnalyzeDialog", "Choose a file", nullptr));
#endif // QT_CONFIG(tooltip)
        fileselButton->setText(QString());
#if QT_CONFIG(tooltip)
        dbselButton->setToolTip(QCoreApplication::translate("AnalyzeDialog", "Choose a file from the database", nullptr));
#endif // QT_CONFIG(tooltip)
        dbselButton->setText(QCoreApplication::translate("AnalyzeDialog", "DB", nullptr));
#if QT_CONFIG(tooltip)
        enqueueButton->setToolTip(QCoreApplication::translate("AnalyzeDialog", "<p>Add the selected file to the job queue, using the current analysis parameters</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        enqueueButton->setText(QCoreApplication::translate("AnalyzeDialog", "Add chosen &file", nullptr));
#if QT_CONFIG(tooltip)
        enqueueDirButton->setToolTip(QCoreApplication::translate("AnalyzeDialog", "<p>Opens a directory selector. If a directory is chosen, all SGF files within it will be added to the job queue, using the current analysis parameters.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        enqueueDirButton->setText(QCoreApplication::translate("AnalyzeDialog", "Add entire &directory", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("AnalyzeDialog", "Engine status", nullptr));
        label_3->setText(QCoreApplication::translate("AnalyzeDialog", "Choose:", nullptr));
        label->setText(QCoreApplication::translate("AnalyzeDialog", "Board size:", nullptr));
        engineStartButton->setText(QCoreApplication::translate("AnalyzeDialog", "Start engine", nullptr));
        engineStopButton->setText(QCoreApplication::translate("AnalyzeDialog", "Stop engine", nullptr));
        enginePauseButton->setText(QCoreApplication::translate("AnalyzeDialog", "...", nullptr));
        label_5->setText(QCoreApplication::translate("AnalyzeDialog", "Status:", nullptr));
        engineStatusLabel->setText(QCoreApplication::translate("AnalyzeDialog", "stopped", nullptr));
        engineLogButton->setText(QCoreApplication::translate("AnalyzeDialog", "Show messages...", nullptr));
#if QT_CONFIG(tooltip)
        configureButton->setToolTip(QCoreApplication::translate("AnalyzeDialog", "Open the preferences dialog to configure engines", nullptr));
#endif // QT_CONFIG(tooltip)
        configureButton->setText(QCoreApplication::translate("AnalyzeDialog", "Configure engines...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalyzeDialog: public Ui_AnalyzeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYZE_GUI_H
