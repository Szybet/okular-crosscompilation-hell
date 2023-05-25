#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'kcookiespolicies.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KCOOKIESPOLICIES_H
#define UI_KCOOKIESPOLICIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ktreewidgetsearchline.h"

QT_BEGIN_NAMESPACE

class Ui_KCookiePoliciesUI
{
public:
    QGridLayout *gridLayout_2;
    QCheckBox *cbEnableCookies;
    QGroupBox *bgPreferences;
    QVBoxLayout *vboxLayout;
    QCheckBox *cbRejectCrossDomainCookies;
    QCheckBox *cbAutoAcceptSessionCookies;
    QGroupBox *bgDefault;
    QVBoxLayout *vboxLayout1;
    QRadioButton *rbPolicyAccept;
    QRadioButton *rbPolicyAcceptForSession;
    QRadioButton *rbPolicyAsk;
    QRadioButton *rbPolicyReject;
    QSpacerItem *verticalSpacer;
    QGroupBox *gbDomainSpecific;
    QGridLayout *gridLayout;
    KTreeWidgetSearchLine *kListViewSearchLine;
    QTreeWidget *policyTreeWidget;
    QPushButton *pbNew;
    QPushButton *pbChange;
    QPushButton *pbDelete;
    QPushButton *pbDeleteAll;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *KCookiePoliciesUI)
    {
        if (KCookiePoliciesUI->objectName().isEmpty())
            KCookiePoliciesUI->setObjectName(QString::fromUtf8("KCookiePoliciesUI"));
        KCookiePoliciesUI->resize(555, 317);
        gridLayout_2 = new QGridLayout(KCookiePoliciesUI);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cbEnableCookies = new QCheckBox(KCookiePoliciesUI);
        cbEnableCookies->setObjectName(QString::fromUtf8("cbEnableCookies"));

        gridLayout_2->addWidget(cbEnableCookies, 0, 0, 1, 1);

        bgPreferences = new QGroupBox(KCookiePoliciesUI);
        bgPreferences->setObjectName(QString::fromUtf8("bgPreferences"));
        vboxLayout = new QVBoxLayout(bgPreferences);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        cbRejectCrossDomainCookies = new QCheckBox(bgPreferences);
        cbRejectCrossDomainCookies->setObjectName(QString::fromUtf8("cbRejectCrossDomainCookies"));

        vboxLayout->addWidget(cbRejectCrossDomainCookies);

        cbAutoAcceptSessionCookies = new QCheckBox(bgPreferences);
        cbAutoAcceptSessionCookies->setObjectName(QString::fromUtf8("cbAutoAcceptSessionCookies"));

        vboxLayout->addWidget(cbAutoAcceptSessionCookies);


        gridLayout_2->addWidget(bgPreferences, 1, 0, 1, 2);

        bgDefault = new QGroupBox(KCookiePoliciesUI);
        bgDefault->setObjectName(QString::fromUtf8("bgDefault"));
        vboxLayout1 = new QVBoxLayout(bgDefault);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        rbPolicyAccept = new QRadioButton(bgDefault);
        rbPolicyAccept->setObjectName(QString::fromUtf8("rbPolicyAccept"));

        vboxLayout1->addWidget(rbPolicyAccept);

        rbPolicyAcceptForSession = new QRadioButton(bgDefault);
        rbPolicyAcceptForSession->setObjectName(QString::fromUtf8("rbPolicyAcceptForSession"));

        vboxLayout1->addWidget(rbPolicyAcceptForSession);

        rbPolicyAsk = new QRadioButton(bgDefault);
        rbPolicyAsk->setObjectName(QString::fromUtf8("rbPolicyAsk"));

        vboxLayout1->addWidget(rbPolicyAsk);

        rbPolicyReject = new QRadioButton(bgDefault);
        rbPolicyReject->setObjectName(QString::fromUtf8("rbPolicyReject"));

        vboxLayout1->addWidget(rbPolicyReject);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(verticalSpacer);


        gridLayout_2->addWidget(bgDefault, 2, 0, 1, 1);

        gbDomainSpecific = new QGroupBox(KCookiePoliciesUI);
        gbDomainSpecific->setObjectName(QString::fromUtf8("gbDomainSpecific"));
        gridLayout = new QGridLayout(gbDomainSpecific);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        kListViewSearchLine = new KTreeWidgetSearchLine(gbDomainSpecific);
        kListViewSearchLine->setObjectName(QString::fromUtf8("kListViewSearchLine"));
        kListViewSearchLine->setEnabled(true);

        gridLayout->addWidget(kListViewSearchLine, 0, 0, 1, 1);

        policyTreeWidget = new QTreeWidget(gbDomainSpecific);
        policyTreeWidget->setObjectName(QString::fromUtf8("policyTreeWidget"));
        policyTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        policyTreeWidget->setRootIsDecorated(false);
        policyTreeWidget->setSortingEnabled(true);
        policyTreeWidget->setAllColumnsShowFocus(true);

        gridLayout->addWidget(policyTreeWidget, 1, 0, 5, 1);

        pbNew = new QPushButton(gbDomainSpecific);
        pbNew->setObjectName(QString::fromUtf8("pbNew"));

        gridLayout->addWidget(pbNew, 1, 1, 1, 1);

        pbChange = new QPushButton(gbDomainSpecific);
        pbChange->setObjectName(QString::fromUtf8("pbChange"));

        gridLayout->addWidget(pbChange, 2, 1, 1, 1);

        pbDelete = new QPushButton(gbDomainSpecific);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));

        gridLayout->addWidget(pbDelete, 3, 1, 1, 1);

        pbDeleteAll = new QPushButton(gbDomainSpecific);
        pbDeleteAll->setObjectName(QString::fromUtf8("pbDeleteAll"));

        gridLayout->addWidget(pbDeleteAll, 4, 1, 1, 1);

        spacerItem = new QSpacerItem(81, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 1, 1, 1);


        gridLayout_2->addWidget(gbDomainSpecific, 2, 1, 1, 1);


        retranslateUi(KCookiePoliciesUI);

        QMetaObject::connectSlotsByName(KCookiePoliciesUI);
    } // setupUi

    void retranslateUi(QWidget *KCookiePoliciesUI)
    {
#if QT_CONFIG(whatsthis)
        cbEnableCookies->setWhatsThis(tr2i18n("<qt>\n"
"<p>Enable cookie support. Normally you will want to have cookie support enabled and customize it to suit your privacy needs.</p><p>\n"
"Please note that disabling cookie support might make many web sites unbrowsable.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbEnableCookies->setText(tr2i18n("Enable coo&kies", nullptr));
#if QT_CONFIG(whatsthis)
        cbRejectCrossDomainCookies->setWhatsThis(tr2i18n("<qt>\n"
"Reject the so called third-party cookies. These are cookies that originate from a site other than the one you are currently browsing. For example, if you visit <b>www.foobar.com</b> while this option is on, only cookies that originate from www.foobar.com will be processed per your settings. Cookies from any other site will be rejected. This reduces the chances of site operators compiling a profile about your daily browsing habits.\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbRejectCrossDomainCookies->setText(tr2i18n("Only acce&pt cookies from originating server", nullptr));
#if QT_CONFIG(whatsthis)
        cbAutoAcceptSessionCookies->setWhatsThis(tr2i18n("<p>\n"
"Automatically accept temporary cookies meant to expire at the end of the current session. Such cookies will not be stored in your computer's hard drive or storage device. Instead, they are deleted when you close all applications (e.g. your browser) that use them.</p><p><u>NOTE</u> Checking this option overrides your default as well as site specific cookie policies for session cookies.</p>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbAutoAcceptSessionCookies->setText(tr2i18n("Automaticall&y accept session cookies", nullptr));
#if QT_CONFIG(whatsthis)
        bgDefault->setWhatsThis(tr2i18n("<qt>\n"
"Determines how cookies received from a remote machine will be handled: \n"
"<ul>\n"
"<li><b>Ask</b> will cause KDE to ask for your confirmation whenever a server wants to set a cookie.</li>\n"
"<li><b>Accept</b> will cause cookies to be accepted without prompting you.</li>\n"
"<li><b>Accept until end of session</b> will cause cookies to be accepted but they will expire at the end of the session.</li>\n"
"<li><b>Reject</b> will cause the cookiejar to refuse all cookies it receives.</li>\n"
"</ul><p>\n"
"<u>NOTE:</u> Domain specific policies, which can be set below, always take precedence over the default policy.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        bgDefault->setTitle(tr2i18n("Default Policy", nullptr));
        rbPolicyAccept->setText(tr2i18n("Accep&t all cookies", nullptr));
        rbPolicyAcceptForSession->setText(tr2i18n("Accept &until end of session", nullptr));
        rbPolicyAsk->setText(tr2i18n("Ask &for confirmation", nullptr));
        rbPolicyReject->setText(tr2i18n("Re&ject all cookies", nullptr));
#if QT_CONFIG(whatsthis)
        gbDomainSpecific->setWhatsThis(tr2i18n("<qt>\n"
"To add a new policy, simply click on the <b>Add...</b> button and supply the necessary information. To change an existing policy, use the <b>Change...</b> button and choose the new policy from the policy dialog box. Clicking on the <b>Delete</b> button will remove the currently selected policy causing the default policy setting to be used for that domain, whereas <b>Delete All</b> will remove all the site specific policies.\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        gbDomainSpecific->setTitle(tr2i18n("Site Policy", nullptr));
#if QT_CONFIG(tooltip)
        kListViewSearchLine->setToolTip(tr2i18n("Search interactively for domains", nullptr));
#endif // QT_CONFIG(tooltip)
        kListViewSearchLine->setPlaceholderText(tr2i18n("Search...", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = policyTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, tr2i18n("Policy", nullptr));
        ___qtreewidgetitem->setText(0, tr2i18n("Domain", nullptr));
#if QT_CONFIG(whatsthis)
        policyTreeWidget->setWhatsThis(tr2i18n("<qt>\n"
"List of sites for which you have set a specific cookie policy. Specific policies override the default policy setting for these sites.\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pbNew->setText(tr2i18n("&New...", nullptr));
        pbChange->setText(tr2i18n("Chan&ge...", nullptr));
        pbDelete->setText(tr2i18n("D&elete", nullptr));
        pbDeleteAll->setText(tr2i18n("Delete A&ll", nullptr));
        (void)KCookiePoliciesUI;
    } // retranslateUi

};

namespace Ui {
    class KCookiePoliciesUI: public Ui_KCookiePoliciesUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KCOOKIESPOLICIES_H

