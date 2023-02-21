/********************************************************************************
** Form generated from reading UI file 'scoretools_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORETOOLS_GUI_H
#define UI_SCORETOOLS_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScoreTools
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *scoreTerrButton;
    QRadioButton *scoreAreaButton;
    QFrame *scoreTypeLine;
    QHBoxLayout *horizontalLayout_4;
    QLabel *whiteStoneLabel;
    QLabel *whiteLabel;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *_3;
    QLabel *TextLabel0;
    QLabel *komi;
    QHBoxLayout *_9;
    QLabel *stonesWhiteLabel;
    QLabel *stonesWhite;
    QHBoxLayout *_4;
    QLabel *capturesWhiteLabel;
    QLabel *capturesWhite;
    QHBoxLayout *_5;
    QLabel *TextLabel1;
    QLabel *terrWhite;
    QHBoxLayout *_2;
    QLabel *TextLabel3;
    QLabel *totalWhite;
    QFrame *line;
    QHBoxLayout *horizontalLayout_5;
    QLabel *blackStoneLabel;
    QLabel *blackLabel;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *_10;
    QLabel *stonesBlackLabel;
    QLabel *stonesBlack;
    QHBoxLayout *_7;
    QLabel *capturesBlackLabel;
    QLabel *capturesBlack;
    QHBoxLayout *_6;
    QLabel *TextLabel4;
    QLabel *terrBlack;
    QHBoxLayout *_8;
    QLabel *TextLabel6;
    QLabel *totalBlack;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_5;
    QFrame *line_2;
    QGroupBox *resultGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *result;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ScoreTools)
    {
        if (ScoreTools->objectName().isEmpty())
            ScoreTools->setObjectName(QString::fromUtf8("ScoreTools"));
        ScoreTools->resize(162, 427);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ScoreTools->sizePolicy().hasHeightForWidth());
        ScoreTools->setSizePolicy(sizePolicy);
        ScoreTools->setMinimumSize(QSize(138, 260));
        verticalLayout = new QVBoxLayout(ScoreTools);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        scoreTerrButton = new QRadioButton(ScoreTools);
        scoreTerrButton->setObjectName(QString::fromUtf8("scoreTerrButton"));
        scoreTerrButton->setFocusPolicy(Qt::NoFocus);
        scoreTerrButton->setChecked(true);

        verticalLayout->addWidget(scoreTerrButton);

        scoreAreaButton = new QRadioButton(ScoreTools);
        scoreAreaButton->setObjectName(QString::fromUtf8("scoreAreaButton"));
        scoreAreaButton->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(scoreAreaButton);

        scoreTypeLine = new QFrame(ScoreTools);
        scoreTypeLine->setObjectName(QString::fromUtf8("scoreTypeLine"));
        scoreTypeLine->setFrameShape(QFrame::HLine);
        scoreTypeLine->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(scoreTypeLine);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        whiteStoneLabel = new QLabel(ScoreTools);
        whiteStoneLabel->setObjectName(QString::fromUtf8("whiteStoneLabel"));
        whiteStoneLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/stone_w16.png")));

        horizontalLayout_4->addWidget(whiteStoneLabel);

        whiteLabel = new QLabel(ScoreTools);
        whiteLabel->setObjectName(QString::fromUtf8("whiteLabel"));

        horizontalLayout_4->addWidget(whiteLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        frame = new QFrame(ScoreTools);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(frame);

        _3 = new QHBoxLayout();
        _3->setSpacing(6);
        _3->setObjectName(QString::fromUtf8("_3"));
        _3->setContentsMargins(0, 0, 0, 0);
        TextLabel0 = new QLabel(ScoreTools);
        TextLabel0->setObjectName(QString::fromUtf8("TextLabel0"));
        TextLabel0->setWordWrap(false);

        _3->addWidget(TextLabel0);

        komi = new QLabel(ScoreTools);
        komi->setObjectName(QString::fromUtf8("komi"));
        komi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        komi->setWordWrap(false);

        _3->addWidget(komi);


        verticalLayout->addLayout(_3);

        _9 = new QHBoxLayout();
        _9->setSpacing(6);
        _9->setObjectName(QString::fromUtf8("_9"));
        _9->setContentsMargins(0, 0, 0, 0);
        stonesWhiteLabel = new QLabel(ScoreTools);
        stonesWhiteLabel->setObjectName(QString::fromUtf8("stonesWhiteLabel"));
        stonesWhiteLabel->setWordWrap(false);

        _9->addWidget(stonesWhiteLabel);

        stonesWhite = new QLabel(ScoreTools);
        stonesWhite->setObjectName(QString::fromUtf8("stonesWhite"));
        stonesWhite->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stonesWhite->setWordWrap(false);

        _9->addWidget(stonesWhite);


        verticalLayout->addLayout(_9);

        _4 = new QHBoxLayout();
        _4->setSpacing(6);
        _4->setObjectName(QString::fromUtf8("_4"));
        _4->setContentsMargins(0, 0, 0, 0);
        capturesWhiteLabel = new QLabel(ScoreTools);
        capturesWhiteLabel->setObjectName(QString::fromUtf8("capturesWhiteLabel"));
        capturesWhiteLabel->setWordWrap(false);

        _4->addWidget(capturesWhiteLabel);

        capturesWhite = new QLabel(ScoreTools);
        capturesWhite->setObjectName(QString::fromUtf8("capturesWhite"));
        capturesWhite->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        capturesWhite->setWordWrap(false);

        _4->addWidget(capturesWhite);


        verticalLayout->addLayout(_4);

        _5 = new QHBoxLayout();
        _5->setSpacing(6);
        _5->setObjectName(QString::fromUtf8("_5"));
        _5->setContentsMargins(0, 0, 0, 0);
        TextLabel1 = new QLabel(ScoreTools);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setWordWrap(false);

        _5->addWidget(TextLabel1);

        terrWhite = new QLabel(ScoreTools);
        terrWhite->setObjectName(QString::fromUtf8("terrWhite"));
        terrWhite->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        terrWhite->setWordWrap(false);

        _5->addWidget(terrWhite);


        verticalLayout->addLayout(_5);

        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        TextLabel3 = new QLabel(ScoreTools);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
        TextLabel3->setWordWrap(false);

        _2->addWidget(TextLabel3);

        totalWhite = new QLabel(ScoreTools);
        totalWhite->setObjectName(QString::fromUtf8("totalWhite"));
        totalWhite->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        totalWhite->setWordWrap(false);

        _2->addWidget(totalWhite);


        verticalLayout->addLayout(_2);

        line = new QFrame(ScoreTools);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        blackStoneLabel = new QLabel(ScoreTools);
        blackStoneLabel->setObjectName(QString::fromUtf8("blackStoneLabel"));
        blackStoneLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/stone_b16.png")));

        horizontalLayout_5->addWidget(blackStoneLabel);

        blackLabel = new QLabel(ScoreTools);
        blackLabel->setObjectName(QString::fromUtf8("blackLabel"));

        horizontalLayout_5->addWidget(blackLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        _10 = new QHBoxLayout();
        _10->setSpacing(6);
        _10->setObjectName(QString::fromUtf8("_10"));
        _10->setContentsMargins(0, 0, 0, 0);
        stonesBlackLabel = new QLabel(ScoreTools);
        stonesBlackLabel->setObjectName(QString::fromUtf8("stonesBlackLabel"));
        stonesBlackLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        stonesBlackLabel->setWordWrap(false);

        _10->addWidget(stonesBlackLabel);

        stonesBlack = new QLabel(ScoreTools);
        stonesBlack->setObjectName(QString::fromUtf8("stonesBlack"));
        stonesBlack->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stonesBlack->setWordWrap(false);

        _10->addWidget(stonesBlack);


        verticalLayout->addLayout(_10);

        _7 = new QHBoxLayout();
        _7->setSpacing(6);
        _7->setObjectName(QString::fromUtf8("_7"));
        _7->setContentsMargins(0, 0, 0, 0);
        capturesBlackLabel = new QLabel(ScoreTools);
        capturesBlackLabel->setObjectName(QString::fromUtf8("capturesBlackLabel"));
        capturesBlackLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        capturesBlackLabel->setWordWrap(false);

        _7->addWidget(capturesBlackLabel);

        capturesBlack = new QLabel(ScoreTools);
        capturesBlack->setObjectName(QString::fromUtf8("capturesBlack"));
        capturesBlack->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        capturesBlack->setWordWrap(false);

        _7->addWidget(capturesBlack);


        verticalLayout->addLayout(_7);

        _6 = new QHBoxLayout();
        _6->setSpacing(6);
        _6->setObjectName(QString::fromUtf8("_6"));
        _6->setContentsMargins(0, 0, 0, 0);
        TextLabel4 = new QLabel(ScoreTools);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        TextLabel4->setWordWrap(false);

        _6->addWidget(TextLabel4);

        terrBlack = new QLabel(ScoreTools);
        terrBlack->setObjectName(QString::fromUtf8("terrBlack"));
        terrBlack->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        terrBlack->setWordWrap(false);

        _6->addWidget(terrBlack);


        verticalLayout->addLayout(_6);

        _8 = new QHBoxLayout();
        _8->setSpacing(6);
        _8->setObjectName(QString::fromUtf8("_8"));
        _8->setContentsMargins(0, 0, 0, 0);
        TextLabel6 = new QLabel(ScoreTools);
        TextLabel6->setObjectName(QString::fromUtf8("TextLabel6"));
        TextLabel6->setWordWrap(false);

        _8->addWidget(TextLabel6);

        totalBlack = new QLabel(ScoreTools);
        totalBlack->setObjectName(QString::fromUtf8("totalBlack"));
        totalBlack->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        totalBlack->setWordWrap(false);

        _8->addWidget(totalBlack);


        verticalLayout->addLayout(_8);

        frame_2 = new QFrame(ScoreTools);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(frame_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(frame_2);

        line_2 = new QFrame(ScoreTools);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        resultGroupBox = new QGroupBox(ScoreTools);
        resultGroupBox->setObjectName(QString::fromUtf8("resultGroupBox"));
        resultGroupBox->setCheckable(false);
        horizontalLayout = new QHBoxLayout(resultGroupBox);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        result = new QLabel(resultGroupBox);
        result->setObjectName(QString::fromUtf8("result"));

        horizontalLayout->addWidget(result);


        verticalLayout->addWidget(resultGroupBox);

        verticalSpacer = new QSpacerItem(20, 93, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ScoreTools);

        QMetaObject::connectSlotsByName(ScoreTools);
    } // setupUi

    void retranslateUi(QWidget *ScoreTools)
    {
        ScoreTools->setWindowTitle(QCoreApplication::translate("ScoreTools", "Form", nullptr));
        scoreTerrButton->setText(QCoreApplication::translate("ScoreTools", "Territory scoring", nullptr));
        scoreAreaButton->setText(QCoreApplication::translate("ScoreTools", "Area scoring", nullptr));
        whiteStoneLabel->setText(QString());
        whiteLabel->setText(QCoreApplication::translate("ScoreTools", "White", nullptr));
        TextLabel0->setText(QCoreApplication::translate("ScoreTools", "Komi:", nullptr));
        komi->setText(QCoreApplication::translate("ScoreTools", "0", nullptr));
        stonesWhiteLabel->setText(QCoreApplication::translate("ScoreTools", "Stones:", nullptr));
        stonesWhite->setText(QCoreApplication::translate("ScoreTools", "0", nullptr));
        capturesWhiteLabel->setText(QCoreApplication::translate("ScoreTools", "Cap:", nullptr));
        capturesWhite->setText(QCoreApplication::translate("ScoreTools", "0", nullptr));
        TextLabel1->setText(QCoreApplication::translate("ScoreTools", "Terr.:", nullptr));
        terrWhite->setText(QCoreApplication::translate("ScoreTools", "0", nullptr));
        TextLabel3->setText(QCoreApplication::translate("ScoreTools", "Total:", nullptr));
        totalWhite->setText(QCoreApplication::translate("ScoreTools", "0", nullptr));
        blackStoneLabel->setText(QString());
        blackLabel->setText(QCoreApplication::translate("ScoreTools", "Black", nullptr));
        stonesBlackLabel->setText(QCoreApplication::translate("ScoreTools", "Stones:", nullptr));
        stonesBlack->setText(QCoreApplication::translate("ScoreTools", "0", nullptr));
        capturesBlackLabel->setText(QCoreApplication::translate("ScoreTools", "Cap:", nullptr));
        capturesBlack->setText(QCoreApplication::translate("ScoreTools", "0", nullptr));
        TextLabel4->setText(QCoreApplication::translate("ScoreTools", "Terr.:", nullptr));
        terrBlack->setText(QCoreApplication::translate("ScoreTools", "0", nullptr));
        TextLabel6->setText(QCoreApplication::translate("ScoreTools", "Total:", nullptr));
        totalBlack->setText(QCoreApplication::translate("ScoreTools", "0", nullptr));
        resultGroupBox->setTitle(QCoreApplication::translate("ScoreTools", "Result", nullptr));
        result->setText(QCoreApplication::translate("ScoreTools", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScoreTools: public Ui_ScoreTools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORETOOLS_GUI_H
