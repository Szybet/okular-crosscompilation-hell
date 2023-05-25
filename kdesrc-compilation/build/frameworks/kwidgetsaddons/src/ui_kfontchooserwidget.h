/********************************************************************************
** Form generated from reading UI file 'kfontchooserwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KFONTCHOOSERWIDGET_H
#define UI_KFONTCHOOSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KFontChooserWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *fontLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *familyCheckBox;
    QLabel *familyLabel;
    QListWidget *familyListWidget;
    QVBoxLayout *styleLayout;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *styleCheckBox;
    QLabel *styleLabel;
    QListWidget *styleListWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *sizeLayout;
    QCheckBox *sizeCheckBox;
    QLabel *sizeLabel;
    QCheckBox *sizeIsRelativeCheckBox;
    QDoubleSpinBox *sizeSpinBox;
    QListWidget *sizeListWidget;
    QHBoxLayout *sampleTextEditLayout;
    QTextEdit *sampleTextEdit;
    QCheckBox *onlyFixedCheckBox;

    void setupUi(QWidget *KFontChooserWidget)
    {
        if (KFontChooserWidget->objectName().isEmpty())
            KFontChooserWidget->setObjectName(QString::fromUtf8("KFontChooserWidget"));
        KFontChooserWidget->resize(1029, 838);
        verticalLayout_3 = new QVBoxLayout(KFontChooserWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(12);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        fontLayout = new QVBoxLayout();
        fontLayout->setObjectName(QString::fromUtf8("fontLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        familyCheckBox = new QCheckBox(KFontChooserWidget);
        familyCheckBox->setObjectName(QString::fromUtf8("familyCheckBox"));

        horizontalLayout->addWidget(familyCheckBox);

        familyLabel = new QLabel(KFontChooserWidget);
        familyLabel->setObjectName(QString::fromUtf8("familyLabel"));

        horizontalLayout->addWidget(familyLabel);


        fontLayout->addLayout(horizontalLayout);

        familyListWidget = new QListWidget(KFontChooserWidget);
        familyListWidget->setObjectName(QString::fromUtf8("familyListWidget"));

        fontLayout->addWidget(familyListWidget);


        horizontalLayout_2->addLayout(fontLayout);

        styleLayout = new QVBoxLayout();
        styleLayout->setObjectName(QString::fromUtf8("styleLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        styleCheckBox = new QCheckBox(KFontChooserWidget);
        styleCheckBox->setObjectName(QString::fromUtf8("styleCheckBox"));

        horizontalLayout_4->addWidget(styleCheckBox);

        styleLabel = new QLabel(KFontChooserWidget);
        styleLabel->setObjectName(QString::fromUtf8("styleLabel"));

        horizontalLayout_4->addWidget(styleLabel);


        styleLayout->addLayout(horizontalLayout_4);

        styleListWidget = new QListWidget(KFontChooserWidget);
        styleListWidget->setObjectName(QString::fromUtf8("styleListWidget"));

        styleLayout->addWidget(styleListWidget);


        horizontalLayout_2->addLayout(styleLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        sizeLayout = new QHBoxLayout();
        sizeLayout->setObjectName(QString::fromUtf8("sizeLayout"));
        sizeCheckBox = new QCheckBox(KFontChooserWidget);
        sizeCheckBox->setObjectName(QString::fromUtf8("sizeCheckBox"));

        sizeLayout->addWidget(sizeCheckBox);

        sizeLabel = new QLabel(KFontChooserWidget);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));

        sizeLayout->addWidget(sizeLabel);


        verticalLayout_5->addLayout(sizeLayout);

        sizeIsRelativeCheckBox = new QCheckBox(KFontChooserWidget);
        sizeIsRelativeCheckBox->setObjectName(QString::fromUtf8("sizeIsRelativeCheckBox"));

        verticalLayout_5->addWidget(sizeIsRelativeCheckBox);

        sizeSpinBox = new QDoubleSpinBox(KFontChooserWidget);
        sizeSpinBox->setObjectName(QString::fromUtf8("sizeSpinBox"));

        verticalLayout_5->addWidget(sizeSpinBox);

        sizeListWidget = new QListWidget(KFontChooserWidget);
        sizeListWidget->setObjectName(QString::fromUtf8("sizeListWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sizeListWidget->sizePolicy().hasHeightForWidth());
        sizeListWidget->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(sizeListWidget);


        horizontalLayout_2->addLayout(verticalLayout_5);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        sampleTextEditLayout = new QHBoxLayout();
        sampleTextEditLayout->setObjectName(QString::fromUtf8("sampleTextEditLayout"));
        sampleTextEdit = new QTextEdit(KFontChooserWidget);
        sampleTextEdit->setObjectName(QString::fromUtf8("sampleTextEdit"));
        sampleTextEdit->setAcceptRichText(false);

        sampleTextEditLayout->addWidget(sampleTextEdit);


        gridLayout->addLayout(sampleTextEditLayout, 1, 0, 1, 1);

        onlyFixedCheckBox = new QCheckBox(KFontChooserWidget);
        onlyFixedCheckBox->setObjectName(QString::fromUtf8("onlyFixedCheckBox"));

        gridLayout->addWidget(onlyFixedCheckBox, 2, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);

        verticalLayout_3->addLayout(gridLayout);


        retranslateUi(KFontChooserWidget);

        QMetaObject::connectSlotsByName(KFontChooserWidget);
    } // setupUi

    void retranslateUi(QWidget *KFontChooserWidget)
    {
        KFontChooserWidget->setWindowTitle(QCoreApplication::translate("KFontChooserWidget", "KFontChooserWidget", nullptr));
        familyCheckBox->setText(QCoreApplication::translate("KFontChooserWidget", "Font", nullptr));
        familyLabel->setText(QCoreApplication::translate("KFontChooserWidget", "Font:", nullptr));
        styleCheckBox->setText(QCoreApplication::translate("KFontChooserWidget", "Font style", nullptr));
        styleLabel->setText(QCoreApplication::translate("KFontChooserWidget", "Font style:", nullptr));
        sizeCheckBox->setText(QCoreApplication::translate("KFontChooserWidget", "Size", nullptr));
        sizeLabel->setText(QCoreApplication::translate("KFontChooserWidget", "Size:", nullptr));
        sizeIsRelativeCheckBox->setText(QCoreApplication::translate("KFontChooserWidget", "Relative", nullptr));
#if QT_CONFIG(whatsthis)
        sampleTextEdit->setWhatsThis(QCoreApplication::translate("KFontChooserWidget", "This sample text illustrates the current settings. You may edit it to test special characters.", nullptr));
#endif // QT_CONFIG(whatsthis)
        onlyFixedCheckBox->setText(QCoreApplication::translate("KFontChooserWidget", "Show only monospaced fonts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KFontChooserWidget: public Ui_KFontChooserWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KFONTCHOOSERWIDGET_H
