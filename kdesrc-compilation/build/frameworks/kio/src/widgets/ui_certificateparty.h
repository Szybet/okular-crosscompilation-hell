#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'certificateparty.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CERTIFICATEPARTY_H
#define UI_CERTIFICATEPARTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CertificateParty
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *commonNameTag;
    QLabel *commonName;
    QLabel *organizationTag;
    QLabel *organization;
    QLabel *organizationalUnitTag;
    QLabel *organizationalUnit;
    QLabel *countryTag;
    QLabel *country;
    QLabel *stateTag;
    QLabel *state;
    QLabel *cityTag;
    QLabel *city;

    void setupUi(QWidget *CertificateParty)
    {
        if (CertificateParty->objectName().isEmpty())
            CertificateParty->setObjectName(QString::fromUtf8("CertificateParty"));
        CertificateParty->resize(390, 214);
        gridLayout = new QGridLayout(CertificateParty);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setHorizontalSpacing(4);
        formLayout->setVerticalSpacing(0);
        commonNameTag = new QLabel(CertificateParty);
        commonNameTag->setObjectName(QString::fromUtf8("commonNameTag"));
        commonNameTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, commonNameTag);

        commonName = new QLabel(CertificateParty);
        commonName->setObjectName(QString::fromUtf8("commonName"));
        commonName->setTextInteractionFlags(Qt::TextSelectableByMouse);

        formLayout->setWidget(0, QFormLayout::FieldRole, commonName);

        organizationTag = new QLabel(CertificateParty);
        organizationTag->setObjectName(QString::fromUtf8("organizationTag"));
        organizationTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, organizationTag);

        organization = new QLabel(CertificateParty);
        organization->setObjectName(QString::fromUtf8("organization"));
        organization->setTextInteractionFlags(Qt::TextSelectableByMouse);

        formLayout->setWidget(1, QFormLayout::FieldRole, organization);

        organizationalUnitTag = new QLabel(CertificateParty);
        organizationalUnitTag->setObjectName(QString::fromUtf8("organizationalUnitTag"));
        organizationalUnitTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, organizationalUnitTag);

        organizationalUnit = new QLabel(CertificateParty);
        organizationalUnit->setObjectName(QString::fromUtf8("organizationalUnit"));
        organizationalUnit->setTextInteractionFlags(Qt::TextSelectableByMouse);

        formLayout->setWidget(2, QFormLayout::FieldRole, organizationalUnit);

        countryTag = new QLabel(CertificateParty);
        countryTag->setObjectName(QString::fromUtf8("countryTag"));
        countryTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, countryTag);

        country = new QLabel(CertificateParty);
        country->setObjectName(QString::fromUtf8("country"));
        country->setTextInteractionFlags(Qt::TextSelectableByMouse);

        formLayout->setWidget(3, QFormLayout::FieldRole, country);

        stateTag = new QLabel(CertificateParty);
        stateTag->setObjectName(QString::fromUtf8("stateTag"));
        stateTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, stateTag);

        state = new QLabel(CertificateParty);
        state->setObjectName(QString::fromUtf8("state"));
        state->setTextInteractionFlags(Qt::TextSelectableByMouse);

        formLayout->setWidget(4, QFormLayout::FieldRole, state);

        cityTag = new QLabel(CertificateParty);
        cityTag->setObjectName(QString::fromUtf8("cityTag"));
        cityTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, cityTag);

        city = new QLabel(CertificateParty);
        city->setObjectName(QString::fromUtf8("city"));
        city->setTextInteractionFlags(Qt::TextSelectableByMouse);

        formLayout->setWidget(5, QFormLayout::FieldRole, city);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(CertificateParty);

        QMetaObject::connectSlotsByName(CertificateParty);
    } // setupUi

    void retranslateUi(QWidget *CertificateParty)
    {
        commonNameTag->setText(tr2i18n("Common name:", nullptr));
        commonName->setText(tr2i18n("Acme Co.", nullptr));
        organizationTag->setText(tr2i18n("Organization:", nullptr));
        organization->setText(tr2i18n("Acme Sundry Products Company", nullptr));
        organizationalUnitTag->setText(tr2i18n("Organizational unit:", nullptr));
        organizationalUnit->setText(tr2i18n("Fraud Department", nullptr));
        countryTag->setText(tr2i18n("Country:", nullptr));
        country->setText(tr2i18n("Canada", nullptr));
        stateTag->setText(tr2i18n("State:", nullptr));
        state->setText(tr2i18n("Quebec", nullptr));
        cityTag->setText(tr2i18n("City:", nullptr));
        city->setText(tr2i18n("Lakeridge Meadows", nullptr));
        (void)CertificateParty;
    } // retranslateUi

};

namespace Ui {
    class CertificateParty: public Ui_CertificateParty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CERTIFICATEPARTY_H

