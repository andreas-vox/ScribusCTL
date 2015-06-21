/********************************************************************************
** Form generated from reading UI file 'transparencypalette.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSPARENCYPALETTE_H
#define UI_TRANSPARENCYPALETTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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
#include "ui/gradienteditor.h"
#include "ui/sccombobox.h"

QT_BEGIN_NAMESPACE

class Ui_transparencyPalette
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QToolButton *editLineSelector;
    QToolButton *editFillSelector;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *pageS;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QLabel *label_2;
    ScrSpinBox *strokeOpacity;
    QLabel *label_3;
    ScComboBox *blendModeStroke;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tabSolid;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    ScrSpinBox *fillOpacity;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabGradient;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *gradientType;
    QToolButton *gradEditButton;
    GradientEditor *gradEdit;
    ScComboBox *namedGradient;
    QCheckBox *transpCalcGradient;
    QWidget *tabPattern;
    QVBoxLayout *verticalLayout;
    QListWidget *patternBox;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *editPatternProps;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *transpCalcPattern;
    QCheckBox *usePatternInverted;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    ScComboBox *blendModeFill;

    void setupUi(QWidget *transparencyPalette)
    {
        if (transparencyPalette->objectName().isEmpty())
            transparencyPalette->setObjectName(QStringLiteral("transparencyPalette"));
        transparencyPalette->resize(236, 373);
        verticalLayout_6 = new QVBoxLayout(transparencyPalette);
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setContentsMargins(2, 2, 2, 2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        editLineSelector = new QToolButton(transparencyPalette);
        editLineSelector->setObjectName(QStringLiteral("editLineSelector"));
        editLineSelector->setCheckable(true);
        editLineSelector->setAutoExclusive(true);

        horizontalLayout->addWidget(editLineSelector);

        editFillSelector = new QToolButton(transparencyPalette);
        editFillSelector->setObjectName(QStringLiteral("editFillSelector"));
        editFillSelector->setCheckable(true);
        editFillSelector->setAutoExclusive(true);

        horizontalLayout->addWidget(editFillSelector);

        horizontalSpacer = new QSpacerItem(40, 2, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(transparencyPalette);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageS = new QWidget();
        pageS->setObjectName(QStringLiteral("pageS"));
        verticalLayout_5 = new QVBoxLayout(pageS);
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(pageS);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        strokeOpacity = new ScrSpinBox(pageS);
        strokeOpacity->setObjectName(QStringLiteral("strokeOpacity"));
        strokeOpacity->setMaximum(100);
        strokeOpacity->setSingleStep(10);
        strokeOpacity->setValue(100);

        gridLayout->addWidget(strokeOpacity, 0, 1, 1, 1);

        label_3 = new QLabel(pageS);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        blendModeStroke = new ScComboBox(pageS);
        blendModeStroke->setObjectName(QStringLiteral("blendModeStroke"));

        gridLayout->addWidget(blendModeStroke, 1, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 240, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        stackedWidget->addWidget(pageS);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new QTabWidget(page_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabSolid = new QWidget();
        tabSolid->setObjectName(QStringLiteral("tabSolid"));
        verticalLayout_2 = new QVBoxLayout(tabSolid);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(tabSolid);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        fillOpacity = new ScrSpinBox(tabSolid);
        fillOpacity->setObjectName(QStringLiteral("fillOpacity"));
        fillOpacity->setMaximum(100);
        fillOpacity->setSingleStep(10);
        fillOpacity->setValue(100);

        horizontalLayout_4->addWidget(fillOpacity);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 195, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(tabSolid, QString());
        tabGradient = new QWidget();
        tabGradient->setObjectName(QStringLiteral("tabGradient"));
        verticalLayout_4 = new QVBoxLayout(tabGradient);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gradientType = new QComboBox(tabGradient);
        gradientType->setObjectName(QStringLiteral("gradientType"));

        horizontalLayout_3->addWidget(gradientType);

        gradEditButton = new QToolButton(tabGradient);
        gradEditButton->setObjectName(QStringLiteral("gradEditButton"));
        gradEditButton->setCheckable(true);

        horizontalLayout_3->addWidget(gradEditButton);


        verticalLayout_4->addLayout(horizontalLayout_3);

        gradEdit = new GradientEditor(tabGradient);
        gradEdit->setObjectName(QStringLiteral("gradEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gradEdit->sizePolicy().hasHeightForWidth());
        gradEdit->setSizePolicy(sizePolicy);
        gradEdit->setMinimumSize(QSize(200, 173));
        gradEdit->setFrameShape(QFrame::NoFrame);
        gradEdit->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(gradEdit);

        namedGradient = new ScComboBox(tabGradient);
        namedGradient->setObjectName(QStringLiteral("namedGradient"));

        verticalLayout_4->addWidget(namedGradient);

        transpCalcGradient = new QCheckBox(tabGradient);
        transpCalcGradient->setObjectName(QStringLiteral("transpCalcGradient"));

        verticalLayout_4->addWidget(transpCalcGradient);

        tabWidget->addTab(tabGradient, QString());
        tabPattern = new QWidget();
        tabPattern->setObjectName(QStringLiteral("tabPattern"));
        verticalLayout = new QVBoxLayout(tabPattern);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        patternBox = new QListWidget(tabPattern);
        patternBox->setObjectName(QStringLiteral("patternBox"));
        patternBox->setMovement(QListView::Snap);
        patternBox->setFlow(QListView::LeftToRight);
        patternBox->setProperty("isWrapping", QVariant(true));
        patternBox->setResizeMode(QListView::Adjust);
        patternBox->setViewMode(QListView::IconMode);
        patternBox->setWordWrap(true);

        verticalLayout->addWidget(patternBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        editPatternProps = new QToolButton(tabPattern);
        editPatternProps->setObjectName(QStringLiteral("editPatternProps"));

        horizontalLayout_2->addWidget(editPatternProps);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        transpCalcPattern = new QCheckBox(tabPattern);
        transpCalcPattern->setObjectName(QStringLiteral("transpCalcPattern"));

        verticalLayout->addWidget(transpCalcPattern);

        usePatternInverted = new QCheckBox(tabPattern);
        usePatternInverted->setObjectName(QStringLiteral("usePatternInverted"));

        verticalLayout->addWidget(usePatternInverted);

        tabWidget->addTab(tabPattern, QString());

        verticalLayout_3->addWidget(tabWidget);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        blendModeFill = new ScComboBox(page_2);
        blendModeFill->setObjectName(QStringLiteral("blendModeFill"));

        horizontalLayout_5->addWidget(blendModeFill);


        verticalLayout_3->addLayout(horizontalLayout_5);

        stackedWidget->addWidget(page_2);

        verticalLayout_6->addWidget(stackedWidget);


        retranslateUi(transparencyPalette);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(transparencyPalette);
    } // setupUi

    void retranslateUi(QWidget *transparencyPalette)
    {
        transparencyPalette->setWindowTitle(QApplication::translate("transparencyPalette", "Form", 0));
#ifndef QT_NO_TOOLTIP
        editLineSelector->setToolTip(QApplication::translate("transparencyPalette", "Edit Line Color Properties", 0));
#endif // QT_NO_TOOLTIP
        editLineSelector->setText(QString());
#ifndef QT_NO_TOOLTIP
        editFillSelector->setToolTip(QApplication::translate("transparencyPalette", "Edit Fill Color Properties", 0));
#endif // QT_NO_TOOLTIP
        editFillSelector->setText(QString());
        label_2->setText(QApplication::translate("transparencyPalette", "Opacity:", 0));
#ifndef QT_NO_TOOLTIP
        strokeOpacity->setToolTip(QApplication::translate("transparencyPalette", "Set the transparency for the color selected", 0));
#endif // QT_NO_TOOLTIP
        strokeOpacity->setSuffix(QApplication::translate("transparencyPalette", " %", 0));
        label_3->setText(QApplication::translate("transparencyPalette", "Blend Mode:", 0));
        blendModeStroke->clear();
        blendModeStroke->insertItems(0, QStringList()
         << QApplication::translate("transparencyPalette", "Normal", 0)
         << QApplication::translate("transparencyPalette", "Darken", 0)
         << QApplication::translate("transparencyPalette", "Lighten", 0)
         << QApplication::translate("transparencyPalette", "Multiply", 0)
         << QApplication::translate("transparencyPalette", "Screen", 0)
         << QApplication::translate("transparencyPalette", "Overlay", 0)
         << QApplication::translate("transparencyPalette", "Hard Light", 0)
         << QApplication::translate("transparencyPalette", "Soft Light", 0)
         << QApplication::translate("transparencyPalette", "Difference", 0)
         << QApplication::translate("transparencyPalette", "Exclusion", 0)
         << QApplication::translate("transparencyPalette", "Color Dodge", 0)
         << QApplication::translate("transparencyPalette", "Color Burn", 0)
         << QApplication::translate("transparencyPalette", "Hue", 0)
         << QApplication::translate("transparencyPalette", "Saturation", 0)
         << QApplication::translate("transparencyPalette", "Color", 0)
         << QApplication::translate("transparencyPalette", "Luminosity", 0)
        );
        label_4->setText(QApplication::translate("transparencyPalette", "Opacity:", 0));
#ifndef QT_NO_TOOLTIP
        fillOpacity->setToolTip(QApplication::translate("transparencyPalette", "Set the transparency for the color selected", 0));
#endif // QT_NO_TOOLTIP
        fillOpacity->setSuffix(QApplication::translate("transparencyPalette", " %", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabSolid), QApplication::translate("transparencyPalette", "Solid", 0));
        gradientType->clear();
        gradientType->insertItems(0, QStringList()
         << QApplication::translate("transparencyPalette", "Linear", 0)
         << QApplication::translate("transparencyPalette", "Radial", 0)
        );
#ifndef QT_NO_TOOLTIP
        gradEditButton->setToolTip(QApplication::translate("transparencyPalette", "Move the start of the gradient vector with the left mouse button pressed and move the end of the gradient vector with the right mouse button pressed", 0));
#endif // QT_NO_TOOLTIP
        gradEditButton->setText(QApplication::translate("transparencyPalette", "Move Vector", 0));
        transpCalcGradient->setText(QApplication::translate("transparencyPalette", "Use Luminosity as Alpha", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabGradient), QApplication::translate("transparencyPalette", "Gradient", 0));
        editPatternProps->setText(QApplication::translate("transparencyPalette", "Properties...", 0));
        transpCalcPattern->setText(QApplication::translate("transparencyPalette", "Use Luminosity as Alpha", 0));
        usePatternInverted->setText(QApplication::translate("transparencyPalette", "Use inverted Pattern", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabPattern), QApplication::translate("transparencyPalette", "Pattern", 0));
        label_5->setText(QApplication::translate("transparencyPalette", "Blend Mode:", 0));
        blendModeFill->clear();
        blendModeFill->insertItems(0, QStringList()
         << QApplication::translate("transparencyPalette", "Normal", 0)
         << QApplication::translate("transparencyPalette", "Darken", 0)
         << QApplication::translate("transparencyPalette", "Lighten", 0)
         << QApplication::translate("transparencyPalette", "Multiply", 0)
         << QApplication::translate("transparencyPalette", "Screen", 0)
         << QApplication::translate("transparencyPalette", "Overlay", 0)
         << QApplication::translate("transparencyPalette", "Hard Light", 0)
         << QApplication::translate("transparencyPalette", "Soft Light", 0)
         << QApplication::translate("transparencyPalette", "Difference", 0)
         << QApplication::translate("transparencyPalette", "Exclusion", 0)
         << QApplication::translate("transparencyPalette", "Color Dodge", 0)
         << QApplication::translate("transparencyPalette", "Color Burn", 0)
         << QApplication::translate("transparencyPalette", "Hue", 0)
         << QApplication::translate("transparencyPalette", "Saturation", 0)
         << QApplication::translate("transparencyPalette", "Color", 0)
         << QApplication::translate("transparencyPalette", "Luminosity", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class transparencyPalette: public Ui_transparencyPalette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSPARENCYPALETTE_H
