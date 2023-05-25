#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'sslinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SSLINFO_H
#define UI_SSLINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "ksqueezedtextlabel.h"

QT_BEGIN_NAMESPACE

class Ui_SslInfo
{
public:
    QGridLayout *gridLayout;
    QLabel *encryptionIndicator;
    QLabel *explanation;
    QLabel *addressTag;
    KSqueezedTextLabel *address;
    QLabel *ipTag;
    QLabel *ip;
    QLabel *encryptionTag;
    QLabel *encryption;
    QLabel *detailsTag;
    QLabel *details;
    QLabel *sslVersionTag;
    QLabel *sslVersion;
    QLabel *certSelectorTag;
    QComboBox *certSelector;
    QSpacerItem *spacerItem;
    QTabWidget *certParties;
    QLabel *trustedTag;
    QLabel *trusted;
    QLabel *validityPeriodTag;
    QLabel *validityPeriod;
    QLabel *serialTag;
    QLabel *serial;
    QLabel *digestTag;
    QLabel *digest;
    QLabel *sha1DigestTag;
    QLabel *sha1Digest;

    void setupUi(QWidget *SslInfo)
    {
        if (SslInfo->objectName().isEmpty())
            SslInfo->setObjectName(QString::fromUtf8("SslInfo"));
        SslInfo->resize(474, 510);
        gridLayout = new QGridLayout(SslInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        encryptionIndicator = new QLabel(SslInfo);
        encryptionIndicator->setObjectName(QString::fromUtf8("encryptionIndicator"));

        gridLayout->addWidget(encryptionIndicator, 0, 0, 1, 1);

        explanation = new QLabel(SslInfo);
        explanation->setObjectName(QString::fromUtf8("explanation"));
        explanation->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(explanation, 0, 1, 1, 2);

        addressTag = new QLabel(SslInfo);
        addressTag->setObjectName(QString::fromUtf8("addressTag"));
        addressTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(addressTag, 1, 0, 1, 1);

        address = new KSqueezedTextLabel(SslInfo);
        address->setObjectName(QString::fromUtf8("address"));
        address->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(address, 1, 1, 1, 1);

        ipTag = new QLabel(SslInfo);
        ipTag->setObjectName(QString::fromUtf8("ipTag"));
        ipTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ipTag, 2, 0, 1, 1);

        ip = new QLabel(SslInfo);
        ip->setObjectName(QString::fromUtf8("ip"));
        ip->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(ip, 2, 1, 1, 1);

        encryptionTag = new QLabel(SslInfo);
        encryptionTag->setObjectName(QString::fromUtf8("encryptionTag"));
        encryptionTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(encryptionTag, 3, 0, 1, 1);

        encryption = new QLabel(SslInfo);
        encryption->setObjectName(QString::fromUtf8("encryption"));
        encryption->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(encryption, 3, 1, 1, 2);

        detailsTag = new QLabel(SslInfo);
        detailsTag->setObjectName(QString::fromUtf8("detailsTag"));
        detailsTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(detailsTag, 4, 0, 1, 1);

        details = new QLabel(SslInfo);
        details->setObjectName(QString::fromUtf8("details"));
        details->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(details, 4, 1, 1, 2);

        sslVersionTag = new QLabel(SslInfo);
        sslVersionTag->setObjectName(QString::fromUtf8("sslVersionTag"));
        sslVersionTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sslVersionTag, 5, 0, 1, 1);

        sslVersion = new QLabel(SslInfo);
        sslVersion->setObjectName(QString::fromUtf8("sslVersion"));
        sslVersion->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(sslVersion, 5, 1, 1, 1);

        certSelectorTag = new QLabel(SslInfo);
        certSelectorTag->setObjectName(QString::fromUtf8("certSelectorTag"));
        certSelectorTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(certSelectorTag, 6, 0, 1, 1);

        certSelector = new QComboBox(SslInfo);
        certSelector->setObjectName(QString::fromUtf8("certSelector"));

        gridLayout->addWidget(certSelector, 6, 1, 1, 1);

        spacerItem = new QSpacerItem(239, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 6, 2, 1, 1);

        certParties = new QTabWidget(SslInfo);
        certParties->setObjectName(QString::fromUtf8("certParties"));

        gridLayout->addWidget(certParties, 7, 0, 1, 3);

