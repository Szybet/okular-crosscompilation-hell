#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'gssettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GSSETTINGSWIDGET_H
#define UI_GSSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GSSettingsWidget
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QCheckBox *kcfg_PlatformFonts;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *GSSettingsWidget)
    {
        if (GSSettingsWidget->objectName().isEmpty())
            GSSettingsWidget->setObjectName(QString::fromUtf8("GSSettingsWidget"));
        GSSettingsWidget->resize(328, 73);
        vboxLayout = new QVBoxLayout(GSSettingsWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(GSSettingsWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        kcfg_PlatformFonts = new QCheckBox(groupBox);
        kcfg_PlatformFonts->setObjectName(QString::fromUtf8("kcfg_PlatformFonts"));
        kcfg_PlatformFonts->setEnabled(true);

        vboxLayout1->addWidget(kcfg_PlatformFonts);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(10, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        retranslateUi(GSSettingsWidget);

        QMetaObject::connectSlotsByName(GSSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *GSSettingsWidget)
    {
        groupBox->setTitle(tr2i18n("General Settings", nullptr));
        kcfg_PlatformFonts->setText(tr2i18n("&Use platform fonts", nullptr));
        (void)GSSettingsWidget;
    } // retranslateUi

};

namespace Ui {
    class GSSettingsWidget: public Ui_GSSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GSSETTINGSWIDGET_H

