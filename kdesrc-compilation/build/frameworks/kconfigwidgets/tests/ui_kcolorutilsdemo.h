/********************************************************************************
** Form generated from reading UI file 'kcolorutilsdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KCOLORUTILSDEMO_H
#define UI_KCOLORUTILSDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kcolorbutton.h"
#include "kimageframe.h"

QT_BEGIN_NAMESPACE

class Ui_form
{
public:
    QGridLayout *gridLayout_9;
    QGroupBox *gInput;
    QGridLayout *gridLayout_7;
    QLabel *label_14;
    QSpinBox *inRed;
    QLabel *label_15;
    QSpinBox *inGreen;
    QLabel *label_16;
    QSpinBox *inBlue;
    KColorButton *inColor;
    QTabWidget *tabs;
    QWidget *tabLuma;
    QGridLayout *gridLayout_8;
    QGroupBox *gleOp;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *leOpDarken;
    QRadioButton *leOpLighten;
    QRadioButton *leOpShade;
    QGroupBox *gleOut;
    QGridLayout *gridLayout_4;
    KImageFrame *leOut;
    QWidget *tab_2;
    QGridLayout *gridLayout_11;
    QGroupBox *gmtTarget;
    QGridLayout *gridLayout_5;
    QLabel *label_11;
    QSpinBox *mtRed;
    QLabel *label_12;
    QSpinBox *mtGreen;
    QLabel *label_13;
    QSpinBox *mtBlue;
    KColorButton *mtTarget;
    QGroupBox *gmtMixOut;
    QGridLayout *gridLayout_10;
    KImageFrame *mtMixOut;
    QGroupBox *gmtTintOut;
    QGridLayout *gridLayout_3;
    KImageFrame *mtTintOut;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *gssParam;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QDoubleSpinBox *ssContrast;
    QLabel *label_2;
    QDoubleSpinBox *ssChroma;
    QGroupBox *gssOut;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QFrame *ssOut;
    QVBoxLayout *verticalLayout;
    QWidget *ssLight;
    QWidget *ssMidlight;
    QWidget *ssBase;
    QWidget *ssMid;
    QWidget *ssDark;
    QWidget *ssShadow;
    QGroupBox *gInfo;
    QGridLayout *gridLayout_2;
    QLabel *label_17;
    QDoubleSpinBox *ifHue;
    QLabel *label_19;
    QDoubleSpinBox *ifChroma;
    QLabel *label_18;
    QDoubleSpinBox *ifLuma;
    QLabel *label_20;
    QSpinBox *ifGray;

    void setupUi(QWidget *form)
    {
        if (form->objectName().isEmpty())
            form->setObjectName(QString::fromUtf8("form"));
        form->resize(428, 344);
        gridLayout_9 = new QGridLayout(form);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gInput = new QGroupBox(form);
        gInput->setObjectName(QString::fromUtf8("gInput"));
        gridLayout_7 = new QGridLayout(gInput);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_14 = new QLabel(gInput);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_7->addWidget(label_14, 0, 0, 1, 1);

        inRed = new QSpinBox(gInput);
        inRed->setObjectName(QString::fromUtf8("inRed"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inRed->sizePolicy().hasHeightForWidth());
        inRed->setSizePolicy(sizePolicy);
        inRed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inRed->setMaximum(255);
        inRed->setValue(128);

        gridLayout_7->addWidget(inRed, 0, 1, 1, 1);

        label_15 = new QLabel(gInput);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_7->addWidget(label_15, 1, 0, 1, 1);

        inGreen = new QSpinBox(gInput);
        inGreen->setObjectName(QString::fromUtf8("inGreen"));
        sizePolicy.setHeightForWidth(inGreen->sizePolicy().hasHeightForWidth());
        inGreen->setSizePolicy(sizePolicy);
        inGreen->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inGreen->setMaximum(255);
        inGreen->setValue(128);

        gridLayout_7->addWidget(inGreen, 1, 1, 1, 1);

        label_16 = new QLabel(gInput);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_7->addWidget(label_16, 2, 0, 1, 1);

        inBlue = new QSpinBox(gInput);
        inBlue->setObjectName(QString::fromUtf8("inBlue"));
        sizePolicy.setHeightForWidth(inBlue->sizePolicy().hasHeightForWidth());
        inBlue->setSizePolicy(sizePolicy);
        inBlue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inBlue->setMaximum(255);
        inBlue->setValue(128);

        gridLayout_7->addWidget(inBlue, 2, 1, 1, 1);

        inColor = new KColorButton(gInput);
        inColor->setObjectName(QString::fromUtf8("inColor"));
        sizePolicy.setHeightForWidth(inColor->sizePolicy().hasHeightForWidth());
        inColor->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(inColor, 3, 1, 1, 1);


        gridLayout_9->addWidget(gInput, 0, 0, 1, 1);

        tabs = new QTabWidget(form);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        tabs->setTabPosition(QTabWidget::West);
        tabLuma = new QWidget();
        tabLuma->setObjectName(QString::fromUtf8("tabLuma"));
        gridLayout_8 = new QGridLayout(tabLuma);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gleOp = new QGroupBox(tabLuma);
        gleOp->setObjectName(QString::fromUtf8("gleOp"));
        verticalLayout_2 = new QVBoxLayout(gleOp);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        leOpDarken = new QRadioButton(gleOp);
        leOpDarken->setObjectName(QString::fromUtf8("leOpDarken"));

        verticalLayout_2->addWidget(leOpDarken);

        leOpLighten = new QRadioButton(gleOp);
        leOpLighten->setObjectName(QString::fromUtf8("leOpLighten"));

        verticalLayout_2->addWidget(leOpLighten);

        leOpShade = new QRadioButton(gleOp);
        leOpShade->setObjectName(QString::fromUtf8("leOpShade"));
        leOpShade->setChecked(true);

        verticalLayout_2->addWidget(leOpShade);


        gridLayout_8->addWidget(gleOp, 0, 0, 1, 1);

        gleOut = new QGroupBox(tabLuma);
        gleOut->setObjectName(QString::fromUtf8("gleOut"));
        gridLayout_4 = new QGridLayout(gleOut);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        leOut = new KImageFrame(gleOut);
        leOut->setObjectName(QString::fromUtf8("leOut"));
        leOut->setMinimumSize(QSize(144, 144));
        leOut->setAutoFillBackground(true);
        leOut->setFrameShape(QFrame::StyledPanel);
        leOut->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(leOut, 0, 0, 1, 1);


        gridLayout_8->addWidget(gleOut, 1, 0, 1, 1);

        tabs->addTab(tabLuma, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_11 = new QGridLayout(tab_2);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gmtTarget = new QGroupBox(tab_2);
        gmtTarget->setObjectName(QString::fromUtf8("gmtTarget"));
        gridLayout_5 = new QGridLayout(gmtTarget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_11 = new QLabel(gmtTarget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 0, 0, 1, 1);

        mtRed = new QSpinBox(gmtTarget);
        mtRed->setObjectName(QString::fromUtf8("mtRed"));
        mtRed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mtRed->setMaximum(255);
        mtRed->setValue(128);

        gridLayout_5->addWidget(mtRed, 0, 1, 1, 1);

        label_12 = new QLabel(gmtTarget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 1, 0, 1, 1);

        mtGreen = new QSpinBox(gmtTarget);
        mtGreen->setObjectName(QString::fromUtf8("mtGreen"));
        mtGreen->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mtGreen->setMaximum(255);
        mtGreen->setValue(128);

        gridLayout_5->addWidget(mtGreen, 1, 1, 1, 1);

        label_13 = new QLabel(gmtTarget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_5->addWidget(label_13, 2, 0, 1, 1);

        mtBlue = new QSpinBox(gmtTarget);
        mtBlue->setObjectName(QString::fromUtf8("mtBlue"));
        mtBlue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mtBlue->setMaximum(255);
        mtBlue->setValue(128);

        gridLayout_5->addWidget(mtBlue, 2, 1, 1, 1);

        mtTarget = new KColorButton(gmtTarget);
        mtTarget->setObjectName(QString::fromUtf8("mtTarget"));

        gridLayout_5->addWidget(mtTarget, 3, 1, 1, 1);


        gridLayout_11->addWidget(gmtTarget, 0, 0, 1, 1);

        gmtMixOut = new QGroupBox(tab_2);
        gmtMixOut->setObjectName(QString::fromUtf8("gmtMixOut"));
        gridLayout_10 = new QGridLayout(gmtMixOut);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        mtMixOut = new KImageFrame(gmtMixOut);
        mtMixOut->setObjectName(QString::fromUtf8("mtMixOut"));
        mtMixOut->setMinimumSize(QSize(40, 40));
        mtMixOut->setAutoFillBackground(true);
        mtMixOut->setFrameShape(QFrame::StyledPanel);
        mtMixOut->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(mtMixOut, 0, 0, 1, 1);


        gridLayout_11->addWidget(gmtMixOut, 1, 0, 1, 1);

        gmtTintOut = new QGroupBox(tab_2);
        gmtTintOut->setObjectName(QString::fromUtf8("gmtTintOut"));
        gridLayout_3 = new QGridLayout(gmtTintOut);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mtTintOut = new KImageFrame(gmtTintOut);
        mtTintOut->setObjectName(QString::fromUtf8("mtTintOut"));
        mtTintOut->setMinimumSize(QSize(40, 40));
        mtTintOut->setAutoFillBackground(true);
        mtTintOut->setFrameShape(QFrame::StyledPanel);
        mtTintOut->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(mtTintOut, 0, 0, 1, 1);


        gridLayout_11->addWidget(gmtTintOut, 2, 0, 1, 1);

        tabs->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gssParam = new QGroupBox(tab);
        gssParam->setObjectName(QString::fromUtf8("gssParam"));
        gridLayout_6 = new QGridLayout(gssParam);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label = new QLabel(gssParam);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        ssContrast = new QDoubleSpinBox(gssParam);
        ssContrast->setObjectName(QString::fromUtf8("ssContrast"));
        ssContrast->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ssContrast->setMinimum(-1.000000000000000);
        ssContrast->setMaximum(1.000000000000000);
        ssContrast->setSingleStep(0.010000000000000);
        ssContrast->setValue(0.700000000000000);

        gridLayout_6->addWidget(ssContrast, 0, 1, 1, 1);

        label_2 = new QLabel(gssParam);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_2, 1, 0, 1, 1);

        ssChroma = new QDoubleSpinBox(gssParam);
        ssChroma->setObjectName(QString::fromUtf8("ssChroma"));
        ssChroma->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ssChroma->setMinimum(-1.000000000000000);
        ssChroma->setMaximum(1.000000000000000);
        ssChroma->setSingleStep(0.010000000000000);

        gridLayout_6->addWidget(ssChroma, 1, 1, 1, 1);


        verticalLayout_4->addWidget(gssParam);

        gssOut = new QGroupBox(tab);
        gssOut->setObjectName(QString::fromUtf8("gssOut"));
        gridLayout = new QGridLayout(gssOut);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(8);
        gridLayout->setContentsMargins(-1, -1, 8, -1);
        label_8 = new QLabel(gssOut);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label_3 = new QLabel(gssOut);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(gssOut);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_10 = new QLabel(gssOut);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 3, 0, 1, 1);

        label_5 = new QLabel(gssOut);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(gssOut);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_7 = new QLabel(gssOut);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_9 = new QLabel(gssOut);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        ssOut = new QFrame(gssOut);
        ssOut->setObjectName(QString::fromUtf8("ssOut"));
        ssOut->setMinimumSize(QSize(40, 120));
        ssOut->setAutoFillBackground(true);
        ssOut->setFrameShape(QFrame::StyledPanel);
        ssOut->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(ssOut);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(12, 12, 12, 12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ssLight = new QWidget(ssOut);
        ssLight->setObjectName(QString::fromUtf8("ssLight"));
        ssLight->setMinimumSize(QSize(16, 16));
        ssLight->setAutoFillBackground(true);

        verticalLayout->addWidget(ssLight);

        ssMidlight = new QWidget(ssOut);
        ssMidlight->setObjectName(QString::fromUtf8("ssMidlight"));
        ssMidlight->setMinimumSize(QSize(16, 16));
        ssMidlight->setAutoFillBackground(true);

        verticalLayout->addWidget(ssMidlight);

        ssBase = new QWidget(ssOut);
        ssBase->setObjectName(QString::fromUtf8("ssBase"));
        ssBase->setMinimumSize(QSize(16, 16));
        ssBase->setAutoFillBackground(true);

        verticalLayout->addWidget(ssBase);

        ssMid = new QWidget(ssOut);
        ssMid->setObjectName(QString::fromUtf8("ssMid"));
        ssMid->setMinimumSize(QSize(16, 16));
        ssMid->setAutoFillBackground(true);

        verticalLayout->addWidget(ssMid);

        ssDark = new QWidget(ssOut);
        ssDark->setObjectName(QString::fromUtf8("ssDark"));
        ssDark->setMinimumSize(QSize(16, 16));
        ssDark->setAutoFillBackground(true);

        verticalLayout->addWidget(ssDark);

        ssShadow = new QWidget(ssOut);
        ssShadow->setObjectName(QString::fromUtf8("ssShadow"));
        ssShadow->setMinimumSize(QSize(16, 16));
        ssShadow->setAutoFillBackground(true);

        verticalLayout->addWidget(ssShadow);


        gridLayout->addWidget(ssOut, 0, 1, 8, 1);

        label_8->raise();
        label_3->raise();
        label_4->raise();
        label_10->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_9->raise();
        ssOut->raise();

        verticalLayout_4->addWidget(gssOut);

        tabs->addTab(tab, QString());

        gridLayout_9->addWidget(tabs, 0, 1, 2, 1);

        gInfo = new QGroupBox(form);
        gInfo->setObjectName(QString::fromUtf8("gInfo"));
        gridLayout_2 = new QGridLayout(gInfo);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_17 = new QLabel(gInfo);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_17, 0, 0, 1, 1);

        ifHue = new QDoubleSpinBox(gInfo);
        ifHue->setObjectName(QString::fromUtf8("ifHue"));
        sizePolicy.setHeightForWidth(ifHue->sizePolicy().hasHeightForWidth());
        ifHue->setSizePolicy(sizePolicy);
        ifHue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ifHue->setReadOnly(true);
        ifHue->setDecimals(3);

        gridLayout_2->addWidget(ifHue, 0, 1, 1, 1);

        label_19 = new QLabel(gInfo);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_19, 1, 0, 1, 1);

        ifChroma = new QDoubleSpinBox(gInfo);
        ifChroma->setObjectName(QString::fromUtf8("ifChroma"));
        sizePolicy.setHeightForWidth(ifChroma->sizePolicy().hasHeightForWidth());
        ifChroma->setSizePolicy(sizePolicy);
        ifChroma->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ifChroma->setReadOnly(true);
        ifChroma->setDecimals(3);

        gridLayout_2->addWidget(ifChroma, 1, 1, 1, 1);

        label_18 = new QLabel(gInfo);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_18, 2, 0, 1, 1);

        ifLuma = new QDoubleSpinBox(gInfo);
        ifLuma->setObjectName(QString::fromUtf8("ifLuma"));
        sizePolicy.setHeightForWidth(ifLuma->sizePolicy().hasHeightForWidth());
        ifLuma->setSizePolicy(sizePolicy);
        ifLuma->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ifLuma->setReadOnly(true);
        ifLuma->setDecimals(3);

        gridLayout_2->addWidget(ifLuma, 2, 1, 1, 1);

        label_20 = new QLabel(gInfo);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_20, 4, 0, 1, 1);

        ifGray = new QSpinBox(gInfo);
        ifGray->setObjectName(QString::fromUtf8("ifGray"));
        sizePolicy.setHeightForWidth(ifGray->sizePolicy().hasHeightForWidth());
        ifGray->setSizePolicy(sizePolicy);
        ifGray->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ifGray->setReadOnly(true);

        gridLayout_2->addWidget(ifGray, 4, 1, 1, 1);

        label_17->raise();
        ifHue->raise();
        label_19->raise();
        ifChroma->raise();
        label_18->raise();
        ifLuma->raise();
        label_20->raise();
        ifGray->raise();

        gridLayout_9->addWidget(gInfo, 1, 0, 1, 1);


        retranslateUi(form);
        QObject::connect(inRed, SIGNAL(valueChanged(int)), form, SLOT(inputSpinChanged()));
        QObject::connect(inGreen, SIGNAL(valueChanged(int)), form, SLOT(inputSpinChanged()));
        QObject::connect(inBlue, SIGNAL(valueChanged(int)), form, SLOT(inputSpinChanged()));
        QObject::connect(inColor, SIGNAL(changed(QColor)), form, SLOT(inputSwatchChanged(QColor)));
        QObject::connect(leOpDarken, SIGNAL(clicked()), form, SLOT(lumaChanged()));
        QObject::connect(leOpLighten, SIGNAL(clicked()), form, SLOT(lumaChanged()));
        QObject::connect(leOpShade, SIGNAL(clicked()), form, SLOT(lumaChanged()));
        QObject::connect(mtRed, SIGNAL(valueChanged(int)), form, SLOT(targetSpinChanged()));
        QObject::connect(mtGreen, SIGNAL(valueChanged(int)), form, SLOT(targetSpinChanged()));
        QObject::connect(mtBlue, SIGNAL(valueChanged(int)), form, SLOT(targetSpinChanged()));
        QObject::connect(mtTarget, SIGNAL(changed(QColor)), form, SLOT(targetSwatchChanged(QColor)));
        QObject::connect(ssContrast, SIGNAL(valueChanged(double)), form, SLOT(shadeChanged()));
        QObject::connect(ssChroma, SIGNAL(valueChanged(double)), form, SLOT(shadeChanged()));

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(form);
    } // setupUi

    void retranslateUi(QWidget *form)
    {
        form->setWindowTitle(QCoreApplication::translate("form", "KColorUtils Demo", nullptr));
        gInput->setTitle(QCoreApplication::translate("form", "Input", nullptr));
        label_14->setText(QCoreApplication::translate("form", "Red", nullptr));
        label_15->setText(QCoreApplication::translate("form", "Green", nullptr));
        label_16->setText(QCoreApplication::translate("form", "Blue", nullptr));
        gleOp->setTitle(QCoreApplication::translate("form", "Operation", nullptr));
        leOpDarken->setText(QCoreApplication::translate("form", "Darken", nullptr));
        leOpLighten->setText(QCoreApplication::translate("form", "Lighten", nullptr));
        leOpShade->setText(QCoreApplication::translate("form", "Shade", nullptr));
        gleOut->setTitle(QCoreApplication::translate("form", "Output", nullptr));
        tabs->setTabText(tabs->indexOf(tabLuma), QCoreApplication::translate("form", "&Luma Effects", nullptr));
        gmtTarget->setTitle(QCoreApplication::translate("form", "Target", nullptr));
        label_11->setText(QCoreApplication::translate("form", "Red", nullptr));
        label_12->setText(QCoreApplication::translate("form", "Green", nullptr));
        label_13->setText(QCoreApplication::translate("form", "Blue", nullptr));
        gmtMixOut->setTitle(QCoreApplication::translate("form", "Mix Output", nullptr));
        gmtTintOut->setTitle(QCoreApplication::translate("form", "Tint Output", nullptr));
        tabs->setTabText(tabs->indexOf(tab_2), QCoreApplication::translate("form", "&Mix/Tint", nullptr));
        gssParam->setTitle(QCoreApplication::translate("form", "Parameters", nullptr));
        label->setText(QCoreApplication::translate("form", "Contrast", nullptr));
        label_2->setText(QCoreApplication::translate("form", "Chroma Adjust", nullptr));
        gssOut->setTitle(QCoreApplication::translate("form", "Output", nullptr));
        label_8->setText(QString());
        label_3->setText(QCoreApplication::translate("form", "Light", nullptr));
        label_4->setText(QCoreApplication::translate("form", "Midlight", nullptr));
        label_10->setText(QCoreApplication::translate("form", "Base", nullptr));
        label_5->setText(QCoreApplication::translate("form", "Mid", nullptr));
        label_6->setText(QCoreApplication::translate("form", "Dark", nullptr));
        label_7->setText(QCoreApplication::translate("form", "Shadow", nullptr));
        label_9->setText(QString());
        tabs->setTabText(tabs->indexOf(tab), QCoreApplication::translate("form", "&Scheme Shade", nullptr));
        gInfo->setTitle(QCoreApplication::translate("form", "Information", nullptr));
        label_17->setText(QCoreApplication::translate("form", "Hue", nullptr));
        label_19->setText(QCoreApplication::translate("form", "Chroma", nullptr));
        label_18->setText(QCoreApplication::translate("form", "Luma", nullptr));
        label_20->setText(QCoreApplication::translate("form", "Gray Value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class form: public Ui_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KCOLORUTILSDEMO_H
