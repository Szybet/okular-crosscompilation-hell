#include <klocalizedstring.h>

/*
A dialog to display the HTTP headers for a given page.
*/

/********************************************************************************
** Form generated from reading UI file 'htmlpageinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTMLPAGEINFO_H
#define UI_HTMLPAGEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_KHTMLInfoDlg
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox2;
    QHBoxLayout *hboxLayout;
    QGridLayout *gridLayout1;
    QLabel *urlLabel;
    QLabel *_title;
    QLabel *_url;
    QLabel *_lastModified;
    QLabel *titleLabel;
    QLabel *_lmLabel;
    QLabel *_eLabel;
    QLabel *_encoding;
    QLabel *_modeLabel;
    QLabel *_mode;
    QGroupBox *groupBox1;
    QVBoxLayout *vboxLayout;
    QTreeWidget *_headers;
    QPushButton *_close;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *KHTMLInfoDlg)
    {
        if (KHTMLInfoDlg->objectName().isEmpty())
            KHTMLInfoDlg->setObjectName(QString::fromUtf8("KHTMLInfoDlg"));
        KHTMLInfoDlg->resize(550, 519);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(KHTMLInfoDlg->sizePolicy().hasHeightForWidth());
        KHTMLInfoDlg->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(KHTMLInfoDlg);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox2 = new QGroupBox(KHTMLInfoDlg);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        hboxLayout = new QHBoxLayout(groupBox2);
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        gridLayout1 = new QGridLayout();
#ifndef UI_Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        urlLabel = new QLabel(groupBox2);
        urlLabel->setObjectName(QString::fromUtf8("urlLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(urlLabel->sizePolicy().hasHeightForWidth());
        urlLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(urlLabel, 1, 0, 1, 1);

        _title = new QLabel(groupBox2);
        _title->setObjectName(QString::fromUtf8("_title"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(_title->sizePolicy().hasHeightForWidth());
        _title->setSizePolicy(sizePolicy2);
        _title->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout1->addWidget(_title, 0, 1, 1, 1);

        _url = new QLabel(groupBox2);
        _url->setObjectName(QString::fromUtf8("_url"));
        sizePolicy2.setHeightForWidth(_url->sizePolicy().hasHeightForWidth());
        _url->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(_url, 1, 1, 1, 1);

        _lastModified = new QLabel(groupBox2);
        _lastModified->setObjectName(QString::fromUtf8("_lastModified"));
        sizePolicy2.setHeightForWidth(_lastModified->sizePolicy().hasHeightForWidth());
        _lastModified->setSizePolicy(sizePolicy2);
        _lastModified->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout1->addWidget(_lastModified, 2, 1, 1, 1);

        titleLabel = new QLabel(groupBox2);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        sizePolicy1.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(titleLabel, 0, 0, 1, 1);

        _lmLabel = new QLabel(groupBox2);
        _lmLabel->setObjectName(QString::fromUtf8("_lmLabel"));
        sizePolicy1.setHeightForWidth(_lmLabel->sizePolicy().hasHeightForWidth());
        _lmLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(_lmLabel, 2, 0, 1, 1);

        _eLabel = new QLabel(groupBox2);
        _eLabel->setObjectName(QString::fromUtf8("_eLabel"));
        sizePolicy1.setHeightForWidth(_eLabel->sizePolicy().hasHeightForWidth());
        _eLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(_eLabel, 3, 0, 1, 1);

        _encoding = new QLabel(groupBox2);
        _encoding->setObjectName(QString::fromUtf8("_encoding"));
        sizePolicy2.setHeightForWidth(_encoding->sizePolicy().hasHeightForWidth());
        _encoding->setSizePolicy(sizePolicy2);
        _encoding->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout1->addWidget(_encoding, 3, 1, 1, 1);

        _modeLabel = new QLabel(groupBox2);
        _modeLabel->setObjectName(QString::fromUtf8("_modeLabel"));

        gridLayout1->addWidget(_modeLabel, 4, 0, 1, 1);

        _mode = new QLabel(groupBox2);
        _mode->setObjectName(QString::fromUtf8("_mode"));

        gridLayout1->addWidget(_mode, 4, 1, 1, 1);


        hboxLayout->addLayout(gridLayout1);


        gridLayout->addWidget(groupBox2, 0, 0, 1, 2);

        groupBox1 = new QGroupBox(KHTMLInfoDlg);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        vboxLayout = new QVBoxLayout(groupBox1);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        _headers = new QTreeWidget(groupBox1);
        _headers->setObjectName(QString::fromUtf8("_headers"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(_headers->sizePolicy().hasHeightForWidth());
        _headers->setSizePolicy(sizePolicy3);
        _headers->setSelectionMode(QAbstractItemView::NoSelection);
        _headers->setRootIsDecorated(false);
        _headers->setAllColumnsShowFocus(true);

        vboxLayout->addWidget(_headers);


        gridLayout->addWidget(groupBox1, 1, 0, 1, 2);

        _close = new QPushButton(KHTMLInfoDlg);
        _close->setObjectName(QString::fromUtf8("_close"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(_close->sizePolicy().hasHeightForWidth());
        _close->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(_close, 2, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);

#if QT_CONFIG(shortcut)
        urlLabel->setBuddy(_url);
        titleLabel->setBuddy(_title);
        _lmLabel->setBuddy(_lastModified);
        _eLabel->setBuddy(_encoding);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(_close, _url);
        QWidget::setTabOrder(_url, _headers);

        retranslateUi(KHTMLInfoDlg);

        QMetaObject::connectSlotsByName(KHTMLInfoDlg);
    } // setupUi

    void retranslateUi(QDialog *KHTMLInfoDlg)
    {
        KHTMLInfoDlg->setWindowTitle(tr2i18n("Document Information", nullptr));
        groupBox2->setTitle(tr2i18n("General", "@title:group Document information"));
        urlLabel->setText(tr2i18n("URL:", nullptr));
        titleLabel->setText(tr2i18n("Title:", nullptr));
        _lmLabel->setText(tr2i18n("Last modified:", nullptr));
        _eLabel->setText(tr2i18n("Document encoding:", nullptr));
        _modeLabel->setText(tr2i18n("Rendering mode:", nullptr));
        _mode->setText(QString());
        groupBox1->setTitle(tr2i18n("HTTP Headers", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = _headers->headerItem();
        ___qtreewidgetitem->setText(1, tr2i18n("Value", nullptr));
        ___qtreewidgetitem->setText(0, tr2i18n("Property", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KHTMLInfoDlg: public Ui_KHTMLInfoDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HTMLPAGEINFO_H

