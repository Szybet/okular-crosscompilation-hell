#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'welcomescreen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMESCREEN_H
#define UI_WELCOMESCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeScreen
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_5;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QLabel *appIcon;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *openButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *recentsArea;
    QVBoxLayout *verticalLayout_3;
    QWidget *horizontalWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QToolButton *forgetAllButton;
    QListView *recentsListView;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *closeButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QWidget *WelcomeScreen)
    {
        if (WelcomeScreen->objectName().isEmpty())
            WelcomeScreen->setObjectName(QString::fromUtf8("WelcomeScreen"));
        WelcomeScreen->resize(1423, 850);
        WelcomeScreen->setAcceptDrops(true);
        gridLayout = new QGridLayout(WelcomeScreen);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_8 = new QSpacerItem(48, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 1, 0, 3, 1);

        verticalSpacer_5 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_5, 0, 1, 1, 1);

        horizontalWidget = new QWidget(WelcomeScreen);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy);
        horizontalWidget->setMinimumSize(QSize(0, 256));
        horizontalWidget->setMaximumSize(QSize(700, 16777215));
        horizontalLayout_2 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalFrame = new QFrame(horizontalWidget);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalFrame->sizePolicy().hasHeightForWidth());
        verticalFrame->setSizePolicy(sizePolicy1);
        verticalFrame->setMaximumSize(QSize(192, 16777215));
        verticalFrame->setFrameShape(QFrame::NoFrame);
        verticalLayout_5 = new QVBoxLayout(verticalFrame);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        label->setMargin(0);

        verticalLayout_5->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(12, 12, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        appIcon = new QLabel(verticalFrame);
        appIcon->setObjectName(QString::fromUtf8("appIcon"));
        appIcon->setText(QString::fromUtf8(""));
        appIcon->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(appIcon);

        verticalSpacer_3 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalSpacer = new QSpacerItem(48, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        openButton = new QPushButton(verticalFrame);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("document-open");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        openButton->setIcon(icon);

        horizontalLayout->addWidget(openButton);

        horizontalSpacer_2 = new QSpacerItem(48, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(verticalFrame);

        horizontalSpacer_4 = new QSpacerItem(48, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalWidget = new QWidget(horizontalWidget);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        line_2 = new QFrame(verticalWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy3);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        verticalLayout->setStretch(0, 1);

        horizontalLayout_2->addWidget(verticalWidget);

        horizontalSpacer_3 = new QSpacerItem(48, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        recentsArea = new QWidget(horizontalWidget);
        recentsArea->setObjectName(QString::fromUtf8("recentsArea"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(recentsArea->sizePolicy().hasHeightForWidth());
        recentsArea->setSizePolicy(sizePolicy4);
        verticalLayout_3 = new QVBoxLayout(recentsArea);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalWidget1 = new QWidget(recentsArea);
        horizontalWidget1->setObjectName(QString::fromUtf8("horizontalWidget1"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(horizontalWidget1->sizePolicy().hasHeightForWidth());
        horizontalWidget1->setSizePolicy(sizePolicy5);
        horizontalWidget1->setMinimumSize(QSize(0, 40));
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget1);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(horizontalWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy6);
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        forgetAllButton = new QToolButton(horizontalWidget1);
        forgetAllButton->setObjectName(QString::fromUtf8("forgetAllButton"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("edit-clear-history")));
        forgetAllButton->setIcon(icon1);
        forgetAllButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        forgetAllButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(forgetAllButton);


        verticalLayout_3->addWidget(horizontalWidget1);

        recentsListView = new QListView(recentsArea);
        recentsListView->setObjectName(QString::fromUtf8("recentsListView"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(1);
        sizePolicy7.setHeightForWidth(recentsListView->sizePolicy().hasHeightForWidth());
        recentsListView->setSizePolicy(sizePolicy7);
        recentsListView->setMinimumSize(QSize(200, 128));
        recentsListView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        recentsListView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        verticalLayout_3->addWidget(recentsListView);

        verticalLayout_3->setStretch(1, 1);

        horizontalLayout_2->addWidget(recentsArea);


        gridLayout->addWidget(horizontalWidget, 1, 1, 2, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        closeButton = new QPushButton(WelcomeScreen);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy8);
        QIcon icon2;
        iconThemeName = QString::fromUtf8("window-close");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        closeButton->setIcon(icon2);
        closeButton->setFlat(true);

        gridLayout_2->addWidget(closeButton, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 2, 3, 1);

        verticalSpacer_6 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_6, 3, 1, 1, 1);

        gridLayout->setRowStretch(0, 3);
        gridLayout->setRowStretch(1, 5);
        gridLayout->setRowStretch(3, 3);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 4);
        gridLayout->setColumnStretch(2, 1);

        retranslateUi(WelcomeScreen);

        QMetaObject::connectSlotsByName(WelcomeScreen);
    } // setupUi

    void retranslateUi(QWidget *WelcomeScreen)
    {
        label->setText(tr2i18n("Welcome to Okular", nullptr));
        openButton->setText(tr2i18n("Open Document...", "on welcome screen"));
        label_2->setText(tr2i18n("Recent documents", "on welcome screen"));
        forgetAllButton->setText(tr2i18n("Forget All", "on welcome screen (recent document list)"));
#if QT_CONFIG(tooltip)
        closeButton->setToolTip(tr2i18n("Hide welcome screen", nullptr));
#endif // QT_CONFIG(tooltip)
        closeButton->setText(QString());
        (void)WelcomeScreen;
    } // retranslateUi

};

namespace Ui {
    class WelcomeScreen: public Ui_WelcomeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WELCOMESCREEN_H

