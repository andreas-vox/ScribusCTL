/********************************************************************************
** Form generated from reading UI file 'tabpdfoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABPDFOPTIONS_H
#define UI_TABPDFOPTIONS_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_TabPDFOptions
{
public:
    QWidget *tabGeneral;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *RangeGroup;
    QVBoxLayout *rangeGroupLayout;
    QRadioButton *AllPages;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *PageNr;
    QPushButton *pageNrButton;
    QRadioButton *OnlySome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *rotationLabel;
    QComboBox *RotateDeg;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *MirrorH;
    QToolButton *MirrorV;
    QCheckBox *ClipMarg;
    QGroupBox *groupBox_2;
    QGridLayout *fileOptionsLayout;
    QLabel *label;
    QComboBox *PDFVersionCombo;
    QLabel *label_2;
    QComboBox *ComboBind;
    QCheckBox *CheckBox1;
    QSpinBox *Resolution;
    QCheckBox *CheckBM;
    QCheckBox *Article;
    QCheckBox *useLayers;
    QLabel *label_3;
    QCheckBox *EmbedPDF;
    QCheckBox *Compression;
    QGroupBox *groupBox;
    QGridLayout *imageQualityLayout;
    QLabel *label_4;
    QComboBox *CMethod;
    QLabel *label_5;
    QComboBox *CQuality;
    QSpinBox *ValC;
    QCheckBox *DSColor;
    QWidget *tabFonts;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupFont;
    QHBoxLayout *groupFontLayout;
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
    QWidget *tabPresentation;
    QGridLayout *gridLayout_4;
    QCheckBox *CheckBox10;
    QListWidget *Pages;
    QCheckBox *PagePrev;
    QGroupBox *Effects;
    QGridLayout *effectsLayout;
    QComboBox *EDirection_2_2;
    QLabel *label_15;
    QLabel *label_13;
    QComboBox *EDirection;
    QComboBox *EffectType;
    QLabel *label_14;
    QComboBox *EDirection_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_10;
    QSpinBox *EffectTime;
    QSpinBox *PageTime;
    QPushButton *EonAllPg;
    QWidget *tabSpecial;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupDisplay;
    QVBoxLayout *groupDisplayLayout;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *pageLayout;
    QVBoxLayout *pageLayoutLayout;
    QRadioButton *singlePage;
    QRadioButton *continuousPages;
    QRadioButton *doublePageLeft;
    QRadioButton *doublePageRight;
    QGroupBox *groupNavigation;
    QVBoxLayout *groupNavigationLayout;
    QRadioButton *useViewDefault;
    QRadioButton *useFullScreen;
    QRadioButton *useBookmarks;
    QRadioButton *useThumbnails;
    QRadioButton *useLayers2;
    QCheckBox *hideToolBar;
    QCheckBox *hideMenuBar;
    QCheckBox *fitWindow;
    QGroupBox *groupJava;
    QHBoxLayout *groupJavaLayout;
    QLabel *actionLabel;
    QComboBox *actionCombo;
    QWidget *tabSecurity;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *Encry;
    QGroupBox *groupPass;
    QGridLayout *groupPassLayout;
    QLabel *TextSec2;
    QLabel *TextSec1;
    QLineEdit *PassOwner;
    QLineEdit *PassUser;
    QGroupBox *groupSecSet;
    QVBoxLayout *groupSecSetLayout;
    QCheckBox *PrintSec;
    QCheckBox *ModifySec;
    QCheckBox *CopySec;
    QCheckBox *AddSec;
    QWidget *tabColor;
    QVBoxLayout *tabColorLayout;
    QGroupBox *ColorGroup;
    QHBoxLayout *colorGroupLayout;
    QLabel *label_16;
    QComboBox *OutCombo;
    QCheckBox *useSpot;
    QCheckBox *UseLPI;
    QGroupBox *LPIgroup;
    QGridLayout *lpiGroupLayout;
    QSpinBox *LPIfreq;
    QLabel *label_18;
    QLabel *label_17;
    QSpinBox *LPIangle;
    QComboBox *LPIcolor;
    QLabel *label_19;
    QComboBox *LPIfunc;
    QGroupBox *solidsProfileGroup;
    QGridLayout *solidColorsGroupLayout;
    QLabel *solidsProfileLabel;
    QCheckBox *EmbedProfs;
    QLabel *solidsIntentLabel;
    QComboBox *SolidPr;
    QComboBox *IntendS;
    QGroupBox *imageProfileGroup;
    QGridLayout *imageProfileGroupLayout;
    QCheckBox *EmbedProfs2;
    QLabel *imageProfileLabel;
    QLabel *imageIntentLabel;
    QCheckBox *NoEmbedded;
    QComboBox *ImageP;
    QComboBox *IntendI;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabPDFX;
    QVBoxLayout *tabPDFXLayout;
    QGroupBox *MarkGroup;
    QGridLayout *markGroupLayout;
    QLabel *label_25;
    QCheckBox *registrationMarks;
    QCheckBox *colorMarks;
    QLabel *label_24;
    QCheckBox *bleedMarks;
    QCheckBox *docInfoMarks;
    QCheckBox *cropMarks;
    ScrSpinBox *markLength;
    ScrSpinBox *markOffset;
    QGroupBox *BleedGroup;
    QGridLayout *bleedGroupLayout;
    QLabel *bleedTopLabel;
    ScrSpinBox *BleedTop;
    QLabel *bleedBottomLabel;
    ScrSpinBox *BleedBottom;
    ScrSpinBox *BleedRight;
    QLabel *bleedLeftLabel;
    ScrSpinBox *BleedLeft;
    QLabel *bleedRightLabel;
    QCheckBox *docBleeds;
    QGroupBox *X3Group;
    QGridLayout *X3GroupLayout;
    QComboBox *PrintProfC;
    QLabel *label_30;
    QLabel *label_31;
    QLineEdit *InfoString;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QTabWidget *TabPDFOptions)
    {
        if (TabPDFOptions->objectName().isEmpty())
            TabPDFOptions->setObjectName(QStringLiteral("TabPDFOptions"));
        TabPDFOptions->resize(657, 531);
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QStringLiteral("tabGeneral"));
        verticalLayout = new QVBoxLayout(tabGeneral);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        RangeGroup = new QGroupBox(tabGeneral);
        RangeGroup->setObjectName(QStringLiteral("RangeGroup"));
        rangeGroupLayout = new QVBoxLayout(RangeGroup);
        rangeGroupLayout->setSpacing(5);
        rangeGroupLayout->setContentsMargins(10, 10, 10, 10);
        rangeGroupLayout->setObjectName(QStringLiteral("rangeGroupLayout"));
        AllPages = new QRadioButton(RangeGroup);
        AllPages->setObjectName(QStringLiteral("AllPages"));

        rangeGroupLayout->addWidget(AllPages);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        PageNr = new QLineEdit(RangeGroup);
        PageNr->setObjectName(QStringLiteral("PageNr"));

        horizontalLayout_2->addWidget(PageNr);

        pageNrButton = new QPushButton(RangeGroup);
        pageNrButton->setObjectName(QStringLiteral("pageNrButton"));

        horizontalLayout_2->addWidget(pageNrButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        OnlySome = new QRadioButton(RangeGroup);
        OnlySome->setObjectName(QStringLiteral("OnlySome"));

        gridLayout->addWidget(OnlySome, 0, 0, 1, 1);


        rangeGroupLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        rotationLabel = new QLabel(RangeGroup);
        rotationLabel->setObjectName(QStringLiteral("rotationLabel"));

        horizontalLayout_3->addWidget(rotationLabel);

        RotateDeg = new QComboBox(RangeGroup);
        RotateDeg->setObjectName(QStringLiteral("RotateDeg"));
        RotateDeg->setEditable(false);

        horizontalLayout_3->addWidget(RotateDeg);


        rangeGroupLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        MirrorH = new QToolButton(RangeGroup);
        MirrorH->setObjectName(QStringLiteral("MirrorH"));
        MirrorH->setCheckable(true);

        horizontalLayout_4->addWidget(MirrorH);

        MirrorV = new QToolButton(RangeGroup);
        MirrorV->setObjectName(QStringLiteral("MirrorV"));
        MirrorV->setCheckable(true);

        horizontalLayout_4->addWidget(MirrorV);


        rangeGroupLayout->addLayout(horizontalLayout_4);

        ClipMarg = new QCheckBox(RangeGroup);
        ClipMarg->setObjectName(QStringLiteral("ClipMarg"));

        rangeGroupLayout->addWidget(ClipMarg);


        horizontalLayout->addWidget(RangeGroup);

        groupBox_2 = new QGroupBox(tabGeneral);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        fileOptionsLayout = new QGridLayout(groupBox_2);
        fileOptionsLayout->setSpacing(5);
        fileOptionsLayout->setContentsMargins(10, 10, 10, 10);
        fileOptionsLayout->setObjectName(QStringLiteral("fileOptionsLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        fileOptionsLayout->addWidget(label, 0, 0, 1, 1);

        PDFVersionCombo = new QComboBox(groupBox_2);
        PDFVersionCombo->setObjectName(QStringLiteral("PDFVersionCombo"));
        PDFVersionCombo->setEditable(false);

        fileOptionsLayout->addWidget(PDFVersionCombo, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        fileOptionsLayout->addWidget(label_2, 1, 0, 1, 1);

        ComboBind = new QComboBox(groupBox_2);
        ComboBind->setObjectName(QStringLiteral("ComboBind"));
        ComboBind->setEditable(false);

        fileOptionsLayout->addWidget(ComboBind, 1, 1, 1, 2);

        CheckBox1 = new QCheckBox(groupBox_2);
        CheckBox1->setObjectName(QStringLiteral("CheckBox1"));

        fileOptionsLayout->addWidget(CheckBox1, 2, 0, 1, 3);

        Resolution = new QSpinBox(groupBox_2);
        Resolution->setObjectName(QStringLiteral("Resolution"));
        Resolution->setMinimum(35);
        Resolution->setMaximum(4000);

        fileOptionsLayout->addWidget(Resolution, 6, 1, 1, 1, Qt::AlignLeft);

        CheckBM = new QCheckBox(groupBox_2);
        CheckBM->setObjectName(QStringLiteral("CheckBM"));

        fileOptionsLayout->addWidget(CheckBM, 4, 0, 1, 3);

        Article = new QCheckBox(groupBox_2);
        Article->setObjectName(QStringLiteral("Article"));

        fileOptionsLayout->addWidget(Article, 3, 0, 1, 3);

        useLayers = new QCheckBox(groupBox_2);
        useLayers->setObjectName(QStringLiteral("useLayers"));

        fileOptionsLayout->addWidget(useLayers, 5, 0, 1, 3);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        fileOptionsLayout->addWidget(label_3, 6, 0, 1, 1);

        EmbedPDF = new QCheckBox(groupBox_2);
        EmbedPDF->setObjectName(QStringLiteral("EmbedPDF"));

        fileOptionsLayout->addWidget(EmbedPDF, 7, 0, 1, 3);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout->addLayout(horizontalLayout);

        Compression = new QCheckBox(tabGeneral);
        Compression->setObjectName(QStringLiteral("Compression"));

        verticalLayout->addWidget(Compression);

        groupBox = new QGroupBox(tabGeneral);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        imageQualityLayout = new QGridLayout(groupBox);
        imageQualityLayout->setSpacing(5);
        imageQualityLayout->setContentsMargins(10, 10, 10, 10);
        imageQualityLayout->setObjectName(QStringLiteral("imageQualityLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        imageQualityLayout->addWidget(label_4, 0, 0, 1, 1);

        CMethod = new QComboBox(groupBox);
        CMethod->setObjectName(QStringLiteral("CMethod"));
        CMethod->setEditable(false);

        imageQualityLayout->addWidget(CMethod, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        imageQualityLayout->addWidget(label_5, 1, 0, 1, 1);

        CQuality = new QComboBox(groupBox);
        CQuality->setObjectName(QStringLiteral("CQuality"));
        CQuality->setEditable(false);

        imageQualityLayout->addWidget(CQuality, 1, 1, 1, 1);

        ValC = new QSpinBox(groupBox);
        ValC->setObjectName(QStringLiteral("ValC"));
        ValC->setMinimum(35);
        ValC->setMaximum(4000);
        ValC->setValue(72);

        imageQualityLayout->addWidget(ValC, 2, 1, 1, 1, Qt::AlignLeft);

        DSColor = new QCheckBox(groupBox);
        DSColor->setObjectName(QStringLiteral("DSColor"));

        imageQualityLayout->addWidget(DSColor, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        TabPDFOptions->addTab(tabGeneral, QString());
        tabFonts = new QWidget();
        tabFonts->setObjectName(QStringLiteral("tabFonts"));
        verticalLayout_2 = new QVBoxLayout(tabFonts);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupFont = new QGroupBox(tabFonts);
        groupFont->setObjectName(QStringLiteral("groupFont"));
        groupFontLayout = new QHBoxLayout(groupFont);
        groupFontLayout->setSpacing(5);
        groupFontLayout->setContentsMargins(10, 10, 10, 10);
        groupFontLayout->setObjectName(QStringLiteral("groupFontLayout"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        availableListLabel = new QLabel(groupFont);
        availableListLabel->setObjectName(QStringLiteral("availableListLabel"));

        verticalLayout_11->addWidget(availableListLabel);

        FontTable = new QTableView(groupFont);
        FontTable->setObjectName(QStringLiteral("FontTable"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FontTable->sizePolicy().hasHeightForWidth());
        FontTable->setSizePolicy(sizePolicy);

        verticalLayout_11->addWidget(FontTable);

        frame = new QFrame(groupFont);
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


        groupFontLayout->addLayout(verticalLayout_11);


        verticalLayout_2->addWidget(groupFont);

        TabPDFOptions->addTab(tabFonts, QString());
        tabPresentation = new QWidget();
        tabPresentation->setObjectName(QStringLiteral("tabPresentation"));
        gridLayout_4 = new QGridLayout(tabPresentation);
        gridLayout_4->setSpacing(5);
        gridLayout_4->setContentsMargins(10, 10, 10, 10);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        CheckBox10 = new QCheckBox(tabPresentation);
        CheckBox10->setObjectName(QStringLiteral("CheckBox10"));

        gridLayout_4->addWidget(CheckBox10, 0, 0, 1, 1);

        Pages = new QListWidget(tabPresentation);
        Pages->setObjectName(QStringLiteral("Pages"));

        gridLayout_4->addWidget(Pages, 1, 0, 1, 1);

        PagePrev = new QCheckBox(tabPresentation);
        PagePrev->setObjectName(QStringLiteral("PagePrev"));

        gridLayout_4->addWidget(PagePrev, 2, 0, 1, 1);

        Effects = new QGroupBox(tabPresentation);
        Effects->setObjectName(QStringLiteral("Effects"));
        effectsLayout = new QGridLayout(Effects);
        effectsLayout->setObjectName(QStringLiteral("effectsLayout"));
        EDirection_2_2 = new QComboBox(Effects);
        EDirection_2_2->setObjectName(QStringLiteral("EDirection_2_2"));
        EDirection_2_2->setEditable(false);

        effectsLayout->addWidget(EDirection_2_2, 5, 1, 1, 1);

        label_15 = new QLabel(Effects);
        label_15->setObjectName(QStringLiteral("label_15"));

        effectsLayout->addWidget(label_15, 5, 0, 1, 1);

        label_13 = new QLabel(Effects);
        label_13->setObjectName(QStringLiteral("label_13"));

        effectsLayout->addWidget(label_13, 3, 0, 1, 1);

        EDirection = new QComboBox(Effects);
        EDirection->setObjectName(QStringLiteral("EDirection"));
        EDirection->setEditable(false);

        effectsLayout->addWidget(EDirection, 3, 1, 1, 1);

        EffectType = new QComboBox(Effects);
        EffectType->setObjectName(QStringLiteral("EffectType"));
        EffectType->setEditable(false);

        effectsLayout->addWidget(EffectType, 2, 1, 1, 1);

        label_14 = new QLabel(Effects);
        label_14->setObjectName(QStringLiteral("label_14"));

        effectsLayout->addWidget(label_14, 4, 0, 1, 1);

        EDirection_2 = new QComboBox(Effects);
        EDirection_2->setObjectName(QStringLiteral("EDirection_2"));
        EDirection_2->setEditable(false);

        effectsLayout->addWidget(EDirection_2, 4, 1, 1, 1);

        label_11 = new QLabel(Effects);
        label_11->setObjectName(QStringLiteral("label_11"));

        effectsLayout->addWidget(label_11, 1, 0, 1, 1);

        label_12 = new QLabel(Effects);
        label_12->setObjectName(QStringLiteral("label_12"));

        effectsLayout->addWidget(label_12, 2, 0, 1, 1);

        label_10 = new QLabel(Effects);
        label_10->setObjectName(QStringLiteral("label_10"));

        effectsLayout->addWidget(label_10, 0, 0, 1, 1);

        EffectTime = new QSpinBox(Effects);
        EffectTime->setObjectName(QStringLiteral("EffectTime"));
        EffectTime->setMinimum(1);
        EffectTime->setMaximum(3600);

        effectsLayout->addWidget(EffectTime, 1, 1, 1, 1);

        PageTime = new QSpinBox(Effects);
        PageTime->setObjectName(QStringLiteral("PageTime"));
        PageTime->setMinimum(0);
        PageTime->setMaximum(3600);

        effectsLayout->addWidget(PageTime, 0, 1, 1, 1);

        EonAllPg = new QPushButton(Effects);
        EonAllPg->setObjectName(QStringLiteral("EonAllPg"));

        effectsLayout->addWidget(EonAllPg, 6, 0, 1, 2);


        gridLayout_4->addWidget(Effects, 1, 1, 1, 1);

        TabPDFOptions->addTab(tabPresentation, QString());
        tabSpecial = new QWidget();
        tabSpecial->setObjectName(QStringLiteral("tabSpecial"));
        verticalLayout_7 = new QVBoxLayout(tabSpecial);
        verticalLayout_7->setSpacing(5);
        verticalLayout_7->setContentsMargins(10, 10, 10, 10);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupDisplay = new QGroupBox(tabSpecial);
        groupDisplay->setObjectName(QStringLiteral("groupDisplay"));
        groupDisplayLayout = new QVBoxLayout(groupDisplay);
        groupDisplayLayout->setSpacing(5);
        groupDisplayLayout->setContentsMargins(10, 10, 10, 10);
        groupDisplayLayout->setObjectName(QStringLiteral("groupDisplayLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(5);
#ifndef Q_OS_MAC
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
#endif
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pageLayout = new QGroupBox(groupDisplay);
        pageLayout->setObjectName(QStringLiteral("pageLayout"));
        pageLayoutLayout = new QVBoxLayout(pageLayout);
        pageLayoutLayout->setSpacing(5);
        pageLayoutLayout->setContentsMargins(10, 10, 10, 10);
        pageLayoutLayout->setObjectName(QStringLiteral("pageLayoutLayout"));
        singlePage = new QRadioButton(pageLayout);
        singlePage->setObjectName(QStringLiteral("singlePage"));

        pageLayoutLayout->addWidget(singlePage);

        continuousPages = new QRadioButton(pageLayout);
        continuousPages->setObjectName(QStringLiteral("continuousPages"));

        pageLayoutLayout->addWidget(continuousPages);

        doublePageLeft = new QRadioButton(pageLayout);
        doublePageLeft->setObjectName(QStringLiteral("doublePageLeft"));

        pageLayoutLayout->addWidget(doublePageLeft);

        doublePageRight = new QRadioButton(pageLayout);
        doublePageRight->setObjectName(QStringLiteral("doublePageRight"));

        pageLayoutLayout->addWidget(doublePageRight);


        horizontalLayout_7->addWidget(pageLayout);

        groupNavigation = new QGroupBox(groupDisplay);
        groupNavigation->setObjectName(QStringLiteral("groupNavigation"));
        groupNavigationLayout = new QVBoxLayout(groupNavigation);
        groupNavigationLayout->setSpacing(5);
        groupNavigationLayout->setContentsMargins(10, 10, 10, 10);
        groupNavigationLayout->setObjectName(QStringLiteral("groupNavigationLayout"));
        useViewDefault = new QRadioButton(groupNavigation);
        useViewDefault->setObjectName(QStringLiteral("useViewDefault"));

        groupNavigationLayout->addWidget(useViewDefault);

        useFullScreen = new QRadioButton(groupNavigation);
        useFullScreen->setObjectName(QStringLiteral("useFullScreen"));

        groupNavigationLayout->addWidget(useFullScreen);

        useBookmarks = new QRadioButton(groupNavigation);
        useBookmarks->setObjectName(QStringLiteral("useBookmarks"));

        groupNavigationLayout->addWidget(useBookmarks);

        useThumbnails = new QRadioButton(groupNavigation);
        useThumbnails->setObjectName(QStringLiteral("useThumbnails"));

        groupNavigationLayout->addWidget(useThumbnails);

        useLayers2 = new QRadioButton(groupNavigation);
        useLayers2->setObjectName(QStringLiteral("useLayers2"));

        groupNavigationLayout->addWidget(useLayers2);

        hideToolBar = new QCheckBox(groupNavigation);
        hideToolBar->setObjectName(QStringLiteral("hideToolBar"));

        groupNavigationLayout->addWidget(hideToolBar);

        hideMenuBar = new QCheckBox(groupNavigation);
        hideMenuBar->setObjectName(QStringLiteral("hideMenuBar"));

        groupNavigationLayout->addWidget(hideMenuBar);

        fitWindow = new QCheckBox(groupNavigation);
        fitWindow->setObjectName(QStringLiteral("fitWindow"));

        groupNavigationLayout->addWidget(fitWindow);


        horizontalLayout_7->addWidget(groupNavigation);


        groupDisplayLayout->addLayout(horizontalLayout_7);

        groupJava = new QGroupBox(groupDisplay);
        groupJava->setObjectName(QStringLiteral("groupJava"));
        groupJavaLayout = new QHBoxLayout(groupJava);
        groupJavaLayout->setSpacing(5);
        groupJavaLayout->setContentsMargins(10, 10, 10, 10);
        groupJavaLayout->setObjectName(QStringLiteral("groupJavaLayout"));
        actionLabel = new QLabel(groupJava);
        actionLabel->setObjectName(QStringLiteral("actionLabel"));

        groupJavaLayout->addWidget(actionLabel);

        actionCombo = new QComboBox(groupJava);
        actionCombo->setObjectName(QStringLiteral("actionCombo"));
        actionCombo->setEditable(false);

        groupJavaLayout->addWidget(actionCombo);


        groupDisplayLayout->addWidget(groupJava);


        verticalLayout_7->addWidget(groupDisplay);

        TabPDFOptions->addTab(tabSpecial, QString());
        tabSecurity = new QWidget();
        tabSecurity->setObjectName(QStringLiteral("tabSecurity"));
        verticalLayout_9 = new QVBoxLayout(tabSecurity);
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setContentsMargins(10, 10, 10, 10);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        Encry = new QCheckBox(tabSecurity);
        Encry->setObjectName(QStringLiteral("Encry"));

        verticalLayout_9->addWidget(Encry);

        groupPass = new QGroupBox(tabSecurity);
        groupPass->setObjectName(QStringLiteral("groupPass"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupPass->sizePolicy().hasHeightForWidth());
        groupPass->setSizePolicy(sizePolicy4);
        groupPassLayout = new QGridLayout(groupPass);
        groupPassLayout->setSpacing(5);
        groupPassLayout->setContentsMargins(10, 10, 10, 10);
        groupPassLayout->setObjectName(QStringLiteral("groupPassLayout"));
        TextSec2 = new QLabel(groupPass);
        TextSec2->setObjectName(QStringLiteral("TextSec2"));

        groupPassLayout->addWidget(TextSec2, 1, 0, 1, 1);

        TextSec1 = new QLabel(groupPass);
        TextSec1->setObjectName(QStringLiteral("TextSec1"));

        groupPassLayout->addWidget(TextSec1, 0, 0, 1, 1);

        PassOwner = new QLineEdit(groupPass);
        PassOwner->setObjectName(QStringLiteral("PassOwner"));
        PassOwner->setEchoMode(QLineEdit::Password);

        groupPassLayout->addWidget(PassOwner, 0, 1, 1, 1);

        PassUser = new QLineEdit(groupPass);
        PassUser->setObjectName(QStringLiteral("PassUser"));
        PassUser->setEchoMode(QLineEdit::Password);

        groupPassLayout->addWidget(PassUser, 1, 1, 1, 1);


        verticalLayout_9->addWidget(groupPass);

        groupSecSet = new QGroupBox(tabSecurity);
        groupSecSet->setObjectName(QStringLiteral("groupSecSet"));
        sizePolicy4.setHeightForWidth(groupSecSet->sizePolicy().hasHeightForWidth());
        groupSecSet->setSizePolicy(sizePolicy4);
        groupSecSetLayout = new QVBoxLayout(groupSecSet);
        groupSecSetLayout->setSpacing(5);
        groupSecSetLayout->setContentsMargins(10, 10, 10, 10);
        groupSecSetLayout->setObjectName(QStringLiteral("groupSecSetLayout"));
        PrintSec = new QCheckBox(groupSecSet);
        PrintSec->setObjectName(QStringLiteral("PrintSec"));

        groupSecSetLayout->addWidget(PrintSec);

        ModifySec = new QCheckBox(groupSecSet);
        ModifySec->setObjectName(QStringLiteral("ModifySec"));

        groupSecSetLayout->addWidget(ModifySec);

        CopySec = new QCheckBox(groupSecSet);
        CopySec->setObjectName(QStringLiteral("CopySec"));

        groupSecSetLayout->addWidget(CopySec);

        AddSec = new QCheckBox(groupSecSet);
        AddSec->setObjectName(QStringLiteral("AddSec"));

        groupSecSetLayout->addWidget(AddSec);


        verticalLayout_9->addWidget(groupSecSet);

        TabPDFOptions->addTab(tabSecurity, QString());
        tabColor = new QWidget();
        tabColor->setObjectName(QStringLiteral("tabColor"));
        tabColorLayout = new QVBoxLayout(tabColor);
        tabColorLayout->setSpacing(5);
        tabColorLayout->setContentsMargins(10, 10, 10, 10);
        tabColorLayout->setObjectName(QStringLiteral("tabColorLayout"));
        ColorGroup = new QGroupBox(tabColor);
        ColorGroup->setObjectName(QStringLiteral("ColorGroup"));
        colorGroupLayout = new QHBoxLayout(ColorGroup);
        colorGroupLayout->setSpacing(5);
        colorGroupLayout->setContentsMargins(10, 10, 10, 10);
        colorGroupLayout->setObjectName(QStringLiteral("colorGroupLayout"));
        label_16 = new QLabel(ColorGroup);
        label_16->setObjectName(QStringLiteral("label_16"));

        colorGroupLayout->addWidget(label_16);

        OutCombo = new QComboBox(ColorGroup);
        OutCombo->setObjectName(QStringLiteral("OutCombo"));

        colorGroupLayout->addWidget(OutCombo);


        tabColorLayout->addWidget(ColorGroup);

        useSpot = new QCheckBox(tabColor);
        useSpot->setObjectName(QStringLiteral("useSpot"));

        tabColorLayout->addWidget(useSpot);

        UseLPI = new QCheckBox(tabColor);
        UseLPI->setObjectName(QStringLiteral("UseLPI"));

        tabColorLayout->addWidget(UseLPI);

        LPIgroup = new QGroupBox(tabColor);
        LPIgroup->setObjectName(QStringLiteral("LPIgroup"));
        lpiGroupLayout = new QGridLayout(LPIgroup);
        lpiGroupLayout->setSpacing(5);
        lpiGroupLayout->setContentsMargins(10, 10, 10, 10);
        lpiGroupLayout->setObjectName(QStringLiteral("lpiGroupLayout"));
        LPIfreq = new QSpinBox(LPIgroup);
        LPIfreq->setObjectName(QStringLiteral("LPIfreq"));
        LPIfreq->setMinimum(10);
        LPIfreq->setMaximum(1000);

        lpiGroupLayout->addWidget(LPIfreq, 0, 2, 1, 1);

        label_18 = new QLabel(LPIgroup);
        label_18->setObjectName(QStringLiteral("label_18"));

        lpiGroupLayout->addWidget(label_18, 1, 1, 1, 1);

        label_17 = new QLabel(LPIgroup);
        label_17->setObjectName(QStringLiteral("label_17"));

        lpiGroupLayout->addWidget(label_17, 0, 1, 1, 1);

        LPIangle = new QSpinBox(LPIgroup);
        LPIangle->setObjectName(QStringLiteral("LPIangle"));
        LPIangle->setMinimum(-180);
        LPIangle->setMaximum(180);

        lpiGroupLayout->addWidget(LPIangle, 1, 2, 1, 1);

        LPIcolor = new QComboBox(LPIgroup);
        LPIcolor->setObjectName(QStringLiteral("LPIcolor"));

        lpiGroupLayout->addWidget(LPIcolor, 0, 0, 1, 1);

        label_19 = new QLabel(LPIgroup);
        label_19->setObjectName(QStringLiteral("label_19"));

        lpiGroupLayout->addWidget(label_19, 2, 1, 1, 1);

        LPIfunc = new QComboBox(LPIgroup);
        LPIfunc->setObjectName(QStringLiteral("LPIfunc"));
        LPIfunc->setEditable(false);

        lpiGroupLayout->addWidget(LPIfunc, 2, 2, 1, 1);


        tabColorLayout->addWidget(LPIgroup);

        solidsProfileGroup = new QGroupBox(tabColor);
        solidsProfileGroup->setObjectName(QStringLiteral("solidsProfileGroup"));
        solidColorsGroupLayout = new QGridLayout(solidsProfileGroup);
        solidColorsGroupLayout->setSpacing(5);
        solidColorsGroupLayout->setContentsMargins(10, 10, 10, 10);
        solidColorsGroupLayout->setObjectName(QStringLiteral("solidColorsGroupLayout"));
        solidsProfileLabel = new QLabel(solidsProfileGroup);
        solidsProfileLabel->setObjectName(QStringLiteral("solidsProfileLabel"));

        solidColorsGroupLayout->addWidget(solidsProfileLabel, 1, 0, 1, 1);

        EmbedProfs = new QCheckBox(solidsProfileGroup);
        EmbedProfs->setObjectName(QStringLiteral("EmbedProfs"));

        solidColorsGroupLayout->addWidget(EmbedProfs, 0, 0, 1, 1);

        solidsIntentLabel = new QLabel(solidsProfileGroup);
        solidsIntentLabel->setObjectName(QStringLiteral("solidsIntentLabel"));

        solidColorsGroupLayout->addWidget(solidsIntentLabel, 1, 1, 1, 1);

        SolidPr = new QComboBox(solidsProfileGroup);
        SolidPr->setObjectName(QStringLiteral("SolidPr"));

        solidColorsGroupLayout->addWidget(SolidPr, 2, 0, 1, 1);

        IntendS = new QComboBox(solidsProfileGroup);
        IntendS->setObjectName(QStringLiteral("IntendS"));
        IntendS->setEditable(false);

        solidColorsGroupLayout->addWidget(IntendS, 2, 1, 1, 1);


        tabColorLayout->addWidget(solidsProfileGroup);

        imageProfileGroup = new QGroupBox(tabColor);
        imageProfileGroup->setObjectName(QStringLiteral("imageProfileGroup"));
        imageProfileGroupLayout = new QGridLayout(imageProfileGroup);
        imageProfileGroupLayout->setSpacing(5);
        imageProfileGroupLayout->setContentsMargins(10, 10, 10, 10);
        imageProfileGroupLayout->setObjectName(QStringLiteral("imageProfileGroupLayout"));
        EmbedProfs2 = new QCheckBox(imageProfileGroup);
        EmbedProfs2->setObjectName(QStringLiteral("EmbedProfs2"));

        imageProfileGroupLayout->addWidget(EmbedProfs2, 0, 0, 1, 1);

        imageProfileLabel = new QLabel(imageProfileGroup);
        imageProfileLabel->setObjectName(QStringLiteral("imageProfileLabel"));

        imageProfileGroupLayout->addWidget(imageProfileLabel, 2, 0, 1, 1);

        imageIntentLabel = new QLabel(imageProfileGroup);
        imageIntentLabel->setObjectName(QStringLiteral("imageIntentLabel"));

        imageProfileGroupLayout->addWidget(imageIntentLabel, 2, 1, 1, 1);

        NoEmbedded = new QCheckBox(imageProfileGroup);
        NoEmbedded->setObjectName(QStringLiteral("NoEmbedded"));

        imageProfileGroupLayout->addWidget(NoEmbedded, 1, 0, 1, 1);

        ImageP = new QComboBox(imageProfileGroup);
        ImageP->setObjectName(QStringLiteral("ImageP"));

        imageProfileGroupLayout->addWidget(ImageP, 3, 0, 1, 1);

        IntendI = new QComboBox(imageProfileGroup);
        IntendI->setObjectName(QStringLiteral("IntendI"));
        IntendI->setEditable(false);

        imageProfileGroupLayout->addWidget(IntendI, 3, 1, 1, 1);


        tabColorLayout->addWidget(imageProfileGroup);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        tabColorLayout->addItem(verticalSpacer_3);

        TabPDFOptions->addTab(tabColor, QString());
        tabPDFX = new QWidget();
        tabPDFX->setObjectName(QStringLiteral("tabPDFX"));
        tabPDFXLayout = new QVBoxLayout(tabPDFX);
        tabPDFXLayout->setSpacing(5);
        tabPDFXLayout->setContentsMargins(10, 10, 10, 10);
        tabPDFXLayout->setObjectName(QStringLiteral("tabPDFXLayout"));
        MarkGroup = new QGroupBox(tabPDFX);
        MarkGroup->setObjectName(QStringLiteral("MarkGroup"));
        markGroupLayout = new QGridLayout(MarkGroup);
        markGroupLayout->setSpacing(5);
        markGroupLayout->setContentsMargins(10, 10, 10, 10);
        markGroupLayout->setObjectName(QStringLiteral("markGroupLayout"));
        label_25 = new QLabel(MarkGroup);
        label_25->setObjectName(QStringLiteral("label_25"));

        markGroupLayout->addWidget(label_25, 3, 1, 1, 1);

        registrationMarks = new QCheckBox(MarkGroup);
        registrationMarks->setObjectName(QStringLiteral("registrationMarks"));

        markGroupLayout->addWidget(registrationMarks, 2, 0, 1, 1);

        colorMarks = new QCheckBox(MarkGroup);
        colorMarks->setObjectName(QStringLiteral("colorMarks"));

        markGroupLayout->addWidget(colorMarks, 3, 0, 1, 1);

        label_24 = new QLabel(MarkGroup);
        label_24->setObjectName(QStringLiteral("label_24"));

        markGroupLayout->addWidget(label_24, 2, 1, 1, 1);

        bleedMarks = new QCheckBox(MarkGroup);
        bleedMarks->setObjectName(QStringLiteral("bleedMarks"));

        markGroupLayout->addWidget(bleedMarks, 1, 0, 1, 1);

        docInfoMarks = new QCheckBox(MarkGroup);
        docInfoMarks->setObjectName(QStringLiteral("docInfoMarks"));

        markGroupLayout->addWidget(docInfoMarks, 0, 1, 1, 1);

        cropMarks = new QCheckBox(MarkGroup);
        cropMarks->setObjectName(QStringLiteral("cropMarks"));

        markGroupLayout->addWidget(cropMarks, 0, 0, 1, 1);

        markLength = new ScrSpinBox(MarkGroup);
        markLength->setObjectName(QStringLiteral("markLength"));

        markGroupLayout->addWidget(markLength, 2, 2, 1, 1);

        markOffset = new ScrSpinBox(MarkGroup);
        markOffset->setObjectName(QStringLiteral("markOffset"));

        markGroupLayout->addWidget(markOffset, 3, 2, 1, 1);


        tabPDFXLayout->addWidget(MarkGroup);

        BleedGroup = new QGroupBox(tabPDFX);
        BleedGroup->setObjectName(QStringLiteral("BleedGroup"));
        bleedGroupLayout = new QGridLayout(BleedGroup);
        bleedGroupLayout->setSpacing(5);
        bleedGroupLayout->setContentsMargins(10, 10, 10, 10);
        bleedGroupLayout->setObjectName(QStringLiteral("bleedGroupLayout"));
        bleedTopLabel = new QLabel(BleedGroup);
        bleedTopLabel->setObjectName(QStringLiteral("bleedTopLabel"));

        bleedGroupLayout->addWidget(bleedTopLabel, 0, 0, 1, 1);

        BleedTop = new ScrSpinBox(BleedGroup);
        BleedTop->setObjectName(QStringLiteral("BleedTop"));

        bleedGroupLayout->addWidget(BleedTop, 0, 1, 1, 1);

        bleedBottomLabel = new QLabel(BleedGroup);
        bleedBottomLabel->setObjectName(QStringLiteral("bleedBottomLabel"));

        bleedGroupLayout->addWidget(bleedBottomLabel, 1, 0, 1, 1);

        BleedBottom = new ScrSpinBox(BleedGroup);
        BleedBottom->setObjectName(QStringLiteral("BleedBottom"));

        bleedGroupLayout->addWidget(BleedBottom, 1, 1, 1, 1);

        BleedRight = new ScrSpinBox(BleedGroup);
        BleedRight->setObjectName(QStringLiteral("BleedRight"));

        bleedGroupLayout->addWidget(BleedRight, 1, 3, 1, 1);

        bleedLeftLabel = new QLabel(BleedGroup);
        bleedLeftLabel->setObjectName(QStringLiteral("bleedLeftLabel"));

        bleedGroupLayout->addWidget(bleedLeftLabel, 0, 2, 1, 1);

        BleedLeft = new ScrSpinBox(BleedGroup);
        BleedLeft->setObjectName(QStringLiteral("BleedLeft"));

        bleedGroupLayout->addWidget(BleedLeft, 0, 3, 1, 1);

        bleedRightLabel = new QLabel(BleedGroup);
        bleedRightLabel->setObjectName(QStringLiteral("bleedRightLabel"));

        bleedGroupLayout->addWidget(bleedRightLabel, 1, 2, 1, 1);

        docBleeds = new QCheckBox(BleedGroup);
        docBleeds->setObjectName(QStringLiteral("docBleeds"));

        bleedGroupLayout->addWidget(docBleeds, 2, 0, 1, 4);


        tabPDFXLayout->addWidget(BleedGroup);

        X3Group = new QGroupBox(tabPDFX);
        X3Group->setObjectName(QStringLiteral("X3Group"));
        X3GroupLayout = new QGridLayout(X3Group);
        X3GroupLayout->setSpacing(5);
        X3GroupLayout->setContentsMargins(10, 10, 10, 10);
        X3GroupLayout->setObjectName(QStringLiteral("X3GroupLayout"));
        PrintProfC = new QComboBox(X3Group);
        PrintProfC->setObjectName(QStringLiteral("PrintProfC"));
        PrintProfC->setEditable(false);

        X3GroupLayout->addWidget(PrintProfC, 0, 1, 1, 1);

        label_30 = new QLabel(X3Group);
        label_30->setObjectName(QStringLiteral("label_30"));

        X3GroupLayout->addWidget(label_30, 0, 0, 1, 1);

        label_31 = new QLabel(X3Group);
        label_31->setObjectName(QStringLiteral("label_31"));

        X3GroupLayout->addWidget(label_31, 1, 0, 1, 1);

        InfoString = new QLineEdit(X3Group);
        InfoString->setObjectName(QStringLiteral("InfoString"));

        X3GroupLayout->addWidget(InfoString, 1, 1, 1, 1);


        tabPDFXLayout->addWidget(X3Group);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        tabPDFXLayout->addItem(verticalSpacer_4);

        TabPDFOptions->addTab(tabPDFX, QString());
#ifndef QT_NO_SHORTCUT
        rotationLabel->setBuddy(RotateDeg);
        label->setBuddy(PDFVersionCombo);
        label_2->setBuddy(ComboBind);
        label_3->setBuddy(Resolution);
        label_4->setBuddy(CMethod);
        label_5->setBuddy(CQuality);
        label_15->setBuddy(EDirection_2_2);
        label_13->setBuddy(EDirection);
        label_14->setBuddy(EDirection_2);
        label_11->setBuddy(EffectTime);
        label_12->setBuddy(EffectType);
        label_10->setBuddy(PageTime);
        TextSec2->setBuddy(PassUser);
        TextSec1->setBuddy(PassOwner);
        label_16->setBuddy(OutCombo);
        label_18->setBuddy(LPIangle);
        label_17->setBuddy(LPIfreq);
        label_19->setBuddy(LPIfunc);
        label_30->setBuddy(PrintProfC);
        label_31->setBuddy(InfoString);
#endif // QT_NO_SHORTCUT

        retranslateUi(TabPDFOptions);

        TabPDFOptions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TabPDFOptions);
    } // setupUi

    void retranslateUi(QTabWidget *TabPDFOptions)
    {
        TabPDFOptions->setWindowTitle(QApplication::translate("TabPDFOptions", "TabWidget", 0));
        RangeGroup->setTitle(QApplication::translate("TabPDFOptions", "Export Range", 0));
        AllPages->setText(QApplication::translate("TabPDFOptions", "&All Pages", 0));
        pageNrButton->setText(QApplication::translate("TabPDFOptions", "...", 0));
        OnlySome->setText(QApplication::translate("TabPDFOptions", "C&hoose Pages", 0));
        rotationLabel->setText(QApplication::translate("TabPDFOptions", "&Rotation:", 0));
        RotateDeg->clear();
        RotateDeg->insertItems(0, QStringList()
         << QApplication::translate("TabPDFOptions", "0 \302\260", 0)
         << QApplication::translate("TabPDFOptions", "90 \302\260", 0)
         << QApplication::translate("TabPDFOptions", "180 \302\260", 0)
         << QApplication::translate("TabPDFOptions", "270 \302\260", 0)
        );
        MirrorH->setText(QString());
        MirrorV->setText(QString());
        ClipMarg->setText(QApplication::translate("TabPDFOptions", "Clip to Printer Margins", 0));
        groupBox_2->setTitle(QApplication::translate("TabPDFOptions", "File Options", 0));
        label->setText(QApplication::translate("TabPDFOptions", "Compatibilit&y:", 0));
        label_2->setText(QApplication::translate("TabPDFOptions", "&Binding:", 0));
        ComboBind->clear();
        ComboBind->insertItems(0, QStringList()
         << QApplication::translate("TabPDFOptions", "Left Margin", 0)
         << QApplication::translate("TabPDFOptions", "Right Margin", 0)
        );
        CheckBox1->setText(QApplication::translate("TabPDFOptions", "Generate &Thumbnails", 0));
        Resolution->setSuffix(QApplication::translate("TabPDFOptions", " dpi", 0));
        CheckBM->setText(QApplication::translate("TabPDFOptions", "&Include Bookmarks", 0));
        Article->setText(QApplication::translate("TabPDFOptions", "Save &Linked Text Frames as PDF Articles", 0));
        useLayers->setText(QApplication::translate("TabPDFOptions", "Include La&yers", 0));
        label_3->setText(QApplication::translate("TabPDFOptions", "&Resolution for EPS Graphics:", 0));
        EmbedPDF->setText(QApplication::translate("TabPDFOptions", "Embed PDF && EPS files (EXPERIMENTAL)", 0));
        Compression->setText(QApplication::translate("TabPDFOptions", "Com&press Text and Vector Graphics", 0));
        groupBox->setTitle(QApplication::translate("TabPDFOptions", "Image Quality Settings", 0));
        label_4->setText(QApplication::translate("TabPDFOptions", "Compression Metho&d:", 0));
        CMethod->clear();
        CMethod->insertItems(0, QStringList()
         << QApplication::translate("TabPDFOptions", "Automatic", 0)
         << QApplication::translate("TabPDFOptions", "Lossy - JPEG", 0)
         << QApplication::translate("TabPDFOptions", "Lossless - Zip", 0)
         << QApplication::translate("TabPDFOptions", "None", 0)
        );
        label_5->setText(QApplication::translate("TabPDFOptions", "Compression &Quality:", 0));
        CQuality->clear();
        CQuality->insertItems(0, QStringList()
         << QApplication::translate("TabPDFOptions", "Maximum", 0)
         << QApplication::translate("TabPDFOptions", "High", 0)
         << QApplication::translate("TabPDFOptions", "Medium", 0)
         << QApplication::translate("TabPDFOptions", "Low", 0)
         << QApplication::translate("TabPDFOptions", "Minimum", 0)
        );
        ValC->setSuffix(QApplication::translate("TabPDFOptions", " dpi", 0));
        DSColor->setText(QApplication::translate("TabPDFOptions", "Maximum Image Resolution:", 0));
        TabPDFOptions->setTabText(TabPDFOptions->indexOf(tabGeneral), QApplication::translate("TabPDFOptions", "&General", 0));
        groupFont->setTitle(QApplication::translate("TabPDFOptions", "Embedding", 0));
        availableListLabel->setText(QApplication::translate("TabPDFOptions", "Used Fonts", 0));
        label_45->setText(QApplication::translate("TabPDFOptions", "a) Embed fonts", 0));
        label_46->setText(QApplication::translate("TabPDFOptions", "c) Outline fonts", 0));
        SubsetAllFontsButton->setText(QApplication::translate("TabPDFOptions", "Subset all fonts", 0));
        label_44->setText(QApplication::translate("TabPDFOptions", "b) Subset fonts", 0));
        OutlineAllFontsButton->setText(QApplication::translate("TabPDFOptions", "Outline all fonts", 0));
        EmbedAllFontsButton->setText(QApplication::translate("TabPDFOptions", "Embed all fonts", 0));
        TabPDFOptions->setTabText(TabPDFOptions->indexOf(tabFonts), QApplication::translate("TabPDFOptions", "&Fonts", 0));
        CheckBox10->setText(QApplication::translate("TabPDFOptions", "Enable &Presentation Effects", 0));
        PagePrev->setText(QApplication::translate("TabPDFOptions", "Show Page Pre&views", 0));
        Effects->setTitle(QApplication::translate("TabPDFOptions", "Effects", 0));
        EDirection_2_2->clear();
        EDirection_2_2->insertItems(0, QStringList()
         << QApplication::translate("TabPDFOptions", "Left to Right", 0)
         << QApplication::translate("TabPDFOptions", "Top to Bottom", 0)
         << QApplication::translate("TabPDFOptions", "Bottom to Top", 0)
         << QApplication::translate("TabPDFOptions", "Right to Left", 0)
         << QApplication::translate("TabPDFOptions", "Top-left to Bottom-Right", 0)
        );
        label_15->setText(QApplication::translate("TabPDFOptions", "D&irection:", 0));
        label_13->setText(QApplication::translate("TabPDFOptions", "&Moving Lines:", 0));
        EDirection->clear();
        EDirection->insertItems(0, QStringList()
         << QApplication::translate("TabPDFOptions", "Horizontal", 0)
         << QApplication::translate("TabPDFOptions", "Vertical", 0)
        );
        EffectType->clear();
        EffectType->insertItems(0, QStringList()
         << QApplication::translate("TabPDFOptions", "No Effect", 0)
         << QApplication::translate("TabPDFOptions", "Blinds", 0)
         << QApplication::translate("TabPDFOptions", "Box", 0)
         << QApplication::translate("TabPDFOptions", "Dissolve", 0)
         << QApplication::translate("TabPDFOptions", "Glitter", 0)
         << QApplication::translate("TabPDFOptions", "Split", 0)
         << QApplication::translate("TabPDFOptions", "Wipe", 0)
        );
        label_14->setText(QApplication::translate("TabPDFOptions", "F&rom the:", 0));
        EDirection_2->clear();
        EDirection_2->insertItems(0, QStringList()
         << QApplication::translate("TabPDFOptions", "Inside", 0)
         << QApplication::translate("TabPDFOptions", "Outside", 0)
        );
        label_11->setText(QApplication::translate("TabPDFOptions", "Effec&t Duration:", 0));
        label_12->setText(QApplication::translate("TabPDFOptions", "Effect T&ype:", 0));
        label_10->setText(QApplication::translate("TabPDFOptions", "&Display Duration:", 0));
        EffectTime->setSuffix(QApplication::translate("TabPDFOptions", " sec", 0));
        PageTime->setSuffix(QApplication::translate("TabPDFOptions", " sec", 0));
        EonAllPg->setText(QApplication::translate("TabPDFOptions", "&Apply Effect to all Pages", 0));
        TabPDFOptions->setTabText(TabPDFOptions->indexOf(tabPresentation), QApplication::translate("TabPDFOptions", "E&xtras", 0));
        groupDisplay->setTitle(QApplication::translate("TabPDFOptions", "Display Settings", 0));
        pageLayout->setTitle(QApplication::translate("TabPDFOptions", "Document Layout", 0));
        singlePage->setText(QApplication::translate("TabPDFOptions", "Single Page", 0));
        continuousPages->setText(QApplication::translate("TabPDFOptions", "Continuous", 0));
        doublePageLeft->setText(QApplication::translate("TabPDFOptions", "Double Page Left", 0));
        doublePageRight->setText(QApplication::translate("TabPDFOptions", "Double Page Right", 0));
        groupNavigation->setTitle(QApplication::translate("TabPDFOptions", "Visual Appearance", 0));
        useViewDefault->setText(QApplication::translate("TabPDFOptions", "Use Viewers Defaults", 0));
        useFullScreen->setText(QApplication::translate("TabPDFOptions", "Use Full Screen Mode", 0));
        useBookmarks->setText(QApplication::translate("TabPDFOptions", "Display Bookmarks Tab", 0));
        useThumbnails->setText(QApplication::translate("TabPDFOptions", "Display Thumbnails", 0));
        useLayers2->setText(QApplication::translate("TabPDFOptions", "Display Layers Tab", 0));
        hideToolBar->setText(QApplication::translate("TabPDFOptions", "Hide Viewers Toolbar", 0));
        hideMenuBar->setText(QApplication::translate("TabPDFOptions", "Hide Viewers Menubar", 0));
        fitWindow->setText(QApplication::translate("TabPDFOptions", "Zoom Pages to fit Viewer Window", 0));
        groupJava->setTitle(QApplication::translate("TabPDFOptions", "Special Actions", 0));
        actionLabel->setText(QApplication::translate("TabPDFOptions", "Javascript to be executed\n"
"when PDF document is opened:", 0));
        actionCombo->clear();
        actionCombo->insertItems(0, QStringList()
         << QApplication::translate("TabPDFOptions", "No Script", 0)
        );
        TabPDFOptions->setTabText(TabPDFOptions->indexOf(tabSpecial), QApplication::translate("TabPDFOptions", "Viewer", 0));
        Encry->setText(QApplication::translate("TabPDFOptions", "&Use Encryption", 0));
        groupPass->setTitle(QApplication::translate("TabPDFOptions", "Passwords", 0));
        TextSec2->setText(QApplication::translate("TabPDFOptions", "&User:", 0));
        TextSec1->setText(QApplication::translate("TabPDFOptions", "&Owner:", 0));
        groupSecSet->setTitle(QApplication::translate("TabPDFOptions", "Settings", 0));
        PrintSec->setText(QApplication::translate("TabPDFOptions", "Allow &Printing the Document", 0));
        ModifySec->setText(QApplication::translate("TabPDFOptions", "Allow &Changing the Document", 0));
        CopySec->setText(QApplication::translate("TabPDFOptions", "Allow Cop&ying Text and Graphics", 0));
        AddSec->setText(QApplication::translate("TabPDFOptions", "Allow Adding &Annotations and Fields", 0));
        TabPDFOptions->setTabText(TabPDFOptions->indexOf(tabSecurity), QApplication::translate("TabPDFOptions", "S&ecurity", 0));
        ColorGroup->setTitle(QApplication::translate("TabPDFOptions", "General", 0));
        label_16->setText(QApplication::translate("TabPDFOptions", "Output &Intended For:", 0));
        OutCombo->clear();
        OutCombo->insertItems(0, QStringList()
         << QApplication::translate("TabPDFOptions", "Screen / Web", 0)
         << QApplication::translate("TabPDFOptions", "Printer", 0)
         << QApplication::translate("TabPDFOptions", "Grayscale", 0)
        );
        useSpot->setText(QApplication::translate("TabPDFOptions", "Convert Spot Colors to Process Colors", 0));
        UseLPI->setText(QApplication::translate("TabPDFOptions", "&Use Custom Rendering Settings", 0));
        LPIgroup->setTitle(QApplication::translate("TabPDFOptions", "Rendering Settings", 0));
        label_18->setText(QApplication::translate("TabPDFOptions", "&Angle:", 0));
        label_17->setText(QApplication::translate("TabPDFOptions", "Fre&quency:", 0));
        LPIangle->setSuffix(QApplication::translate("TabPDFOptions", " \302\260", 0));
        label_19->setText(QApplication::translate("TabPDFOptions", "S&pot Function:", 0));
        LPIfunc->clear();
        LPIfunc->insertItems(0, QStringList()
         << QApplication::translate("TabPDFOptions", "Simple Dot", 0)
         << QApplication::translate("TabPDFOptions", "Line", 0)
         << QApplication::translate("TabPDFOptions", "Round", 0)
         << QApplication::translate("TabPDFOptions", "Ellipse", 0)
        );
        solidsProfileGroup->setTitle(QApplication::translate("TabPDFOptions", "Solid Colors:", 0));
        solidsProfileLabel->setText(QApplication::translate("TabPDFOptions", "Profile:", 0));
        EmbedProfs->setText(QApplication::translate("TabPDFOptions", "Use Color Profile", 0));
        solidsIntentLabel->setText(QApplication::translate("TabPDFOptions", "Rendering Intent:", 0));
        IntendS->clear();
        IntendS->insertItems(0, QStringList()
         << QApplication::translate("TabPDFOptions", "Perceptual", 0)
         << QApplication::translate("TabPDFOptions", "Relative Colorimetric", 0)
         << QApplication::translate("TabPDFOptions", "Saturation", 0)
         << QApplication::translate("TabPDFOptions", "Absolute Colorimetric", 0)
        );
        imageProfileGroup->setTitle(QApplication::translate("TabPDFOptions", "Images:", 0));
        EmbedProfs2->setText(QApplication::translate("TabPDFOptions", "Use Color Profile", 0));
        imageProfileLabel->setText(QApplication::translate("TabPDFOptions", "Profile:", 0));
        imageIntentLabel->setText(QApplication::translate("TabPDFOptions", "Rendering Intent:", 0));
        NoEmbedded->setText(QApplication::translate("TabPDFOptions", "Do not use embedded color profiles", 0));
        IntendI->clear();
        IntendI->insertItems(0, QStringList()
         << QApplication::translate("TabPDFOptions", "Perceptual", 0)
         << QApplication::translate("TabPDFOptions", "Relative Colorimetric", 0)
         << QApplication::translate("TabPDFOptions", "Saturation", 0)
         << QApplication::translate("TabPDFOptions", "Absolute Colorimetric", 0)
        );
        TabPDFOptions->setTabText(TabPDFOptions->indexOf(tabColor), QApplication::translate("TabPDFOptions", "C&olor", 0));
        MarkGroup->setTitle(QApplication::translate("TabPDFOptions", "Printer Marks", 0));
        label_25->setText(QApplication::translate("TabPDFOptions", "Offset:", 0));
        registrationMarks->setText(QApplication::translate("TabPDFOptions", "Registration Marks", 0));
        colorMarks->setText(QApplication::translate("TabPDFOptions", "Color Bars", 0));
        label_24->setText(QApplication::translate("TabPDFOptions", "Length:", 0));
        bleedMarks->setText(QApplication::translate("TabPDFOptions", "Bleed Marks", 0));
        docInfoMarks->setText(QApplication::translate("TabPDFOptions", "Page Information", 0));
        cropMarks->setText(QApplication::translate("TabPDFOptions", "Crop Marks", 0));
        BleedGroup->setTitle(QApplication::translate("TabPDFOptions", "Bleed Settings", 0));
        bleedTopLabel->setText(QApplication::translate("TabPDFOptions", "Top:", 0));
        bleedBottomLabel->setText(QApplication::translate("TabPDFOptions", "Bottom:", 0));
        bleedLeftLabel->setText(QApplication::translate("TabPDFOptions", "Left:", 0));
        bleedRightLabel->setText(QApplication::translate("TabPDFOptions", "Right:", 0));
        docBleeds->setText(QApplication::translate("TabPDFOptions", "Use Document Bleeds", 0));
        X3Group->setTitle(QApplication::translate("TabPDFOptions", "PDF/X Output Intent", 0));
        label_30->setText(QApplication::translate("TabPDFOptions", "Output &Profile:", 0));
        label_31->setText(QApplication::translate("TabPDFOptions", "&Info String:", 0));
        TabPDFOptions->setTabText(TabPDFOptions->indexOf(tabPDFX), QApplication::translate("TabPDFOptions", "Pre-Press", 0));
    } // retranslateUi

};

namespace Ui {
    class TabPDFOptions: public Ui_TabPDFOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABPDFOPTIONS_H
