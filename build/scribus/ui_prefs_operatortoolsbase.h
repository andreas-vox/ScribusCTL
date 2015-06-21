/********************************************************************************
** Form generated from reading UI file 'prefs_operatortoolsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_OPERATORTOOLSBASE_H
#define UI_PREFS_OPERATORTOOLSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ui/scrspinbox.h>

QT_BEGIN_NAMESPACE

class Ui_Prefs_OperatorTools
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    ScrSpinBox *zoomMinimumSpinBox;
    QSpinBox *zoomMaximumSpinBox;
    QSpinBox *zoomSteppingSpinBox;
    QSpacerItem *verticalSpacer;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QFrame *line_2;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    ScrSpinBox *itemDuplicateXDispSpinBox;
    ScrSpinBox *itemDuplicateYDispSpinBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_8;
    QFrame *line_3;
    QFormLayout *formLayout_3;
    QLabel *label_9;
    ScrSpinBox *rotationConstraintSpinBox;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Prefs_OperatorTools)
    {
        if (Prefs_OperatorTools->objectName().isEmpty())
            Prefs_OperatorTools->setObjectName(QStringLiteral("Prefs_OperatorTools"));
        Prefs_OperatorTools->resize(579, 495);
        verticalLayout = new QVBoxLayout(Prefs_OperatorTools);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Prefs_OperatorTools);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line = new QFrame(Prefs_OperatorTools);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        tabWidget = new QTabWidget(Prefs_OperatorTools);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideRight);
        tabWidget->setUsesScrollButtons(false);
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_2 = new QVBoxLayout(tab_4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        zoomMinimumSpinBox = new ScrSpinBox(tab_4);
        zoomMinimumSpinBox->setObjectName(QStringLiteral("zoomMinimumSpinBox"));
        zoomMinimumSpinBox->setMinimum(1);
        zoomMinimumSpinBox->setMaximum(3200);

        formLayout->setWidget(0, QFormLayout::FieldRole, zoomMinimumSpinBox);

        zoomMaximumSpinBox = new QSpinBox(tab_4);
        zoomMaximumSpinBox->setObjectName(QStringLiteral("zoomMaximumSpinBox"));
        zoomMaximumSpinBox->setMinimum(10);
        zoomMaximumSpinBox->setMaximum(32000);

        formLayout->setWidget(1, QFormLayout::FieldRole, zoomMaximumSpinBox);

        zoomSteppingSpinBox = new QSpinBox(tab_4);
        zoomSteppingSpinBox->setObjectName(QStringLiteral("zoomSteppingSpinBox"));
        zoomSteppingSpinBox->setMinimum(1);
        zoomSteppingSpinBox->setMaximum(500);

        formLayout->setWidget(2, QFormLayout::FieldRole, zoomSteppingSpinBox);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 231, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_3 = new QVBoxLayout(tab_5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);

        verticalLayout_3->addWidget(label_5);

        line_2 = new QFrame(tab_5);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6 = new QLabel(tab_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        itemDuplicateXDispSpinBox = new ScrSpinBox(tab_5);
        itemDuplicateXDispSpinBox->setObjectName(QStringLiteral("itemDuplicateXDispSpinBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, itemDuplicateXDispSpinBox);

        itemDuplicateYDispSpinBox = new ScrSpinBox(tab_5);
        itemDuplicateYDispSpinBox->setObjectName(QStringLiteral("itemDuplicateYDispSpinBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, itemDuplicateYDispSpinBox);


        verticalLayout_3->addLayout(formLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        verticalLayout_3->addWidget(label_8);

        line_3 = new QFrame(tab_5);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_9 = new QLabel(tab_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_9);

        rotationConstraintSpinBox = new ScrSpinBox(tab_5);
        rotationConstraintSpinBox->setObjectName(QStringLiteral("rotationConstraintSpinBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, rotationConstraintSpinBox);


        verticalLayout_3->addLayout(formLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 112, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_5, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Prefs_OperatorTools);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Prefs_OperatorTools);
    } // setupUi

    void retranslateUi(QWidget *Prefs_OperatorTools)
    {
        Prefs_OperatorTools->setWindowTitle(QApplication::translate("Prefs_OperatorTools", "Form", 0));
        label->setText(QApplication::translate("Prefs_OperatorTools", "Operator Tools", 0));
        label_2->setText(QApplication::translate("Prefs_OperatorTools", "Minimum:", 0));
        label_3->setText(QApplication::translate("Prefs_OperatorTools", "Maximum:", 0));
        label_4->setText(QApplication::translate("Prefs_OperatorTools", "Stepping:", 0));
        zoomMinimumSpinBox->setSuffix(QApplication::translate("Prefs_OperatorTools", " %", 0));
        zoomMaximumSpinBox->setSuffix(QApplication::translate("Prefs_OperatorTools", " %", 0));
        zoomSteppingSpinBox->setSuffix(QApplication::translate("Prefs_OperatorTools", " %", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Prefs_OperatorTools", "Zoom", 0));
        label_5->setText(QApplication::translate("Prefs_OperatorTools", "Item Duplicate", 0));
        label_6->setText(QApplication::translate("Prefs_OperatorTools", "X Displacement:", 0));
        label_7->setText(QApplication::translate("Prefs_OperatorTools", "Y Displacement:", 0));
        label_8->setText(QApplication::translate("Prefs_OperatorTools", "Rotation Tool", 0));
        label_9->setText(QApplication::translate("Prefs_OperatorTools", "Constrain To:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Prefs_OperatorTools", "Miscellaneous", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_OperatorTools: public Ui_Prefs_OperatorTools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_OPERATORTOOLSBASE_H
