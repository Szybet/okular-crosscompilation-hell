#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'kproxydlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KPROXYDLG_H
#define UI_KPROXYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kmessagewidget.h"
#include "kurlrequester.h"

QT_BEGIN_NAMESPACE

class Ui_ProxyDialogUI
{
public:
    QGridLayout *gridLayout;
    QRadioButton *noProxyRadioButton;
    QRadioButton *autoDiscoverProxyRadioButton;
    QRadioButton *autoScriptProxyRadioButton;
    QGroupBox *proxyConfigScriptGroupBox;
    QVBoxLayout *verticalLayout_2;
    KUrlRequester *proxyScriptUrlRequester;
    QRadioButton *systemProxyRadioButton;
    QPushButton *autoDetectButton;
    QGroupBox *systemProxyGroupBox;
    QFormLayout *formLayout_2;
    QLabel *systemProxyHttpLabel;
    QLineEdit *systemProxyHttpEdit;
    QLabel *systemProxyHttpsLabel;
    QLineEdit *systemProxyHttpsEdit;
    QLabel *systemProxyFtpLabel;
    QLineEdit *systemProxyFtpEdit;
    QLabel *systemProxySocksLabel;
    QLineEdit *systemProxySocksEdit;
    QLabel *sysNoProxyLabel;
    QLineEdit *systemNoProxyEdit;
    QCheckBox *showEnvValueCheckBox;
    QRadioButton *manualProxyRadioButton;
    QGroupBox *manualProxyGroupBox;
    QFormLayout *formLayout;
    QLabel *manualProxyHttpEditLabel;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *manualProxyHttpEdit;
    QLabel *manualProxyHttpSpinBoxLabel;
    QSpinBox *manualProxyHttpSpinBox;
    QCheckBox *useSameProxyCheckBox;
    QLabel *manualProxyHttpsEditLabel;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *manualProxyHttpsEdit;
    QLabel *manualProxyHttpsSpinBoxLabel;
    QSpinBox *manualProxyHttpsSpinBox;
    QLabel *manualProxyFtpEditLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *manualProxyFtpEdit;
    QLabel *manualProxyFtpSpinBoxLabel;
    QSpinBox *manualProxyFtpSpinBox;
    QLabel *manualProxySocksEditLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *manualProxySocksEdit;
    QLabel *manualProxySocksSpinBoxLabel;
    QSpinBox *manualProxySocksSpinBox;
    QLabel *manNoProxyLabel;
    QLineEdit *manualNoProxyEdit;
    QCheckBox *useReverseProxyCheckBox;
    QSpacerItem *verticalSpacer;
    KMessageWidget *infoMessageWidget;

