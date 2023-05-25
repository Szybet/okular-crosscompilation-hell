#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'kpropertiesdesktopbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KPROPERTIESDESKTOPBASE_H
#define UI_KPROPERTIESDESKTOPBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kseparator.h"
#include "kurlrequester.h"

QT_BEGIN_NAMESPACE

class Ui_KPropertiesDesktopBase
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *textLabel2;
    QLineEdit *genNameEdit;
    QLabel *textLabel3;
    QLineEdit *commentEdit;
    QLabel *labelenvvars;
    QLineEdit *envarsEdit;
    QLabel *textLabel4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *programEdit;
    QPushButton *browseButton;
    QLabel *textLabel5;
    KUrlRequester *pathEdit;
    QLabel *label;
    QLineEdit *argumentsEdit;
    KSeparator *kseparator;
    QLabel *textLabel7;
    QTreeWidget *filetypeList;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addFiletypeButton;
    QPushButton *delFiletypeButton;
    QSpacerItem *spacerItem;
    QPushButton *advancedButton;

    void setupUi(QWidget *KPropertiesDesktopBase)
    {
        if (KPropertiesDesktopBase->objectName().isEmpty())
            KPropertiesDesktopBase->setObjectName(QString::fromUtf8("KPropertiesDesktopBase"));
        KPropertiesDesktopBase->resize(365, 415);
        verticalLayout = new QVBoxLayout(KPropertiesDesktopBase);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        nameLabel = new QLabel(KPropertiesDesktopBase);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(KPropertiesDesktopBase);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        textLabel2 = new QLabel(KPropertiesDesktopBase);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, textLabel2);

        genNameEdit = new QLineEdit(KPropertiesDesktopBase);
        genNameEdit->setObjectName(QString::fromUtf8("genNameEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, genNameEdit);

        textLabel3 = new QLabel(KPropertiesDesktopBase);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, textLabel3);

        commentEdit = new QLineEdit(KPropertiesDesktopBase);
        commentEdit->setObjectName(QString::fromUtf8("commentEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, commentEdit);

        labelenvvars = new QLabel(KPropertiesDesktopBase);
        labelenvvars->setObjectName(QString::fromUtf8("labelenvvars"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelenvvars);

        envarsEdit = new QLineEdit(KPropertiesDesktopBase);
        envarsEdit->setObjectName(QString::fromUtf8("envarsEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, envarsEdit);

        textLabel4 = new QLabel(KPropertiesDesktopBase);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, textLabel4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        programEdit = new QLineEdit(KPropertiesDesktopBase);
        programEdit->setObjectName(QString::fromUtf8("programEdit"));

        horizontalLayout->addWidget(programEdit);

        browseButton = new QPushButton(KPropertiesDesktopBase);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        horizontalLayout->addWidget(browseButton);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout);

        textLabel5 = new QLabel(KPropertiesDesktopBase);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        formLayout->setWidget(6, QFormLayout::LabelRole, textLabel5);

        pathEdit = new KUrlRequester(KPropertiesDesktopBase);
        pathEdit->setObjectName(QString::fromUtf8("pathEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, pathEdit);

        label = new QLabel(KPropertiesDesktopBase);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label);

        argumentsEdit = new QLineEdit(KPropertiesDesktopBase);
        argumentsEdit->setObjectName(QString::fromUtf8("argumentsEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, argumentsEdit);


        verticalLayout->addLayout(formLayout);

        kseparator = new KSeparator(KPropertiesDesktopBase);
        kseparator->setObjectName(QString::fromUtf8("kseparator"));

        verticalLayout->addWidget(kseparator);

        textLabel7 = new QLabel(KPropertiesDesktopBase);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));

        verticalLayout->addWidget(textLabel7);

        filetypeList = new QTreeWidget(KPropertiesDesktopBase);
        filetypeList->setObjectName(QString::fromUtf8("filetypeList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(filetypeList->sizePolicy().hasHeightForWidth());
        filetypeList->setSizePolicy(sizePolicy);
        filetypeList->setRootIsDecorated(false);
        filetypeList->setSortingEnabled(true);
        filetypeList->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(filetypeList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        addFiletypeButton = new QPushButton(KPropertiesDesktopBase);
        addFiletypeButton->setObjectName(QString::fromUtf8("addFiletypeButton"));

        horizontalLayout_2->addWidget(addFiletypeButton);

        delFiletypeButton = new QPushButton(KPropertiesDesktopBase);
        delFiletypeButton->setObjectName(QString::fromUtf8("delFiletypeButton"));

        horizontalLayout_2->addWidget(delFiletypeButton);

        spacerItem = new QSpacerItem(70, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacerItem);

        advancedButton = new QPushButton(KPropertiesDesktopBase);
        advancedButton->setObjectName(QString::fromUtf8("advancedButton"));

        horizontalLayout_2->addWidget(advancedButton);


        verticalLayout->addLayout(horizontalLayout_2);

#if QT_CONFIG(shortcut)
        nameLabel->setBuddy(nameEdit);
        textLabel2->setBuddy(genNameEdit);
        textLabel3->setBuddy(commentEdit);
        labelenvvars->setBuddy(envarsEdit);
        textLabel4->setBuddy(programEdit);
        textLabel5->setBuddy(pathEdit);
        textLabel7->setBuddy(filetypeList);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KPropertiesDesktopBase);

        QMetaObject::connectSlotsByName(KPropertiesDesktopBase);
    } // setupUi

    void retranslateUi(QWidget *KPropertiesDesktopBase)
    {
#if QT_CONFIG(whatsthis)
        nameLabel->setWhatsThis(tr2i18n("Type the name you want to give to this application here. This application will appear under this name in the applications menu and in the panel.", nullptr));
#endif // QT_CONFIG(whatsthis)
        nameLabel->setText(tr2i18n("&Name:", nullptr));
#if QT_CONFIG(whatsthis)
        nameEdit->setWhatsThis(tr2i18n("Type the name you want to give to this application here. This application will appear under this name in the applications menu and in the panel.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        textLabel2->setWhatsThis(tr2i18n("Type the description of this application, based on its use, here. Examples: a dial up application (KPPP) would be \"Dial up tool\".", nullptr));
#endif // QT_CONFIG(whatsthis)
        textLabel2->setText(tr2i18n("&Description:", nullptr));
#if QT_CONFIG(whatsthis)
        genNameEdit->setWhatsThis(tr2i18n("Type the description of this application, based on its use, here. Examples: a dial up application (KPPP) would be \"Dial up tool\".", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        textLabel3->setWhatsThis(tr2i18n("Type any comment you think is useful here.", nullptr));
#endif // QT_CONFIG(whatsthis)
        textLabel3->setText(tr2i18n("Comm&ent:", nullptr));
#if QT_CONFIG(whatsthis)
        commentEdit->setWhatsThis(tr2i18n("Type any comment you think is useful here.", nullptr));
#endif // QT_CONFIG(whatsthis)
        labelenvvars->setText(tr2i18n("Environment Variables:", nullptr));
#if QT_CONFIG(whatsthis)
        textLabel4->setWhatsThis(tr2i18n("Type the command to start this application here.\n"
"\n"
"Following the command, you can have several placeholders which will be replaced with the actual values when the actual program is run:\n"
"\n"
"%f - a single filename\n"
"%F - a list of files (for apps that can open several files at once)\n"
"%u - a single URL\n"
"%U - a list of URLs\n"
"%i - the icon of the .desktop file\n"
"%c - the name of the .desktop file\n"
"%k - the location of the .desktop file", nullptr));
#endif // QT_CONFIG(whatsthis)
        textLabel4->setText(tr2i18n("Program:", nullptr));
#if QT_CONFIG(whatsthis)
        programEdit->setWhatsThis(tr2i18n("Type the command to start this application here.\n"
"\n"
"Following the command, you can have several placeholders which will be replaced with the actual values when the actual program is run:\n"
"\n"
"%f - a single filename\n"
"%F - a list of files (for apps that can open several files at once)\n"
"%u - a single URL\n"
"%U - a list of URLs\n"
"%i - the icon of the .desktop file\n"
"%c - the name of the .desktop file\n"
"%k - the location of the .desktop file", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        browseButton->setWhatsThis(tr2i18n("Click here to browse your file system in order to find the desired executable.", nullptr));
#endif // QT_CONFIG(whatsthis)
        browseButton->setText(tr2i18n("&Browse...", nullptr));
#if QT_CONFIG(whatsthis)
        textLabel5->setWhatsThis(tr2i18n("Sets the working directory for your application.", nullptr));
#endif // QT_CONFIG(whatsthis)
        textLabel5->setText(tr2i18n("&Work path:", nullptr));
#if QT_CONFIG(whatsthis)
        pathEdit->setWhatsThis(tr2i18n("Sets the working directory for your application.", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(tr2i18n("Arguments:", nullptr));
#if QT_CONFIG(whatsthis)
        textLabel7->setWhatsThis(tr2i18n("<qt><p>This list should show the types of file that your application can handle. This list is organized by <u>mimetypes</u>.</p>\n"
"<p>MIME, Multipurpose Internet (e)Mail Extension, is a standard protocol for identifying the type of data based on filename extensions and correspondent <u>mimetypes</u>. Example: the \"bmp\" part that comes after the dot in flower.bmp indicates that it is a specific kind of image, <u>image/x-bmp</u>. To know which application should open each type of file, the system should be informed about the abilities of each application to handle these extensions and mimetypes.</p>\n"
"<p>If you want to associate this application with one or more mimetypes that are not in this list, click on the button <b>Add</b> below. If there are one or more filetypes that this application cannot handle, you may want to remove them from the list clicking on the button <b>Remove</b> below.</p></qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
        textLabel7->setText(tr2i18n("&Supported file types:", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = filetypeList->headerItem();
        ___qtreewidgetitem->setText(1, tr2i18n("Description", nullptr));
        ___qtreewidgetitem->setText(0, tr2i18n("Mimetype", nullptr));
#if QT_CONFIG(whatsthis)
        filetypeList->setWhatsThis(tr2i18n("<qt><p>This list should show the types of file that your application can handle. This list is organized by <u>mimetypes</u>.</p>\n"
"<p>MIME, Multipurpose Internet (e)Mail Extension, is a standard protocol for identifying the type of data based on filename extensions and correspondent <u>mimetypes</u>. Example: the \"bmp\" part that comes after the dot in flower.bmp indicates that it is a specific kind of image, <u>image/x-bmp</u>. To know which application should open each type of file, the system should be informed about the abilities of each application to handle these extensions and mimetypes.</p>\n"
"<p>If you want to associate this application with one or more mimetypes that are not in this list, click on the button <b>Add</b> below. If there are one or more filetypes that this application cannot handle, you may want to remove them from the list clicking on the button <b>Remove</b> below.</p></qt>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        addFiletypeButton->setWhatsThis(tr2i18n("Click on this button if you want to add a type of file (mimetype) that your application can handle.", nullptr));
#endif // QT_CONFIG(whatsthis)
        addFiletypeButton->setText(tr2i18n("Add...", nullptr));
#if QT_CONFIG(whatsthis)
        delFiletypeButton->setWhatsThis(tr2i18n("If you want to remove a type of file (mimetype) that your application cannot handle, select the mimetype in the list above and click on this button.", nullptr));
#endif // QT_CONFIG(whatsthis)
        delFiletypeButton->setText(tr2i18n("Remove", nullptr));
#if QT_CONFIG(whatsthis)
        advancedButton->setWhatsThis(tr2i18n("Click here to modify the way this application will run, launch feedback, D-Bus options or to run it as a different user.", nullptr));
#endif // QT_CONFIG(whatsthis)
        advancedButton->setText(tr2i18n("Ad&vanced Options", nullptr));
        (void)KPropertiesDesktopBase;
    } // retranslateUi

};

namespace Ui {
    class KPropertiesDesktopBase: public Ui_KPropertiesDesktopBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KPROPERTIESDESKTOPBASE_H

