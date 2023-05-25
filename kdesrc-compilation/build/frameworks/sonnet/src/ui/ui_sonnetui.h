/********************************************************************************
** Form generated from reading UI file 'sonnetui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONNETUI_H
#define UI_SONNETUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "sonnet/dictionarycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_SonnetUi
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel2;
    QLabel *m_unknownWord;
    QLabel *textLabel5;
    QLabel *m_contextLabel;
    QPushButton *m_addBtn;
    QSpacerItem *spacerItem;
    QListView *m_suggestions;
    QLabel *textLabel4;
    QLineEdit *m_replacement;
    Sonnet::DictionaryComboBox *m_language;
    QVBoxLayout *vboxLayout;
    QPushButton *m_suggestBtn;
    QPushButton *m_replaceBtn;
    QPushButton *m_replaceAllBtn;
    QPushButton *m_skipBtn;
    QPushButton *m_skipAllBtn;
    QPushButton *m_autoCorrect;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *SonnetUi)
    {
        if (SonnetUi->objectName().isEmpty())
            SonnetUi->setObjectName(QString::fromUtf8("SonnetUi"));
        SonnetUi->resize(481, 311);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SonnetUi->sizePolicy().hasHeightForWidth());
        SonnetUi->setSizePolicy(sizePolicy);
        SonnetUi->setMinimumSize(QSize(430, 300));
        gridLayout = new QGridLayout(SonnetUi);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textLabel2 = new QLabel(SonnetUi);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 1, 0, 1, 2);

        m_unknownWord = new QLabel(SonnetUi);
        m_unknownWord->setObjectName(QString::fromUtf8("m_unknownWord"));

        gridLayout->addWidget(m_unknownWord, 1, 2, 1, 1);

        textLabel5 = new QLabel(SonnetUi);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        gridLayout->addWidget(textLabel5, 4, 0, 1, 1);

        m_contextLabel = new QLabel(SonnetUi);
        m_contextLabel->setObjectName(QString::fromUtf8("m_contextLabel"));
        m_contextLabel->setFrameShape(QFrame::Box);
        m_contextLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_contextLabel, 0, 0, 1, 6);

        m_addBtn = new QPushButton(SonnetUi);
        m_addBtn->setObjectName(QString::fromUtf8("m_addBtn"));

        gridLayout->addWidget(m_addBtn, 1, 4, 1, 2);

        spacerItem = new QSpacerItem(74, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 3, 1, 1);

        m_suggestions = new QListView(SonnetUi);
        m_suggestions->setObjectName(QString::fromUtf8("m_suggestions"));
        m_suggestions->setResizeMode(QListView::Adjust);

        gridLayout->addWidget(m_suggestions, 3, 0, 1, 5);

        textLabel4 = new QLabel(SonnetUi);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        gridLayout->addWidget(textLabel4, 2, 0, 1, 2);

        m_replacement = new QLineEdit(SonnetUi);
        m_replacement->setObjectName(QString::fromUtf8("m_replacement"));

        gridLayout->addWidget(m_replacement, 2, 2, 1, 3);

        m_language = new Sonnet::DictionaryComboBox(SonnetUi);
        m_language->setObjectName(QString::fromUtf8("m_language"));

        gridLayout->addWidget(m_language, 4, 1, 1, 4);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        m_suggestBtn = new QPushButton(SonnetUi);
        m_suggestBtn->setObjectName(QString::fromUtf8("m_suggestBtn"));

        vboxLayout->addWidget(m_suggestBtn);

        m_replaceBtn = new QPushButton(SonnetUi);
        m_replaceBtn->setObjectName(QString::fromUtf8("m_replaceBtn"));

        vboxLayout->addWidget(m_replaceBtn);

        m_replaceAllBtn = new QPushButton(SonnetUi);
        m_replaceAllBtn->setObjectName(QString::fromUtf8("m_replaceAllBtn"));

        vboxLayout->addWidget(m_replaceAllBtn);

        m_skipBtn = new QPushButton(SonnetUi);
        m_skipBtn->setObjectName(QString::fromUtf8("m_skipBtn"));

        vboxLayout->addWidget(m_skipBtn);

        m_skipAllBtn = new QPushButton(SonnetUi);
        m_skipAllBtn->setObjectName(QString::fromUtf8("m_skipAllBtn"));

        vboxLayout->addWidget(m_skipAllBtn);

        m_autoCorrect = new QPushButton(SonnetUi);
        m_autoCorrect->setObjectName(QString::fromUtf8("m_autoCorrect"));

        vboxLayout->addWidget(m_autoCorrect);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);


        gridLayout->addLayout(vboxLayout, 2, 5, 3, 1);

#if QT_CONFIG(shortcut)
        textLabel5->setBuddy(m_language);
        textLabel4->setBuddy(m_replacement);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(m_addBtn, m_replacement);
        QWidget::setTabOrder(m_replacement, m_suggestBtn);
        QWidget::setTabOrder(m_suggestBtn, m_replaceBtn);
        QWidget::setTabOrder(m_replaceBtn, m_replaceAllBtn);
        QWidget::setTabOrder(m_replaceAllBtn, m_skipBtn);
        QWidget::setTabOrder(m_skipBtn, m_skipAllBtn);
        QWidget::setTabOrder(m_skipAllBtn, m_suggestions);
        QWidget::setTabOrder(m_suggestions, m_language);

        retranslateUi(SonnetUi);

        QMetaObject::connectSlotsByName(SonnetUi);
    } // setupUi

    void retranslateUi(QWidget *SonnetUi)
    {
#if QT_CONFIG(whatsthis)
        textLabel2->setWhatsThis(QCoreApplication::translate("SonnetUi", "<qt><p>This word was considered to be an \"unknown word\" because it does not match any entry in the dictionary currently in use. It may also be a word in a foreign language.</p>\n"
"<p>If the word is not misspelled, you may add it to the dictionary by clicking <b>Add to Dictionary</b>. If you do not want to add the unknown word to the dictionary, but you want to leave it unchanged, click <b>Ignore</b> or <b>Ignore All</b>.</p>\n"
"<p>However, if the word is misspelled, you can try to find the correct replacement in the list below. If you cannot find a replacement there, you may type it in the text box below, and click <b>Replace</b> or <b>Replace All</b>.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        textLabel2->setText(QCoreApplication::translate("SonnetUi", "Unknown word:", nullptr));
#if QT_CONFIG(tooltip)
        m_unknownWord->setToolTip(QCoreApplication::translate("SonnetUi", "Unknown word", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        m_unknownWord->setWhatsThis(QCoreApplication::translate("SonnetUi", "<qt><p>This word was considered to be an \"unknown word\" because it does not match any entry in the dictionary currently in use. It may also be a word in a foreign language.</p>\n"
"<p>If the word is not misspelled, you may add it to the dictionary by clicking <b>Add to Dictionary</b>. If you do not want to add the unknown word to the dictionary, but you want to leave it unchanged, click <b>Ignore</b> or <b>Ignore All</b>.</p>\n"
"<p>However, if the word is misspelled, you can try to find the correct replacement in the list below. If you cannot find a replacement there, you may type it in the text box below, and click <b>Replace</b> or <b>Replace All</b>.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_unknownWord->setText(QCoreApplication::translate("SonnetUi", "<b>misspelled</b>", nullptr));
#if QT_CONFIG(whatsthis)
        textLabel5->setWhatsThis(QCoreApplication::translate("SonnetUi", "<qt>\n"
"<p>Select the language of the document you are proofing here.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        textLabel5->setText(QCoreApplication::translate("SonnetUi", "&Language:", nullptr));
#if QT_CONFIG(tooltip)
        m_contextLabel->setToolTip(QCoreApplication::translate("SonnetUi", "Text excerpt showing the unknown word in its context.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        m_contextLabel->setWhatsThis(QCoreApplication::translate("SonnetUi", "<qt>\n"
"<p>Here you can see a text excerpt showing the unknown word in its context. If this information is not sufficient to choose the best replacement for the unknown word, you can click on the document you are proofing, read a larger part of the text and then return here to continue proofing.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_contextLabel->setText(QCoreApplication::translate("SonnetUi", "... the <b>misspelled</b> word shown in context ...", nullptr));
#if QT_CONFIG(whatsthis)
        m_addBtn->setWhatsThis(QCoreApplication::translate("SonnetUi", "<qt>\n"
"<p>The unknown word was detected and considered unknown because it is not included in the dictionary.<br>\n"
"Click here if you consider the unknown word not to be misspelled, and you want to avoid wrongly detecting it again in the future. If you want to let it remain as is, but not add it to the dictionary, then click <b>Ignore</b> or <b>Ignore All</b> instead.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_addBtn->setText(QCoreApplication::translate("SonnetUi", "<< Add to Dictionary", nullptr));
#if QT_CONFIG(tooltip)
        m_suggestions->setToolTip(QCoreApplication::translate("SonnetUi", "Suggestion List", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        m_suggestions->setWhatsThis(QCoreApplication::translate("SonnetUi", "<qt>\n"
"<p>If the unknown word is misspelled, you should check if the correction for it is available and if it is, click on it. If none of the words in this list is a good replacement you may type the correct word in the edit box above.</p>\n"
"<p>To correct this word click <b>Replace</b> if you want to correct only this occurrence or <b>Replace All</b> if you want to correct all occurrences.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        textLabel4->setWhatsThis(QCoreApplication::translate("SonnetUi", "<qt>\n"
"<p>If the unknown word is misspelled, you should type the correction for your misspelled word here or select it from the list below.</p>\n"
"<p>You can then click <b>Replace</b> if you want to correct only this occurrence of the word or <b>Replace All</b> if you want to correct all occurrences.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        textLabel4->setText(QCoreApplication::translate("SonnetUi", "Replace &with:", nullptr));
#if QT_CONFIG(whatsthis)
        m_replacement->setWhatsThis(QCoreApplication::translate("SonnetUi", "<qt>\n"
"<p>If the unknown word is misspelled, you should type the correction for your misspelled word here or select it from the list below.</p>\n"
"<p>You can then click <b>Replace</b> if you want to correct only this occurrence of the word or <b>Replace All</b> if you want to correct all occurrences.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        m_language->setToolTip(QCoreApplication::translate("SonnetUi", "Language Selection", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        m_language->setWhatsThis(QCoreApplication::translate("SonnetUi", "<qt>\n"
"<p>Select the language of the document you are proofing here.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_suggestBtn->setText(QCoreApplication::translate("SonnetUi", "S&uggest", nullptr));
#if QT_CONFIG(whatsthis)
        m_replaceBtn->setWhatsThis(QCoreApplication::translate("SonnetUi", "<qt>\n"
"<p>Click here to replace this occurrence of the unknown text with the text in the edit box above (to the left).</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_replaceBtn->setText(QCoreApplication::translate("SonnetUi", "&Replace", nullptr));
#if QT_CONFIG(whatsthis)
        m_replaceAllBtn->setWhatsThis(QCoreApplication::translate("SonnetUi", "<qt>\n"
"<p>Click here to replace all occurrences of the unknown text with the text in the edit box above (to the left).</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_replaceAllBtn->setText(QCoreApplication::translate("SonnetUi", "R&eplace All", nullptr));
#if QT_CONFIG(whatsthis)
        m_skipBtn->setWhatsThis(QCoreApplication::translate("SonnetUi", "<qt>\n"
"<p>Click here to let this occurrence of the unknown word remain as is.</p>\n"
"<p>This action is useful when the word is a name, an acronym, a foreign word or any other unknown word that you want to use but not add to the dictionary.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_skipBtn->setText(QCoreApplication::translate("SonnetUi", "&Ignore", nullptr));
#if QT_CONFIG(whatsthis)
        m_skipAllBtn->setWhatsThis(QCoreApplication::translate("SonnetUi", "<qt>\n"
"<p>Click here to let all occurrences of the unknown word remain as they are.</p>\n"
"<p>This action is useful when the word is a name, an acronym, a foreign word or any other unknown word that you want to use but not add to the dictionary.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_skipAllBtn->setText(QCoreApplication::translate("SonnetUi", "I&gnore All", nullptr));
#if QT_CONFIG(whatsthis)
        m_autoCorrect->setWhatsThis(QCoreApplication::translate("SonnetUi", "<qt>\n"
"<p>Click here to let all occurrences of the unknown word remain as they are.</p>\n"
"<p>This action is useful when the word is a name, an acronym, a foreign word or any other unknown word that you want to use but not add to the dictionary.</p>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_autoCorrect->setText(QCoreApplication::translate("SonnetUi", "Autocorrect", nullptr));
        (void)SonnetUi;
    } // retranslateUi

};

namespace Ui {
    class SonnetUi: public Ui_SonnetUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONNETUI_H
