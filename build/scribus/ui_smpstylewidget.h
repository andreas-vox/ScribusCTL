/********************************************************************************
** Form generated from reading UI file 'smpstylewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMPSTYLEWIDGET_H
#define UI_SMPSTYLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/smalignselect.h"
#include "ui/smcheckbox.h"
#include "ui/smcstylewidget.h"
#include "ui/smradiobutton.h"
#include "ui/smsccombobox.h"
#include "ui/smscrspinbox.h"
#include "ui/smspinbox.h"
#include "ui/smtabruler.h"

QT_BEGIN_NAMESPACE

class Ui_SMPStyleWidget
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *hboxLayout;
    QLabel *parentLabel;
    QComboBox *parentCombo;
    QGridLayout *gridLayout;
    QGroupBox *distancesBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *hboxLayout1;
    SMAlignSelect *alignment;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout2;
    QLabel *lineSpacingLabel;
    SMScComboBox *lineSpacingMode;
    SMScrSpinBox *lineSpacing;
    QSpacerItem *spacerItem1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *spaceAboveLabel;
    SMScrSpinBox *spaceAbove;
    QSpacerItem *spacerItem2;
    QLabel *spaceBelowLabel;
    SMScrSpinBox *spaceBelow;
    QSpacerItem *spacerItem3;
    QGroupBox *textFlowBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *keepLabelStart;
    SMSpinBox *keepLinesStart;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_14;
    QLabel *keepLabelEnd;
    SMSpinBox *keepLinesEnd;
    QSpacerItem *horizontalSpacer_6;
    SMCheckBox *keepTogether;
    SMCheckBox *keepWithNext;
    QGroupBox *opticalMarginsGroupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *optMarginDefaultButton;
    QPushButton *optMarginParentButton;
    QGridLayout *gridLayout_5;
    SMRadioButton *optMarginRadioBoth;
    SMRadioButton *optMarginRadioNone;
    SMRadioButton *optMarginRadioLeft;
    SMRadioButton *optMarginRadioRight;
    QGroupBox *advSettingsGroupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLabel *minSpaceLabel;
    SMScrSpinBox *minSpaceSpin;
    QLabel *glyphExtensionLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *minGlyphExtLabel;
    SMScrSpinBox *minGlyphExtSpin;
    QHBoxLayout *horizontalLayout_3;
    QLabel *maxGlyphExtLabel;
    SMScrSpinBox *maxGlyphExtSpin;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *tabsBox;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout3;
    SMTabruler *tabList;
    QSpacerItem *spacerItem4;
    QSpacerItem *verticalSpacer;
    QWidget *tabParagraphEffects;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *bulletBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *bulletCharLabel;
    SMScComboBox *bulletStrEdit;
    QSpacerItem *spacer;
    QPushButton *bulletCharTableButton;
    QSpacerItem *spacer_2;
    QGroupBox *numBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *numComboLabel;
    SMScComboBox *numComboBox;
    QLabel *numLevelLabel;
    SMSpinBox *numLevelSpin;
    QSpacerItem *horizontalSpacer_4;
    QLabel *numNewLabel;
    QLineEdit *numNewLineEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *numFormatLabel;
    SMScComboBox *numFormatCombo;
    QLabel *numStartLabel;
    SMSpinBox *numStartSpin;
    QLabel *numPrefixLabel;
    QLineEdit *numPrefix;
    QLabel *numSuffixLabel;
    QLineEdit *numSuffix;
    QHBoxLayout *horizontalLayout_8;
    QLabel *numRestartLabel;
    SMScComboBox *numRestartCombo;
    QSpacerItem *horizontalSpacer_3;
    SMCheckBox *numRestartOtherBox;
    SMCheckBox *numRestartHigherBox;
    QGroupBox *dropCapsBox;
    QVBoxLayout *_2;
    QHBoxLayout *_3;
    QLabel *dropCapsLineLabel;
    SMSpinBox *dropCapLines;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *parEffectCharStyleComboLabel;
    SMScComboBox *parEffectCharStyleCombo;
    QSpacerItem *spacer_6;
    QLabel *distFromTextLabel;
    SMScrSpinBox *parEffectOffset;
    QSpacerItem *spacerItem5;
    SMCheckBox *parEffectIndentBox;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *spacer_10;
    QToolButton *parentParEffectsButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabCharacterStyle;
    QVBoxLayout *vboxLayout2;
    QFrame *characterBox;
    QGridLayout *gridLayout1;
    SMCStyleWidget *cpage;

    void setupUi(QWidget *SMPStyleWidget)
    {
        if (SMPStyleWidget->objectName().isEmpty())
            SMPStyleWidget->setObjectName(QStringLiteral("SMPStyleWidget"));
        SMPStyleWidget->resize(695, 522);
        vboxLayout = new QVBoxLayout(SMPStyleWidget);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(5, 5, 5, 5);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        tabWidget = new QTabWidget(SMPStyleWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        parentLabel = new QLabel(tab);
        parentLabel->setObjectName(QStringLiteral("parentLabel"));
        parentLabel->setWordWrap(false);

        hboxLayout->addWidget(parentLabel);

        parentCombo = new QComboBox(tab);
        parentCombo->setObjectName(QStringLiteral("parentCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(parentCombo->sizePolicy().hasHeightForWidth());
        parentCombo->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(parentCombo);


        verticalLayout_4->addLayout(hboxLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        distancesBox = new QGroupBox(tab);
        distancesBox->setObjectName(QStringLiteral("distancesBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(distancesBox->sizePolicy().hasHeightForWidth());
        distancesBox->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(distancesBox);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        alignment = new SMAlignSelect(distancesBox);
        alignment->setObjectName(QStringLiteral("alignment"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(alignment->sizePolicy().hasHeightForWidth());
        alignment->setSizePolicy(sizePolicy2);

        hboxLayout1->addWidget(alignment);

        spacerItem = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        verticalLayout_2->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(5);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        lineSpacingLabel = new QLabel(distancesBox);
        lineSpacingLabel->setObjectName(QStringLiteral("lineSpacingLabel"));
        lineSpacingLabel->setMaximumSize(QSize(22, 22));

        hboxLayout2->addWidget(lineSpacingLabel);

        lineSpacingMode = new SMScComboBox(distancesBox);
        lineSpacingMode->setObjectName(QStringLiteral("lineSpacingMode"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineSpacingMode->sizePolicy().hasHeightForWidth());
        lineSpacingMode->setSizePolicy(sizePolicy3);

        hboxLayout2->addWidget(lineSpacingMode);

        lineSpacing = new SMScrSpinBox(distancesBox);
        lineSpacing->setObjectName(QStringLiteral("lineSpacing"));
        lineSpacing->setMinimum(1);
        lineSpacing->setMaximum(300);

        hboxLayout2->addWidget(lineSpacing);

        spacerItem1 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);


        verticalLayout_2->addLayout(hboxLayout2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        spaceAboveLabel = new QLabel(distancesBox);
        spaceAboveLabel->setObjectName(QStringLiteral("spaceAboveLabel"));
        spaceAboveLabel->setMaximumSize(QSize(22, 22));

        horizontalLayout_5->addWidget(spaceAboveLabel);

        spaceAbove = new SMScrSpinBox(distancesBox);
        spaceAbove->setObjectName(QStringLiteral("spaceAbove"));
        spaceAbove->setMaximum(300);

        horizontalLayout_5->addWidget(spaceAbove);

        spacerItem2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(spacerItem2);

        spaceBelowLabel = new QLabel(distancesBox);
        spaceBelowLabel->setObjectName(QStringLiteral("spaceBelowLabel"));
        spaceBelowLabel->setMaximumSize(QSize(22, 22));

        horizontalLayout_5->addWidget(spaceBelowLabel);

        spaceBelow = new SMScrSpinBox(distancesBox);
        spaceBelow->setObjectName(QStringLiteral("spaceBelow"));
        spaceBelow->setMaximum(300);

        horizontalLayout_5->addWidget(spaceBelow);

        spacerItem3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(spacerItem3);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout->addWidget(distancesBox, 0, 0, 1, 1);

        textFlowBox = new QGroupBox(tab);
        textFlowBox->setObjectName(QStringLiteral("textFlowBox"));
        sizePolicy1.setHeightForWidth(textFlowBox->sizePolicy().hasHeightForWidth());
        textFlowBox->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(textFlowBox);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(5);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        keepLabelStart = new QLabel(textFlowBox);
        keepLabelStart->setObjectName(QStringLiteral("keepLabelStart"));

        horizontalLayout_11->addWidget(keepLabelStart);

        keepLinesStart = new SMSpinBox(textFlowBox);
        keepLinesStart->setObjectName(QStringLiteral("keepLinesStart"));
        keepLinesStart->setMaximum(10);

        horizontalLayout_11->addWidget(keepLinesStart);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(5);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        keepLabelEnd = new QLabel(textFlowBox);
        keepLabelEnd->setObjectName(QStringLiteral("keepLabelEnd"));

        horizontalLayout_14->addWidget(keepLabelEnd);

        keepLinesEnd = new SMSpinBox(textFlowBox);
        keepLinesEnd->setObjectName(QStringLiteral("keepLinesEnd"));
        keepLinesEnd->setMaximum(10);

        horizontalLayout_14->addWidget(keepLinesEnd);

        horizontalSpacer_6 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_14);

        keepTogether = new SMCheckBox(textFlowBox);
        keepTogether->setObjectName(QStringLiteral("keepTogether"));

        verticalLayout_3->addWidget(keepTogether);

        keepWithNext = new SMCheckBox(textFlowBox);
        keepWithNext->setObjectName(QStringLiteral("keepWithNext"));

        verticalLayout_3->addWidget(keepWithNext);


        gridLayout->addWidget(textFlowBox, 0, 1, 1, 1);

        opticalMarginsGroupBox = new QGroupBox(tab);
        opticalMarginsGroupBox->setObjectName(QStringLiteral("opticalMarginsGroupBox"));
        gridLayout_3 = new QGridLayout(opticalMarginsGroupBox);
        gridLayout_3->setSpacing(5);
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        optMarginDefaultButton = new QPushButton(opticalMarginsGroupBox);
        optMarginDefaultButton->setObjectName(QStringLiteral("optMarginDefaultButton"));

        horizontalLayout_4->addWidget(optMarginDefaultButton);

        optMarginParentButton = new QPushButton(opticalMarginsGroupBox);
        optMarginParentButton->setObjectName(QStringLiteral("optMarginParentButton"));

        horizontalLayout_4->addWidget(optMarginParentButton);


        gridLayout_3->addLayout(horizontalLayout_4, 6, 0, 1, 2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(5);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        optMarginRadioBoth = new SMRadioButton(opticalMarginsGroupBox);
        optMarginRadioBoth->setObjectName(QStringLiteral("optMarginRadioBoth"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(optMarginRadioBoth->sizePolicy().hasHeightForWidth());
        optMarginRadioBoth->setSizePolicy(sizePolicy4);

        gridLayout_5->addWidget(optMarginRadioBoth, 0, 1, 1, 1);

        optMarginRadioNone = new SMRadioButton(opticalMarginsGroupBox);
        optMarginRadioNone->setObjectName(QStringLiteral("optMarginRadioNone"));
        sizePolicy4.setHeightForWidth(optMarginRadioNone->sizePolicy().hasHeightForWidth());
        optMarginRadioNone->setSizePolicy(sizePolicy4);
        optMarginRadioNone->setChecked(true);

        gridLayout_5->addWidget(optMarginRadioNone, 0, 0, 1, 1);

        optMarginRadioLeft = new SMRadioButton(opticalMarginsGroupBox);
        optMarginRadioLeft->setObjectName(QStringLiteral("optMarginRadioLeft"));

        gridLayout_5->addWidget(optMarginRadioLeft, 1, 0, 1, 1);

        optMarginRadioRight = new SMRadioButton(opticalMarginsGroupBox);
        optMarginRadioRight->setObjectName(QStringLiteral("optMarginRadioRight"));
        sizePolicy4.setHeightForWidth(optMarginRadioRight->sizePolicy().hasHeightForWidth());
        optMarginRadioRight->setSizePolicy(sizePolicy4);

        gridLayout_5->addWidget(optMarginRadioRight, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_5, 1, 0, 1, 2);


        gridLayout->addWidget(opticalMarginsGroupBox, 1, 0, 1, 1);

        advSettingsGroupBox = new QGroupBox(tab);
        advSettingsGroupBox->setObjectName(QStringLiteral("advSettingsGroupBox"));
        advSettingsGroupBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(advSettingsGroupBox->sizePolicy().hasHeightForWidth());
        advSettingsGroupBox->setSizePolicy(sizePolicy1);
        advSettingsGroupBox->setMinimumSize(QSize(0, 0));
        verticalLayout_7 = new QVBoxLayout(advSettingsGroupBox);
        verticalLayout_7->setSpacing(5);
        verticalLayout_7->setContentsMargins(5, 5, 5, 5);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(5);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        minSpaceLabel = new QLabel(advSettingsGroupBox);
        minSpaceLabel->setObjectName(QStringLiteral("minSpaceLabel"));

        gridLayout_2->addWidget(minSpaceLabel, 0, 0, 1, 1);

        minSpaceSpin = new SMScrSpinBox(advSettingsGroupBox);
        minSpaceSpin->setObjectName(QStringLiteral("minSpaceSpin"));
        minSpaceSpin->setMinimumSize(QSize(0, 0));
        minSpaceSpin->setBaseSize(QSize(0, 0));

        gridLayout_2->addWidget(minSpaceSpin, 0, 1, 1, 1);

        glyphExtensionLabel = new QLabel(advSettingsGroupBox);
        glyphExtensionLabel->setObjectName(QStringLiteral("glyphExtensionLabel"));

        gridLayout_2->addWidget(glyphExtensionLabel, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minGlyphExtLabel = new QLabel(advSettingsGroupBox);
        minGlyphExtLabel->setObjectName(QStringLiteral("minGlyphExtLabel"));

        horizontalLayout_2->addWidget(minGlyphExtLabel);

        minGlyphExtSpin = new SMScrSpinBox(advSettingsGroupBox);
        minGlyphExtSpin->setObjectName(QStringLiteral("minGlyphExtSpin"));
        minGlyphExtSpin->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(minGlyphExtSpin);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        maxGlyphExtLabel = new QLabel(advSettingsGroupBox);
        maxGlyphExtLabel->setObjectName(QStringLiteral("maxGlyphExtLabel"));

        horizontalLayout_3->addWidget(maxGlyphExtLabel);

        maxGlyphExtSpin = new SMScrSpinBox(advSettingsGroupBox);
        maxGlyphExtSpin->setObjectName(QStringLiteral("maxGlyphExtSpin"));
        maxGlyphExtSpin->setMinimumSize(QSize(0, 0));

        horizontalLayout_3->addWidget(maxGlyphExtSpin);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        horizontalSpacer_7 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);


        gridLayout->addWidget(advSettingsGroupBox, 1, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        tabsBox = new QGroupBox(tab);
        tabsBox->setObjectName(QStringLiteral("tabsBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(tabsBox->sizePolicy().hasHeightForWidth());
        tabsBox->setSizePolicy(sizePolicy5);
        vboxLayout1 = new QVBoxLayout(tabsBox);
        vboxLayout1->setSpacing(5);
        vboxLayout1->setContentsMargins(5, 5, 5, 5);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(5);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        tabList = new SMTabruler(tabsBox);
        tabList->setObjectName(QStringLiteral("tabList"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(tabList->sizePolicy().hasHeightForWidth());
        tabList->setSizePolicy(sizePolicy6);

        hboxLayout3->addWidget(tabList);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem4);


        vboxLayout1->addLayout(hboxLayout3);


        verticalLayout_4->addWidget(tabsBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tabParagraphEffects = new QWidget();
        tabParagraphEffects->setObjectName(QStringLiteral("tabParagraphEffects"));
        verticalLayout_6 = new QVBoxLayout(tabParagraphEffects);
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setContentsMargins(5, 5, 5, 5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        bulletBox = new QGroupBox(tabParagraphEffects);
        bulletBox->setObjectName(QStringLiteral("bulletBox"));
        sizePolicy1.setHeightForWidth(bulletBox->sizePolicy().hasHeightForWidth());
        bulletBox->setSizePolicy(sizePolicy1);
        bulletBox->setCheckable(true);
        bulletBox->setChecked(false);
        verticalLayout = new QVBoxLayout(bulletBox);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        bulletCharLabel = new QLabel(bulletBox);
        bulletCharLabel->setObjectName(QStringLiteral("bulletCharLabel"));

        horizontalLayout_7->addWidget(bulletCharLabel);

        bulletStrEdit = new SMScComboBox(bulletBox);
        bulletStrEdit->setObjectName(QStringLiteral("bulletStrEdit"));
        sizePolicy3.setHeightForWidth(bulletStrEdit->sizePolicy().hasHeightForWidth());
        bulletStrEdit->setSizePolicy(sizePolicy3);
        bulletStrEdit->setMinimumSize(QSize(50, 0));
        bulletStrEdit->setEditable(true);

        horizontalLayout_7->addWidget(bulletStrEdit);

        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(spacer);

        bulletCharTableButton = new QPushButton(bulletBox);
        bulletCharTableButton->setObjectName(QStringLiteral("bulletCharTableButton"));
        sizePolicy3.setHeightForWidth(bulletCharTableButton->sizePolicy().hasHeightForWidth());
        bulletCharTableButton->setSizePolicy(sizePolicy3);
        bulletCharTableButton->setCheckable(true);

        horizontalLayout_7->addWidget(bulletCharTableButton);

        spacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(spacer_2);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_6->addWidget(bulletBox);

        numBox = new QGroupBox(tabParagraphEffects);
        numBox->setObjectName(QStringLiteral("numBox"));
        sizePolicy1.setHeightForWidth(numBox->sizePolicy().hasHeightForWidth());
        numBox->setSizePolicy(sizePolicy1);
        numBox->setCheckable(true);
        numBox->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(numBox);
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(5);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        numComboLabel = new QLabel(numBox);
        numComboLabel->setObjectName(QStringLiteral("numComboLabel"));

        horizontalLayout_9->addWidget(numComboLabel);

        numComboBox = new SMScComboBox(numBox);
        numComboBox->setObjectName(QStringLiteral("numComboBox"));
        numComboBox->setMinimumContentsLength(10);

        horizontalLayout_9->addWidget(numComboBox);

        numLevelLabel = new QLabel(numBox);
        numLevelLabel->setObjectName(QStringLiteral("numLevelLabel"));

        horizontalLayout_9->addWidget(numLevelLabel);

        numLevelSpin = new SMSpinBox(numBox);
        numLevelSpin->setObjectName(QStringLiteral("numLevelSpin"));

        horizontalLayout_9->addWidget(numLevelSpin);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        numNewLabel = new QLabel(numBox);
        numNewLabel->setObjectName(QStringLiteral("numNewLabel"));

        horizontalLayout_9->addWidget(numNewLabel);

        numNewLineEdit = new QLineEdit(numBox);
        numNewLineEdit->setObjectName(QStringLiteral("numNewLineEdit"));

        horizontalLayout_9->addWidget(numNewLineEdit);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(5);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        numFormatLabel = new QLabel(numBox);
        numFormatLabel->setObjectName(QStringLiteral("numFormatLabel"));

        horizontalLayout_10->addWidget(numFormatLabel);

        numFormatCombo = new SMScComboBox(numBox);
        numFormatCombo->setObjectName(QStringLiteral("numFormatCombo"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(numFormatCombo->sizePolicy().hasHeightForWidth());
        numFormatCombo->setSizePolicy(sizePolicy7);

        horizontalLayout_10->addWidget(numFormatCombo);

        numStartLabel = new QLabel(numBox);
        numStartLabel->setObjectName(QStringLiteral("numStartLabel"));

        horizontalLayout_10->addWidget(numStartLabel);

        numStartSpin = new SMSpinBox(numBox);
        numStartSpin->setObjectName(QStringLiteral("numStartSpin"));
        numStartSpin->setMaximum(99999);
        numStartSpin->setValue(1);

        horizontalLayout_10->addWidget(numStartSpin);

        numPrefixLabel = new QLabel(numBox);
        numPrefixLabel->setObjectName(QStringLiteral("numPrefixLabel"));

        horizontalLayout_10->addWidget(numPrefixLabel);

        numPrefix = new QLineEdit(numBox);
        numPrefix->setObjectName(QStringLiteral("numPrefix"));

        horizontalLayout_10->addWidget(numPrefix);

        numSuffixLabel = new QLabel(numBox);
        numSuffixLabel->setObjectName(QStringLiteral("numSuffixLabel"));

        horizontalLayout_10->addWidget(numSuffixLabel);

        numSuffix = new QLineEdit(numBox);
        numSuffix->setObjectName(QStringLiteral("numSuffix"));

        horizontalLayout_10->addWidget(numSuffix);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(5);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        numRestartLabel = new QLabel(numBox);
        numRestartLabel->setObjectName(QStringLiteral("numRestartLabel"));

        horizontalLayout_8->addWidget(numRestartLabel);

        numRestartCombo = new SMScComboBox(numBox);
        numRestartCombo->setObjectName(QStringLiteral("numRestartCombo"));

        horizontalLayout_8->addWidget(numRestartCombo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        numRestartOtherBox = new SMCheckBox(numBox);
        numRestartOtherBox->setObjectName(QStringLiteral("numRestartOtherBox"));

        horizontalLayout_8->addWidget(numRestartOtherBox);

        numRestartHigherBox = new SMCheckBox(numBox);
        numRestartHigherBox->setObjectName(QStringLiteral("numRestartHigherBox"));

        horizontalLayout_8->addWidget(numRestartHigherBox);


        verticalLayout_5->addLayout(horizontalLayout_8);


        verticalLayout_6->addWidget(numBox);

        dropCapsBox = new QGroupBox(tabParagraphEffects);
        dropCapsBox->setObjectName(QStringLiteral("dropCapsBox"));
        sizePolicy1.setHeightForWidth(dropCapsBox->sizePolicy().hasHeightForWidth());
        dropCapsBox->setSizePolicy(sizePolicy1);
        dropCapsBox->setCheckable(true);
        dropCapsBox->setChecked(true);
        _2 = new QVBoxLayout(dropCapsBox);
        _2->setSpacing(5);
        _2->setContentsMargins(5, 5, 5, 5);
        _2->setObjectName(QStringLiteral("_2"));
        _3 = new QHBoxLayout();
        _3->setSpacing(5);
        _3->setObjectName(QStringLiteral("_3"));
        dropCapsLineLabel = new QLabel(dropCapsBox);
        dropCapsLineLabel->setObjectName(QStringLiteral("dropCapsLineLabel"));

        _3->addWidget(dropCapsLineLabel);

        dropCapLines = new SMSpinBox(dropCapsBox);
        dropCapLines->setObjectName(QStringLiteral("dropCapLines"));
        dropCapLines->setMinimum(2);
        dropCapLines->setMaximum(20);

        _3->addWidget(dropCapLines);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(horizontalSpacer_2);


        _2->addLayout(_3);


        verticalLayout_6->addWidget(dropCapsBox);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(5);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        parEffectCharStyleComboLabel = new QLabel(tabParagraphEffects);
        parEffectCharStyleComboLabel->setObjectName(QStringLiteral("parEffectCharStyleComboLabel"));

        horizontalLayout_12->addWidget(parEffectCharStyleComboLabel);

        parEffectCharStyleCombo = new SMScComboBox(tabParagraphEffects);
        parEffectCharStyleCombo->setObjectName(QStringLiteral("parEffectCharStyleCombo"));

        horizontalLayout_12->addWidget(parEffectCharStyleCombo);

        spacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(spacer_6);

        distFromTextLabel = new QLabel(tabParagraphEffects);
        distFromTextLabel->setObjectName(QStringLiteral("distFromTextLabel"));

        horizontalLayout_12->addWidget(distFromTextLabel);

        parEffectOffset = new SMScrSpinBox(tabParagraphEffects);
        parEffectOffset->setObjectName(QStringLiteral("parEffectOffset"));
        parEffectOffset->setMinimum(-3000);
        parEffectOffset->setMaximum(3000);

        horizontalLayout_12->addWidget(parEffectOffset);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(spacerItem5);

        parEffectIndentBox = new SMCheckBox(tabParagraphEffects);
        parEffectIndentBox->setObjectName(QStringLiteral("parEffectIndentBox"));

        horizontalLayout_12->addWidget(parEffectIndentBox);


        verticalLayout_6->addLayout(horizontalLayout_12);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(5);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        spacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(spacer_10);

        parentParEffectsButton = new QToolButton(tabParagraphEffects);
        parentParEffectsButton->setObjectName(QStringLiteral("parentParEffectsButton"));
        parentParEffectsButton->setEnabled(true);

        horizontalLayout_15->addWidget(parentParEffectsButton);


        verticalLayout_6->addLayout(horizontalLayout_15);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        tabWidget->addTab(tabParagraphEffects, QString());
        dropCapsBox->raise();
        numBox->raise();
        bulletBox->raise();
        tabCharacterStyle = new QWidget();
        tabCharacterStyle->setObjectName(QStringLiteral("tabCharacterStyle"));
        vboxLayout2 = new QVBoxLayout(tabCharacterStyle);
        vboxLayout2->setSpacing(5);
        vboxLayout2->setContentsMargins(5, 5, 5, 5);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        characterBox = new QFrame(tabCharacterStyle);
        characterBox->setObjectName(QStringLiteral("characterBox"));
        characterBox->setEnabled(true);
        characterBox->setFrameShape(QFrame::NoFrame);
        characterBox->setFrameShadow(QFrame::Plain);
        characterBox->setLineWidth(0);
        gridLayout1 = new QGridLayout(characterBox);
        gridLayout1->setSpacing(5);
        gridLayout1->setContentsMargins(5, 5, 5, 5);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        cpage = new SMCStyleWidget(characterBox);
        cpage->setObjectName(QStringLiteral("cpage"));

        gridLayout1->addWidget(cpage, 0, 0, 1, 1);


        vboxLayout2->addWidget(characterBox);

        tabWidget->addTab(tabCharacterStyle, QString());

        vboxLayout->addWidget(tabWidget);

#ifndef QT_NO_SHORTCUT
        lineSpacingLabel->setBuddy(lineSpacingMode);
        spaceAboveLabel->setBuddy(spaceAbove);
        spaceBelowLabel->setBuddy(spaceBelow);
        minSpaceLabel->setBuddy(minSpaceSpin);
        minGlyphExtLabel->setBuddy(minGlyphExtSpin);
        maxGlyphExtLabel->setBuddy(maxGlyphExtSpin);
        numFormatLabel->setBuddy(numFormatCombo);
        dropCapsLineLabel->setBuddy(dropCapLines);
        distFromTextLabel->setBuddy(parEffectOffset);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, parentCombo);
        QWidget::setTabOrder(parentCombo, lineSpacingMode);
        QWidget::setTabOrder(lineSpacingMode, lineSpacing);
        QWidget::setTabOrder(lineSpacing, spaceAbove);
        QWidget::setTabOrder(spaceAbove, spaceBelow);
        QWidget::setTabOrder(spaceBelow, keepLinesStart);
        QWidget::setTabOrder(keepLinesStart, keepLinesEnd);
        QWidget::setTabOrder(keepLinesEnd, keepTogether);
        QWidget::setTabOrder(keepTogether, keepWithNext);
        QWidget::setTabOrder(keepWithNext, optMarginRadioNone);
        QWidget::setTabOrder(optMarginRadioNone, optMarginRadioBoth);
        QWidget::setTabOrder(optMarginRadioBoth, optMarginRadioLeft);
        QWidget::setTabOrder(optMarginRadioLeft, optMarginRadioRight);
        QWidget::setTabOrder(optMarginRadioRight, optMarginDefaultButton);
        QWidget::setTabOrder(optMarginDefaultButton, optMarginParentButton);
        QWidget::setTabOrder(optMarginParentButton, minSpaceSpin);
        QWidget::setTabOrder(minSpaceSpin, minGlyphExtSpin);
        QWidget::setTabOrder(minGlyphExtSpin, maxGlyphExtSpin);
        QWidget::setTabOrder(maxGlyphExtSpin, bulletBox);
        QWidget::setTabOrder(bulletBox, bulletStrEdit);
        QWidget::setTabOrder(bulletStrEdit, bulletCharTableButton);
        QWidget::setTabOrder(bulletCharTableButton, numBox);
        QWidget::setTabOrder(numBox, numComboBox);
        QWidget::setTabOrder(numComboBox, numLevelSpin);
        QWidget::setTabOrder(numLevelSpin, numNewLineEdit);
        QWidget::setTabOrder(numNewLineEdit, numFormatCombo);
        QWidget::setTabOrder(numFormatCombo, numStartSpin);
        QWidget::setTabOrder(numStartSpin, numPrefix);
        QWidget::setTabOrder(numPrefix, numSuffix);
        QWidget::setTabOrder(numSuffix, numRestartCombo);
        QWidget::setTabOrder(numRestartCombo, numRestartOtherBox);
        QWidget::setTabOrder(numRestartOtherBox, numRestartHigherBox);
        QWidget::setTabOrder(numRestartHigherBox, dropCapsBox);
        QWidget::setTabOrder(dropCapsBox, dropCapLines);
        QWidget::setTabOrder(dropCapLines, parEffectCharStyleCombo);
        QWidget::setTabOrder(parEffectCharStyleCombo, parEffectOffset);
        QWidget::setTabOrder(parEffectOffset, parEffectIndentBox);
        QWidget::setTabOrder(parEffectIndentBox, parentParEffectsButton);

        retranslateUi(SMPStyleWidget);

        tabWidget->setCurrentIndex(0);
        numComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SMPStyleWidget);
    } // setupUi

    void retranslateUi(QWidget *SMPStyleWidget)
    {
        parentLabel->setText(QApplication::translate("SMPStyleWidget", "Based On:", 0));
        distancesBox->setTitle(QApplication::translate("SMPStyleWidget", "Alignment and Distances", 0));
        lineSpacingLabel->setText(QApplication::translate("SMPStyleWidget", "TextLabel", 0));
        spaceAboveLabel->setText(QApplication::translate("SMPStyleWidget", "TextLabel", 0));
        spaceBelowLabel->setText(QApplication::translate("SMPStyleWidget", "TextLabel", 0));
        textFlowBox->setTitle(QApplication::translate("SMPStyleWidget", "Orphans and Widows", 0));
#ifndef QT_NO_TOOLTIP
        keepLabelStart->setToolTip(QApplication::translate("SMPStyleWidget", "Ensure that first lines of a paragraph won't end up separated from the rest (known as widow/orphan control)", 0));
#endif // QT_NO_TOOLTIP
        keepLabelStart->setText(QApplication::translate("SMPStyleWidget", "Don't separate first", 0));
        keepLinesStart->setSuffix(QApplication::translate("SMPStyleWidget", " lines", 0));
        keepLabelEnd->setText(QApplication::translate("SMPStyleWidget", "Don't separate last", 0));
        keepLinesEnd->setSuffix(QApplication::translate("SMPStyleWidget", " lines", 0));
        keepTogether->setText(QApplication::translate("SMPStyleWidget", "Do not split paragraph", 0));
        keepWithNext->setText(QApplication::translate("SMPStyleWidget", "Keep with next paragraph", 0));
        opticalMarginsGroupBox->setTitle(QApplication::translate("SMPStyleWidget", "Optical Margins", 0));
        optMarginDefaultButton->setText(QApplication::translate("SMPStyleWidget", "Reset to Default", 0));
        optMarginParentButton->setText(QApplication::translate("SMPStyleWidget", "Use Parent Value", 0));
        optMarginRadioBoth->setText(QApplication::translate("SMPStyleWidget", "Both Sides", 0));
        optMarginRadioNone->setText(QApplication::translate("SMPStyleWidget", "None", 0));
        optMarginRadioLeft->setText(QApplication::translate("SMPStyleWidget", "Left Only", 0));
        optMarginRadioRight->setText(QApplication::translate("SMPStyleWidget", "Right Only", 0));
        advSettingsGroupBox->setTitle(QApplication::translate("SMPStyleWidget", "Advanced Settings", 0));
        minSpaceLabel->setText(QApplication::translate("SMPStyleWidget", "TextLabel", 0));
        glyphExtensionLabel->setText(QApplication::translate("SMPStyleWidget", "TextLabel", 0));
        minGlyphExtLabel->setText(QApplication::translate("SMPStyleWidget", "TextLabel", 0));
        maxGlyphExtLabel->setText(QApplication::translate("SMPStyleWidget", "TextLabel", 0));
        tabsBox->setTitle(QApplication::translate("SMPStyleWidget", "Tabulators and Indentation", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SMPStyleWidget", "Properties", 0));
        bulletBox->setTitle(QApplication::translate("SMPStyleWidget", "Bullets", 0));
        bulletCharLabel->setText(QApplication::translate("SMPStyleWidget", "Bullet Char/String", 0));
        bulletCharTableButton->setText(QApplication::translate("SMPStyleWidget", "Char Table", 0));
        numBox->setTitle(QApplication::translate("SMPStyleWidget", "Numeration", 0));
        numComboLabel->setText(QApplication::translate("SMPStyleWidget", "Set:", 0));
        numLevelLabel->setText(QApplication::translate("SMPStyleWidget", "Level", 0));
        numNewLabel->setText(QApplication::translate("SMPStyleWidget", "Create New Set:", 0));
        numFormatLabel->setText(QApplication::translate("SMPStyleWidget", "Nums Format", 0));
        numStartLabel->setText(QApplication::translate("SMPStyleWidget", "Start with", 0));
        numPrefixLabel->setText(QApplication::translate("SMPStyleWidget", "Prefix", 0));
        numSuffixLabel->setText(QApplication::translate("SMPStyleWidget", "Suffix", 0));
        numRestartLabel->setText(QApplication::translate("SMPStyleWidget", "Restart", 0));
        numRestartOtherBox->setText(QApplication::translate("SMPStyleWidget", "Restart after other format", 0));
        numRestartHigherBox->setText(QApplication::translate("SMPStyleWidget", "Restart after higher level", 0));
        dropCapsBox->setTitle(QApplication::translate("SMPStyleWidget", "Drop Caps", 0));
        dropCapsLineLabel->setText(QApplication::translate("SMPStyleWidget", "&Lines:", 0));
        parEffectCharStyleComboLabel->setText(QApplication::translate("SMPStyleWidget", "Character Style for Effect:", 0));
        distFromTextLabel->setText(QApplication::translate("SMPStyleWidget", "Distance from Text:", 0));
        parEffectIndentBox->setText(QApplication::translate("SMPStyleWidget", "AutoIndent", 0));
        parentParEffectsButton->setText(QApplication::translate("SMPStyleWidget", "Use Parent's Values", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabParagraphEffects), QApplication::translate("SMPStyleWidget", "Paragraph Effects", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabCharacterStyle), QApplication::translate("SMPStyleWidget", "Ch&aracter Style", 0));
        Q_UNUSED(SMPStyleWidget);
    } // retranslateUi

};

namespace Ui {
    class SMPStyleWidget: public Ui_SMPStyleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMPSTYLEWIDGET_H
