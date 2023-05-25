#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'checksumswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKSUMSWIDGET_H
#define UI_CHECKSUMSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kseparator.h"

QT_BEGIN_NAMESPACE

class Ui_ChecksumsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pasteButton;
    QLabel *feedbackLabel;
    KSeparator *kseparator;
    QWidget *calculateWidget;
    QFormLayout *formLayout;
    QLabel *md5Label;
    QLabel *sha1Label;
    QLabel *sha256Label;
    QLabel *sha512Label;
    QHBoxLayout *horizontalLayout_1;
    QPushButton *md5Button;
    QSpacerItem *horizontalSpacer_1;
    QPushButton *md5CopyButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *sha1Button;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sha1CopyButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *sha256Button;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *sha256CopyButton;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *sha512Button;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *sha512CopyButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ChecksumsWidget)
    {
        if (ChecksumsWidget->objectName().isEmpty())
            ChecksumsWidget->setObjectName(QString::fromUtf8("ChecksumsWidget"));
        ChecksumsWidget->resize(485, 463);
        verticalLayout = new QVBoxLayout(ChecksumsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ChecksumsWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(ChecksumsWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pasteButton = new QPushButton(ChecksumsWidget);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("edit-paste");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        pasteButton->setIcon(icon);

        horizontalLayout->addWidget(pasteButton);


        verticalLayout->addLayout(horizontalLayout);

        feedbackLabel = new QLabel(ChecksumsWidget);
        feedbackLabel->setObjectName(QString::fromUtf8("feedbackLabel"));
        feedbackLabel->setText(QString::fromUtf8("Feedback"));

        verticalLayout->addWidget(feedbackLabel);

        kseparator = new KSeparator(ChecksumsWidget);
        kseparator->setObjectName(QString::fromUtf8("kseparator"));

        verticalLayout->addWidget(kseparator);

        calculateWidget = new QWidget(ChecksumsWidget);
        calculateWidget->setObjectName(QString::fromUtf8("calculateWidget"));
        formLayout = new QFormLayout(calculateWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        md5Label = new QLabel(calculateWidget);
        md5Label->setObjectName(QString::fromUtf8("md5Label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, md5Label);

        sha1Label = new QLabel(calculateWidget);
        sha1Label->setObjectName(QString::fromUtf8("sha1Label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, sha1Label);

        sha256Label = new QLabel(calculateWidget);
        sha256Label->setObjectName(QString::fromUtf8("sha256Label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, sha256Label);

        sha512Label = new QLabel(calculateWidget);
        sha512Label->setObjectName(QString::fromUtf8("sha512Label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, sha512Label);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        md5Button = new QPushButton(calculateWidget);
        md5Button->setObjectName(QString::fromUtf8("md5Button"));

        horizontalLayout_1->addWidget(md5Button);

        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer_1);

        md5CopyButton = new QPushButton(calculateWidget);
        md5CopyButton->setObjectName(QString::fromUtf8("md5CopyButton"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("edit-copy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        md5CopyButton->setIcon(icon1);

        horizontalLayout_1->addWidget(md5CopyButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sha1Button = new QPushButton(calculateWidget);
        sha1Button->setObjectName(QString::fromUtf8("sha1Button"));

        horizontalLayout_2->addWidget(sha1Button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        sha1CopyButton = new QPushButton(calculateWidget);
        sha1CopyButton->setObjectName(QString::fromUtf8("sha1CopyButton"));
        sha1CopyButton->setIcon(icon1);

        horizontalLayout_2->addWidget(sha1CopyButton);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        sha256Button = new QPushButton(calculateWidget);
        sha256Button->setObjectName(QString::fromUtf8("sha256Button"));

        horizontalLayout_3->addWidget(sha256Button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        sha256CopyButton = new QPushButton(calculateWidget);
        sha256CopyButton->setObjectName(QString::fromUtf8("sha256CopyButton"));
        sha256CopyButton->setIcon(icon1);

        horizontalLayout_3->addWidget(sha256CopyButton);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        sha512Button = new QPushButton(calculateWidget);
        sha512Button->setObjectName(QString::fromUtf8("sha512Button"));

        horizontalLayout_4->addWidget(sha512Button);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        sha512CopyButton = new QPushButton(calculateWidget);
        sha512CopyButton->setObjectName(QString::fromUtf8("sha512CopyButton"));
        sha512CopyButton->setIcon(icon1);

        horizontalLayout_4->addWidget(sha512CopyButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_4);


        verticalLayout->addWidget(calculateWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ChecksumsWidget);

        QMetaObject::connectSlotsByName(ChecksumsWidget);
    } // setupUi

    void retranslateUi(QWidget *ChecksumsWidget)
    {
        label->setText(tr2i18n("Copy and paste a checksum in the field below.<br/>A checksum is usually provided by the website you downloaded this file from.", nullptr));
        lineEdit->setPlaceholderText(tr2i18n("Expected checksum (MD5, SHA1, SHA256 or SHA512)...", nullptr));
#if QT_CONFIG(tooltip)
        pasteButton->setToolTip(tr2i18n("Click to paste the checksum from the clipboard to the input field.", nullptr));
#endif // QT_CONFIG(tooltip)
        pasteButton->setText(tr2i18n("Paste", nullptr));
        md5Label->setText(tr2i18n("MD5:", nullptr));
        sha1Label->setText(tr2i18n("SHA1:", nullptr));
        sha256Label->setText(tr2i18n("SHA256:", nullptr));
        sha512Label->setText(tr2i18n("SHA512:", nullptr));
        md5Button->setText(tr2i18n("Calculate", nullptr));
#if QT_CONFIG(tooltip)
        md5CopyButton->setToolTip(tr2i18n("Click to copy the checksum to the clipboard.", nullptr));
#endif // QT_CONFIG(tooltip)
        md5CopyButton->setText(tr2i18n("Copy", nullptr));
        sha1Button->setText(tr2i18n("Calculate", nullptr));
#if QT_CONFIG(tooltip)
        sha1CopyButton->setToolTip(tr2i18n("Click to copy the checksum to the clipboard.", nullptr));
#endif // QT_CONFIG(tooltip)
        sha1CopyButton->setText(tr2i18n("Copy", nullptr));
        sha256Button->setText(tr2i18n("Calculate", nullptr));
#if QT_CONFIG(tooltip)
        sha256CopyButton->setToolTip(tr2i18n("Click to copy the checksum to the clipboard.", nullptr));
#endif // QT_CONFIG(tooltip)
        sha256CopyButton->setText(tr2i18n("Copy", nullptr));
        sha512Button->setText(tr2i18n("Calculate", nullptr));
#if QT_CONFIG(tooltip)
        sha512CopyButton->setToolTip(tr2i18n("Click to copy the checksum to the clipboard.", nullptr));
#endif // QT_CONFIG(tooltip)
        sha512CopyButton->setText(tr2i18n("Copy", nullptr));
        (void)ChecksumsWidget;
    } // retranslateUi

};

namespace Ui {
    class ChecksumsWidget: public Ui_ChecksumsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CHECKSUMSWIDGET_H

