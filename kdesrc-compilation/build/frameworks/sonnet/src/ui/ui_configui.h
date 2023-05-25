/*
Licensed under GNU LGPL
*/

/********************************************************************************
** Form generated from reading UI file 'configui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGUI_H
#define UI_CONFIGUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "sonnet/dictionarycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_SonnetConfigUI
{
public:
    QGridLayout *gridLayout;
    QLabel *nobackendfound;
    QLabel *textLabel1;
    Sonnet::DictionaryComboBox *m_langCombo;
    QSplitter *splitter;
    QListWidget *languageList;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout1;
    QCheckBox *kcfg_autodetectLanguage;
    QCheckBox *kcfg_backgroundCheckerEnabled;
    QCheckBox *kcfg_checkerEnabledByDefault;
    QCheckBox *kcfg_skipUppercase;
    QCheckBox *kcfg_skipRunTogether;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *ignoredWordsLayout;
    QListWidget *ignoreListWidget;
    QLineEdit *newIgnoreEdit;
    QPushButton *addButton;
    QVBoxLayout *removeButtonLayout;
    QPushButton *removeButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SonnetConfigUI)
    {
        if (SonnetConfigUI->objectName().isEmpty())
            SonnetConfigUI->setObjectName(QString::fromUtf8("SonnetConfigUI"));
        SonnetConfigUI->resize(700, 833);
        gridLayout = new QGridLayout(SonnetConfigUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nobackendfound = new QLabel(SonnetConfigUI);
        nobackendfound->setObjectName(QString::fromUtf8("nobackendfound"));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        nobackendfound->setFont(font);
        nobackendfound->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(nobackendfound, 0, 0, 1, 2);

        textLabel1 = new QLabel(SonnetConfigUI);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textLabel1, 1, 0, 1, 1);

        m_langCombo = new Sonnet::DictionaryComboBox(SonnetConfigUI);
        m_langCombo->setObjectName(QString::fromUtf8("m_langCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_langCombo->sizePolicy().hasHeightForWidth());
        m_langCombo->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_langCombo, 1, 1, 1, 1);

        splitter = new QSplitter(SonnetConfigUI);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(true);
        languageList = new QListWidget(splitter);
        languageList->setObjectName(QString::fromUtf8("languageList"));
        splitter->addWidget(languageList);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox1 = new QGroupBox(layoutWidget);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout1 = new QGridLayout(groupBox1);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        kcfg_autodetectLanguage = new QCheckBox(groupBox1);
        kcfg_autodetectLanguage->setObjectName(QString::fromUtf8("kcfg_autodetectLanguage"));

        gridLayout1->addWidget(kcfg_autodetectLanguage, 2, 0, 1, 1);

        kcfg_backgroundCheckerEnabled = new QCheckBox(groupBox1);
        kcfg_backgroundCheckerEnabled->setObjectName(QString::fromUtf8("kcfg_backgroundCheckerEnabled"));

        gridLayout1->addWidget(kcfg_backgroundCheckerEnabled, 3, 0, 1, 1);

        kcfg_checkerEnabledByDefault = new QCheckBox(groupBox1);
        kcfg_checkerEnabledByDefault->setObjectName(QString::fromUtf8("kcfg_checkerEnabledByDefault"));

        gridLayout1->addWidget(kcfg_checkerEnabledByDefault, 4, 0, 1, 1);

        kcfg_skipUppercase = new QCheckBox(groupBox1);
        kcfg_skipUppercase->setObjectName(QString::fromUtf8("kcfg_skipUppercase"));

        gridLayout1->addWidget(kcfg_skipUppercase, 5, 0, 1, 1);

        kcfg_skipRunTogether = new QCheckBox(groupBox1);
        kcfg_skipRunTogether->setObjectName(QString::fromUtf8("kcfg_skipRunTogether"));

        gridLayout1->addWidget(kcfg_skipRunTogether, 6, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox1);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ignoredWordsLayout = new QGridLayout();
        ignoredWordsLayout->setObjectName(QString::fromUtf8("ignoredWordsLayout"));
        ignoreListWidget = new QListWidget(groupBox);
        ignoreListWidget->setObjectName(QString::fromUtf8("ignoreListWidget"));

        ignoredWordsLayout->addWidget(ignoreListWidget, 1, 0, 1, 1);

        newIgnoreEdit = new QLineEdit(groupBox);
        newIgnoreEdit->setObjectName(QString::fromUtf8("newIgnoreEdit"));

        ignoredWordsLayout->addWidget(newIgnoreEdit, 0, 0, 1, 1);

        addButton = new QPushButton(groupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        addButton->setIcon(icon);

        ignoredWordsLayout->addWidget(addButton, 0, 1, 1, 1);

        removeButtonLayout = new QVBoxLayout();
        removeButtonLayout->setObjectName(QString::fromUtf8("removeButtonLayout"));
        removeButton = new QPushButton(groupBox);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("list-remove");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        removeButton->setIcon(icon1);

        removeButtonLayout->addWidget(removeButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        removeButtonLayout->addItem(verticalSpacer);


        ignoredWordsLayout->addLayout(removeButtonLayout, 1, 1, 1, 1);


        verticalLayout->addLayout(ignoredWordsLayout);


        verticalLayout_2->addWidget(groupBox);

        splitter->addWidget(layoutWidget);

        gridLayout->addWidget(splitter, 2, 0, 1, 2);


        retranslateUi(SonnetConfigUI);

        QMetaObject::connectSlotsByName(SonnetConfigUI);
    } // setupUi

    void retranslateUi(QWidget *SonnetConfigUI)
    {
        nobackendfound->setText(QCoreApplication::translate("SonnetConfigUI", "No backend found for spell checking", nullptr));
        textLabel1->setText(QCoreApplication::translate("SonnetConfigUI", "Default language:", nullptr));
#if QT_CONFIG(tooltip)
        languageList->setToolTip(QCoreApplication::translate("SonnetConfigUI", "Choose your preferred languages", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox1->setTitle(QCoreApplication::translate("SonnetConfigUI", "Options", nullptr));
        kcfg_autodetectLanguage->setText(QCoreApplication::translate("SonnetConfigUI", "Enable autodetection of &language", nullptr));
        kcfg_backgroundCheckerEnabled->setText(QCoreApplication::translate("SonnetConfigUI", "Enable &background spellchecking", nullptr));
        kcfg_checkerEnabledByDefault->setText(QCoreApplication::translate("SonnetConfigUI", "&Automatic spell checking enabled by default", nullptr));
        kcfg_skipUppercase->setText(QCoreApplication::translate("SonnetConfigUI", "Skip all &uppercase words", nullptr));
        kcfg_skipRunTogether->setText(QCoreApplication::translate("SonnetConfigUI", "S&kip run-together words", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SonnetConfigUI", "Ignored Words:", nullptr));
        addButton->setText(QCoreApplication::translate("SonnetConfigUI", "&Add", nullptr));
        removeButton->setText(QCoreApplication::translate("SonnetConfigUI", "&Remove", nullptr));
        (void)SonnetConfigUI;
    } // retranslateUi

};

namespace Ui {
    class SonnetConfigUI: public Ui_SonnetConfigUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGUI_H
