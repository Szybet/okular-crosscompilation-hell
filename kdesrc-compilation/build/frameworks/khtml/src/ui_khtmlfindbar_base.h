#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'khtmlfindbar_base.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KHTMLFINDBAR_BASE_H
#define UI_KHTMLFINDBAR_BASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "khistorycombobox.h"
#include "ksqueezedtextlabel.h"

QT_BEGIN_NAMESPACE

class Ui_KHTMLFindBarBase
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    KHistoryComboBox *m_find;
    QToolButton *m_next;
    QToolButton *m_previous;
    QSpacerItem *horizontalSpacer;
    QToolButton *m_options;
    QSpacerItem *horizontalSpacer_2;
    KSqueezedTextLabel *m_statusLabel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *KHTMLFindBarBase)
    {
        if (KHTMLFindBarBase->objectName().isEmpty())
            KHTMLFindBarBase->setObjectName(QString::fromUtf8("KHTMLFindBarBase"));
        KHTMLFindBarBase->resize(640, 32);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(KHTMLFindBarBase->sizePolicy().hasHeightForWidth());
        KHTMLFindBarBase->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(KHTMLFindBarBase);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 2);
        label = new QLabel(KHTMLFindBarBase);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        m_find = new KHistoryComboBox(KHTMLFindBarBase);
        m_find->setObjectName(QString::fromUtf8("m_find"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(10);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_find->sizePolicy().hasHeightForWidth());
        m_find->setSizePolicy(sizePolicy2);
        m_find->setMinimumSize(QSize(60, 0));
        m_find->setMaximumSize(QSize(180, 16777215));

        horizontalLayout->addWidget(m_find);

        m_next = new QToolButton(KHTMLFindBarBase);
        m_next->setObjectName(QString::fromUtf8("m_next"));
        m_next->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(m_next);

        m_previous = new QToolButton(KHTMLFindBarBase);
        m_previous->setObjectName(QString::fromUtf8("m_previous"));
        m_previous->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(m_previous);

        horizontalSpacer = new QSpacerItem(14, 26, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_options = new QToolButton(KHTMLFindBarBase);
        m_options->setObjectName(QString::fromUtf8("m_options"));
        m_options->setCheckable(false);
        m_options->setPopupMode(QToolButton::InstantPopup);
        m_options->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(m_options);

        horizontalSpacer_2 = new QSpacerItem(16, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        m_statusLabel = new KSqueezedTextLabel(KHTMLFindBarBase);
        m_statusLabel->setObjectName(QString::fromUtf8("m_statusLabel"));

        horizontalLayout->addWidget(m_statusLabel);

        horizontalSpacer_3 = new QSpacerItem(16, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

#if QT_CONFIG(shortcut)
        label->setBuddy(m_find);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KHTMLFindBarBase);
        QObject::connect(m_find, SIGNAL(returnPressed()), m_next, SLOT(click()));

        QMetaObject::connectSlotsByName(KHTMLFindBarBase);
    } // setupUi

    void retranslateUi(QWidget *KHTMLFindBarBase)
    {
        label->setText(tr2i18n("F&ind:", nullptr));
        m_next->setText(tr2i18n("&Next", nullptr));
        m_previous->setText(tr2i18n("&Previous", nullptr));
        m_options->setText(tr2i18n("Opt&ions", nullptr));
        (void)KHTMLFindBarBase;
    } // retranslateUi

};

namespace Ui {
    class KHTMLFindBarBase: public Ui_KHTMLFindBarBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KHTMLFINDBAR_BASE_H

