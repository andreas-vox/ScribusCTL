/********************************************************************************
** Form generated from reading UI file 'propertiespalette_imagebase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESPALETTE_IMAGEBASE_H
#define UI_PROPERTIESPALETTE_IMAGEBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/linkbutton.h"
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_PropertiesPalette_ImageBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *xposImgLabel;
    ScrSpinBox *imageXOffsetSpinBox;
    QLabel *imageRotationLabel;
    ScrSpinBox *imageRotation;
    QLabel *imagePageNumberLabel;
    QLabel *yposImgLabel;
    ScrSpinBox *imageYOffsetSpinBox;
    ScrSpinBox *imagePageNumber;
    QGroupBox *scalingGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *xscaleLabel;
    ScrSpinBox *imageXScaleSpinBox;
    QLabel *yscaleLabel;
    ScrSpinBox *imageYScaleSpinBox;
    LinkButton *keepImageWHRatioButton;
    QLabel *imgDPIXLabel;
    ScrSpinBox *imgDpiX;
    QLabel *imgDPIYLabel;
    ScrSpinBox *imgDpiY;
    LinkButton *keepImageDPIRatioButton;
    QRadioButton *freeScale;
    QCheckBox *cbProportional;
    QRadioButton *frameScale;
    QGroupBox *colorMgmtGroup;
    QGridLayout *gridLayout_4;
    QLabel *inputProfLabel;
    QComboBox *inputProfiles;
    QLabel *renderIntentLabel;
    QComboBox *renderIntent;
    QGroupBox *pdfCompressionGroup;
    QGridLayout *gridLayout_3;
    QLabel *compressionMethodLabel;
    QComboBox *compressionMethod;
    QLabel *compressionQualityLabel;
    QComboBox *compressionQuality;
    QHBoxLayout *horizontalLayout;
    QToolButton *imgEffectsButton;
    QToolButton *imgExtProperties;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PropertiesPalette_ImageBase)
    {
        if (PropertiesPalette_ImageBase->objectName().isEmpty())
            PropertiesPalette_ImageBase->setObjectName(QStringLiteral("PropertiesPalette_ImageBase"));
        PropertiesPalette_ImageBase->resize(286, 617);
        verticalLayout = new QVBoxLayout(PropertiesPalette_ImageBase);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        xposImgLabel = new QLabel(PropertiesPalette_ImageBase);
        xposImgLabel->setObjectName(QStringLiteral("xposImgLabel"));

        gridLayout->addWidget(xposImgLabel, 2, 0, 1, 1);

        imageXOffsetSpinBox = new ScrSpinBox(PropertiesPalette_ImageBase);
        imageXOffsetSpinBox->setObjectName(QStringLiteral("imageXOffsetSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imageXOffsetSpinBox->sizePolicy().hasHeightForWidth());
        imageXOffsetSpinBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(imageXOffsetSpinBox, 2, 1, 1, 1);

        imageRotationLabel = new QLabel(PropertiesPalette_ImageBase);
        imageRotationLabel->setObjectName(QStringLiteral("imageRotationLabel"));

        gridLayout->addWidget(imageRotationLabel, 4, 0, 1, 1);

        imageRotation = new ScrSpinBox(PropertiesPalette_ImageBase);
        imageRotation->setObjectName(QStringLiteral("imageRotation"));
        sizePolicy.setHeightForWidth(imageRotation->sizePolicy().hasHeightForWidth());
        imageRotation->setSizePolicy(sizePolicy);

        gridLayout->addWidget(imageRotation, 4, 1, 1, 1);

        imagePageNumberLabel = new QLabel(PropertiesPalette_ImageBase);
        imagePageNumberLabel->setObjectName(QStringLiteral("imagePageNumberLabel"));

        gridLayout->addWidget(imagePageNumberLabel, 1, 0, 1, 1);

        yposImgLabel = new QLabel(PropertiesPalette_ImageBase);
        yposImgLabel->setObjectName(QStringLiteral("yposImgLabel"));

        gridLayout->addWidget(yposImgLabel, 3, 0, 1, 1);

        imageYOffsetSpinBox = new ScrSpinBox(PropertiesPalette_ImageBase);
        imageYOffsetSpinBox->setObjectName(QStringLiteral("imageYOffsetSpinBox"));
        sizePolicy.setHeightForWidth(imageYOffsetSpinBox->sizePolicy().hasHeightForWidth());
        imageYOffsetSpinBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(imageYOffsetSpinBox, 3, 1, 1, 1);

        imagePageNumber = new ScrSpinBox(PropertiesPalette_ImageBase);
        imagePageNumber->setObjectName(QStringLiteral("imagePageNumber"));

        gridLayout->addWidget(imagePageNumber, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        scalingGroupBox = new QGroupBox(PropertiesPalette_ImageBase);
        scalingGroupBox->setObjectName(QStringLiteral("scalingGroupBox"));
        gridLayout_2 = new QGridLayout(scalingGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        xscaleLabel = new QLabel(scalingGroupBox);
        xscaleLabel->setObjectName(QStringLiteral("xscaleLabel"));

        gridLayout_2->addWidget(xscaleLabel, 2, 0, 1, 1);

        imageXScaleSpinBox = new ScrSpinBox(scalingGroupBox);
        imageXScaleSpinBox->setObjectName(QStringLiteral("imageXScaleSpinBox"));
        sizePolicy.setHeightForWidth(imageXScaleSpinBox->sizePolicy().hasHeightForWidth());
        imageXScaleSpinBox->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(imageXScaleSpinBox, 2, 1, 1, 1);

        yscaleLabel = new QLabel(scalingGroupBox);
        yscaleLabel->setObjectName(QStringLiteral("yscaleLabel"));

        gridLayout_2->addWidget(yscaleLabel, 3, 0, 1, 1);

        imageYScaleSpinBox = new ScrSpinBox(scalingGroupBox);
        imageYScaleSpinBox->setObjectName(QStringLiteral("imageYScaleSpinBox"));
        sizePolicy.setHeightForWidth(imageYScaleSpinBox->sizePolicy().hasHeightForWidth());
        imageYScaleSpinBox->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(imageYScaleSpinBox, 3, 1, 1, 1);

        keepImageWHRatioButton = new LinkButton(scalingGroupBox);
        keepImageWHRatioButton->setObjectName(QStringLiteral("keepImageWHRatioButton"));
        keepImageWHRatioButton->setMaximumSize(QSize(15, 32767));
        keepImageWHRatioButton->setCheckable(true);
        keepImageWHRatioButton->setChecked(true);
        keepImageWHRatioButton->setAutoRaise(true);

        gridLayout_2->addWidget(keepImageWHRatioButton, 2, 2, 2, 1);

        imgDPIXLabel = new QLabel(scalingGroupBox);
        imgDPIXLabel->setObjectName(QStringLiteral("imgDPIXLabel"));

        gridLayout_2->addWidget(imgDPIXLabel, 4, 0, 1, 1);

        imgDpiX = new ScrSpinBox(scalingGroupBox);
        imgDpiX->setObjectName(QStringLiteral("imgDpiX"));

        gridLayout_2->addWidget(imgDpiX, 4, 1, 1, 1);

        imgDPIYLabel = new QLabel(scalingGroupBox);
        imgDPIYLabel->setObjectName(QStringLiteral("imgDPIYLabel"));

        gridLayout_2->addWidget(imgDPIYLabel, 5, 0, 1, 1);

        imgDpiY = new ScrSpinBox(scalingGroupBox);
        imgDpiY->setObjectName(QStringLiteral("imgDpiY"));

        gridLayout_2->addWidget(imgDpiY, 5, 1, 1, 1);

        keepImageDPIRatioButton = new LinkButton(scalingGroupBox);
        keepImageDPIRatioButton->setObjectName(QStringLiteral("keepImageDPIRatioButton"));
        keepImageDPIRatioButton->setMaximumSize(QSize(15, 32767));
        keepImageDPIRatioButton->setCheckable(true);
        keepImageDPIRatioButton->setChecked(true);
        keepImageDPIRatioButton->setAutoRaise(true);

        gridLayout_2->addWidget(keepImageDPIRatioButton, 4, 2, 2, 1);

        freeScale = new QRadioButton(scalingGroupBox);
        freeScale->setObjectName(QStringLiteral("freeScale"));

        gridLayout_2->addWidget(freeScale, 0, 0, 1, 1);

        cbProportional = new QCheckBox(scalingGroupBox);
        cbProportional->setObjectName(QStringLiteral("cbProportional"));

        gridLayout_2->addWidget(cbProportional, 7, 1, 1, 1);

        frameScale = new QRadioButton(scalingGroupBox);
        frameScale->setObjectName(QStringLiteral("frameScale"));

        gridLayout_2->addWidget(frameScale, 6, 0, 1, 1);


        verticalLayout->addWidget(scalingGroupBox);

        colorMgmtGroup = new QGroupBox(PropertiesPalette_ImageBase);
        colorMgmtGroup->setObjectName(QStringLiteral("colorMgmtGroup"));
        gridLayout_4 = new QGridLayout(colorMgmtGroup);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        inputProfLabel = new QLabel(colorMgmtGroup);
        inputProfLabel->setObjectName(QStringLiteral("inputProfLabel"));

        gridLayout_4->addWidget(inputProfLabel, 0, 0, 1, 1);

        inputProfiles = new QComboBox(colorMgmtGroup);
        inputProfiles->setObjectName(QStringLiteral("inputProfiles"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(inputProfiles->sizePolicy().hasHeightForWidth());
        inputProfiles->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(inputProfiles, 0, 1, 1, 1);

        renderIntentLabel = new QLabel(colorMgmtGroup);
        renderIntentLabel->setObjectName(QStringLiteral("renderIntentLabel"));

        gridLayout_4->addWidget(renderIntentLabel, 1, 0, 1, 1);

        renderIntent = new QComboBox(colorMgmtGroup);
        renderIntent->setObjectName(QStringLiteral("renderIntent"));

        gridLayout_4->addWidget(renderIntent, 1, 1, 1, 1);


        verticalLayout->addWidget(colorMgmtGroup);

        pdfCompressionGroup = new QGroupBox(PropertiesPalette_ImageBase);
        pdfCompressionGroup->setObjectName(QStringLiteral("pdfCompressionGroup"));
        gridLayout_3 = new QGridLayout(pdfCompressionGroup);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        compressionMethodLabel = new QLabel(pdfCompressionGroup);
        compressionMethodLabel->setObjectName(QStringLiteral("compressionMethodLabel"));

        gridLayout_3->addWidget(compressionMethodLabel, 0, 0, 1, 1);

        compressionMethod = new QComboBox(pdfCompressionGroup);
        compressionMethod->setObjectName(QStringLiteral("compressionMethod"));
        sizePolicy1.setHeightForWidth(compressionMethod->sizePolicy().hasHeightForWidth());
        compressionMethod->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(compressionMethod, 0, 1, 1, 1);

        compressionQualityLabel = new QLabel(pdfCompressionGroup);
        compressionQualityLabel->setObjectName(QStringLiteral("compressionQualityLabel"));

        gridLayout_3->addWidget(compressionQualityLabel, 1, 0, 1, 1);

        compressionQuality = new QComboBox(pdfCompressionGroup);
        compressionQuality->setObjectName(QStringLiteral("compressionQuality"));
        sizePolicy1.setHeightForWidth(compressionQuality->sizePolicy().hasHeightForWidth());
        compressionQuality->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(compressionQuality, 1, 1, 1, 1);


        verticalLayout->addWidget(pdfCompressionGroup);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        imgEffectsButton = new QToolButton(PropertiesPalette_ImageBase);
        imgEffectsButton->setObjectName(QStringLiteral("imgEffectsButton"));
        sizePolicy1.setHeightForWidth(imgEffectsButton->sizePolicy().hasHeightForWidth());
        imgEffectsButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(imgEffectsButton);

        imgExtProperties = new QToolButton(PropertiesPalette_ImageBase);
        imgExtProperties->setObjectName(QStringLiteral("imgExtProperties"));
        sizePolicy1.setHeightForWidth(imgExtProperties->sizePolicy().hasHeightForWidth());
        imgExtProperties->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(imgExtProperties);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(imagePageNumber, imageXOffsetSpinBox);
        QWidget::setTabOrder(imageXOffsetSpinBox, imageYOffsetSpinBox);
        QWidget::setTabOrder(imageYOffsetSpinBox, imageRotation);
        QWidget::setTabOrder(imageRotation, freeScale);
        QWidget::setTabOrder(freeScale, imageXScaleSpinBox);
        QWidget::setTabOrder(imageXScaleSpinBox, imageYScaleSpinBox);
        QWidget::setTabOrder(imageYScaleSpinBox, imgDpiX);
        QWidget::setTabOrder(imgDpiX, imgDpiY);
        QWidget::setTabOrder(imgDpiY, keepImageWHRatioButton);
        QWidget::setTabOrder(keepImageWHRatioButton, keepImageDPIRatioButton);
        QWidget::setTabOrder(keepImageDPIRatioButton, frameScale);
        QWidget::setTabOrder(frameScale, cbProportional);
        QWidget::setTabOrder(cbProportional, inputProfiles);
        QWidget::setTabOrder(inputProfiles, renderIntent);
        QWidget::setTabOrder(renderIntent, compressionMethod);
        QWidget::setTabOrder(compressionMethod, compressionQuality);
        QWidget::setTabOrder(compressionQuality, imgEffectsButton);
        QWidget::setTabOrder(imgEffectsButton, imgExtProperties);

        retranslateUi(PropertiesPalette_ImageBase);

        QMetaObject::connectSlotsByName(PropertiesPalette_ImageBase);
    } // setupUi

    void retranslateUi(QWidget *PropertiesPalette_ImageBase)
    {
        PropertiesPalette_ImageBase->setWindowTitle(QApplication::translate("PropertiesPalette_ImageBase", "Form", 0));
        xposImgLabel->setText(QApplication::translate("PropertiesPalette_ImageBase", "X-Pos:", 0));
        imageRotationLabel->setText(QApplication::translate("PropertiesPalette_ImageBase", "Rotation:", 0));
        imagePageNumberLabel->setText(QApplication::translate("PropertiesPalette_ImageBase", "&Page Number:", 0));
        yposImgLabel->setText(QApplication::translate("PropertiesPalette_ImageBase", "Y-Pos:", 0));
        imagePageNumber->setSpecialValueText(QApplication::translate("PropertiesPalette_ImageBase", "Auto", 0));
        scalingGroupBox->setTitle(QApplication::translate("PropertiesPalette_ImageBase", "Scaling", 0));
        xscaleLabel->setText(QApplication::translate("PropertiesPalette_ImageBase", "X-Sc&ale:", 0));
        yscaleLabel->setText(QApplication::translate("PropertiesPalette_ImageBase", "Y-Scal&e:", 0));
        keepImageWHRatioButton->setText(QApplication::translate("PropertiesPalette_ImageBase", "...", 0));
        imgDPIXLabel->setText(QApplication::translate("PropertiesPalette_ImageBase", "Actual X-DPI:", 0));
        imgDPIYLabel->setText(QApplication::translate("PropertiesPalette_ImageBase", "Actual Y-DPI:", 0));
        keepImageDPIRatioButton->setText(QApplication::translate("PropertiesPalette_ImageBase", "...", 0));
        freeScale->setText(QApplication::translate("PropertiesPalette_ImageBase", "Free", 0));
        cbProportional->setText(QApplication::translate("PropertiesPalette_ImageBase", "Proportional", 0));
        frameScale->setText(QApplication::translate("PropertiesPalette_ImageBase", "To Frame Size", 0));
        colorMgmtGroup->setTitle(QApplication::translate("PropertiesPalette_ImageBase", "Color Management", 0));
        inputProfLabel->setText(QApplication::translate("PropertiesPalette_ImageBase", "Input Profile", 0));
        renderIntentLabel->setText(QApplication::translate("PropertiesPalette_ImageBase", "Intent", 0));
        pdfCompressionGroup->setTitle(QApplication::translate("PropertiesPalette_ImageBase", "PDF Compression", 0));
        compressionMethodLabel->setText(QApplication::translate("PropertiesPalette_ImageBase", "Method:", 0));
        compressionQualityLabel->setText(QApplication::translate("PropertiesPalette_ImageBase", "Quality:", 0));
        imgEffectsButton->setText(QApplication::translate("PropertiesPalette_ImageBase", "Image Effects", 0));
        imgExtProperties->setText(QApplication::translate("PropertiesPalette_ImageBase", "Extended Properties", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertiesPalette_ImageBase: public Ui_PropertiesPalette_ImageBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESPALETTE_IMAGEBASE_H
