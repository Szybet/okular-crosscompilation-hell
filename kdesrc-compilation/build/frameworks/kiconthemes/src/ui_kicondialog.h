#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'kicondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KICONDIALOG_H
#define UI_KICONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IconDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *contextCombo;
    QSpacerItem *horizontalSpacer;
    QLineEdit *searchLine;
    QListView *canvas;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *IconDialog)
    {
        if (IconDialog->objectName().isEmpty())
            IconDialog->setObjectName(QString::fromUtf8("IconDialog"));
        IconDialog->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(IconDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        contextCombo = new QComboBox(IconDialog);
        contextCombo->setObjectName(QString::fromUtf8("contextCombo"));

        horizontalLayout->addWidget(contextCombo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchLine = new QLineEdit(IconDialog);
        searchLine->setObjectName(QString::fromUtf8("searchLine"));
        searchLine->setClearButtonEnabled(true);

        horizontalLayout->addWidget(searchLine);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        canvas = new QListView(IconDialog);
        canvas->setObjectName(QString::fromUtf8("canvas"));
        canvas->setIconSize(QSize(60, 60));
        canvas->setMovement(QListView::Static);
        canvas->setResizeMode(QListView::Adjust);
        canvas->setViewMode(QListView::IconMode);
        canvas->setUniformItemSizes(true);

        verticalLayout_2->addWidget(canvas);

        buttonBox = new QDialogButtonBox(IconDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(IconDialog);

        QMetaObject::connectSlotsByName(IconDialog);
    } // setupUi

    void retranslateUi(QWidget *IconDialog)
    {
        IconDialog->setWindowTitle(tr2i18n("Select Icon", nullptr));
#if QT_CONFIG(accessibility)
        contextCombo->setAccessibleName(tr2i18n("Icon category", nullptr));
#endif // QT_CONFIG(accessibility)
        searchLine->setPlaceholderText(tr2i18n("Search Icons...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IconDialog: public Ui_IconDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KICONDIALOG_H

