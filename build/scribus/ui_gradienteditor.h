/********************************************************************************
** Form generated from reading UI file 'gradienteditor.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADIENTEDITOR_H
#define UI_GRADIENTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <ui/scrspinbox.h>
#include "ui/colorcombo.h"
#include "ui/gradientpreview.h"

QT_BEGIN_NAMESPACE

class Ui_GradientEditorBase
{
public:
    QGridLayout *gridLayout;
    GradientPreview *Preview;
    QLabel *Desc;
    ScrSpinBox *stopPos;
    QLabel *label;
    ColorCombo *stopColor;
    QLabel *label_2;
    ScrSpinBox *stopOpacity;
    QLabel *label_3;
    ScrSpinBox *stopShade;

    void setupUi(QFrame *GradientEditorBase)
    {
        if (GradientEditorBase->objectName().isEmpty())
            GradientEditorBase->setObjectName(QStringLiteral("GradientEditorBase"));
        GradientEditorBase->resize(210, 172);
        GradientEditorBase->setFrameShape(QFrame::NoFrame);
        GradientEditorBase->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(GradientEditorBase);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Preview = new GradientPreview(GradientEditorBase);
        Preview->setObjectName(QStringLiteral("Preview"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Preview->sizePolicy().hasHeightForWidth());
        Preview->setSizePolicy(sizePolicy);
        Preview->setMinimumSize(QSize(200, 70));
        Preview->setMaximumSize(QSize(3000, 70));
        Preview->setFrameShape(QFrame::Panel);
        Preview->setFrameShadow(QFrame::Sunken);
        Preview->setLineWidth(2);

        gridLayout->addWidget(Preview, 0, 0, 1, 2);

        Desc = new QLabel(GradientEditorBase);
        Desc->setObjectName(QStringLiteral("Desc"));

        gridLayout->addWidget(Desc, 1, 0, 1, 1);

        stopPos = new ScrSpinBox(GradientEditorBase);
        stopPos->setObjectName(QStringLiteral("stopPos"));
        stopPos->setMaximum(100);

        gridLayout->addWidget(stopPos, 1, 1, 1, 1);

        label = new QLabel(GradientEditorBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        stopColor = new ColorCombo(GradientEditorBase);
        stopColor->setObjectName(QStringLiteral("stopColor"));

        gridLayout->addWidget(stopColor, 2, 1, 1, 1);

        label_2 = new QLabel(GradientEditorBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        stopOpacity = new ScrSpinBox(GradientEditorBase);
        stopOpacity->setObjectName(QStringLiteral("stopOpacity"));
        stopOpacity->setMaximum(100);
        stopOpacity->setSingleStep(10);
        stopOpacity->setValue(100);

        gridLayout->addWidget(stopOpacity, 3, 1, 1, 1);

        label_3 = new QLabel(GradientEditorBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        stopShade = new ScrSpinBox(GradientEditorBase);
        stopShade->setObjectName(QStringLiteral("stopShade"));
        stopShade->setMaximum(100);
        stopShade->setSingleStep(10);
        stopShade->setValue(100);

        gridLayout->addWidget(stopShade, 4, 1, 1, 1);


        retranslateUi(GradientEditorBase);

        QMetaObject::connectSlotsByName(GradientEditorBase);
    } // setupUi

    void retranslateUi(QFrame *GradientEditorBase)
    {
        GradientEditorBase->setWindowTitle(QApplication::translate("GradientEditorBase", "Frame", 0));
        Desc->setText(QApplication::translate("GradientEditorBase", "Position:", 0));
        stopPos->setSuffix(QApplication::translate("GradientEditorBase", " %", 0));
        label->setText(QApplication::translate("GradientEditorBase", "Color:", 0));
        label_2->setText(QApplication::translate("GradientEditorBase", "Opacity:", 0));
        stopOpacity->setSuffix(QApplication::translate("GradientEditorBase", " %", 0));
        label_3->setText(QApplication::translate("GradientEditorBase", "Shade:", 0));
        stopShade->setSuffix(QApplication::translate("GradientEditorBase", " %", 0));
    } // retranslateUi

};

namespace Ui {
    class GradientEditorBase: public Ui_GradientEditorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADIENTEDITOR_H
