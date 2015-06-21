/********************************************************************************
** Form generated from reading UI file 'cmsprefsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMSPREFSBASE_H
#define UI_CMSPREFSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMSPrefsBase
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *checkBox1;
    QGroupBox *docProfiles;
    QGridLayout *gridLayout;
    QLabel *text1;
    QComboBox *inputPRGBIm;
    QLabel *text1CMYK;
    QComboBox *inputPCMYKIm;
    QLabel *text4;
    QComboBox *inputPRGB;
    QLabel *text5;
    QComboBox *inputPCMYK;
    QLabel *text3;
    QComboBox *printerP;
    QGroupBox *renderInt;
    QGridLayout *gridLayout1;
    QLabel *text21;
    QComboBox *imagesI;
    QLabel *text22;
    QComboBox *colorsI;
    QGroupBox *docOptions;
    QVBoxLayout *vboxLayout1;
    QCheckBox *blackPoint;
    QCheckBox *simulatePrinter;
    QCheckBox *convertAll;
    QCheckBox *gamutCheck;
    QGroupBox *monProfile;
    QGridLayout *gridLayout_2;
    QLabel *monitorProfileLabel;
    QComboBox *monitorP;

    void setupUi(QWidget *CMSPrefsBase)
    {
        if (CMSPrefsBase->objectName().isEmpty())
            CMSPrefsBase->setObjectName(QStringLiteral("CMSPrefsBase"));
        CMSPrefsBase->resize(348, 467);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CMSPrefsBase->sizePolicy().hasHeightForWidth());
        CMSPrefsBase->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(CMSPrefsBase);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        checkBox1 = new QCheckBox(CMSPrefsBase);
        checkBox1->setObjectName(QStringLiteral("checkBox1"));

        vboxLayout->addWidget(checkBox1);

        docProfiles = new QGroupBox(CMSPrefsBase);
        docProfiles->setObjectName(QStringLiteral("docProfiles"));
        docProfiles->setEnabled(false);
        gridLayout = new QGridLayout(docProfiles);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        text1 = new QLabel(docProfiles);
        text1->setObjectName(QStringLiteral("text1"));

        gridLayout->addWidget(text1, 0, 0, 1, 1);

        inputPRGBIm = new QComboBox(docProfiles);
        inputPRGBIm->setObjectName(QStringLiteral("inputPRGBIm"));
        inputPRGBIm->setMinimumSize(QSize(190, 0));

        gridLayout->addWidget(inputPRGBIm, 0, 1, 1, 1);

        text1CMYK = new QLabel(docProfiles);
        text1CMYK->setObjectName(QStringLiteral("text1CMYK"));

        gridLayout->addWidget(text1CMYK, 1, 0, 1, 1);

        inputPCMYKIm = new QComboBox(docProfiles);
        inputPCMYKIm->setObjectName(QStringLiteral("inputPCMYKIm"));
        inputPCMYKIm->setMinimumSize(QSize(190, 0));

        gridLayout->addWidget(inputPCMYKIm, 1, 1, 1, 1);

        text4 = new QLabel(docProfiles);
        text4->setObjectName(QStringLiteral("text4"));

        gridLayout->addWidget(text4, 2, 0, 1, 1);

        inputPRGB = new QComboBox(docProfiles);
        inputPRGB->setObjectName(QStringLiteral("inputPRGB"));
        inputPRGB->setMinimumSize(QSize(190, 0));

        gridLayout->addWidget(inputPRGB, 2, 1, 1, 1);

        text5 = new QLabel(docProfiles);
        text5->setObjectName(QStringLiteral("text5"));

        gridLayout->addWidget(text5, 3, 0, 1, 1);

        inputPCMYK = new QComboBox(docProfiles);
        inputPCMYK->setObjectName(QStringLiteral("inputPCMYK"));
        inputPCMYK->setMinimumSize(QSize(190, 0));

        gridLayout->addWidget(inputPCMYK, 3, 1, 1, 1);

        text3 = new QLabel(docProfiles);
        text3->setObjectName(QStringLiteral("text3"));

        gridLayout->addWidget(text3, 4, 0, 1, 1);

        printerP = new QComboBox(docProfiles);
        printerP->setObjectName(QStringLiteral("printerP"));
        printerP->setMinimumSize(QSize(190, 0));

        gridLayout->addWidget(printerP, 4, 1, 1, 1);


        vboxLayout->addWidget(docProfiles);

        renderInt = new QGroupBox(CMSPrefsBase);
        renderInt->setObjectName(QStringLiteral("renderInt"));
        renderInt->setEnabled(false);
        gridLayout1 = new QGridLayout(renderInt);
        gridLayout1->setSpacing(5);
        gridLayout1->setContentsMargins(10, 10, 10, 10);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        text21 = new QLabel(renderInt);
        text21->setObjectName(QStringLiteral("text21"));

        gridLayout1->addWidget(text21, 0, 0, 1, 1);

        imagesI = new QComboBox(renderInt);
        imagesI->setObjectName(QStringLiteral("imagesI"));
        imagesI->setMinimumSize(QSize(190, 0));

        gridLayout1->addWidget(imagesI, 0, 1, 1, 1);

        text22 = new QLabel(renderInt);
        text22->setObjectName(QStringLiteral("text22"));

        gridLayout1->addWidget(text22, 1, 0, 1, 1);

        colorsI = new QComboBox(renderInt);
        colorsI->setObjectName(QStringLiteral("colorsI"));
        colorsI->setMinimumSize(QSize(190, 0));

        gridLayout1->addWidget(colorsI, 1, 1, 1, 1);


        vboxLayout->addWidget(renderInt);

        docOptions = new QGroupBox(CMSPrefsBase);
        docOptions->setObjectName(QStringLiteral("docOptions"));
        docOptions->setEnabled(false);
        docOptions->setCheckable(false);
        docOptions->setChecked(false);
        vboxLayout1 = new QVBoxLayout(docOptions);
        vboxLayout1->setSpacing(5);
        vboxLayout1->setContentsMargins(10, 10, 10, 10);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        blackPoint = new QCheckBox(docOptions);
        blackPoint->setObjectName(QStringLiteral("blackPoint"));

        vboxLayout1->addWidget(blackPoint);

        simulatePrinter = new QCheckBox(docOptions);
        simulatePrinter->setObjectName(QStringLiteral("simulatePrinter"));

        vboxLayout1->addWidget(simulatePrinter);

        convertAll = new QCheckBox(docOptions);
        convertAll->setObjectName(QStringLiteral("convertAll"));

        vboxLayout1->addWidget(convertAll);

        gamutCheck = new QCheckBox(docOptions);
        gamutCheck->setObjectName(QStringLiteral("gamutCheck"));

        vboxLayout1->addWidget(gamutCheck);


        vboxLayout->addWidget(docOptions);

        monProfile = new QGroupBox(CMSPrefsBase);
        monProfile->setObjectName(QStringLiteral("monProfile"));
        monProfile->setEnabled(false);
        gridLayout_2 = new QGridLayout(monProfile);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        monitorProfileLabel = new QLabel(monProfile);
        monitorProfileLabel->setObjectName(QStringLiteral("monitorProfileLabel"));

        gridLayout_2->addWidget(monitorProfileLabel, 0, 0, 1, 1);

        monitorP = new QComboBox(monProfile);
        monitorP->setObjectName(QStringLiteral("monitorP"));
        monitorP->setMinimumSize(QSize(190, 0));

        gridLayout_2->addWidget(monitorP, 0, 1, 1, 1);


        vboxLayout->addWidget(monProfile);

#ifndef QT_NO_SHORTCUT
        text1->setBuddy(inputPRGBIm);
        text1CMYK->setBuddy(inputPCMYKIm);
        text4->setBuddy(inputPRGB);
        text5->setBuddy(inputPCMYK);
        text3->setBuddy(printerP);
        text21->setBuddy(imagesI);
        text22->setBuddy(colorsI);
        monitorProfileLabel->setBuddy(monitorP);
#endif // QT_NO_SHORTCUT

        retranslateUi(CMSPrefsBase);

        QMetaObject::connectSlotsByName(CMSPrefsBase);
    } // setupUi

    void retranslateUi(QWidget *CMSPrefsBase)
    {
        CMSPrefsBase->setWindowTitle(QApplication::translate("CMSPrefsBase", "Form", 0));
        checkBox1->setText(QApplication::translate("CMSPrefsBase", "&Activate Color Management", 0));
        docProfiles->setTitle(QApplication::translate("CMSPrefsBase", "Document Profiles", 0));
        text1->setText(QApplication::translate("CMSPrefsBase", "&RGB Images:", 0));
#ifndef QT_NO_TOOLTIP
        inputPRGBIm->setToolTip(QApplication::translate("CMSPrefsBase", "Default color profile for imported RGB images", 0));
#endif // QT_NO_TOOLTIP
        text1CMYK->setText(QApplication::translate("CMSPrefsBase", "&CMYK Images:", 0));
#ifndef QT_NO_TOOLTIP
        inputPCMYKIm->setToolTip(QApplication::translate("CMSPrefsBase", "Default color profile for imported CMYK images", 0));
#endif // QT_NO_TOOLTIP
        text4->setText(QApplication::translate("CMSPrefsBase", "&RGB Solid Colors:", 0));
#ifndef QT_NO_TOOLTIP
        inputPRGB->setToolTip(QApplication::translate("CMSPrefsBase", "Default color profile for solid RGB colors on the page", 0));
#endif // QT_NO_TOOLTIP
        text5->setText(QApplication::translate("CMSPrefsBase", "&CMYK Solid Colors:", 0));
#ifndef QT_NO_TOOLTIP
        inputPCMYK->setToolTip(QApplication::translate("CMSPrefsBase", "Default color profile for solid CMYK colors on the page", 0));
#endif // QT_NO_TOOLTIP
        text3->setText(QApplication::translate("CMSPrefsBase", "P&rinter:", 0));
#ifndef QT_NO_TOOLTIP
        printerP->setToolTip(QApplication::translate("CMSPrefsBase", "Color profile for your printer model from the manufacturer.\n"
"This profile should be specific to your printer and not a generic profile (i.e. sRGB).", 0));
#endif // QT_NO_TOOLTIP
        renderInt->setTitle(QApplication::translate("CMSPrefsBase", "Document Rendering Intents", 0));
        text21->setText(QApplication::translate("CMSPrefsBase", "Images:", 0));
#ifndef QT_NO_TOOLTIP
        imagesI->setToolTip(QApplication::translate("CMSPrefsBase", "Default rendering intent for images. Unless you know why to change it,\n"
"Relative Colorimetric or Perceptual should be chosen.", 0));
#endif // QT_NO_TOOLTIP
        text22->setText(QApplication::translate("CMSPrefsBase", "Sol&id Colors:", 0));
#ifndef QT_NO_TOOLTIP
        colorsI->setToolTip(QApplication::translate("CMSPrefsBase", "Default rendering intent for solid colors. Unless you know why to change it,\n"
"Relative Colorimetric or Perceptual should be chosen.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        docOptions->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        docOptions->setTitle(QApplication::translate("CMSPrefsBase", "Document Options", 0));
#ifndef QT_NO_TOOLTIP
        blackPoint->setToolTip(QApplication::translate("CMSPrefsBase", "Black Point Compensation is a method of improving contrast in photos.\n"
"It is recommended that you enable this if you have photos in your document.", 0));
#endif // QT_NO_TOOLTIP
        blackPoint->setText(QApplication::translate("CMSPrefsBase", "Use &Blackpoint Compensation", 0));
#ifndef QT_NO_TOOLTIP
        simulatePrinter->setToolTip(QApplication::translate("CMSPrefsBase", "Enable 'soft proofing' of how your document colors will print,\n"
"based on the chosen printer profile.", 0));
#endif // QT_NO_TOOLTIP
        simulatePrinter->setText(QApplication::translate("CMSPrefsBase", "Simulate printer on Screen", 0));
#ifndef QT_NO_TOOLTIP
        convertAll->setToolTip(QApplication::translate("CMSPrefsBase", "Simulate a full color managed environment :\n"
"all colors, rgb or cmyk, are converted to printer color space.", 0));
#endif // QT_NO_TOOLTIP
        convertAll->setText(QApplication::translate("CMSPrefsBase", "Convert all colors to printer space", 0));
#ifndef QT_NO_TOOLTIP
        gamutCheck->setToolTip(QApplication::translate("CMSPrefsBase", "Method of showing colors on the screen which may not print properly.\n"
"This requires very accurate profiles and serves only as a warning.", 0));
#endif // QT_NO_TOOLTIP
        gamutCheck->setText(QApplication::translate("CMSPrefsBase", "Mark Colors out of &Gamut", 0));
        monProfile->setTitle(QApplication::translate("CMSPrefsBase", "Monitor Profile", 0));
        monitorProfileLabel->setText(QApplication::translate("CMSPrefsBase", "&Monitor:", 0));
#ifndef QT_NO_TOOLTIP
        monitorP->setToolTip(QApplication::translate("CMSPrefsBase", "Color profile that you have generated or received from the manufacturer.\n"
"This profile should be specific to your monitor and not a generic profile (i.e. sRGB).", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class CMSPrefsBase: public Ui_CMSPrefsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMSPREFSBASE_H
