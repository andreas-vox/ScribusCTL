/********************************************************************************
** Form generated from reading UI file 'pathfinderbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHFINDERBASE_H
#define UI_PATHFINDERBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "ui/colorcombo.h"

QT_BEGIN_NAMESPACE

class Ui_PathFinderBase
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QLabel *sourceShape;
    QCheckBox *keepSource1;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *vboxLayout1;
    QSpacerItem *spacerItem;
    QLabel *label;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout2;
    QLabel *sourceShape2;
    QCheckBox *keepSource2;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *vboxLayout3;
    QSpacerItem *spacerItem2;
    QLabel *label_2;
    QSpacerItem *spacerItem3;
    QVBoxLayout *vboxLayout4;
    QLabel *resultShape;
    QSpacerItem *spacerItem4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout1;
    QToolButton *opCombine;
    QToolButton *opSubtraction;
    QToolButton *opIntersection;
    QToolButton *opExclusion;
    QToolButton *opParts;
    QCheckBox *swapShapes;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *optionGroup;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *targetGetsSource1Color;
    QRadioButton *targetGetsSource2Color;
    QRadioButton *targetGetsOtherColor;
    QGridLayout *gridLayout;
    QLabel *label_3;
    ColorCombo *otherColorComboLine;
    QLabel *label_4;
    ColorCombo *otherColorComboFill;
    QSpacerItem *verticalSpacer_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PathFinderBase)
    {
        if (PathFinderBase->objectName().isEmpty())
            PathFinderBase->setObjectName(QStringLiteral("PathFinderBase"));
        PathFinderBase->resize(422, 386);
        verticalLayout_4 = new QVBoxLayout(PathFinderBase);
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setContentsMargins(10, 10, 10, 10);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(5);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        sourceShape = new QLabel(PathFinderBase);
        sourceShape->setObjectName(QStringLiteral("sourceShape"));
        sourceShape->setMinimumSize(QSize(100, 100));
        sourceShape->setMaximumSize(QSize(100, 100));
        sourceShape->setAutoFillBackground(true);
        sourceShape->setFrameShape(QFrame::Panel);
        sourceShape->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(sourceShape);

        keepSource1 = new QCheckBox(PathFinderBase);
        keepSource1->setObjectName(QStringLiteral("keepSource1"));

        vboxLayout->addWidget(keepSource1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer_2);


        hboxLayout->addLayout(vboxLayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(0);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        spacerItem = new QSpacerItem(2, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        label = new QLabel(PathFinderBase);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        vboxLayout1->addWidget(label);

        spacerItem1 = new QSpacerItem(2, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(5);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        sourceShape2 = new QLabel(PathFinderBase);
        sourceShape2->setObjectName(QStringLiteral("sourceShape2"));
        sourceShape2->setMinimumSize(QSize(100, 100));
        sourceShape2->setMaximumSize(QSize(100, 100));
        sourceShape2->setAutoFillBackground(true);
        sourceShape2->setFrameShape(QFrame::Panel);
        sourceShape2->setFrameShadow(QFrame::Sunken);

        vboxLayout2->addWidget(sourceShape2);

        keepSource2 = new QCheckBox(PathFinderBase);
        keepSource2->setObjectName(QStringLiteral("keepSource2"));

        vboxLayout2->addWidget(keepSource2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(verticalSpacer_3);


        hboxLayout->addLayout(vboxLayout2);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(0);
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        spacerItem2 = new QSpacerItem(2, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem2);

        label_2 = new QLabel(PathFinderBase);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        vboxLayout3->addWidget(label_2);

        spacerItem3 = new QSpacerItem(2, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem3);


        hboxLayout->addLayout(vboxLayout3);

        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setSpacing(5);
        vboxLayout4->setObjectName(QStringLiteral("vboxLayout4"));
        resultShape = new QLabel(PathFinderBase);
        resultShape->setObjectName(QStringLiteral("resultShape"));
        resultShape->setMinimumSize(QSize(100, 100));
        resultShape->setMaximumSize(QSize(100, 100));
        resultShape->setAutoFillBackground(true);
        resultShape->setFrameShape(QFrame::Panel);
        resultShape->setFrameShadow(QFrame::Sunken);

        vboxLayout4->addWidget(resultShape);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(spacerItem4);


        hboxLayout->addLayout(vboxLayout4);


        verticalLayout_4->addLayout(hboxLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(PathFinderBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        hboxLayout1 = new QHBoxLayout(groupBox);
        hboxLayout1->setSpacing(5);
        hboxLayout1->setContentsMargins(10, 10, 10, 10);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        opCombine = new QToolButton(groupBox);
        opCombine->setObjectName(QStringLiteral("opCombine"));
        opCombine->setCheckable(true);
        opCombine->setChecked(true);
        opCombine->setAutoExclusive(true);

        hboxLayout1->addWidget(opCombine);

        opSubtraction = new QToolButton(groupBox);
        opSubtraction->setObjectName(QStringLiteral("opSubtraction"));
        opSubtraction->setCheckable(true);
        opSubtraction->setAutoExclusive(true);

        hboxLayout1->addWidget(opSubtraction);

        opIntersection = new QToolButton(groupBox);
        opIntersection->setObjectName(QStringLiteral("opIntersection"));
        opIntersection->setCheckable(true);
        opIntersection->setAutoExclusive(true);

        hboxLayout1->addWidget(opIntersection);

        opExclusion = new QToolButton(groupBox);
        opExclusion->setObjectName(QStringLiteral("opExclusion"));
        opExclusion->setCheckable(true);
        opExclusion->setAutoExclusive(true);

        hboxLayout1->addWidget(opExclusion);

        opParts = new QToolButton(groupBox);
        opParts->setObjectName(QStringLiteral("opParts"));
        opParts->setCheckable(true);
        opParts->setAutoExclusive(true);

        hboxLayout1->addWidget(opParts);


        verticalLayout->addWidget(groupBox);

        swapShapes = new QCheckBox(PathFinderBase);
        swapShapes->setObjectName(QStringLiteral("swapShapes"));

        verticalLayout->addWidget(swapShapes);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        optionGroup = new QGroupBox(PathFinderBase);
        optionGroup->setObjectName(QStringLiteral("optionGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(optionGroup->sizePolicy().hasHeightForWidth());
        optionGroup->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(optionGroup);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        targetGetsSource1Color = new QRadioButton(optionGroup);
        targetGetsSource1Color->setObjectName(QStringLiteral("targetGetsSource1Color"));
        targetGetsSource1Color->setChecked(true);

        verticalLayout_2->addWidget(targetGetsSource1Color);

        targetGetsSource2Color = new QRadioButton(optionGroup);
        targetGetsSource2Color->setObjectName(QStringLiteral("targetGetsSource2Color"));

        verticalLayout_2->addWidget(targetGetsSource2Color);

        targetGetsOtherColor = new QRadioButton(optionGroup);
        targetGetsOtherColor->setObjectName(QStringLiteral("targetGetsOtherColor"));

        verticalLayout_2->addWidget(targetGetsOtherColor);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(optionGroup);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(false);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        otherColorComboLine = new ColorCombo(optionGroup);
        otherColorComboLine->setObjectName(QStringLiteral("otherColorComboLine"));
        otherColorComboLine->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(otherColorComboLine->sizePolicy().hasHeightForWidth());
        otherColorComboLine->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(otherColorComboLine, 0, 1, 1, 1);

        label_4 = new QLabel(optionGroup);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(false);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        otherColorComboFill = new ColorCombo(optionGroup);
        otherColorComboFill->setObjectName(QStringLiteral("otherColorComboFill"));
        otherColorComboFill->setEnabled(false);

        gridLayout->addWidget(otherColorComboFill, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_3->addWidget(optionGroup);

        verticalSpacer_4 = new QSpacerItem(159, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(PathFinderBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(PathFinderBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), PathFinderBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PathFinderBase, SLOT(reject()));
        QObject::connect(targetGetsSource1Color, SIGNAL(clicked(bool)), otherColorComboLine, SLOT(setDisabled(bool)));
        QObject::connect(targetGetsSource1Color, SIGNAL(clicked(bool)), otherColorComboFill, SLOT(setDisabled(bool)));
        QObject::connect(targetGetsSource2Color, SIGNAL(clicked(bool)), otherColorComboLine, SLOT(setDisabled(bool)));
        QObject::connect(targetGetsSource2Color, SIGNAL(clicked(bool)), otherColorComboFill, SLOT(setDisabled(bool)));
        QObject::connect(targetGetsOtherColor, SIGNAL(clicked(bool)), otherColorComboLine, SLOT(setEnabled(bool)));
        QObject::connect(targetGetsOtherColor, SIGNAL(clicked(bool)), otherColorComboFill, SLOT(setEnabled(bool)));
        QObject::connect(targetGetsSource1Color, SIGNAL(clicked(bool)), label_3, SLOT(setDisabled(bool)));
        QObject::connect(targetGetsSource2Color, SIGNAL(clicked(bool)), label_3, SLOT(setDisabled(bool)));
        QObject::connect(targetGetsOtherColor, SIGNAL(clicked(bool)), label_3, SLOT(setEnabled(bool)));
        QObject::connect(targetGetsSource1Color, SIGNAL(clicked(bool)), label_4, SLOT(setDisabled(bool)));
        QObject::connect(targetGetsSource2Color, SIGNAL(clicked(bool)), label_4, SLOT(setDisabled(bool)));
        QObject::connect(targetGetsOtherColor, SIGNAL(clicked(bool)), label_4, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(PathFinderBase);
    } // setupUi

    void retranslateUi(QDialog *PathFinderBase)
    {
        PathFinderBase->setWindowTitle(QApplication::translate("PathFinderBase", "Boolean Path Operations", 0));
#ifndef QT_NO_TOOLTIP
        sourceShape->setToolTip(QApplication::translate("PathFinderBase", "First source shape.", 0));
#endif // QT_NO_TOOLTIP
        sourceShape->setText(QString());
#ifndef QT_NO_TOOLTIP
        keepSource1->setToolTip(QApplication::translate("PathFinderBase", "Keep a copy of the original item after applying the operation", 0));
#endif // QT_NO_TOOLTIP
        keepSource1->setText(QApplication::translate("PathFinderBase", "Keep", 0));
        label->setText(QApplication::translate("PathFinderBase", "+", 0));
#ifndef QT_NO_TOOLTIP
        sourceShape2->setToolTip(QApplication::translate("PathFinderBase", "Second source shape.", 0));
#endif // QT_NO_TOOLTIP
        sourceShape2->setText(QString());
#ifndef QT_NO_TOOLTIP
        keepSource2->setToolTip(QApplication::translate("PathFinderBase", "Keep a copy of the original item after applying the operation", 0));
#endif // QT_NO_TOOLTIP
        keepSource2->setText(QApplication::translate("PathFinderBase", "Keep", 0));
        label_2->setText(QApplication::translate("PathFinderBase", "=", 0));
#ifndef QT_NO_TOOLTIP
        resultShape->setToolTip(QApplication::translate("PathFinderBase", "The resulting shape.", 0));
#endif // QT_NO_TOOLTIP
        resultShape->setText(QString());
        groupBox->setTitle(QApplication::translate("PathFinderBase", "Operation", 0));
#ifndef QT_NO_TOOLTIP
        opCombine->setToolTip(QApplication::translate("PathFinderBase", "Unites the shapes", 0));
#endif // QT_NO_TOOLTIP
        opCombine->setText(QApplication::translate("PathFinderBase", "...", 0));
#ifndef QT_NO_TOOLTIP
        opSubtraction->setToolTip(QApplication::translate("PathFinderBase", "Subtracts the second shape from the first shape", 0));
#endif // QT_NO_TOOLTIP
        opSubtraction->setText(QApplication::translate("PathFinderBase", "...", 0));
#ifndef QT_NO_TOOLTIP
        opIntersection->setToolTip(QApplication::translate("PathFinderBase", "Intersection of the shapes", 0));
#endif // QT_NO_TOOLTIP
        opIntersection->setText(QApplication::translate("PathFinderBase", "...", 0));
#ifndef QT_NO_TOOLTIP
        opExclusion->setToolTip(QApplication::translate("PathFinderBase", "Result is the area where the two shapes do not intersect", 0));
#endif // QT_NO_TOOLTIP
        opExclusion->setText(QApplication::translate("PathFinderBase", "...", 0));
#ifndef QT_NO_TOOLTIP
        opParts->setToolTip(QApplication::translate("PathFinderBase", "Break apart,\n"
"The result is a combination of \"Intersection\" and \"Exclusion\"", 0));
#endif // QT_NO_TOOLTIP
        opParts->setText(QApplication::translate("PathFinderBase", "...", 0));
#ifndef QT_NO_TOOLTIP
        swapShapes->setToolTip(QApplication::translate("PathFinderBase", "Exchange the Source Shapes", 0));
#endif // QT_NO_TOOLTIP
        swapShapes->setText(QApplication::translate("PathFinderBase", "Swap Shapes", 0));
        optionGroup->setTitle(QApplication::translate("PathFinderBase", "Result Takes Color from:", 0));
#ifndef QT_NO_TOOLTIP
        targetGetsSource1Color->setToolTip(QApplication::translate("PathFinderBase", "The resulting shape uses the color of the first source shape", 0));
#endif // QT_NO_TOOLTIP
        targetGetsSource1Color->setText(QApplication::translate("PathFinderBase", "First Shape", 0));
#ifndef QT_NO_TOOLTIP
        targetGetsSource2Color->setToolTip(QApplication::translate("PathFinderBase", "The resulting shape uses the color of the second source shape", 0));
#endif // QT_NO_TOOLTIP
        targetGetsSource2Color->setText(QApplication::translate("PathFinderBase", "Second Shape", 0));
#ifndef QT_NO_TOOLTIP
        targetGetsOtherColor->setToolTip(QApplication::translate("PathFinderBase", "The resulting shape uses the colors listed below", 0));
#endif // QT_NO_TOOLTIP
        targetGetsOtherColor->setText(QApplication::translate("PathFinderBase", "Custom Colors", 0));
        label_3->setText(QApplication::translate("PathFinderBase", "Stroke:", 0));
#ifndef QT_NO_TOOLTIP
        otherColorComboLine->setToolTip(QApplication::translate("PathFinderBase", "Stroke Color", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("PathFinderBase", "Fill:", 0));
#ifndef QT_NO_TOOLTIP
        otherColorComboFill->setToolTip(QApplication::translate("PathFinderBase", "Fill Color", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class PathFinderBase: public Ui_PathFinderBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHFINDERBASE_H
