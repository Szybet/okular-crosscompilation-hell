/********************************************************************************
** Form generated from reading UI file 'kcolumnresizertestapp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KCOLUMNRESIZERTESTAPP_H
#define UI_KCOLUMNRESIZERTESTAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColumnResizerTestWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *gridGroupBox1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QLabel *adjustableLabel;
    QCheckBox *checkBox;
    QGroupBox *formGroupBox1;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QListWidget *listWidget;
    QGroupBox *formGroupBox2;
    QFormLayout *formLayout_2;
    QTimeEdit *timeEdit;
    QLabel *label_5;
    QCheckBox *checkBox_2;
    QLabel *label_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *gridGroupBox2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *Co_lumnResizerDemoWidget)
    {
        if (Co_lumnResizerDemoWidget->objectName().isEmpty())
            Co_lumnResizerDemoWidget->setObjectName(QString::fromUtf8("Co_lumnResizerDemoWidget"));
        Co_lumnResizerDemoWidget->resize(376, 580);
        verticalLayout = new QVBoxLayout(Co_lumnResizerDemoWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridGroupBox1 = new QGroupBox(Co_lumnResizerDemoWidget);
        gridGroupBox1->setObjectName(QString::fromUtf8("gridGroupBox1"));
        gridLayout = new QGridLayout(gridGroupBox1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(gridGroupBox1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(gridGroupBox1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        spinBox = new QSpinBox(gridGroupBox1);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        adjustableLabel = new QLabel(gridGroupBox1);
        adjustableLabel->setObjectName(QString::fromUtf8("adjustableLabel"));
        adjustableLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(adjustableLabel, 1, 0, 1, 1);

        checkBox = new QCheckBox(gridGroupBox1);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 2, 1, 1, 1);


        verticalLayout->addWidget(gridGroupBox1);

        formGroupBox1 = new QGroupBox(Co_lumnResizerDemoWidget);
        formGroupBox1->setObjectName(QString::fromUtf8("formGroupBox1"));
        formLayout = new QFormLayout(formGroupBox1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_2 = new QLabel(formGroupBox1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formGroupBox1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(formGroupBox1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        listWidget = new QListWidget(formGroupBox1);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        formLayout->setWidget(1, QFormLayout::FieldRole, listWidget);


        verticalLayout->addWidget(formGroupBox1);

        formGroupBox2 = new QGroupBox(Co_lumnResizerDemoWidget);
        formGroupBox2->setObjectName(QString::fromUtf8("formGroupBox2"));
        formLayout_2 = new QFormLayout(formGroupBox2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        timeEdit = new QTimeEdit(formGroupBox2);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, timeEdit);

        label_5 = new QLabel(formGroupBox2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        checkBox_2 = new QCheckBox(formGroupBox2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, checkBox_2);

        label_6 = new QLabel(formGroupBox2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_6);

        radioButton = new QRadioButton(formGroupBox2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, radioButton);

        radioButton_2 = new QRadioButton(formGroupBox2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, radioButton_2);


        verticalLayout->addWidget(formGroupBox2);

        gridGroupBox2 = new QGroupBox(Co_lumnResizerDemoWidget);
        gridGroupBox2->setObjectName(QString::fromUtf8("gridGroupBox2"));
        gridLayout_2 = new QGridLayout(gridGroupBox2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_2 = new QPushButton(gridGroupBox2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(gridGroupBox2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(gridGroupBox2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 1, 0, 1, 2);

        pushButton_5 = new QPushButton(gridGroupBox2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_5, 0, 2, 2, 1);


        verticalLayout->addWidget(gridGroupBox2);


        retranslateUi(Co_lumnResizerDemoWidget);

        QMetaObject::connectSlotsByName(Co_lumnResizerDemoWidget);
    } // setupUi

    void retranslateUi(QWidget *Co_lumnResizerDemoWidget)
    {
        Co_lumnResizerDemoWidget->setWindowTitle(QCoreApplication::translate("ColumnResizerTestWidget", "ColumnResizer Test", nullptr));
        gridGroupBox1->setTitle(QCoreApplication::translate("ColumnResizerTestWidget", "GridLayout", nullptr));
        label->setText(QCoreApplication::translate("ColumnResizerTestWidget", "A line edit:", nullptr));
        adjustableLabel->setText(QCoreApplication::translate("ColumnResizerTestWidget", "Spin me:", nullptr));
        checkBox->setText(QCoreApplication::translate("ColumnResizerTestWidget", "A check box", nullptr));
        formGroupBox1->setTitle(QCoreApplication::translate("ColumnResizerTestWidget", "FormLayout", nullptr));
        label_2->setText(QCoreApplication::translate("ColumnResizerTestWidget", "One line:", nullptr));
        label_4->setText(QCoreApplication::translate("ColumnResizerTestWidget", "A much bigger text area:", nullptr));
        formGroupBox2->setTitle(QCoreApplication::translate("ColumnResizerTestWidget", "FormLayout2", nullptr));
        label_5->setText(QCoreApplication::translate("ColumnResizerTestWidget", "Time:", nullptr));
        checkBox_2->setText(QCoreApplication::translate("ColumnResizerTestWidget", "Show seconds", nullptr));
        label_6->setText(QCoreApplication::translate("ColumnResizerTestWidget", "Details:", nullptr));
        radioButton->setText(QCoreApplication::translate("ColumnResizerTestWidget", "Option &1", nullptr));
        radioButton_2->setText(QCoreApplication::translate("ColumnResizerTestWidget", "Option &2", nullptr));
        gridGroupBox2->setTitle(QCoreApplication::translate("ColumnResizerTestWidget", "Crazy QGridLayout", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ColumnResizerTestWidget", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ColumnResizerTestWidget", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ColumnResizerTestWidget", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ColumnResizerTestWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColumnResizerTestWidget: public Ui_ColumnResizerTestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KCOLUMNRESIZERTESTAPP_H
