/********************************************************************************
** Form generated from reading UI file 'talk_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TALK_GUI_H
#define UI_TALK_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TalkGui
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLineEdit *LineEdit1;
    QPushButton *pb_match;
    QPushButton *pb_releaseTalkTab;
    QTextEdit *MultiLineEdit1;
    QFrame *stats_layout;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout1;
    QGridLayout *gridLayout2;
    QLabel *stats_rating;
    QLabel *stats_idle;
    QLabel *Label_Idle;
    QLabel *textLabel1;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel1_2;
    QLabel *stats_rated;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel1_2_2_2;
    QLabel *stats_country;
    QHBoxLayout *hboxLayout4;
    QHBoxLayout *hboxLayout5;
    QLabel *textLabel1_3;
    QLabel *stats_wins;
    QHBoxLayout *hboxLayout6;
    QLabel *textLabel1_3_2;
    QLabel *stats_loss;
    QHBoxLayout *hboxLayout7;
    QLabel *textLabel1_2_2_2_2_2;
    QLabel *stats_playing;
    QHBoxLayout *hboxLayout8;
    QLabel *textLabel1_2_2;
    QLineEdit *stats_address;
    QLabel *stats_info;
    QLabel *stats_default;

    void setupUi(QDialog *TalkGui)
    {
        if (TalkGui->objectName().isEmpty())
            TalkGui->setObjectName(QString::fromUtf8("TalkGui"));
        TalkGui->resize(259, 218);
        gridLayout = new QGridLayout(TalkGui);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        LineEdit1 = new QLineEdit(TalkGui);
        LineEdit1->setObjectName(QString::fromUtf8("LineEdit1"));

        hboxLayout->addWidget(LineEdit1);

        pb_match = new QPushButton(TalkGui);
        pb_match->setObjectName(QString::fromUtf8("pb_match"));
        pb_match->setMaximumSize(QSize(28, 28));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/TalkGui/images/talk/image0.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_match->setIcon(icon);

        hboxLayout->addWidget(pb_match);

        pb_releaseTalkTab = new QPushButton(TalkGui);
        pb_releaseTalkTab->setObjectName(QString::fromUtf8("pb_releaseTalkTab"));
        pb_releaseTalkTab->setMaximumSize(QSize(28, 28));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/TalkGui/images/talk/image1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_releaseTalkTab->setIcon(icon1);

        hboxLayout->addWidget(pb_releaseTalkTab);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        MultiLineEdit1 = new QTextEdit(TalkGui);
        MultiLineEdit1->setObjectName(QString::fromUtf8("MultiLineEdit1"));
        MultiLineEdit1->setReadOnly(true);
        MultiLineEdit1->setAcceptRichText(false);

        gridLayout->addWidget(MultiLineEdit1, 1, 0, 1, 1);

        stats_layout = new QFrame(TalkGui);
        stats_layout->setObjectName(QString::fromUtf8("stats_layout"));
        stats_layout->setFrameShape(QFrame::StyledPanel);
        stats_layout->setFrameShadow(QFrame::Raised);
        stats_layout->setLineWidth(0);
        gridLayout1 = new QGridLayout(stats_layout);
        gridLayout1->setSpacing(0);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(0);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(0);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        stats_rating = new QLabel(stats_layout);
        stats_rating->setObjectName(QString::fromUtf8("stats_rating"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stats_rating->sizePolicy().hasHeightForWidth());
        stats_rating->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        stats_rating->setFont(font);
        stats_rating->setAlignment(Qt::AlignCenter);
        stats_rating->setWordWrap(false);

        gridLayout2->addWidget(stats_rating, 0, 2, 1, 1);

        stats_idle = new QLabel(stats_layout);
        stats_idle->setObjectName(QString::fromUtf8("stats_idle"));
        sizePolicy.setHeightForWidth(stats_idle->sizePolicy().hasHeightForWidth());
        stats_idle->setSizePolicy(sizePolicy);
        stats_idle->setFont(font);
        stats_idle->setAlignment(Qt::AlignCenter);
        stats_idle->setWordWrap(false);

        gridLayout2->addWidget(stats_idle, 2, 1, 1, 2);

        Label_Idle = new QLabel(stats_layout);
        Label_Idle->setObjectName(QString::fromUtf8("Label_Idle"));
        Label_Idle->setMinimumSize(QSize(80, 0));
        Label_Idle->setWordWrap(false);

        gridLayout2->addWidget(Label_Idle, 2, 0, 1, 1);

        textLabel1 = new QLabel(stats_layout);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setMinimumSize(QSize(80, 0));
        textLabel1->setMaximumSize(QSize(80, 32767));
        textLabel1->setWordWrap(false);

        gridLayout2->addWidget(textLabel1, 0, 0, 1, 2);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(0);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        textLabel1_2 = new QLabel(stats_layout);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setMinimumSize(QSize(80, 0));
        textLabel1_2->setWordWrap(false);

        hboxLayout2->addWidget(textLabel1_2);

        stats_rated = new QLabel(stats_layout);
        stats_rated->setObjectName(QString::fromUtf8("stats_rated"));
        sizePolicy.setHeightForWidth(stats_rated->sizePolicy().hasHeightForWidth());
        stats_rated->setSizePolicy(sizePolicy);
        stats_rated->setFont(font);
        stats_rated->setAlignment(Qt::AlignCenter);
        stats_rated->setWordWrap(false);

        hboxLayout2->addWidget(stats_rated);


        gridLayout2->addLayout(hboxLayout2, 1, 0, 1, 3);


        hboxLayout1->addLayout(gridLayout2);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(0);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        textLabel1_2_2_2 = new QLabel(stats_layout);
        textLabel1_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2"));
        textLabel1_2_2_2->setWordWrap(false);

        hboxLayout3->addWidget(textLabel1_2_2_2);

        stats_country = new QLabel(stats_layout);
        stats_country->setObjectName(QString::fromUtf8("stats_country"));
        sizePolicy.setHeightForWidth(stats_country->sizePolicy().hasHeightForWidth());
        stats_country->setSizePolicy(sizePolicy);
        stats_country->setFont(font);
        stats_country->setAlignment(Qt::AlignCenter);
        stats_country->setWordWrap(false);

        hboxLayout3->addWidget(stats_country);


        vboxLayout->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(0);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        textLabel1_3 = new QLabel(stats_layout);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        textLabel1_3->setWordWrap(false);

        hboxLayout5->addWidget(textLabel1_3);

        stats_wins = new QLabel(stats_layout);
        stats_wins->setObjectName(QString::fromUtf8("stats_wins"));
        stats_wins->setFont(font);
        stats_wins->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        stats_wins->setWordWrap(false);

        hboxLayout5->addWidget(stats_wins);


        hboxLayout4->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(6);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        textLabel1_3_2 = new QLabel(stats_layout);
        textLabel1_3_2->setObjectName(QString::fromUtf8("textLabel1_3_2"));
        textLabel1_3_2->setWordWrap(false);

        hboxLayout6->addWidget(textLabel1_3_2);

        stats_loss = new QLabel(stats_layout);
        stats_loss->setObjectName(QString::fromUtf8("stats_loss"));
        stats_loss->setFont(font);
        stats_loss->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        stats_loss->setWordWrap(false);

        hboxLayout6->addWidget(stats_loss);


        hboxLayout4->addLayout(hboxLayout6);


        vboxLayout->addLayout(hboxLayout4);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(0);
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        textLabel1_2_2_2_2_2 = new QLabel(stats_layout);
        textLabel1_2_2_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_2"));
        textLabel1_2_2_2_2_2->setWordWrap(false);

        hboxLayout7->addWidget(textLabel1_2_2_2_2_2);

        stats_playing = new QLabel(stats_layout);
        stats_playing->setObjectName(QString::fromUtf8("stats_playing"));
        stats_playing->setFont(font);
        stats_playing->setWordWrap(false);

        hboxLayout7->addWidget(stats_playing);


        vboxLayout->addLayout(hboxLayout7);


        hboxLayout1->addLayout(vboxLayout);


        gridLayout1->addLayout(hboxLayout1, 0, 0, 1, 1);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(6);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        textLabel1_2_2 = new QLabel(stats_layout);
        textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));
        textLabel1_2_2->setMinimumSize(QSize(92, 0));
        textLabel1_2_2->setWordWrap(false);

        hboxLayout8->addWidget(textLabel1_2_2);

        stats_address = new QLineEdit(stats_layout);
        stats_address->setObjectName(QString::fromUtf8("stats_address"));
        stats_address->setFont(font);
        stats_address->setFrame(false);
        stats_address->setReadOnly(true);

        hboxLayout8->addWidget(stats_address);


        gridLayout1->addLayout(hboxLayout8, 1, 0, 1, 1);

        stats_info = new QLabel(stats_layout);
        stats_info->setObjectName(QString::fromUtf8("stats_info"));
        stats_info->setWordWrap(false);

        gridLayout1->addWidget(stats_info, 3, 0, 1, 1);

        stats_default = new QLabel(stats_layout);
        stats_default->setObjectName(QString::fromUtf8("stats_default"));
        stats_default->setWordWrap(false);

        gridLayout1->addWidget(stats_default, 2, 0, 1, 1);


        gridLayout->addWidget(stats_layout, 0, 0, 1, 1);


        retranslateUi(TalkGui);

        QMetaObject::connectSlotsByName(TalkGui);
    } // setupUi

    void retranslateUi(QDialog *TalkGui)
    {
        TalkGui->setWindowTitle(QCoreApplication::translate("TalkGui", "Form1", nullptr));
#if QT_CONFIG(tooltip)
        TalkGui->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        TalkGui->setWhatsThis(QCoreApplication::translate("TalkGui", "dialog\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"in this box you see the conversation with the player whose name appears on the tab label", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        pb_match->setToolTip(QCoreApplication::translate("TalkGui", "match", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pb_match->setWhatsThis(QCoreApplication::translate("TalkGui", "match\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"proposes a match to this player", nullptr));
#endif // QT_CONFIG(whatsthis)
        pb_match->setText(QString());
#if QT_CONFIG(tooltip)
        pb_releaseTalkTab->setToolTip(QCoreApplication::translate("TalkGui", "close", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pb_releaseTalkTab->setWhatsThis(QCoreApplication::translate("TalkGui", "close\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"closes the tab (and dialog)", nullptr));
#endif // QT_CONFIG(whatsthis)
        pb_releaseTalkTab->setText(QString());
#if QT_CONFIG(tooltip)
        MultiLineEdit1->setToolTip(QCoreApplication::translate("TalkGui", "dialog with this player", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        MultiLineEdit1->setWhatsThis(QCoreApplication::translate("TalkGui", "dialog\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"in this box you see the conversation with the player whose name appears on the tab label", nullptr));
#endif // QT_CONFIG(whatsthis)
        stats_rating->setText(QCoreApplication::translate("TalkGui", "--", nullptr));
        stats_idle->setText(QCoreApplication::translate("TalkGui", "--", nullptr));
        Label_Idle->setText(QCoreApplication::translate("TalkGui", "Idle :", nullptr));
        textLabel1->setText(QCoreApplication::translate("TalkGui", "Rating :", nullptr));
        textLabel1_2->setText(QCoreApplication::translate("TalkGui", "Rated games :", nullptr));
        stats_rated->setText(QCoreApplication::translate("TalkGui", "--", nullptr));
        textLabel1_2_2_2->setText(QCoreApplication::translate("TalkGui", "Country :", nullptr));
        stats_country->setText(QCoreApplication::translate("TalkGui", "--", nullptr));
        textLabel1_3->setText(QCoreApplication::translate("TalkGui", "Wins :", nullptr));
        stats_wins->setText(QCoreApplication::translate("TalkGui", "--", nullptr));
        textLabel1_3_2->setText(QCoreApplication::translate("TalkGui", "Loss :", nullptr));
        stats_loss->setText(QCoreApplication::translate("TalkGui", "--", nullptr));
        textLabel1_2_2_2_2_2->setText(QCoreApplication::translate("TalkGui", "playing game :", nullptr));
        stats_playing->setText(QCoreApplication::translate("TalkGui", "--", nullptr));
        textLabel1_2_2->setText(QCoreApplication::translate("TalkGui", "Address :", nullptr));
        stats_address->setText(QCoreApplication::translate("TalkGui", "--", nullptr));
        stats_info->setText(QCoreApplication::translate("TalkGui", "--", nullptr));
        stats_default->setText(QCoreApplication::translate("TalkGui", "--", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TalkGui: public Ui_TalkGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALK_GUI_H