    void setupUi(QWidget *ProxyDialogUI)
    {
        if (ProxyDialogUI->objectName().isEmpty())
            ProxyDialogUI->setObjectName(QString::fromUtf8("ProxyDialogUI"));
        ProxyDialogUI->resize(513, 567);
        gridLayout = new QGridLayout(ProxyDialogUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        noProxyRadioButton = new QRadioButton(ProxyDialogUI);
        noProxyRadioButton->setObjectName(QString::fromUtf8("noProxyRadioButton"));
        noProxyRadioButton->setChecked(true);

        gridLayout->addWidget(noProxyRadioButton, 0, 0, 1, 1);

        autoDiscoverProxyRadioButton = new QRadioButton(ProxyDialogUI);
        autoDiscoverProxyRadioButton->setObjectName(QString::fromUtf8("autoDiscoverProxyRadioButton"));
        autoDiscoverProxyRadioButton->setEnabled(true);

        gridLayout->addWidget(autoDiscoverProxyRadioButton, 1, 0, 1, 2);

        autoScriptProxyRadioButton = new QRadioButton(ProxyDialogUI);
        autoScriptProxyRadioButton->setObjectName(QString::fromUtf8("autoScriptProxyRadioButton"));
        autoScriptProxyRadioButton->setEnabled(true);

        gridLayout->addWidget(autoScriptProxyRadioButton, 2, 0, 1, 2);

        proxyConfigScriptGroupBox = new QGroupBox(ProxyDialogUI);
        proxyConfigScriptGroupBox->setObjectName(QString::fromUtf8("proxyConfigScriptGroupBox"));
        proxyConfigScriptGroupBox->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(proxyConfigScriptGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 0, 0, 0);
        proxyScriptUrlRequester = new KUrlRequester(proxyConfigScriptGroupBox);
        proxyScriptUrlRequester->setObjectName(QString::fromUtf8("proxyScriptUrlRequester"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(proxyScriptUrlRequester->sizePolicy().hasHeightForWidth());
        proxyScriptUrlRequester->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(proxyScriptUrlRequester);


        gridLayout->addWidget(proxyConfigScriptGroupBox, 3, 0, 1, 4);

        systemProxyRadioButton = new QRadioButton(ProxyDialogUI);
        systemProxyRadioButton->setObjectName(QString::fromUtf8("systemProxyRadioButton"));
        systemProxyRadioButton->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(systemProxyRadioButton->sizePolicy().hasHeightForWidth());
        systemProxyRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(systemProxyRadioButton, 4, 0, 1, 1);

        autoDetectButton = new QPushButton(ProxyDialogUI);
        autoDetectButton->setObjectName(QString::fromUtf8("autoDetectButton"));

        gridLayout->addWidget(autoDetectButton, 4, 3, 1, 1);

        systemProxyGroupBox = new QGroupBox(ProxyDialogUI);
        systemProxyGroupBox->setObjectName(QString::fromUtf8("systemProxyGroupBox"));
        systemProxyGroupBox->setFlat(true);
        formLayout_2 = new QFormLayout(systemProxyGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(20, 0, 0, 0);
        systemProxyHttpLabel = new QLabel(systemProxyGroupBox);
        systemProxyHttpLabel->setObjectName(QString::fromUtf8("systemProxyHttpLabel"));
        systemProxyHttpLabel->setWordWrap(false);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, systemProxyHttpLabel);

        systemProxyHttpEdit = new QLineEdit(systemProxyGroupBox);
        systemProxyHttpEdit->setObjectName(QString::fromUtf8("systemProxyHttpEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(systemProxyHttpEdit->sizePolicy().hasHeightForWidth());
        systemProxyHttpEdit->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, systemProxyHttpEdit);

        systemProxyHttpsLabel = new QLabel(systemProxyGroupBox);
        systemProxyHttpsLabel->setObjectName(QString::fromUtf8("systemProxyHttpsLabel"));
        systemProxyHttpsLabel->setWordWrap(false);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, systemProxyHttpsLabel);

        systemProxyHttpsEdit = new QLineEdit(systemProxyGroupBox);
        systemProxyHttpsEdit->setObjectName(QString::fromUtf8("systemProxyHttpsEdit"));
        sizePolicy2.setHeightForWidth(systemProxyHttpsEdit->sizePolicy().hasHeightForWidth());
        systemProxyHttpsEdit->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, systemProxyHttpsEdit);

        systemProxyFtpLabel = new QLabel(systemProxyGroupBox);
        systemProxyFtpLabel->setObjectName(QString::fromUtf8("systemProxyFtpLabel"));
        systemProxyFtpLabel->setWordWrap(false);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, systemProxyFtpLabel);

        systemProxyFtpEdit = new QLineEdit(systemProxyGroupBox);
        systemProxyFtpEdit->setObjectName(QString::fromUtf8("systemProxyFtpEdit"));
        sizePolicy2.setHeightForWidth(systemProxyFtpEdit->sizePolicy().hasHeightForWidth());
        systemProxyFtpEdit->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, systemProxyFtpEdit);

        systemProxySocksLabel = new QLabel(systemProxyGroupBox);
        systemProxySocksLabel->setObjectName(QString::fromUtf8("systemProxySocksLabel"));
        systemProxySocksLabel->setWordWrap(false);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, systemProxySocksLabel);

