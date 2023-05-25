/********************************************************************************
** Form generated from reading UI file 'krecentfilesactiontest.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KRECENTFILESACTIONTEST_H
#define UI_KRECENTFILESACTIONTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbAddUrl;
    QLineEdit *lineEditUrl;
    QLabel *label_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbLoadEntries;
    QPushButton *pbSaveEntries;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label1;
    QLabel *labelOutputAvailable;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(434, 201);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbAddUrl = new QPushButton(centralwidget);
        pbAddUrl->setObjectName(QString::fromUtf8("pbAddUrl"));

        horizontalLayout->addWidget(pbAddUrl);

        lineEditUrl = new QLineEdit(centralwidget);
        lineEditUrl->setObjectName(QString::fromUtf8("lineEditUrl"));

        horizontalLayout->addWidget(lineEditUrl);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbLoadEntries = new QPushButton(centralwidget);
        pbLoadEntries->setObjectName(QString::fromUtf8("pbLoadEntries"));

        horizontalLayout_3->addWidget(pbLoadEntries);

        pbSaveEntries = new QPushButton(centralwidget);
        pbSaveEntries->setObjectName(QString::fromUtf8("pbSaveEntries"));

        horizontalLayout_3->addWidget(pbSaveEntries);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label1->sizePolicy().hasHeightForWidth());
        label1->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label1);

        labelOutputAvailable = new QLabel(centralwidget);
        labelOutputAvailable->setObjectName(QString::fromUtf8("labelOutputAvailable"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelOutputAvailable->sizePolicy().hasHeightForWidth());
        labelOutputAvailable->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(labelOutputAvailable);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 434, 19));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "KRecentFilesAction Test", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Look in the File menu to use the Open Recent menu", nullptr));
        pbAddUrl->setText(QCoreApplication::translate("MainWindow", "Add URL", nullptr));
        lineEditUrl->setText(QCoreApplication::translate("MainWindow", "~/tmp/test1.txt", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Add URL to recent file list", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Note that nonexisting entries will not be restored.", nullptr));
        pbLoadEntries->setText(QCoreApplication::translate("MainWindow", "LoadEntries", nullptr));
        pbSaveEntries->setText(QCoreApplication::translate("MainWindow", "SaveEntries", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "New console output:", nullptr));
        labelOutputAvailable->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KRECENTFILESACTIONTEST_H
