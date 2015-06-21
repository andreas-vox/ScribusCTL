/********************************************************************************
** Form generated from reading UI file 'newmarginwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMARGINWIDGETBASE_H
#define UI_NEWMARGINWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ui/marginpresetlayout.h>
#include <ui/scrspinbox.h>

QT_BEGIN_NAMESPACE

class Ui_NewMarginWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *presetLayoutLabel;
    PresetLayout *presetLayoutComboBox;
    QLabel *leftMarginLabel;
    ScrSpinBox *leftMarginSpinBox;
    QLabel *rightMarginLabel;
    ScrSpinBox *rightMarginSpinBox;
    QLabel *topMarginLabel;
    ScrSpinBox *topMarginSpinBox;
    QLabel *bottomMarginLabel;
    ScrSpinBox *bottomMarginSpinBox;
    QCheckBox *marginLinkCheckBox;
    QPushButton *printerMarginsPushButton;

    void setupUi(QWidget *NewMarginWidget)
    {
        if (NewMarginWidget->objectName().isEmpty())
            NewMarginWidget->setObjectName(QStringLiteral("NewMarginWidget"));
        NewMarginWidget->resize(246, 230);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewMarginWidget->sizePolicy().hasHeightForWidth());
        NewMarginWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(NewMarginWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        presetLayoutLabel = new QLabel(NewMarginWidget);
        presetLayoutLabel->setObjectName(QStringLiteral("presetLayoutLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, presetLayoutLabel);

        presetLayoutComboBox = new PresetLayout(NewMarginWidget);
        presetLayoutComboBox->setObjectName(QStringLiteral("presetLayoutComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(presetLayoutComboBox->sizePolicy().hasHeightForWidth());
        presetLayoutComboBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, presetLayoutComboBox);

        leftMarginLabel = new QLabel(NewMarginWidget);
        leftMarginLabel->setObjectName(QStringLiteral("leftMarginLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, leftMarginLabel);

        leftMarginSpinBox = new ScrSpinBox(NewMarginWidget);
        leftMarginSpinBox->setObjectName(QStringLiteral("leftMarginSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leftMarginSpinBox->sizePolicy().hasHeightForWidth());
        leftMarginSpinBox->setSizePolicy(sizePolicy2);

        formLayout->setWidget(2, QFormLayout::FieldRole, leftMarginSpinBox);

        rightMarginLabel = new QLabel(NewMarginWidget);
        rightMarginLabel->setObjectName(QStringLiteral("rightMarginLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, rightMarginLabel);

        rightMarginSpinBox = new ScrSpinBox(NewMarginWidget);
        rightMarginSpinBox->setObjectName(QStringLiteral("rightMarginSpinBox"));
        sizePolicy2.setHeightForWidth(rightMarginSpinBox->sizePolicy().hasHeightForWidth());
        rightMarginSpinBox->setSizePolicy(sizePolicy2);

        formLayout->setWidget(3, QFormLayout::FieldRole, rightMarginSpinBox);

        topMarginLabel = new QLabel(NewMarginWidget);
        topMarginLabel->setObjectName(QStringLiteral("topMarginLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, topMarginLabel);

        topMarginSpinBox = new ScrSpinBox(NewMarginWidget);
        topMarginSpinBox->setObjectName(QStringLiteral("topMarginSpinBox"));
        sizePolicy2.setHeightForWidth(topMarginSpinBox->sizePolicy().hasHeightForWidth());
        topMarginSpinBox->setSizePolicy(sizePolicy2);

        formLayout->setWidget(4, QFormLayout::FieldRole, topMarginSpinBox);

        bottomMarginLabel = new QLabel(NewMarginWidget);
        bottomMarginLabel->setObjectName(QStringLiteral("bottomMarginLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, bottomMarginLabel);

        bottomMarginSpinBox = new ScrSpinBox(NewMarginWidget);
        bottomMarginSpinBox->setObjectName(QStringLiteral("bottomMarginSpinBox"));
        sizePolicy2.setHeightForWidth(bottomMarginSpinBox->sizePolicy().hasHeightForWidth());
        bottomMarginSpinBox->setSizePolicy(sizePolicy2);

        formLayout->setWidget(5, QFormLayout::FieldRole, bottomMarginSpinBox);

        marginLinkCheckBox = new QCheckBox(NewMarginWidget);
        marginLinkCheckBox->setObjectName(QStringLiteral("marginLinkCheckBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, marginLinkCheckBox);

        printerMarginsPushButton = new QPushButton(NewMarginWidget);
        printerMarginsPushButton->setObjectName(QStringLiteral("printerMarginsPushButton"));

        formLayout->setWidget(7, QFormLayout::FieldRole, printerMarginsPushButton);


        verticalLayout->addLayout(formLayout);

#ifndef QT_NO_SHORTCUT
        leftMarginLabel->setBuddy(leftMarginSpinBox);
        rightMarginLabel->setBuddy(rightMarginSpinBox);
        topMarginLabel->setBuddy(topMarginSpinBox);
        bottomMarginLabel->setBuddy(bottomMarginSpinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(NewMarginWidget);

        QMetaObject::connectSlotsByName(NewMarginWidget);
    } // setupUi

    void retranslateUi(QWidget *NewMarginWidget)
    {
        NewMarginWidget->setWindowTitle(QApplication::translate("NewMarginWidget", "Form", 0));
        presetLayoutLabel->setText(QApplication::translate("NewMarginWidget", "Preset Layouts:", 0));
        leftMarginLabel->setText(QApplication::translate("NewMarginWidget", "Left:", 0));
        rightMarginLabel->setText(QApplication::translate("NewMarginWidget", "Right:", 0));
        topMarginLabel->setText(QApplication::translate("NewMarginWidget", "Top:", 0));
        bottomMarginLabel->setText(QApplication::translate("NewMarginWidget", "Bottom:", 0));
#ifndef QT_NO_TOOLTIP
        marginLinkCheckBox->setToolTip(QApplication::translate("NewMarginWidget", "Ensure all margins have the same value", 0));
#endif // QT_NO_TOOLTIP
        marginLinkCheckBox->setText(QApplication::translate("NewMarginWidget", "Link", 0));
        printerMarginsPushButton->setText(QApplication::translate("NewMarginWidget", "Printer Margins...", 0));
    } // retranslateUi

};

namespace Ui {
    class NewMarginWidget: public Ui_NewMarginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMARGINWIDGETBASE_H
