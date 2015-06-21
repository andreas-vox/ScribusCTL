/********************************************************************************
** Form generated from reading UI file 'propertywidget_pathtextbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYWIDGET_PATHTEXTBASE_H
#define UI_PROPERTYWIDGET_PATHTEXTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "ui/sccombobox.h"
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_PropertyWidget_PathTextBase
{
public:
    QGridLayout *gridLayout;
    QLabel *pathTextTypeLabel;
    ScComboBox *pathTextType;
    QLabel *startOffsetLabel;
    ScrSpinBox *startOffset;
    QLabel *distFromCurveLabel;
    ScrSpinBox *distFromCurve;
    QCheckBox *flippedPathText;
    QCheckBox *showCurveCheckBox;

    void setupUi(QFrame *PropertyWidget_PathTextBase)
    {
        if (PropertyWidget_PathTextBase->objectName().isEmpty())
            PropertyWidget_PathTextBase->setObjectName(QStringLiteral("PropertyWidget_PathTextBase"));
        PropertyWidget_PathTextBase->resize(218, 118);
        PropertyWidget_PathTextBase->setFrameShape(QFrame::StyledPanel);
        PropertyWidget_PathTextBase->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(PropertyWidget_PathTextBase);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pathTextTypeLabel = new QLabel(PropertyWidget_PathTextBase);
        pathTextTypeLabel->setObjectName(QStringLiteral("pathTextTypeLabel"));

        gridLayout->addWidget(pathTextTypeLabel, 0, 0, 1, 1);

        pathTextType = new ScComboBox(PropertyWidget_PathTextBase);
        pathTextType->setObjectName(QStringLiteral("pathTextType"));

        gridLayout->addWidget(pathTextType, 0, 1, 1, 1);

        startOffsetLabel = new QLabel(PropertyWidget_PathTextBase);
        startOffsetLabel->setObjectName(QStringLiteral("startOffsetLabel"));

        gridLayout->addWidget(startOffsetLabel, 1, 0, 1, 1);

        startOffset = new ScrSpinBox(PropertyWidget_PathTextBase);
        startOffset->setObjectName(QStringLiteral("startOffset"));

        gridLayout->addWidget(startOffset, 1, 1, 1, 1);

        distFromCurveLabel = new QLabel(PropertyWidget_PathTextBase);
        distFromCurveLabel->setObjectName(QStringLiteral("distFromCurveLabel"));

        gridLayout->addWidget(distFromCurveLabel, 2, 0, 1, 1);

        distFromCurve = new ScrSpinBox(PropertyWidget_PathTextBase);
        distFromCurve->setObjectName(QStringLiteral("distFromCurve"));

        gridLayout->addWidget(distFromCurve, 2, 1, 1, 1);

        flippedPathText = new QCheckBox(PropertyWidget_PathTextBase);
        flippedPathText->setObjectName(QStringLiteral("flippedPathText"));

        gridLayout->addWidget(flippedPathText, 3, 0, 1, 1);

        showCurveCheckBox = new QCheckBox(PropertyWidget_PathTextBase);
        showCurveCheckBox->setObjectName(QStringLiteral("showCurveCheckBox"));

        gridLayout->addWidget(showCurveCheckBox, 4, 0, 1, 1);


        retranslateUi(PropertyWidget_PathTextBase);

        QMetaObject::connectSlotsByName(PropertyWidget_PathTextBase);
    } // setupUi

    void retranslateUi(QFrame *PropertyWidget_PathTextBase)
    {
        PropertyWidget_PathTextBase->setWindowTitle(QApplication::translate("PropertyWidget_PathTextBase", "Frame", 0));
        pathTextTypeLabel->setText(QApplication::translate("PropertyWidget_PathTextBase", "Type:", 0));
        startOffsetLabel->setText(QApplication::translate("PropertyWidget_PathTextBase", "Start Offset:", 0));
        distFromCurveLabel->setText(QApplication::translate("PropertyWidget_PathTextBase", "Distance from Curve:", 0));
        flippedPathText->setText(QApplication::translate("PropertyWidget_PathTextBase", "Flip Text", 0));
        showCurveCheckBox->setText(QApplication::translate("PropertyWidget_PathTextBase", "Show Curve", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertyWidget_PathTextBase: public Ui_PropertyWidget_PathTextBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYWIDGET_PATHTEXTBASE_H
