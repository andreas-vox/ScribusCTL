/********************************************************************************
** Form generated from reading UI file 'spiralvectorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPIRALVECTORBASE_H
#define UI_SPIRALVECTORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "ui/scrpalettebase.h"
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_SpiralVectorBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    ScrSpinBox *startAngle;
    QLabel *label_2;
    ScrSpinBox *sweepAngle;
    QLabel *label_5;
    ScrSpinBox *arcFactor;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *exitButton;

    void setupUi(ScrPaletteBase *SpiralVectorBase)
    {
        if (SpiralVectorBase->objectName().isEmpty())
            SpiralVectorBase->setObjectName(QStringLiteral("SpiralVectorBase"));
        SpiralVectorBase->setEnabled(true);
        SpiralVectorBase->resize(139, 119);
        SpiralVectorBase->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(SpiralVectorBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(SpiralVectorBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        startAngle = new ScrSpinBox(SpiralVectorBase);
        startAngle->setObjectName(QStringLiteral("startAngle"));
        startAngle->setDecimals(1);
        startAngle->setMinimum(-360);
        startAngle->setMaximum(360);

        gridLayout->addWidget(startAngle, 0, 1, 1, 1);

        label_2 = new QLabel(SpiralVectorBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        sweepAngle = new ScrSpinBox(SpiralVectorBase);
        sweepAngle->setObjectName(QStringLiteral("sweepAngle"));
        sweepAngle->setDecimals(1);
        sweepAngle->setMinimum(-360);
        sweepAngle->setMaximum(360);

        gridLayout->addWidget(sweepAngle, 1, 1, 1, 1);

        label_5 = new QLabel(SpiralVectorBase);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        arcFactor = new ScrSpinBox(SpiralVectorBase);
        arcFactor->setObjectName(QStringLiteral("arcFactor"));
        arcFactor->setMinimum(1);
        arcFactor->setMaximum(100);

        gridLayout->addWidget(arcFactor, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exitButton = new QPushButton(SpiralVectorBase);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        horizontalLayout->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SpiralVectorBase);

        QMetaObject::connectSlotsByName(SpiralVectorBase);
    } // setupUi

    void retranslateUi(ScrPaletteBase *SpiralVectorBase)
    {
        SpiralVectorBase->setWindowTitle(QApplication::translate("SpiralVectorBase", "Edit Spiral", 0));
        label->setText(QApplication::translate("SpiralVectorBase", "Start Angle:", 0));
        label_2->setText(QApplication::translate("SpiralVectorBase", "End Angle:", 0));
        label_5->setText(QApplication::translate("SpiralVectorBase", "Factor:", 0));
        arcFactor->setSuffix(QApplication::translate("SpiralVectorBase", " %", 0));
        exitButton->setText(QApplication::translate("SpiralVectorBase", "End Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class SpiralVectorBase: public Ui_SpiralVectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPIRALVECTORBASE_H
