#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'keygenwizard2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYGENWIZARD2_H
#define UI_KEYGENWIZARD2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <klineedit.h>

QT_BEGIN_NAMESPACE

class Ui_KGWizardPage2
{
public:
    QGridLayout *gridLayout;
    QLabel *TextLabel4;
    QLabel *TextLabel6;
    QLabel *TextLabel5;
    KLineEdit *_password1;
    KLineEdit *_password2;

    void setupUi(QWidget *KGWizardPage2)
    {
        if (KGWizardPage2->objectName().isEmpty())
            KGWizardPage2->setObjectName(QString::fromUtf8("KGWizardPage2"));
        KGWizardPage2->resize(492, 156);
        gridLayout = new QGridLayout(KGWizardPage2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        TextLabel4 = new QLabel(KGWizardPage2);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        TextLabel4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        TextLabel4->setWordWrap(true);

        gridLayout->addWidget(TextLabel4, 0, 0, 1, 2);

        TextLabel6 = new QLabel(KGWizardPage2);
        TextLabel6->setObjectName(QString::fromUtf8("TextLabel6"));

        gridLayout->addWidget(TextLabel6, 2, 0, 1, 1);

        TextLabel5 = new QLabel(KGWizardPage2);
        TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));

        gridLayout->addWidget(TextLabel5, 1, 0, 1, 1);

        _password1 = new KLineEdit(KGWizardPage2);
        _password1->setObjectName(QString::fromUtf8("_password1"));
        _password1->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(_password1, 1, 1, 1, 1);

        _password2 = new KLineEdit(KGWizardPage2);
        _password2->setObjectName(QString::fromUtf8("_password2"));
        _password2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(_password2, 2, 1, 1, 1);

#if QT_CONFIG(shortcut)
        TextLabel6->setBuddy(_password2);
        TextLabel5->setBuddy(_password1);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KGWizardPage2);

        QMetaObject::connectSlotsByName(KGWizardPage2);
    } // setupUi

    void retranslateUi(QWidget *KGWizardPage2)
    {
        TextLabel4->setText(tr2i18n("You must now provide a password for the certificate request. Please choose a very secure password as this will be used to encrypt your private key.", nullptr));
        TextLabel6->setText(tr2i18n("&Repeat password:", nullptr));
        TextLabel5->setText(tr2i18n("&Choose password:", nullptr));
        (void)KGWizardPage2;
    } // retranslateUi

};

namespace Ui {
    class KGWizardPage2: public Ui_KGWizardPage2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KEYGENWIZARD2_H

