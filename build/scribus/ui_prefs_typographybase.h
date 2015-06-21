/********************************************************************************
** Form generated from reading UI file 'prefs_typographybase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_TYPOGRAPHYBASE_H
#define UI_PREFS_TYPOGRAPHYBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_Typography
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QFrame *line_4;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QSpinBox *subscriptDisplacementSpinBox;
    QSpinBox *subscriptScalingSpinBox;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QFrame *line_3;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QSpinBox *superscriptDisplacementSpinBox;
    QLabel *label_8;
    QSpinBox *superscriptScalingSpinBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QFrame *line_2;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLabel *label_10;
    QDoubleSpinBox *underlineLineWidthSpinBox;
    QDoubleSpinBox *underlineDisplacementSpinBox;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_11;
    QFrame *line_5;
    QFormLayout *formLayout_4;
    QLabel *label_12;
    QDoubleSpinBox *strikeoutDisplacementSpinBox;
    QLabel *label_13;
    QDoubleSpinBox *strikeoutLineWidthSpinBox;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_14;
    QFrame *line_6;
    QFormLayout *formLayout_5;
    QLabel *label_15;
    QSpinBox *smallcapsScalingSpinBox;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_17;
    QFrame *line_7;
    QFormLayout *formLayout_6;
    QLabel *label_19;
    QSpinBox *automaticLineSpacingSpinBox;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Prefs_Typography)
    {
        if (Prefs_Typography->objectName().isEmpty())
            Prefs_Typography->setObjectName(QStringLiteral("Prefs_Typography"));
        Prefs_Typography->resize(682, 449);
        verticalLayout_2 = new QVBoxLayout(Prefs_Typography);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(Prefs_Typography);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        line = new QFrame(Prefs_Typography);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        scrollArea = new QScrollArea(Prefs_Typography);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 639, 782));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        line_4 = new QFrame(scrollAreaWidgetContents);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_3->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        subscriptDisplacementSpinBox = new QSpinBox(scrollAreaWidgetContents);
        subscriptDisplacementSpinBox->setObjectName(QStringLiteral("subscriptDisplacementSpinBox"));
        subscriptDisplacementSpinBox->setMaximum(100);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, subscriptDisplacementSpinBox);

        subscriptScalingSpinBox = new QSpinBox(scrollAreaWidgetContents);
        subscriptScalingSpinBox->setObjectName(QStringLiteral("subscriptScalingSpinBox"));
        subscriptScalingSpinBox->setMinimum(1);
        subscriptScalingSpinBox->setMaximum(100);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, subscriptScalingSpinBox);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_6);


        verticalLayout->addLayout(formLayout_3);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        superscriptDisplacementSpinBox = new QSpinBox(scrollAreaWidgetContents);
        superscriptDisplacementSpinBox->setObjectName(QStringLiteral("superscriptDisplacementSpinBox"));
        superscriptDisplacementSpinBox->setMaximum(100);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, superscriptDisplacementSpinBox);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        superscriptScalingSpinBox = new QSpinBox(scrollAreaWidgetContents);
        superscriptScalingSpinBox->setObjectName(QStringLiteral("superscriptScalingSpinBox"));
        superscriptScalingSpinBox->setMinimum(1);
        superscriptScalingSpinBox->setMaximum(100);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, superscriptScalingSpinBox);


        verticalLayout->addLayout(formLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_10);

        underlineLineWidthSpinBox = new QDoubleSpinBox(scrollAreaWidgetContents);
        underlineLineWidthSpinBox->setObjectName(QStringLiteral("underlineLineWidthSpinBox"));
        underlineLineWidthSpinBox->setWrapping(true);
        underlineLineWidthSpinBox->setMinimum(-0.1);
        underlineLineWidthSpinBox->setMaximum(100);

        formLayout->setWidget(1, QFormLayout::FieldRole, underlineLineWidthSpinBox);

        underlineDisplacementSpinBox = new QDoubleSpinBox(scrollAreaWidgetContents);
        underlineDisplacementSpinBox->setObjectName(QStringLiteral("underlineDisplacementSpinBox"));
        underlineDisplacementSpinBox->setWrapping(true);
        underlineDisplacementSpinBox->setMinimum(-0.1);
        underlineDisplacementSpinBox->setMaximum(100);

        formLayout->setWidget(0, QFormLayout::FieldRole, underlineDisplacementSpinBox);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        verticalLayout->addWidget(label_11);

        line_5 = new QFrame(scrollAreaWidgetContents);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_4->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_12);

        strikeoutDisplacementSpinBox = new QDoubleSpinBox(scrollAreaWidgetContents);
        strikeoutDisplacementSpinBox->setObjectName(QStringLiteral("strikeoutDisplacementSpinBox"));
        strikeoutDisplacementSpinBox->setWrapping(true);
        strikeoutDisplacementSpinBox->setMinimum(-0.1);
        strikeoutDisplacementSpinBox->setMaximum(100);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, strikeoutDisplacementSpinBox);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_13);

        strikeoutLineWidthSpinBox = new QDoubleSpinBox(scrollAreaWidgetContents);
        strikeoutLineWidthSpinBox->setObjectName(QStringLiteral("strikeoutLineWidthSpinBox"));
        strikeoutLineWidthSpinBox->setWrapping(true);
        strikeoutLineWidthSpinBox->setMinimum(-0.1);
        strikeoutLineWidthSpinBox->setMaximum(100);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, strikeoutLineWidthSpinBox);


        verticalLayout->addLayout(formLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);

        verticalLayout->addWidget(label_14);

        line_6 = new QFrame(scrollAreaWidgetContents);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_6);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_5->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_15);

        smallcapsScalingSpinBox = new QSpinBox(scrollAreaWidgetContents);
        smallcapsScalingSpinBox->setObjectName(QStringLiteral("smallcapsScalingSpinBox"));
        smallcapsScalingSpinBox->setMaximum(100);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, smallcapsScalingSpinBox);


        verticalLayout->addLayout(formLayout_5);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font1);

        verticalLayout->addWidget(label_17);

        line_7 = new QFrame(scrollAreaWidgetContents);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_7);

        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        formLayout_6->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_6->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_19);

        automaticLineSpacingSpinBox = new QSpinBox(scrollAreaWidgetContents);
        automaticLineSpacingSpinBox->setObjectName(QStringLiteral("automaticLineSpacingSpinBox"));
        automaticLineSpacingSpinBox->setMinimum(100);
        automaticLineSpacingSpinBox->setMaximum(500);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, automaticLineSpacingSpinBox);


        verticalLayout->addLayout(formLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, subscriptDisplacementSpinBox);
        QWidget::setTabOrder(subscriptDisplacementSpinBox, subscriptScalingSpinBox);
        QWidget::setTabOrder(subscriptScalingSpinBox, superscriptDisplacementSpinBox);
        QWidget::setTabOrder(superscriptDisplacementSpinBox, superscriptScalingSpinBox);
        QWidget::setTabOrder(superscriptScalingSpinBox, underlineDisplacementSpinBox);
        QWidget::setTabOrder(underlineDisplacementSpinBox, underlineLineWidthSpinBox);
        QWidget::setTabOrder(underlineLineWidthSpinBox, strikeoutDisplacementSpinBox);
        QWidget::setTabOrder(strikeoutDisplacementSpinBox, strikeoutLineWidthSpinBox);
        QWidget::setTabOrder(strikeoutLineWidthSpinBox, smallcapsScalingSpinBox);
        QWidget::setTabOrder(smallcapsScalingSpinBox, automaticLineSpacingSpinBox);

        retranslateUi(Prefs_Typography);

        QMetaObject::connectSlotsByName(Prefs_Typography);
    } // setupUi

    void retranslateUi(QWidget *Prefs_Typography)
    {
        Prefs_Typography->setWindowTitle(QApplication::translate("Prefs_Typography", "Form", 0));
        label->setText(QApplication::translate("Prefs_Typography", "Typography", 0));
        label_2->setText(QApplication::translate("Prefs_Typography", "Subscript", 0));
        label_5->setText(QApplication::translate("Prefs_Typography", "Displacement:", 0));
        subscriptDisplacementSpinBox->setSuffix(QApplication::translate("Prefs_Typography", " %", 0));
        subscriptScalingSpinBox->setSuffix(QApplication::translate("Prefs_Typography", " %", 0));
        label_6->setText(QApplication::translate("Prefs_Typography", "Scaling:", 0));
        label_3->setText(QApplication::translate("Prefs_Typography", "Superscript", 0));
        label_7->setText(QApplication::translate("Prefs_Typography", "Displacement:", 0));
        superscriptDisplacementSpinBox->setSuffix(QApplication::translate("Prefs_Typography", " %", 0));
        label_8->setText(QApplication::translate("Prefs_Typography", "Scaling:", 0));
        superscriptScalingSpinBox->setSuffix(QApplication::translate("Prefs_Typography", " %", 0));
        label_4->setText(QApplication::translate("Prefs_Typography", "Underline", 0));
        label_9->setText(QApplication::translate("Prefs_Typography", "Displacement:", 0));
        label_10->setText(QApplication::translate("Prefs_Typography", "Line Width:", 0));
        underlineLineWidthSpinBox->setSpecialValueText(QApplication::translate("Prefs_Typography", "Auto", 0));
        underlineLineWidthSpinBox->setSuffix(QApplication::translate("Prefs_Typography", " %", 0));
        underlineDisplacementSpinBox->setSpecialValueText(QApplication::translate("Prefs_Typography", "Auto", 0));
        underlineDisplacementSpinBox->setSuffix(QApplication::translate("Prefs_Typography", " %", 0));
        label_11->setText(QApplication::translate("Prefs_Typography", "Strikeout", 0));
        label_12->setText(QApplication::translate("Prefs_Typography", "Displacement:", 0));
        strikeoutDisplacementSpinBox->setSpecialValueText(QApplication::translate("Prefs_Typography", "Auto", 0));
        strikeoutDisplacementSpinBox->setSuffix(QApplication::translate("Prefs_Typography", " %", 0));
        label_13->setText(QApplication::translate("Prefs_Typography", "Line Width:", 0));
        strikeoutLineWidthSpinBox->setSpecialValueText(QApplication::translate("Prefs_Typography", "Auto", 0));
        strikeoutLineWidthSpinBox->setSuffix(QApplication::translate("Prefs_Typography", " %", 0));
        label_14->setText(QApplication::translate("Prefs_Typography", "Small Caps", 0));
        label_15->setText(QApplication::translate("Prefs_Typography", "Scaling:", 0));
        smallcapsScalingSpinBox->setSuffix(QApplication::translate("Prefs_Typography", " %", 0));
        label_17->setText(QApplication::translate("Prefs_Typography", "Automatic Line Spacing", 0));
        label_19->setText(QApplication::translate("Prefs_Typography", "Line Spacing:", 0));
        automaticLineSpacingSpinBox->setSuffix(QApplication::translate("Prefs_Typography", " %", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_Typography: public Ui_Prefs_Typography {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_TYPOGRAPHYBASE_H
