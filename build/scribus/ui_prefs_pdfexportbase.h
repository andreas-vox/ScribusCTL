/********************************************************************************
** Form generated from reading UI file 'prefs_pdfexportbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_PDFEXPORTBASE_H
#define UI_PREFS_PDFEXPORTBASE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ui/newmarginwidget.h>
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_Prefs_PDFExport
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tabPages;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QFrame *line_2;
    QRadioButton *exportAllPagesRadioButton;
    QRadioButton *exportChosenPagesRadioButton;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *exportPageListLineEdit;
    QPushButton *exportRangeMorePushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_11;
    QLabel *label_8;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *rotationComboBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QToolButton *pageMirrorHorizontalToolButton;
    QToolButton *pageMirrorVerticalToolButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabFileOptions;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_19;
    QFormLayout *formLayout_2;
    QLabel *label_9;
    QComboBox *pdfVersionComboBox;
    QLabel *label_10;
    QComboBox *pageBindingComboBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *clipToPrinterMarginsCheckBox;
    QCheckBox *generateThumbnailsCheckBox;
    QCheckBox *saveLinkedTextFramesAsArticlesCheckBox;
    QCheckBox *includeLayersCheckBox;
    QCheckBox *includeBookmarksCheckBox;
    QCheckBox *embedPDFAndEPSFilesCheckBox;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
    QFrame *line_4;
    QCheckBox *compressTextAndVectorGraphicsCheckBox;
    QFormLayout *formLayout;
    QLabel *label_6;
    QComboBox *imageCompressionMethodComboBox;
    QLabel *label_7;
    QComboBox *imageCompressionQualityComboBox;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *maxResolutionLimitCheckBox;
    QSpinBox *maxExportResolutionSpinBox;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_19;
    QSpinBox *epsExportResolutionSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QWidget *tabSecurity;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *useEncryptionCheckBox;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_11;
    QFrame *line_5;
    QFormLayout *formLayout_3;
    QLabel *label_13;
    QLineEdit *passwordOwnerLineEdit;
    QLabel *label_14;
    QLineEdit *passwordUserLineEdit;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_12;
    QFrame *line_6;
    QCheckBox *allowPrintingCheckBox;
    QCheckBox *allowChangingCheckBox;
    QCheckBox *allowCopyingCheckBox;
    QCheckBox *allowAnnotatingCheckBox;
    QSpacerItem *verticalSpacer_4;
    QWidget *tabColor;
    QVBoxLayout *verticalLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_8;
    QFormLayout *formLayout_4;
    QLabel *label_15;
    QComboBox *outputIntentionComboBox;
    QCheckBox *convertSpotsToProcessCheckBox;
    QSpacerItem *verticalSpacer_9;
    QLabel *solidColorsLabel;
    QFrame *solidColorsLine;
    QCheckBox *useSolidColorProfileCheckBox;
    QFormLayout *formLayout_8;
    QLabel *label_28;
    QComboBox *solidColorProfileComboBox;
    QLabel *label_27;
    QComboBox *solidColorRenderingIntentComboBox;
    QSpacerItem *verticalSpacer_12;
    QLabel *imagesLabel;
    QFrame *imagesLine;
    QCheckBox *useImageProfileCheckBox;
    QCheckBox *doNotUseEmbeddedImageProfileCheckBox;
    QFormLayout *formLayout_6;
    QLabel *label_22;
    QComboBox *imageProfileComboBox;
    QLabel *label_26;
    QComboBox *imageRenderingIntentComboBox;
    QSpacerItem *verticalSpacer_13;
    QLabel *label_29;
    QFrame *customRenderingLine;
    QCheckBox *useCustomRenderingCheckBox;
    QFormLayout *formLayout_9;
    QLabel *label_30;
    QComboBox *customRenderingColorComboBox;
    QLabel *label_31;
    QSpinBox *customRenderingFrequencySpinBox;
    QLabel *label_32;
    QSpinBox *customRenderingAngleSpinBox;
    QLabel *label_33;
    QComboBox *customRenderingSpotFunctionComboBox;
    QSpacerItem *verticalSpacer_7;
    QWidget *tabPrePress;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_16;
    QFrame *line_7;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_43;
    ScrSpinBox *markLengthSpinBox;
    QCheckBox *printBleedMarksCheckBox;
    QCheckBox *printColorBarsCheckBox;
    QCheckBox *printRegistrationMarksCheckBox;
    QCheckBox *printPageInfoCheckBox;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *printCropMarksCheckBox;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_17;
    ScrSpinBox *markOffsetSpinBox;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_18;
    QFrame *line_8;
    QHBoxLayout *horizontalLayout_4;
    NewMarginWidget *bleedsWidget;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *useDocumentBleedsCheckBox;
    QSpacerItem *bleedSettingsVerticalSpacer;
    QLabel *label_23;
    QFrame *line_9;
    QFormLayout *formLayout_5;
    QLabel *label_24;
    QComboBox *pdfx3OutputProfileComboBox;
    QLabel *label_25;
    QLineEdit *pdfx3InfoStringLineEdit;
    QSpacerItem *verticalSpacer_8;
    QWidget *tabFonts;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_20;
    QFrame *line_10;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_11;
    QLabel *availableListLabel;
    QTableView *FontTable;
    QFrame *frame;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_45;
    QLabel *label_46;
    QToolButton *SubsetAllFontsButton;
    QLabel *label_44;
    QToolButton *OutlineAllFontsButton;
    QToolButton *EmbedAllFontsButton;
    QWidget *tabExtras;
    QVBoxLayout *verticalLayout_17;
    QCheckBox *enabledEffectsCheckBox;
    QHBoxLayout *horizontalLayout_10;
    QListWidget *effectsPageListWidget;
    QVBoxLayout *verticalLayout_16;
    QFormLayout *formLayout_11;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QComboBox *effectTypeComboBox;
    QLabel *label_40;
    QComboBox *effectMovingDirectionComboBox;
    QLabel *label_41;
    QComboBox *effectInOutComboBox;
    QLabel *label_42;
    QComboBox *effectDirectionComboBox;
    QSpinBox *displayDurationSpinBox;
    QSpinBox *effectDurationSpinBox;
    QPushButton *applyEffectToAllPagesPushButton;
    QSpacerItem *verticalSpacer_19;
    QCheckBox *showPagePreviewsCheckBox;
    QWidget *tabViewer;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_21;
    QFrame *line_11;
    QRadioButton *singlePageRadioButton;
    QRadioButton *continuousPagesRadioButton;
    QRadioButton *doublePageLeftRadioButton;
    QRadioButton *doublePageRightRadioButton;
    QSpacerItem *verticalSpacer_15;
    QLabel *label_34;
    QFrame *line_12;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_14;
    QRadioButton *useViewerDefaultsRadioButton;
    QRadioButton *useFullScreenRadioButton;
    QRadioButton *useBookmarksRadioButton;
    QRadioButton *useThumbnailsRadioButton;
    QRadioButton *useLayersRadioButton;
    QVBoxLayout *verticalLayout_13;
    QCheckBox *hideViewerMenuBarCheckBox;
    QCheckBox *hideViewerToolBarCheckBox;
    QCheckBox *fitViewerWindowCheckBox;
    QSpacerItem *verticalSpacer_18;
    QSpacerItem *verticalSpacer_16;
    QLabel *label_35;
    QFrame *line_13;
    QFormLayout *formLayout_10;
    QLabel *label_36;
    QComboBox *startupJavascriptComboBox;
    QSpacerItem *verticalSpacer_17;
    QButtonGroup *rangeButtonGroup;

    void setupUi(QWidget *Prefs_PDFExport)
    {
        if (Prefs_PDFExport->objectName().isEmpty())
            Prefs_PDFExport->setObjectName(QStringLiteral("Prefs_PDFExport"));
        Prefs_PDFExport->resize(648, 550);
        verticalLayout = new QVBoxLayout(Prefs_PDFExport);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Prefs_PDFExport);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line = new QFrame(Prefs_PDFExport);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        tabWidget = new QTabWidget(Prefs_PDFExport);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabPages = new QWidget();
        tabPages->setObjectName(QStringLiteral("tabPages"));
        verticalLayout_3 = new QVBoxLayout(tabPages);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(tabPages);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        verticalLayout_3->addWidget(label_2);

        line_2 = new QFrame(tabPages);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        exportAllPagesRadioButton = new QRadioButton(tabPages);
        rangeButtonGroup = new QButtonGroup(Prefs_PDFExport);
        rangeButtonGroup->setObjectName(QStringLiteral("rangeButtonGroup"));
        rangeButtonGroup->addButton(exportAllPagesRadioButton);
        exportAllPagesRadioButton->setObjectName(QStringLiteral("exportAllPagesRadioButton"));

        verticalLayout_3->addWidget(exportAllPagesRadioButton);

        exportChosenPagesRadioButton = new QRadioButton(tabPages);
        rangeButtonGroup->addButton(exportChosenPagesRadioButton);
        exportChosenPagesRadioButton->setObjectName(QStringLiteral("exportChosenPagesRadioButton"));

        verticalLayout_3->addWidget(exportChosenPagesRadioButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        exportPageListLineEdit = new QLineEdit(tabPages);
        exportPageListLineEdit->setObjectName(QStringLiteral("exportPageListLineEdit"));

        horizontalLayout_3->addWidget(exportPageListLineEdit);

        exportRangeMorePushButton = new QPushButton(tabPages);
        exportRangeMorePushButton->setObjectName(QStringLiteral("exportRangeMorePushButton"));

        horizontalLayout_3->addWidget(exportRangeMorePushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_11);

        label_8 = new QLabel(tabPages);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        verticalLayout_3->addWidget(label_8);

        line_3 = new QFrame(tabPages);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(tabPages);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        rotationComboBox = new QComboBox(tabPages);
        rotationComboBox->setObjectName(QStringLiteral("rotationComboBox"));

        horizontalLayout_2->addWidget(rotationComboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(tabPages);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        pageMirrorHorizontalToolButton = new QToolButton(tabPages);
        pageMirrorHorizontalToolButton->setObjectName(QStringLiteral("pageMirrorHorizontalToolButton"));
        pageMirrorHorizontalToolButton->setCheckable(true);

        horizontalLayout->addWidget(pageMirrorHorizontalToolButton);

        pageMirrorVerticalToolButton = new QToolButton(tabPages);
        pageMirrorVerticalToolButton->setObjectName(QStringLiteral("pageMirrorVerticalToolButton"));
        pageMirrorVerticalToolButton->setCheckable(true);

        horizontalLayout->addWidget(pageMirrorVerticalToolButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tabPages, QString());
        tabFileOptions = new QWidget();
        tabFileOptions->setObjectName(QStringLiteral("tabFileOptions"));
        verticalLayout_7 = new QVBoxLayout(tabFileOptions);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        scrollArea_3 = new QScrollArea(tabFileOptions);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setFrameShadow(QFrame::Plain);
        scrollArea_3->setLineWidth(0);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 563, 454));
        verticalLayout_19 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_9 = new QLabel(scrollAreaWidgetContents_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_9);

        pdfVersionComboBox = new QComboBox(scrollAreaWidgetContents_3);
        pdfVersionComboBox->setObjectName(QStringLiteral("pdfVersionComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, pdfVersionComboBox);

        label_10 = new QLabel(scrollAreaWidgetContents_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        pageBindingComboBox = new QComboBox(scrollAreaWidgetContents_3);
        pageBindingComboBox->setObjectName(QStringLiteral("pageBindingComboBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, pageBindingComboBox);


        verticalLayout_19->addLayout(formLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        clipToPrinterMarginsCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        clipToPrinterMarginsCheckBox->setObjectName(QStringLiteral("clipToPrinterMarginsCheckBox"));

        verticalLayout_2->addWidget(clipToPrinterMarginsCheckBox);

        generateThumbnailsCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        generateThumbnailsCheckBox->setObjectName(QStringLiteral("generateThumbnailsCheckBox"));

        verticalLayout_2->addWidget(generateThumbnailsCheckBox);

        saveLinkedTextFramesAsArticlesCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        saveLinkedTextFramesAsArticlesCheckBox->setObjectName(QStringLiteral("saveLinkedTextFramesAsArticlesCheckBox"));

        verticalLayout_2->addWidget(saveLinkedTextFramesAsArticlesCheckBox);

        includeLayersCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        includeLayersCheckBox->setObjectName(QStringLiteral("includeLayersCheckBox"));

        verticalLayout_2->addWidget(includeLayersCheckBox);

        includeBookmarksCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        includeBookmarksCheckBox->setObjectName(QStringLiteral("includeBookmarksCheckBox"));

        verticalLayout_2->addWidget(includeBookmarksCheckBox);

        embedPDFAndEPSFilesCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        embedPDFAndEPSFilesCheckBox->setObjectName(QStringLiteral("embedPDFAndEPSFilesCheckBox"));

        verticalLayout_2->addWidget(embedPDFAndEPSFilesCheckBox);


        verticalLayout_19->addLayout(verticalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_19->addItem(verticalSpacer_3);

        label_5 = new QLabel(scrollAreaWidgetContents_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_19->addWidget(label_5);

        line_4 = new QFrame(scrollAreaWidgetContents_3);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_19->addWidget(line_4);

        compressTextAndVectorGraphicsCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        compressTextAndVectorGraphicsCheckBox->setObjectName(QStringLiteral("compressTextAndVectorGraphicsCheckBox"));

        verticalLayout_19->addWidget(compressTextAndVectorGraphicsCheckBox);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_6 = new QLabel(scrollAreaWidgetContents_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        imageCompressionMethodComboBox = new QComboBox(scrollAreaWidgetContents_3);
        imageCompressionMethodComboBox->setObjectName(QStringLiteral("imageCompressionMethodComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, imageCompressionMethodComboBox);

        label_7 = new QLabel(scrollAreaWidgetContents_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        imageCompressionQualityComboBox = new QComboBox(scrollAreaWidgetContents_3);
        imageCompressionQualityComboBox->setObjectName(QStringLiteral("imageCompressionQualityComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, imageCompressionQualityComboBox);


        verticalLayout_19->addLayout(formLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        maxResolutionLimitCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        maxResolutionLimitCheckBox->setObjectName(QStringLiteral("maxResolutionLimitCheckBox"));

        horizontalLayout_6->addWidget(maxResolutionLimitCheckBox);

        maxExportResolutionSpinBox = new QSpinBox(scrollAreaWidgetContents_3);
        maxExportResolutionSpinBox->setObjectName(QStringLiteral("maxExportResolutionSpinBox"));
        maxExportResolutionSpinBox->setMinimum(35);
        maxExportResolutionSpinBox->setMaximum(4000);

        horizontalLayout_6->addWidget(maxExportResolutionSpinBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_19->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_19 = new QLabel(scrollAreaWidgetContents_3);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_5->addWidget(label_19);

        epsExportResolutionSpinBox = new QSpinBox(scrollAreaWidgetContents_3);
        epsExportResolutionSpinBox->setObjectName(QStringLiteral("epsExportResolutionSpinBox"));
        epsExportResolutionSpinBox->setMinimum(35);
        epsExportResolutionSpinBox->setMaximum(4000);

        horizontalLayout_5->addWidget(epsExportResolutionSpinBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_19->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_19->addItem(verticalSpacer);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_7->addWidget(scrollArea_3);

        tabWidget->addTab(tabFileOptions, QString());
        tabSecurity = new QWidget();
        tabSecurity->setObjectName(QStringLiteral("tabSecurity"));
        verticalLayout_4 = new QVBoxLayout(tabSecurity);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        useEncryptionCheckBox = new QCheckBox(tabSecurity);
        useEncryptionCheckBox->setObjectName(QStringLiteral("useEncryptionCheckBox"));

        verticalLayout_4->addWidget(useEncryptionCheckBox);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_5);

        label_11 = new QLabel(tabSecurity);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        verticalLayout_4->addWidget(label_11);

        line_5 = new QFrame(tabSecurity);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_5);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_13 = new QLabel(tabSecurity);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_13);

        passwordOwnerLineEdit = new QLineEdit(tabSecurity);
        passwordOwnerLineEdit->setObjectName(QStringLiteral("passwordOwnerLineEdit"));
        passwordOwnerLineEdit->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, passwordOwnerLineEdit);

        label_14 = new QLabel(tabSecurity);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_14);

        passwordUserLineEdit = new QLineEdit(tabSecurity);
        passwordUserLineEdit->setObjectName(QStringLiteral("passwordUserLineEdit"));
        passwordUserLineEdit->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, passwordUserLineEdit);


        verticalLayout_4->addLayout(formLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_6);

        label_12 = new QLabel(tabSecurity);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        verticalLayout_4->addWidget(label_12);

        line_6 = new QFrame(tabSecurity);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_6);

        allowPrintingCheckBox = new QCheckBox(tabSecurity);
        allowPrintingCheckBox->setObjectName(QStringLiteral("allowPrintingCheckBox"));

        verticalLayout_4->addWidget(allowPrintingCheckBox);

        allowChangingCheckBox = new QCheckBox(tabSecurity);
        allowChangingCheckBox->setObjectName(QStringLiteral("allowChangingCheckBox"));

        verticalLayout_4->addWidget(allowChangingCheckBox);

        allowCopyingCheckBox = new QCheckBox(tabSecurity);
        allowCopyingCheckBox->setObjectName(QStringLiteral("allowCopyingCheckBox"));

        verticalLayout_4->addWidget(allowCopyingCheckBox);

        allowAnnotatingCheckBox = new QCheckBox(tabSecurity);
        allowAnnotatingCheckBox->setObjectName(QStringLiteral("allowAnnotatingCheckBox"));

        verticalLayout_4->addWidget(allowAnnotatingCheckBox);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        tabWidget->addTab(tabSecurity, QString());
        tabColor = new QWidget();
        tabColor->setObjectName(QStringLiteral("tabColor"));
        verticalLayout_5 = new QVBoxLayout(tabColor);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        scrollArea = new QScrollArea(tabColor);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 563, 636));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_15);

        outputIntentionComboBox = new QComboBox(scrollAreaWidgetContents);
        outputIntentionComboBox->setObjectName(QStringLiteral("outputIntentionComboBox"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, outputIntentionComboBox);


        verticalLayout_8->addLayout(formLayout_4);

        convertSpotsToProcessCheckBox = new QCheckBox(scrollAreaWidgetContents);
        convertSpotsToProcessCheckBox->setObjectName(QStringLiteral("convertSpotsToProcessCheckBox"));

        verticalLayout_8->addWidget(convertSpotsToProcessCheckBox);

        verticalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_9);

        solidColorsLabel = new QLabel(scrollAreaWidgetContents);
        solidColorsLabel->setObjectName(QStringLiteral("solidColorsLabel"));
        solidColorsLabel->setFont(font1);

        verticalLayout_8->addWidget(solidColorsLabel);

        solidColorsLine = new QFrame(scrollAreaWidgetContents);
        solidColorsLine->setObjectName(QStringLiteral("solidColorsLine"));
        solidColorsLine->setFont(font);
        solidColorsLine->setFrameShape(QFrame::HLine);
        solidColorsLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(solidColorsLine);

        useSolidColorProfileCheckBox = new QCheckBox(scrollAreaWidgetContents);
        useSolidColorProfileCheckBox->setObjectName(QStringLiteral("useSolidColorProfileCheckBox"));

        verticalLayout_8->addWidget(useSolidColorProfileCheckBox);

        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        label_28 = new QLabel(scrollAreaWidgetContents);
        label_28->setObjectName(QStringLiteral("label_28"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_28);

        solidColorProfileComboBox = new QComboBox(scrollAreaWidgetContents);
        solidColorProfileComboBox->setObjectName(QStringLiteral("solidColorProfileComboBox"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, solidColorProfileComboBox);

        label_27 = new QLabel(scrollAreaWidgetContents);
        label_27->setObjectName(QStringLiteral("label_27"));

        formLayout_8->setWidget(1, QFormLayout::LabelRole, label_27);

        solidColorRenderingIntentComboBox = new QComboBox(scrollAreaWidgetContents);
        solidColorRenderingIntentComboBox->setObjectName(QStringLiteral("solidColorRenderingIntentComboBox"));

        formLayout_8->setWidget(1, QFormLayout::FieldRole, solidColorRenderingIntentComboBox);


        verticalLayout_8->addLayout(formLayout_8);

        verticalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_12);

        imagesLabel = new QLabel(scrollAreaWidgetContents);
        imagesLabel->setObjectName(QStringLiteral("imagesLabel"));
        imagesLabel->setFont(font1);

        verticalLayout_8->addWidget(imagesLabel);

        imagesLine = new QFrame(scrollAreaWidgetContents);
        imagesLine->setObjectName(QStringLiteral("imagesLine"));
        imagesLine->setFrameShape(QFrame::HLine);
        imagesLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(imagesLine);

        useImageProfileCheckBox = new QCheckBox(scrollAreaWidgetContents);
        useImageProfileCheckBox->setObjectName(QStringLiteral("useImageProfileCheckBox"));

        verticalLayout_8->addWidget(useImageProfileCheckBox);

        doNotUseEmbeddedImageProfileCheckBox = new QCheckBox(scrollAreaWidgetContents);
        doNotUseEmbeddedImageProfileCheckBox->setObjectName(QStringLiteral("doNotUseEmbeddedImageProfileCheckBox"));

        verticalLayout_8->addWidget(doNotUseEmbeddedImageProfileCheckBox);

        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        label_22 = new QLabel(scrollAreaWidgetContents);
        label_22->setObjectName(QStringLiteral("label_22"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_22);

        imageProfileComboBox = new QComboBox(scrollAreaWidgetContents);
        imageProfileComboBox->setObjectName(QStringLiteral("imageProfileComboBox"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, imageProfileComboBox);

        label_26 = new QLabel(scrollAreaWidgetContents);
        label_26->setObjectName(QStringLiteral("label_26"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_26);

        imageRenderingIntentComboBox = new QComboBox(scrollAreaWidgetContents);
        imageRenderingIntentComboBox->setObjectName(QStringLiteral("imageRenderingIntentComboBox"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, imageRenderingIntentComboBox);


        verticalLayout_8->addLayout(formLayout_6);

        verticalSpacer_13 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_8->addItem(verticalSpacer_13);

        label_29 = new QLabel(scrollAreaWidgetContents);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setFont(font1);

        verticalLayout_8->addWidget(label_29);

        customRenderingLine = new QFrame(scrollAreaWidgetContents);
        customRenderingLine->setObjectName(QStringLiteral("customRenderingLine"));
        customRenderingLine->setFrameShape(QFrame::HLine);
        customRenderingLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(customRenderingLine);

        useCustomRenderingCheckBox = new QCheckBox(scrollAreaWidgetContents);
        useCustomRenderingCheckBox->setObjectName(QStringLiteral("useCustomRenderingCheckBox"));

        verticalLayout_8->addWidget(useCustomRenderingCheckBox);

        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName(QStringLiteral("formLayout_9"));
        formLayout_9->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label_30 = new QLabel(scrollAreaWidgetContents);
        label_30->setObjectName(QStringLiteral("label_30"));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, label_30);

        customRenderingColorComboBox = new QComboBox(scrollAreaWidgetContents);
        customRenderingColorComboBox->setObjectName(QStringLiteral("customRenderingColorComboBox"));

        formLayout_9->setWidget(0, QFormLayout::FieldRole, customRenderingColorComboBox);

        label_31 = new QLabel(scrollAreaWidgetContents);
        label_31->setObjectName(QStringLiteral("label_31"));

        formLayout_9->setWidget(1, QFormLayout::LabelRole, label_31);

        customRenderingFrequencySpinBox = new QSpinBox(scrollAreaWidgetContents);
        customRenderingFrequencySpinBox->setObjectName(QStringLiteral("customRenderingFrequencySpinBox"));
        customRenderingFrequencySpinBox->setMinimum(10);
        customRenderingFrequencySpinBox->setMaximum(1000);

        formLayout_9->setWidget(1, QFormLayout::FieldRole, customRenderingFrequencySpinBox);

        label_32 = new QLabel(scrollAreaWidgetContents);
        label_32->setObjectName(QStringLiteral("label_32"));

        formLayout_9->setWidget(2, QFormLayout::LabelRole, label_32);

        customRenderingAngleSpinBox = new QSpinBox(scrollAreaWidgetContents);
        customRenderingAngleSpinBox->setObjectName(QStringLiteral("customRenderingAngleSpinBox"));
        customRenderingAngleSpinBox->setMinimum(-180);
        customRenderingAngleSpinBox->setMaximum(180);

        formLayout_9->setWidget(2, QFormLayout::FieldRole, customRenderingAngleSpinBox);

        label_33 = new QLabel(scrollAreaWidgetContents);
        label_33->setObjectName(QStringLiteral("label_33"));

        formLayout_9->setWidget(3, QFormLayout::LabelRole, label_33);

        customRenderingSpotFunctionComboBox = new QComboBox(scrollAreaWidgetContents);
        customRenderingSpotFunctionComboBox->setObjectName(QStringLiteral("customRenderingSpotFunctionComboBox"));

        formLayout_9->setWidget(3, QFormLayout::FieldRole, customRenderingSpotFunctionComboBox);


        verticalLayout_8->addLayout(formLayout_9);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_7);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_5->addWidget(scrollArea);

        tabWidget->addTab(tabColor, QString());
        tabPrePress = new QWidget();
        tabPrePress->setObjectName(QStringLiteral("tabPrePress"));
        verticalLayout_6 = new QVBoxLayout(tabPrePress);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        scrollArea_2 = new QScrollArea(tabPrePress);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setFrameShadow(QFrame::Plain);
        scrollArea_2->setLineWidth(0);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 563, 471));
        verticalLayout_18 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        label_16 = new QLabel(scrollAreaWidgetContents_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font1);

        verticalLayout_18->addWidget(label_16);

        line_7 = new QFrame(scrollAreaWidgetContents_2);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_18->addWidget(line_7);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_43 = new QLabel(scrollAreaWidgetContents_2);
        label_43->setObjectName(QStringLiteral("label_43"));

        horizontalLayout_11->addWidget(label_43);

        markLengthSpinBox = new ScrSpinBox(scrollAreaWidgetContents_2);
        markLengthSpinBox->setObjectName(QStringLiteral("markLengthSpinBox"));
        markLengthSpinBox->setMinimum(1);
        markLengthSpinBox->setMaximum(100);
        markLengthSpinBox->setValue(20);

        horizontalLayout_11->addWidget(markLengthSpinBox);


        gridLayout->addLayout(horizontalLayout_11, 0, 1, 1, 1);

        printBleedMarksCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        printBleedMarksCheckBox->setObjectName(QStringLiteral("printBleedMarksCheckBox"));

        gridLayout->addWidget(printBleedMarksCheckBox, 1, 0, 1, 1);

        printColorBarsCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        printColorBarsCheckBox->setObjectName(QStringLiteral("printColorBarsCheckBox"));

        gridLayout->addWidget(printColorBarsCheckBox, 2, 0, 1, 1);

        printRegistrationMarksCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        printRegistrationMarksCheckBox->setObjectName(QStringLiteral("printRegistrationMarksCheckBox"));

        gridLayout->addWidget(printRegistrationMarksCheckBox, 3, 0, 1, 1);

        printPageInfoCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        printPageInfoCheckBox->setObjectName(QStringLiteral("printPageInfoCheckBox"));

        gridLayout->addWidget(printPageInfoCheckBox, 4, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(-1, -1, 0, 0);
        printCropMarksCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        printCropMarksCheckBox->setObjectName(QStringLiteral("printCropMarksCheckBox"));

        horizontalLayout_13->addWidget(printCropMarksCheckBox);


        gridLayout->addLayout(horizontalLayout_13, 0, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_17 = new QLabel(scrollAreaWidgetContents_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_12->addWidget(label_17);

        markOffsetSpinBox = new ScrSpinBox(scrollAreaWidgetContents_2);
        markOffsetSpinBox->setObjectName(QStringLiteral("markOffsetSpinBox"));

        horizontalLayout_12->addWidget(markOffsetSpinBox);


        gridLayout->addLayout(horizontalLayout_12, 1, 1, 1, 1);


        verticalLayout_18->addLayout(gridLayout);

        verticalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_18->addItem(verticalSpacer_10);

        label_18 = new QLabel(scrollAreaWidgetContents_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font1);

        verticalLayout_18->addWidget(label_18);

        line_8 = new QFrame(scrollAreaWidgetContents_2);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout_18->addWidget(line_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        bleedsWidget = new NewMarginWidget(scrollAreaWidgetContents_2);
        bleedsWidget->setObjectName(QStringLiteral("bleedsWidget"));

        horizontalLayout_4->addWidget(bleedsWidget);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_18->addLayout(horizontalLayout_4);

        useDocumentBleedsCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        useDocumentBleedsCheckBox->setObjectName(QStringLiteral("useDocumentBleedsCheckBox"));

        verticalLayout_18->addWidget(useDocumentBleedsCheckBox);

        bleedSettingsVerticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_18->addItem(bleedSettingsVerticalSpacer);

        label_23 = new QLabel(scrollAreaWidgetContents_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font1);

        verticalLayout_18->addWidget(label_23);

        line_9 = new QFrame(scrollAreaWidgetContents_2);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout_18->addWidget(line_9);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_24 = new QLabel(scrollAreaWidgetContents_2);
        label_24->setObjectName(QStringLiteral("label_24"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_24);

        pdfx3OutputProfileComboBox = new QComboBox(scrollAreaWidgetContents_2);
        pdfx3OutputProfileComboBox->setObjectName(QStringLiteral("pdfx3OutputProfileComboBox"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, pdfx3OutputProfileComboBox);

        label_25 = new QLabel(scrollAreaWidgetContents_2);
        label_25->setObjectName(QStringLiteral("label_25"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_25);

        pdfx3InfoStringLineEdit = new QLineEdit(scrollAreaWidgetContents_2);
        pdfx3InfoStringLineEdit->setObjectName(QStringLiteral("pdfx3InfoStringLineEdit"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, pdfx3InfoStringLineEdit);


        verticalLayout_18->addLayout(formLayout_5);

        verticalSpacer_8 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_8);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_6->addWidget(scrollArea_2);

        tabWidget->addTab(tabPrePress, QString());
        tabFonts = new QWidget();
        tabFonts->setObjectName(QStringLiteral("tabFonts"));
        verticalLayout_12 = new QVBoxLayout(tabFonts);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_20 = new QLabel(tabFonts);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font1);

        verticalLayout_12->addWidget(label_20);

        line_10 = new QFrame(tabFonts);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        verticalLayout_12->addWidget(line_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        availableListLabel = new QLabel(tabFonts);
        availableListLabel->setObjectName(QStringLiteral("availableListLabel"));

        verticalLayout_11->addWidget(availableListLabel);

        FontTable = new QTableView(tabFonts);
        FontTable->setObjectName(QStringLiteral("FontTable"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FontTable->sizePolicy().hasHeightForWidth());
        FontTable->setSizePolicy(sizePolicy);

        verticalLayout_11->addWidget(FontTable);

        frame = new QFrame(tabFonts);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 581, 151));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(-1);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_45 = new QLabel(gridLayoutWidget);
        label_45->setObjectName(QStringLiteral("label_45"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy2);
        label_45->setLocale(QLocale(QLocale::C, QLocale::AnyCountry));
        label_45->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_45->setIndent(24);

        gridLayout_2->addWidget(label_45, 0, 0, 1, 1);

        label_46 = new QLabel(gridLayoutWidget);
        label_46->setObjectName(QStringLiteral("label_46"));
        sizePolicy2.setHeightForWidth(label_46->sizePolicy().hasHeightForWidth());
        label_46->setSizePolicy(sizePolicy2);
        label_46->setLocale(QLocale(QLocale::C, QLocale::AnyCountry));
        label_46->setIndent(24);

        gridLayout_2->addWidget(label_46, 2, 0, 1, 1);

        SubsetAllFontsButton = new QToolButton(gridLayoutWidget);
        SubsetAllFontsButton->setObjectName(QStringLiteral("SubsetAllFontsButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(SubsetAllFontsButton->sizePolicy().hasHeightForWidth());
        SubsetAllFontsButton->setSizePolicy(sizePolicy3);
        SubsetAllFontsButton->setLocale(QLocale(QLocale::C, QLocale::AnyCountry));

        gridLayout_2->addWidget(SubsetAllFontsButton, 1, 1, 1, 1);

        label_44 = new QLabel(gridLayoutWidget);
        label_44->setObjectName(QStringLiteral("label_44"));
        sizePolicy2.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy2);
        label_44->setLocale(QLocale(QLocale::C, QLocale::AnyCountry));
        label_44->setIndent(24);

        gridLayout_2->addWidget(label_44, 1, 0, 1, 1);

        OutlineAllFontsButton = new QToolButton(gridLayoutWidget);
        OutlineAllFontsButton->setObjectName(QStringLiteral("OutlineAllFontsButton"));
        sizePolicy3.setHeightForWidth(OutlineAllFontsButton->sizePolicy().hasHeightForWidth());
        OutlineAllFontsButton->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(OutlineAllFontsButton, 2, 1, 1, 1);

        EmbedAllFontsButton = new QToolButton(gridLayoutWidget);
        EmbedAllFontsButton->setObjectName(QStringLiteral("EmbedAllFontsButton"));
        sizePolicy3.setHeightForWidth(EmbedAllFontsButton->sizePolicy().hasHeightForWidth());
        EmbedAllFontsButton->setSizePolicy(sizePolicy3);
        EmbedAllFontsButton->setLocale(QLocale(QLocale::C, QLocale::AnyCountry));
        EmbedAllFontsButton->setAutoExclusive(false);

        gridLayout_2->addWidget(EmbedAllFontsButton, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);

        verticalLayout_11->addWidget(frame);


        horizontalLayout_8->addLayout(verticalLayout_11);


        verticalLayout_12->addLayout(horizontalLayout_8);

        tabWidget->addTab(tabFonts, QString());
        tabExtras = new QWidget();
        tabExtras->setObjectName(QStringLiteral("tabExtras"));
        verticalLayout_17 = new QVBoxLayout(tabExtras);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        enabledEffectsCheckBox = new QCheckBox(tabExtras);
        enabledEffectsCheckBox->setObjectName(QStringLiteral("enabledEffectsCheckBox"));

        verticalLayout_17->addWidget(enabledEffectsCheckBox);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        effectsPageListWidget = new QListWidget(tabExtras);
        effectsPageListWidget->setObjectName(QStringLiteral("effectsPageListWidget"));

        horizontalLayout_10->addWidget(effectsPageListWidget);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        formLayout_11 = new QFormLayout();
        formLayout_11->setObjectName(QStringLiteral("formLayout_11"));
        formLayout_11->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label_37 = new QLabel(tabExtras);
        label_37->setObjectName(QStringLiteral("label_37"));

        formLayout_11->setWidget(0, QFormLayout::LabelRole, label_37);

        label_38 = new QLabel(tabExtras);
        label_38->setObjectName(QStringLiteral("label_38"));

        formLayout_11->setWidget(1, QFormLayout::LabelRole, label_38);

        label_39 = new QLabel(tabExtras);
        label_39->setObjectName(QStringLiteral("label_39"));

        formLayout_11->setWidget(2, QFormLayout::LabelRole, label_39);

        effectTypeComboBox = new QComboBox(tabExtras);
        effectTypeComboBox->setObjectName(QStringLiteral("effectTypeComboBox"));

        formLayout_11->setWidget(2, QFormLayout::FieldRole, effectTypeComboBox);

        label_40 = new QLabel(tabExtras);
        label_40->setObjectName(QStringLiteral("label_40"));

        formLayout_11->setWidget(3, QFormLayout::LabelRole, label_40);

        effectMovingDirectionComboBox = new QComboBox(tabExtras);
        effectMovingDirectionComboBox->setObjectName(QStringLiteral("effectMovingDirectionComboBox"));

        formLayout_11->setWidget(3, QFormLayout::FieldRole, effectMovingDirectionComboBox);

        label_41 = new QLabel(tabExtras);
        label_41->setObjectName(QStringLiteral("label_41"));

        formLayout_11->setWidget(4, QFormLayout::LabelRole, label_41);

        effectInOutComboBox = new QComboBox(tabExtras);
        effectInOutComboBox->setObjectName(QStringLiteral("effectInOutComboBox"));

        formLayout_11->setWidget(4, QFormLayout::FieldRole, effectInOutComboBox);

        label_42 = new QLabel(tabExtras);
        label_42->setObjectName(QStringLiteral("label_42"));

        formLayout_11->setWidget(5, QFormLayout::LabelRole, label_42);

        effectDirectionComboBox = new QComboBox(tabExtras);
        effectDirectionComboBox->setObjectName(QStringLiteral("effectDirectionComboBox"));

        formLayout_11->setWidget(5, QFormLayout::FieldRole, effectDirectionComboBox);

        displayDurationSpinBox = new QSpinBox(tabExtras);
        displayDurationSpinBox->setObjectName(QStringLiteral("displayDurationSpinBox"));
        displayDurationSpinBox->setMaximum(3600);

        formLayout_11->setWidget(0, QFormLayout::FieldRole, displayDurationSpinBox);

        effectDurationSpinBox = new QSpinBox(tabExtras);
        effectDurationSpinBox->setObjectName(QStringLiteral("effectDurationSpinBox"));
        effectDurationSpinBox->setMinimum(1);
        effectDurationSpinBox->setMaximum(3600);

        formLayout_11->setWidget(1, QFormLayout::FieldRole, effectDurationSpinBox);


        verticalLayout_16->addLayout(formLayout_11);

        applyEffectToAllPagesPushButton = new QPushButton(tabExtras);
        applyEffectToAllPagesPushButton->setObjectName(QStringLiteral("applyEffectToAllPagesPushButton"));

        verticalLayout_16->addWidget(applyEffectToAllPagesPushButton);

        verticalSpacer_19 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_19);


        horizontalLayout_10->addLayout(verticalLayout_16);


        verticalLayout_17->addLayout(horizontalLayout_10);

        showPagePreviewsCheckBox = new QCheckBox(tabExtras);
        showPagePreviewsCheckBox->setObjectName(QStringLiteral("showPagePreviewsCheckBox"));

        verticalLayout_17->addWidget(showPagePreviewsCheckBox);

        tabWidget->addTab(tabExtras, QString());
        tabViewer = new QWidget();
        tabViewer->setObjectName(QStringLiteral("tabViewer"));
        verticalLayout_15 = new QVBoxLayout(tabViewer);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_21 = new QLabel(tabViewer);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font1);

        verticalLayout_15->addWidget(label_21);

        line_11 = new QFrame(tabViewer);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        verticalLayout_15->addWidget(line_11);

        singlePageRadioButton = new QRadioButton(tabViewer);
        singlePageRadioButton->setObjectName(QStringLiteral("singlePageRadioButton"));

        verticalLayout_15->addWidget(singlePageRadioButton);

        continuousPagesRadioButton = new QRadioButton(tabViewer);
        continuousPagesRadioButton->setObjectName(QStringLiteral("continuousPagesRadioButton"));

        verticalLayout_15->addWidget(continuousPagesRadioButton);

        doublePageLeftRadioButton = new QRadioButton(tabViewer);
        doublePageLeftRadioButton->setObjectName(QStringLiteral("doublePageLeftRadioButton"));

        verticalLayout_15->addWidget(doublePageLeftRadioButton);

        doublePageRightRadioButton = new QRadioButton(tabViewer);
        doublePageRightRadioButton->setObjectName(QStringLiteral("doublePageRightRadioButton"));

        verticalLayout_15->addWidget(doublePageRightRadioButton);

        verticalSpacer_15 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_15->addItem(verticalSpacer_15);

        label_34 = new QLabel(tabViewer);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setFont(font1);

        verticalLayout_15->addWidget(label_34);

        line_12 = new QFrame(tabViewer);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        verticalLayout_15->addWidget(line_12);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        useViewerDefaultsRadioButton = new QRadioButton(tabViewer);
        useViewerDefaultsRadioButton->setObjectName(QStringLiteral("useViewerDefaultsRadioButton"));

        verticalLayout_14->addWidget(useViewerDefaultsRadioButton);

        useFullScreenRadioButton = new QRadioButton(tabViewer);
        useFullScreenRadioButton->setObjectName(QStringLiteral("useFullScreenRadioButton"));

        verticalLayout_14->addWidget(useFullScreenRadioButton);

        useBookmarksRadioButton = new QRadioButton(tabViewer);
        useBookmarksRadioButton->setObjectName(QStringLiteral("useBookmarksRadioButton"));

        verticalLayout_14->addWidget(useBookmarksRadioButton);

        useThumbnailsRadioButton = new QRadioButton(tabViewer);
        useThumbnailsRadioButton->setObjectName(QStringLiteral("useThumbnailsRadioButton"));

        verticalLayout_14->addWidget(useThumbnailsRadioButton);

        useLayersRadioButton = new QRadioButton(tabViewer);
        useLayersRadioButton->setObjectName(QStringLiteral("useLayersRadioButton"));

        verticalLayout_14->addWidget(useLayersRadioButton);


        horizontalLayout_9->addLayout(verticalLayout_14);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        hideViewerMenuBarCheckBox = new QCheckBox(tabViewer);
        hideViewerMenuBarCheckBox->setObjectName(QStringLiteral("hideViewerMenuBarCheckBox"));

        verticalLayout_13->addWidget(hideViewerMenuBarCheckBox);

        hideViewerToolBarCheckBox = new QCheckBox(tabViewer);
        hideViewerToolBarCheckBox->setObjectName(QStringLiteral("hideViewerToolBarCheckBox"));

        verticalLayout_13->addWidget(hideViewerToolBarCheckBox);

        fitViewerWindowCheckBox = new QCheckBox(tabViewer);
        fitViewerWindowCheckBox->setObjectName(QStringLiteral("fitViewerWindowCheckBox"));

        verticalLayout_13->addWidget(fitViewerWindowCheckBox);

        verticalSpacer_18 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_18);


        horizontalLayout_9->addLayout(verticalLayout_13);


        verticalLayout_15->addLayout(horizontalLayout_9);

        verticalSpacer_16 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_15->addItem(verticalSpacer_16);

        label_35 = new QLabel(tabViewer);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setFont(font1);

        verticalLayout_15->addWidget(label_35);

        line_13 = new QFrame(tabViewer);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        verticalLayout_15->addWidget(line_13);

        formLayout_10 = new QFormLayout();
        formLayout_10->setObjectName(QStringLiteral("formLayout_10"));
        label_36 = new QLabel(tabViewer);
        label_36->setObjectName(QStringLiteral("label_36"));

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_36);

        startupJavascriptComboBox = new QComboBox(tabViewer);
        startupJavascriptComboBox->setObjectName(QStringLiteral("startupJavascriptComboBox"));

        formLayout_10->setWidget(0, QFormLayout::FieldRole, startupJavascriptComboBox);


        verticalLayout_15->addLayout(formLayout_10);

        verticalSpacer_17 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_17);

        tabWidget->addTab(tabViewer, QString());

        verticalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, exportAllPagesRadioButton);
        QWidget::setTabOrder(exportAllPagesRadioButton, exportChosenPagesRadioButton);
        QWidget::setTabOrder(exportChosenPagesRadioButton, exportPageListLineEdit);
        QWidget::setTabOrder(exportPageListLineEdit, exportRangeMorePushButton);
        QWidget::setTabOrder(exportRangeMorePushButton, rotationComboBox);
        QWidget::setTabOrder(rotationComboBox, pageMirrorHorizontalToolButton);
        QWidget::setTabOrder(pageMirrorHorizontalToolButton, pageMirrorVerticalToolButton);
        QWidget::setTabOrder(pageMirrorVerticalToolButton, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, pdfVersionComboBox);
        QWidget::setTabOrder(pdfVersionComboBox, pageBindingComboBox);
        QWidget::setTabOrder(pageBindingComboBox, clipToPrinterMarginsCheckBox);
        QWidget::setTabOrder(clipToPrinterMarginsCheckBox, generateThumbnailsCheckBox);
        QWidget::setTabOrder(generateThumbnailsCheckBox, saveLinkedTextFramesAsArticlesCheckBox);
        QWidget::setTabOrder(saveLinkedTextFramesAsArticlesCheckBox, includeLayersCheckBox);
        QWidget::setTabOrder(includeLayersCheckBox, includeBookmarksCheckBox);
        QWidget::setTabOrder(includeBookmarksCheckBox, embedPDFAndEPSFilesCheckBox);
        QWidget::setTabOrder(embedPDFAndEPSFilesCheckBox, compressTextAndVectorGraphicsCheckBox);
        QWidget::setTabOrder(compressTextAndVectorGraphicsCheckBox, imageCompressionMethodComboBox);
        QWidget::setTabOrder(imageCompressionMethodComboBox, imageCompressionQualityComboBox);
        QWidget::setTabOrder(imageCompressionQualityComboBox, maxResolutionLimitCheckBox);
        QWidget::setTabOrder(maxResolutionLimitCheckBox, maxExportResolutionSpinBox);
        QWidget::setTabOrder(maxExportResolutionSpinBox, epsExportResolutionSpinBox);
        QWidget::setTabOrder(epsExportResolutionSpinBox, useEncryptionCheckBox);
        QWidget::setTabOrder(useEncryptionCheckBox, passwordOwnerLineEdit);
        QWidget::setTabOrder(passwordOwnerLineEdit, passwordUserLineEdit);
        QWidget::setTabOrder(passwordUserLineEdit, allowPrintingCheckBox);
        QWidget::setTabOrder(allowPrintingCheckBox, allowChangingCheckBox);
        QWidget::setTabOrder(allowChangingCheckBox, allowCopyingCheckBox);
        QWidget::setTabOrder(allowCopyingCheckBox, allowAnnotatingCheckBox);
        QWidget::setTabOrder(allowAnnotatingCheckBox, scrollArea);
        QWidget::setTabOrder(scrollArea, outputIntentionComboBox);
        QWidget::setTabOrder(outputIntentionComboBox, convertSpotsToProcessCheckBox);
        QWidget::setTabOrder(convertSpotsToProcessCheckBox, useSolidColorProfileCheckBox);
        QWidget::setTabOrder(useSolidColorProfileCheckBox, solidColorProfileComboBox);
        QWidget::setTabOrder(solidColorProfileComboBox, solidColorRenderingIntentComboBox);
        QWidget::setTabOrder(solidColorRenderingIntentComboBox, useImageProfileCheckBox);
        QWidget::setTabOrder(useImageProfileCheckBox, doNotUseEmbeddedImageProfileCheckBox);
        QWidget::setTabOrder(doNotUseEmbeddedImageProfileCheckBox, imageProfileComboBox);
        QWidget::setTabOrder(imageProfileComboBox, imageRenderingIntentComboBox);
        QWidget::setTabOrder(imageRenderingIntentComboBox, useCustomRenderingCheckBox);
        QWidget::setTabOrder(useCustomRenderingCheckBox, customRenderingColorComboBox);
        QWidget::setTabOrder(customRenderingColorComboBox, customRenderingFrequencySpinBox);
        QWidget::setTabOrder(customRenderingFrequencySpinBox, customRenderingAngleSpinBox);
        QWidget::setTabOrder(customRenderingAngleSpinBox, customRenderingSpotFunctionComboBox);
        QWidget::setTabOrder(customRenderingSpotFunctionComboBox, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, printCropMarksCheckBox);
        QWidget::setTabOrder(printCropMarksCheckBox, printBleedMarksCheckBox);
        QWidget::setTabOrder(printBleedMarksCheckBox, printColorBarsCheckBox);
        QWidget::setTabOrder(printColorBarsCheckBox, printRegistrationMarksCheckBox);
        QWidget::setTabOrder(printRegistrationMarksCheckBox, printPageInfoCheckBox);
        QWidget::setTabOrder(printPageInfoCheckBox, markLengthSpinBox);
        QWidget::setTabOrder(markLengthSpinBox, markOffsetSpinBox);
        QWidget::setTabOrder(markOffsetSpinBox, useDocumentBleedsCheckBox);
        QWidget::setTabOrder(useDocumentBleedsCheckBox, pdfx3OutputProfileComboBox);
        QWidget::setTabOrder(pdfx3OutputProfileComboBox, pdfx3InfoStringLineEdit);
        QWidget::setTabOrder(pdfx3InfoStringLineEdit, enabledEffectsCheckBox);
        QWidget::setTabOrder(enabledEffectsCheckBox, effectsPageListWidget);
        QWidget::setTabOrder(effectsPageListWidget, effectTypeComboBox);
        QWidget::setTabOrder(effectTypeComboBox, effectMovingDirectionComboBox);
        QWidget::setTabOrder(effectMovingDirectionComboBox, effectInOutComboBox);
        QWidget::setTabOrder(effectInOutComboBox, effectDirectionComboBox);
        QWidget::setTabOrder(effectDirectionComboBox, displayDurationSpinBox);
        QWidget::setTabOrder(displayDurationSpinBox, effectDurationSpinBox);
        QWidget::setTabOrder(effectDurationSpinBox, applyEffectToAllPagesPushButton);
        QWidget::setTabOrder(applyEffectToAllPagesPushButton, showPagePreviewsCheckBox);
        QWidget::setTabOrder(showPagePreviewsCheckBox, singlePageRadioButton);
        QWidget::setTabOrder(singlePageRadioButton, continuousPagesRadioButton);
        QWidget::setTabOrder(continuousPagesRadioButton, doublePageLeftRadioButton);
        QWidget::setTabOrder(doublePageLeftRadioButton, doublePageRightRadioButton);
        QWidget::setTabOrder(doublePageRightRadioButton, useViewerDefaultsRadioButton);
        QWidget::setTabOrder(useViewerDefaultsRadioButton, useFullScreenRadioButton);
        QWidget::setTabOrder(useFullScreenRadioButton, useBookmarksRadioButton);
        QWidget::setTabOrder(useBookmarksRadioButton, useThumbnailsRadioButton);
        QWidget::setTabOrder(useThumbnailsRadioButton, useLayersRadioButton);
        QWidget::setTabOrder(useLayersRadioButton, hideViewerMenuBarCheckBox);
        QWidget::setTabOrder(hideViewerMenuBarCheckBox, hideViewerToolBarCheckBox);
        QWidget::setTabOrder(hideViewerToolBarCheckBox, fitViewerWindowCheckBox);
        QWidget::setTabOrder(fitViewerWindowCheckBox, startupJavascriptComboBox);

        retranslateUi(Prefs_PDFExport);
        QObject::connect(printCropMarksCheckBox, SIGNAL(clicked(bool)), markLengthSpinBox, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(Prefs_PDFExport);
    } // setupUi

    void retranslateUi(QWidget *Prefs_PDFExport)
    {
        Prefs_PDFExport->setWindowTitle(QApplication::translate("Prefs_PDFExport", "Form", 0));
        label->setText(QApplication::translate("Prefs_PDFExport", "PDF Export", 0));
        label_2->setText(QApplication::translate("Prefs_PDFExport", "Export Range", 0));
        exportAllPagesRadioButton->setText(QApplication::translate("Prefs_PDFExport", "All Pages", 0));
        exportChosenPagesRadioButton->setText(QApplication::translate("Prefs_PDFExport", "Choose Pages", 0));
        exportRangeMorePushButton->setText(QApplication::translate("Prefs_PDFExport", "...", 0));
        label_8->setText(QApplication::translate("Prefs_PDFExport", "Rotation and Mirroring", 0));
        label_3->setText(QApplication::translate("Prefs_PDFExport", "Rotation:", 0));
        label_4->setText(QApplication::translate("Prefs_PDFExport", "Page Mirroring:", 0));
        pageMirrorHorizontalToolButton->setText(QApplication::translate("Prefs_PDFExport", "...", 0));
        pageMirrorVerticalToolButton->setText(QApplication::translate("Prefs_PDFExport", "...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabPages), QApplication::translate("Prefs_PDFExport", "Pages", 0));
        label_9->setText(QApplication::translate("Prefs_PDFExport", "Compatibility:", 0));
        label_10->setText(QApplication::translate("Prefs_PDFExport", "Page Binding:", 0));
        clipToPrinterMarginsCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Clip to Printer Margins", 0));
        generateThumbnailsCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Generate Thumbnails", 0));
        saveLinkedTextFramesAsArticlesCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Save Linked Text Frames as PDF Articles", 0));
        includeLayersCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Include Layers", 0));
        includeBookmarksCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Include Bookmarks", 0));
        embedPDFAndEPSFilesCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Embed PDF && EPS Files (Experimental)", 0));
        label_5->setText(QApplication::translate("Prefs_PDFExport", "Compression", 0));
        compressTextAndVectorGraphicsCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Compress Text and Vector Graphics", 0));
        label_6->setText(QApplication::translate("Prefs_PDFExport", "Image Compression Method:", 0));
        label_7->setText(QApplication::translate("Prefs_PDFExport", "Image Compression Quality:", 0));
        maxResolutionLimitCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Limit Maximum Image Resolution to:", 0));
        maxExportResolutionSpinBox->setSuffix(QApplication::translate("Prefs_PDFExport", " dpi", 0));
        label_19->setText(QApplication::translate("Prefs_PDFExport", "Resolution for EPS Graphics:", 0));
        epsExportResolutionSpinBox->setSuffix(QApplication::translate("Prefs_PDFExport", " dpi", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabFileOptions), QApplication::translate("Prefs_PDFExport", "File Options", 0));
        useEncryptionCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Use Encryption", 0));
        label_11->setText(QApplication::translate("Prefs_PDFExport", "Passwords", 0));
        label_13->setText(QApplication::translate("Prefs_PDFExport", "Owner:", 0));
        label_14->setText(QApplication::translate("Prefs_PDFExport", "User:", 0));
        label_12->setText(QApplication::translate("Prefs_PDFExport", "Settings", 0));
        allowPrintingCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Allow Printing the Document", 0));
        allowChangingCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Allow Changing the Document", 0));
        allowCopyingCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Allow Copying Text and Graphics", 0));
        allowAnnotatingCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Allow Adding Annotations and Fields", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabSecurity), QApplication::translate("Prefs_PDFExport", "Security", 0));
        label_15->setText(QApplication::translate("Prefs_PDFExport", "Output Intended For:", 0));
        convertSpotsToProcessCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Convert Spot Colors to Process Colors", 0));
        solidColorsLabel->setText(QApplication::translate("Prefs_PDFExport", "Solid Colors", 0));
        useSolidColorProfileCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Use Color Profile", 0));
        label_28->setText(QApplication::translate("Prefs_PDFExport", "Profile:", 0));
        label_27->setText(QApplication::translate("Prefs_PDFExport", "Rendering Intent:", 0));
        imagesLabel->setText(QApplication::translate("Prefs_PDFExport", "Images", 0));
        useImageProfileCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Use Color Profile", 0));
        doNotUseEmbeddedImageProfileCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Do not use Embedded Color Profiles", 0));
        label_22->setText(QApplication::translate("Prefs_PDFExport", "Profile:", 0));
        label_26->setText(QApplication::translate("Prefs_PDFExport", "Rendering Intent:", 0));
        label_29->setText(QApplication::translate("Prefs_PDFExport", "Custom Rendering", 0));
        useCustomRenderingCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Use Custom Rendering", 0));
        label_30->setText(QApplication::translate("Prefs_PDFExport", "Color:", 0));
        label_31->setText(QApplication::translate("Prefs_PDFExport", "Frequency:", 0));
        label_32->setText(QApplication::translate("Prefs_PDFExport", "Angle:", 0));
        customRenderingAngleSpinBox->setSuffix(QApplication::translate("Prefs_PDFExport", " \302\260", 0));
        label_33->setText(QApplication::translate("Prefs_PDFExport", "Spot Function:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabColor), QApplication::translate("Prefs_PDFExport", "Color", 0));
        label_16->setText(QApplication::translate("Prefs_PDFExport", "Printer Marks", 0));
        label_43->setText(QApplication::translate("Prefs_PDFExport", "Mark Length:", 0));
        printBleedMarksCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Bleed Marks", 0));
        printColorBarsCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Color Bars", 0));
        printRegistrationMarksCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Registration Marks", 0));
        printPageInfoCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Page Information", 0));
        printCropMarksCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Crop Marks", 0));
        label_17->setText(QApplication::translate("Prefs_PDFExport", "Mark Offset:", 0));
        label_18->setText(QApplication::translate("Prefs_PDFExport", "Bleed Settings", 0));
        useDocumentBleedsCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Use Document Bleeds", 0));
        label_23->setText(QApplication::translate("Prefs_PDFExport", "PDF/X-3 Output Intent", 0));
        label_24->setText(QApplication::translate("Prefs_PDFExport", "Output Profile:", 0));
        label_25->setText(QApplication::translate("Prefs_PDFExport", "Information String:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabPrePress), QApplication::translate("Prefs_PDFExport", "Pre-Press", 0));
        label_20->setText(QApplication::translate("Prefs_PDFExport", "Export Range", 0));
        availableListLabel->setText(QApplication::translate("Prefs_PDFExport", "Used Fonts", 0));
        label_45->setText(QApplication::translate("Prefs_PDFExport", "a) Embed fonts", 0));
        label_46->setText(QApplication::translate("Prefs_PDFExport", "c) Outline fonts", 0));
        SubsetAllFontsButton->setText(QApplication::translate("Prefs_PDFExport", "Subset all fonts", 0));
        label_44->setText(QApplication::translate("Prefs_PDFExport", "b) Subset fonts", 0));
        OutlineAllFontsButton->setText(QApplication::translate("Prefs_PDFExport", "Outline all fonts", 0));
        EmbedAllFontsButton->setText(QApplication::translate("Prefs_PDFExport", "Embed all fonts", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabFonts), QApplication::translate("Prefs_PDFExport", "Fonts", 0));
        enabledEffectsCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Enable Presentation Effects", 0));
        label_37->setText(QApplication::translate("Prefs_PDFExport", "Display Duration:", 0));
        label_38->setText(QApplication::translate("Prefs_PDFExport", "Effect Duration:", 0));
        label_39->setText(QApplication::translate("Prefs_PDFExport", "Effect Type:", 0));
        label_40->setText(QApplication::translate("Prefs_PDFExport", "Moving Lines:", 0));
        label_41->setText(QApplication::translate("Prefs_PDFExport", "From the:", 0));
        label_42->setText(QApplication::translate("Prefs_PDFExport", "Direction:", 0));
        displayDurationSpinBox->setSuffix(QApplication::translate("Prefs_PDFExport", " s", 0));
        effectDurationSpinBox->setSuffix(QApplication::translate("Prefs_PDFExport", " s", 0));
        applyEffectToAllPagesPushButton->setText(QApplication::translate("Prefs_PDFExport", "Apply Effect to All Pages", 0));
        showPagePreviewsCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Show Page Previews", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabExtras), QApplication::translate("Prefs_PDFExport", "Extras", 0));
        label_21->setText(QApplication::translate("Prefs_PDFExport", "Document Layout", 0));
        singlePageRadioButton->setText(QApplication::translate("Prefs_PDFExport", "Single Page", 0));
        continuousPagesRadioButton->setText(QApplication::translate("Prefs_PDFExport", "Continuous Pages", 0));
        doublePageLeftRadioButton->setText(QApplication::translate("Prefs_PDFExport", "Double Page Left", 0));
        doublePageRightRadioButton->setText(QApplication::translate("Prefs_PDFExport", "Double Page Right", 0));
        label_34->setText(QApplication::translate("Prefs_PDFExport", "Visual Appearance", 0));
        useViewerDefaultsRadioButton->setText(QApplication::translate("Prefs_PDFExport", "Use Viewer's Default", 0));
        useFullScreenRadioButton->setText(QApplication::translate("Prefs_PDFExport", "Use Full Screen Mode", 0));
        useBookmarksRadioButton->setText(QApplication::translate("Prefs_PDFExport", "Display Bookmarks Tab", 0));
        useThumbnailsRadioButton->setText(QApplication::translate("Prefs_PDFExport", "Display Thumbnails", 0));
        useLayersRadioButton->setText(QApplication::translate("Prefs_PDFExport", "Display Layers Tab", 0));
        hideViewerMenuBarCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Hide Viewer's Menu Bar", 0));
        hideViewerToolBarCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Hide Viewer's Tool Bar", 0));
        fitViewerWindowCheckBox->setText(QApplication::translate("Prefs_PDFExport", "Zoom Pages to fit Viewer Window", 0));
        label_35->setText(QApplication::translate("Prefs_PDFExport", "Special Actions", 0));
        label_36->setText(QApplication::translate("Prefs_PDFExport", "Javascript to be executed when PDF document is opened:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabViewer), QApplication::translate("Prefs_PDFExport", "Viewer", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_PDFExport: public Ui_Prefs_PDFExport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_PDFEXPORTBASE_H
