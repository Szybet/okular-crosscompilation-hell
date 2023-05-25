#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'storepassbar_base.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOREPASSBAR_BASE_H
#define UI_STOREPASSBAR_BASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StorePassBarBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *m_label;
    QSpacerItem *horizontalSpacer;
    QToolButton *m_store;
    QToolButton *m_neverForThisSite;
    QToolButton *m_doNotStore;

    void setupUi(QWidget *StorePassBarBase)
    {
        if (StorePassBarBase->objectName().isEmpty())
            StorePassBarBase->setObjectName(QString::fromUtf8("StorePassBarBase"));
        StorePassBarBase->resize(640, 32);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StorePassBarBase->sizePolicy().hasHeightForWidth());
        StorePassBarBase->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(StorePassBarBase);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_label = new QLabel(StorePassBarBase);
        m_label->setObjectName(QString::fromUtf8("m_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_label->sizePolicy().hasHeightForWidth());
        m_label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(m_label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_store = new QToolButton(StorePassBarBase);
        m_store->setObjectName(QString::fromUtf8("m_store"));
        m_store->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(m_store);

        m_neverForThisSite = new QToolButton(StorePassBarBase);
        m_neverForThisSite->setObjectName(QString::fromUtf8("m_neverForThisSite"));
        m_neverForThisSite->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(m_neverForThisSite);

        m_doNotStore = new QToolButton(StorePassBarBase);
        m_doNotStore->setObjectName(QString::fromUtf8("m_doNotStore"));
        m_doNotStore->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(m_doNotStore);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(StorePassBarBase);

        QMetaObject::connectSlotsByName(StorePassBarBase);
    } // setupUi

    void retranslateUi(QWidget *StorePassBarBase)
    {
        m_label->setText(tr2i18n("Do you want to store this password?", nullptr));
        m_store->setText(tr2i18n("&Store", nullptr));
        m_neverForThisSite->setText(tr2i18n("Ne&ver store for this site", nullptr));
        m_doNotStore->setText(tr2i18n("Do &not store this time", nullptr));
        (void)StorePassBarBase;
    } // retranslateUi

};

namespace Ui {
    class StorePassBarBase: public Ui_StorePassBarBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // STOREPASSBAR_BASE_H

