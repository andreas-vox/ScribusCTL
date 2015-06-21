/********************************************************************************
** Form generated from reading UI file 'selectobjects.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTOBJECTS_H
#define UI_SELECTOBJECTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include "ui/colorcombo.h"
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_selectDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *rangeGroup;
    QHBoxLayout *hboxLayout;
    QRadioButton *buttonCurrentPage;
    QRadioButton *buttonCurrentLayer;
    QRadioButton *buttonWorkspace;
    QGroupBox *attributeGroup;
    QGridLayout *gridLayout;
    QCheckBox *useItemType;
    QComboBox *itemTypeCombo;
    QCheckBox *useFillColor;
    ColorCombo *backgroundCombo;
    QCheckBox *useLineColor;
    ColorCombo *lineCombo;
    QCheckBox *useLineWidth;
    ScrSpinBox *lineWidthSpin;
    QCheckBox *usePrintState;
    QComboBox *printStateCombo;
    QCheckBox *useLockedState;
    QComboBox *lockStateCombo;
    QCheckBox *useResizeState;
    QComboBox *resizeStateCombo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *selectDialog)
    {
        if (selectDialog->objectName().isEmpty())
            selectDialog->setObjectName(QStringLiteral("selectDialog"));
        selectDialog->resize(423, 321);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectDialog->sizePolicy().hasHeightForWidth());
        selectDialog->setSizePolicy(sizePolicy);
        selectDialog->setModal(true);
        vboxLayout = new QVBoxLayout(selectDialog);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        rangeGroup = new QGroupBox(selectDialog);
        rangeGroup->setObjectName(QStringLiteral("rangeGroup"));
        hboxLayout = new QHBoxLayout(rangeGroup);
        hboxLayout->setSpacing(5);
        hboxLayout->setContentsMargins(10, 10, 10, 10);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        buttonCurrentPage = new QRadioButton(rangeGroup);
        buttonCurrentPage->setObjectName(QStringLiteral("buttonCurrentPage"));
        buttonCurrentPage->setChecked(true);

        hboxLayout->addWidget(buttonCurrentPage);

        buttonCurrentLayer = new QRadioButton(rangeGroup);
        buttonCurrentLayer->setObjectName(QStringLiteral("buttonCurrentLayer"));

        hboxLayout->addWidget(buttonCurrentLayer);

        buttonWorkspace = new QRadioButton(rangeGroup);
        buttonWorkspace->setObjectName(QStringLiteral("buttonWorkspace"));

        hboxLayout->addWidget(buttonWorkspace);


        vboxLayout->addWidget(rangeGroup);

        attributeGroup = new QGroupBox(selectDialog);
        attributeGroup->setObjectName(QStringLiteral("attributeGroup"));
        attributeGroup->setCheckable(true);
        attributeGroup->setChecked(false);
        gridLayout = new QGridLayout(attributeGroup);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        useItemType = new QCheckBox(attributeGroup);
        useItemType->setObjectName(QStringLiteral("useItemType"));

        gridLayout->addWidget(useItemType, 0, 0, 1, 1);

        itemTypeCombo = new QComboBox(attributeGroup);
        itemTypeCombo->setObjectName(QStringLiteral("itemTypeCombo"));
        itemTypeCombo->setEnabled(false);

        gridLayout->addWidget(itemTypeCombo, 0, 1, 1, 1);

        useFillColor = new QCheckBox(attributeGroup);
        useFillColor->setObjectName(QStringLiteral("useFillColor"));

        gridLayout->addWidget(useFillColor, 1, 0, 1, 1);

        backgroundCombo = new ColorCombo(attributeGroup);
        backgroundCombo->setObjectName(QStringLiteral("backgroundCombo"));
        backgroundCombo->setEnabled(false);

        gridLayout->addWidget(backgroundCombo, 1, 1, 1, 1);

        useLineColor = new QCheckBox(attributeGroup);
        useLineColor->setObjectName(QStringLiteral("useLineColor"));

        gridLayout->addWidget(useLineColor, 2, 0, 1, 1);

        lineCombo = new ColorCombo(attributeGroup);
        lineCombo->setObjectName(QStringLiteral("lineCombo"));
        lineCombo->setEnabled(false);

        gridLayout->addWidget(lineCombo, 2, 1, 1, 1);

        useLineWidth = new QCheckBox(attributeGroup);
        useLineWidth->setObjectName(QStringLiteral("useLineWidth"));

        gridLayout->addWidget(useLineWidth, 3, 0, 1, 1);

        lineWidthSpin = new ScrSpinBox(attributeGroup);
        lineWidthSpin->setObjectName(QStringLiteral("lineWidthSpin"));
        lineWidthSpin->setEnabled(false);

        gridLayout->addWidget(lineWidthSpin, 3, 1, 1, 1);

        usePrintState = new QCheckBox(attributeGroup);
        usePrintState->setObjectName(QStringLiteral("usePrintState"));

        gridLayout->addWidget(usePrintState, 4, 0, 1, 1);

        printStateCombo = new QComboBox(attributeGroup);
        printStateCombo->setObjectName(QStringLiteral("printStateCombo"));
        printStateCombo->setEnabled(false);

        gridLayout->addWidget(printStateCombo, 4, 1, 1, 1);

        useLockedState = new QCheckBox(attributeGroup);
        useLockedState->setObjectName(QStringLiteral("useLockedState"));

        gridLayout->addWidget(useLockedState, 5, 0, 1, 1);

        lockStateCombo = new QComboBox(attributeGroup);
        lockStateCombo->setObjectName(QStringLiteral("lockStateCombo"));
        lockStateCombo->setEnabled(false);

        gridLayout->addWidget(lockStateCombo, 5, 1, 1, 1);

        useResizeState = new QCheckBox(attributeGroup);
        useResizeState->setObjectName(QStringLiteral("useResizeState"));

        gridLayout->addWidget(useResizeState, 6, 0, 1, 1);

        resizeStateCombo = new QComboBox(attributeGroup);
        resizeStateCombo->setObjectName(QStringLiteral("resizeStateCombo"));
        resizeStateCombo->setEnabled(false);

        gridLayout->addWidget(resizeStateCombo, 6, 1, 1, 1);


        vboxLayout->addWidget(attributeGroup);

        buttonBox = new QDialogButtonBox(selectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(selectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), selectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), selectDialog, SLOT(reject()));
        QObject::connect(useItemType, SIGNAL(clicked(bool)), itemTypeCombo, SLOT(setEnabled(bool)));
        QObject::connect(useFillColor, SIGNAL(clicked(bool)), backgroundCombo, SLOT(setEnabled(bool)));
        QObject::connect(useLineColor, SIGNAL(clicked(bool)), lineCombo, SLOT(setEnabled(bool)));
        QObject::connect(useLineWidth, SIGNAL(clicked(bool)), lineWidthSpin, SLOT(setEnabled(bool)));
        QObject::connect(usePrintState, SIGNAL(clicked(bool)), printStateCombo, SLOT(setEnabled(bool)));
        QObject::connect(useLockedState, SIGNAL(clicked(bool)), lockStateCombo, SLOT(setEnabled(bool)));
        QObject::connect(useResizeState, SIGNAL(clicked(bool)), resizeStateCombo, SLOT(setEnabled(bool)));

        lockStateCombo->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(selectDialog);
    } // setupUi

    void retranslateUi(QDialog *selectDialog)
    {
        selectDialog->setWindowTitle(QApplication::translate("selectDialog", "Select All Items", 0));
        rangeGroup->setTitle(QApplication::translate("selectDialog", "Select All Items", 0));
#ifndef QT_NO_TOOLTIP
        buttonCurrentPage->setToolTip(QApplication::translate("selectDialog", "Select all items on the current page", 0));
#endif // QT_NO_TOOLTIP
        buttonCurrentPage->setText(QApplication::translate("selectDialog", "on Current Page", 0));
#ifndef QT_NO_TOOLTIP
        buttonCurrentLayer->setToolTip(QApplication::translate("selectDialog", "Select all items on the current layer on all pages", 0));
#endif // QT_NO_TOOLTIP
        buttonCurrentLayer->setText(QApplication::translate("selectDialog", "on Current Layer", 0));
#ifndef QT_NO_TOOLTIP
        buttonWorkspace->setToolTip(QApplication::translate("selectDialog", "Select all items not on a page", 0));
#endif // QT_NO_TOOLTIP
        buttonWorkspace->setText(QApplication::translate("selectDialog", "on the Scratch Space", 0));
#ifndef QT_NO_TOOLTIP
        attributeGroup->setToolTip(QApplication::translate("selectDialog", "Narrow the selection of items based on various item properties", 0));
#endif // QT_NO_TOOLTIP
        attributeGroup->setTitle(QApplication::translate("selectDialog", "With the Following Attributes", 0));
#ifndef QT_NO_TOOLTIP
        useItemType->setToolTip(QApplication::translate("selectDialog", "Select based on item type", 0));
#endif // QT_NO_TOOLTIP
        useItemType->setText(QApplication::translate("selectDialog", "Item Type", 0));
        itemTypeCombo->clear();
        itemTypeCombo->insertItems(0, QStringList()
         << QApplication::translate("selectDialog", "Text Frame", 0)
         << QApplication::translate("selectDialog", "Image Frame", 0)
         << QApplication::translate("selectDialog", "Shape", 0)
         << QApplication::translate("selectDialog", "Polyline", 0)
         << QApplication::translate("selectDialog", "Line", 0)
         << QApplication::translate("selectDialog", "Render Frame", 0)
         << QApplication::translate("selectDialog", "Symbol", 0)
        );
#ifndef QT_NO_TOOLTIP
        useFillColor->setToolTip(QApplication::translate("selectDialog", "Select based on the color that the item is filled with", 0));
#endif // QT_NO_TOOLTIP
        useFillColor->setText(QApplication::translate("selectDialog", "Fill Color", 0));
#ifndef QT_NO_TOOLTIP
        useLineColor->setToolTip(QApplication::translate("selectDialog", "Select based on the color of the line or outline", 0));
#endif // QT_NO_TOOLTIP
        useLineColor->setText(QApplication::translate("selectDialog", "Line Color", 0));
#ifndef QT_NO_TOOLTIP
        useLineWidth->setToolTip(QApplication::translate("selectDialog", "Select based on the width of the line of the item", 0));
#endif // QT_NO_TOOLTIP
        useLineWidth->setText(QApplication::translate("selectDialog", "Line Width", 0));
#ifndef QT_NO_TOOLTIP
        usePrintState->setToolTip(QApplication::translate("selectDialog", "Select items based on whether they will be printed or not", 0));
#endif // QT_NO_TOOLTIP
        usePrintState->setText(QApplication::translate("selectDialog", "Printable", 0));
        printStateCombo->clear();
        printStateCombo->insertItems(0, QStringList()
         << QApplication::translate("selectDialog", "Yes", 0)
         << QApplication::translate("selectDialog", "No", 0)
        );
#ifndef QT_NO_TOOLTIP
        useLockedState->setToolTip(QApplication::translate("selectDialog", "Select items based on their locked status", 0));
#endif // QT_NO_TOOLTIP
        useLockedState->setText(QApplication::translate("selectDialog", "Locked", 0));
        lockStateCombo->clear();
        lockStateCombo->insertItems(0, QStringList()
         << QApplication::translate("selectDialog", "Yes", 0)
         << QApplication::translate("selectDialog", "No", 0)
        );
#ifndef QT_NO_TOOLTIP
        useResizeState->setToolTip(QApplication::translate("selectDialog", "Select items based on whether they have their size locked or not", 0));
#endif // QT_NO_TOOLTIP
        useResizeState->setText(QApplication::translate("selectDialog", "Resizable", 0));
        resizeStateCombo->clear();
        resizeStateCombo->insertItems(0, QStringList()
         << QApplication::translate("selectDialog", "Yes", 0)
         << QApplication::translate("selectDialog", "No", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class selectDialog: public Ui_selectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTOBJECTS_H
