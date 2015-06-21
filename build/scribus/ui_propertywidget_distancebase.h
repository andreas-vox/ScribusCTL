/********************************************************************************
** Form generated from reading UI file 'propertywidget_distancebase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYWIDGET_DISTANCEBASE_H
#define UI_PROPERTYWIDGET_DISTANCEBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include "ui/sccombobox.h"
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_PropertyWidget_DistanceBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *verticalAlign;
    QLabel *columnsLabel;
    ScrSpinBox *columns;
    ScComboBox *columnGapLabel;
    ScrSpinBox *columnGap;
    QLabel *topLabel;
    ScrSpinBox *topDistance;
    QLabel *bottomLabel;
    ScrSpinBox *bottomDistance;
    QLabel *leftLabel;
    ScrSpinBox *leftDistance;
    QLabel *rightLabel;
    ScrSpinBox *rightDistance;
    QToolButton *tabsButton;

    void setupUi(QFrame *PropertyWidget_DistanceBase)
    {
        if (PropertyWidget_DistanceBase->objectName().isEmpty())
            PropertyWidget_DistanceBase->setObjectName(QStringLiteral("PropertyWidget_DistanceBase"));
        PropertyWidget_DistanceBase->resize(186, 223);
        PropertyWidget_DistanceBase->setFrameShape(QFrame::StyledPanel);
        PropertyWidget_DistanceBase->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(PropertyWidget_DistanceBase);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(PropertyWidget_DistanceBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalAlign = new QComboBox(PropertyWidget_DistanceBase);
        verticalAlign->setObjectName(QStringLiteral("verticalAlign"));

        gridLayout->addWidget(verticalAlign, 0, 1, 1, 1);

        columnsLabel = new QLabel(PropertyWidget_DistanceBase);
        columnsLabel->setObjectName(QStringLiteral("columnsLabel"));

        gridLayout->addWidget(columnsLabel, 1, 0, 1, 1);

        columns = new ScrSpinBox(PropertyWidget_DistanceBase);
        columns->setObjectName(QStringLiteral("columns"));
        columns->setMinimum(1);
        columns->setMaximum(3000);

        gridLayout->addWidget(columns, 1, 1, 1, 1);

        columnGapLabel = new ScComboBox(PropertyWidget_DistanceBase);
        columnGapLabel->setObjectName(QStringLiteral("columnGapLabel"));

        gridLayout->addWidget(columnGapLabel, 2, 0, 1, 1);

        columnGap = new ScrSpinBox(PropertyWidget_DistanceBase);
        columnGap->setObjectName(QStringLiteral("columnGap"));

        gridLayout->addWidget(columnGap, 2, 1, 1, 1);

        topLabel = new QLabel(PropertyWidget_DistanceBase);
        topLabel->setObjectName(QStringLiteral("topLabel"));

        gridLayout->addWidget(topLabel, 3, 0, 1, 1);

        topDistance = new ScrSpinBox(PropertyWidget_DistanceBase);
        topDistance->setObjectName(QStringLiteral("topDistance"));

        gridLayout->addWidget(topDistance, 3, 1, 1, 1);

        bottomLabel = new QLabel(PropertyWidget_DistanceBase);
        bottomLabel->setObjectName(QStringLiteral("bottomLabel"));

        gridLayout->addWidget(bottomLabel, 4, 0, 1, 1);

        bottomDistance = new ScrSpinBox(PropertyWidget_DistanceBase);
        bottomDistance->setObjectName(QStringLiteral("bottomDistance"));

        gridLayout->addWidget(bottomDistance, 4, 1, 1, 1);

        leftLabel = new QLabel(PropertyWidget_DistanceBase);
        leftLabel->setObjectName(QStringLiteral("leftLabel"));

        gridLayout->addWidget(leftLabel, 5, 0, 1, 1);

        leftDistance = new ScrSpinBox(PropertyWidget_DistanceBase);
        leftDistance->setObjectName(QStringLiteral("leftDistance"));

        gridLayout->addWidget(leftDistance, 5, 1, 1, 1);

        rightLabel = new QLabel(PropertyWidget_DistanceBase);
        rightLabel->setObjectName(QStringLiteral("rightLabel"));

        gridLayout->addWidget(rightLabel, 6, 0, 1, 1);

        rightDistance = new ScrSpinBox(PropertyWidget_DistanceBase);
        rightDistance->setObjectName(QStringLiteral("rightDistance"));

        gridLayout->addWidget(rightDistance, 6, 1, 1, 1);

        tabsButton = new QToolButton(PropertyWidget_DistanceBase);
        tabsButton->setObjectName(QStringLiteral("tabsButton"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabsButton->sizePolicy().hasHeightForWidth());
        tabsButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(tabsButton, 7, 0, 1, 2);


        retranslateUi(PropertyWidget_DistanceBase);

        QMetaObject::connectSlotsByName(PropertyWidget_DistanceBase);
    } // setupUi

    void retranslateUi(QFrame *PropertyWidget_DistanceBase)
    {
        PropertyWidget_DistanceBase->setWindowTitle(QApplication::translate("PropertyWidget_DistanceBase", "Frame", 0));
        label->setText(QApplication::translate("PropertyWidget_DistanceBase", "Vertical Alignment", 0));
        verticalAlign->clear();
        verticalAlign->insertItems(0, QStringList()
         << QApplication::translate("PropertyWidget_DistanceBase", "Top", 0)
         << QApplication::translate("PropertyWidget_DistanceBase", "Middle", 0)
         << QApplication::translate("PropertyWidget_DistanceBase", "Bottom", 0)
        );
        columnsLabel->setText(QApplication::translate("PropertyWidget_DistanceBase", "Colu&mns:", 0));
        columnGapLabel->clear();
        columnGapLabel->insertItems(0, QStringList()
         << QApplication::translate("PropertyWidget_DistanceBase", "Gap:", 0)
         << QApplication::translate("PropertyWidget_DistanceBase", "Width:", 0)
        );
        topLabel->setText(QApplication::translate("PropertyWidget_DistanceBase", "To&p:", 0));
        bottomLabel->setText(QApplication::translate("PropertyWidget_DistanceBase", "&Bottom:", 0));
        leftLabel->setText(QApplication::translate("PropertyWidget_DistanceBase", "&Left:", 0));
        rightLabel->setText(QApplication::translate("PropertyWidget_DistanceBase", "&Right:", 0));
        tabsButton->setText(QApplication::translate("PropertyWidget_DistanceBase", "T&abulators...", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertyWidget_DistanceBase: public Ui_PropertyWidget_DistanceBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYWIDGET_DISTANCEBASE_H
