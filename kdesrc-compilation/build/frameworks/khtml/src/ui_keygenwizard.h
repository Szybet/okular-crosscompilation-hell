#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'keygenwizard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYGENWIZARD_H
#define UI_KEYGENWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KGWizardPage1
{
public:
    QGridLayout *gridLayout;
    QLabel *TextLabel1;

    void setupUi(QWidget *KGWizardPage1)
    {
        if (KGWizardPage1->objectName().isEmpty())
            KGWizardPage1->setObjectName(QString::fromUtf8("KGWizardPage1"));
        KGWizardPage1->resize(621, 98);
        gridLayout = new QGridLayout(KGWizardPage1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        TextLabel1 = new QLabel(KGWizardPage1);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setTextFormat(Qt::RichText);
        TextLabel1->setScaledContents(false);
        TextLabel1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        TextLabel1->setWordWrap(true);

        gridLayout->addWidget(TextLabel1, 0, 0, 1, 1);


        retranslateUi(KGWizardPage1);

        QMetaObject::connectSlotsByName(KGWizardPage1);
    } // setupUi

    void retranslateUi(QWidget *KGWizardPage1)
    {
        TextLabel1->setText(tr2i18n("You have indicated that you wish to obtain or purchase a secure certificate. This wizard is intended to guide you through the procedure. You may cancel at any time, and this will abort the transaction.", nullptr));
        (void)KGWizardPage1;
    } // retranslateUi

};

namespace Ui {
    class KGWizardPage1: public Ui_KGWizardPage1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KEYGENWIZARD_H

