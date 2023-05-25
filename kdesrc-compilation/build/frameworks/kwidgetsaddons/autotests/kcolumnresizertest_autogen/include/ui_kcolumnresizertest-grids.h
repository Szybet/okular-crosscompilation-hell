/********************************************************************************
** Form generated from reading UI file 'kcolumnresizertest-grids.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KCOLUMNRESIZERTEST_2D_GRIDS_H
#define UI_KCOLUMNRESIZERTEST_2D_GRIDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KColumnResizerTestGrids
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *layout1;
    QLabel *label1;
    QLineEdit *widget1;
    QGroupBox *groupBox_2;
    QFormLayout *layout2;
    QLabel *label2;
    QLineEdit *widget2;

    void setupUi(QWidget *KColumnResizerTestGrids)
    {
        if (KColumnResizerTestGrids->objectName().isEmpty())
            KColumnResizerTestGrids->setObjectName(QString::fromUtf8("KColumnResizerTestGrids"));
        KColumnResizerTestGrids->resize(400, 300);
        verticalLayout = new QVBoxLayout(KColumnResizerTestGrids);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(KColumnResizerTestGrids);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        layout1 = new QGridLayout(groupBox);
        layout1->setObjectName(QString::fromUtf8("layout1"));
        label1 = new QLabel(groupBox);
        label1->setObjectName(QString::fromUtf8("label1"));

        layout1->addWidget(label1, 0, 0, 1, 1);

        widget1 = new QLineEdit(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));

        layout1->addWidget(widget1, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(KColumnResizerTestGrids);
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

        retranslateUi(KColumnResizerTestGrids);

        QMetaObject::connectSlotsByName(KColumnResizerTestGrids);
    } // setupUi

    void retranslateUi(QWidget *KColumnResizerTestGrids)
    {
        KColumnResizerTestGrids->setWindowTitle(QCoreApplication::translate("KColumnResizerTestGrids", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("KColumnResizerTestGrids", "GroupBox", nullptr));
        label1->setText(QCoreApplication::translate("KColumnResizerTestGrids", "Short:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("KColumnResizerTestGrids", "GroupBox", nullptr));
        label2->setText(QCoreApplication::translate("KColumnResizerTestGrids", "Some long label:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KColumnResizerTestGrids: public Ui_KColumnResizerTestGrids {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KCOLUMNRESIZERTEST_2D_GRIDS_H
