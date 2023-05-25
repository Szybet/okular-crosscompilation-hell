#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'kcookiespolicyselectiondlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KCOOKIESPOLICYSELECTIONDLG_H
#define UI_KCOOKIESPOLICYSELECTIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KCookiesPolicySelectionDlgUI
{
public:
    QFormLayout *formLayout;
    QLabel *lbDomain;
    QLineEdit *leDomain;
    QLabel *lbPolicy;
    QComboBox *cbPolicy;

    void setupUi(QWidget *KCookiesPolicySelectionDlgUI)
    {
        if (KCookiesPolicySelectionDlgUI->objectName().isEmpty())
            KCookiesPolicySelectionDlgUI->setObjectName(QString::fromUtf8("KCookiesPolicySelectionDlgUI"));
        KCookiesPolicySelectionDlgUI->resize(287, 81);
        formLayout = new QFormLayout(KCookiesPolicySelectionDlgUI);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        lbDomain = new QLabel(KCookiesPolicySelectionDlgUI);
        lbDomain->setObjectName(QString::fromUtf8("lbDomain"));
        lbDomain->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, lbDomain);

        leDomain = new QLineEdit(KCookiesPolicySelectionDlgUI);
        leDomain->setObjectName(QString::fromUtf8("leDomain"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leDomain);

        lbPolicy = new QLabel(KCookiesPolicySelectionDlgUI);
        lbPolicy->setObjectName(QString::fromUtf8("lbPolicy"));
        lbPolicy->setWordWrap(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, lbPolicy);

        cbPolicy = new QComboBox(KCookiesPolicySelectionDlgUI);
        cbPolicy->addItem(QString());
        cbPolicy->addItem(QString());
        cbPolicy->addItem(QString());
        cbPolicy->addItem(QString());
        cbPolicy->setObjectName(QString::fromUtf8("cbPolicy"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cbPolicy);

#if QT_CONFIG(shortcut)
        lbDomain->setBuddy(leDomain);
        lbPolicy->setBuddy(cbPolicy);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KCookiesPolicySelectionDlgUI);

        QMetaObject::connectSlotsByName(KCookiesPolicySelectionDlgUI);
    } // setupUi

    void retranslateUi(QWidget *KCookiesPolicySelectionDlgUI)
    {
#if QT_CONFIG(whatsthis)
        lbDomain->setWhatsThis(tr2i18n("<qt>\n"
"Enter the host or domain to which this policy applies, e.g. <b>www.kde.org</b> or <b>.kde.org</b>.\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lbDomain->setText(tr2i18n("Site name:", nullptr));
#if QT_CONFIG(whatsthis)
        leDomain->setWhatsThis(tr2i18n("Enter the host or domain name, e.g. .kde.org, this policy applies to.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        lbPolicy->setWhatsThis(tr2i18n("<qt>\n"
"Select the desired policy:\n"
"<ul>\n"
"<li><b>Accept</b> - Allows this site to set cookies</li>\n"
"<li><b>Accept until end of session</b> - Allows this site to set cookies but they will expire at the end of the session.</li>\n"
"<li><b>Reject</b> - Refuse all cookies sent from this site</li>\n"
"<li><b>Ask</b> - Prompt when cookies are received from this site</li>\n"
"</ul>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lbPolicy->setText(tr2i18n("Policy:", nullptr));
        cbPolicy->setItemText(0, tr2i18n("Accept", nullptr));
        cbPolicy->setItemText(1, tr2i18n("Accept until end of session", nullptr));
        cbPolicy->setItemText(2, tr2i18n("Reject", nullptr));
        cbPolicy->setItemText(3, tr2i18n("Ask", nullptr));

#if QT_CONFIG(whatsthis)
        cbPolicy->setWhatsThis(tr2i18n("<qt>\n"
"Select the desired policy:\n"
"<ul>\n"
"<li><b>Accept</b> - Allows this site to set cookies</li>\n"
"<li><b>Accept until end of session</b> - Allows this site to set cookies but they will expire at the end of the session.</li>\n"
"<li><b>Reject</b> - Refuse all cookies sent from this site</li>\n"
"<li><b>Ask</b> - Prompt when cookies are received from this site</li>\n"
"</ul>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        (void)KCookiesPolicySelectionDlgUI;
    } // retranslateUi

};

namespace Ui {
    class KCookiesPolicySelectionDlgUI: public Ui_KCookiesPolicySelectionDlgUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KCOOKIESPOLICYSELECTIONDLG_H