        systemProxySocksEdit = new QLineEdit(systemProxyGroupBox);
        systemProxySocksEdit->setObjectName(QString::fromUtf8("systemProxySocksEdit"));
        sizePolicy2.setHeightForWidth(systemProxySocksEdit->sizePolicy().hasHeightForWidth());
        systemProxySocksEdit->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, systemProxySocksEdit);

        sysNoProxyLabel = new QLabel(systemProxyGroupBox);
        sysNoProxyLabel->setObjectName(QString::fromUtf8("sysNoProxyLabel"));
        sysNoProxyLabel->setWordWrap(false);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, sysNoProxyLabel);

        systemNoProxyEdit = new QLineEdit(systemProxyGroupBox);
        systemNoProxyEdit->setObjectName(QString::fromUtf8("systemNoProxyEdit"));
        sizePolicy2.setHeightForWidth(systemNoProxyEdit->sizePolicy().hasHeightForWidth());
        systemNoProxyEdit->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, systemNoProxyEdit);

        showEnvValueCheckBox = new QCheckBox(systemProxyGroupBox);
        showEnvValueCheckBox->setObjectName(QString::fromUtf8("showEnvValueCheckBox"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, showEnvValueCheckBox);


        gridLayout->addWidget(systemProxyGroupBox, 5, 0, 1, 4);

        manualProxyRadioButton = new QRadioButton(ProxyDialogUI);
        manualProxyRadioButton->setObjectName(QString::fromUtf8("manualProxyRadioButton"));
        manualProxyRadioButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(manualProxyRadioButton->sizePolicy().hasHeightForWidth());
        manualProxyRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(manualProxyRadioButton, 6, 0, 1, 2);

        manualProxyGroupBox = new QGroupBox(ProxyDialogUI);
        manualProxyGroupBox->setObjectName(QString::fromUtf8("manualProxyGroupBox"));
        manualProxyGroupBox->setFlat(true);
        formLayout = new QFormLayout(manualProxyGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setContentsMargins(20, 0, 0, 0);
        manualProxyHttpEditLabel = new QLabel(manualProxyGroupBox);
        manualProxyHttpEditLabel->setObjectName(QString::fromUtf8("manualProxyHttpEditLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(manualProxyHttpEditLabel->sizePolicy().hasHeightForWidth());
        manualProxyHttpEditLabel->setSizePolicy(sizePolicy3);
        manualProxyHttpEditLabel->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, manualProxyHttpEditLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        manualProxyHttpEdit = new QLineEdit(manualProxyGroupBox);
        manualProxyHttpEdit->setObjectName(QString::fromUtf8("manualProxyHttpEdit"));

        horizontalLayout_4->addWidget(manualProxyHttpEdit);

        manualProxyHttpSpinBoxLabel = new QLabel(manualProxyGroupBox);
        manualProxyHttpSpinBoxLabel->setObjectName(QString::fromUtf8("manualProxyHttpSpinBoxLabel"));

        horizontalLayout_4->addWidget(manualProxyHttpSpinBoxLabel);

        manualProxyHttpSpinBox = new QSpinBox(manualProxyGroupBox);
        manualProxyHttpSpinBox->setObjectName(QString::fromUtf8("manualProxyHttpSpinBox"));
        manualProxyHttpSpinBox->setMaximumSize(QSize(32767, 32767));
        manualProxyHttpSpinBox->setMaximum(65536);

        horizontalLayout_4->addWidget(manualProxyHttpSpinBox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);

        useSameProxyCheckBox = new QCheckBox(manualProxyGroupBox);
        useSameProxyCheckBox->setObjectName(QString::fromUtf8("useSameProxyCheckBox"));
        useSameProxyCheckBox->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, useSameProxyCheckBox);

        manualProxyHttpsEditLabel = new QLabel(manualProxyGroupBox);
        manualProxyHttpsEditLabel->setObjectName(QString::fromUtf8("manualProxyHttpsEditLabel"));
        sizePolicy3.setHeightForWidth(manualProxyHttpsEditLabel->sizePolicy().hasHeightForWidth());
        manualProxyHttpsEditLabel->setSizePolicy(sizePolicy3);
        manualProxyHttpsEditLabel->setWordWrap(false);

        formLayout->setWidget(2, QFormLayout::LabelRole, manualProxyHttpsEditLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        manualProxyHttpsEdit = new QLineEdit(manualProxyGroupBox);
        manualProxyHttpsEdit->setObjectName(QString::fromUtf8("manualProxyHttpsEdit"));

        horizontalLayout_3->addWidget(manualProxyHttpsEdit);

        manualProxyHttpsSpinBoxLabel = new QLabel(manualProxyGroupBox);
        manualProxyHttpsSpinBoxLabel->setObjectName(QString::fromUtf8("manualProxyHttpsSpinBoxLabel"));

        horizontalLayout_3->addWidget(manualProxyHttpsSpinBoxLabel);

        manualProxyHttpsSpinBox = new QSpinBox(manualProxyGroupBox);
        manualProxyHttpsSpinBox->setObjectName(QString::fromUtf8("manualProxyHttpsSpinBox"));
        manualProxyHttpsSpinBox->setMaximum(65536);

        horizontalLayout_3->addWidget(manualProxyHttpsSpinBox);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        manualProxyFtpEditLabel = new QLabel(manualProxyGroupBox);
        manualProxyFtpEditLabel->setObjectName(QString::fromUtf8("manualProxyFtpEditLabel"));
        sizePolicy3.setHeightForWidth(manualProxyFtpEditLabel->sizePolicy().hasHeightForWidth());
        manualProxyFtpEditLabel->setSizePolicy(sizePolicy3);
        manualProxyFtpEditLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        manualProxyFtpEditLabel->setWordWrap(false);

        formLayout->setWidget(3, QFormLayout::LabelRole, manualProxyFtpEditLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        manualProxyFtpEdit = new QLineEdit(manualProxyGroupBox);
        manualProxyFtpEdit->setObjectName(QString::fromUtf8("manualProxyFtpEdit"));

        horizontalLayout_2->addWidget(manualProxyFtpEdit);

        manualProxyFtpSpinBoxLabel = new QLabel(manualProxyGroupBox);
        manualProxyFtpSpinBoxLabel->setObjectName(QString::fromUtf8("manualProxyFtpSpinBoxLabel"));

        horizontalLayout_2->addWidget(manualProxyFtpSpinBoxLabel);

        manualProxyFtpSpinBox = new QSpinBox(manualProxyGroupBox);
        manualProxyFtpSpinBox->setObjectName(QString::fromUtf8("manualProxyFtpSpinBox"));
        manualProxyFtpSpinBox->setMaximum(65536);

        horizontalLayout_2->addWidget(manualProxyFtpSpinBox);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_2);

        manualProxySocksEditLabel = new QLabel(manualProxyGroupBox);
        manualProxySocksEditLabel->setObjectName(QString::fromUtf8("manualProxySocksEditLabel"));
        sizePolicy3.setHeightForWidth(manualProxySocksEditLabel->sizePolicy().hasHeightForWidth());
        manualProxySocksEditLabel->setSizePolicy(sizePolicy3);
        manualProxySocksEditLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, manualProxySocksEditLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        manualProxySocksEdit = new QLineEdit(manualProxyGroupBox);
        manualProxySocksEdit->setObjectName(QString::fromUtf8("manualProxySocksEdit"));

        horizontalLayout->addWidget(manualProxySocksEdit);

        manualProxySocksSpinBoxLabel = new QLabel(manualProxyGroupBox);
        manualProxySocksSpinBoxLabel->setObjectName(QString::fromUtf8("manualProxySocksSpinBoxLabel"));

        horizontalLayout->addWidget(manualProxySocksSpinBoxLabel);

        manualProxySocksSpinBox = new QSpinBox(manualProxyGroupBox);
        manualProxySocksSpinBox->setObjectName(QString::fromUtf8("manualProxySocksSpinBox"));
        manualProxySocksSpinBox->setMaximum(65536);

        horizontalLayout->addWidget(manualProxySocksSpinBox);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout);

        manNoProxyLabel = new QLabel(manualProxyGroupBox);
        manNoProxyLabel->setObjectName(QString::fromUtf8("manNoProxyLabel"));
        manNoProxyLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        manNoProxyLabel->setWordWrap(false);

        formLayout->setWidget(5, QFormLayout::LabelRole, manNoProxyLabel);

        manualNoProxyEdit = new QLineEdit(manualProxyGroupBox);
        manualNoProxyEdit->setObjectName(QString::fromUtf8("manualNoProxyEdit"));
        sizePolicy2.setHeightForWidth(manualNoProxyEdit->sizePolicy().hasHeightForWidth());
        manualNoProxyEdit->setSizePolicy(sizePolicy2);

        formLayout->setWidget(5, QFormLayout::FieldRole, manualNoProxyEdit);

        useReverseProxyCheckBox = new QCheckBox(manualProxyGroupBox);
        useReverseProxyCheckBox->setObjectName(QString::fromUtf8("useReverseProxyCheckBox"));
        useReverseProxyCheckBox->setEnabled(false);

        formLayout->setWidget(6, QFormLayout::FieldRole, useReverseProxyCheckBox);


        gridLayout->addWidget(manualProxyGroupBox, 7, 0, 1, 4);

        verticalSpacer = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 4);

        infoMessageWidget = new KMessageWidget(ProxyDialogUI);
        infoMessageWidget->setObjectName(QString::fromUtf8("infoMessageWidget"));
        sizePolicy.setHeightForWidth(infoMessageWidget->sizePolicy().hasHeightForWidth());
        infoMessageWidget->setSizePolicy(sizePolicy);
        infoMessageWidget->setMessageType(KMessageWidget::Warning);
        infoMessageWidget->setWordWrap(true);
        infoMessageWidget->setCloseButtonVisible(false);
        infoMessageWidget->setVisible(false);

        gridLayout->addWidget(infoMessageWidget, 9, 0, 1, 4);

#if QT_CONFIG(shortcut)
        systemProxyHttpLabel->setBuddy(systemProxyHttpEdit);
        systemProxyHttpsLabel->setBuddy(systemProxyHttpsEdit);
        systemProxyFtpLabel->setBuddy(systemProxyFtpEdit);
        systemProxySocksLabel->setBuddy(systemProxySocksEdit);
        sysNoProxyLabel->setBuddy(systemNoProxyEdit);
        manualProxyHttpEditLabel->setBuddy(manualProxyHttpEdit);
        manualProxyHttpSpinBoxLabel->setBuddy(manualProxyHttpSpinBox);
        manualProxyHttpsEditLabel->setBuddy(manualProxyHttpsEdit);
        manualProxyHttpsSpinBoxLabel->setBuddy(manualProxyHttpsSpinBox);
        manualProxyFtpEditLabel->setBuddy(manualProxyFtpEdit);
        manualProxyFtpSpinBoxLabel->setBuddy(manualProxyFtpSpinBox);
        manualProxySocksEditLabel->setBuddy(manualProxySocksEdit);
        manualProxySocksSpinBoxLabel->setBuddy(manualProxySocksSpinBox);
        manNoProxyLabel->setBuddy(manualNoProxyEdit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(noProxyRadioButton, autoDiscoverProxyRadioButton);
        QWidget::setTabOrder(autoDiscoverProxyRadioButton, autoScriptProxyRadioButton);
        QWidget::setTabOrder(autoScriptProxyRadioButton, proxyScriptUrlRequester);
        QWidget::setTabOrder(proxyScriptUrlRequester, systemProxyRadioButton);
        QWidget::setTabOrder(systemProxyRadioButton, autoDetectButton);
        QWidget::setTabOrder(autoDetectButton, systemProxyHttpEdit);
        QWidget::setTabOrder(systemProxyHttpEdit, systemProxyHttpsEdit);
        QWidget::setTabOrder(systemProxyHttpsEdit, systemProxyFtpEdit);
        QWidget::setTabOrder(systemProxyFtpEdit, systemProxySocksEdit);
        QWidget::setTabOrder(systemProxySocksEdit, systemNoProxyEdit);
        QWidget::setTabOrder(systemNoProxyEdit, showEnvValueCheckBox);
        QWidget::setTabOrder(showEnvValueCheckBox, manualProxyRadioButton);
        QWidget::setTabOrder(manualProxyRadioButton, manualProxyHttpEdit);
        QWidget::setTabOrder(manualProxyHttpEdit, manualProxyHttpSpinBox);
        QWidget::setTabOrder(manualProxyHttpSpinBox, useSameProxyCheckBox);
        QWidget::setTabOrder(useSameProxyCheckBox, manualProxyHttpsEdit);
        QWidget::setTabOrder(manualProxyHttpsEdit, manualProxyHttpsSpinBox);
        QWidget::setTabOrder(manualProxyHttpsSpinBox, manualProxyFtpEdit);
        QWidget::setTabOrder(manualProxyFtpEdit, manualProxyFtpSpinBox);
        QWidget::setTabOrder(manualProxyFtpSpinBox, manualProxySocksEdit);
        QWidget::setTabOrder(manualProxySocksEdit, manualProxySocksSpinBox);
        QWidget::setTabOrder(manualProxySocksSpinBox, manualNoProxyEdit);
        QWidget::setTabOrder(manualNoProxyEdit, useReverseProxyCheckBox);

        retranslateUi(ProxyDialogUI);
        QObject::connect(systemProxyRadioButton, SIGNAL(toggled(bool)), systemProxyGroupBox, SLOT(setVisible(bool)));
        QObject::connect(manualProxyRadioButton, SIGNAL(toggled(bool)), manualProxyGroupBox, SLOT(setVisible(bool)));
        QObject::connect(useSameProxyCheckBox, SIGNAL(toggled(bool)), manualProxyHttpsEdit, SLOT(setDisabled(bool)));
        QObject::connect(useSameProxyCheckBox, SIGNAL(toggled(bool)), manualProxyFtpEdit, SLOT(setDisabled(bool)));
        QObject::connect(useSameProxyCheckBox, SIGNAL(toggled(bool)), manualProxySocksEdit, SLOT(setDisabled(bool)));
        QObject::connect(showEnvValueCheckBox, SIGNAL(toggled(bool)), systemNoProxyEdit, SLOT(setDisabled(bool)));
        QObject::connect(showEnvValueCheckBox, SIGNAL(toggled(bool)), systemProxySocksEdit, SLOT(setDisabled(bool)));
        QObject::connect(showEnvValueCheckBox, SIGNAL(toggled(bool)), systemProxyFtpEdit, SLOT(setDisabled(bool)));
        QObject::connect(showEnvValueCheckBox, SIGNAL(toggled(bool)), systemProxyHttpsEdit, SLOT(setDisabled(bool)));
        QObject::connect(showEnvValueCheckBox, SIGNAL(toggled(bool)), systemProxyHttpEdit, SLOT(setDisabled(bool)));
        QObject::connect(autoScriptProxyRadioButton, SIGNAL(toggled(bool)), proxyConfigScriptGroupBox, SLOT(setVisible(bool)));
        QObject::connect(systemProxyRadioButton, SIGNAL(toggled(bool)), autoDetectButton, SLOT(setVisible(bool)));
        QObject::connect(useSameProxyCheckBox, SIGNAL(toggled(bool)), manualProxyHttpsSpinBox, SLOT(setDisabled(bool)));
        QObject::connect(useSameProxyCheckBox, SIGNAL(toggled(bool)), manualProxyFtpSpinBox, SLOT(setDisabled(bool)));
        QObject::connect(useSameProxyCheckBox, SIGNAL(toggled(bool)), manualProxySocksSpinBox, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(ProxyDialogUI);
    } // setupUi

    void retranslateUi(QWidget *ProxyDialogUI)
    {
#if QT_CONFIG(whatsthis)
        ProxyDialogUI->setWhatsThis(tr2i18n("<qt>\n"
"Setup proxy configuration.\n"
"<p>\n"
"A proxy server is an intermediate machine that sits between your computer and the Internet and provides services such as web page caching and filtering. Caching proxy servers give you faster access to web sites you have already visited by locally storing or caching those pages; filtering proxy servers usually provide the ability to block out requests for ads, spam, or anything else you want to block.\n"
"<p>\n"
"If you are uncertain whether or not you need to use a proxy server to connect to the Internet, consult your Internet service provider's setup guide or your system administrator.\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        noProxyRadioButton->setWhatsThis(tr2i18n("Connect to the Internet directly.", nullptr));
#endif // QT_CONFIG(whatsthis)
        noProxyRadioButton->setText(tr2i18n("No Proxy", nullptr));
#if QT_CONFIG(whatsthis)
        autoDiscoverProxyRadioButton->setWhatsThis(tr2i18n("<qt>\n"
"Automatically detect and configure the proxy settings.<p>\n"
"Automatic detection is performed using the <b>Web Proxy Auto-Discovery Protocol (WPAD)</b>.<p>\n"
"<b>NOTE:</b> This option might not work properly or not work at all in some UNIX/Linux distributions.\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        autoDiscoverProxyRadioButton->setText(tr2i18n("Detect proxy configuration automatically", nullptr));
#if QT_CONFIG(whatsthis)
        autoScriptProxyRadioButton->setWhatsThis(tr2i18n("Use the specified proxy script to configure the proxy settings.", nullptr));
#endif // QT_CONFIG(whatsthis)
        autoScriptProxyRadioButton->setText(tr2i18n("Use proxy auto configuration URL:", nullptr));
#if QT_CONFIG(whatsthis)
        proxyScriptUrlRequester->setWhatsThis(tr2i18n("Enter the address for the proxy configuration script.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        systemProxyRadioButton->setWhatsThis(tr2i18n("<qt><p>Use proxy settings defined on the system.</p>\n"
"<p>Some platforms offer system wide proxy configuration information and selecting this option allows you to use those settings.</p>\n"
"<p>On Mac platforms</p>\n"
"<p>On Windows platforms</p>\n"
"<p>On Unix and Linux platforms, such system proxy settings are usually defined through environment variables. The following environment variables are detected and used when present: <b>HTTP_PROXY</b>, <b>HTTPS_PROXY</b>, <b>FTP_PROXY</b>, <b>NO_PROXY</b>.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        systemProxyRadioButton->setText(tr2i18n("Use system proxy configuration:", nullptr));
#if QT_CONFIG(whatsthis)
        autoDetectButton->setWhatsThis(tr2i18n("<qt>Attempt automatic discovery of the environment variables used for setting system wide proxy information.<p> This feature works by searching for commonly used variable names such as HTTP_PROXY, FTP_PROXY and NO_PROXY.</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        autoDetectButton->setText(tr2i18n("Auto D&etect", nullptr));
#if QT_CONFIG(whatsthis)
        systemProxyHttpLabel->setWhatsThis(tr2i18n("<qt>\n"
"Enter the name of the environment variable, e.g. <b>HTTP_PROXY</b>, used to store the address of the HTTP proxy server.<p>\n"
"Alternatively, you can click on the <b>\"Auto Detect\"</b> button to attempt automatic discovery of this variable.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        systemProxyHttpLabel->setText(tr2i18n("HTTP Proxy:", nullptr));
#if QT_CONFIG(whatsthis)
        systemProxyHttpEdit->setWhatsThis(tr2i18n("<qt>\n"
"Enter the name of the environment variable, e.g. <b>HTTP_PROXY</b>, used to store the address of the HTTP proxy server.<p>\n"
"Alternatively, you can click on the <b>\"Auto Detect\"</b> button to attempt automatic discovery of this variable.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        systemProxyHttpsLabel->setWhatsThis(tr2i18n("<qt>\n"
"Enter the name of the environment variable, e.g. <b>HTTPS_PROXY</b>, used to store the address of the HTTPS proxy server.<p>\n"
"Alternatively, you can click on the <b>\"Auto Detect\"</b> button to attempt an automatic discovery of this variable.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        systemProxyHttpsLabel->setText(tr2i18n("SSL Proxy:", nullptr));
#if QT_CONFIG(whatsthis)
        systemProxyHttpsEdit->setWhatsThis(tr2i18n("<qt>\n"
"Enter the name of the environment variable, e.g. <b>HTTPS_PROXY</b>, used to store the address of the HTTPS proxy server.<p>\n"
"Alternatively, you can click on the <b>\"Auto Detect\"</b> button to attempt an automatic discovery of this variable.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        systemProxyFtpLabel->setWhatsThis(tr2i18n("<qt>\n"
"Enter the name of the environment variable, e.g. <b>FTP_PROXY</b>, used to store the address of the FTP proxy server.<p>\n"
"Alternatively, you can click on the <b>\"Auto Detect\"</b> button to attempt an automatic discovery of this variable.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        systemProxyFtpLabel->setText(tr2i18n("FTP Proxy:", nullptr));
#if QT_CONFIG(whatsthis)
        systemProxyFtpEdit->setWhatsThis(tr2i18n("<qt>\n"
"Enter the name of the environment variable, e.g. <b>FTP_PROXY</b>, used to store the address of the FTP proxy server.<p>\n"
"Alternatively, you can click on the <b>\"Auto Detect\"</b> button to attempt an automatic discovery of this variable.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        systemProxySocksLabel->setWhatsThis(tr2i18n("<qt>\n"
"Enter the name of the environment variable, e.g. <b>SOCKS_PROXY</b>, used to store the address of the SOCKS proxy server.<p>\n"
"Alternatively, you can click on the <b>\"Auto Detect\"</b> button to attempt an automatic discovery of this variable.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        systemProxySocksLabel->setText(tr2i18n("SOCKS Proxy:", nullptr));
#if QT_CONFIG(whatsthis)
        systemProxySocksEdit->setWhatsThis(tr2i18n("<qt>Enter the name of the environment variable, e.g. <b>SOCKS_PROXY</b>, used to store the address of the SOCKS proxy server.<p>Alternatively, you can click on the <b>&quot;Auto Detect&quot;</b> button to attempt an automatic discovery of this variable.</p></qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        sysNoProxyLabel->setWhatsThis(tr2i18n("<qt>\n"
"Enter the environment variable, e.g. <b>NO_PROXY</b>, used to store the addresses of sites for which the proxy server should not be used.<p>\n"
"Alternatively, you can click on the <b>\"Auto Detect\"</b> button to attempt an automatic discovery of this variable.\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        sysNoProxyLabel->setText(tr2i18n("Exceptions:", nullptr));
#if QT_CONFIG(whatsthis)
        systemNoProxyEdit->setWhatsThis(tr2i18n("<qt>Enter the environment variable, e.g. <b>NO_PROXY</b>, used to store the addresses of sites for which the above proxy settings should not be used.<p>Alternatively, you can click on the <b>&quot;Auto Detect&quot;</b> button to attempt an automatic discovery of this variable.</p></qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        showEnvValueCheckBox->setText(tr2i18n("Show the &value of the environment variables", nullptr));
#if QT_CONFIG(whatsthis)
        manualProxyRadioButton->setWhatsThis(tr2i18n("Manually enter proxy server configuration information.", nullptr));
#endif // QT_CONFIG(whatsthis)
        manualProxyRadioButton->setText(tr2i18n("Use manually specified proxy configuration:", nullptr));
        manualProxyGroupBox->setTitle(QString());
        manualProxyHttpEditLabel->setText(tr2i18n("HTTP Proxy:", nullptr));
#if QT_CONFIG(whatsthis)
        manualProxyHttpEdit->setWhatsThis(tr2i18n("Enter the address of the HTTP proxy server.", nullptr));
#endif // QT_CONFIG(whatsthis)
        manualProxyHttpSpinBoxLabel->setText(tr2i18n("Port:", nullptr));
#if QT_CONFIG(whatsthis)
        manualProxyHttpSpinBox->setWhatsThis(tr2i18n("Enter the port number of the HTTP proxy server.", nullptr));
#endif // QT_CONFIG(whatsthis)
        useSameProxyCheckBox->setText(tr2i18n("Use this proxy server for a&ll protocols", nullptr));
        manualProxyHttpsEditLabel->setText(tr2i18n("SSL Proxy:", nullptr));
#if QT_CONFIG(whatsthis)
        manualProxyHttpsEdit->setWhatsThis(tr2i18n("Enter the address of the HTTPS proxy server.", nullptr));
#endif // QT_CONFIG(whatsthis)
        manualProxyHttpsSpinBoxLabel->setText(tr2i18n("Port:", nullptr));
#if QT_CONFIG(whatsthis)
        manualProxyHttpsSpinBox->setWhatsThis(tr2i18n("Enter the port number of the HTTPS proxy server.", nullptr));
#endif // QT_CONFIG(whatsthis)
        manualProxyFtpEditLabel->setText(tr2i18n("FTP Proxy:", nullptr));
#if QT_CONFIG(whatsthis)
        manualProxyFtpEdit->setWhatsThis(tr2i18n("Enter the address of the FTP proxy server.", nullptr));
#endif // QT_CONFIG(whatsthis)
        manualProxyFtpSpinBoxLabel->setText(tr2i18n("Port:", nullptr));
#if QT_CONFIG(whatsthis)
        manualProxyFtpSpinBox->setWhatsThis(tr2i18n("Enter the port number of the FTP proxy server.", nullptr));
#endif // QT_CONFIG(whatsthis)
        manualProxySocksEditLabel->setText(tr2i18n("SOCKS Proxy:", nullptr));
#if QT_CONFIG(whatsthis)
        manualProxySocksEdit->setWhatsThis(tr2i18n("Enter the address of the SOCKS proxy server.", nullptr));
#endif // QT_CONFIG(whatsthis)
        manualProxySocksSpinBoxLabel->setText(tr2i18n("Port:", nullptr));
#if QT_CONFIG(whatsthis)
        manualProxySocksSpinBox->setWhatsThis(tr2i18n("Enter the port number of the SOCKS proxy server.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        manNoProxyLabel->setWhatsThis(tr2i18n("<qt>\n"
"Enter the environment variable, e.g. <b>NO_PROXY</b>, used to store the addresses of sites for which the proxy server should not be used.<p>\n"
"Alternatively, you can click on the <b>\"Auto Detect\"</b> button to attempt an automatic discovery of this variable.\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        manNoProxyLabel->setText(tr2i18n("Exceptions:", nullptr));
#if QT_CONFIG(whatsthis)
        manualNoProxyEdit->setWhatsThis(tr2i18n("<qt>\n"
"<p>Enter a comma separated list of hostnames or ip addresses that should be excluded from using the above proxy settings.</p>\n"
"<p>If you want to exclude all hosts for a given domain, then simply enter the domain name preceded by a dot. For example, to exclude all hostnames for <i>kde.org</i>, enter <i>.kde.org</i>. Wildcard characters such as '*' or '?' are not supported and will have no effect.</p>\n"
"<p>Additionally, you can also enter IP addresses, e.g. 127.0.0.1 and IP addresses with a subnet, e.g. 192.168.0.1/24.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        useReverseProxyCheckBox->setWhatsThis(tr2i18n("<qt>\n"
"Check this box if you want the above proxy settings to apply only to the addresses listed in the <i>Exceptions</i> list.</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        useReverseProxyCheckBox->setText(tr2i18n("Use proxy settings only for addresses in the Exceptions list", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProxyDialogUI: public Ui_ProxyDialogUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KPROXYDLG_H

