/********************************************************************************
** Form generated from reading UI file 'spiralwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPIRALWIDGETBASE_H
#define UI_SPIRALWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_SpiralWidgetBase
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    ScrSpinBox *startAngle;
    QLabel *label_2;
    ScrSpinBox *endAngle;
    QLabel *label_5;
    ScrSpinBox *arcFactor;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *Preview;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *SpiralWidgetBase)
    {
        if (SpiralWidgetBase->objectName().isEmpty())
            SpiralWidgetBase->setObjectName(QStringLiteral("SpiralWidgetBase"));
        SpiralWidgetBase->resize(425, 288);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SpiralWidgetBase->sizePolicy().hasHeightForWidth());
        SpiralWidgetBase->setSizePolicy(sizePolicy);
        SpiralWidgetBase->setMinimumSize(QSize(425, 288));
        horizontalLayout = new QHBoxLayout(SpiralWidgetBase);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(SpiralWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        startAngle = new ScrSpinBox(SpiralWidgetBase);
        startAngle->setObjectName(QStringLiteral("startAngle"));
        startAngle->setDecimals(1);
        startAngle->setMinimum(-360);
        startAngle->setMaximum(360);

        gridLayout->addWidget(startAngle, 0, 1, 1, 1);

        label_2 = new QLabel(SpiralWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        endAngle = new ScrSpinBox(SpiralWidgetBase);
        endAngle->setObjectName(QStringLiteral("endAngle"));
        endAngle->setDecimals(1);
        endAngle->setMinimum(-360);
        endAngle->setMaximum(360);

        gridLayout->addWidget(endAngle, 1, 1, 1, 1);

        label_5 = new QLabel(SpiralWidgetBase);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        arcFactor = new ScrSpinBox(SpiralWidgetBase);
        arcFactor->setObjectName(QStringLiteral("arcFactor"));
        arcFactor->setMinimum(1);
        arcFactor->setMaximum(100);

        gridLayout->addWidget(arcFactor, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Preview = new QLabel(SpiralWidgetBase);
        Preview->setObjectName(QStringLiteral("Preview"));
        sizePolicy.setHeightForWidth(Preview->sizePolicy().hasHeightForWidth());
        Preview->setSizePolicy(sizePolicy);
        Preview->setMinimumSize(QSize(280, 280));
        Preview->setMaximumSize(QSize(280, 280));
        Preview->setSizeIncrement(QSize(0, 0));
        Preview->setFrameShape(QFrame::Panel);
        Preview->setFrameShadow(QFrame::Sunken);
        Preview->setLineWidth(2);
        Preview->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Preview);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(SpiralWidgetBase);

        QMetaObject::connectSlotsByName(SpiralWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *SpiralWidgetBase)
    {
        SpiralWidgetBase->setWindowTitle(QApplication::translate("SpiralWidgetBase", "Form", 0));
        label->setText(QApplication::translate("SpiralWidgetBase", "Start Angle:", 0));
        label_2->setText(QApplication::translate("SpiralWidgetBase", "End Angle:", 0));
        label_5->setText(QApplication::translate("SpiralWidgetBase", "Factor:", 0));
        arcFactor->setSuffix(QApplication::translate("SpiralWidgetBase", " %", 0));
#ifndef QT_NO_TOOLTIP
        Preview->setToolTip(QApplication::translate("SpiralWidgetBase", "Sample Polygon", 0));
#endif // QT_NO_TOOLTIP
        Preview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SpiralWidgetBase: public Ui_SpiralWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPIRALWIDGETBASE_H
