/********************************************************************************
** Form generated from reading UI file 'propertiespalette_shapebase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESPALETTE_SHAPEBASE_H
#define UI_PROPERTIESPALETTE_SHAPEBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/autoform.h"
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_PropertiesPalette_ShapeBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *shapeGroup;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    Autoforms *customShape;
    QToolButton *editShape;
    QHBoxLayout *horizontalLayout_2;
    QLabel *roundRectLabel;
    ScrSpinBox *roundRect;
    QGroupBox *textFlowGroup;
    QVBoxLayout *verticalLayout_3;
    QToolButton *textFlowDisabled;
    QToolButton *textFlowUsesFrameShape;
    QToolButton *textFlowUsesBoundingBox;
    QToolButton *textFlowUsesContourLine;
    QToolButton *textFlowUsesImageClipping;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *fillRuleGroup;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *evenOdd;
    QRadioButton *nonZero;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QButtonGroup *textFlowBtnGroup;

    void setupUi(QWidget *PropertiesPalette_ShapeBase)
    {
        if (PropertiesPalette_ShapeBase->objectName().isEmpty())
            PropertiesPalette_ShapeBase->setObjectName(QStringLiteral("PropertiesPalette_ShapeBase"));
        PropertiesPalette_ShapeBase->resize(280, 281);
        verticalLayout = new QVBoxLayout(PropertiesPalette_ShapeBase);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        shapeGroup = new QGroupBox(PropertiesPalette_ShapeBase);
        shapeGroup->setObjectName(QStringLiteral("shapeGroup"));
        shapeGroup->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(shapeGroup);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        customShape = new Autoforms(shapeGroup);
        customShape->setObjectName(QStringLiteral("customShape"));

        horizontalLayout->addWidget(customShape);

        editShape = new QToolButton(shapeGroup);
        editShape->setObjectName(QStringLiteral("editShape"));

        horizontalLayout->addWidget(editShape);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        roundRectLabel = new QLabel(shapeGroup);
        roundRectLabel->setObjectName(QStringLiteral("roundRectLabel"));

        horizontalLayout_2->addWidget(roundRectLabel);

        roundRect = new ScrSpinBox(shapeGroup);
        roundRect->setObjectName(QStringLiteral("roundRect"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(roundRect->sizePolicy().hasHeightForWidth());
        roundRect->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(roundRect);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(shapeGroup);

        textFlowGroup = new QGroupBox(PropertiesPalette_ShapeBase);
        textFlowGroup->setObjectName(QStringLiteral("textFlowGroup"));
        textFlowGroup->setFlat(true);
        verticalLayout_3 = new QVBoxLayout(textFlowGroup);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        textFlowDisabled = new QToolButton(textFlowGroup);
        textFlowBtnGroup = new QButtonGroup(PropertiesPalette_ShapeBase);
        textFlowBtnGroup->setObjectName(QStringLiteral("textFlowBtnGroup"));
        textFlowBtnGroup->addButton(textFlowDisabled);
        textFlowDisabled->setObjectName(QStringLiteral("textFlowDisabled"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textFlowDisabled->sizePolicy().hasHeightForWidth());
        textFlowDisabled->setSizePolicy(sizePolicy1);
        textFlowDisabled->setCheckable(true);
        textFlowDisabled->setAutoExclusive(true);
        textFlowDisabled->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(textFlowDisabled);

        textFlowUsesFrameShape = new QToolButton(textFlowGroup);
        textFlowBtnGroup->addButton(textFlowUsesFrameShape);
        textFlowUsesFrameShape->setObjectName(QStringLiteral("textFlowUsesFrameShape"));
        sizePolicy1.setHeightForWidth(textFlowUsesFrameShape->sizePolicy().hasHeightForWidth());
        textFlowUsesFrameShape->setSizePolicy(sizePolicy1);
        textFlowUsesFrameShape->setCheckable(true);
        textFlowUsesFrameShape->setAutoExclusive(true);
        textFlowUsesFrameShape->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(textFlowUsesFrameShape);

        textFlowUsesBoundingBox = new QToolButton(textFlowGroup);
        textFlowBtnGroup->addButton(textFlowUsesBoundingBox);
        textFlowUsesBoundingBox->setObjectName(QStringLiteral("textFlowUsesBoundingBox"));
        sizePolicy1.setHeightForWidth(textFlowUsesBoundingBox->sizePolicy().hasHeightForWidth());
        textFlowUsesBoundingBox->setSizePolicy(sizePolicy1);
        textFlowUsesBoundingBox->setCheckable(true);
        textFlowUsesBoundingBox->setAutoExclusive(true);
        textFlowUsesBoundingBox->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(textFlowUsesBoundingBox);

        textFlowUsesContourLine = new QToolButton(textFlowGroup);
        textFlowBtnGroup->addButton(textFlowUsesContourLine);
        textFlowUsesContourLine->setObjectName(QStringLiteral("textFlowUsesContourLine"));
        sizePolicy1.setHeightForWidth(textFlowUsesContourLine->sizePolicy().hasHeightForWidth());
        textFlowUsesContourLine->setSizePolicy(sizePolicy1);
        textFlowUsesContourLine->setCheckable(true);
        textFlowUsesContourLine->setAutoExclusive(true);
        textFlowUsesContourLine->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(textFlowUsesContourLine);

        textFlowUsesImageClipping = new QToolButton(textFlowGroup);
        textFlowBtnGroup->addButton(textFlowUsesImageClipping);
        textFlowUsesImageClipping->setObjectName(QStringLiteral("textFlowUsesImageClipping"));
        sizePolicy1.setHeightForWidth(textFlowUsesImageClipping->sizePolicy().hasHeightForWidth());
        textFlowUsesImageClipping->setSizePolicy(sizePolicy1);
        textFlowUsesImageClipping->setCheckable(true);
        textFlowUsesImageClipping->setAutoExclusive(true);
        textFlowUsesImageClipping->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(textFlowUsesImageClipping);


        verticalLayout->addWidget(textFlowGroup);

        stackedWidget = new QStackedWidget(PropertiesPalette_ShapeBase);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        fillRuleGroup = new QGroupBox(page_2);
        fillRuleGroup->setObjectName(QStringLiteral("fillRuleGroup"));
        fillRuleGroup->setFlat(true);
        horizontalLayout_3 = new QHBoxLayout(fillRuleGroup);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        evenOdd = new QRadioButton(fillRuleGroup);
        evenOdd->setObjectName(QStringLiteral("evenOdd"));
        sizePolicy1.setHeightForWidth(evenOdd->sizePolicy().hasHeightForWidth());
        evenOdd->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(evenOdd);

        nonZero = new QRadioButton(fillRuleGroup);
        nonZero->setObjectName(QStringLiteral("nonZero"));
        sizePolicy1.setHeightForWidth(nonZero->sizePolicy().hasHeightForWidth());
        nonZero->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(nonZero);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_4->addWidget(fillRuleGroup);

        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(PropertiesPalette_ShapeBase);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PropertiesPalette_ShapeBase);
    } // setupUi

    void retranslateUi(QWidget *PropertiesPalette_ShapeBase)
    {
        PropertiesPalette_ShapeBase->setWindowTitle(QApplication::translate("PropertiesPalette_ShapeBase", "Form", 0));
        shapeGroup->setTitle(QApplication::translate("PropertiesPalette_ShapeBase", "Shape", 0));
        customShape->setText(QApplication::translate("PropertiesPalette_ShapeBase", "...", 0));
        editShape->setText(QApplication::translate("PropertiesPalette_ShapeBase", "&Edit...", 0));
        roundRectLabel->setText(QApplication::translate("PropertiesPalette_ShapeBase", "Round Corners", 0));
        textFlowGroup->setTitle(QApplication::translate("PropertiesPalette_ShapeBase", "Text Flow Around Frame", 0));
        textFlowDisabled->setText(QApplication::translate("PropertiesPalette_ShapeBase", "Disabled", 0));
        textFlowUsesFrameShape->setText(QApplication::translate("PropertiesPalette_ShapeBase", "Use &Frame Shape", 0));
        textFlowUsesBoundingBox->setText(QApplication::translate("PropertiesPalette_ShapeBase", "Use &Bounding Box", 0));
        textFlowUsesContourLine->setText(QApplication::translate("PropertiesPalette_ShapeBase", "&Use Contour Line", 0));
        textFlowUsesImageClipping->setText(QApplication::translate("PropertiesPalette_ShapeBase", "Use Image Clip Path", 0));
        fillRuleGroup->setTitle(QApplication::translate("PropertiesPalette_ShapeBase", "Fill Rule", 0));
        evenOdd->setText(QApplication::translate("PropertiesPalette_ShapeBase", "Even-Odd", 0));
        nonZero->setText(QApplication::translate("PropertiesPalette_ShapeBase", "Non Zero", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertiesPalette_ShapeBase: public Ui_PropertiesPalette_ShapeBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESPALETTE_SHAPEBASE_H
