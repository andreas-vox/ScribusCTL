/*
General prefs panel
*/

/********************************************************************************
** Form generated from reading UI file 'prefs_colormanagementbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_COLORMANAGEMENTBASE_H
#define UI_PREFS_COLORMANAGEMENTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_ColorManagement
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *warningLabel;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QFrame *line_4;
    QCheckBox *activateCMCheckBox;
    QCheckBox *simulatePrinterOnScreenCheckBox;
    QCheckBox *convertAllColorsToPrinterSpaceCheckBox;
    QCheckBox *markColorsOutOfGamutCheckBox;
    QCheckBox *useBlackpointCompensationCheckBox;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QFrame *line_2;
    QFormLayout *formLayout;
    QLabel *textLabel7;
    QComboBox *rgbImageProfileComboBox;
    QLabel *textLabel8;
    QComboBox *cmykImageProfileComboBox;
    QLabel *textLabel9;
    QComboBox *rgbSolidProfileComboBox;
    QLabel *textLabel10;
    QComboBox *cmykSolidProfileComboBox;
    QLabel *label_3;
    QComboBox *printerProfileComboBox;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_4;
    QFrame *line_3;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QComboBox *imageRenderingIntentComboBox;
    QLabel *label_6;
    QComboBox *solidColorsRenderingIntentComboBox;
    QSpacerItem *spacerItem;
    QLabel *monitorProfileLabel;
    QFrame *monitorProfileLine;
    QFormLayout *formLayout_3;
    QComboBox *monitorProfileComboBox;
    QLabel *monitorLabel;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Prefs_ColorManagement)
    {
        if (Prefs_ColorManagement->objectName().isEmpty())
            Prefs_ColorManagement->setObjectName(QStringLiteral("Prefs_ColorManagement"));
        Prefs_ColorManagement->resize(630, 574);
        verticalLayout = new QVBoxLayout(Prefs_ColorManagement);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        titleLabel = new QLabel(Prefs_ColorManagement);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);

        verticalLayout->addWidget(titleLabel);

        warningLabel = new QLabel(Prefs_ColorManagement);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(warningLabel->sizePolicy().hasHeightForWidth());
        warningLabel->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        warningLabel->setFont(font1);

        verticalLayout->addWidget(warningLabel);

        line = new QFrame(Prefs_ColorManagement);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        scrollArea = new QScrollArea(Prefs_ColorManagement);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 589, 631));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_7 = new QLabel(scrollAreaWidgetContents_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        verticalLayout_2->addWidget(label_7);

        line_4 = new QFrame(scrollAreaWidgetContents_2);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        activateCMCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        activateCMCheckBox->setObjectName(QStringLiteral("activateCMCheckBox"));

        verticalLayout_2->addWidget(activateCMCheckBox);

        simulatePrinterOnScreenCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        simulatePrinterOnScreenCheckBox->setObjectName(QStringLiteral("simulatePrinterOnScreenCheckBox"));

        verticalLayout_2->addWidget(simulatePrinterOnScreenCheckBox);

        convertAllColorsToPrinterSpaceCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        convertAllColorsToPrinterSpaceCheckBox->setObjectName(QStringLiteral("convertAllColorsToPrinterSpaceCheckBox"));

        verticalLayout_2->addWidget(convertAllColorsToPrinterSpaceCheckBox);

        markColorsOutOfGamutCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        markColorsOutOfGamutCheckBox->setObjectName(QStringLiteral("markColorsOutOfGamutCheckBox"));

        verticalLayout_2->addWidget(markColorsOutOfGamutCheckBox);

        useBlackpointCompensationCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        useBlackpointCompensationCheckBox->setObjectName(QStringLiteral("useBlackpointCompensationCheckBox"));

        verticalLayout_2->addWidget(useBlackpointCompensationCheckBox);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        verticalLayout_2->addWidget(label);

        line_2 = new QFrame(scrollAreaWidgetContents_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textLabel7 = new QLabel(scrollAreaWidgetContents_2);
        textLabel7->setObjectName(QStringLiteral("textLabel7"));
        textLabel7->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, textLabel7);

        rgbImageProfileComboBox = new QComboBox(scrollAreaWidgetContents_2);
        rgbImageProfileComboBox->setObjectName(QStringLiteral("rgbImageProfileComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rgbImageProfileComboBox->sizePolicy().hasHeightForWidth());
        rgbImageProfileComboBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, rgbImageProfileComboBox);

        textLabel8 = new QLabel(scrollAreaWidgetContents_2);
        textLabel8->setObjectName(QStringLiteral("textLabel8"));
        textLabel8->setWordWrap(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, textLabel8);

        cmykImageProfileComboBox = new QComboBox(scrollAreaWidgetContents_2);
        cmykImageProfileComboBox->setObjectName(QStringLiteral("cmykImageProfileComboBox"));
        sizePolicy1.setHeightForWidth(cmykImageProfileComboBox->sizePolicy().hasHeightForWidth());
        cmykImageProfileComboBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::FieldRole, cmykImageProfileComboBox);

        textLabel9 = new QLabel(scrollAreaWidgetContents_2);
        textLabel9->setObjectName(QStringLiteral("textLabel9"));
        textLabel9->setWordWrap(false);

        formLayout->setWidget(2, QFormLayout::LabelRole, textLabel9);

        rgbSolidProfileComboBox = new QComboBox(scrollAreaWidgetContents_2);
        rgbSolidProfileComboBox->setObjectName(QStringLiteral("rgbSolidProfileComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, rgbSolidProfileComboBox);

        textLabel10 = new QLabel(scrollAreaWidgetContents_2);
        textLabel10->setObjectName(QStringLiteral("textLabel10"));
        textLabel10->setWordWrap(false);

        formLayout->setWidget(3, QFormLayout::LabelRole, textLabel10);

        cmykSolidProfileComboBox = new QComboBox(scrollAreaWidgetContents_2);
        cmykSolidProfileComboBox->setObjectName(QStringLiteral("cmykSolidProfileComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cmykSolidProfileComboBox);

        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        printerProfileComboBox = new QComboBox(scrollAreaWidgetContents_2);
        printerProfileComboBox->setObjectName(QStringLiteral("printerProfileComboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, printerProfileComboBox);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4);

        line_3 = new QFrame(scrollAreaWidgetContents_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5 = new QLabel(scrollAreaWidgetContents_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        imageRenderingIntentComboBox = new QComboBox(scrollAreaWidgetContents_2);
        imageRenderingIntentComboBox->setObjectName(QStringLiteral("imageRenderingIntentComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, imageRenderingIntentComboBox);

        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        solidColorsRenderingIntentComboBox = new QComboBox(scrollAreaWidgetContents_2);
        solidColorsRenderingIntentComboBox->setObjectName(QStringLiteral("solidColorsRenderingIntentComboBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, solidColorsRenderingIntentComboBox);


        verticalLayout_2->addLayout(formLayout_2);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(spacerItem);

        monitorProfileLabel = new QLabel(scrollAreaWidgetContents_2);
        monitorProfileLabel->setObjectName(QStringLiteral("monitorProfileLabel"));
        monitorProfileLabel->setFont(font1);

        verticalLayout_2->addWidget(monitorProfileLabel);

        monitorProfileLine = new QFrame(scrollAreaWidgetContents_2);
        monitorProfileLine->setObjectName(QStringLiteral("monitorProfileLine"));
        monitorProfileLine->setFrameShape(QFrame::HLine);
        monitorProfileLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(monitorProfileLine);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        monitorProfileComboBox = new QComboBox(scrollAreaWidgetContents_2);
        monitorProfileComboBox->setObjectName(QStringLiteral("monitorProfileComboBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, monitorProfileComboBox);

        monitorLabel = new QLabel(scrollAreaWidgetContents_2);
        monitorLabel->setObjectName(QStringLiteral("monitorLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, monitorLabel);


        verticalLayout_2->addLayout(formLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(Prefs_ColorManagement);

        QMetaObject::connectSlotsByName(Prefs_ColorManagement);
    } // setupUi

    void retranslateUi(QWidget *Prefs_ColorManagement)
    {
        Prefs_ColorManagement->setWindowTitle(QApplication::translate("Prefs_ColorManagement", "Form", 0));
        titleLabel->setText(QApplication::translate("Prefs_ColorManagement", "Color Management", 0));
        warningLabel->setText(QString());
        label_7->setText(QApplication::translate("Prefs_ColorManagement", "Document Options", 0));
        activateCMCheckBox->setText(QApplication::translate("Prefs_ColorManagement", "Activate Color Management", 0));
        simulatePrinterOnScreenCheckBox->setText(QApplication::translate("Prefs_ColorManagement", "Simulate Printer on the Screen", 0));
        convertAllColorsToPrinterSpaceCheckBox->setText(QApplication::translate("Prefs_ColorManagement", "Convert all colors to printer space", 0));
        markColorsOutOfGamutCheckBox->setText(QApplication::translate("Prefs_ColorManagement", "Mark Colors out of Gamut", 0));
        useBlackpointCompensationCheckBox->setText(QApplication::translate("Prefs_ColorManagement", "Use Blackpoint Compensation", 0));
        label->setText(QApplication::translate("Prefs_ColorManagement", "Document Profiles", 0));
        textLabel7->setText(QApplication::translate("Prefs_ColorManagement", "RGB Images:", 0));
        textLabel8->setText(QApplication::translate("Prefs_ColorManagement", "CMYK Images:", 0));
        textLabel9->setText(QApplication::translate("Prefs_ColorManagement", "RGB Solid Colors:", 0));
        textLabel10->setText(QApplication::translate("Prefs_ColorManagement", "CMYK Solid Colors:", 0));
        label_3->setText(QApplication::translate("Prefs_ColorManagement", "Printer:", 0));
        label_4->setText(QApplication::translate("Prefs_ColorManagement", "Document Rendering Intents", 0));
        label_5->setText(QApplication::translate("Prefs_ColorManagement", "Images:", 0));
        label_6->setText(QApplication::translate("Prefs_ColorManagement", "Solid Colors:", 0));
        monitorProfileLabel->setText(QApplication::translate("Prefs_ColorManagement", "Monitor Profile", 0));
        monitorLabel->setText(QApplication::translate("Prefs_ColorManagement", "Monitor:", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_ColorManagement: public Ui_Prefs_ColorManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_COLORMANAGEMENTBASE_H
