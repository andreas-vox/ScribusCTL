/********************************************************************************
** Form generated from reading UI file 'propertiespalette_linebase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESPALETTE_LINEBASE_H
#define UI_PROPERTIESPALETTE_LINEBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>
#include "ui/arrowchooser.h"
#include "ui/dasheditor.h"
#include "ui/linecombo.h"
#include "ui/sccombobox.h"
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_PropertiesPalette_LineBase
{
public:
    QGridLayout *gridLayout;
    QLabel *lineModeLabel;
    ScComboBox *lineMode;
    QLabel *lineTypeLabel;
    LineCombo *lineType;
    DashEditor *dashEditor;
    QLabel *startArrowLabel;
    QLabel *endArrowLabel;
    ArrowChooser *startArrow;
    ArrowChooser *endArrow;
    QLabel *startArrowScaleLabel;
    ScrSpinBox *startArrowScale;
    QLabel *endArrowScaleLabel;
    ScrSpinBox *endArrowScale;
    QLabel *lineWidthLabel;
    ScrSpinBox *lineWidth;
    QLabel *lineJoinLabel;
    ScComboBox *lineJoinStyle;
    QLabel *lineEndLabel;
    ScComboBox *lineEndStyle;
    QListWidget *lineStyles;

    void setupUi(QWidget *PropertiesPalette_LineBase)
    {
        if (PropertiesPalette_LineBase->objectName().isEmpty())
            PropertiesPalette_LineBase->setObjectName(QStringLiteral("PropertiesPalette_LineBase"));
        PropertiesPalette_LineBase->resize(252, 421);
        gridLayout = new QGridLayout(PropertiesPalette_LineBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineModeLabel = new QLabel(PropertiesPalette_LineBase);
        lineModeLabel->setObjectName(QStringLiteral("lineModeLabel"));

        gridLayout->addWidget(lineModeLabel, 0, 0, 1, 2);

        lineMode = new ScComboBox(PropertiesPalette_LineBase);
        lineMode->setObjectName(QStringLiteral("lineMode"));

        gridLayout->addWidget(lineMode, 0, 2, 1, 2);

        lineTypeLabel = new QLabel(PropertiesPalette_LineBase);
        lineTypeLabel->setObjectName(QStringLiteral("lineTypeLabel"));

        gridLayout->addWidget(lineTypeLabel, 1, 0, 1, 2);

        lineType = new LineCombo(PropertiesPalette_LineBase);
        lineType->setObjectName(QStringLiteral("lineType"));

        gridLayout->addWidget(lineType, 1, 2, 1, 2);

        dashEditor = new DashEditor(PropertiesPalette_LineBase);
        dashEditor->setObjectName(QStringLiteral("dashEditor"));
        dashEditor->setMinimumSize(QSize(0, 10));
        dashEditor->setFrameShape(QFrame::StyledPanel);
        dashEditor->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(dashEditor, 2, 0, 1, 4);

        startArrowLabel = new QLabel(PropertiesPalette_LineBase);
        startArrowLabel->setObjectName(QStringLiteral("startArrowLabel"));

        gridLayout->addWidget(startArrowLabel, 3, 0, 1, 1);

        endArrowLabel = new QLabel(PropertiesPalette_LineBase);
        endArrowLabel->setObjectName(QStringLiteral("endArrowLabel"));

        gridLayout->addWidget(endArrowLabel, 3, 2, 1, 1);

        startArrow = new ArrowChooser(PropertiesPalette_LineBase);
        startArrow->setObjectName(QStringLiteral("startArrow"));

        gridLayout->addWidget(startArrow, 4, 0, 1, 2);

        endArrow = new ArrowChooser(PropertiesPalette_LineBase);
        endArrow->setObjectName(QStringLiteral("endArrow"));

        gridLayout->addWidget(endArrow, 4, 2, 1, 2);

        startArrowScaleLabel = new QLabel(PropertiesPalette_LineBase);
        startArrowScaleLabel->setObjectName(QStringLiteral("startArrowScaleLabel"));

        gridLayout->addWidget(startArrowScaleLabel, 5, 0, 1, 1);

        startArrowScale = new ScrSpinBox(PropertiesPalette_LineBase);
        startArrowScale->setObjectName(QStringLiteral("startArrowScale"));
        startArrowScale->setMinimum(1);
        startArrowScale->setMaximum(300);

        gridLayout->addWidget(startArrowScale, 5, 1, 1, 1);

        endArrowScaleLabel = new QLabel(PropertiesPalette_LineBase);
        endArrowScaleLabel->setObjectName(QStringLiteral("endArrowScaleLabel"));

        gridLayout->addWidget(endArrowScaleLabel, 5, 2, 1, 1);

        endArrowScale = new ScrSpinBox(PropertiesPalette_LineBase);
        endArrowScale->setObjectName(QStringLiteral("endArrowScale"));
        endArrowScale->setMinimum(1);
        endArrowScale->setMaximum(300);

        gridLayout->addWidget(endArrowScale, 5, 3, 1, 1);

        lineWidthLabel = new QLabel(PropertiesPalette_LineBase);
        lineWidthLabel->setObjectName(QStringLiteral("lineWidthLabel"));

        gridLayout->addWidget(lineWidthLabel, 6, 0, 1, 2);

        lineWidth = new ScrSpinBox(PropertiesPalette_LineBase);
        lineWidth->setObjectName(QStringLiteral("lineWidth"));
        lineWidth->setMaximum(300);

        gridLayout->addWidget(lineWidth, 6, 2, 1, 2);

        lineJoinLabel = new QLabel(PropertiesPalette_LineBase);
        lineJoinLabel->setObjectName(QStringLiteral("lineJoinLabel"));

        gridLayout->addWidget(lineJoinLabel, 7, 0, 1, 1);

        lineJoinStyle = new ScComboBox(PropertiesPalette_LineBase);
        lineJoinStyle->setObjectName(QStringLiteral("lineJoinStyle"));

        gridLayout->addWidget(lineJoinStyle, 7, 2, 1, 2);

        lineEndLabel = new QLabel(PropertiesPalette_LineBase);
        lineEndLabel->setObjectName(QStringLiteral("lineEndLabel"));

        gridLayout->addWidget(lineEndLabel, 8, 0, 1, 1);

        lineEndStyle = new ScComboBox(PropertiesPalette_LineBase);
        lineEndStyle->setObjectName(QStringLiteral("lineEndStyle"));

        gridLayout->addWidget(lineEndStyle, 8, 2, 1, 2);

        lineStyles = new QListWidget(PropertiesPalette_LineBase);
        lineStyles->setObjectName(QStringLiteral("lineStyles"));

        gridLayout->addWidget(lineStyles, 9, 0, 1, 4);


        retranslateUi(PropertiesPalette_LineBase);

        QMetaObject::connectSlotsByName(PropertiesPalette_LineBase);
    } // setupUi

    void retranslateUi(QWidget *PropertiesPalette_LineBase)
    {
        PropertiesPalette_LineBase->setWindowTitle(QApplication::translate("PropertiesPalette_LineBase", "Form", 0));
        lineModeLabel->setText(QApplication::translate("PropertiesPalette_LineBase", "&Basepoint:", 0));
        lineTypeLabel->setText(QApplication::translate("PropertiesPalette_LineBase", "T&ype of Line:", 0));
        startArrowLabel->setText(QApplication::translate("PropertiesPalette_LineBase", "Start Arrow:", 0));
        endArrowLabel->setText(QApplication::translate("PropertiesPalette_LineBase", "End Arrow:", 0));
        startArrowScaleLabel->setText(QApplication::translate("PropertiesPalette_LineBase", "Scaling:", 0));
        endArrowScaleLabel->setText(QApplication::translate("PropertiesPalette_LineBase", "Scaling:", 0));
        lineWidthLabel->setText(QApplication::translate("PropertiesPalette_LineBase", "Line &Width:", 0));
        lineWidth->setSpecialValueText(QApplication::translate("PropertiesPalette_LineBase", "Hairline", 0));
        lineJoinLabel->setText(QApplication::translate("PropertiesPalette_LineBase", "Ed&ges:", 0));
        lineEndLabel->setText(QApplication::translate("PropertiesPalette_LineBase", "&Endings:", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertiesPalette_LineBase: public Ui_PropertiesPalette_LineBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESPALETTE_LINEBASE_H
