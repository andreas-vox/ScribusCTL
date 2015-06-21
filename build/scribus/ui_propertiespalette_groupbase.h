/********************************************************************************
** Form generated from reading UI file 'propertiespalette_groupbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESPALETTE_GROUPBASE_H
#define UI_PROPERTIESPALETTE_GROUPBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/autoform.h"
#include "ui/transparencypalette.h"

QT_BEGIN_NAMESPACE

class Ui_PropertiesPalette_GroupBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *shapeGroup;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    Autoforms *customShape;
    QToolButton *editShape;
    QGroupBox *textFlowGroup;
    QVBoxLayout *verticalLayout;
    QToolButton *textFlowDisabled;
    QToolButton *textFlowUsesFrameShape;
    QToolButton *textFlowUsesBoundingBox;
    QToolButton *textFlowUsesContourLine;
    QToolButton *textFlowUsesImageClipping;
    QGroupBox *fillRuleGroup;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *evenOdd;
    QRadioButton *nonZero;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *clipGroups;
    QGroupBox *transparencyGroup;
    QVBoxLayout *verticalLayout_4;
    Tpalette *transPalWidget;
    QSpacerItem *verticalSpacer;
    QButtonGroup *textFlowBtnGroup;

    void setupUi(QWidget *PropertiesPalette_GroupBase)
    {
        if (PropertiesPalette_GroupBase->objectName().isEmpty())
            PropertiesPalette_GroupBase->setObjectName(QStringLiteral("PropertiesPalette_GroupBase"));
        PropertiesPalette_GroupBase->resize(212, 387);
        verticalLayout_3 = new QVBoxLayout(PropertiesPalette_GroupBase);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 3, 3, 3);
        shapeGroup = new QGroupBox(PropertiesPalette_GroupBase);
        shapeGroup->setObjectName(QStringLiteral("shapeGroup"));
        shapeGroup->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(shapeGroup);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
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


        verticalLayout_3->addWidget(shapeGroup);

        textFlowGroup = new QGroupBox(PropertiesPalette_GroupBase);
        textFlowGroup->setObjectName(QStringLiteral("textFlowGroup"));
        textFlowGroup->setFlat(true);
        verticalLayout = new QVBoxLayout(textFlowGroup);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        textFlowDisabled = new QToolButton(textFlowGroup);
        textFlowBtnGroup = new QButtonGroup(PropertiesPalette_GroupBase);
        textFlowBtnGroup->setObjectName(QStringLiteral("textFlowBtnGroup"));
        textFlowBtnGroup->addButton(textFlowDisabled);
        textFlowDisabled->setObjectName(QStringLiteral("textFlowDisabled"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textFlowDisabled->sizePolicy().hasHeightForWidth());
        textFlowDisabled->setSizePolicy(sizePolicy);
        textFlowDisabled->setCheckable(true);
        textFlowDisabled->setAutoExclusive(true);
        textFlowDisabled->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(textFlowDisabled);

        textFlowUsesFrameShape = new QToolButton(textFlowGroup);
        textFlowBtnGroup->addButton(textFlowUsesFrameShape);
        textFlowUsesFrameShape->setObjectName(QStringLiteral("textFlowUsesFrameShape"));
        sizePolicy.setHeightForWidth(textFlowUsesFrameShape->sizePolicy().hasHeightForWidth());
        textFlowUsesFrameShape->setSizePolicy(sizePolicy);
        textFlowUsesFrameShape->setCheckable(true);
        textFlowUsesFrameShape->setAutoExclusive(true);
        textFlowUsesFrameShape->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(textFlowUsesFrameShape);

        textFlowUsesBoundingBox = new QToolButton(textFlowGroup);
        textFlowBtnGroup->addButton(textFlowUsesBoundingBox);
        textFlowUsesBoundingBox->setObjectName(QStringLiteral("textFlowUsesBoundingBox"));
        sizePolicy.setHeightForWidth(textFlowUsesBoundingBox->sizePolicy().hasHeightForWidth());
        textFlowUsesBoundingBox->setSizePolicy(sizePolicy);
        textFlowUsesBoundingBox->setCheckable(true);
        textFlowUsesBoundingBox->setAutoExclusive(true);
        textFlowUsesBoundingBox->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(textFlowUsesBoundingBox);

        textFlowUsesContourLine = new QToolButton(textFlowGroup);
        textFlowBtnGroup->addButton(textFlowUsesContourLine);
        textFlowUsesContourLine->setObjectName(QStringLiteral("textFlowUsesContourLine"));
        sizePolicy.setHeightForWidth(textFlowUsesContourLine->sizePolicy().hasHeightForWidth());
        textFlowUsesContourLine->setSizePolicy(sizePolicy);
        textFlowUsesContourLine->setCheckable(true);
        textFlowUsesContourLine->setAutoExclusive(true);
        textFlowUsesContourLine->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(textFlowUsesContourLine);

        textFlowUsesImageClipping = new QToolButton(textFlowGroup);
        textFlowBtnGroup->addButton(textFlowUsesImageClipping);
        textFlowUsesImageClipping->setObjectName(QStringLiteral("textFlowUsesImageClipping"));
        sizePolicy.setHeightForWidth(textFlowUsesImageClipping->sizePolicy().hasHeightForWidth());
        textFlowUsesImageClipping->setSizePolicy(sizePolicy);
        textFlowUsesImageClipping->setCheckable(true);
        textFlowUsesImageClipping->setAutoExclusive(true);
        textFlowUsesImageClipping->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(textFlowUsesImageClipping);


        verticalLayout_3->addWidget(textFlowGroup);

        fillRuleGroup = new QGroupBox(PropertiesPalette_GroupBase);
        fillRuleGroup->setObjectName(QStringLiteral("fillRuleGroup"));
        fillRuleGroup->setFlat(true);
        horizontalLayout_3 = new QHBoxLayout(fillRuleGroup);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        horizontalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        evenOdd = new QRadioButton(fillRuleGroup);
        evenOdd->setObjectName(QStringLiteral("evenOdd"));
        sizePolicy.setHeightForWidth(evenOdd->sizePolicy().hasHeightForWidth());
        evenOdd->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(evenOdd);

        nonZero = new QRadioButton(fillRuleGroup);
        nonZero->setObjectName(QStringLiteral("nonZero"));
        sizePolicy.setHeightForWidth(nonZero->sizePolicy().hasHeightForWidth());
        nonZero->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(nonZero);

        horizontalSpacer_3 = new QSpacerItem(10, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addWidget(fillRuleGroup);

        clipGroups = new QCheckBox(PropertiesPalette_GroupBase);
        clipGroups->setObjectName(QStringLiteral("clipGroups"));

        verticalLayout_3->addWidget(clipGroups);

        transparencyGroup = new QGroupBox(PropertiesPalette_GroupBase);
        transparencyGroup->setObjectName(QStringLiteral("transparencyGroup"));
        transparencyGroup->setFlat(true);
        verticalLayout_4 = new QVBoxLayout(transparencyGroup);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(2, 2, 2, 2);
        transPalWidget = new Tpalette(transparencyGroup);
        transPalWidget->setObjectName(QStringLiteral("transPalWidget"));

        verticalLayout_4->addWidget(transPalWidget);


        verticalLayout_3->addWidget(transparencyGroup);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(PropertiesPalette_GroupBase);

        QMetaObject::connectSlotsByName(PropertiesPalette_GroupBase);
    } // setupUi

    void retranslateUi(QWidget *PropertiesPalette_GroupBase)
    {
        PropertiesPalette_GroupBase->setWindowTitle(QApplication::translate("PropertiesPalette_GroupBase", "Form", 0));
        shapeGroup->setTitle(QApplication::translate("PropertiesPalette_GroupBase", "Shape", 0));
        customShape->setText(QApplication::translate("PropertiesPalette_GroupBase", "...", 0));
        editShape->setText(QApplication::translate("PropertiesPalette_GroupBase", "&Edit...", 0));
        textFlowGroup->setTitle(QApplication::translate("PropertiesPalette_GroupBase", "Text Flow Around Frame", 0));
        textFlowDisabled->setText(QApplication::translate("PropertiesPalette_GroupBase", "Disabled", 0));
        textFlowUsesFrameShape->setText(QApplication::translate("PropertiesPalette_GroupBase", "Use &Frame Shape", 0));
        textFlowUsesBoundingBox->setText(QApplication::translate("PropertiesPalette_GroupBase", "Use &Bounding Box", 0));
        textFlowUsesContourLine->setText(QApplication::translate("PropertiesPalette_GroupBase", "&Use Contour Line", 0));
        textFlowUsesImageClipping->setText(QApplication::translate("PropertiesPalette_GroupBase", "Use Image Clip Path", 0));
        fillRuleGroup->setTitle(QApplication::translate("PropertiesPalette_GroupBase", "Fill Rule", 0));
        evenOdd->setText(QApplication::translate("PropertiesPalette_GroupBase", "Even-Odd", 0));
        nonZero->setText(QApplication::translate("PropertiesPalette_GroupBase", "Non Zero", 0));
        clipGroups->setText(QApplication::translate("PropertiesPalette_GroupBase", "Group clips Contents", 0));
        transparencyGroup->setTitle(QApplication::translate("PropertiesPalette_GroupBase", "Transparency", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertiesPalette_GroupBase: public Ui_PropertiesPalette_GroupBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESPALETTE_GROUPBASE_H
