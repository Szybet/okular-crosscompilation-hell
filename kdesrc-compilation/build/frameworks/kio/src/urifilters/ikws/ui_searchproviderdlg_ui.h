#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'searchproviderdlg_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPROVIDERDLG_UI_H
#define UI_SEARCHPROVIDERDLG_UI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchProviderDlgUI
{
public:
    QGridLayout *gridLayout;
    QLabel *lbName;
    QLabel *lbQuery;
    QLineEdit *leQuery;
    QComboBox *cbCharset;
    QLineEdit *leShortcut;
    QLineEdit *leName;
    QLabel *lbShortcut;
    QLabel *lbCharset;
    QLabel *noteLabel;
    QPushButton *pbPaste;

    void setupUi(QWidget *SearchProviderDlgUI)
    {
        if (SearchProviderDlgUI->objectName().isEmpty())
            SearchProviderDlgUI->setObjectName(QString::fromUtf8("SearchProviderDlgUI"));
        SearchProviderDlgUI->resize(449, 143);
        gridLayout = new QGridLayout(SearchProviderDlgUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lbName = new QLabel(SearchProviderDlgUI);
        lbName->setObjectName(QString::fromUtf8("lbName"));
        lbName->setLayoutDirection(Qt::LeftToRight);
        lbName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbName->setWordWrap(false);

        gridLayout->addWidget(lbName, 0, 1, 1, 1);

        lbQuery = new QLabel(SearchProviderDlgUI);
        lbQuery->setObjectName(QString::fromUtf8("lbQuery"));
        lbQuery->setLayoutDirection(Qt::LeftToRight);
        lbQuery->setWordWrap(true);

        gridLayout->addWidget(lbQuery, 2, 1, 1, 1, Qt::AlignRight);

        leQuery = new QLineEdit(SearchProviderDlgUI);
        leQuery->setObjectName(QString::fromUtf8("leQuery"));

        gridLayout->addWidget(leQuery, 2, 2, 1, 1);

        cbCharset = new QComboBox(SearchProviderDlgUI);
        cbCharset->setObjectName(QString::fromUtf8("cbCharset"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbCharset->sizePolicy().hasHeightForWidth());
        cbCharset->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cbCharset, 5, 2, 1, 2);

        leShortcut = new QLineEdit(SearchProviderDlgUI);
        leShortcut->setObjectName(QString::fromUtf8("leShortcut"));

        gridLayout->addWidget(leShortcut, 3, 2, 1, 2);

        leName = new QLineEdit(SearchProviderDlgUI);
        leName->setObjectName(QString::fromUtf8("leName"));

        gridLayout->addWidget(leName, 0, 2, 1, 2);

        lbShortcut = new QLabel(SearchProviderDlgUI);
        lbShortcut->setObjectName(QString::fromUtf8("lbShortcut"));
        lbShortcut->setWordWrap(true);

        gridLayout->addWidget(lbShortcut, 3, 1, 1, 1, Qt::AlignRight);

        lbCharset = new QLabel(SearchProviderDlgUI);
        lbCharset->setObjectName(QString::fromUtf8("lbCharset"));
        lbCharset->setWordWrap(true);

        gridLayout->addWidget(lbCharset, 5, 1, 1, 1, Qt::AlignRight);

        noteLabel = new QLabel(SearchProviderDlgUI);
        noteLabel->setObjectName(QString::fromUtf8("noteLabel"));

        gridLayout->addWidget(noteLabel, 6, 1, 1, 3);

        pbPaste = new QPushButton(SearchProviderDlgUI);
        pbPaste->setObjectName(QString::fromUtf8("pbPaste"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("edit-paste");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        pbPaste->setIcon(icon);

        gridLayout->addWidget(pbPaste, 2, 3, 1, 1);

#if QT_CONFIG(shortcut)
        lbName->setBuddy(leName);
        lbQuery->setBuddy(leQuery);
        lbShortcut->setBuddy(leShortcut);
        lbCharset->setBuddy(cbCharset);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(leName, leQuery);
        QWidget::setTabOrder(leQuery, leShortcut);
        QWidget::setTabOrder(leShortcut, cbCharset);

        retranslateUi(SearchProviderDlgUI);

        QMetaObject::connectSlotsByName(SearchProviderDlgUI);
    } // setupUi

    void retranslateUi(QWidget *SearchProviderDlgUI)
    {
#if QT_CONFIG(whatsthis)
        lbName->setWhatsThis(tr2i18n("Enter the human-readable name of the search provider here.", nullptr));
#endif // QT_CONFIG(whatsthis)
        lbName->setText(tr2i18n("Shortcut &name:", nullptr));
#if QT_CONFIG(whatsthis)
        lbQuery->setWhatsThis(tr2i18n("<qt>\n"
"Enter the URI that is used to perform a search on the search engine here.<br/>The whole text to be searched for can be specified as \\{@} or \\{0}.<br/>\n"
"Recommended is \\{@}, since it removes all query variables (name=value) from the resulting string, whereas \\{0} will be substituted with the unmodified query string.<br/>You can use \\{1} ... \\{n} to specify certain words from the query and \\{name} to specify a value given by 'name=value' in the user query.<br/>In addition it is possible to specify multiple references (names, numbers and strings) at once (\\{name1,name2,...,\"string\"}).<br/>The first matching value (from the left) will be used as the substitution value for the resulting URI.<br/>A quoted string can be used as the default value if nothing matches from the left of the reference list.\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lbQuery->setText(tr2i18n("Shortcut &URL:", nullptr));
#if QT_CONFIG(tooltip)
        leQuery->setToolTip(tr2i18n("<qt>\n"
"Enter the URI that is used to perform a search on the search engine here.<br/>The whole text to be searched for can be specified as \\{@} or \\{0}.<br/>\n"
"Recommended is \\{@}, since it removes all query variables (name=value) from the resulting string, whereas \\{0} will be substituted with the unmodified query string.<br/>You can use \\{1} ... \\{n} to specify certain words from the query and \\{name} to specify a value given by 'name=value' in the user query.<br/>In addition it is possible to specify multiple references (names, numbers and strings) at once (\\{name1,name2,...,\"string\"}).<br/>The first matching value (from the left) will be used as the substitution value for the resulting URI.<br/>A quoted string can be used as the default value if nothing matches from the left of the reference list.\n"
"</qt>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        leQuery->setWhatsThis(tr2i18n("<qt>\n"
"Enter the URI that is used to perform a search on the search engine here.<br/>The whole text to be searched for can be specified as \\{@} or \\{0}.<br/>\n"
"Recommended is \\{@}, since it removes all query variables (name=value) from the resulting string, whereas \\{0} will be substituted with the unmodified query string.<br/>You can use \\{1} ... \\{n} to specify certain words from the query and \\{name} to specify a value given by 'name=value' in the user query.<br/>In addition it is possible to specify multiple references (names, numbers and strings) at once (\\{name1,name2,...,\"string\"}).<br/>The first matching value (from the left) will be used as the substitution value for the resulting URI.<br/>A quoted string can be used as the default value if nothing matches from the left of the reference list.\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        cbCharset->setWhatsThis(tr2i18n("Select the character set that will be used to encode your search query.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        leShortcut->setToolTip(tr2i18n("<qt>\n"
"The shortcuts entered here can be used as a pseudo-URI scheme in KDE. For example, the shortcut <b>av</b> can be used as in <b>av</b>:<b>my search</b>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        leShortcut->setWhatsThis(tr2i18n("<qt>\n"
"The shortcuts entered here can be used as a pseudo-URI scheme in KDE. For example, the shortcut <b>av</b> can be used as in <b>av</b>:<b>my search</b>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        leName->setToolTip(tr2i18n("<html><head/><body><p>Enter the human-readable name of the web shortcut here.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        leName->setWhatsThis(tr2i18n("<html><head/><body><p>Enter the human-readable name of the web shortcut here.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        lbShortcut->setWhatsThis(tr2i18n("<qt>\n"
"The shortcuts entered here can be used as a pseudo-URI scheme in KDE. For example, the shortcut <b>av</b> can be used as in <b>av</b>:<b>my search</b>\n"
"</qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lbShortcut->setText(tr2i18n("&Shortcuts:", nullptr));
#if QT_CONFIG(whatsthis)
        lbCharset->setWhatsThis(tr2i18n("Select the character set that will be used to encode your search query", nullptr));
#endif // QT_CONFIG(whatsthis)
        lbCharset->setText(tr2i18n("&Charset:", nullptr));
#if QT_CONFIG(tooltip)
        noteLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        noteLabel->setText(QString());
#if QT_CONFIG(tooltip)
        pbPaste->setToolTip(tr2i18n("Insert query placeholder", nullptr));
#endif // QT_CONFIG(tooltip)
        pbPaste->setText(QString());
        (void)SearchProviderDlgUI;
    } // retranslateUi

};

namespace Ui {
    class SearchProviderDlgUI: public Ui_SearchProviderDlgUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SEARCHPROVIDERDLG_UI_H

