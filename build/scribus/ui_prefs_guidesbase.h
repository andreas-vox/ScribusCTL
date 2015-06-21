/********************************************************************************
** Form generated from reading UI file 'prefs_guidesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_GUIDESBASE_H
#define UI_PREFS_GUIDESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_Prefs_Guides
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QListWidget *guidePlacementListBox;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonUp;
    QPushButton *buttonDown;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QLabel *label_4;
    ScrSpinBox *guideSnapDistanceSpinBox;
    QLabel *label_3;
    ScrSpinBox *guideGrabRadiusSpinBox;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *majorGridSpacingLabel;
    ScrSpinBox *majorGridSpacingSpinBox;
    QLabel *minorGridSpacingLabel;
    ScrSpinBox *minorGridSpacingSpinBox;
    QLabel *baselineGridSpacingLabel;
    ScrSpinBox *baselineGridSpacingSpinBox;
    QLabel *baselineGridOffsetLabel;
    ScrSpinBox *baselineGridOffsetSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *visibilityGuidesCheckBox;
    QCheckBox *visibilityMarginsCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *visibilityGridCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_8;
    QComboBox *gridTypeCombo;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *visibilityBaselineGridCheckBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabColors;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_2;
    QLabel *label_15;
    QPushButton *guideColorPushButton;
    QLabel *label_12;
    QPushButton *marginColorPushButton;
    QLabel *label_13;
    QPushButton *majorGridColorPushButton;
    QLabel *label_16;
    QPushButton *minorGridColorPushButton;
    QLabel *label_14;
    QPushButton *baselineGridColorPushButton;

    void setupUi(QWidget *Prefs_Guides)
    {
        if (Prefs_Guides->objectName().isEmpty())
            Prefs_Guides->setObjectName(QStringLiteral("Prefs_Guides"));
        Prefs_Guides->resize(767, 603);
        verticalLayout_2 = new QVBoxLayout(Prefs_Guides);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(Prefs_Guides);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        tabWidget = new QTabWidget(Prefs_Guides);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_7 = new QVBoxLayout(tab);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        verticalLayout_7->addWidget(label_2);

        line_3 = new QFrame(tab);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        guidePlacementListBox = new QListWidget(tab);
        guidePlacementListBox->setObjectName(QStringLiteral("guidePlacementListBox"));
        guidePlacementListBox->setMaximumSize(QSize(16777215, 200));
        guidePlacementListBox->setDragDropMode(QAbstractItemView::NoDragDrop);
        guidePlacementListBox->setLayoutMode(QListView::SinglePass);

        horizontalLayout->addWidget(guidePlacementListBox);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_5 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        buttonUp = new QPushButton(tab);
        buttonUp->setObjectName(QStringLiteral("buttonUp"));
        buttonUp->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonUp->sizePolicy().hasHeightForWidth());
        buttonUp->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(buttonUp);

        buttonDown = new QPushButton(tab);
        buttonDown->setObjectName(QStringLiteral("buttonDown"));
        buttonDown->setEnabled(false);
        sizePolicy.setHeightForWidth(buttonDown->sizePolicy().hasHeightForWidth());
        buttonDown->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(buttonDown);


        verticalLayout_6->addLayout(verticalLayout);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_6);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        guideSnapDistanceSpinBox = new ScrSpinBox(tab);
        guideSnapDistanceSpinBox->setObjectName(QStringLiteral("guideSnapDistanceSpinBox"));
        guideSnapDistanceSpinBox->setMinimum(1);
        guideSnapDistanceSpinBox->setMaximum(1000);

        gridLayout->addWidget(guideSnapDistanceSpinBox, 0, 1, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        guideGrabRadiusSpinBox = new ScrSpinBox(tab);
        guideGrabRadiusSpinBox->setObjectName(QStringLiteral("guideGrabRadiusSpinBox"));
        guideGrabRadiusSpinBox->setMinimum(1);
        guideGrabRadiusSpinBox->setMaximum(1000);

        gridLayout->addWidget(guideGrabRadiusSpinBox, 1, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_7->addLayout(horizontalLayout);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        verticalLayout_7->addWidget(label_7);

        line_2 = new QFrame(tab);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        majorGridSpacingLabel = new QLabel(tab);
        majorGridSpacingLabel->setObjectName(QStringLiteral("majorGridSpacingLabel"));

        gridLayout_2->addWidget(majorGridSpacingLabel, 0, 0, 1, 1);

        majorGridSpacingSpinBox = new ScrSpinBox(tab);
        majorGridSpacingSpinBox->setObjectName(QStringLiteral("majorGridSpacingSpinBox"));

        gridLayout_2->addWidget(majorGridSpacingSpinBox, 0, 1, 1, 1);

        minorGridSpacingLabel = new QLabel(tab);
        minorGridSpacingLabel->setObjectName(QStringLiteral("minorGridSpacingLabel"));

        gridLayout_2->addWidget(minorGridSpacingLabel, 1, 0, 1, 1);

        minorGridSpacingSpinBox = new ScrSpinBox(tab);
        minorGridSpacingSpinBox->setObjectName(QStringLiteral("minorGridSpacingSpinBox"));

        gridLayout_2->addWidget(minorGridSpacingSpinBox, 1, 1, 1, 1);

        baselineGridSpacingLabel = new QLabel(tab);
        baselineGridSpacingLabel->setObjectName(QStringLiteral("baselineGridSpacingLabel"));

        gridLayout_2->addWidget(baselineGridSpacingLabel, 2, 0, 1, 1);

        baselineGridSpacingSpinBox = new ScrSpinBox(tab);
        baselineGridSpacingSpinBox->setObjectName(QStringLiteral("baselineGridSpacingSpinBox"));
        baselineGridSpacingSpinBox->setMinimum(1);

        gridLayout_2->addWidget(baselineGridSpacingSpinBox, 2, 1, 1, 1);

        baselineGridOffsetLabel = new QLabel(tab);
        baselineGridOffsetLabel->setObjectName(QStringLiteral("baselineGridOffsetLabel"));

        gridLayout_2->addWidget(baselineGridOffsetLabel, 3, 0, 1, 1);

        baselineGridOffsetSpinBox = new ScrSpinBox(tab);
        baselineGridOffsetSpinBox->setObjectName(QStringLiteral("baselineGridOffsetSpinBox"));

        gridLayout_2->addWidget(baselineGridOffsetSpinBox, 3, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        visibilityGuidesCheckBox = new QCheckBox(tab_2);
        visibilityGuidesCheckBox->setObjectName(QStringLiteral("visibilityGuidesCheckBox"));

        verticalLayout_3->addWidget(visibilityGuidesCheckBox);

        visibilityMarginsCheckBox = new QCheckBox(tab_2);
        visibilityMarginsCheckBox->setObjectName(QStringLiteral("visibilityMarginsCheckBox"));

        verticalLayout_3->addWidget(visibilityMarginsCheckBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        visibilityGridCheckBox = new QCheckBox(tab_2);
        visibilityGridCheckBox->setObjectName(QStringLiteral("visibilityGridCheckBox"));

        horizontalLayout_3->addWidget(visibilityGridCheckBox);

        horizontalSpacer_4 = new QSpacerItem(15, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_3->addWidget(label_8);

        gridTypeCombo = new QComboBox(tab_2);
        gridTypeCombo->setObjectName(QStringLiteral("gridTypeCombo"));
        gridTypeCombo->setEnabled(false);
        gridTypeCombo->setFrame(true);

        horizontalLayout_3->addWidget(gridTypeCombo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        visibilityBaselineGridCheckBox = new QCheckBox(tab_2);
        visibilityBaselineGridCheckBox->setObjectName(QStringLiteral("visibilityBaselineGridCheckBox"));

        verticalLayout_3->addWidget(visibilityBaselineGridCheckBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_2, QString());
        tabColors = new QWidget();
        tabColors->setObjectName(QStringLiteral("tabColors"));
        verticalLayout_4 = new QVBoxLayout(tabColors);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label_15 = new QLabel(tabColors);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_15);

        guideColorPushButton = new QPushButton(tabColors);
        guideColorPushButton->setObjectName(QStringLiteral("guideColorPushButton"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, guideColorPushButton);

        label_12 = new QLabel(tabColors);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_12);

        marginColorPushButton = new QPushButton(tabColors);
        marginColorPushButton->setObjectName(QStringLiteral("marginColorPushButton"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, marginColorPushButton);

        label_13 = new QLabel(tabColors);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_13);

        majorGridColorPushButton = new QPushButton(tabColors);
        majorGridColorPushButton->setObjectName(QStringLiteral("majorGridColorPushButton"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, majorGridColorPushButton);

        label_16 = new QLabel(tabColors);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_16);

        minorGridColorPushButton = new QPushButton(tabColors);
        minorGridColorPushButton->setObjectName(QStringLiteral("minorGridColorPushButton"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, minorGridColorPushButton);

        label_14 = new QLabel(tabColors);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_14);

        baselineGridColorPushButton = new QPushButton(tabColors);
        baselineGridColorPushButton->setObjectName(QStringLiteral("baselineGridColorPushButton"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, baselineGridColorPushButton);


        verticalLayout_4->addLayout(formLayout_2);

        tabWidget->addTab(tabColors, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(Prefs_Guides);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Prefs_Guides);
    } // setupUi

    void retranslateUi(QWidget *Prefs_Guides)
    {
        Prefs_Guides->setWindowTitle(QApplication::translate("Prefs_Guides", "Form", 0));
        label->setText(QApplication::translate("Prefs_Guides", "Guides", 0));
        label_2->setText(QApplication::translate("Prefs_Guides", "Placement:", 0));
        buttonUp->setText(QString());
        buttonDown->setText(QString());
        label_4->setText(QApplication::translate("Prefs_Guides", "Snap Distance:", 0));
        guideSnapDistanceSpinBox->setSuffix(QApplication::translate("Prefs_Guides", " px", 0));
        label_3->setText(QApplication::translate("Prefs_Guides", "Grab Radius:", 0));
        guideGrabRadiusSpinBox->setSuffix(QApplication::translate("Prefs_Guides", " px", 0));
        label_7->setText(QApplication::translate("Prefs_Guides", "Distances", 0));
        majorGridSpacingLabel->setText(QApplication::translate("Prefs_Guides", "Major Grid Spacing:", 0));
        minorGridSpacingLabel->setText(QApplication::translate("Prefs_Guides", "Minor Grid Spacing:", 0));
        baselineGridSpacingLabel->setText(QApplication::translate("Prefs_Guides", "Baseline Grid Spacing:", 0));
        baselineGridOffsetLabel->setText(QApplication::translate("Prefs_Guides", "Baseline Grid Offset:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Prefs_Guides", "Placement", 0));
        visibilityGuidesCheckBox->setText(QApplication::translate("Prefs_Guides", "Guides", 0));
        visibilityMarginsCheckBox->setText(QApplication::translate("Prefs_Guides", "Margins", 0));
        visibilityGridCheckBox->setText(QApplication::translate("Prefs_Guides", "Page Grid", 0));
        label_8->setText(QApplication::translate("Prefs_Guides", "Type:", 0));
        visibilityBaselineGridCheckBox->setText(QApplication::translate("Prefs_Guides", "Baseline Grid", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Prefs_Guides", "Visibility", 0));
        label_15->setText(QApplication::translate("Prefs_Guides", "Guides:", 0));
        guideColorPushButton->setText(QString());
        label_12->setText(QApplication::translate("Prefs_Guides", "Margins:", 0));
        marginColorPushButton->setText(QString());
        label_13->setText(QApplication::translate("Prefs_Guides", "Major Grid:", 0));
        majorGridColorPushButton->setText(QString());
        label_16->setText(QApplication::translate("Prefs_Guides", "Minor Grid:", 0));
        minorGridColorPushButton->setText(QString());
        label_14->setText(QApplication::translate("Prefs_Guides", "Baseline Grid:", 0));
        baselineGridColorPushButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabColors), QApplication::translate("Prefs_Guides", "Colors", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_Guides: public Ui_Prefs_Guides {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_GUIDESBASE_H
