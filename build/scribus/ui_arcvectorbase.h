/********************************************************************************
** Form generated from reading UI file 'arcvectorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCVECTORBASE_H
#define UI_ARCVECTORBASE_H

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

class Ui_ArcVectorBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    ScrSpinBox *startAngle;
    QLabel *label_2;
    ScrSpinBox *sweepAngle;
    QLabel *label_3;
    ScrSpinBox *arcHeight;
    QLabel *label_4;
    ScrSpinBox *arcWidth;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *exitButton;

    void setupUi(ScrPaletteBase *ArcVectorBase)
    {
        if (ArcVectorBase->objectName().isEmpty())
            ArcVectorBase->setObjectName(QStringLiteral("ArcVectorBase"));
        ArcVectorBase->setEnabled(true);
        ArcVectorBase->resize(176, 153);
        ArcVectorBase->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(ArcVectorBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ArcVectorBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        startAngle = new ScrSpinBox(ArcVectorBase);
        startAngle->setObjectName(QStringLiteral("startAngle"));
        startAngle->setDecimals(1);
        startAngle->setMinimum(-360);
        startAngle->setMaximum(360);

        gridLayout->addWidget(startAngle, 0, 1, 1, 1);

        label_2 = new QLabel(ArcVectorBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        sweepAngle = new ScrSpinBox(ArcVectorBase);
        sweepAngle->setObjectName(QStringLiteral("sweepAngle"));
        sweepAngle->setDecimals(1);
        sweepAngle->setMinimum(-360);
        sweepAngle->setMaximum(360);

        gridLayout->addWidget(sweepAngle, 1, 1, 1, 1);

        label_3 = new QLabel(ArcVectorBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        arcHeight = new ScrSpinBox(ArcVectorBase);
        arcHeight->setObjectName(QStringLiteral("arcHeight"));
        arcHeight->setDecimals(1);
        arcHeight->setMinimum(1);
        arcHeight->setMaximum(99999);

        gridLayout->addWidget(arcHeight, 2, 1, 1, 1);

        label_4 = new QLabel(ArcVectorBase);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        arcWidth = new ScrSpinBox(ArcVectorBase);
        arcWidth->setObjectName(QStringLiteral("arcWidth"));
        arcWidth->setDecimals(1);
        arcWidth->setMinimum(1);
        arcWidth->setMaximum(99999);

        gridLayout->addWidget(arcWidth, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exitButton = new QPushButton(ArcVectorBase);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        horizontalLayout->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ArcVectorBase);

        QMetaObject::connectSlotsByName(ArcVectorBase);
    } // setupUi

    void retranslateUi(ScrPaletteBase *ArcVectorBase)
    {
        ArcVectorBase->setWindowTitle(QApplication::translate("ArcVectorBase", "Edit Arc", 0));
        label->setText(QApplication::translate("ArcVectorBase", "Start Angle:", 0));
        label_2->setText(QApplication::translate("ArcVectorBase", "End Angle:", 0));
        label_3->setText(QApplication::translate("ArcVectorBase", "Height:", 0));
        label_4->setText(QApplication::translate("ArcVectorBase", "Width:", 0));
        exitButton->setText(QApplication::translate("ArcVectorBase", "End Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class ArcVectorBase: public Ui_ArcVectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCVECTORBASE_H
