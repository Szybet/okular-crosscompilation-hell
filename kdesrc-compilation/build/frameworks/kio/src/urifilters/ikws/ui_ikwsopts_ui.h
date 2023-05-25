#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'ikwsopts_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IKWSOPTS_UI_H
#define UI_IKWSOPTS_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilterOptionsUI
{
public:
    QGridLayout *gridLayout;
    QCheckBox *cbEnableShortcuts;
    QCheckBox *cbUseSelectedShortcutsOnly;
    QLineEdit *searchLineEdit;
    QTreeView *lvSearchProviders;
    QVBoxLayout *verticalLayout;
    QPushButton *pbNew;
    QPushButton *pbChange;
    QPushButton *pbDelete;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *lbDefaultEngine;
    QComboBox *cmbDefaultEngine;
    QLabel *lbDelimiter;
    QComboBox *cmbDelimiter;

    void setupUi(QWidget *FilterOptionsUI)
    {
        if (FilterOptionsUI->objectName().isEmpty())
            FilterOptionsUI->setObjectName(QString::fromUtf8("FilterOptionsUI"));
        FilterOptionsUI->resize(475, 404);
        gridLayout = new QGridLayout(FilterOptionsUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbEnableShortcuts = new QCheckBox(FilterOptionsUI);
        cbEnableShortcuts->setObjectName(QString::fromUtf8("cbEnableShortcuts"));

        gridLayout->addWidget(cbEnableShortcuts, 0, 0, 1, 1);

        cbUseSelectedShortcutsOnly = new QCheckBox(FilterOptionsUI);
        cbUseSelectedShortcutsOnly->setObjectName(QString::fromUtf8("cbUseSelectedShortcutsOnly"));
        cbUseSelectedShortcutsOnly->setEnabled(false);

        gridLayout->addWidget(cbUseSelectedShortcutsOnly, 1, 0, 1, 1);

        searchLineEdit = new QLineEdit(FilterOptionsUI);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));
        searchLineEdit->setProperty("showClearButton", QVariant(true));

        gridLayout->addWidget(searchLineEdit, 2, 0, 1, 1);

        lvSearchProviders = new QTreeView(FilterOptionsUI);
        lvSearchProviders->setObjectName(QString::fromUtf8("lvSearchProviders"));
        lvSearchProviders->setRootIsDecorated(false);
        lvSearchProviders->setUniformRowHeights(true);
        lvSearchProviders->setItemsExpandable(false);
        lvSearchProviders->setSortingEnabled(true);
        lvSearchProviders->setAllColumnsShowFocus(true);
        lvSearchProviders->setHeaderHidden(false);

        gridLayout->addWidget(lvSearchProviders, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pbNew = new QPushButton(FilterOptionsUI);
        pbNew->setObjectName(QString::fromUtf8("pbNew"));

        verticalLayout->addWidget(pbNew);

        pbChange = new QPushButton(FilterOptionsUI);
        pbChange->setObjectName(QString::fromUtf8("pbChange"));
        pbChange->setEnabled(false);

        verticalLayout->addWidget(pbChange);

        pbDelete = new QPushButton(FilterOptionsUI);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));
        pbDelete->setEnabled(false);

        verticalLayout->addWidget(pbDelete);

        verticalSpacer = new QSpacerItem(20, 158, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 3, 1, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        lbDefaultEngine = new QLabel(FilterOptionsUI);
        lbDefaultEngine->setObjectName(QString::fromUtf8("lbDefaultEngine"));
        lbDefaultEngine->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbDefaultEngine->sizePolicy().hasHeightForWidth());
        lbDefaultEngine->setSizePolicy(sizePolicy);
        lbDefaultEngine->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, lbDefaultEngine);

        cmbDefaultEngine = new QComboBox(FilterOptionsUI);
        cmbDefaultEngine->setObjectName(QString::fromUtf8("cmbDefaultEngine"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbDefaultEngine->sizePolicy().hasHeightForWidth());
        cmbDefaultEngine->setSizePolicy(sizePolicy1);
        cmbDefaultEngine->setMinimumSize(QSize(67, 0));
        cmbDefaultEngine->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        formLayout->setWidget(0, QFormLayout::FieldRole, cmbDefaultEngine);

        lbDelimiter = new QLabel(FilterOptionsUI);
        lbDelimiter->setObjectName(QString::fromUtf8("lbDelimiter"));
        sizePolicy.setHeightForWidth(lbDelimiter->sizePolicy().hasHeightForWidth());
        lbDelimiter->setSizePolicy(sizePolicy);
        lbDelimiter->setWordWrap(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, lbDelimiter);

        cmbDelimiter = new QComboBox(FilterOptionsUI);
        cmbDelimiter->addItem(QString());
        cmbDelimiter->addItem(QString());
        cmbDelimiter->setObjectName(QString::fromUtf8("cmbDelimiter"));
        sizePolicy1.setHeightForWidth(cmbDelimiter->sizePolicy().hasHeightForWidth());
        cmbDelimiter->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::FieldRole, cmbDelimiter);


        gridLayout->addLayout(formLayout, 4, 0, 1, 1);

