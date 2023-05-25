/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Files;
    QAction *actionQuit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *statusLabel;
    QProgressBar *progressBar;
    QLabel *label;
    QPushButton *outputDirectory;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpinBox *workers;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *loadManager;
    QSpacerItem *horizontalSpacer_4;
    QLabel *workersMin;
    QSlider *workersSlider;
    QLabel *workersMax;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpinBox *fileLoaderCap;
    QSpacerItem *horizontalSpacer_2;
    QListView *fileLoaderList;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QSpinBox *imageLoaderCap;
    QSpacerItem *horizontalSpacer_3;
    QListView *imageLoaderList;
    QGridLayout *gridLayout_5;
    QSpinBox *imageScalerCap;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_6;
    QListView *imageScalerList;
    QGridLayout *gridLayout_6;
    QLabel *label_9;
    QSpinBox *fileWriterCap;
    QSpacerItem *horizontalSpacer_7;
    QListView *imageWriterList;
    QMenuBar *menubar;
    QMenu *menuFile;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1090, 600);
        actionOpen_Files = new QAction(MainWindow);
        actionOpen_Files->setObjectName(QString::fromUtf8("actionOpen_Files"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, statusLabel);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        formLayout->setWidget(0, QFormLayout::FieldRole, progressBar);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        outputDirectory = new QPushButton(centralwidget);
        outputDirectory->setObjectName(QString::fromUtf8("outputDirectory"));

        formLayout->setWidget(1, QFormLayout::FieldRole, outputDirectory);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        workers = new QSpinBox(centralwidget);
        workers->setObjectName(QString::fromUtf8("workers"));
        workers->setMinimum(0);
        workers->setMaximum(64);

        horizontalLayout->addWidget(workers);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        loadManager = new QCheckBox(centralwidget);
        loadManager->setObjectName(QString::fromUtf8("loadManager"));

        horizontalLayout_3->addWidget(loadManager);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        workersMin = new QLabel(centralwidget);
        workersMin->setObjectName(QString::fromUtf8("workersMin"));

        horizontalLayout_3->addWidget(workersMin);

        workersSlider = new QSlider(centralwidget);
        workersSlider->setObjectName(QString::fromUtf8("workersSlider"));
        workersSlider->setEnabled(false);
        workersSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(workersSlider);

        workersMax = new QLabel(centralwidget);
        workersMax->setObjectName(QString::fromUtf8("workersMax"));

        horizontalLayout_3->addWidget(workersMax);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        fileLoaderCap = new QSpinBox(centralwidget);
        fileLoaderCap->setObjectName(QString::fromUtf8("fileLoaderCap"));
        fileLoaderCap->setMinimum(1);
        fileLoaderCap->setMaximum(99);

        gridLayout->addWidget(fileLoaderCap, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        fileLoaderList = new QListView(centralwidget);
        fileLoaderList->setObjectName(QString::fromUtf8("fileLoaderList"));

        gridLayout->addWidget(fileLoaderList, 1, 0, 1, 3);


        horizontalLayout_2->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        imageLoaderCap = new QSpinBox(centralwidget);
        imageLoaderCap->setObjectName(QString::fromUtf8("imageLoaderCap"));
        imageLoaderCap->setMinimum(1);
        imageLoaderCap->setMaximum(99);

        gridLayout_2->addWidget(imageLoaderCap, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        imageLoaderList = new QListView(centralwidget);
        imageLoaderList->setObjectName(QString::fromUtf8("imageLoaderList"));

        gridLayout_2->addWidget(imageLoaderList, 1, 0, 1, 3);


        horizontalLayout_2->addLayout(gridLayout_2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        imageScalerCap = new QSpinBox(centralwidget);
        imageScalerCap->setObjectName(QString::fromUtf8("imageScalerCap"));
        imageScalerCap->setMinimum(1);
        imageScalerCap->setMaximum(99);

        gridLayout_5->addWidget(imageScalerCap, 0, 1, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        imageScalerList = new QListView(centralwidget);
        imageScalerList->setObjectName(QString::fromUtf8("imageScalerList"));

        gridLayout_5->addWidget(imageScalerList, 1, 0, 1, 3);


        horizontalLayout_2->addLayout(gridLayout_5);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_6->addWidget(label_9, 0, 0, 1, 1);

        fileWriterCap = new QSpinBox(centralwidget);
        fileWriterCap->setObjectName(QString::fromUtf8("fileWriterCap"));
        fileWriterCap->setMinimum(1);
        fileWriterCap->setMaximum(99);

        gridLayout_6->addWidget(fileWriterCap, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        imageWriterList = new QListView(centralwidget);
        imageWriterList->setObjectName(QString::fromUtf8("imageWriterList"));

        gridLayout_6->addWidget(imageWriterList, 1, 0, 1, 3);


        horizontalLayout_2->addLayout(gridLayout_6);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1090, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen_Files);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        toolBar->addAction(actionOpen_Files);
        toolBar->addSeparator();
        toolBar->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(loadManager, SIGNAL(toggled(bool)), workers, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_Files->setText(QCoreApplication::translate("MainWindow", "Select Files", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen_Files->setToolTip(QCoreApplication::translate("MainWindow", "Select a set of files to be converted to thumbnails", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen_Files->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(tooltip)
        actionQuit->setToolTip(QCoreApplication::translate("MainWindow", "Quit the application", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        statusLabel->setText(QCoreApplication::translate("MainWindow", "Please wait...", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Output directory:", nullptr));
        outputDirectory->setText(QCoreApplication::translate("MainWindow", "Select output directory...", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Restrictions:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Workers:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Manage system load average:", nullptr));
        loadManager->setText(QString());
        workersMin->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        workersMax->setText(QCoreApplication::translate("MainWindow", "16", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "File loaders:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Image loaders:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Image scalers:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "File writers", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
