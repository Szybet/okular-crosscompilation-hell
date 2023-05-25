#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'kcookiesmanagement.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KCOOKIESMANAGEMENT_H
#define UI_KCOOKIESMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "ktreewidgetsearchline.h"

QT_BEGIN_NAMESPACE

class Ui_KCookiesManagementUI
{
public:
    QGridLayout *gridLayout;
    KTreeWidgetSearchLine *searchLineEdit;
    QTreeWidget *cookiesTreeWidget;
    QPushButton *deleteButton;
    QPushButton *deleteAllButton;
    QPushButton *configPolicyButton;
    QPushButton *reloadButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *detailsGroupBox;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *valueLabel;
    QLineEdit *valueLineEdit;
    QLabel *domainLabel;
    QLineEdit *domainLineEdit;
    QLabel *patchLabel;
    QLineEdit *pathLineEdit;
    QLabel *expiresLabel;
    QLineEdit *expiresLineEdit;
    QLabel *secureLabel;
    QLineEdit *secureLineEdit;

    void setupUi(QWidget *KCookiesManagementUI)
    {
        if (KCookiesManagementUI->objectName().isEmpty())
            KCookiesManagementUI->setObjectName(QString::fromUtf8("KCookiesManagementUI"));
        KCookiesManagementUI->resize(526, 443);
        gridLayout = new QGridLayout(KCookiesManagementUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        searchLineEdit = new KTreeWidgetSearchLine(KCookiesManagementUI);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));
        searchLineEdit->setEnabled(true);

        gridLayout->addWidget(searchLineEdit, 0, 0, 1, 1);

        cookiesTreeWidget = new QTreeWidget(KCookiesManagementUI);
        cookiesTreeWidget->setObjectName(QString::fromUtf8("cookiesTreeWidget"));
        cookiesTreeWidget->setSortingEnabled(true);
        cookiesTreeWidget->setAllColumnsShowFocus(true);
        cookiesTreeWidget->header()->setMinimumSectionSize(100);
        cookiesTreeWidget->header()->setDefaultSectionSize(200);

        gridLayout->addWidget(cookiesTreeWidget, 1, 0, 5, 1);

        deleteButton = new QPushButton(KCookiesManagementUI);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        gridLayout->addWidget(deleteButton, 1, 1, 1, 1);

        deleteAllButton = new QPushButton(KCookiesManagementUI);
        deleteAllButton->setObjectName(QString::fromUtf8("deleteAllButton"));

        gridLayout->addWidget(deleteAllButton, 2, 1, 1, 1);

        configPolicyButton = new QPushButton(KCookiesManagementUI);
        configPolicyButton->setObjectName(QString::fromUtf8("configPolicyButton"));

        gridLayout->addWidget(configPolicyButton, 3, 1, 1, 1);

        reloadButton = new QPushButton(KCookiesManagementUI);
        reloadButton->setObjectName(QString::fromUtf8("reloadButton"));

        gridLayout->addWidget(reloadButton, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(18, 114, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        detailsGroupBox = new QGroupBox(KCookiesManagementUI);
        detailsGroupBox->setObjectName(QString::fromUtf8("detailsGroupBox"));
        formLayout = new QFormLayout(detailsGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(0);
        nameLabel = new QLabel(detailsGroupBox);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nameLabel->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(detailsGroupBox);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        valueLabel = new QLabel(detailsGroupBox);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));
        valueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        valueLabel->setWordWrap(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, valueLabel);

        valueLineEdit = new QLineEdit(detailsGroupBox);
        valueLineEdit->setObjectName(QString::fromUtf8("valueLineEdit"));
        valueLineEdit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, valueLineEdit);

        domainLabel = new QLabel(detailsGroupBox);
        domainLabel->setObjectName(QString::fromUtf8("domainLabel"));
        domainLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        domainLabel->setWordWrap(false);

        formLayout->setWidget(2, QFormLayout::LabelRole, domainLabel);

        domainLineEdit = new QLineEdit(detailsGroupBox);
        domainLineEdit->setObjectName(QString::fromUtf8("domainLineEdit"));
        domainLineEdit->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, domainLineEdit);

        patchLabel = new QLabel(detailsGroupBox);
        patchLabel->setObjectName(QString::fromUtf8("patchLabel"));
        patchLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        patchLabel->setWordWrap(false);

        formLayout->setWidget(3, QFormLayout::LabelRole, patchLabel);

        pathLineEdit = new QLineEdit(detailsGroupBox);
        pathLineEdit->setObjectName(QString::fromUtf8("pathLineEdit"));
        pathLineEdit->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, pathLineEdit);

        expiresLabel = new QLabel(detailsGroupBox);
        expiresLabel->setObjectName(QString::fromUtf8("expiresLabel"));
        expiresLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        expiresLabel->setWordWrap(false);

        formLayout->setWidget(4, QFormLayout::LabelRole, expiresLabel);

        expiresLineEdit = new QLineEdit(detailsGroupBox);
        expiresLineEdit->setObjectName(QString::fromUtf8("expiresLineEdit"));
        expiresLineEdit->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, expiresLineEdit);

        secureLabel = new QLabel(detailsGroupBox);
        secureLabel->setObjectName(QString::fromUtf8("secureLabel"));
        secureLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        secureLabel->setWordWrap(false);

        formLayout->setWidget(5, QFormLayout::LabelRole, secureLabel);

        secureLineEdit = new QLineEdit(detailsGroupBox);
        secureLineEdit->setObjectName(QString::fromUtf8("secureLineEdit"));
        secureLineEdit->setReadOnly(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, secureLineEdit);


        gridLayout->addWidget(detailsGroupBox, 6, 0, 1, 2);

#if QT_CONFIG(shortcut)
        nameLabel->setBuddy(nameLineEdit);
        valueLabel->setBuddy(valueLineEdit);
        domainLabel->setBuddy(domainLineEdit);
        patchLabel->setBuddy(pathLineEdit);
        expiresLabel->setBuddy(expiresLineEdit);
        secureLabel->setBuddy(secureLineEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KCookiesManagementUI);

        QMetaObject::connectSlotsByName(KCookiesManagementUI);
    } // setupUi

    void retranslateUi(QWidget *KCookiesManagementUI)
    {
        searchLineEdit->setPlaceholderText(tr2i18n("Search", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = cookiesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, tr2i18n("Cookie Name", nullptr));
        ___qtreewidgetitem->setText(0, tr2i18n("Site", nullptr));
#if QT_CONFIG(tooltip)
        cookiesTreeWidget->setToolTip(tr2i18n("Search interactively for domains and hosts", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteButton->setText(tr2i18n("D&elete", nullptr));
        deleteAllButton->setText(tr2i18n("Delete A&ll", nullptr));
        configPolicyButton->setText(tr2i18n("Configure &Policy...", nullptr));
        reloadButton->setText(tr2i18n("&Reload List", nullptr));
        detailsGroupBox->setTitle(tr2i18n("Details", nullptr));
        nameLabel->setText(tr2i18n("Name:", nullptr));
        valueLabel->setText(tr2i18n("Value:", nullptr));
        domainLabel->setText(tr2i18n("Domain:", nullptr));
        patchLabel->setText(tr2i18n("Path:", nullptr));
        expiresLabel->setText(tr2i18n("Expires:", nullptr));
        secureLabel->setText(tr2i18n("Secure:", nullptr));
        (void)KCookiesManagementUI;
    } // retranslateUi

};

namespace Ui {
    class KCookiesManagementUI: public Ui_KCookiesManagementUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KCOOKIESMANAGEMENT_H

