#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'kpropertiesdesktopadvbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KPROPERTIESDESKTOPADVBASE_H
#define UI_KPROPERTIESDESKTOPADVBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_KPropertiesDesktopAdvBase
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *buttonGroup2;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QCheckBox *terminalCheck;
    QLabel *terminalEditLabel;
    QCheckBox *terminalCloseCheck;
    QLineEdit *terminalEdit;
    QGroupBox *buttonGroup2_2;
    QGridLayout *gridLayout1;
    QCheckBox *suidCheck;
    QSpacerItem *spacerItem1;
    QLabel *suidEditLabel;
    KLineEdit *suidEdit;
    QGroupBox *discreteGpuGroupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *discreteGpuCheck;
    QGroupBox *buttonGroup4;
    QGridLayout *gridLayout2;
    QCheckBox *startupInfoCheck;

    void setupUi(QWidget *KPropertiesDesktopAdvBase)
    {
        if (KPropertiesDesktopAdvBase->objectName().isEmpty())
            KPropertiesDesktopAdvBase->setObjectName(QString::fromUtf8("KPropertiesDesktopAdvBase"));
        KPropertiesDesktopAdvBase->resize(371, 539);
        vboxLayout = new QVBoxLayout(KPropertiesDesktopAdvBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        buttonGroup2 = new QGroupBox(KPropertiesDesktopAdvBase);
        buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
        gridLayout = new QGridLayout(buttonGroup2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 0, 2, 1);

        terminalCheck = new QCheckBox(buttonGroup2);
        terminalCheck->setObjectName(QString::fromUtf8("terminalCheck"));

        gridLayout->addWidget(terminalCheck, 0, 0, 1, 3);

        terminalEditLabel = new QLabel(buttonGroup2);
        terminalEditLabel->setObjectName(QString::fromUtf8("terminalEditLabel"));

        gridLayout->addWidget(terminalEditLabel, 2, 1, 1, 1);

        terminalCloseCheck = new QCheckBox(buttonGroup2);
        terminalCloseCheck->setObjectName(QString::fromUtf8("terminalCloseCheck"));

        gridLayout->addWidget(terminalCloseCheck, 1, 1, 1, 2);

        terminalEdit = new QLineEdit(buttonGroup2);
        terminalEdit->setObjectName(QString::fromUtf8("terminalEdit"));

        gridLayout->addWidget(terminalEdit, 2, 2, 1, 1);


        vboxLayout->addWidget(buttonGroup2);

        buttonGroup2_2 = new QGroupBox(KPropertiesDesktopAdvBase);
        buttonGroup2_2->setObjectName(QString::fromUtf8("buttonGroup2_2"));
        gridLayout1 = new QGridLayout(buttonGroup2_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        suidCheck = new QCheckBox(buttonGroup2_2);
        suidCheck->setObjectName(QString::fromUtf8("suidCheck"));

        gridLayout1->addWidget(suidCheck, 0, 0, 1, 3);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 1, 0, 1, 1);

        suidEditLabel = new QLabel(buttonGroup2_2);
        suidEditLabel->setObjectName(QString::fromUtf8("suidEditLabel"));

        gridLayout1->addWidget(suidEditLabel, 1, 1, 1, 1);

        suidEdit = new KLineEdit(buttonGroup2_2);
        suidEdit->setObjectName(QString::fromUtf8("suidEdit"));

        gridLayout1->addWidget(suidEdit, 1, 2, 1, 1);


        vboxLayout->addWidget(buttonGroup2_2);

        discreteGpuGroupBox = new QGroupBox(KPropertiesDesktopAdvBase);
        discreteGpuGroupBox->setObjectName(QString::fromUtf8("discreteGpuGroupBox"));
        verticalLayout = new QVBoxLayout(discreteGpuGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        discreteGpuCheck = new QCheckBox(discreteGpuGroupBox);
        discreteGpuCheck->setObjectName(QString::fromUtf8("discreteGpuCheck"));

        verticalLayout->addWidget(discreteGpuCheck);


        vboxLayout->addWidget(discreteGpuGroupBox);

        buttonGroup4 = new QGroupBox(KPropertiesDesktopAdvBase);
        buttonGroup4->setObjectName(QString::fromUtf8("buttonGroup4"));
        gridLayout2 = new QGridLayout(buttonGroup4);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        startupInfoCheck = new QCheckBox(buttonGroup4);
        startupInfoCheck->setObjectName(QString::fromUtf8("startupInfoCheck"));

        gridLayout2->addWidget(startupInfoCheck, 0, 0, 1, 2);


        vboxLayout->addWidget(buttonGroup4);

#if QT_CONFIG(shortcut)
        terminalEditLabel->setBuddy(terminalEdit);
        suidEditLabel->setBuddy(suidEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KPropertiesDesktopAdvBase);
        QObject::connect(terminalCheck, SIGNAL(toggled(bool)), terminalCloseCheck, SLOT(setEnabled(bool)));
        QObject::connect(terminalCheck, SIGNAL(toggled(bool)), terminalEdit, SLOT(setEnabled(bool)));
        QObject::connect(terminalCheck, SIGNAL(toggled(bool)), terminalEditLabel, SLOT(setEnabled(bool)));
        QObject::connect(suidCheck, SIGNAL(toggled(bool)), suidEdit, SLOT(setEnabled(bool)));
        QObject::connect(suidCheck, SIGNAL(toggled(bool)), suidEditLabel, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(KPropertiesDesktopAdvBase);
    } // setupUi

    void retranslateUi(QWidget *KPropertiesDesktopAdvBase)
    {
        buttonGroup2->setTitle(tr2i18n("Terminal", "@title:group Title of a group that lets the user choose options about the terminal when launching a program"));
#if QT_CONFIG(whatsthis)
        terminalCheck->setWhatsThis(tr2i18n("Check this option if the application you want to run is a text mode application or if you want the information that is provided by the terminal emulator window.", nullptr));
#endif // QT_CONFIG(whatsthis)
        terminalCheck->setText(tr2i18n("Run in terminal", nullptr));
        terminalEditLabel->setText(tr2i18n("Terminal options:", nullptr));
#if QT_CONFIG(whatsthis)
        terminalCloseCheck->setWhatsThis(tr2i18n("Check this option if the text mode application offers relevant information on exit. Keeping the terminal emulator open allows you to retrieve this information.", nullptr));
#endif // QT_CONFIG(whatsthis)
        terminalCloseCheck->setText(tr2i18n("Do not close when command exits", nullptr));
        buttonGroup2_2->setTitle(tr2i18n("User", "@title:group Title of a group that lets the user choose which user to use when launching a program"));
#if QT_CONFIG(whatsthis)
        suidCheck->setWhatsThis(tr2i18n("Check this option if you want to run this application with a different user id. Every process has a different user id associated with it. This id code determines file access and other permissions. The password of the user is required to use this option.", nullptr));
#endif // QT_CONFIG(whatsthis)
        suidCheck->setText(tr2i18n("Run as a different user", nullptr));
#if QT_CONFIG(whatsthis)
        suidEditLabel->setWhatsThis(tr2i18n("Enter the user name you want to run the application as.", nullptr));
#endif // QT_CONFIG(whatsthis)
        suidEditLabel->setText(tr2i18n("Username:", nullptr));
#if QT_CONFIG(whatsthis)
        suidEdit->setWhatsThis(tr2i18n("Enter the user name you want to run the application as here.", nullptr));
#endif // QT_CONFIG(whatsthis)
        discreteGpuGroupBox->setTitle(tr2i18n("Discrete GPU", nullptr));
        discreteGpuCheck->setText(tr2i18n("Run using dedicated graphics card", nullptr));
        buttonGroup4->setTitle(tr2i18n("Startup", "@title:group Title of a group that lets the user choose options regarding program startup"));
#if QT_CONFIG(whatsthis)
        startupInfoCheck->setWhatsThis(tr2i18n("Check this option if you want to make clear that your application has started. This visual feedback may appear as a busy cursor or in the taskbar.", nullptr));
#endif // QT_CONFIG(whatsthis)
        startupInfoCheck->setText(tr2i18n("Enable launch feedback", nullptr));
        (void)KPropertiesDesktopAdvBase;
    } // retranslateUi

};

namespace Ui {
    class KPropertiesDesktopAdvBase: public Ui_KPropertiesDesktopAdvBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KPROPERTIESDESKTOPADVBASE_H

