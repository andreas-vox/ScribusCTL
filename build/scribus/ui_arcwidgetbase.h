/********************************************************************************
** Form generated from reading UI file 'arcwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCWIDGETBASE_H
#define UI_ARCWIDGETBASE_H

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

class Ui_ArcWidgetBase
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    ScrSpinBox *startAngle;
    QLabel *label_2;
    ScrSpinBox *endAngle;
    QSpacerItem *verticalSpacer;
    QLabel *Preview;

    void setupUi(QWidget *ArcWidgetBase)
    {
        if (ArcWidgetBase->objectName().isEmpty())
            ArcWidgetBase->setObjectName(QStringLiteral("ArcWidgetBase"));
        ArcWidgetBase->resize(425, 288);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ArcWidgetBase->sizePolicy().hasHeightForWidth());
        ArcWidgetBase->setSizePolicy(sizePolicy);
        ArcWidgetBase->setMinimumSize(QSize(425, 288));
        horizontalLayout = new QHBoxLayout(ArcWidgetBase);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ArcWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        startAngle = new ScrSpinBox(ArcWidgetBase);
        startAngle->setObjectName(QStringLiteral("startAngle"));
        startAngle->setDecimals(1);
        startAngle->setMinimum(-360);
        startAngle->setMaximum(360);

        gridLayout->addWidget(startAngle, 0, 1, 1, 1);

        label_2 = new QLabel(ArcWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        endAngle = new ScrSpinBox(ArcWidgetBase);
        endAngle->setObjectName(QStringLiteral("endAngle"));
        endAngle->setDecimals(1);
        endAngle->setMinimum(-360);
        endAngle->setMaximum(360);

        gridLayout->addWidget(endAngle, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        Preview = new QLabel(ArcWidgetBase);
        Preview->setObjectName(QStringLiteral("Preview"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Preview->sizePolicy().hasHeightForWidth());
        Preview->setSizePolicy(sizePolicy1);
        Preview->setMinimumSize(QSize(280, 280));
        Preview->setMaximumSize(QSize(280, 280));
        Preview->setSizeIncrement(QSize(0, 0));
        Preview->setFrameShape(QFrame::Panel);
        Preview->setFrameShadow(QFrame::Sunken);
        Preview->setLineWidth(2);
        Preview->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Preview);


        retranslateUi(ArcWidgetBase);

        QMetaObject::connectSlotsByName(ArcWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *ArcWidgetBase)
    {
        ArcWidgetBase->setWindowTitle(QApplication::translate("ArcWidgetBase", "Form", 0));
        label->setText(QApplication::translate("ArcWidgetBase", "Start Angle:", 0));
        label_2->setText(QApplication::translate("ArcWidgetBase", "End Angle:", 0));
#ifndef QT_NO_TOOLTIP
        Preview->setToolTip(QApplication::translate("ArcWidgetBase", "Sample Polygon", 0));
#endif // QT_NO_TOOLTIP
        Preview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ArcWidgetBase: public Ui_ArcWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCWIDGETBASE_H
