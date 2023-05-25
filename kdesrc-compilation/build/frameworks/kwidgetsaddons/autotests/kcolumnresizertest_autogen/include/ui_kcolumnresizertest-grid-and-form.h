/********************************************************************************
** Form generated from reading UI file 'kcolumnresizertest-grid-and-form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KCOLUMNRESIZERTEST_2D_GRID_2D_AND_2D_FORM_H
#define UI_KCOLUMNRESIZERTEST_2D_GRID_2D_AND_2D_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KColumnResizerTestGridAndForms
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *layout1;
    QLineEdit *widget1;
    QLabel *label1;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QFormLayout *layout2;
    QLabel *label2;
    QLineEdit *widget2;

    void setupUi(QWidget *KColumnResizerTestGridAndForms)
    {
        if (KColumnResizerTestGridAndForms->objectName().isEmpty())
            KColumnResizerTestGridAndForms->setObjectName(QString::fromUtf8("KColumnResizerTestGridAndForms"));
        KColumnResizerTestGridAndForms->resize(400, 300);
        verticalLayout = new QVBoxLayout(KColumnResizerTestGridAndForms);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(KColumnResizerTestGridAndForms);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        layout1 = new QGridLayout(groupBox);
        layout1->setObjectName(QString::fromUtf8("layout1"));
        widget1 = new QLineEdit(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));

        layout1->addWidget(widget1, 0, 1, 1, 1);

        label1 = new QLabel(groupBox);
        label1->setObjectName(QString::fromUtf8("label1"));

        layout1->addWidget(label1, 0, 0, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        layout1->addWidget(checkBox, 1, 1, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        layout1->addWidget(pushButton, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(KColumnResizerTestGridAndForms);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        layout2 = new QFormLayout(groupBox_2);
        layout2->setObjectName(QString::fromUtf8("layout2"));
        label2 = new QLabel(groupBox_2);
        label2->setObjectName(QString::fromUtf8("label2"));

        layout2->setWidget(0, QFormLayout::LabelRole, label2);

        widget2 = new QLineEdit(groupBox_2);
        widget2->setObjectName(QString::fromUtf8("widget2"));

        layout2->setWidget(0, QFormLayout::FieldRole, widget2);


        verticalLayout->addWidget(groupBox_2);

        groupBox_2->raise();
        groupBox->raise();

        retranslateUi(KColumnResizerTestGridAndForms);

        QMetaObject::connectSlotsByName(KColumnResizerTestGridAndForms);
    } // setupUi

    void retranslateUi(QWidget *KColumnResizerTestGridAndForms)
    {
        KColumnResizerTestGridAndForms->setWindowTitle(QCoreApplication::translate("KColumnResizerTestGridAndForms", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("KColumnResizerTestGridAndForms", "GroupBox", nullptr));
        label1->setText(QCoreApplication::translate("KColumnResizerTestGridAndForms", "Short:", nullptr));
        checkBox->setText(QCoreApplication::translate("KColumnResizerTestGridAndForms", "CheckBox", nullptr));
        pushButton->setText(QCoreApplication::translate("KColumnResizerTestGridAndForms", "PushButton", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("KColumnResizerTestGridAndForms", "GroupBox", nullptr));
        label2->setText(QCoreApplication::translate("KColumnResizerTestGridAndForms", "Some long label:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KColumnResizerTestGridAndForms: public Ui_KColumnResizerTestGridAndForms {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KCOLUMNRESIZERTEST_2D_GRID_2D_AND_2D_FORM_H
