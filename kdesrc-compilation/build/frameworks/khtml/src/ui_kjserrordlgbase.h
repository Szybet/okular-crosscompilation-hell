#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'kjserrordlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KJSERRORDLGBASE_H
#define UI_KJSERRORDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_KJSErrorDlgBase
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *_errorText;
    QFrame *line1;
    QLabel *_url;
    QDialogButtonBox *_buttonBox;

    void setupUi(QDialog *KJSErrorDlgBase)
    {
        if (KJSErrorDlgBase->objectName().isEmpty())
            KJSErrorDlgBase->setObjectName(QString::fromUtf8("KJSErrorDlgBase"));
        KJSErrorDlgBase->resize(600, 484);
        gridLayout = new QGridLayout(KJSErrorDlgBase);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(11, 11, 11, 11);
        _errorText = new QTextBrowser(KJSErrorDlgBase);
        _errorText->setObjectName(QString::fromUtf8("_errorText"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(_errorText->sizePolicy().hasHeightForWidth());
        _errorText->setSizePolicy(sizePolicy);
        _errorText->setAcceptRichText(false);

        gridLayout->addWidget(_errorText, 1, 0, 1, 1);

        line1 = new QFrame(KJSErrorDlgBase);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        line1->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(line1, 2, 0, 1, 1);

        _url = new QLabel(KJSErrorDlgBase);
        _url->setObjectName(QString::fromUtf8("_url"));

        gridLayout->addWidget(_url, 0, 0, 1, 1);

        _buttonBox = new QDialogButtonBox(KJSErrorDlgBase);
        _buttonBox->setObjectName(QString::fromUtf8("_buttonBox"));
        _buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(_buttonBox, 3, 0, 1, 1);


        retranslateUi(KJSErrorDlgBase);

        QMetaObject::connectSlotsByName(KJSErrorDlgBase);
    } // setupUi

    void retranslateUi(QDialog *KJSErrorDlgBase)
    {
        KJSErrorDlgBase->setWindowTitle(tr2i18n("JavaScript Errors", nullptr));
#if QT_CONFIG(whatsthis)
        KJSErrorDlgBase->setWhatsThis(tr2i18n("This dialog provides you with notification and details of scripting errors that occur on web pages.  In many cases it is due to an error in the web site as designed by its author.  In other cases it is the result of a programming error in Konqueror.  If you suspect the former, please contact the webmaster of the site in question.  Conversely if you suspect an error in Konqueror, please file a bug report at https://bugs.kde.org/.  A test case which illustrates the problem will be appreciated.", nullptr));
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

namespace Ui {
    class KJSErrorDlgBase: public Ui_KJSErrorDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KJSERRORDLGBASE_H

