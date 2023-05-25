/********************************************************************************
** Form generated from reading UI file 'kpassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KPASSWORDDIALOG_H
#define UI_KPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kpasswordlineedit.h"
#include "ktitlewidget.h"

QT_BEGIN_NAMESPACE

class Ui_KPasswordDialog
{
public:
    QVBoxLayout *vBoxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *pixmapLabel;
    QLabel *prompt;
    QSpacerItem *spacerItem;
    KTitleWidget *errorMessage;
    QRadioButton *anonymousRadioButton;
    QRadioButton *usePasswordButton;
    QWidget *credentialsGroup;
    QFormLayout *formLayout;
    QLabel *userNameLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *userEdit;
    QPushButton *userEditContextHelpButton;
    QLabel *domainLabel;
    QLineEdit *domainEdit;
    QLabel *passwordLabel;
    KPasswordLineEdit *passEdit;
    QCheckBox *keepCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *KPasswordDialog)
    {
        if (KPasswordDialog->objectName().isEmpty())
            KPasswordDialog->setObjectName(QString::fromUtf8("KPasswordDialog"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(KPasswordDialog->sizePolicy().hasHeightForWidth());
        KPasswordDialog->setSizePolicy(sizePolicy);
        vBoxLayout = new QVBoxLayout(KPasswordDialog);
        vBoxLayout->setObjectName(QString::fromUtf8("vBoxLayout"));
        vBoxLayout->setSizeConstraint(QLayout::SetFixedSize);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        pixmapLabel = new QLabel(KPasswordDialog);
        pixmapLabel->setObjectName(QString::fromUtf8("pixmapLabel"));
        pixmapLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        hboxLayout->addWidget(pixmapLabel);

        prompt = new QLabel(KPasswordDialog);
        prompt->setObjectName(QString::fromUtf8("prompt"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(prompt->sizePolicy().hasHeightForWidth());
        prompt->setSizePolicy(sizePolicy1);
        prompt->setTextFormat(Qt::RichText);
        prompt->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        prompt->setWordWrap(true);

        hboxLayout->addWidget(prompt);


        vBoxLayout->addLayout(hboxLayout);

        spacerItem = new QSpacerItem(400, 16, QSizePolicy::Minimum, QSizePolicy::Ignored);

        vBoxLayout->addItem(spacerItem);

        errorMessage = new KTitleWidget(KPasswordDialog);
        errorMessage->setObjectName(QString::fromUtf8("errorMessage"));

        vBoxLayout->addWidget(errorMessage);

        anonymousRadioButton = new QRadioButton(KPasswordDialog);
        anonymousRadioButton->setObjectName(QString::fromUtf8("anonymousRadioButton"));

        vBoxLayout->addWidget(anonymousRadioButton);

        usePasswordButton = new QRadioButton(KPasswordDialog);
        usePasswordButton->setObjectName(QString::fromUtf8("usePasswordButton"));
        usePasswordButton->setChecked(true);

        vBoxLayout->addWidget(usePasswordButton);

        credentialsGroup = new QWidget(KPasswordDialog);
        credentialsGroup->setObjectName(QString::fromUtf8("credentialsGroup"));
        formLayout = new QFormLayout(credentialsGroup);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(1, 1, 1, 1);
        userNameLabel = new QLabel(credentialsGroup);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, userNameLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        userEdit = new QLineEdit(credentialsGroup);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));
        userEdit->setClearButtonEnabled(true);

        horizontalLayout->addWidget(userEdit);

        userEditContextHelpButton = new QPushButton(credentialsGroup);
        userEditContextHelpButton->setObjectName(QString::fromUtf8("userEditContextHelpButton"));

        horizontalLayout->addWidget(userEditContextHelpButton);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        domainLabel = new QLabel(credentialsGroup);
        domainLabel->setObjectName(QString::fromUtf8("domainLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, domainLabel);

        domainEdit = new QLineEdit(credentialsGroup);
        domainEdit->setObjectName(QString::fromUtf8("domainEdit"));
        domainEdit->setClearButtonEnabled(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, domainEdit);

        passwordLabel = new QLabel(credentialsGroup);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, passwordLabel);

        passEdit = new KPasswordLineEdit(credentialsGroup);
        passEdit->setObjectName(QString::fromUtf8("passEdit"));
        passEdit->setClearButtonEnabled(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, passEdit);

        keepCheckBox = new QCheckBox(credentialsGroup);
        keepCheckBox->setObjectName(QString::fromUtf8("keepCheckBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, keepCheckBox);


        vBoxLayout->addWidget(credentialsGroup);

        buttonBox = new QDialogButtonBox(KPasswordDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vBoxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(anonymousRadioButton, usePasswordButton);
        QWidget::setTabOrder(usePasswordButton, userEdit);
        QWidget::setTabOrder(userEdit, domainEdit);
        QWidget::setTabOrder(domainEdit, passEdit);
        QWidget::setTabOrder(passEdit, keepCheckBox);

        retranslateUi(KPasswordDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), KPasswordDialog, SLOT(accept()));
        QObject::connect(usePasswordButton, SIGNAL(toggled(bool)), credentialsGroup, SLOT(setEnabled(bool)));
        QObject::connect(buttonBox, SIGNAL(rejected()), KPasswordDialog, SLOT(reject()));
        QObject::connect(usePasswordButton, SIGNAL(clicked()), credentialsGroup, SLOT(setFocus()));

        QMetaObject::connectSlotsByName(KPasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *KPasswordDialog)
    {
        prompt->setText(QCoreApplication::translate("KPasswordDialog", "Supply a username and password below.", nullptr));
        anonymousRadioButton->setText(QCoreApplication::translate("KPasswordDialog", "No password, use anonymous (or &guest) login", "@option:radio"));
        usePasswordButton->setText(QCoreApplication::translate("KPasswordDialog", "Use this password:", "@option:radio"));
        userNameLabel->setText(QCoreApplication::translate("KPasswordDialog", "Username:", "@label:textbox"));
        userEditContextHelpButton->setText(QString());
        domainLabel->setText(QCoreApplication::translate("KPasswordDialog", "Domain:", "@label:textbox"));
        passwordLabel->setText(QCoreApplication::translate("KPasswordDialog", "Password:", "@label:textbox"));
        keepCheckBox->setText(QCoreApplication::translate("KPasswordDialog", "Remember password", "@option:check"));
        (void)KPasswordDialog;
    } // retranslateUi

};

namespace Ui {
    class KPasswordDialog: public Ui_KPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KPASSWORDDIALOG_H
