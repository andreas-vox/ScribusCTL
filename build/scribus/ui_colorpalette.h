/********************************************************************************
** Form generated from reading UI file 'colorpalette.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORPALETTE_H
#define UI_COLORPALETTE_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ui/scrspinbox.h>
#include "ui/colorcombo.h"
#include "ui/colorlistbox.h"
#include "ui/gradienteditor.h"
#include "ui/sccombobox.h"

QT_BEGIN_NAMESPACE

class Ui_colorPalette
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabFillStroke;
    QWidget *tabFill;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *fillModeLabel;
    QComboBox *fillModeCombo;
    QFrame *line;
    QStackedWidget *fillModeStack;
    QWidget *solidFillPage;
    QVBoxLayout *verticalLayout_3;
    ColorListBox *colorListFill;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    ScrSpinBox *fillShade;
    QWidget *gradientFillPage;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *gradientType;
    QToolButton *gradEditButton;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    ScComboBox *namedGradient;
    GradientEditor *gradEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_14;
    QComboBox *gradientExtend;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_9;
    ColorCombo *colorPoint1;
    ScrSpinBox *color1Shade;
    ScrSpinBox *color1Alpha;
    ColorCombo *colorPoint2;
    ScrSpinBox *color2Shade;
    ScrSpinBox *color2Alpha;
    ColorCombo *colorPoint3;
    ScrSpinBox *color3Shade;
    ScrSpinBox *color3Alpha;
    ColorCombo *colorPoint4;
    ScrSpinBox *color4Shade;
    ScrSpinBox *color4Alpha;
    QSpacerItem *verticalSpacer;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    ColorCombo *colorMeshPoint;
    QLabel *label_4;
    ScrSpinBox *shadeMeshPoint;
    QLabel *label_6;
    ScrSpinBox *transparencyMeshPoint;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *editMeshColors;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *page;
    QVBoxLayout *verticalLayout_12;
    QGridLayout *gridLayout;
    QLabel *label_8;
    ScrSpinBox *hatchDist;
    QLabel *label_10;
    ScrSpinBox *hatchAngle;
    QLabel *label_11;
    QComboBox *hatchType;
    QLabel *label_12;
    ColorCombo *hatchLineColor;
    QLabel *label_13;
    ColorCombo *hatchBackground;
    QSpacerItem *verticalSpacer_3;
    QWidget *patternFillPage;
    QVBoxLayout *verticalLayout_6;
    QListWidget *patternBox;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *editPatternProps;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tabStroke;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_6;
    QLabel *strokeModeLabel;
    QComboBox *strokeModeCombo;
    QFrame *line_2;
    QStackedWidget *strokeModeStack;
    QWidget *solidStrokePage;
    QVBoxLayout *verticalLayout_7;
    ColorListBox *colorListStroke;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    ScrSpinBox *strokeShade;
    QWidget *gradientStrokePage;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *gradientTypeStroke;
    QToolButton *gradEditButtonStroke;
    ScComboBox *namedGradientStroke;
    GradientEditor *gradEditStroke;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_15;
    QComboBox *GradientExtendS;
    QWidget *patternStrokePage;
    QVBoxLayout *verticalLayout_14;
    QListWidget *patternBoxStroke;
    QHBoxLayout *horizontalLayout_11;
    QToolButton *editPatternPropsStroke;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *followsPath;
    QHBoxLayout *horizontalLayout;
    QLabel *overprintLabel;
    QComboBox *overPrintCombo;
    QCheckBox *displayAllColors;

    void setupUi(QWidget *colorPalette)
    {
        if (colorPalette->objectName().isEmpty())
            colorPalette->setObjectName(QStringLiteral("colorPalette"));
        colorPalette->resize(258, 360);
        verticalLayout = new QVBoxLayout(colorPalette);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        tabFillStroke = new QTabWidget(colorPalette);
        tabFillStroke->setObjectName(QStringLiteral("tabFillStroke"));
        tabFill = new QWidget();
        tabFill->setObjectName(QStringLiteral("tabFill"));
        verticalLayout_2 = new QVBoxLayout(tabFill);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        fillModeLabel = new QLabel(tabFill);
        fillModeLabel->setObjectName(QStringLiteral("fillModeLabel"));

        horizontalLayout_2->addWidget(fillModeLabel);

        fillModeCombo = new QComboBox(tabFill);
        fillModeCombo->setObjectName(QStringLiteral("fillModeCombo"));

        horizontalLayout_2->addWidget(fillModeCombo);


        verticalLayout_2->addLayout(horizontalLayout_2);

        line = new QFrame(tabFill);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        fillModeStack = new QStackedWidget(tabFill);
        fillModeStack->setObjectName(QStringLiteral("fillModeStack"));
        solidFillPage = new QWidget();
        solidFillPage->setObjectName(QStringLiteral("solidFillPage"));
        verticalLayout_3 = new QVBoxLayout(solidFillPage);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        colorListFill = new ColorListBox(solidFillPage);
        colorListFill->setObjectName(QStringLiteral("colorListFill"));

        verticalLayout_3->addWidget(colorListFill);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(solidFillPage);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        fillShade = new ScrSpinBox(solidFillPage);
        fillShade->setObjectName(QStringLiteral("fillShade"));
        fillShade->setMaximum(100);
        fillShade->setValue(100);

        horizontalLayout_3->addWidget(fillShade);


        verticalLayout_3->addLayout(horizontalLayout_3);

        fillModeStack->addWidget(solidFillPage);
        gradientFillPage = new QWidget();
        gradientFillPage->setObjectName(QStringLiteral("gradientFillPage"));
        verticalLayout_5 = new QVBoxLayout(gradientFillPage);
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gradientType = new QComboBox(gradientFillPage);
        gradientType->setObjectName(QStringLiteral("gradientType"));

        horizontalLayout_4->addWidget(gradientType);

        gradEditButton = new QToolButton(gradientFillPage);
        gradEditButton->setObjectName(QStringLiteral("gradEditButton"));
        gradEditButton->setCheckable(true);

        horizontalLayout_4->addWidget(gradEditButton);


        verticalLayout_5->addLayout(horizontalLayout_4);

        stackedWidget_2 = new QStackedWidget(gradientFillPage);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        namedGradient = new ScComboBox(page_3);
        namedGradient->setObjectName(QStringLiteral("namedGradient"));

        verticalLayout_4->addWidget(namedGradient);

        gradEdit = new GradientEditor(page_3);
        gradEdit->setObjectName(QStringLiteral("gradEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gradEdit->sizePolicy().hasHeightForWidth());
        gradEdit->setSizePolicy(sizePolicy);
        gradEdit->setFrameShape(QFrame::NoFrame);
        gradEdit->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(gradEdit);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_14 = new QLabel(page_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_10->addWidget(label_14);

        gradientExtend = new QComboBox(page_3);
        gradientExtend->setObjectName(QStringLiteral("gradientExtend"));

        horizontalLayout_10->addWidget(gradientExtend);


        verticalLayout_4->addLayout(horizontalLayout_10);

        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout_8 = new QVBoxLayout(page_4);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_5 = new QLabel(page_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        label_2 = new QLabel(page_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 0, 1, 1, 1);

        label_9 = new QLabel(page_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 0, 2, 1, 1);

        colorPoint1 = new ColorCombo(page_4);
        colorPoint1->setObjectName(QStringLiteral("colorPoint1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(colorPoint1->sizePolicy().hasHeightForWidth());
        colorPoint1->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(colorPoint1, 1, 0, 1, 1);

        color1Shade = new ScrSpinBox(page_4);
        color1Shade->setObjectName(QStringLiteral("color1Shade"));
        color1Shade->setMinimum(0);
        color1Shade->setMaximum(100);
        color1Shade->setSingleStep(10);
        color1Shade->setValue(100);

        gridLayout_4->addWidget(color1Shade, 1, 1, 1, 1);

        color1Alpha = new ScrSpinBox(page_4);
        color1Alpha->setObjectName(QStringLiteral("color1Alpha"));
        color1Alpha->setMaximum(100);
        color1Alpha->setSingleStep(10);
        color1Alpha->setValue(100);

        gridLayout_4->addWidget(color1Alpha, 1, 2, 1, 1);

        colorPoint2 = new ColorCombo(page_4);
        colorPoint2->setObjectName(QStringLiteral("colorPoint2"));
        sizePolicy1.setHeightForWidth(colorPoint2->sizePolicy().hasHeightForWidth());
        colorPoint2->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(colorPoint2, 2, 0, 1, 1);

        color2Shade = new ScrSpinBox(page_4);
        color2Shade->setObjectName(QStringLiteral("color2Shade"));
        color2Shade->setMinimum(0);
        color2Shade->setMaximum(100);
        color2Shade->setSingleStep(10);
        color2Shade->setValue(100);

        gridLayout_4->addWidget(color2Shade, 2, 1, 1, 1);

        color2Alpha = new ScrSpinBox(page_4);
        color2Alpha->setObjectName(QStringLiteral("color2Alpha"));
        color2Alpha->setMaximum(100);
        color2Alpha->setSingleStep(10);
        color2Alpha->setValue(100);

        gridLayout_4->addWidget(color2Alpha, 2, 2, 1, 1);

        colorPoint3 = new ColorCombo(page_4);
        colorPoint3->setObjectName(QStringLiteral("colorPoint3"));
        sizePolicy1.setHeightForWidth(colorPoint3->sizePolicy().hasHeightForWidth());
        colorPoint3->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(colorPoint3, 3, 0, 1, 1);

        color3Shade = new ScrSpinBox(page_4);
        color3Shade->setObjectName(QStringLiteral("color3Shade"));
        color3Shade->setMinimum(0);
        color3Shade->setMaximum(100);
        color3Shade->setSingleStep(10);
        color3Shade->setValue(100);

        gridLayout_4->addWidget(color3Shade, 3, 1, 1, 1);

        color3Alpha = new ScrSpinBox(page_4);
        color3Alpha->setObjectName(QStringLiteral("color3Alpha"));
        color3Alpha->setMaximum(100);
        color3Alpha->setSingleStep(10);
        color3Alpha->setValue(100);

        gridLayout_4->addWidget(color3Alpha, 3, 2, 1, 1);

        colorPoint4 = new ColorCombo(page_4);
        colorPoint4->setObjectName(QStringLiteral("colorPoint4"));
        sizePolicy1.setHeightForWidth(colorPoint4->sizePolicy().hasHeightForWidth());
        colorPoint4->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(colorPoint4, 4, 0, 1, 1);

        color4Shade = new ScrSpinBox(page_4);
        color4Shade->setObjectName(QStringLiteral("color4Shade"));
        color4Shade->setMinimum(0);
        color4Shade->setMaximum(100);
        color4Shade->setSingleStep(10);
        color4Shade->setValue(100);

        gridLayout_4->addWidget(color4Shade, 4, 1, 1, 1);

        color4Alpha = new ScrSpinBox(page_4);
        color4Alpha->setObjectName(QStringLiteral("color4Alpha"));
        color4Alpha->setMaximum(100);
        color4Alpha->setSingleStep(10);
        color4Alpha->setValue(100);

        gridLayout_4->addWidget(color4Alpha, 4, 2, 1, 1);


        verticalLayout_8->addLayout(gridLayout_4);

        verticalSpacer = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        stackedWidget_2->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        verticalLayout_9 = new QVBoxLayout(page_5);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_3 = new QLabel(page_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        colorMeshPoint = new ColorCombo(page_5);
        colorMeshPoint->setObjectName(QStringLiteral("colorMeshPoint"));
        colorMeshPoint->setEnabled(false);
        sizePolicy1.setHeightForWidth(colorMeshPoint->sizePolicy().hasHeightForWidth());
        colorMeshPoint->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(colorMeshPoint, 0, 1, 1, 1);

        label_4 = new QLabel(page_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 1, 0, 1, 1);

        shadeMeshPoint = new ScrSpinBox(page_5);
        shadeMeshPoint->setObjectName(QStringLiteral("shadeMeshPoint"));
        shadeMeshPoint->setEnabled(false);
        shadeMeshPoint->setMinimum(0);
        shadeMeshPoint->setMaximum(100);
        shadeMeshPoint->setSingleStep(10);
        shadeMeshPoint->setValue(100);

        gridLayout_5->addWidget(shadeMeshPoint, 1, 1, 1, 1);

        label_6 = new QLabel(page_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_5->addWidget(label_6, 2, 0, 1, 1);

        transparencyMeshPoint = new ScrSpinBox(page_5);
        transparencyMeshPoint->setObjectName(QStringLiteral("transparencyMeshPoint"));
        transparencyMeshPoint->setEnabled(false);
        transparencyMeshPoint->setMaximum(100);
        transparencyMeshPoint->setSingleStep(10);
        transparencyMeshPoint->setValue(100);

        gridLayout_5->addWidget(transparencyMeshPoint, 2, 1, 1, 1);


        verticalLayout_9->addLayout(gridLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        editMeshColors = new QToolButton(page_5);
        editMeshColors->setObjectName(QStringLiteral("editMeshColors"));
        editMeshColors->setCheckable(true);

        horizontalLayout_8->addWidget(editMeshColors);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_9->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        stackedWidget_2->addWidget(page_5);

        verticalLayout_5->addWidget(stackedWidget_2);

        fillModeStack->addWidget(gradientFillPage);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_12 = new QVBoxLayout(page);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        hatchDist = new ScrSpinBox(page);
        hatchDist->setObjectName(QStringLiteral("hatchDist"));

        gridLayout->addWidget(hatchDist, 0, 1, 1, 1);

        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        hatchAngle = new ScrSpinBox(page);
        hatchAngle->setObjectName(QStringLiteral("hatchAngle"));

        gridLayout->addWidget(hatchAngle, 1, 1, 1, 1);

        label_11 = new QLabel(page);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        hatchType = new QComboBox(page);
        hatchType->setObjectName(QStringLiteral("hatchType"));

        gridLayout->addWidget(hatchType, 2, 1, 1, 1);

        label_12 = new QLabel(page);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        hatchLineColor = new ColorCombo(page);
        hatchLineColor->setObjectName(QStringLiteral("hatchLineColor"));

        gridLayout->addWidget(hatchLineColor, 3, 1, 1, 1);

        label_13 = new QLabel(page);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 4, 0, 1, 1);

        hatchBackground = new ColorCombo(page);
        hatchBackground->setObjectName(QStringLiteral("hatchBackground"));

        gridLayout->addWidget(hatchBackground, 4, 1, 1, 1);


        verticalLayout_12->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 75, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_3);

        fillModeStack->addWidget(page);
        patternFillPage = new QWidget();
        patternFillPage->setObjectName(QStringLiteral("patternFillPage"));
        verticalLayout_6 = new QVBoxLayout(patternFillPage);
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        patternBox = new QListWidget(patternFillPage);
        patternBox->setObjectName(QStringLiteral("patternBox"));
        patternBox->setMovement(QListView::Snap);
        patternBox->setFlow(QListView::LeftToRight);
        patternBox->setProperty("isWrapping", QVariant(true));
        patternBox->setResizeMode(QListView::Adjust);
        patternBox->setViewMode(QListView::IconMode);
        patternBox->setWordWrap(true);

        verticalLayout_6->addWidget(patternBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        editPatternProps = new QToolButton(patternFillPage);
        editPatternProps->setObjectName(QStringLiteral("editPatternProps"));

        horizontalLayout_5->addWidget(editPatternProps);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_5);

        fillModeStack->addWidget(patternFillPage);

        verticalLayout_2->addWidget(fillModeStack);

        tabFillStroke->addTab(tabFill, QString());
        tabStroke = new QWidget();
        tabStroke->setObjectName(QStringLiteral("tabStroke"));
        verticalLayout_11 = new QVBoxLayout(tabStroke);
        verticalLayout_11->setSpacing(2);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        strokeModeLabel = new QLabel(tabStroke);
        strokeModeLabel->setObjectName(QStringLiteral("strokeModeLabel"));

        horizontalLayout_6->addWidget(strokeModeLabel);

        strokeModeCombo = new QComboBox(tabStroke);
        strokeModeCombo->setObjectName(QStringLiteral("strokeModeCombo"));

        horizontalLayout_6->addWidget(strokeModeCombo);


        verticalLayout_11->addLayout(horizontalLayout_6);

        line_2 = new QFrame(tabStroke);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_11->addWidget(line_2);

        strokeModeStack = new QStackedWidget(tabStroke);
        strokeModeStack->setObjectName(QStringLiteral("strokeModeStack"));
        solidStrokePage = new QWidget();
        solidStrokePage->setObjectName(QStringLiteral("solidStrokePage"));
        verticalLayout_7 = new QVBoxLayout(solidStrokePage);
        verticalLayout_7->setSpacing(2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        colorListStroke = new ColorListBox(solidStrokePage);
        colorListStroke->setObjectName(QStringLiteral("colorListStroke"));

        verticalLayout_7->addWidget(colorListStroke);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(solidStrokePage);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        strokeShade = new ScrSpinBox(solidStrokePage);
        strokeShade->setObjectName(QStringLiteral("strokeShade"));
        strokeShade->setMaximum(100);
        strokeShade->setValue(100);

        horizontalLayout_7->addWidget(strokeShade);


        verticalLayout_7->addLayout(horizontalLayout_7);

        strokeModeStack->addWidget(solidStrokePage);
        gradientStrokePage = new QWidget();
        gradientStrokePage->setObjectName(QStringLiteral("gradientStrokePage"));
        verticalLayout_10 = new QVBoxLayout(gradientStrokePage);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        gradientTypeStroke = new QComboBox(gradientStrokePage);
        gradientTypeStroke->setObjectName(QStringLiteral("gradientTypeStroke"));

        horizontalLayout_9->addWidget(gradientTypeStroke);

        gradEditButtonStroke = new QToolButton(gradientStrokePage);
        gradEditButtonStroke->setObjectName(QStringLiteral("gradEditButtonStroke"));
        gradEditButtonStroke->setCheckable(true);

        horizontalLayout_9->addWidget(gradEditButtonStroke);


        verticalLayout_10->addLayout(horizontalLayout_9);

        namedGradientStroke = new ScComboBox(gradientStrokePage);
        namedGradientStroke->setObjectName(QStringLiteral("namedGradientStroke"));

        verticalLayout_10->addWidget(namedGradientStroke);

        gradEditStroke = new GradientEditor(gradientStrokePage);
        gradEditStroke->setObjectName(QStringLiteral("gradEditStroke"));
        sizePolicy.setHeightForWidth(gradEditStroke->sizePolicy().hasHeightForWidth());
        gradEditStroke->setSizePolicy(sizePolicy);
        gradEditStroke->setFrameShape(QFrame::NoFrame);
        gradEditStroke->setFrameShadow(QFrame::Raised);

        verticalLayout_10->addWidget(gradEditStroke);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_15 = new QLabel(gradientStrokePage);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_12->addWidget(label_15);

        GradientExtendS = new QComboBox(gradientStrokePage);
        GradientExtendS->setObjectName(QStringLiteral("GradientExtendS"));

        horizontalLayout_12->addWidget(GradientExtendS);


        verticalLayout_10->addLayout(horizontalLayout_12);

        strokeModeStack->addWidget(gradientStrokePage);
        patternStrokePage = new QWidget();
        patternStrokePage->setObjectName(QStringLiteral("patternStrokePage"));
        verticalLayout_14 = new QVBoxLayout(patternStrokePage);
        verticalLayout_14->setSpacing(2);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        patternBoxStroke = new QListWidget(patternStrokePage);
        patternBoxStroke->setObjectName(QStringLiteral("patternBoxStroke"));
        patternBoxStroke->setMovement(QListView::Snap);
        patternBoxStroke->setFlow(QListView::LeftToRight);
        patternBoxStroke->setProperty("isWrapping", QVariant(true));
        patternBoxStroke->setResizeMode(QListView::Adjust);
        patternBoxStroke->setViewMode(QListView::IconMode);
        patternBoxStroke->setWordWrap(true);

        verticalLayout_14->addWidget(patternBoxStroke);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(5);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        editPatternPropsStroke = new QToolButton(patternStrokePage);
        editPatternPropsStroke->setObjectName(QStringLiteral("editPatternPropsStroke"));

        horizontalLayout_11->addWidget(editPatternPropsStroke);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_5);

        followsPath = new QCheckBox(patternStrokePage);
        followsPath->setObjectName(QStringLiteral("followsPath"));
        followsPath->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_11->addWidget(followsPath);


        verticalLayout_14->addLayout(horizontalLayout_11);

        strokeModeStack->addWidget(patternStrokePage);

        verticalLayout_11->addWidget(strokeModeStack);

        tabFillStroke->addTab(tabStroke, QString());

        verticalLayout->addWidget(tabFillStroke);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        overprintLabel = new QLabel(colorPalette);
        overprintLabel->setObjectName(QStringLiteral("overprintLabel"));

        horizontalLayout->addWidget(overprintLabel);

        overPrintCombo = new QComboBox(colorPalette);
        overPrintCombo->setObjectName(QStringLiteral("overPrintCombo"));

        horizontalLayout->addWidget(overPrintCombo);


        verticalLayout->addLayout(horizontalLayout);

        displayAllColors = new QCheckBox(colorPalette);
        displayAllColors->setObjectName(QStringLiteral("displayAllColors"));
        displayAllColors->setLayoutDirection(Qt::RightToLeft);

        verticalLayout->addWidget(displayAllColors);


        retranslateUi(colorPalette);

        tabFillStroke->setCurrentIndex(0);
        fillModeStack->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);
        strokeModeStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(colorPalette);
    } // setupUi

    void retranslateUi(QWidget *colorPalette)
    {
        colorPalette->setWindowTitle(QApplication::translate("colorPalette", "Form", 0));
        fillModeLabel->setText(QApplication::translate("colorPalette", "Fill Mode", 0));
        label->setText(QApplication::translate("colorPalette", "Shade:", 0));
        fillShade->setSuffix(QApplication::translate("colorPalette", "%", 0));
        gradientType->clear();
        gradientType->insertItems(0, QStringList()
         << QApplication::translate("colorPalette", "Linear", 0)
         << QApplication::translate("colorPalette", "Radial", 0)
         << QApplication::translate("colorPalette", "Conical", 0)
         << QApplication::translate("colorPalette", "4 Colors", 0)
         << QApplication::translate("colorPalette", "Diamond", 0)
         << QApplication::translate("colorPalette", "Mesh", 0)
         << QApplication::translate("colorPalette", "Patch Mesh", 0)
        );
        gradEditButton->setText(QApplication::translate("colorPalette", "Move Vector", 0));
        label_14->setText(QApplication::translate("colorPalette", "Extend:", 0));
        gradientExtend->clear();
        gradientExtend->insertItems(0, QStringList()
         << QApplication::translate("colorPalette", "None", 0)
         << QApplication::translate("colorPalette", "Pad", 0)
        );
        label_5->setText(QApplication::translate("colorPalette", "Color", 0));
        label_2->setText(QApplication::translate("colorPalette", "Shade", 0));
        label_9->setText(QApplication::translate("colorPalette", "Transparency", 0));
        color1Shade->setSuffix(QApplication::translate("colorPalette", " %", 0));
        color1Alpha->setSuffix(QApplication::translate("colorPalette", " %", 0));
        color2Shade->setSuffix(QApplication::translate("colorPalette", " %", 0));
        color2Alpha->setSuffix(QApplication::translate("colorPalette", " %", 0));
        color3Shade->setSuffix(QApplication::translate("colorPalette", " %", 0));
        color3Alpha->setSuffix(QApplication::translate("colorPalette", " %", 0));
        color4Shade->setSuffix(QApplication::translate("colorPalette", " %", 0));
        color4Alpha->setSuffix(QApplication::translate("colorPalette", " %", 0));
        label_3->setText(QApplication::translate("colorPalette", "Color:", 0));
        label_4->setText(QApplication::translate("colorPalette", "Shade:", 0));
        shadeMeshPoint->setSuffix(QApplication::translate("colorPalette", " %", 0));
        label_6->setText(QApplication::translate("colorPalette", "Opacity:", 0));
        transparencyMeshPoint->setSuffix(QApplication::translate("colorPalette", " %", 0));
        editMeshColors->setText(QApplication::translate("colorPalette", "Edit Colors", 0));
        label_8->setText(QApplication::translate("colorPalette", "Distance:", 0));
        label_10->setText(QApplication::translate("colorPalette", "Angle:", 0));
        label_11->setText(QApplication::translate("colorPalette", "Type:", 0));
        hatchType->clear();
        hatchType->insertItems(0, QStringList()
         << QApplication::translate("colorPalette", "Single", 0)
         << QApplication::translate("colorPalette", "Double", 0)
         << QApplication::translate("colorPalette", "Triple", 0)
        );
        label_12->setText(QApplication::translate("colorPalette", "Line Color:", 0));
        label_13->setText(QApplication::translate("colorPalette", "Background", 0));
        editPatternProps->setText(QApplication::translate("colorPalette", "Properties...", 0));
        tabFillStroke->setTabText(tabFillStroke->indexOf(tabFill), QApplication::translate("colorPalette", "Fill", 0));
        strokeModeLabel->setText(QApplication::translate("colorPalette", "Stroke Mode", 0));
        label_7->setText(QApplication::translate("colorPalette", "Shade:", 0));
        strokeShade->setSuffix(QApplication::translate("colorPalette", "%", 0));
        gradientTypeStroke->clear();
        gradientTypeStroke->insertItems(0, QStringList()
         << QApplication::translate("colorPalette", "Linear", 0)
         << QApplication::translate("colorPalette", "Radial", 0)
        );
        gradEditButtonStroke->setText(QApplication::translate("colorPalette", "Move Vector", 0));
        label_15->setText(QApplication::translate("colorPalette", "Extend:", 0));
        GradientExtendS->clear();
        GradientExtendS->insertItems(0, QStringList()
         << QApplication::translate("colorPalette", "None", 0)
         << QApplication::translate("colorPalette", "Pad", 0)
        );
        editPatternPropsStroke->setText(QApplication::translate("colorPalette", "Properties...", 0));
        followsPath->setText(QApplication::translate("colorPalette", "Pattern follows Path", 0));
        tabFillStroke->setTabText(tabFillStroke->indexOf(tabStroke), QApplication::translate("colorPalette", "Stroke", 0));
        overprintLabel->setText(QApplication::translate("colorPalette", "Overprinting", 0));
        overPrintCombo->clear();
        overPrintCombo->insertItems(0, QStringList()
         << QApplication::translate("colorPalette", "Knockout", 0)
         << QApplication::translate("colorPalette", "Overprint", 0)
        );
        displayAllColors->setText(QApplication::translate("colorPalette", "Display only used colors", 0));
    } // retranslateUi

};

namespace Ui {
    class colorPalette: public Ui_colorPalette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORPALETTE_H
