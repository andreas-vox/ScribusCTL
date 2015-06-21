/*
General prefs panel
*/

/********************************************************************************
** Form generated from reading UI file 'prefs_printerbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_PRINTERBASE_H
#define UI_PREFS_PRINTERBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ui/newmarginwidget.h>
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_Prefs_Printer
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *line_2;
    QComboBox *destinationComboBox;
    QCheckBox *useAltPrinterCmdCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *altPrinterCmdLineEdit;
    QSpacerItem *spacerItem;
    QLabel *label_4;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *outputComboBox;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *includePDFAnnotationsCheckBox;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
    QFrame *line_4;
    QCheckBox *pageMirrorHorizontallyCheckBox;
    QCheckBox *pageMirrorVerticallyCheckBox;
    QCheckBox *setMediaSizeCheckBox;
    QCheckBox *clipToPrinterMarginsCheckBox;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QFrame *line_5;
    QCheckBox *applyUnderColorRemovalCheckBox;
    QCheckBox *convertSpotsToProcessCheckBox;
    QCheckBox *applyICCProfilesCheckBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_7;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *postscriptLevelComboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QComboBox *postscriptPrintToColorComboBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_9;
    QFrame *line_7;
    QGridLayout *gridLayout;
    QCheckBox *cropMarksCheckBox;
    QCheckBox *bleedMarksCheckBox;
    QCheckBox *registrationMarksCheckBox;
    QCheckBox *colorBarsCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    ScrSpinBox *markOffsetSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    ScrSpinBox *markLengthSpinBox;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_11;
    QFrame *line_8;
    QHBoxLayout *horizontalLayout_7;
    NewMarginWidget *bleedsWidget;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *Prefs_Printer)
    {
        if (Prefs_Printer->objectName().isEmpty())
            Prefs_Printer->setObjectName(QStringLiteral("Prefs_Printer"));
        Prefs_Printer->resize(759, 693);
        verticalLayout = new QVBoxLayout(Prefs_Printer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        titleLabel = new QLabel(Prefs_Printer);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);

        verticalLayout->addWidget(titleLabel);

        line = new QFrame(Prefs_Printer);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        scrollArea = new QScrollArea(Prefs_Printer);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, -334, 714, 958));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout_2->addWidget(label);

        line_2 = new QFrame(scrollAreaWidgetContents_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        destinationComboBox = new QComboBox(scrollAreaWidgetContents_2);
        destinationComboBox->setObjectName(QStringLiteral("destinationComboBox"));

        verticalLayout_2->addWidget(destinationComboBox);

        useAltPrinterCmdCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        useAltPrinterCmdCheckBox->setObjectName(QStringLiteral("useAltPrinterCmdCheckBox"));

        verticalLayout_2->addWidget(useAltPrinterCmdCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        altPrinterCmdLineEdit = new QLineEdit(scrollAreaWidgetContents_2);
        altPrinterCmdLineEdit->setObjectName(QStringLiteral("altPrinterCmdLineEdit"));

        horizontalLayout->addWidget(altPrinterCmdLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(spacerItem);

        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4);

        line_3 = new QFrame(scrollAreaWidgetContents_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        outputComboBox = new QComboBox(scrollAreaWidgetContents_2);
        outputComboBox->setObjectName(QStringLiteral("outputComboBox"));

        horizontalLayout_2->addWidget(outputComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        includePDFAnnotationsCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        includePDFAnnotationsCheckBox->setObjectName(QStringLiteral("includePDFAnnotationsCheckBox"));

        verticalLayout_2->addWidget(includePDFAnnotationsCheckBox);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        label_5 = new QLabel(scrollAreaWidgetContents_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_2->addWidget(label_5);

        line_4 = new QFrame(scrollAreaWidgetContents_2);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        pageMirrorHorizontallyCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        pageMirrorHorizontallyCheckBox->setObjectName(QStringLiteral("pageMirrorHorizontallyCheckBox"));

        verticalLayout_2->addWidget(pageMirrorHorizontallyCheckBox);

        pageMirrorVerticallyCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        pageMirrorVerticallyCheckBox->setObjectName(QStringLiteral("pageMirrorVerticallyCheckBox"));

        verticalLayout_2->addWidget(pageMirrorVerticallyCheckBox);

        setMediaSizeCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        setMediaSizeCheckBox->setObjectName(QStringLiteral("setMediaSizeCheckBox"));

        verticalLayout_2->addWidget(setMediaSizeCheckBox);

        clipToPrinterMarginsCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        clipToPrinterMarginsCheckBox->setObjectName(QStringLiteral("clipToPrinterMarginsCheckBox"));

        verticalLayout_2->addWidget(clipToPrinterMarginsCheckBox);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        verticalLayout_2->addWidget(label_6);

        line_5 = new QFrame(scrollAreaWidgetContents_2);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_5);

        applyUnderColorRemovalCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        applyUnderColorRemovalCheckBox->setObjectName(QStringLiteral("applyUnderColorRemovalCheckBox"));

        verticalLayout_2->addWidget(applyUnderColorRemovalCheckBox);

        convertSpotsToProcessCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        convertSpotsToProcessCheckBox->setObjectName(QStringLiteral("convertSpotsToProcessCheckBox"));

        verticalLayout_2->addWidget(convertSpotsToProcessCheckBox);

        applyICCProfilesCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        applyICCProfilesCheckBox->setObjectName(QStringLiteral("applyICCProfilesCheckBox"));

        verticalLayout_2->addWidget(applyICCProfilesCheckBox);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_7 = new QLabel(scrollAreaWidgetContents_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        verticalLayout_2->addWidget(label_7);

        line_6 = new QFrame(scrollAreaWidgetContents_2);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        postscriptLevelComboBox = new QComboBox(scrollAreaWidgetContents_2);
        postscriptLevelComboBox->setObjectName(QStringLiteral("postscriptLevelComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(postscriptLevelComboBox->sizePolicy().hasHeightForWidth());
        postscriptLevelComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(postscriptLevelComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_8 = new QLabel(scrollAreaWidgetContents_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        postscriptPrintToColorComboBox = new QComboBox(scrollAreaWidgetContents_2);
        postscriptPrintToColorComboBox->setObjectName(QStringLiteral("postscriptPrintToColorComboBox"));

        horizontalLayout_4->addWidget(postscriptPrintToColorComboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        label_9 = new QLabel(scrollAreaWidgetContents_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        verticalLayout_2->addWidget(label_9);

        line_7 = new QFrame(scrollAreaWidgetContents_2);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_7);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cropMarksCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        cropMarksCheckBox->setObjectName(QStringLiteral("cropMarksCheckBox"));

        gridLayout->addWidget(cropMarksCheckBox, 0, 0, 1, 1);

        bleedMarksCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        bleedMarksCheckBox->setObjectName(QStringLiteral("bleedMarksCheckBox"));

        gridLayout->addWidget(bleedMarksCheckBox, 1, 0, 1, 1);

        registrationMarksCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        registrationMarksCheckBox->setObjectName(QStringLiteral("registrationMarksCheckBox"));

        gridLayout->addWidget(registrationMarksCheckBox, 2, 0, 1, 1);

        colorBarsCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        colorBarsCheckBox->setObjectName(QStringLiteral("colorBarsCheckBox"));

        gridLayout->addWidget(colorBarsCheckBox, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_10 = new QLabel(scrollAreaWidgetContents_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_5->addWidget(label_10);

        markOffsetSpinBox = new ScrSpinBox(scrollAreaWidgetContents_2);
        markOffsetSpinBox->setObjectName(QStringLiteral("markOffsetSpinBox"));

        horizontalLayout_5->addWidget(markOffsetSpinBox);


        gridLayout->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_12 = new QLabel(scrollAreaWidgetContents_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_6->addWidget(label_12);

        markLengthSpinBox = new ScrSpinBox(scrollAreaWidgetContents_2);
        markLengthSpinBox->setObjectName(QStringLiteral("markLengthSpinBox"));
        markLengthSpinBox->setMinimum(1);
        markLengthSpinBox->setMaximum(100);
        markLengthSpinBox->setValue(20);

        horizontalLayout_6->addWidget(markLengthSpinBox);


        gridLayout->addLayout(horizontalLayout_6, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_7);

        label_11 = new QLabel(scrollAreaWidgetContents_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        verticalLayout_2->addWidget(label_11);

        line_8 = new QFrame(scrollAreaWidgetContents_2);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        bleedsWidget = new NewMarginWidget(scrollAreaWidgetContents_2);
        bleedsWidget->setObjectName(QStringLiteral("bleedsWidget"));

        horizontalLayout_7->addWidget(bleedsWidget);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, destinationComboBox);
        QWidget::setTabOrder(destinationComboBox, useAltPrinterCmdCheckBox);
        QWidget::setTabOrder(useAltPrinterCmdCheckBox, altPrinterCmdLineEdit);
        QWidget::setTabOrder(altPrinterCmdLineEdit, outputComboBox);
        QWidget::setTabOrder(outputComboBox, includePDFAnnotationsCheckBox);
        QWidget::setTabOrder(includePDFAnnotationsCheckBox, pageMirrorHorizontallyCheckBox);
        QWidget::setTabOrder(pageMirrorHorizontallyCheckBox, pageMirrorVerticallyCheckBox);
        QWidget::setTabOrder(pageMirrorVerticallyCheckBox, setMediaSizeCheckBox);
        QWidget::setTabOrder(setMediaSizeCheckBox, clipToPrinterMarginsCheckBox);
        QWidget::setTabOrder(clipToPrinterMarginsCheckBox, applyUnderColorRemovalCheckBox);
        QWidget::setTabOrder(applyUnderColorRemovalCheckBox, convertSpotsToProcessCheckBox);
        QWidget::setTabOrder(convertSpotsToProcessCheckBox, applyICCProfilesCheckBox);
        QWidget::setTabOrder(applyICCProfilesCheckBox, postscriptLevelComboBox);
        QWidget::setTabOrder(postscriptLevelComboBox, postscriptPrintToColorComboBox);
        QWidget::setTabOrder(postscriptPrintToColorComboBox, cropMarksCheckBox);
        QWidget::setTabOrder(cropMarksCheckBox, bleedMarksCheckBox);
        QWidget::setTabOrder(bleedMarksCheckBox, registrationMarksCheckBox);
        QWidget::setTabOrder(registrationMarksCheckBox, colorBarsCheckBox);
        QWidget::setTabOrder(colorBarsCheckBox, markLengthSpinBox);
        QWidget::setTabOrder(markLengthSpinBox, markOffsetSpinBox);

        retranslateUi(Prefs_Printer);
        QObject::connect(cropMarksCheckBox, SIGNAL(clicked(bool)), markLengthSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Prefs_Printer);
    } // setupUi

    void retranslateUi(QWidget *Prefs_Printer)
    {
        Prefs_Printer->setWindowTitle(QApplication::translate("Prefs_Printer", "Form", 0));
        titleLabel->setText(QApplication::translate("Prefs_Printer", "Printing", 0));
        label->setText(QApplication::translate("Prefs_Printer", "Destination", 0));
        useAltPrinterCmdCheckBox->setText(QApplication::translate("Prefs_Printer", "Alternative Printer Command", 0));
        label_2->setText(QApplication::translate("Prefs_Printer", "Command:", 0));
        label_4->setText(QApplication::translate("Prefs_Printer", "General Options", 0));
        label_3->setText(QApplication::translate("Prefs_Printer", "Output:", 0));
        outputComboBox->clear();
        outputComboBox->insertItems(0, QStringList()
         << QApplication::translate("Prefs_Printer", "Normal", 0)
         << QApplication::translate("Prefs_Printer", "Separations", 0)
        );
        includePDFAnnotationsCheckBox->setText(QApplication::translate("Prefs_Printer", "Include PDF Annotations and Links", 0));
        label_5->setText(QApplication::translate("Prefs_Printer", "Page", 0));
        pageMirrorHorizontallyCheckBox->setText(QApplication::translate("Prefs_Printer", "Mirror Page(s) Horizontally", 0));
        pageMirrorVerticallyCheckBox->setText(QApplication::translate("Prefs_Printer", "Mirror Page(s) Vertically", 0));
        setMediaSizeCheckBox->setText(QApplication::translate("Prefs_Printer", "Set Media Size", 0));
        clipToPrinterMarginsCheckBox->setText(QApplication::translate("Prefs_Printer", "Clip to Printer Margins", 0));
        label_6->setText(QApplication::translate("Prefs_Printer", "Color", 0));
        applyUnderColorRemovalCheckBox->setText(QApplication::translate("Prefs_Printer", "Apply Under Color Removal", 0));
        convertSpotsToProcessCheckBox->setText(QApplication::translate("Prefs_Printer", "Convert Spot Colors to Process Colors", 0));
        applyICCProfilesCheckBox->setText(QApplication::translate("Prefs_Printer", "Apply ICC Profiles", 0));
        label_7->setText(QApplication::translate("Prefs_Printer", "PostScript", 0));
        postscriptLevelComboBox->clear();
        postscriptLevelComboBox->insertItems(0, QStringList()
         << QApplication::translate("Prefs_Printer", "Level 1", 0)
         << QApplication::translate("Prefs_Printer", "Level 2", 0)
         << QApplication::translate("Prefs_Printer", "Level 3", 0)
        );
        label_8->setText(QApplication::translate("Prefs_Printer", "Print In:", 0));
        postscriptPrintToColorComboBox->clear();
        postscriptPrintToColorComboBox->insertItems(0, QStringList()
         << QApplication::translate("Prefs_Printer", "Color (If Available)", 0)
         << QApplication::translate("Prefs_Printer", "Grayscale", 0)
        );
        label_9->setText(QApplication::translate("Prefs_Printer", "Marks and Bleeds", 0));
        cropMarksCheckBox->setText(QApplication::translate("Prefs_Printer", "Crop Marks", 0));
        bleedMarksCheckBox->setText(QApplication::translate("Prefs_Printer", "Bleed Marks", 0));
        registrationMarksCheckBox->setText(QApplication::translate("Prefs_Printer", "Registration Marks", 0));
        colorBarsCheckBox->setText(QApplication::translate("Prefs_Printer", "Color Bars", 0));
        label_10->setText(QApplication::translate("Prefs_Printer", "Offset:", 0));
        label_12->setText(QApplication::translate("Prefs_Printer", "Length:", 0));
        label_11->setText(QApplication::translate("Prefs_Printer", "Bleed Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_Printer: public Ui_Prefs_Printer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_PRINTERBASE_H
