/********************************************************************************
** Form generated from reading UI file 'normaltools_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMALTOOLS_GUI_H
#define UI_NORMALTOOLS_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clockview.h"

QT_BEGIN_NAMESPACE

class Ui_NormalTools
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *whiteStoneLabel;
    QLabel *whiteLabel;
    QSpacerItem *horizontalSpacer_2;
    ClockView *wtimeView;
    QHBoxLayout *horizontalLayout_2;
    QLabel *TextLabel2;
    QLabel *capturesWhite;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *blackStoneLabel;
    QLabel *blackLabel;
    QSpacerItem *horizontalSpacer_3;
    ClockView *btimeView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *TextLabel1;
    QLabel *capturesBlack;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QLabel *TextLabel_free;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel_Handicap;
    QLabel *handicap;
    QHBoxLayout *hboxLayout1;
    QLabel *TextLabel_komi;
    QLabel *komi;
    QSpacerItem *spacer6;
    QSpacerItem *spacer7;
    QWidget *byoWidget;
    QHBoxLayout *byoLayout;
    QLabel *TextLabel_Byo;
    QLabel *byoyomi;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QFrame *anGroup;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QToolButton *anStartButton;
    QToolButton *anPauseButton;
    QToolButton *anHideButton;
    QGroupBox *anPrimaryBox;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLabel *primaryVisits;
    QLabel *primaryWR;
    QGroupBox *anShownBox;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QLabel *shownVisits;
    QLabel *shownWR;

    void setupUi(QWidget *NormalTools)
    {
        if (NormalTools->objectName().isEmpty())
            NormalTools->setObjectName(QString::fromUtf8("NormalTools"));
        NormalTools->resize(164, 870);
        NormalTools->setMinimumSize(QSize(138, 260));
        vboxLayout = new QVBoxLayout(NormalTools);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 4, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        whiteStoneLabel = new QLabel(NormalTools);
        whiteStoneLabel->setObjectName(QString::fromUtf8("whiteStoneLabel"));
        whiteStoneLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/stone_w16.png")));

        horizontalLayout_4->addWidget(whiteStoneLabel);

        whiteLabel = new QLabel(NormalTools);
        whiteLabel->setObjectName(QString::fromUtf8("whiteLabel"));

        horizontalLayout_4->addWidget(whiteLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        vboxLayout->addLayout(horizontalLayout_4);

        wtimeView = new ClockView(NormalTools);
        wtimeView->setObjectName(QString::fromUtf8("wtimeView"));
        wtimeView->setMaximumSize(QSize(16777215, 30));
        wtimeView->setFrameShape(QFrame::NoFrame);
        wtimeView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        wtimeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        wtimeView->setBackgroundBrush(brush);
        wtimeView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        wtimeView->setTransformationAnchor(QGraphicsView::NoAnchor);

        vboxLayout->addWidget(wtimeView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(3, 3, 3, 3);
        TextLabel2 = new QLabel(NormalTools);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        TextLabel2->setWordWrap(false);

        horizontalLayout_2->addWidget(TextLabel2);

        capturesWhite = new QLabel(NormalTools);
        capturesWhite->setObjectName(QString::fromUtf8("capturesWhite"));
        capturesWhite->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        capturesWhite->setWordWrap(false);

        horizontalLayout_2->addWidget(capturesWhite);


        vboxLayout->addLayout(horizontalLayout_2);

        line_3 = new QFrame(NormalTools);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        blackStoneLabel = new QLabel(NormalTools);
        blackStoneLabel->setObjectName(QString::fromUtf8("blackStoneLabel"));
        blackStoneLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/stone_b16.png")));

        horizontalLayout_5->addWidget(blackStoneLabel);

        blackLabel = new QLabel(NormalTools);
        blackLabel->setObjectName(QString::fromUtf8("blackLabel"));

        horizontalLayout_5->addWidget(blackLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        vboxLayout->addLayout(horizontalLayout_5);

        btimeView = new ClockView(NormalTools);
        btimeView->setObjectName(QString::fromUtf8("btimeView"));
        btimeView->setMaximumSize(QSize(16777215, 30));
        btimeView->setFrameShape(QFrame::NoFrame);
        btimeView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        btimeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        btimeView->setBackgroundBrush(brush);
        btimeView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        btimeView->setTransformationAnchor(QGraphicsView::NoAnchor);

        vboxLayout->addWidget(btimeView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(3, 3, 3, 3);
        TextLabel1 = new QLabel(NormalTools);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setWordWrap(false);

        horizontalLayout_3->addWidget(TextLabel1);

        capturesBlack = new QLabel(NormalTools);
        capturesBlack->setObjectName(QString::fromUtf8("capturesBlack"));
        capturesBlack->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        capturesBlack->setWordWrap(false);

        horizontalLayout_3->addWidget(capturesBlack);


        vboxLayout->addLayout(horizontalLayout_3);

        line_2 = new QFrame(NormalTools);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TextLabel_free = new QLabel(NormalTools);
        TextLabel_free->setObjectName(QString::fromUtf8("TextLabel_free"));
        TextLabel_free->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        TextLabel_free->setWordWrap(false);

        gridLayout->addWidget(TextLabel_free, 1, 2, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        TextLabel_Handicap = new QLabel(NormalTools);
        TextLabel_Handicap->setObjectName(QString::fromUtf8("TextLabel_Handicap"));
        TextLabel_Handicap->setMaximumSize(QSize(15, 32767));
        TextLabel_Handicap->setWordWrap(false);

        hboxLayout->addWidget(TextLabel_Handicap);

        handicap = new QLabel(NormalTools);
        handicap->setObjectName(QString::fromUtf8("handicap"));
        handicap->setWordWrap(false);

        hboxLayout->addWidget(handicap);


        gridLayout->addLayout(hboxLayout, 0, 2, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        TextLabel_komi = new QLabel(NormalTools);
        TextLabel_komi->setObjectName(QString::fromUtf8("TextLabel_komi"));
        TextLabel_komi->setWordWrap(false);

        hboxLayout1->addWidget(TextLabel_komi);

        komi = new QLabel(NormalTools);
        komi->setObjectName(QString::fromUtf8("komi"));
        komi->setWordWrap(false);

        hboxLayout1->addWidget(komi);


        gridLayout->addLayout(hboxLayout1, 0, 1, 1, 1);

        spacer6 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacer6, 0, 0, 1, 1);

        spacer7 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacer7, 0, 3, 1, 1);

        byoWidget = new QWidget(NormalTools);
        byoWidget->setObjectName(QString::fromUtf8("byoWidget"));
        byoLayout = new QHBoxLayout(byoWidget);
        byoLayout->setSpacing(6);
        byoLayout->setContentsMargins(11, 11, 11, 11);
        byoLayout->setObjectName(QString::fromUtf8("byoLayout"));
        byoLayout->setContentsMargins(0, 0, 0, 0);
        TextLabel_Byo = new QLabel(byoWidget);
        TextLabel_Byo->setObjectName(QString::fromUtf8("TextLabel_Byo"));
        TextLabel_Byo->setWordWrap(false);

        byoLayout->addWidget(TextLabel_Byo);

        byoyomi = new QLabel(byoWidget);
        byoyomi->setObjectName(QString::fromUtf8("byoyomi"));
        byoyomi->setWordWrap(false);

        byoLayout->addWidget(byoyomi);


        gridLayout->addWidget(byoWidget, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        line = new QFrame(NormalTools);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);

        anGroup = new QFrame(NormalTools);
        anGroup->setObjectName(QString::fromUtf8("anGroup"));
        verticalLayout = new QVBoxLayout(anGroup);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, 0, -1);
        label_5 = new QLabel(anGroup);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        anStartButton = new QToolButton(anGroup);
        anStartButton->setObjectName(QString::fromUtf8("anStartButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        anStartButton->setIcon(icon);
        anStartButton->setCheckable(true);

        horizontalLayout->addWidget(anStartButton);

        anPauseButton = new QToolButton(anGroup);
        anPauseButton->setObjectName(QString::fromUtf8("anPauseButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        anPauseButton->setIcon(icon1);
        anPauseButton->setCheckable(true);

        horizontalLayout->addWidget(anPauseButton);

        anHideButton = new QToolButton(anGroup);
        anHideButton->setObjectName(QString::fromUtf8("anHideButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/eye.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/BoardWindow/images/boardwindow/noeye.png"), QSize(), QIcon::Normal, QIcon::On);
        anHideButton->setIcon(icon2);
        anHideButton->setCheckable(true);

        horizontalLayout->addWidget(anHideButton);


        verticalLayout->addLayout(horizontalLayout);

        anPrimaryBox = new QGroupBox(anGroup);
        anPrimaryBox->setObjectName(QString::fromUtf8("anPrimaryBox"));
        formLayout = new QFormLayout(anPrimaryBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(2, 2, 2, 2);
        label_9 = new QLabel(anPrimaryBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_9);

        primaryVisits = new QLabel(anPrimaryBox);
        primaryVisits->setObjectName(QString::fromUtf8("primaryVisits"));
        primaryVisits->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, primaryVisits);

        primaryWR = new QLabel(anPrimaryBox);
        primaryWR->setObjectName(QString::fromUtf8("primaryWR"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, primaryWR);


        verticalLayout->addWidget(anPrimaryBox);

        anShownBox = new QGroupBox(anGroup);
        anShownBox->setObjectName(QString::fromUtf8("anShownBox"));
        formLayout_2 = new QFormLayout(anShownBox);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(2, 2, 2, 2);
        label_10 = new QLabel(anShownBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        shownVisits = new QLabel(anShownBox);
        shownVisits->setObjectName(QString::fromUtf8("shownVisits"));
        shownVisits->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, shownVisits);

        shownWR = new QLabel(anShownBox);
        shownWR->setObjectName(QString::fromUtf8("shownWR"));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, shownWR);


        verticalLayout->addWidget(anShownBox);


        vboxLayout->addWidget(anGroup);


        retranslateUi(NormalTools);

        QMetaObject::connectSlotsByName(NormalTools);
    } // setupUi

    void retranslateUi(QWidget *NormalTools)
    {
        NormalTools->setWindowTitle(QCoreApplication::translate("NormalTools", "NormalTools", nullptr));
        whiteStoneLabel->setText(QString());
        whiteLabel->setText(QCoreApplication::translate("NormalTools", "White", nullptr));
        TextLabel2->setText(QCoreApplication::translate("NormalTools", "Captures:", nullptr));
        capturesWhite->setText(QCoreApplication::translate("NormalTools", "0", nullptr));
        blackStoneLabel->setText(QString());
        blackLabel->setText(QCoreApplication::translate("NormalTools", "Black", nullptr));
        TextLabel1->setText(QCoreApplication::translate("NormalTools", "Captures:", nullptr));
        capturesBlack->setText(QCoreApplication::translate("NormalTools", "0", nullptr));
#if QT_CONFIG(tooltip)
        TextLabel_free->setToolTip(QCoreApplication::translate("NormalTools", "free/rated game", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        TextLabel_free->setWhatsThis(QCoreApplication::translate("NormalTools", "free game:\n"
"\n"
"use \"free\" command to make game rated or unrated (free)", nullptr));
#endif // QT_CONFIG(whatsthis)
        TextLabel_free->setText(QCoreApplication::translate("NormalTools", "free", nullptr));
#if QT_CONFIG(tooltip)
        TextLabel_Handicap->setToolTip(QCoreApplication::translate("NormalTools", "Handicap", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        TextLabel_Handicap->setWhatsThis(QCoreApplication::translate("NormalTools", "Handicap\n"
"\n"
"Number of stones placed by black as his first move.", nullptr));
#endif // QT_CONFIG(whatsthis)
        TextLabel_Handicap->setText(QCoreApplication::translate("NormalTools", "H:", nullptr));
        handicap->setText(QCoreApplication::translate("NormalTools", "0", nullptr));
#if QT_CONFIG(tooltip)
        TextLabel_komi->setToolTip(QCoreApplication::translate("NormalTools", "komi points", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        TextLabel_komi->setWhatsThis(QCoreApplication::translate("NormalTools", "komi:\n"
"\n"
"Add komi points to white because black has the advantage to set the first stone.\n"
"Use \"komi x\" to request a komi of x (number).", nullptr));
#endif // QT_CONFIG(whatsthis)
        TextLabel_komi->setText(QCoreApplication::translate("NormalTools", "Komi:", nullptr));
        komi->setText(QCoreApplication::translate("NormalTools", "5.5", nullptr));
#if QT_CONFIG(tooltip)
        TextLabel_Byo->setToolTip(QCoreApplication::translate("NormalTools", "byoyomi time (minutes)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        TextLabel_Byo->setWhatsThis(QCoreApplication::translate("NormalTools", "Byoyomi time\n"
"\n"
"Additional time to place a number of stones.\n"
"If time reaches zero before all stones are placed, the game ends immediately: \"... forfeits on time.\"\n"
"\n"
"Time Systems (offline):\n"
"\n"
"Absolute: Byo = 0, no additional time after main time is zero.\n"
"\n"
"Canadian: e.g. Byo = 6/25, 25 stones to place in 6 minutes; if all stones are placed. The byoyomi period is reset to this value and the same number of stones have to be placed until the game ends.\n"
"\n"
"byo-yomi: e.g. Byo: 7x30s, 7 periods at 30 seconds; if a stone is placed within 30 seconds, time is reset to 30 seconds, if not placed within 30 seconds, period will be decreased by one, a new period of 30 seconds starts; if period is zero and last time interval is over then game ends.", nullptr));
#endif // QT_CONFIG(whatsthis)
        TextLabel_Byo->setText(QCoreApplication::translate("NormalTools", "Byo:", nullptr));
        byoyomi->setText(QCoreApplication::translate("NormalTools", "0", nullptr));
        label_5->setText(QCoreApplication::translate("NormalTools", "Analysis", nullptr));
        anStartButton->setText(QCoreApplication::translate("NormalTools", "...", nullptr));
        anPauseButton->setText(QCoreApplication::translate("NormalTools", "...", nullptr));
#if QT_CONFIG(tooltip)
        anHideButton->setToolTip(QCoreApplication::translate("NormalTools", "Click to hide/show evaluation marks on the board.", nullptr));
#endif // QT_CONFIG(tooltip)
        anHideButton->setText(QCoreApplication::translate("NormalTools", "...", nullptr));
        anPrimaryBox->setTitle(QCoreApplication::translate("NormalTools", "Primary move", nullptr));
        label_9->setText(QCoreApplication::translate("NormalTools", "Visits:", nullptr));
        primaryVisits->setText(QString());
        primaryWR->setText(QString());
        anShownBox->setTitle(QCoreApplication::translate("NormalTools", "Highlighted move", nullptr));
        label_10->setText(QCoreApplication::translate("NormalTools", "Visits:", nullptr));
        shownVisits->setText(QString());
        shownWR->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NormalTools: public Ui_NormalTools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMALTOOLS_GUI_H
