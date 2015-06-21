/********************************************************************************
** Form generated from reading UI file 'prefs_preflightverifierbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_PREFLIGHTVERIFIERBASE_H
#define UI_PREFS_PREFLIGHTVERIFIERBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_PreflightVerifier
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QCheckBox *showPagesWithoutErrorsCheckBox;
    QCheckBox *showNonPrintingLayerErrorsCheckBox;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *currentProfileComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addProfilePushButton;
    QPushButton *removeProfilePushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QFrame *line_2;
    QCheckBox *ignoreAllErrorsCheckBox;
    QCheckBox *autoCheckBeforePrintExportCheckBox;
    QCheckBox *checkMissingGlyphsCheckBox;
    QCheckBox *checkItemsNotOnAPageCheckBox;
    QCheckBox *checkEmptyTextFramesCheckBox;
    QCheckBox *checkTextOverflowCheckBox;
    QCheckBox *checkTransparenciesCheckBox;
    QCheckBox *checkMissingImagesCheckBox;
    QCheckBox *checkPartFilledImageFramesCheckBox;
    QCheckBox *checkImageResolutionCheckBox;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QSpinBox *minimumResolutionSpinBox;
    QSpinBox *maximumResolutionSpinBox;
    QLabel *label_5;
    QCheckBox *checkPlacedPDFCheckBox;
    QCheckBox *checkGIFsCheckBox;
    QCheckBox *checkPDFAnnotFieldsCheckBox;
    QCheckBox *checkVisiblePrintableLayersCheckBox;
    QCheckBox *checkNonPrintableLayersCheckBox;
    QCheckBox *checkAppliedMasterPageLocationCheckBox;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Prefs_PreflightVerifier)
    {
        if (Prefs_PreflightVerifier->objectName().isEmpty())
            Prefs_PreflightVerifier->setObjectName(QStringLiteral("Prefs_PreflightVerifier"));
        Prefs_PreflightVerifier->resize(623, 757);
        verticalLayout = new QVBoxLayout(Prefs_PreflightVerifier);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Prefs_PreflightVerifier);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line = new QFrame(Prefs_PreflightVerifier);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        showPagesWithoutErrorsCheckBox = new QCheckBox(Prefs_PreflightVerifier);
        showPagesWithoutErrorsCheckBox->setObjectName(QStringLiteral("showPagesWithoutErrorsCheckBox"));

        verticalLayout->addWidget(showPagesWithoutErrorsCheckBox);

        showNonPrintingLayerErrorsCheckBox = new QCheckBox(Prefs_PreflightVerifier);
        showNonPrintingLayerErrorsCheckBox->setObjectName(QStringLiteral("showNonPrintingLayerErrorsCheckBox"));

        verticalLayout->addWidget(showNonPrintingLayerErrorsCheckBox);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_3);

        label_6 = new QLabel(Prefs_PreflightVerifier);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);

        verticalLayout->addWidget(label_6);

        scrollArea = new QScrollArea(Prefs_PreflightVerifier);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 597, 591));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        currentProfileComboBox = new QComboBox(scrollAreaWidgetContents);
        currentProfileComboBox->setObjectName(QStringLiteral("currentProfileComboBox"));
        currentProfileComboBox->setEditable(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, currentProfileComboBox);


        verticalLayout_2->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addProfilePushButton = new QPushButton(scrollAreaWidgetContents);
        addProfilePushButton->setObjectName(QStringLiteral("addProfilePushButton"));

        horizontalLayout->addWidget(addProfilePushButton);

        removeProfilePushButton = new QPushButton(scrollAreaWidgetContents);
        removeProfilePushButton->setObjectName(QStringLiteral("removeProfilePushButton"));

        horizontalLayout->addWidget(removeProfilePushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        ignoreAllErrorsCheckBox = new QCheckBox(scrollAreaWidgetContents);
        ignoreAllErrorsCheckBox->setObjectName(QStringLiteral("ignoreAllErrorsCheckBox"));

        verticalLayout_2->addWidget(ignoreAllErrorsCheckBox);

        autoCheckBeforePrintExportCheckBox = new QCheckBox(scrollAreaWidgetContents);
        autoCheckBeforePrintExportCheckBox->setObjectName(QStringLiteral("autoCheckBeforePrintExportCheckBox"));

        verticalLayout_2->addWidget(autoCheckBeforePrintExportCheckBox);

        checkMissingGlyphsCheckBox = new QCheckBox(scrollAreaWidgetContents);
        checkMissingGlyphsCheckBox->setObjectName(QStringLiteral("checkMissingGlyphsCheckBox"));

        verticalLayout_2->addWidget(checkMissingGlyphsCheckBox);

        checkItemsNotOnAPageCheckBox = new QCheckBox(scrollAreaWidgetContents);
        checkItemsNotOnAPageCheckBox->setObjectName(QStringLiteral("checkItemsNotOnAPageCheckBox"));

        verticalLayout_2->addWidget(checkItemsNotOnAPageCheckBox);

        checkEmptyTextFramesCheckBox = new QCheckBox(scrollAreaWidgetContents);
        checkEmptyTextFramesCheckBox->setObjectName(QStringLiteral("checkEmptyTextFramesCheckBox"));

        verticalLayout_2->addWidget(checkEmptyTextFramesCheckBox);

        checkTextOverflowCheckBox = new QCheckBox(scrollAreaWidgetContents);
        checkTextOverflowCheckBox->setObjectName(QStringLiteral("checkTextOverflowCheckBox"));

        verticalLayout_2->addWidget(checkTextOverflowCheckBox);

        checkTransparenciesCheckBox = new QCheckBox(scrollAreaWidgetContents);
        checkTransparenciesCheckBox->setObjectName(QStringLiteral("checkTransparenciesCheckBox"));

        verticalLayout_2->addWidget(checkTransparenciesCheckBox);

        checkMissingImagesCheckBox = new QCheckBox(scrollAreaWidgetContents);
        checkMissingImagesCheckBox->setObjectName(QStringLiteral("checkMissingImagesCheckBox"));

        verticalLayout_2->addWidget(checkMissingImagesCheckBox);

        checkPartFilledImageFramesCheckBox = new QCheckBox(scrollAreaWidgetContents);
        checkPartFilledImageFramesCheckBox->setObjectName(QStringLiteral("checkPartFilledImageFramesCheckBox"));

        verticalLayout_2->addWidget(checkPartFilledImageFramesCheckBox);

        checkImageResolutionCheckBox = new QCheckBox(scrollAreaWidgetContents);
        checkImageResolutionCheckBox->setObjectName(QStringLiteral("checkImageResolutionCheckBox"));

        verticalLayout_2->addWidget(checkImageResolutionCheckBox);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        minimumResolutionSpinBox = new QSpinBox(scrollAreaWidgetContents);
        minimumResolutionSpinBox->setObjectName(QStringLiteral("minimumResolutionSpinBox"));
        minimumResolutionSpinBox->setMinimum(10);
        minimumResolutionSpinBox->setMaximum(4800);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, minimumResolutionSpinBox);

        maximumResolutionSpinBox = new QSpinBox(scrollAreaWidgetContents);
        maximumResolutionSpinBox->setObjectName(QStringLiteral("maximumResolutionSpinBox"));
        maximumResolutionSpinBox->setMinimum(10);
        maximumResolutionSpinBox->setMaximum(4800);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, maximumResolutionSpinBox);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);


        verticalLayout_2->addLayout(formLayout_2);

        checkPlacedPDFCheckBox = new QCheckBox(scrollAreaWidgetContents);
        checkPlacedPDFCheckBox->setObjectName(QStringLiteral("checkPlacedPDFCheckBox"));

        verticalLayout_2->addWidget(checkPlacedPDFCheckBox);

        checkGIFsCheckBox = new QCheckBox(scrollAreaWidgetContents);
        checkGIFsCheckBox->setObjectName(QStringLiteral("checkGIFsCheckBox"));

        verticalLayout_2->addWidget(checkGIFsCheckBox);

        checkPDFAnnotFieldsCheckBox = new QCheckBox(scrollAreaWidgetContents);
        checkPDFAnnotFieldsCheckBox->setObjectName(QStringLiteral("checkPDFAnnotFieldsCheckBox"));

        verticalLayout_2->addWidget(checkPDFAnnotFieldsCheckBox);

        checkVisiblePrintableLayersCheckBox = new QCheckBox(scrollAreaWidgetContents);
        checkVisiblePrintableLayersCheckBox->setObjectName(QStringLiteral("checkVisiblePrintableLayersCheckBox"));

        verticalLayout_2->addWidget(checkVisiblePrintableLayersCheckBox);

        checkNonPrintableLayersCheckBox = new QCheckBox(scrollAreaWidgetContents);
        checkNonPrintableLayersCheckBox->setObjectName(QStringLiteral("checkNonPrintableLayersCheckBox"));

        verticalLayout_2->addWidget(checkNonPrintableLayersCheckBox);

        checkAppliedMasterPageLocationCheckBox = new QCheckBox(scrollAreaWidgetContents);
        checkAppliedMasterPageLocationCheckBox->setObjectName(QStringLiteral("checkAppliedMasterPageLocationCheckBox"));

        verticalLayout_2->addWidget(checkAppliedMasterPageLocationCheckBox);

        verticalSpacer_2 = new QSpacerItem(20, 124, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(Prefs_PreflightVerifier);

        QMetaObject::connectSlotsByName(Prefs_PreflightVerifier);
    } // setupUi

    void retranslateUi(QWidget *Prefs_PreflightVerifier)
    {
        Prefs_PreflightVerifier->setWindowTitle(QApplication::translate("Prefs_PreflightVerifier", "Form", 0));
        label->setText(QApplication::translate("Prefs_PreflightVerifier", "Preflight Verifier", 0));
        showPagesWithoutErrorsCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Show pages without errors", 0));
        showNonPrintingLayerErrorsCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Show errors for items on layers that will not print", 0));
        label_6->setText(QApplication::translate("Prefs_PreflightVerifier", "Profile Setup", 0));
        label_2->setText(QApplication::translate("Prefs_PreflightVerifier", "Output Profile:", 0));
        addProfilePushButton->setText(QApplication::translate("Prefs_PreflightVerifier", "Add New Profile", 0));
        removeProfilePushButton->setText(QApplication::translate("Prefs_PreflightVerifier", "Remove Profile", 0));
        label_3->setText(QApplication::translate("Prefs_PreflightVerifier", "Profile Options", 0));
        ignoreAllErrorsCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Ignore all errors", 0));
        autoCheckBeforePrintExportCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Automatic check before printing or exporting", 0));
        checkMissingGlyphsCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Check for missing glyphs", 0));
        checkItemsNotOnAPageCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Check for items not on a page", 0));
        checkEmptyTextFramesCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Check for empty text frames", 0));
        checkTextOverflowCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Check for overflow in text frames", 0));
        checkTransparenciesCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Check for used transparencies", 0));
        checkMissingImagesCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Check for missing images", 0));
        checkPartFilledImageFramesCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Check for part filled image frames", 0));
        checkImageResolutionCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Check image resolution", 0));
        label_4->setText(QApplication::translate("Prefs_PreflightVerifier", "Minimum Resolution:", 0));
        minimumResolutionSpinBox->setSuffix(QApplication::translate("Prefs_PreflightVerifier", " dpi", 0));
        maximumResolutionSpinBox->setSuffix(QApplication::translate("Prefs_PreflightVerifier", " dpi", 0));
        label_5->setText(QApplication::translate("Prefs_PreflightVerifier", "Maximum Resolution:", 0));
        checkPlacedPDFCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Check for placed PDF files", 0));
        checkGIFsCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Check for GIF images", 0));
        checkPDFAnnotFieldsCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Check for PDF Annotations and Fields", 0));
        checkVisiblePrintableLayersCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Check for Visible/Printable mismatch in layers", 0));
        checkNonPrintableLayersCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Ignore non-printable layers", 0));
        checkAppliedMasterPageLocationCheckBox->setText(QApplication::translate("Prefs_PreflightVerifier", "Check if applied master page location is the same as each page's location", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_PreflightVerifier: public Ui_Prefs_PreflightVerifier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_PREFLIGHTVERIFIERBASE_H
