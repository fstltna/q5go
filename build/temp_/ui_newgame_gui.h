/********************************************************************************
** Form generated from reading UI file 'newgame_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGAME_GUI_H
#define UI_NEWGAME_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include "komispinbox.h"

QT_BEGIN_NAMESPACE

class Ui_NewGameDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *dividerline_1;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QSpacerItem *Horizontal_Spacing2;
    QPushButton *buttonDecline;
    QPushButton *buttonOffer;
    QPushButton *buttonCancel;
    QFrame *Frame13;
    QGridLayout *gridLayout1;
    QLabel *TextLabel2;
    QLineEdit *playerOpponentRkEdit;
    QGroupBox *buttonGroup1;
    QGridLayout *gridLayout2;
    QRadioButton *play_nigiri_button;
    QRadioButton *play_white_button;
    QRadioButton *play_black_button;
    QLabel *warn_side;
    QSpacerItem *spacer3;
    QLineEdit *playerOpponentEdit;
    QPushButton *pb_stats;
    QPushButton *pb_suggest;
    QFrame *Frame14_2;
    QGridLayout *gridLayout_3;
    QLabel *warn_size;
    QLabel *warn_rated;
    QSpinBox *boardSizeSpin;
    QLabel *TextLabel3;
    QLabel *TextLabel4;
    QLabel *warn_komi;
    KomiSpinBox *komiSpin;
    QLabel *TextLabel5;
    QLabel *warn_hc;
    QSpinBox *handicapSpin;
    QLabel *TextLabel6;
    QLabel *warn_time;
    QSpinBox *timeSpin;
    QLabel *BY_label;
    QLabel *warn_byo;
    QSpinBox *byoTimeSpin;
    QLabel *TextLabel8;
    QComboBox *ComboBox_free;
    QFrame *dividerline_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *NewGameDialog)
    {
        if (NewGameDialog->objectName().isEmpty())
            NewGameDialog->setObjectName(QString::fromUtf8("NewGameDialog"));
        NewGameDialog->resize(287, 385);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewGameDialog->sizePolicy().hasHeightForWidth());
        NewGameDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(NewGameDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        dividerline_1 = new QFrame(NewGameDialog);
        dividerline_1->setObjectName(QString::fromUtf8("dividerline_1"));
        dividerline_1->setFrameShape(QFrame::HLine);
        dividerline_1->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(dividerline_1, 1, 0, 1, 1);

        frame = new QFrame(NewGameDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(-1, 0, -1, -1);
        Horizontal_Spacing2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(Horizontal_Spacing2);

        buttonDecline = new QPushButton(frame);
        buttonDecline->setObjectName(QString::fromUtf8("buttonDecline"));

        hboxLayout->addWidget(buttonDecline);

        buttonOffer = new QPushButton(frame);
        buttonOffer->setObjectName(QString::fromUtf8("buttonOffer"));
        buttonOffer->setCheckable(true);
        buttonOffer->setAutoDefault(true);

        hboxLayout->addWidget(buttonOffer);

        buttonCancel = new QPushButton(frame);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout->addWidget(buttonCancel);


        gridLayout->addWidget(frame, 7, 0, 1, 1);

        Frame13 = new QFrame(NewGameDialog);
        Frame13->setObjectName(QString::fromUtf8("Frame13"));
        Frame13->setFrameShape(QFrame::NoFrame);
        Frame13->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(Frame13);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(-1, -1, -1, 0);
        TextLabel2 = new QLabel(Frame13);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        TextLabel2->setMaximumSize(QSize(90, 32767));
        TextLabel2->setWordWrap(false);

        gridLayout1->addWidget(TextLabel2, 0, 0, 1, 1);

        playerOpponentRkEdit = new QLineEdit(Frame13);
        playerOpponentRkEdit->setObjectName(QString::fromUtf8("playerOpponentRkEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(playerOpponentRkEdit->sizePolicy().hasHeightForWidth());
        playerOpponentRkEdit->setSizePolicy(sizePolicy1);
        playerOpponentRkEdit->setMaximumSize(QSize(40, 32767));
        playerOpponentRkEdit->setReadOnly(true);

        gridLayout1->addWidget(playerOpponentRkEdit, 0, 3, 1, 1);

        buttonGroup1 = new QGroupBox(Frame13);
        buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
        buttonGroup1->setFlat(true);
        buttonGroup1->setCheckable(false);
        gridLayout2 = new QGridLayout(buttonGroup1);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        play_nigiri_button = new QRadioButton(buttonGroup1);
        play_nigiri_button->setObjectName(QString::fromUtf8("play_nigiri_button"));

        gridLayout2->addWidget(play_nigiri_button, 0, 3, 1, 1);

        play_white_button = new QRadioButton(buttonGroup1);
        play_white_button->setObjectName(QString::fromUtf8("play_white_button"));

        gridLayout2->addWidget(play_white_button, 0, 2, 1, 1);

        play_black_button = new QRadioButton(buttonGroup1);
        play_black_button->setObjectName(QString::fromUtf8("play_black_button"));
        play_black_button->setChecked(true);

        gridLayout2->addWidget(play_black_button, 0, 1, 1, 1);

        warn_side = new QLabel(buttonGroup1);
        warn_side->setObjectName(QString::fromUtf8("warn_side"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(warn_side->sizePolicy().hasHeightForWidth());
        warn_side->setSizePolicy(sizePolicy2);
        warn_side->setPixmap(QPixmap(QString::fromUtf8(":/images/warn-tri22.png")));
        warn_side->setScaledContents(false);

        gridLayout2->addWidget(warn_side, 0, 0, 1, 1);


        gridLayout1->addWidget(buttonGroup1, 2, 0, 1, 4);

        spacer3 = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacer3, 1, 1, 1, 1);

        playerOpponentEdit = new QLineEdit(Frame13);
        playerOpponentEdit->setObjectName(QString::fromUtf8("playerOpponentEdit"));
        playerOpponentEdit->setReadOnly(true);

        gridLayout1->addWidget(playerOpponentEdit, 0, 1, 1, 2);

        pb_stats = new QPushButton(Frame13);
        pb_stats->setObjectName(QString::fromUtf8("pb_stats"));

        gridLayout1->addWidget(pb_stats, 1, 0, 1, 1);

        pb_suggest = new QPushButton(Frame13);
        pb_suggest->setObjectName(QString::fromUtf8("pb_suggest"));

        gridLayout1->addWidget(pb_suggest, 1, 2, 1, 2);


        gridLayout->addWidget(Frame13, 0, 0, 1, 1);

        Frame14_2 = new QFrame(NewGameDialog);
        Frame14_2->setObjectName(QString::fromUtf8("Frame14_2"));
        Frame14_2->setFrameShape(QFrame::NoFrame);
        Frame14_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(Frame14_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, 0, -1, 0);
        warn_size = new QLabel(Frame14_2);
        warn_size->setObjectName(QString::fromUtf8("warn_size"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(warn_size->sizePolicy().hasHeightForWidth());
        warn_size->setSizePolicy(sizePolicy3);
        warn_size->setPixmap(QPixmap(QString::fromUtf8(":/images/warn-tri22.png")));

        gridLayout_3->addWidget(warn_size, 0, 1, 1, 1);

        warn_rated = new QLabel(Frame14_2);
        warn_rated->setObjectName(QString::fromUtf8("warn_rated"));
        sizePolicy3.setHeightForWidth(warn_rated->sizePolicy().hasHeightForWidth());
        warn_rated->setSizePolicy(sizePolicy3);
        warn_rated->setPixmap(QPixmap(QString::fromUtf8(":/images/warn-tri22.png")));

        gridLayout_3->addWidget(warn_rated, 6, 1, 1, 1);

        boardSizeSpin = new QSpinBox(Frame14_2);
        boardSizeSpin->setObjectName(QString::fromUtf8("boardSizeSpin"));
        boardSizeSpin->setMaximumSize(QSize(60, 32767));
        boardSizeSpin->setMinimum(4);
        boardSizeSpin->setMaximum(36);
        boardSizeSpin->setValue(19);

        gridLayout_3->addWidget(boardSizeSpin, 0, 3, 1, 1);

        TextLabel3 = new QLabel(Frame14_2);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(TextLabel3->sizePolicy().hasHeightForWidth());
        TextLabel3->setSizePolicy(sizePolicy4);
        TextLabel3->setWordWrap(false);

        gridLayout_3->addWidget(TextLabel3, 0, 0, 1, 1);

        TextLabel4 = new QLabel(Frame14_2);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(TextLabel4->sizePolicy().hasHeightForWidth());
        TextLabel4->setSizePolicy(sizePolicy5);
        TextLabel4->setWordWrap(false);

        gridLayout_3->addWidget(TextLabel4, 1, 0, 1, 1);

        warn_komi = new QLabel(Frame14_2);
        warn_komi->setObjectName(QString::fromUtf8("warn_komi"));
        sizePolicy3.setHeightForWidth(warn_komi->sizePolicy().hasHeightForWidth());
        warn_komi->setSizePolicy(sizePolicy3);
        warn_komi->setPixmap(QPixmap(QString::fromUtf8(":/images/warn-tri22.png")));

        gridLayout_3->addWidget(warn_komi, 1, 1, 1, 1);

        komiSpin = new KomiSpinBox(Frame14_2);
        komiSpin->setObjectName(QString::fromUtf8("komiSpin"));
        komiSpin->setMaximumSize(QSize(60, 32767));
        komiSpin->setDecimals(1);

        gridLayout_3->addWidget(komiSpin, 1, 3, 1, 1);

        TextLabel5 = new QLabel(Frame14_2);
        TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
        TextLabel5->setWordWrap(false);

        gridLayout_3->addWidget(TextLabel5, 2, 0, 1, 1);

        warn_hc = new QLabel(Frame14_2);
        warn_hc->setObjectName(QString::fromUtf8("warn_hc"));
        sizePolicy3.setHeightForWidth(warn_hc->sizePolicy().hasHeightForWidth());
        warn_hc->setSizePolicy(sizePolicy3);
        warn_hc->setPixmap(QPixmap(QString::fromUtf8(":/images/warn-tri22.png")));

        gridLayout_3->addWidget(warn_hc, 2, 1, 1, 1);

        handicapSpin = new QSpinBox(Frame14_2);
        handicapSpin->setObjectName(QString::fromUtf8("handicapSpin"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(handicapSpin->sizePolicy().hasHeightForWidth());
        handicapSpin->setSizePolicy(sizePolicy6);
        handicapSpin->setMaximumSize(QSize(60, 32767));
        handicapSpin->setMaximum(13);

        gridLayout_3->addWidget(handicapSpin, 2, 3, 1, 1);

        TextLabel6 = new QLabel(Frame14_2);
        TextLabel6->setObjectName(QString::fromUtf8("TextLabel6"));
        TextLabel6->setWordWrap(false);

        gridLayout_3->addWidget(TextLabel6, 3, 0, 1, 1);

        warn_time = new QLabel(Frame14_2);
        warn_time->setObjectName(QString::fromUtf8("warn_time"));
        sizePolicy3.setHeightForWidth(warn_time->sizePolicy().hasHeightForWidth());
        warn_time->setSizePolicy(sizePolicy3);
        warn_time->setPixmap(QPixmap(QString::fromUtf8(":/images/warn-tri22.png")));

        gridLayout_3->addWidget(warn_time, 3, 1, 1, 1);

        timeSpin = new QSpinBox(Frame14_2);
        timeSpin->setObjectName(QString::fromUtf8("timeSpin"));
        sizePolicy6.setHeightForWidth(timeSpin->sizePolicy().hasHeightForWidth());
        timeSpin->setSizePolicy(sizePolicy6);
        timeSpin->setMaximumSize(QSize(60, 32767));
        timeSpin->setValue(10);

        gridLayout_3->addWidget(timeSpin, 3, 3, 1, 1);

        BY_label = new QLabel(Frame14_2);
        BY_label->setObjectName(QString::fromUtf8("BY_label"));
        BY_label->setWordWrap(false);

        gridLayout_3->addWidget(BY_label, 5, 0, 1, 1);

        warn_byo = new QLabel(Frame14_2);
        warn_byo->setObjectName(QString::fromUtf8("warn_byo"));
        sizePolicy3.setHeightForWidth(warn_byo->sizePolicy().hasHeightForWidth());
        warn_byo->setSizePolicy(sizePolicy3);
        warn_byo->setPixmap(QPixmap(QString::fromUtf8(":/images/warn-tri22.png")));

        gridLayout_3->addWidget(warn_byo, 5, 1, 1, 1);

        byoTimeSpin = new QSpinBox(Frame14_2);
        byoTimeSpin->setObjectName(QString::fromUtf8("byoTimeSpin"));
        byoTimeSpin->setMaximumSize(QSize(60, 32767));
        byoTimeSpin->setValue(10);

        gridLayout_3->addWidget(byoTimeSpin, 5, 3, 1, 1);

        TextLabel8 = new QLabel(Frame14_2);
        TextLabel8->setObjectName(QString::fromUtf8("TextLabel8"));
        TextLabel8->setWordWrap(false);

        gridLayout_3->addWidget(TextLabel8, 6, 0, 1, 1);

        ComboBox_free = new QComboBox(Frame14_2);
        ComboBox_free->addItem(QString());
        ComboBox_free->addItem(QString());
        ComboBox_free->setObjectName(QString::fromUtf8("ComboBox_free"));
        ComboBox_free->setMaximumSize(QSize(60, 32767));

        gridLayout_3->addWidget(ComboBox_free, 6, 3, 1, 1);


        gridLayout->addWidget(Frame14_2, 4, 0, 1, 1);

        dividerline_2 = new QFrame(NewGameDialog);
        dividerline_2->setObjectName(QString::fromUtf8("dividerline_2"));
        dividerline_2->setFrameShape(QFrame::HLine);
        dividerline_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(dividerline_2, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        QWidget::setTabOrder(playerOpponentEdit, playerOpponentRkEdit);
        QWidget::setTabOrder(playerOpponentRkEdit, pb_stats);
        QWidget::setTabOrder(pb_stats, pb_suggest);
        QWidget::setTabOrder(pb_suggest, play_black_button);
        QWidget::setTabOrder(play_black_button, play_white_button);
        QWidget::setTabOrder(play_white_button, play_nigiri_button);
        QWidget::setTabOrder(play_nigiri_button, boardSizeSpin);
        QWidget::setTabOrder(boardSizeSpin, komiSpin);
        QWidget::setTabOrder(komiSpin, handicapSpin);
        QWidget::setTabOrder(handicapSpin, timeSpin);
        QWidget::setTabOrder(timeSpin, byoTimeSpin);
        QWidget::setTabOrder(byoTimeSpin, ComboBox_free);
        QWidget::setTabOrder(ComboBox_free, buttonDecline);
        QWidget::setTabOrder(buttonDecline, buttonOffer);
        QWidget::setTabOrder(buttonOffer, buttonCancel);

        retranslateUi(NewGameDialog);

        buttonOffer->setDefault(false);


        QMetaObject::connectSlotsByName(NewGameDialog);
    } // setupUi

    void retranslateUi(QDialog *NewGameDialog)
    {
        NewGameDialog->setWindowTitle(QCoreApplication::translate("NewGameDialog", "New Game", nullptr));
        buttonDecline->setText(QCoreApplication::translate("NewGameDialog", "&Decline", nullptr));
        buttonOffer->setText(QCoreApplication::translate("NewGameDialog", "&Offer", nullptr));
#if QT_CONFIG(shortcut)
        buttonOffer->setShortcut(QCoreApplication::translate("NewGameDialog", "Alt+O", nullptr));
#endif // QT_CONFIG(shortcut)
        buttonCancel->setText(QCoreApplication::translate("NewGameDialog", "&Cancel", nullptr));
        TextLabel2->setText(QCoreApplication::translate("NewGameDialog", "Game against :", nullptr));
        buttonGroup1->setTitle(QCoreApplication::translate("NewGameDialog", "You play", nullptr));
        play_nigiri_button->setText(QCoreApplication::translate("NewGameDialog", "Nigiri", nullptr));
        play_white_button->setText(QCoreApplication::translate("NewGameDialog", "White", nullptr));
        play_black_button->setText(QCoreApplication::translate("NewGameDialog", "Black", nullptr));
        warn_side->setText(QString());
        playerOpponentEdit->setText(QCoreApplication::translate("NewGameDialog", "Opponent", nullptr));
#if QT_CONFIG(tooltip)
        pb_stats->setToolTip(QCoreApplication::translate("NewGameDialog", "query the other players stats", nullptr));
#endif // QT_CONFIG(tooltip)
        pb_stats->setText(QCoreApplication::translate("NewGameDialog", "S&tats", nullptr));
#if QT_CONFIG(shortcut)
        pb_stats->setShortcut(QCoreApplication::translate("NewGameDialog", "Alt+T", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pb_suggest->setToolTip(QCoreApplication::translate("NewGameDialog", "suggest proper handicap according to players ranks", nullptr));
#endif // QT_CONFIG(tooltip)
        pb_suggest->setText(QCoreApplication::translate("NewGameDialog", "&suggest", nullptr));
#if QT_CONFIG(shortcut)
        pb_suggest->setShortcut(QCoreApplication::translate("NewGameDialog", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        warn_size->setText(QString());
        warn_rated->setText(QString());
        TextLabel3->setText(QCoreApplication::translate("NewGameDialog", "Board size:", nullptr));
        TextLabel4->setText(QCoreApplication::translate("NewGameDialog", "Komi:", nullptr));
        warn_komi->setText(QString());
        TextLabel5->setText(QCoreApplication::translate("NewGameDialog", "Handicap:", nullptr));
        warn_hc->setText(QString());
        TextLabel6->setText(QCoreApplication::translate("NewGameDialog", "Time:", nullptr));
        warn_time->setText(QString());
#if QT_CONFIG(tooltip)
        timeSpin->setToolTip(QCoreApplication::translate("NewGameDialog", "Playing time", nullptr));
#endif // QT_CONFIG(tooltip)
        BY_label->setText(QCoreApplication::translate("NewGameDialog", "Byoyomi Time:", nullptr));
        warn_byo->setText(QString());
#if QT_CONFIG(tooltip)
        byoTimeSpin->setToolTip(QCoreApplication::translate("NewGameDialog", "Additional time for 25 moves; after 25 moves the byoyomi time starts again and again", nullptr));
#endif // QT_CONFIG(tooltip)
        TextLabel8->setText(QCoreApplication::translate("NewGameDialog", "Free game", nullptr));
        ComboBox_free->setItemText(0, QCoreApplication::translate("NewGameDialog", "no", nullptr));
        ComboBox_free->setItemText(1, QCoreApplication::translate("NewGameDialog", "yes", nullptr));

    } // retranslateUi

};

namespace Ui {
    class NewGameDialog: public Ui_NewGameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGAME_GUI_H