#if QT_CONFIG(shortcut)
        lbDefaultEngine->setBuddy(cmbDefaultEngine);
        lbDelimiter->setBuddy(cmbDelimiter);
#endif // QT_CONFIG(shortcut)

        retranslateUi(FilterOptionsUI);
        QObject::connect(cbEnableShortcuts, SIGNAL(toggled(bool)), cbUseSelectedShortcutsOnly, SLOT(setEnabled(bool)));
        QObject::connect(cbEnableShortcuts, SIGNAL(toggled(bool)), lvSearchProviders, SLOT(setEnabled(bool)));
        QObject::connect(cbEnableShortcuts, SIGNAL(toggled(bool)), pbNew, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(FilterOptionsUI);
    } // setupUi

    void retranslateUi(QWidget *FilterOptionsUI)
    {
#if QT_CONFIG(tooltip)
        cbEnableShortcuts->setToolTip(tr2i18n("<html><head/><body><p>Enable or disable web search keywords. </p><p>Web search keywords allow you to quickly access or search for information located online or on your hard drive. </p><p>KDE comes with many predefined keywords. One such keyword can be used to perform a the Google (TM) search; to use it, you simply type the keyword 'gg' followed by the keyword delimiter and the search term, e.g. <span style=\" font-weight:600;\">gg:KDE</span>.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbEnableShortcuts->setText(tr2i18n("&Enable Web search keywords", nullptr));
        cbUseSelectedShortcutsOnly->setText(tr2i18n("&Use preferred keywords only", nullptr));
        searchLineEdit->setPlaceholderText(tr2i18n("Search for web search keywords", nullptr));
#if QT_CONFIG(tooltip)
        pbNew->setToolTip(tr2i18n("Add a new Web search keyword", nullptr));
#endif // QT_CONFIG(tooltip)
        pbNew->setText(tr2i18n("&New...", nullptr));
#if QT_CONFIG(tooltip)
        pbChange->setToolTip(tr2i18n("Modify the highlighted Web search keyword", nullptr));
#endif // QT_CONFIG(tooltip)
        pbChange->setText(tr2i18n("Chan&ge...", nullptr));
#if QT_CONFIG(tooltip)
        pbDelete->setToolTip(tr2i18n("Delete the highlighted Web search keyword", nullptr));
#endif // QT_CONFIG(tooltip)
        pbDelete->setText(tr2i18n("De&lete", nullptr));
#if QT_CONFIG(whatsthis)
        lbDefaultEngine->setWhatsThis(tr2i18n("<qt>\n"
"Select the search engine to use for input boxes that provide automatic lookup services when you type in normal words and phrases instead of a URL. To disable this feature select <b>None</b> from the list.\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lbDefaultEngine->setText(tr2i18n("Default Web &search keyword:", nullptr));
#if QT_CONFIG(whatsthis)
        cmbDefaultEngine->setWhatsThis(tr2i18n("<html><head/><body><p>Select a default web search keyword. </p><p>This allows applications to automatically convert the typed word or phrase to web search keyword queries when they cannot be filtered into a proper URL. </p><p>To disable this functionality select <span style=\" font-weight:600;\">None</span> from the list. </p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        lbDelimiter->setWhatsThis(tr2i18n("Choose the delimiter that separates the keyword from the phrase or word to be searched.", nullptr));
#endif // QT_CONFIG(whatsthis)
        lbDelimiter->setText(tr2i18n("&Keyword delimiter:", nullptr));
        cmbDelimiter->setItemText(0, tr2i18n("Colon", "Colon as keyword delimiter"));
        cmbDelimiter->setItemText(1, tr2i18n("Space", "Space as keyword delimiter"));

#if QT_CONFIG(tooltip)
        cmbDelimiter->setToolTip(tr2i18n("Choose a delimiter to mark the Web search keyword.", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)FilterOptionsUI;
    } // retranslateUi

};

namespace Ui {
    class FilterOptionsUI: public Ui_FilterOptionsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // IKWSOPTS_UI_H

