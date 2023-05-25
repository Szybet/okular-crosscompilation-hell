/********************************************************************************
** Form generated from reading UI file 'knewpassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KNEWPASSWORDDIALOG_H
#define UI_KNEWPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "kmessagewidget.h"
#include "knewpasswordwidget.h"

QT_BEGIN_NAMESPACE

class Ui_KNewPasswordDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelIcon;
    QLabel *labelPrompt;
    KMessageWidget *statusMsgWidget;
    KNewPasswordWidget *pwdWidget;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *KNewPasswordDialog)
    {
        if (KNewPasswordDialog->objectName().isEmpty())
            KNewPasswordDialog->setObjectName(QString::fromUtf8("KNewPasswordDialog"));
        verticalLayout = new QVBoxLayout(KNewPasswordDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelIcon = new QLabel(KNewPasswordDialog);
        labelIcon->setObjectName(QString::fromUtf8("labelIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelIcon->sizePolicy().hasHeightForWidth());
        labelIcon->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(labelIcon);

        labelPrompt = new QLabel(KNewPasswordDialog);
        labelPrompt->setObjectName(QString::fromUtf8("labelPrompt"));
        labelPrompt->setWordWrap(true);

        horizontalLayout_2->addWidget(labelPrompt);


        verticalLayout->addLayout(horizontalLayout_2);

        statusMsgWidget = new KMessageWidget(KNewPasswordDialog);
        statusMsgWidget->setObjectName(QString::fromUtf8("statusMsgWidget"));

        verticalLayout->addWidget(statusMsgWidget);

        pwdWidget = new KNewPasswordWidget(KNewPasswordDialog);
        pwdWidget->setObjectName(QString::fromUtf8("pwdWidget"));

        verticalLayout->addWidget(pwdWidget);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(KNewPasswordDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(KNewPasswordDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), KNewPasswordDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), KNewPasswordDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(KNewPasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *KNewPasswordDialog)
    {
        (void)KNewPasswordDialog;
    } // retranslateUi

};

namespace Ui {
    class KNewPasswordDialog: public Ui_KNewPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KNEWPASSWORDDIALOG_H
