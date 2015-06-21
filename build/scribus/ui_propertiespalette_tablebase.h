/********************************************************************************
** Form generated from reading UI file 'propertiespalette_tablebase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESPALETTE_TABLEBASE_H
#define UI_PROPERTIESPALETTE_TABLEBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/colorcombo.h"
#include "ui/linecombo.h"
#include "ui/scrspinbox.h"
#include "ui/spalette.h"
#include "ui/tablesideselector.h"

QT_BEGIN_NAMESPACE

class Ui_PropertiesPalette_TableBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *labelTable;
    TableStyleComboBox *tableStyleCombo;
    QToolButton *buttonClearTableStyle;
    QLabel *labelCells;
    CellStyleComboBox *cellStyleCombo;
    QToolButton *buttonClearCellStyle;
    QGroupBox *bordersLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *bordesLayout1;
    QVBoxLayout *bordersLayout1_1;
    QPushButton *addBorderLineButton;
    QPushButton *removeBorderLineButton;
    QSpacerItem *buttonSpacer;
    QListWidget *borderLineList;
    TableSideSelector *sideSelector;
    QHBoxLayout *bordersLayout2;
    QFormLayout *bordersLayout2_1;
    QLabel *borderLineWidthLabel;
    QLabel *borderLineColorLabel;
    ColorCombo *borderLineColor;
    ScrSpinBox *borderLineWidth;
    QFormLayout *bordersLayout2_2;
    QLabel *borderLineStyleLabel;
    LineCombo *borderLineStyle;
    QLabel *borderLineShadeLabel;
    QSpinBox *borderLineShade;
    QGroupBox *fillLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *fillLayout1;
    QFormLayout *fillLayout1_1;
    QLabel *fillColorLabel;
    ColorCombo *fillColor;
    QFormLayout *fillLayout1_2;
    QLabel *fillShadeLabel;
    QSpinBox *fillShade;

    void setupUi(QWidget *PropertiesPalette_TableBase)
    {
        if (PropertiesPalette_TableBase->objectName().isEmpty())
            PropertiesPalette_TableBase->setObjectName(QStringLiteral("PropertiesPalette_TableBase"));
        PropertiesPalette_TableBase->resize(343, 464);
        verticalLayout_2 = new QVBoxLayout(PropertiesPalette_TableBase);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(PropertiesPalette_TableBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelTable = new QLabel(groupBox);
        labelTable->setObjectName(QStringLiteral("labelTable"));

        gridLayout->addWidget(labelTable, 0, 0, 1, 1);

        tableStyleCombo = new TableStyleComboBox(groupBox);
        tableStyleCombo->setObjectName(QStringLiteral("tableStyleCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableStyleCombo->sizePolicy().hasHeightForWidth());
        tableStyleCombo->setSizePolicy(sizePolicy);

        gridLayout->addWidget(tableStyleCombo, 0, 1, 1, 1);

        buttonClearTableStyle = new QToolButton(groupBox);
        buttonClearTableStyle->setObjectName(QStringLiteral("buttonClearTableStyle"));
        buttonClearTableStyle->setIconSize(QSize(16, 16));

        gridLayout->addWidget(buttonClearTableStyle, 0, 2, 1, 1);

        labelCells = new QLabel(groupBox);
        labelCells->setObjectName(QStringLiteral("labelCells"));

        gridLayout->addWidget(labelCells, 1, 0, 1, 1);

        cellStyleCombo = new CellStyleComboBox(groupBox);
        cellStyleCombo->setObjectName(QStringLiteral("cellStyleCombo"));
        sizePolicy.setHeightForWidth(cellStyleCombo->sizePolicy().hasHeightForWidth());
        cellStyleCombo->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cellStyleCombo, 1, 1, 1, 1);

        buttonClearCellStyle = new QToolButton(groupBox);
        buttonClearCellStyle->setObjectName(QStringLiteral("buttonClearCellStyle"));
        buttonClearCellStyle->setIconSize(QSize(16, 16));

        gridLayout->addWidget(buttonClearCellStyle, 1, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        bordersLayout = new QGroupBox(PropertiesPalette_TableBase);
        bordersLayout->setObjectName(QStringLiteral("bordersLayout"));
        bordersLayout->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout = new QVBoxLayout(bordersLayout);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        bordesLayout1 = new QHBoxLayout();
        bordesLayout1->setObjectName(QStringLiteral("bordesLayout1"));
        bordersLayout1_1 = new QVBoxLayout();
        bordersLayout1_1->setObjectName(QStringLiteral("bordersLayout1_1"));
        addBorderLineButton = new QPushButton(bordersLayout);
        addBorderLineButton->setObjectName(QStringLiteral("addBorderLineButton"));
        addBorderLineButton->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addBorderLineButton->sizePolicy().hasHeightForWidth());
        addBorderLineButton->setSizePolicy(sizePolicy1);
        addBorderLineButton->setMinimumSize(QSize(20, 20));
        addBorderLineButton->setMaximumSize(QSize(20, 20));

        bordersLayout1_1->addWidget(addBorderLineButton);

        removeBorderLineButton = new QPushButton(bordersLayout);
        removeBorderLineButton->setObjectName(QStringLiteral("removeBorderLineButton"));
        removeBorderLineButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(removeBorderLineButton->sizePolicy().hasHeightForWidth());
        removeBorderLineButton->setSizePolicy(sizePolicy1);
        removeBorderLineButton->setMinimumSize(QSize(20, 20));
        removeBorderLineButton->setMaximumSize(QSize(20, 20));

        bordersLayout1_1->addWidget(removeBorderLineButton);

        buttonSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        bordersLayout1_1->addItem(buttonSpacer);


        bordesLayout1->addLayout(bordersLayout1_1);

        borderLineList = new QListWidget(bordersLayout);
        borderLineList->setObjectName(QStringLiteral("borderLineList"));
        borderLineList->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(borderLineList->sizePolicy().hasHeightForWidth());
        borderLineList->setSizePolicy(sizePolicy2);
        borderLineList->setMinimumSize(QSize(0, 50));

        bordesLayout1->addWidget(borderLineList);

        sideSelector = new TableSideSelector(bordersLayout);
        sideSelector->setObjectName(QStringLiteral("sideSelector"));
        sizePolicy1.setHeightForWidth(sideSelector->sizePolicy().hasHeightForWidth());
        sideSelector->setSizePolicy(sizePolicy1);
        sideSelector->setMinimumSize(QSize(80, 80));
        sideSelector->setFrameShape(QFrame::StyledPanel);
        sideSelector->setFrameShadow(QFrame::Sunken);

        bordesLayout1->addWidget(sideSelector);


        verticalLayout->addLayout(bordesLayout1);

        bordersLayout2 = new QHBoxLayout();
        bordersLayout2->setObjectName(QStringLiteral("bordersLayout2"));
        bordersLayout2_1 = new QFormLayout();
        bordersLayout2_1->setObjectName(QStringLiteral("bordersLayout2_1"));
        bordersLayout2_1->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        borderLineWidthLabel = new QLabel(bordersLayout);
        borderLineWidthLabel->setObjectName(QStringLiteral("borderLineWidthLabel"));
        borderLineWidthLabel->setEnabled(false);

        bordersLayout2_1->setWidget(0, QFormLayout::LabelRole, borderLineWidthLabel);

        borderLineColorLabel = new QLabel(bordersLayout);
        borderLineColorLabel->setObjectName(QStringLiteral("borderLineColorLabel"));
        borderLineColorLabel->setEnabled(false);

        bordersLayout2_1->setWidget(1, QFormLayout::LabelRole, borderLineColorLabel);

        borderLineColor = new ColorCombo(bordersLayout);
        borderLineColor->setObjectName(QStringLiteral("borderLineColor"));
        borderLineColor->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(borderLineColor->sizePolicy().hasHeightForWidth());
        borderLineColor->setSizePolicy(sizePolicy3);
        borderLineColor->setMinimumSize(QSize(100, 0));

        bordersLayout2_1->setWidget(1, QFormLayout::FieldRole, borderLineColor);

        borderLineWidth = new ScrSpinBox(bordersLayout);
        borderLineWidth->setObjectName(QStringLiteral("borderLineWidth"));
        borderLineWidth->setEnabled(false);
        sizePolicy3.setHeightForWidth(borderLineWidth->sizePolicy().hasHeightForWidth());
        borderLineWidth->setSizePolicy(sizePolicy3);
        borderLineWidth->setMinimumSize(QSize(100, 0));

        bordersLayout2_1->setWidget(0, QFormLayout::FieldRole, borderLineWidth);


        bordersLayout2->addLayout(bordersLayout2_1);

        bordersLayout2_2 = new QFormLayout();
        bordersLayout2_2->setObjectName(QStringLiteral("bordersLayout2_2"));
        borderLineStyleLabel = new QLabel(bordersLayout);
        borderLineStyleLabel->setObjectName(QStringLiteral("borderLineStyleLabel"));
        borderLineStyleLabel->setEnabled(false);

        bordersLayout2_2->setWidget(0, QFormLayout::LabelRole, borderLineStyleLabel);

        borderLineStyle = new LineCombo(bordersLayout);
        borderLineStyle->setObjectName(QStringLiteral("borderLineStyle"));
        borderLineStyle->setEnabled(false);
        sizePolicy3.setHeightForWidth(borderLineStyle->sizePolicy().hasHeightForWidth());
        borderLineStyle->setSizePolicy(sizePolicy3);
        borderLineStyle->setMinimumSize(QSize(100, 0));

        bordersLayout2_2->setWidget(0, QFormLayout::FieldRole, borderLineStyle);

        borderLineShadeLabel = new QLabel(bordersLayout);
        borderLineShadeLabel->setObjectName(QStringLiteral("borderLineShadeLabel"));
        borderLineShadeLabel->setEnabled(false);

        bordersLayout2_2->setWidget(1, QFormLayout::LabelRole, borderLineShadeLabel);

        borderLineShade = new QSpinBox(bordersLayout);
        borderLineShade->setObjectName(QStringLiteral("borderLineShade"));
        borderLineShade->setEnabled(false);
        sizePolicy3.setHeightForWidth(borderLineShade->sizePolicy().hasHeightForWidth());
        borderLineShade->setSizePolicy(sizePolicy3);
        borderLineShade->setMinimumSize(QSize(100, 0));
        borderLineShade->setMaximum(100);
        borderLineShade->setValue(100);

        bordersLayout2_2->setWidget(1, QFormLayout::FieldRole, borderLineShade);


        bordersLayout2->addLayout(bordersLayout2_2);


        verticalLayout->addLayout(bordersLayout2);


        verticalLayout_2->addWidget(bordersLayout);

        fillLayout = new QGroupBox(PropertiesPalette_TableBase);
        fillLayout->setObjectName(QStringLiteral("fillLayout"));
        verticalLayout_3 = new QVBoxLayout(fillLayout);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        fillLayout1 = new QHBoxLayout();
        fillLayout1->setObjectName(QStringLiteral("fillLayout1"));
        fillLayout1_1 = new QFormLayout();
        fillLayout1_1->setObjectName(QStringLiteral("fillLayout1_1"));
        fillColorLabel = new QLabel(fillLayout);
        fillColorLabel->setObjectName(QStringLiteral("fillColorLabel"));
        fillColorLabel->setEnabled(false);

        fillLayout1_1->setWidget(0, QFormLayout::LabelRole, fillColorLabel);

        fillColor = new ColorCombo(fillLayout);
        fillColor->setObjectName(QStringLiteral("fillColor"));
        fillColor->setEnabled(false);
        sizePolicy3.setHeightForWidth(fillColor->sizePolicy().hasHeightForWidth());
        fillColor->setSizePolicy(sizePolicy3);
        fillColor->setMinimumSize(QSize(100, 0));

        fillLayout1_1->setWidget(0, QFormLayout::FieldRole, fillColor);


        fillLayout1->addLayout(fillLayout1_1);

        fillLayout1_2 = new QFormLayout();
        fillLayout1_2->setObjectName(QStringLiteral("fillLayout1_2"));
        fillShadeLabel = new QLabel(fillLayout);
        fillShadeLabel->setObjectName(QStringLiteral("fillShadeLabel"));
        fillShadeLabel->setEnabled(false);

        fillLayout1_2->setWidget(0, QFormLayout::LabelRole, fillShadeLabel);

        fillShade = new QSpinBox(fillLayout);
        fillShade->setObjectName(QStringLiteral("fillShade"));
        fillShade->setEnabled(false);
        sizePolicy3.setHeightForWidth(fillShade->sizePolicy().hasHeightForWidth());
        fillShade->setSizePolicy(sizePolicy3);
        fillShade->setMinimumSize(QSize(100, 0));
        fillShade->setMaximum(100);
        fillShade->setValue(100);

        fillLayout1_2->setWidget(0, QFormLayout::FieldRole, fillShade);


        fillLayout1->addLayout(fillLayout1_2);


        verticalLayout_3->addLayout(fillLayout1);


        verticalLayout_2->addWidget(fillLayout);

#ifndef QT_NO_SHORTCUT
        borderLineWidthLabel->setBuddy(borderLineWidth);
        borderLineColorLabel->setBuddy(borderLineColor);
        borderLineStyleLabel->setBuddy(borderLineStyle);
        borderLineShadeLabel->setBuddy(borderLineShade);
#endif // QT_NO_SHORTCUT

        retranslateUi(PropertiesPalette_TableBase);

        QMetaObject::connectSlotsByName(PropertiesPalette_TableBase);
    } // setupUi

    void retranslateUi(QWidget *PropertiesPalette_TableBase)
    {
        PropertiesPalette_TableBase->setWindowTitle(QApplication::translate("PropertiesPalette_TableBase", "Form", 0));
        groupBox->setTitle(QApplication::translate("PropertiesPalette_TableBase", "Styles", 0));
        labelTable->setText(QApplication::translate("PropertiesPalette_TableBase", "Table", 0));
        buttonClearTableStyle->setText(QString());
        labelCells->setText(QApplication::translate("PropertiesPalette_TableBase", "Cells", 0));
        buttonClearCellStyle->setText(QString());
        bordersLayout->setTitle(QApplication::translate("PropertiesPalette_TableBase", "Borders", 0));
        addBorderLineButton->setText(QString());
        removeBorderLineButton->setText(QString());
        borderLineWidthLabel->setText(QApplication::translate("PropertiesPalette_TableBase", "Width:", 0));
        borderLineColorLabel->setText(QApplication::translate("PropertiesPalette_TableBase", "Color:", 0));
        borderLineStyleLabel->setText(QApplication::translate("PropertiesPalette_TableBase", "Type:", 0));
        borderLineShadeLabel->setText(QApplication::translate("PropertiesPalette_TableBase", "Shade:", 0));
        borderLineShade->setSuffix(QApplication::translate("PropertiesPalette_TableBase", " %", 0));
        fillLayout->setTitle(QApplication::translate("PropertiesPalette_TableBase", "Fill", 0));
        fillColorLabel->setText(QApplication::translate("PropertiesPalette_TableBase", "Color:", 0));
        fillShadeLabel->setText(QApplication::translate("PropertiesPalette_TableBase", "Shade:", 0));
        fillShade->setSuffix(QApplication::translate("PropertiesPalette_TableBase", " %", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertiesPalette_TableBase: public Ui_PropertiesPalette_TableBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESPALETTE_TABLEBASE_H
