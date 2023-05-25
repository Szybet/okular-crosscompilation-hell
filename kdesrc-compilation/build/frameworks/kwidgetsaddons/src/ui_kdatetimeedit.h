/********************************************************************************
** Form generated from reading UI file 'kdatetimeedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KDATETIMEEDIT_H
#define UI_KDATETIMEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>
#include "kdatecombobox.h"
#include "ktimecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_KDateTimeEdit
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *m_calendarCombo;
    KDateComboBox *m_dateCombo;
    KTimeComboBox *m_timeCombo;
    QComboBox *m_timeZoneCombo;

    void setupUi(QWidget *KDateTimeEdit)
    {
        if (KDateTimeEdit->objectName().isEmpty())
            KDateTimeEdit->setObjectName(QString::fromUtf8("KDateTimeEdit"));
        KDateTimeEdit->resize(450, 33);
        horizontalLayout = new QHBoxLayout(KDateTimeEdit);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_calendarCombo = new QComboBox(KDateTimeEdit);
        m_calendarCombo->setObjectName(QString::fromUtf8("m_calendarCombo"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_calendarCombo->sizePolicy().hasHeightForWidth());
        m_calendarCombo->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(m_calendarCombo);

        m_dateCombo = new KDateComboBox(KDateTimeEdit);
        m_dateCombo->setObjectName(QString::fromUtf8("m_dateCombo"));
        sizePolicy.setHeightForWidth(m_dateCombo->sizePolicy().hasHeightForWidth());
        m_dateCombo->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(m_dateCombo);

        m_timeCombo = new KTimeComboBox(KDateTimeEdit);
        m_timeCombo->setObjectName(QString::fromUtf8("m_timeCombo"));
        sizePolicy.setHeightForWidth(m_timeCombo->sizePolicy().hasHeightForWidth());
        m_timeCombo->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(m_timeCombo);

        m_timeZoneCombo = new QComboBox(KDateTimeEdit);
        m_timeZoneCombo->setObjectName(QString::fromUtf8("m_timeZoneCombo"));
        sizePolicy.setHeightForWidth(m_timeZoneCombo->sizePolicy().hasHeightForWidth());
        m_timeZoneCombo->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(m_timeZoneCombo);


        retranslateUi(KDateTimeEdit);

        QMetaObject::connectSlotsByName(KDateTimeEdit);
    } // setupUi

    void retranslateUi(QWidget *KDateTimeEdit)
    {
        (void)KDateTimeEdit;
    } // retranslateUi

};

namespace Ui {
    class KDateTimeEdit: public Ui_KDateTimeEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KDATETIMEEDIT_H
