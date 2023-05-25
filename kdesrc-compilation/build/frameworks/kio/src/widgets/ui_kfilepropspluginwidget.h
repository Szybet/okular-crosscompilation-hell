#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'kfilepropspluginwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KFILEPROPSPLUGINWIDGET_H
#define UI_KFILEPROPSPLUGINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kcapacitybar.h"
#include "kiconbutton.h"
#include "kmessagewidget.h"
#include "kseparator.h"
#include "ksqueezedtextlabel.h"

QT_BEGIN_NAMESPACE

class Ui_KFilePropsPluginWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *sizeButtonsLayout;
    QPushButton *calculateSizeBtn;
    QPushButton *stopCalculateSizeBtn;
    QPushButton *sizeDetailsBtn;
    QSpacerItem *horizontalSpacer_2;
    QLabel *fsLabel;
    QHBoxLayout *iconLayout;
    QSpacerItem *horizontalSpacer;
    KIconButton *iconButton;
    QLabel *iconLabel;
    KSeparator *kseparator_2;
    QLabel *mountSrcLabel_Left;
    QLabel *modifiedTimeLabel;
    KSqueezedTextLabel *locationLabel;
    QVBoxLayout *mimeTypeLayout;
    QLabel *mimeCommentLabel;
    KMessageWidget *symlinkTargetMessageWidget;
    QLabel *sizeLabel;
    QLabel *freespaceLabel;
    QHBoxLayout *symlinkLayout;
    QLineEdit *symlinkTargetEdit;
    QPushButton *symlinkTargetOpenDir;
    QLabel *typeLabel;
    QLabel *mountSrcLabel;
    QLabel *locationLabel_Left;
    QLabel *createdTimeLabel;
    QLabel *sizeLabelLeft;
    QHBoxLayout *defaultHandlerLayout;
    QLabel *defaultHandlerIcon;
    QLabel *defaultHandlerLabel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *configureMimeBtn;
    QLabel *contentLabel;
    KSqueezedTextLabel *mountPointLabel;
    QLabel *symlinkTargetLabel;
    QLabel *modifiedTimeLabel_Left;
    QLabel *createdTimeLabel_Left;
    QLabel *fsLabel_Left;
    QHBoxLayout *fileNameLayout;
    QLineEdit *fileNameLineEdit;
    QLabel *fileNameLabel;
    KCapacityBar *capacityBar;
    QLabel *magicMimeCommentLabel;
    KSeparator *fsSeparator;
    QLabel *mountPointLabel_Left;
    QLabel *accessTimeLabel;
    QLabel *accessTimeLabel_Left;
    QLabel *defaultHandlerLabel_Left;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *KFilePropsPluginWidget)
    {
        if (KFilePropsPluginWidget->objectName().isEmpty())
            KFilePropsPluginWidget->setObjectName(QString::fromUtf8("KFilePropsPluginWidget"));
        KFilePropsPluginWidget->resize(1053, 976);
        verticalLayout_3 = new QVBoxLayout(KFilePropsPluginWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(24);
        gridLayout->setVerticalSpacing(10);
        sizeButtonsLayout = new QHBoxLayout();
        sizeButtonsLayout->setObjectName(QString::fromUtf8("sizeButtonsLayout"));
        calculateSizeBtn = new QPushButton(KFilePropsPluginWidget);
        calculateSizeBtn->setObjectName(QString::fromUtf8("calculateSizeBtn"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("view-refresh");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        calculateSizeBtn->setIcon(icon);

        sizeButtonsLayout->addWidget(calculateSizeBtn);

        stopCalculateSizeBtn = new QPushButton(KFilePropsPluginWidget);
        stopCalculateSizeBtn->setObjectName(QString::fromUtf8("stopCalculateSizeBtn"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("dialog-cancel");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        stopCalculateSizeBtn->setIcon(icon1);

        sizeButtonsLayout->addWidget(stopCalculateSizeBtn);

        sizeDetailsBtn = new QPushButton(KFilePropsPluginWidget);
        sizeDetailsBtn->setObjectName(QString::fromUtf8("sizeDetailsBtn"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("filelight");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        sizeDetailsBtn->setIcon(icon2);

        sizeButtonsLayout->addWidget(sizeDetailsBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        sizeButtonsLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(sizeButtonsLayout, 7, 1, 1, 1);

        fsLabel = new QLabel(KFilePropsPluginWidget);
        fsLabel->setObjectName(QString::fromUtf8("fsLabel"));
        fsLabel->setTextFormat(Qt::PlainText);
        fsLabel->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(fsLabel, 14, 1, 1, 1);

        iconLayout = new QHBoxLayout();
        iconLayout->setObjectName(QString::fromUtf8("iconLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        iconLayout->addItem(horizontalSpacer);

        iconButton = new KIconButton(KFilePropsPluginWidget);
        iconButton->setObjectName(QString::fromUtf8("iconButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iconButton->sizePolicy().hasHeightForWidth());
        iconButton->setSizePolicy(sizePolicy);
        iconButton->setIconSize(48);
        iconButton->setStrictIconSize(false);

        iconLayout->addWidget(iconButton);

        iconLabel = new QLabel(KFilePropsPluginWidget);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        iconLabel->setAlignment(Qt::AlignCenter);

        iconLayout->addWidget(iconLabel);


        gridLayout->addLayout(iconLayout, 0, 0, 1, 1);

        kseparator_2 = new KSeparator(KFilePropsPluginWidget);
        kseparator_2->setObjectName(QString::fromUtf8("kseparator_2"));

        gridLayout->addWidget(kseparator_2, 1, 0, 1, 2);

        mountSrcLabel_Left = new QLabel(KFilePropsPluginWidget);
        mountSrcLabel_Left->setObjectName(QString::fromUtf8("mountSrcLabel_Left"));
        mountSrcLabel_Left->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mountSrcLabel_Left, 16, 0, 1, 1);

        modifiedTimeLabel = new QLabel(KFilePropsPluginWidget);
        modifiedTimeLabel->setObjectName(QString::fromUtf8("modifiedTimeLabel"));
        modifiedTimeLabel->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(modifiedTimeLabel, 11, 1, 1, 1);

        locationLabel = new KSqueezedTextLabel(KFilePropsPluginWidget);
        locationLabel->setObjectName(QString::fromUtf8("locationLabel"));
        locationLabel->setLayoutDirection(Qt::LeftToRight);
        locationLabel->setTextFormat(Qt::PlainText);
        locationLabel->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(locationLabel, 5, 1, 1, 1);

        mimeTypeLayout = new QVBoxLayout();
        mimeTypeLayout->setObjectName(QString::fromUtf8("mimeTypeLayout"));
        mimeCommentLabel = new QLabel(KFilePropsPluginWidget);
        mimeCommentLabel->setObjectName(QString::fromUtf8("mimeCommentLabel"));
        mimeCommentLabel->setTextFormat(Qt::PlainText);
        mimeCommentLabel->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        mimeTypeLayout->addWidget(mimeCommentLabel);


        gridLayout->addLayout(mimeTypeLayout, 2, 1, 1, 1);

        symlinkTargetMessageWidget = new KMessageWidget(KFilePropsPluginWidget);
        symlinkTargetMessageWidget->setObjectName(QString::fromUtf8("symlinkTargetMessageWidget"));
        symlinkTargetMessageWidget->setWordWrap(true);
        symlinkTargetMessageWidget->setMessageType(KMessageWidget::Error);

        gridLayout->addWidget(symlinkTargetMessageWidget, 9, 0, 1, 2);

        sizeLabel = new QLabel(KFilePropsPluginWidget);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));
        sizeLabel->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(sizeLabel, 6, 1, 1, 1);

        freespaceLabel = new QLabel(KFilePropsPluginWidget);
        freespaceLabel->setObjectName(QString::fromUtf8("freespaceLabel"));
        freespaceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(freespaceLabel, 17, 0, 1, 1);

        symlinkLayout = new QHBoxLayout();
        symlinkLayout->setObjectName(QString::fromUtf8("symlinkLayout"));
        symlinkTargetEdit = new QLineEdit(KFilePropsPluginWidget);
        symlinkTargetEdit->setObjectName(QString::fromUtf8("symlinkTargetEdit"));

        symlinkLayout->addWidget(symlinkTargetEdit);

        symlinkTargetOpenDir = new QPushButton(KFilePropsPluginWidget);
        symlinkTargetOpenDir->setObjectName(QString::fromUtf8("symlinkTargetOpenDir"));
        sizePolicy.setHeightForWidth(symlinkTargetOpenDir->sizePolicy().hasHeightForWidth());
        symlinkTargetOpenDir->setSizePolicy(sizePolicy);
        QIcon icon3;
        iconThemeName = QString::fromUtf8("go-jump");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        symlinkTargetOpenDir->setIcon(icon3);

        symlinkLayout->addWidget(symlinkTargetOpenDir);


        gridLayout->addLayout(symlinkLayout, 8, 1, 1, 1);

        typeLabel = new QLabel(KFilePropsPluginWidget);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        typeLabel->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(typeLabel, 2, 0, 1, 1);

        mountSrcLabel = new QLabel(KFilePropsPluginWidget);
        mountSrcLabel->setObjectName(QString::fromUtf8("mountSrcLabel"));
        mountSrcLabel->setTextFormat(Qt::PlainText);
        mountSrcLabel->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mountSrcLabel, 16, 1, 1, 1);

        locationLabel_Left = new QLabel(KFilePropsPluginWidget);
        locationLabel_Left->setObjectName(QString::fromUtf8("locationLabel_Left"));
        locationLabel_Left->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(locationLabel_Left, 5, 0, 1, 1);

        createdTimeLabel = new QLabel(KFilePropsPluginWidget);
        createdTimeLabel->setObjectName(QString::fromUtf8("createdTimeLabel"));
        createdTimeLabel->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(createdTimeLabel, 10, 1, 1, 1);

        sizeLabelLeft = new QLabel(KFilePropsPluginWidget);
        sizeLabelLeft->setObjectName(QString::fromUtf8("sizeLabelLeft"));
        sizeLabelLeft->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(sizeLabelLeft, 6, 0, 1, 1);

        defaultHandlerLayout = new QHBoxLayout();
        defaultHandlerLayout->setObjectName(QString::fromUtf8("defaultHandlerLayout"));
        defaultHandlerIcon = new QLabel(KFilePropsPluginWidget);
        defaultHandlerIcon->setObjectName(QString::fromUtf8("defaultHandlerIcon"));

        defaultHandlerLayout->addWidget(defaultHandlerIcon);

        defaultHandlerLabel = new QLabel(KFilePropsPluginWidget);
        defaultHandlerLabel->setObjectName(QString::fromUtf8("defaultHandlerLabel"));
        defaultHandlerLabel->setTextFormat(Qt::PlainText);

        defaultHandlerLayout->addWidget(defaultHandlerLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        defaultHandlerLayout->addItem(horizontalSpacer_3);

        configureMimeBtn = new QPushButton(KFilePropsPluginWidget);
        configureMimeBtn->setObjectName(QString::fromUtf8("configureMimeBtn"));
        sizePolicy.setHeightForWidth(configureMimeBtn->sizePolicy().hasHeightForWidth());
        configureMimeBtn->setSizePolicy(sizePolicy);
        QIcon icon4;
        iconThemeName = QString::fromUtf8("configure");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        configureMimeBtn->setIcon(icon4);

        defaultHandlerLayout->addWidget(configureMimeBtn);


        gridLayout->addLayout(defaultHandlerLayout, 4, 1, 1, 1);

        contentLabel = new QLabel(KFilePropsPluginWidget);
        contentLabel->setObjectName(QString::fromUtf8("contentLabel"));
        contentLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(contentLabel, 3, 0, 1, 1);

        mountPointLabel = new KSqueezedTextLabel(KFilePropsPluginWidget);
        mountPointLabel->setObjectName(QString::fromUtf8("mountPointLabel"));
        mountPointLabel->setTextFormat(Qt::PlainText);
        mountPointLabel->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mountPointLabel, 15, 1, 1, 1);

        symlinkTargetLabel = new QLabel(KFilePropsPluginWidget);
        symlinkTargetLabel->setObjectName(QString::fromUtf8("symlinkTargetLabel"));
        symlinkTargetLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(symlinkTargetLabel, 8, 0, 1, 1);

        modifiedTimeLabel_Left = new QLabel(KFilePropsPluginWidget);
        modifiedTimeLabel_Left->setObjectName(QString::fromUtf8("modifiedTimeLabel_Left"));
        modifiedTimeLabel_Left->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(modifiedTimeLabel_Left, 11, 0, 1, 1);

        createdTimeLabel_Left = new QLabel(KFilePropsPluginWidget);
        createdTimeLabel_Left->setObjectName(QString::fromUtf8("createdTimeLabel_Left"));
        createdTimeLabel_Left->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(createdTimeLabel_Left, 10, 0, 1, 1);

        fsLabel_Left = new QLabel(KFilePropsPluginWidget);
        fsLabel_Left->setObjectName(QString::fromUtf8("fsLabel_Left"));
        fsLabel_Left->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(fsLabel_Left, 14, 0, 1, 1);

        fileNameLayout = new QHBoxLayout();
        fileNameLayout->setObjectName(QString::fromUtf8("fileNameLayout"));
        fileNameLineEdit = new QLineEdit(KFilePropsPluginWidget);
        fileNameLineEdit->setObjectName(QString::fromUtf8("fileNameLineEdit"));

        fileNameLayout->addWidget(fileNameLineEdit);

        fileNameLabel = new QLabel(KFilePropsPluginWidget);
        fileNameLabel->setObjectName(QString::fromUtf8("fileNameLabel"));
        fileNameLabel->setTextFormat(Qt::PlainText);
        fileNameLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        fileNameLayout->addWidget(fileNameLabel);


        gridLayout->addLayout(fileNameLayout, 0, 1, 1, 1);

        capacityBar = new KCapacityBar(KFilePropsPluginWidget);
        capacityBar->setObjectName(QString::fromUtf8("capacityBar"));
        capacityBar->setDrawTextMode(KCapacityBar::DrawTextOutline);

        gridLayout->addWidget(capacityBar, 17, 1, 1, 1);

        magicMimeCommentLabel = new QLabel(KFilePropsPluginWidget);
        magicMimeCommentLabel->setObjectName(QString::fromUtf8("magicMimeCommentLabel"));
        magicMimeCommentLabel->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(magicMimeCommentLabel, 3, 1, 1, 1);

        fsSeparator = new KSeparator(KFilePropsPluginWidget);
        fsSeparator->setObjectName(QString::fromUtf8("fsSeparator"));

        gridLayout->addWidget(fsSeparator, 13, 0, 1, 2);

        mountPointLabel_Left = new QLabel(KFilePropsPluginWidget);
        mountPointLabel_Left->setObjectName(QString::fromUtf8("mountPointLabel_Left"));
        mountPointLabel_Left->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mountPointLabel_Left, 15, 0, 1, 1);

        accessTimeLabel = new QLabel(KFilePropsPluginWidget);
        accessTimeLabel->setObjectName(QString::fromUtf8("accessTimeLabel"));
        accessTimeLabel->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(accessTimeLabel, 12, 1, 1, 1);

        accessTimeLabel_Left = new QLabel(KFilePropsPluginWidget);
        accessTimeLabel_Left->setObjectName(QString::fromUtf8("accessTimeLabel_Left"));
        accessTimeLabel_Left->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(accessTimeLabel_Left, 12, 0, 1, 1);

        defaultHandlerLabel_Left = new QLabel(KFilePropsPluginWidget);
        defaultHandlerLabel_Left->setObjectName(QString::fromUtf8("defaultHandlerLabel_Left"));
        defaultHandlerLabel_Left->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(defaultHandlerLabel_Left, 4, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(KFilePropsPluginWidget);

        QMetaObject::connectSlotsByName(KFilePropsPluginWidget);
    } // setupUi

    void retranslateUi(QWidget *KFilePropsPluginWidget)
    {
        calculateSizeBtn->setText(tr2i18n("Calculate", nullptr));
        stopCalculateSizeBtn->setText(tr2i18n("Stop", nullptr));
        sizeDetailsBtn->setText(tr2i18n("Explore in Filelight", nullptr));
        fsLabel->setText(QString());
        iconLabel->setText(QString());
        mountSrcLabel_Left->setText(tr2i18n("Mounted From:", nullptr));
        modifiedTimeLabel->setText(QString());
        locationLabel->setText(QString());
        mimeCommentLabel->setText(QString());
        sizeLabel->setText(QString());
        freespaceLabel->setText(tr2i18n("Free Space:", nullptr));
        symlinkTargetEdit->setText(QString());
        symlinkTargetOpenDir->setText(QString());
        typeLabel->setText(tr2i18n("Type:", nullptr));
        mountSrcLabel->setText(QString());
        locationLabel_Left->setText(tr2i18n("Location:", nullptr));
        createdTimeLabel->setText(QString());
        sizeLabelLeft->setText(tr2i18n("Size:", nullptr));
        defaultHandlerIcon->setText(QString());
        defaultHandlerLabel->setText(QString());
        configureMimeBtn->setText(tr2i18n("Change...", nullptr));
        contentLabel->setText(tr2i18n("Content:", nullptr));
        mountPointLabel->setText(QString());
        symlinkTargetLabel->setText(tr2i18n("Points to:", nullptr));
        modifiedTimeLabel_Left->setText(tr2i18n("Modified:", nullptr));
        createdTimeLabel_Left->setText(tr2i18n("Created:", nullptr));
        fsLabel_Left->setText(tr2i18n("File System:", nullptr));
        fileNameLabel->setText(QString());
        capacityBar->setText(tr2i18n("Unknown size", nullptr));
        magicMimeCommentLabel->setText(QString());
        mountPointLabel_Left->setText(tr2i18n("Mounted On:", nullptr));
        accessTimeLabel->setText(QString());
        accessTimeLabel_Left->setText(tr2i18n("Accessed:", nullptr));
        defaultHandlerLabel_Left->setText(tr2i18n("Open With:", nullptr));
        (void)KFilePropsPluginWidget;
    } // retranslateUi

};

namespace Ui {
    class KFilePropsPluginWidget: public Ui_KFilePropsPluginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KFILEPROPSPLUGINWIDGET_H

