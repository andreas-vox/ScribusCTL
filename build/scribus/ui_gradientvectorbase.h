/********************************************************************************
** Form generated from reading UI file 'gradientvectorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADIENTVECTORBASE_H
#define UI_GRADIENTVECTORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/scrpalettebase.h"
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_GradientVectorBase
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageLinear;
    QGridLayout *gridLayout_3;
    QLabel *label;
    ScrSpinBox *gX1;
    QLabel *label_2;
    ScrSpinBox *gY1;
    QLabel *label_3;
    ScrSpinBox *gX2;
    QLabel *label_4;
    ScrSpinBox *gY2;
    QLabel *label_5;
    ScrSpinBox *gSk;
    QWidget *pageRadial;
    QGridLayout *gridLayout;
    QLabel *label_8;
    ScrSpinBox *gX1_2;
    QLabel *label_6;
    ScrSpinBox *gY1_2;
    QLabel *label_9;
    ScrSpinBox *gX2_2;
    QLabel *label_10;
    ScrSpinBox *gY2_2;
    QLabel *label_11;
    ScrSpinBox *gFX;
    QLabel *label_12;
    ScrSpinBox *gFY;
    QLabel *label_7;
    ScrSpinBox *gSk_2;
    QLabel *label_13;
    ScrSpinBox *gSc;
    QWidget *pageFourColor;
    QGridLayout *gridLayout_4;
    QLabel *label_19;
    ScrSpinBox *gC1X;
    QLabel *label_18;
    ScrSpinBox *gC1Y;
    QLabel *label_16;
    ScrSpinBox *gC2X;
    QLabel *label_17;
    ScrSpinBox *gC2Y;
    QLabel *label_15;
    ScrSpinBox *gC3X;
    QLabel *label_14;
    ScrSpinBox *gC3Y;
    QLabel *label_21;
    ScrSpinBox *gC4X;
    QLabel *label_20;
    ScrSpinBox *gC4Y;
    QWidget *pageDiamond;
    QGridLayout *gridLayout_2;
    QLabel *label_23;
    ScrSpinBox *gC1XD;
    QLabel *label_26;
    ScrSpinBox *gC1YD;
    QLabel *label_25;
    ScrSpinBox *gC2XD;
    QLabel *label_24;
    ScrSpinBox *gC2YD;
    QLabel *label_27;
    ScrSpinBox *gC3XD;
    QLabel *label_29;
    ScrSpinBox *gC3YD;
    QLabel *label_28;
    ScrSpinBox *gC4XD;
    QLabel *label_22;
    ScrSpinBox *gC4YD;
    QLabel *label_30;
    ScrSpinBox *gC5XD;
    QLabel *label_31;
    ScrSpinBox *gC5YD;
    QWidget *pageMesh;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_5;
    QToolButton *editPoints;
    QToolButton *editControlPoints;
    QToolButton *resetControlPoint;
    QToolButton *resetAllControlPoints;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_6;
    QPushButton *buttonNewGrid;
    QPushButton *buttonResetGrid;
    QPushButton *buttonPoLIne;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *pagePatch;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_7;
    QToolButton *editPPoint;
    QToolButton *editPControlPoints;
    QToolButton *resetPControlPoint;
    QToolButton *resetAllPControlPoints;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *snapToGrid;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *buttonAddPatch;
    QPushButton *buttonRemovePatch;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(ScrPaletteBase *GradientVectorBase)
    {
        if (GradientVectorBase->objectName().isEmpty())
            GradientVectorBase->setObjectName(QStringLiteral("GradientVectorBase"));
        GradientVectorBase->setEnabled(true);
        GradientVectorBase->resize(251, 180);
        GradientVectorBase->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(GradientVectorBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(GradientVectorBase);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageLinear = new QWidget();
        pageLinear->setObjectName(QStringLiteral("pageLinear"));
        gridLayout_3 = new QGridLayout(pageLinear);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(pageLinear);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        gX1 = new ScrSpinBox(pageLinear);
        gX1->setObjectName(QStringLiteral("gX1"));
        gX1->setMinimum(-3000);
        gX1->setMaximum(3000);

        gridLayout_3->addWidget(gX1, 0, 1, 1, 1);

        label_2 = new QLabel(pageLinear);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 2, 1, 1);

        gY1 = new ScrSpinBox(pageLinear);
        gY1->setObjectName(QStringLiteral("gY1"));
        gY1->setMinimum(-3000);
        gY1->setMaximum(3000);

        gridLayout_3->addWidget(gY1, 0, 3, 1, 1);

        label_3 = new QLabel(pageLinear);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        gX2 = new ScrSpinBox(pageLinear);
        gX2->setObjectName(QStringLiteral("gX2"));
        gX2->setMinimum(-3000);
        gX2->setMaximum(3000);

        gridLayout_3->addWidget(gX2, 1, 1, 1, 1);

        label_4 = new QLabel(pageLinear);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 1, 2, 1, 1);

        gY2 = new ScrSpinBox(pageLinear);
        gY2->setObjectName(QStringLiteral("gY2"));
        gY2->setMinimum(-3000);
        gY2->setMaximum(3000);

        gridLayout_3->addWidget(gY2, 1, 3, 1, 1);

        label_5 = new QLabel(pageLinear);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 2, 0, 1, 1);

        gSk = new ScrSpinBox(pageLinear);
        gSk->setObjectName(QStringLiteral("gSk"));
        gSk->setMinimum(-89);
        gSk->setMaximum(89);

        gridLayout_3->addWidget(gSk, 2, 1, 1, 1);

        stackedWidget->addWidget(pageLinear);
        pageRadial = new QWidget();
        pageRadial->setObjectName(QStringLiteral("pageRadial"));
        gridLayout = new QGridLayout(pageRadial);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_8 = new QLabel(pageRadial);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        gX1_2 = new ScrSpinBox(pageRadial);
        gX1_2->setObjectName(QStringLiteral("gX1_2"));
        gX1_2->setMinimum(-3000);
        gX1_2->setMaximum(3000);

        gridLayout->addWidget(gX1_2, 0, 1, 1, 1);

        label_6 = new QLabel(pageRadial);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        gY1_2 = new ScrSpinBox(pageRadial);
        gY1_2->setObjectName(QStringLiteral("gY1_2"));
        gY1_2->setMinimum(-3000);
        gY1_2->setMaximum(3000);

        gridLayout->addWidget(gY1_2, 0, 3, 1, 1);

        label_9 = new QLabel(pageRadial);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        gX2_2 = new ScrSpinBox(pageRadial);
        gX2_2->setObjectName(QStringLiteral("gX2_2"));
        gX2_2->setMinimum(-3000);
        gX2_2->setMaximum(3000);

        gridLayout->addWidget(gX2_2, 1, 1, 1, 1);

        label_10 = new QLabel(pageRadial);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 1, 2, 1, 1);

        gY2_2 = new ScrSpinBox(pageRadial);
        gY2_2->setObjectName(QStringLiteral("gY2_2"));
        gY2_2->setMinimum(-3000);
        gY2_2->setMaximum(3000);

        gridLayout->addWidget(gY2_2, 1, 3, 1, 1);

        label_11 = new QLabel(pageRadial);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        gFX = new ScrSpinBox(pageRadial);
        gFX->setObjectName(QStringLiteral("gFX"));
        gFX->setMinimum(-3000);
        gFX->setMaximum(3000);

        gridLayout->addWidget(gFX, 2, 1, 1, 1);

        label_12 = new QLabel(pageRadial);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 2, 2, 1, 1);

        gFY = new ScrSpinBox(pageRadial);
        gFY->setObjectName(QStringLiteral("gFY"));
        gFY->setMinimum(-3000);
        gFY->setMaximum(3000);

        gridLayout->addWidget(gFY, 2, 3, 1, 1);

        label_7 = new QLabel(pageRadial);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        gSk_2 = new ScrSpinBox(pageRadial);
        gSk_2->setObjectName(QStringLiteral("gSk_2"));
        gSk_2->setMinimum(-89);
        gSk_2->setMaximum(89);

        gridLayout->addWidget(gSk_2, 3, 1, 1, 1);

        label_13 = new QLabel(pageRadial);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 4, 0, 1, 1);

        gSc = new ScrSpinBox(pageRadial);
        gSc->setObjectName(QStringLiteral("gSc"));
        gSc->setMinimum(0.01);
        gSc->setMaximum(100);
        gSc->setValue(100);

        gridLayout->addWidget(gSc, 4, 1, 1, 1);

        stackedWidget->addWidget(pageRadial);
        pageFourColor = new QWidget();
        pageFourColor->setObjectName(QStringLiteral("pageFourColor"));
        gridLayout_4 = new QGridLayout(pageFourColor);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_19 = new QLabel(pageFourColor);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_4->addWidget(label_19, 0, 0, 1, 1);

        gC1X = new ScrSpinBox(pageFourColor);
        gC1X->setObjectName(QStringLiteral("gC1X"));
        gC1X->setMinimum(-3000);
        gC1X->setMaximum(3000);

        gridLayout_4->addWidget(gC1X, 0, 1, 1, 1);

        label_18 = new QLabel(pageFourColor);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_4->addWidget(label_18, 0, 2, 1, 1);

        gC1Y = new ScrSpinBox(pageFourColor);
        gC1Y->setObjectName(QStringLiteral("gC1Y"));
        gC1Y->setMinimum(-3000);
        gC1Y->setMaximum(3000);

        gridLayout_4->addWidget(gC1Y, 0, 3, 1, 1);

        label_16 = new QLabel(pageFourColor);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_4->addWidget(label_16, 1, 0, 1, 1);

        gC2X = new ScrSpinBox(pageFourColor);
        gC2X->setObjectName(QStringLiteral("gC2X"));
        gC2X->setMinimum(-3000);
        gC2X->setMaximum(3000);

        gridLayout_4->addWidget(gC2X, 1, 1, 1, 1);

        label_17 = new QLabel(pageFourColor);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_4->addWidget(label_17, 1, 2, 1, 1);

        gC2Y = new ScrSpinBox(pageFourColor);
        gC2Y->setObjectName(QStringLiteral("gC2Y"));
        gC2Y->setMinimum(-3000);
        gC2Y->setMaximum(3000);

        gridLayout_4->addWidget(gC2Y, 1, 3, 1, 1);

        label_15 = new QLabel(pageFourColor);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_4->addWidget(label_15, 2, 0, 1, 1);

        gC3X = new ScrSpinBox(pageFourColor);
        gC3X->setObjectName(QStringLiteral("gC3X"));
        gC3X->setMinimum(-3000);
        gC3X->setMaximum(3000);

        gridLayout_4->addWidget(gC3X, 2, 1, 1, 1);

        label_14 = new QLabel(pageFourColor);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_4->addWidget(label_14, 2, 2, 1, 1);

        gC3Y = new ScrSpinBox(pageFourColor);
        gC3Y->setObjectName(QStringLiteral("gC3Y"));
        gC3Y->setMinimum(-3000);
        gC3Y->setMaximum(3000);

        gridLayout_4->addWidget(gC3Y, 2, 3, 1, 1);

        label_21 = new QLabel(pageFourColor);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_4->addWidget(label_21, 3, 0, 1, 1);

        gC4X = new ScrSpinBox(pageFourColor);
        gC4X->setObjectName(QStringLiteral("gC4X"));
        gC4X->setMinimum(-3000);
        gC4X->setMaximum(3000);

        gridLayout_4->addWidget(gC4X, 3, 1, 1, 1);

        label_20 = new QLabel(pageFourColor);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_4->addWidget(label_20, 3, 2, 1, 1);

        gC4Y = new ScrSpinBox(pageFourColor);
        gC4Y->setObjectName(QStringLiteral("gC4Y"));
        gC4Y->setMinimum(-3000);
        gC4Y->setMaximum(3000);

        gridLayout_4->addWidget(gC4Y, 3, 3, 1, 1);

        stackedWidget->addWidget(pageFourColor);
        pageDiamond = new QWidget();
        pageDiamond->setObjectName(QStringLiteral("pageDiamond"));
        gridLayout_2 = new QGridLayout(pageDiamond);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_23 = new QLabel(pageDiamond);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_2->addWidget(label_23, 0, 0, 1, 1);

        gC1XD = new ScrSpinBox(pageDiamond);
        gC1XD->setObjectName(QStringLiteral("gC1XD"));
        gC1XD->setMinimum(-3000);
        gC1XD->setMaximum(3000);

        gridLayout_2->addWidget(gC1XD, 0, 1, 1, 1);

        label_26 = new QLabel(pageDiamond);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_2->addWidget(label_26, 0, 2, 1, 1);

        gC1YD = new ScrSpinBox(pageDiamond);
        gC1YD->setObjectName(QStringLiteral("gC1YD"));
        gC1YD->setMinimum(-3000);
        gC1YD->setMaximum(3000);

        gridLayout_2->addWidget(gC1YD, 0, 3, 1, 1);

        label_25 = new QLabel(pageDiamond);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_2->addWidget(label_25, 1, 0, 1, 1);

        gC2XD = new ScrSpinBox(pageDiamond);
        gC2XD->setObjectName(QStringLiteral("gC2XD"));
        gC2XD->setMinimum(-3000);
        gC2XD->setMaximum(3000);

        gridLayout_2->addWidget(gC2XD, 1, 1, 1, 1);

        label_24 = new QLabel(pageDiamond);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_2->addWidget(label_24, 1, 2, 1, 1);

        gC2YD = new ScrSpinBox(pageDiamond);
        gC2YD->setObjectName(QStringLiteral("gC2YD"));
        gC2YD->setMinimum(-3000);
        gC2YD->setMaximum(3000);

        gridLayout_2->addWidget(gC2YD, 1, 3, 1, 1);

        label_27 = new QLabel(pageDiamond);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_2->addWidget(label_27, 2, 0, 1, 1);

        gC3XD = new ScrSpinBox(pageDiamond);
        gC3XD->setObjectName(QStringLiteral("gC3XD"));
        gC3XD->setMinimum(-3000);
        gC3XD->setMaximum(3000);

        gridLayout_2->addWidget(gC3XD, 2, 1, 1, 1);

        label_29 = new QLabel(pageDiamond);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_2->addWidget(label_29, 2, 2, 1, 1);

        gC3YD = new ScrSpinBox(pageDiamond);
        gC3YD->setObjectName(QStringLiteral("gC3YD"));
        gC3YD->setMinimum(-3000);
        gC3YD->setMaximum(3000);

        gridLayout_2->addWidget(gC3YD, 2, 3, 1, 1);

        label_28 = new QLabel(pageDiamond);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_2->addWidget(label_28, 3, 0, 1, 1);

        gC4XD = new ScrSpinBox(pageDiamond);
        gC4XD->setObjectName(QStringLiteral("gC4XD"));
        gC4XD->setMinimum(-3000);
        gC4XD->setMaximum(3000);

        gridLayout_2->addWidget(gC4XD, 3, 1, 1, 1);

        label_22 = new QLabel(pageDiamond);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_2->addWidget(label_22, 3, 2, 1, 1);

        gC4YD = new ScrSpinBox(pageDiamond);
        gC4YD->setObjectName(QStringLiteral("gC4YD"));
        gC4YD->setMinimum(-3000);
        gC4YD->setMaximum(3000);

        gridLayout_2->addWidget(gC4YD, 3, 3, 1, 1);

        label_30 = new QLabel(pageDiamond);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_2->addWidget(label_30, 4, 0, 1, 1);

        gC5XD = new ScrSpinBox(pageDiamond);
        gC5XD->setObjectName(QStringLiteral("gC5XD"));
        gC5XD->setMinimum(-3000);
        gC5XD->setMaximum(3000);

        gridLayout_2->addWidget(gC5XD, 4, 1, 1, 1);

        label_31 = new QLabel(pageDiamond);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_2->addWidget(label_31, 4, 2, 1, 1);

        gC5YD = new ScrSpinBox(pageDiamond);
        gC5YD->setObjectName(QStringLiteral("gC5YD"));
        gC5YD->setMinimum(-3000);
        gC5YD->setMaximum(3000);

        gridLayout_2->addWidget(gC5YD, 4, 3, 1, 1);

        stackedWidget->addWidget(pageDiamond);
        pageMesh = new QWidget();
        pageMesh->setObjectName(QStringLiteral("pageMesh"));
        verticalLayout_2 = new QVBoxLayout(pageMesh);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        editPoints = new QToolButton(pageMesh);
        editPoints->setObjectName(QStringLiteral("editPoints"));
        editPoints->setMinimumSize(QSize(22, 22));
        editPoints->setCheckable(true);
        editPoints->setAutoExclusive(true);

        gridLayout_5->addWidget(editPoints, 0, 0, 1, 1);

        editControlPoints = new QToolButton(pageMesh);
        editControlPoints->setObjectName(QStringLiteral("editControlPoints"));
        editControlPoints->setMinimumSize(QSize(22, 22));
        editControlPoints->setCheckable(true);
        editControlPoints->setAutoExclusive(true);

        gridLayout_5->addWidget(editControlPoints, 1, 0, 1, 1);

        resetControlPoint = new QToolButton(pageMesh);
        resetControlPoint->setObjectName(QStringLiteral("resetControlPoint"));
        resetControlPoint->setEnabled(false);
        resetControlPoint->setMinimumSize(QSize(22, 22));
        resetControlPoint->setCheckable(false);
        resetControlPoint->setAutoExclusive(false);

        gridLayout_5->addWidget(resetControlPoint, 1, 1, 1, 1);

        resetAllControlPoints = new QToolButton(pageMesh);
        resetAllControlPoints->setObjectName(QStringLiteral("resetAllControlPoints"));
        resetAllControlPoints->setEnabled(false);
        resetAllControlPoints->setMinimumSize(QSize(22, 22));
        resetAllControlPoints->setCheckable(false);
        resetAllControlPoints->setAutoExclusive(false);

        gridLayout_5->addWidget(resetAllControlPoints, 1, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        buttonNewGrid = new QPushButton(pageMesh);
        buttonNewGrid->setObjectName(QStringLiteral("buttonNewGrid"));

        gridLayout_6->addWidget(buttonNewGrid, 0, 0, 1, 1);

        buttonResetGrid = new QPushButton(pageMesh);
        buttonResetGrid->setObjectName(QStringLiteral("buttonResetGrid"));

        gridLayout_6->addWidget(buttonResetGrid, 0, 1, 1, 1);

        buttonPoLIne = new QPushButton(pageMesh);
        buttonPoLIne->setObjectName(QStringLiteral("buttonPoLIne"));

        gridLayout_6->addWidget(buttonPoLIne, 1, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_6);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 62, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        stackedWidget->addWidget(pageMesh);
        pagePatch = new QWidget();
        pagePatch->setObjectName(QStringLiteral("pagePatch"));
        verticalLayout_3 = new QVBoxLayout(pagePatch);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        editPPoint = new QToolButton(pagePatch);
        editPPoint->setObjectName(QStringLiteral("editPPoint"));
        editPPoint->setMinimumSize(QSize(22, 22));
        editPPoint->setCheckable(true);
        editPPoint->setAutoExclusive(true);

        gridLayout_7->addWidget(editPPoint, 0, 0, 1, 1);

        editPControlPoints = new QToolButton(pagePatch);
        editPControlPoints->setObjectName(QStringLiteral("editPControlPoints"));
        editPControlPoints->setMinimumSize(QSize(22, 22));
        editPControlPoints->setCheckable(true);
        editPControlPoints->setAutoExclusive(true);

        gridLayout_7->addWidget(editPControlPoints, 1, 0, 1, 1);

        resetPControlPoint = new QToolButton(pagePatch);
        resetPControlPoint->setObjectName(QStringLiteral("resetPControlPoint"));
        resetPControlPoint->setEnabled(false);
        resetPControlPoint->setMinimumSize(QSize(22, 22));
        resetPControlPoint->setCheckable(false);
        resetPControlPoint->setAutoExclusive(false);

        gridLayout_7->addWidget(resetPControlPoint, 1, 1, 1, 1);

        resetAllPControlPoints = new QToolButton(pagePatch);
        resetAllPControlPoints->setObjectName(QStringLiteral("resetAllPControlPoints"));
        resetAllPControlPoints->setEnabled(false);
        resetAllPControlPoints->setMinimumSize(QSize(22, 22));
        resetAllPControlPoints->setCheckable(false);
        resetAllPControlPoints->setAutoExclusive(false);

        gridLayout_7->addWidget(resetAllPControlPoints, 1, 2, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        snapToGrid = new QCheckBox(pagePatch);
        snapToGrid->setObjectName(QStringLiteral("snapToGrid"));

        verticalLayout_3->addWidget(snapToGrid);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        buttonAddPatch = new QPushButton(pagePatch);
        buttonAddPatch->setObjectName(QStringLiteral("buttonAddPatch"));
        buttonAddPatch->setEnabled(true);
        buttonAddPatch->setCheckable(true);

        horizontalLayout_4->addWidget(buttonAddPatch);

        buttonRemovePatch = new QPushButton(pagePatch);
        buttonRemovePatch->setObjectName(QStringLiteral("buttonRemovePatch"));
        buttonRemovePatch->setEnabled(false);

        horizontalLayout_4->addWidget(buttonRemovePatch);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        stackedWidget->addWidget(pagePatch);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(GradientVectorBase);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GradientVectorBase);
    } // setupUi

    void retranslateUi(ScrPaletteBase *GradientVectorBase)
    {
        GradientVectorBase->setWindowTitle(QApplication::translate("GradientVectorBase", "Gradient Vector", 0));
        label->setText(QApplication::translate("GradientVectorBase", "Start:", 0));
        label_2->setText(QApplication::translate("GradientVectorBase", "/", 0));
        label_3->setText(QApplication::translate("GradientVectorBase", "End:", 0));
        label_4->setText(QApplication::translate("GradientVectorBase", "/", 0));
        label_5->setText(QApplication::translate("GradientVectorBase", "Skew:", 0));
        label_8->setText(QApplication::translate("GradientVectorBase", "Start:", 0));
        label_6->setText(QApplication::translate("GradientVectorBase", "/", 0));
        label_9->setText(QApplication::translate("GradientVectorBase", "End:", 0));
        label_10->setText(QApplication::translate("GradientVectorBase", "/", 0));
        label_11->setText(QApplication::translate("GradientVectorBase", "Focal:", 0));
        label_12->setText(QApplication::translate("GradientVectorBase", "/", 0));
        label_7->setText(QApplication::translate("GradientVectorBase", "Skew:", 0));
        label_13->setText(QApplication::translate("GradientVectorBase", "Scale:", 0));
        label_19->setText(QApplication::translate("GradientVectorBase", "1. Point:", 0));
        label_18->setText(QApplication::translate("GradientVectorBase", "/", 0));
        label_16->setText(QApplication::translate("GradientVectorBase", "2. Point:", 0));
        label_17->setText(QApplication::translate("GradientVectorBase", "/", 0));
        label_15->setText(QApplication::translate("GradientVectorBase", "3. Point:", 0));
        label_14->setText(QApplication::translate("GradientVectorBase", "/", 0));
        label_21->setText(QApplication::translate("GradientVectorBase", "4. Point:", 0));
        label_20->setText(QApplication::translate("GradientVectorBase", "/", 0));
        label_23->setText(QApplication::translate("GradientVectorBase", "1. Point:", 0));
        label_26->setText(QApplication::translate("GradientVectorBase", "/", 0));
        label_25->setText(QApplication::translate("GradientVectorBase", "2. Point:", 0));
        label_24->setText(QApplication::translate("GradientVectorBase", "/", 0));
        label_27->setText(QApplication::translate("GradientVectorBase", "3. Point:", 0));
        label_29->setText(QApplication::translate("GradientVectorBase", "/", 0));
        label_28->setText(QApplication::translate("GradientVectorBase", "4. Point:", 0));
        label_22->setText(QApplication::translate("GradientVectorBase", "/", 0));
        label_30->setText(QApplication::translate("GradientVectorBase", "5. Point:", 0));
        label_31->setText(QApplication::translate("GradientVectorBase", "/", 0));
#ifndef QT_NO_TOOLTIP
        editPoints->setToolTip(QApplication::translate("GradientVectorBase", "Edit Grid Points", 0));
#endif // QT_NO_TOOLTIP
        editPoints->setText(QString());
#ifndef QT_NO_TOOLTIP
        editControlPoints->setToolTip(QApplication::translate("GradientVectorBase", "Edit Control Points", 0));
#endif // QT_NO_TOOLTIP
        editControlPoints->setText(QString());
#ifndef QT_NO_TOOLTIP
        resetControlPoint->setToolTip(QApplication::translate("GradientVectorBase", "Reset selected Control Point", 0));
#endif // QT_NO_TOOLTIP
        resetControlPoint->setText(QString());
#ifndef QT_NO_TOOLTIP
        resetAllControlPoints->setToolTip(QApplication::translate("GradientVectorBase", "Reset all Control Points", 0));
#endif // QT_NO_TOOLTIP
        resetAllControlPoints->setText(QString());
        buttonNewGrid->setText(QApplication::translate("GradientVectorBase", "New Mesh...", 0));
        buttonResetGrid->setText(QApplication::translate("GradientVectorBase", "Reset Mesh", 0));
        buttonPoLIne->setText(QApplication::translate("GradientVectorBase", "Mesh -> Shape", 0));
#ifndef QT_NO_TOOLTIP
        editPPoint->setToolTip(QApplication::translate("GradientVectorBase", "Edit Grid Points", 0));
#endif // QT_NO_TOOLTIP
        editPPoint->setText(QString());
#ifndef QT_NO_TOOLTIP
        editPControlPoints->setToolTip(QApplication::translate("GradientVectorBase", "Edit Control Points", 0));
#endif // QT_NO_TOOLTIP
        editPControlPoints->setText(QString());
#ifndef QT_NO_TOOLTIP
        resetPControlPoint->setToolTip(QApplication::translate("GradientVectorBase", "Reset selected Control Point", 0));
#endif // QT_NO_TOOLTIP
        resetPControlPoint->setText(QString());
#ifndef QT_NO_TOOLTIP
        resetAllPControlPoints->setToolTip(QApplication::translate("GradientVectorBase", "Reset all Control Points", 0));
#endif // QT_NO_TOOLTIP
        resetAllPControlPoints->setText(QString());
        snapToGrid->setText(QApplication::translate("GradientVectorBase", "Snap to other Mesh Points", 0));
        buttonAddPatch->setText(QApplication::translate("GradientVectorBase", "Add Patch", 0));
        buttonRemovePatch->setText(QApplication::translate("GradientVectorBase", "Remove Patch", 0));
    } // retranslateUi

};

namespace Ui {
    class GradientVectorBase: public Ui_GradientVectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADIENTVECTORBASE_H
