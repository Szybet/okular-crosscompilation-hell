#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'pdfsettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDFSETTINGSWIDGET_H
#define UI_PDFSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_PDFSettingsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    KComboBox *kcfg_EnhanceThinLines;
    QSpacerItem *horizontalSpacer;
    QCheckBox *kcfg_CheckOCSPServers;
    QGroupBox *certDBGroupBox;
    QFormLayout *formLayout;
    QRadioButton *kcfg_UseDefaultCertDB;
    QRadioButton *customRadioButton;
    QLabel *defaultLabel;
    QGroupBox *certificatesGroup;
    QVBoxLayout *certificatesPlaceholder;
    QPushButton *loadSignaturesButton;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *PDFSettingsWidgetBase)
    {
        if (PDFSettingsWidgetBase->objectName().isEmpty())
            PDFSettingsWidgetBase->setObjectName(QString::fromUtf8("PDFSettingsWidgetBase"));
        PDFSettingsWidgetBase->resize(721, 431);
        verticalLayout = new QVBoxLayout(PDFSettingsWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(PDFSettingsWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        kcfg_EnhanceThinLines = new KComboBox(PDFSettingsWidgetBase);
        kcfg_EnhanceThinLines->addItem(QString());
        kcfg_EnhanceThinLines->addItem(QString());
        kcfg_EnhanceThinLines->addItem(QString());
        kcfg_EnhanceThinLines->setObjectName(QString::fromUtf8("kcfg_EnhanceThinLines"));

        horizontalLayout_2->addWidget(kcfg_EnhanceThinLines);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        kcfg_CheckOCSPServers = new QCheckBox(PDFSettingsWidgetBase);
        kcfg_CheckOCSPServers->setObjectName(QString::fromUtf8("kcfg_CheckOCSPServers"));

        verticalLayout->addWidget(kcfg_CheckOCSPServers);

        certDBGroupBox = new QGroupBox(PDFSettingsWidgetBase);
        certDBGroupBox->setObjectName(QString::fromUtf8("certDBGroupBox"));
        formLayout = new QFormLayout(certDBGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        kcfg_UseDefaultCertDB = new QRadioButton(certDBGroupBox);
        kcfg_UseDefaultCertDB->setObjectName(QString::fromUtf8("kcfg_UseDefaultCertDB"));

        formLayout->setWidget(0, QFormLayout::LabelRole, kcfg_UseDefaultCertDB);

        customRadioButton = new QRadioButton(certDBGroupBox);
        customRadioButton->setObjectName(QString::fromUtf8("customRadioButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, customRadioButton);

        defaultLabel = new QLabel(certDBGroupBox);
        defaultLabel->setObjectName(QString::fromUtf8("defaultLabel"));
        defaultLabel->setText(QString::fromUtf8(""));

        formLayout->setWidget(0, QFormLayout::FieldRole, defaultLabel);


        verticalLayout->addWidget(certDBGroupBox);

        certificatesGroup = new QGroupBox(PDFSettingsWidgetBase);
        certificatesGroup->setObjectName(QString::fromUtf8("certificatesGroup"));
        certificatesPlaceholder = new QVBoxLayout(certificatesGroup);
        certificatesPlaceholder->setObjectName(QString::fromUtf8("certificatesPlaceholder"));

        verticalLayout->addWidget(certificatesGroup);

        loadSignaturesButton = new QPushButton(PDFSettingsWidgetBase);
        loadSignaturesButton->setObjectName(QString::fromUtf8("loadSignaturesButton"));

        verticalLayout->addWidget(loadSignaturesButton);

        spacerItem = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem);


        retranslateUi(PDFSettingsWidgetBase);

        QMetaObject::connectSlotsByName(PDFSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *PDFSettingsWidgetBase)
    {
        label->setText(tr2i18n("Enhance thin lines:", nullptr));
        kcfg_EnhanceThinLines->setItemText(0, tr2i18n("No", nullptr));
        kcfg_EnhanceThinLines->setItemText(1, tr2i18n("Solid", nullptr));
        kcfg_EnhanceThinLines->setItemText(2, tr2i18n("Shape", nullptr));

#if QT_CONFIG(tooltip)
        kcfg_CheckOCSPServers->setToolTip(tr2i18n("Enabling this option will allow Okular to contact 3rd-party OCSP servers to check if the certificates used for digital signing have been revoked since their creation.", nullptr));
#endif // QT_CONFIG(tooltip)
        kcfg_CheckOCSPServers->setText(tr2i18n("Check revocation of digital signatures' certificates using 3rd-party servers", nullptr));
        certDBGroupBox->setTitle(tr2i18n("Certificate Database", nullptr));
        kcfg_UseDefaultCertDB->setText(tr2i18n("Default:", nullptr));
        customRadioButton->setText(tr2i18n("Custom:", nullptr));
        certificatesGroup->setTitle(tr2i18n("Available Certificates", nullptr));
        loadSignaturesButton->setText(tr2i18n("&Load Signatures", nullptr));
        (void)PDFSettingsWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class PDFSettingsWidgetBase: public Ui_PDFSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PDFSETTINGSWIDGET_H

