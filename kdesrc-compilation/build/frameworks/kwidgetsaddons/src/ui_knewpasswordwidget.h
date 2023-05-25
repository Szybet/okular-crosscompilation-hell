/********************************************************************************
** Form generated from reading UI file 'knewpasswordwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KNEWPASSWORDWIDGET_H
#define UI_KNEWPASSWORDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kpasswordlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_KNewPasswordWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelPassword;
    QLabel *labelVerifyPassword;
    KPasswordLineEdit *linePassword;
    QLineEdit *lineVerifyPassword;
    QHBoxLayout *horizontalLayout;
    QLabel *labelStrengthMeter;
    QProgressBar *strengthBar;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *KNewPasswordWidget)
    {
        if (KNewPasswordWidget->objectName().isEmpty())
            KNewPasswordWidget->setObjectName(QString::fromUtf8("KNewPasswordWidget"));
        KNewPasswordWidget->resize(273, 130);
        verticalLayout = new QVBoxLayout(KNewPasswordWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelPassword = new QLabel(KNewPasswordWidget);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPassword);

        labelVerifyPassword = new QLabel(KNewPasswordWidget);
        labelVerifyPassword->setObjectName(QString::fromUtf8("labelVerifyPassword"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelVerifyPassword);

        linePassword = new KPasswordLineEdit(KNewPasswordWidget);
        linePassword->setObjectName(QString::fromUtf8("linePassword"));

        formLayout->setWidget(1, QFormLayout::FieldRole, linePassword);

        lineVerifyPassword = new QLineEdit(KNewPasswordWidget);
        lineVerifyPassword->setObjectName(QString::fromUtf8("lineVerifyPassword"));
        lineVerifyPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineVerifyPassword);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelStrengthMeter = new QLabel(KNewPasswordWidget);
        labelStrengthMeter->setObjectName(QString::fromUtf8("labelStrengthMeter"));

        horizontalLayout->addWidget(labelStrengthMeter);

        strengthBar = new QProgressBar(KNewPasswordWidget);
        strengthBar->setObjectName(QString::fromUtf8("strengthBar"));
        strengthBar->setValue(0);
        strengthBar->setTextVisible(false);

        horizontalLayout->addWidget(strengthBar);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#if QT_CONFIG(shortcut)
        labelPassword->setBuddy(linePassword);
        labelVerifyPassword->setBuddy(lineVerifyPassword);
        labelStrengthMeter->setBuddy(strengthBar);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KNewPasswordWidget);

        QMetaObject::connectSlotsByName(KNewPasswordWidget);
    } // setupUi

    void retranslateUi(QWidget *KNewPasswordWidget)
    {
        labelPassword->setText(QCoreApplication::translate("KNewPasswordWidget", "Password:", "@label:textbox"));
        labelVerifyPassword->setText(QCoreApplication::translate("KNewPasswordWidget", "&Verify:", "@label:textbox"));
        labelStrengthMeter->setText(QCoreApplication::translate("KNewPasswordWidget", "Password strength &meter:", "@label"));
        (void)KNewPasswordWidget;
    } // retranslateUi

};

namespace Ui {
    class KNewPasswordWidget: public Ui_KNewPasswordWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KNEWPASSWORDWIDGET_H
