/********************************************************************************
** Form generated from reading UI file 'kcolumnresizertest-forms.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KCOLUMNRESIZERTEST_2D_FORMS_H
#define UI_KCOLUMNRESIZERTEST_2D_FORMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KColumnResizerTestForms
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *layout1;
    QLabel *label1;
    QLineEdit *widget1;
    QGroupBox *groupBox_2;
    QFormLayout *layout2;
    QLabel *label2;
    QLineEdit *widget2;

    void setupUi(QWidget *KColumnResizerTestForms)
    {
        if (KColumnResizerTestForms->objectName().isEmpty())
            KColumnResizerTestForms->setObjectName(QString::fromUtf8("KColumnResizerTestForms"));
        KColumnResizerTestForms->resize(400, 300);
        verticalLayout = new QVBoxLayout(KColumnResizerTestForms);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(KColumnResizerTestForms);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        layout1 = new QFormLayout(groupBox);
        layout1->setObjectName(QString::fromUtf8("layout1"));
        label1 = new QLabel(groupBox);
        label1->setObjectName(QString::fromUtf8("label1"));

        layout1->setWidget(0, QFormLayout::LabelRole, label1);

        widget1 = new QLineEdit(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));

        layout1->setWidget(0, QFormLayout::FieldRole, widget1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(KColumnResizerTestForms);
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


        retranslateUi(KColumnResizerTestForms);

        QMetaObject::connectSlotsByName(KColumnResizerTestForms);
    } // setupUi

    void retranslateUi(QWidget *KColumnResizerTestForms)
    {
        KColumnResizerTestForms->setWindowTitle(QCoreApplication::translate("KColumnResizerTestForms", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("KColumnResizerTestForms", "GroupBox", nullptr));
        label1->setText(QCoreApplication::translate("KColumnResizerTestForms", "Short:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("KColumnResizerTestForms", "GroupBox", nullptr));
        label2->setText(QCoreApplication::translate("KColumnResizerTestForms", "Some long label:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KColumnResizerTestForms: public Ui_KColumnResizerTestForms {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KCOLUMNRESIZERTEST_2D_FORMS_H