        trustedTag = new QLabel(SslInfo);
        trustedTag->setObjectName(QString::fromUtf8("trustedTag"));
        trustedTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(trustedTag, 8, 0, 1, 1);

        trusted = new QLabel(SslInfo);
        trusted->setObjectName(QString::fromUtf8("trusted"));
        trusted->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(trusted, 8, 1, 1, 1);

        validityPeriodTag = new QLabel(SslInfo);
        validityPeriodTag->setObjectName(QString::fromUtf8("validityPeriodTag"));
        validityPeriodTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(validityPeriodTag, 9, 0, 1, 1);

        validityPeriod = new QLabel(SslInfo);
        validityPeriod->setObjectName(QString::fromUtf8("validityPeriod"));
        validityPeriod->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(validityPeriod, 9, 1, 1, 2);

        serialTag = new QLabel(SslInfo);
        serialTag->setObjectName(QString::fromUtf8("serialTag"));
        serialTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(serialTag, 10, 0, 1, 1);

        serial = new QLabel(SslInfo);
        serial->setObjectName(QString::fromUtf8("serial"));
        serial->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(serial, 10, 1, 1, 1);

        digestTag = new QLabel(SslInfo);
        digestTag->setObjectName(QString::fromUtf8("digestTag"));
        digestTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(digestTag, 11, 0, 1, 1);

        digest = new QLabel(SslInfo);
        digest->setObjectName(QString::fromUtf8("digest"));
        digest->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(digest, 11, 1, 1, 1);

        sha1DigestTag = new QLabel(SslInfo);
        sha1DigestTag->setObjectName(QString::fromUtf8("sha1DigestTag"));
        sha1DigestTag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sha1DigestTag, 12, 0, 1, 1);

        sha1Digest = new QLabel(SslInfo);
        sha1Digest->setObjectName(QString::fromUtf8("sha1Digest"));
        sha1Digest->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(sha1Digest, 12, 1, 1, 1);


        retranslateUi(SslInfo);

        QMetaObject::connectSlotsByName(SslInfo);
    } // setupUi

    void retranslateUi(QWidget *SslInfo)
    {
        encryptionIndicator->setText(tr2i18n("[padlock]", nullptr));
        explanation->setText(tr2i18n("Bruce Schneier secure", "KDE::DoNotExtract"));
        addressTag->setText(tr2i18n("Address:", "Web page address"));
        address->setText(tr2i18n("KSqueezedTextLabel", "KDE::DoNotExtract"));
        ipTag->setText(tr2i18n("IP address:", nullptr));
        ip->setText(tr2i18n("is not there", "KDE::DoNotExtract"));
        encryptionTag->setText(tr2i18n("Encryption:", nullptr));
        encryption->setText(tr2i18n("SnakeOilCrypt 3000", "KDE::DoNotExtract"));
        detailsTag->setText(tr2i18n("Details:", nullptr));
        details->setText(tr2i18n("Kx = DH, Auth = RSA, MAC = SHA1", "KDE::DoNotExtract"));
        sslVersionTag->setText(tr2i18n("SSL version:", nullptr));
        sslVersion->setText(tr2i18n("ElboniaTLS v0.0.0", "KDE::DoNotExtract"));
        certSelectorTag->setText(tr2i18n("Certificate chain:", nullptr));
        trustedTag->setText(tr2i18n("Trusted:", nullptr));
        trusted->setText(tr2i18n("Maybe... no.", "KDE::DoNotExtract"));
        validityPeriodTag->setText(tr2i18n("Validity period:", nullptr));
        validityPeriod->setText(tr2i18n("August 34 2004 to Undecimber 0 2008", "KDE::DoNotExtract"));
        serialTag->setText(tr2i18n("Serial number:", nullptr));
        serial->setText(tr2i18n("23", "KDE::DoNotExtract"));
        digestTag->setText(tr2i18n("MD5 digest:", nullptr));
        digest->setText(QString());
        sha1DigestTag->setText(tr2i18n("SHA1 digest:", nullptr));
        sha1Digest->setText(tr2i18n("B4:DB:00:2E", "KDE::DoNotExtract"));
        (void)SslInfo;
    } // retranslateUi

};

namespace Ui {
    class SslInfo: public Ui_SslInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SSLINFO_H

