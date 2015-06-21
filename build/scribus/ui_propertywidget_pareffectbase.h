/********************************************************************************
** Form generated from reading UI file 'propertywidget_pareffectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYWIDGET_PAREFFECTBASE_H
#define UI_PROPERTYWIDGET_PAREFFECTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <ui/scrspinbox.h>
#include <ui/spalette.h>

QT_BEGIN_NAMESPACE

class Ui_PropertyWidget_ParEffectBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *peGroup;
    QGridLayout *gridLayout_4;
    QLabel *peCharStyleLabel;
    CharStyleComboBox *peCharStyleCombo;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *peIndent;
    QSpacerItem *horizontalSpacer_5;
    QLabel *peOffsetLabel;
    ScrSpinBox *peOffset;
    QGroupBox *dropCapsGroup;
    QHBoxLayout *horizontalLayout;
    QLabel *dropCapLinesLabel;
    QSpinBox *dropCapLines;
    QSpacerItem *horizontalSpacer;
    QGroupBox *numGroup;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *numLevelLabel;
    QSpinBox *numLevelSpin;
    QSpacerItem *horizontalSpacer_2;
    QLabel *numStartLabel;
    QSpinBox *numStart;
    QHBoxLayout *horizontalLayout_3;
    QLabel *numComboLabel;
    QComboBox *numComboBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *numFormatLabel;
    QComboBox *numFormatCombo;
    QHBoxLayout *horizontalLayout_4;
    QLabel *numPrefixLabel;
    QLineEdit *numPrefix;
    QSpacerItem *horizontalSpacer_4;
    QLabel *numSuffixLabel;
    QLineEdit *numSuffix;
    QComboBox *peCombo;
    QGroupBox *bullGroup;
    QGridLayout *gridLayout_3;
    QComboBox *bulletStrEdit;
    QLabel *bulletCharLabel;
    QPushButton *bulletCharTableButton;

    void setupUi(QFrame *PropertyWidget_ParEffectBase)
    {
        if (PropertyWidget_ParEffectBase->objectName().isEmpty())
            PropertyWidget_ParEffectBase->setObjectName(QStringLiteral("PropertyWidget_ParEffectBase"));
        PropertyWidget_ParEffectBase->resize(270, 429);
        gridLayout = new QGridLayout(PropertyWidget_ParEffectBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        peGroup = new QGroupBox(PropertyWidget_ParEffectBase);
        peGroup->setObjectName(QStringLiteral("peGroup"));
        gridLayout_4 = new QGridLayout(peGroup);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        peCharStyleLabel = new QLabel(peGroup);
        peCharStyleLabel->setObjectName(QStringLiteral("peCharStyleLabel"));

        gridLayout_4->addWidget(peCharStyleLabel, 6, 0, 1, 1);

        peCharStyleCombo = new CharStyleComboBox(peGroup);
        peCharStyleCombo->setObjectName(QStringLiteral("peCharStyleCombo"));

        gridLayout_4->addWidget(peCharStyleCombo, 6, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        peIndent = new QCheckBox(peGroup);
        peIndent->setObjectName(QStringLiteral("peIndent"));

        horizontalLayout_5->addWidget(peIndent);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        peOffsetLabel = new QLabel(peGroup);
        peOffsetLabel->setObjectName(QStringLiteral("peOffsetLabel"));

        horizontalLayout_5->addWidget(peOffsetLabel);

        peOffset = new ScrSpinBox(peGroup);
        peOffset->setObjectName(QStringLiteral("peOffset"));
        peOffset->setMinimum(-3000);
        peOffset->setMaximum(3000);

        horizontalLayout_5->addWidget(peOffset);


        gridLayout_4->addLayout(horizontalLayout_5, 1, 0, 1, 2);


        gridLayout->addWidget(peGroup, 12, 0, 1, 2);

        dropCapsGroup = new QGroupBox(PropertyWidget_ParEffectBase);
        dropCapsGroup->setObjectName(QStringLiteral("dropCapsGroup"));
        horizontalLayout = new QHBoxLayout(dropCapsGroup);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dropCapLinesLabel = new QLabel(dropCapsGroup);
        dropCapLinesLabel->setObjectName(QStringLiteral("dropCapLinesLabel"));

        horizontalLayout->addWidget(dropCapLinesLabel);

        dropCapLines = new QSpinBox(dropCapsGroup);
        dropCapLines->setObjectName(QStringLiteral("dropCapLines"));
        dropCapLines->setMinimum(2);

        horizontalLayout->addWidget(dropCapLines);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addWidget(dropCapsGroup, 4, 0, 1, 2);

        numGroup = new QGroupBox(PropertyWidget_ParEffectBase);
        numGroup->setObjectName(QStringLiteral("numGroup"));
        gridLayout_2 = new QGridLayout(numGroup);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        numLevelLabel = new QLabel(numGroup);
        numLevelLabel->setObjectName(QStringLiteral("numLevelLabel"));

        horizontalLayout_2->addWidget(numLevelLabel);

        numLevelSpin = new QSpinBox(numGroup);
        numLevelSpin->setObjectName(QStringLiteral("numLevelSpin"));
        numLevelSpin->setMinimum(1);

        horizontalLayout_2->addWidget(numLevelSpin);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        numStartLabel = new QLabel(numGroup);
        numStartLabel->setObjectName(QStringLiteral("numStartLabel"));

        horizontalLayout_2->addWidget(numStartLabel);

        numStart = new QSpinBox(numGroup);
        numStart->setObjectName(QStringLiteral("numStart"));
        numStart->setMinimum(1);
        numStart->setMaximum(999);

        horizontalLayout_2->addWidget(numStart);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        numComboLabel = new QLabel(numGroup);
        numComboLabel->setObjectName(QStringLiteral("numComboLabel"));

        horizontalLayout_3->addWidget(numComboLabel);

        numComboBox = new QComboBox(numGroup);
        numComboBox->setObjectName(QStringLiteral("numComboBox"));

        horizontalLayout_3->addWidget(numComboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        numFormatLabel = new QLabel(numGroup);
        numFormatLabel->setObjectName(QStringLiteral("numFormatLabel"));

        horizontalLayout_3->addWidget(numFormatLabel);

        numFormatCombo = new QComboBox(numGroup);
        numFormatCombo->setObjectName(QStringLiteral("numFormatCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(numFormatCombo->sizePolicy().hasHeightForWidth());
        numFormatCombo->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(numFormatCombo);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        numPrefixLabel = new QLabel(numGroup);
        numPrefixLabel->setObjectName(QStringLiteral("numPrefixLabel"));

        horizontalLayout_4->addWidget(numPrefixLabel);

        numPrefix = new QLineEdit(numGroup);
        numPrefix->setObjectName(QStringLiteral("numPrefix"));

        horizontalLayout_4->addWidget(numPrefix);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        numSuffixLabel = new QLabel(numGroup);
        numSuffixLabel->setObjectName(QStringLiteral("numSuffixLabel"));

        horizontalLayout_4->addWidget(numSuffixLabel);

        numSuffix = new QLineEdit(numGroup);
        numSuffix->setObjectName(QStringLiteral("numSuffix"));

        horizontalLayout_4->addWidget(numSuffix);


        gridLayout_2->addLayout(horizontalLayout_4, 4, 0, 1, 2);


        gridLayout->addWidget(numGroup, 8, 0, 2, 2);

        peCombo = new QComboBox(PropertyWidget_ParEffectBase);
        peCombo->setObjectName(QStringLiteral("peCombo"));

        gridLayout->addWidget(peCombo, 2, 0, 1, 2);

        bullGroup = new QGroupBox(PropertyWidget_ParEffectBase);
        bullGroup->setObjectName(QStringLiteral("bullGroup"));
        gridLayout_3 = new QGridLayout(bullGroup);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        bulletStrEdit = new QComboBox(bullGroup);
        bulletStrEdit->setObjectName(QStringLiteral("bulletStrEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bulletStrEdit->sizePolicy().hasHeightForWidth());
        bulletStrEdit->setSizePolicy(sizePolicy1);
        bulletStrEdit->setMinimumSize(QSize(50, 0));
        bulletStrEdit->setEditable(true);

        gridLayout_3->addWidget(bulletStrEdit, 0, 1, 1, 1);

        bulletCharLabel = new QLabel(bullGroup);
        bulletCharLabel->setObjectName(QStringLiteral("bulletCharLabel"));

        gridLayout_3->addWidget(bulletCharLabel, 0, 0, 1, 1);

        bulletCharTableButton = new QPushButton(bullGroup);
        bulletCharTableButton->setObjectName(QStringLiteral("bulletCharTableButton"));
        sizePolicy1.setHeightForWidth(bulletCharTableButton->sizePolicy().hasHeightForWidth());
        bulletCharTableButton->setSizePolicy(sizePolicy1);
        bulletCharTableButton->setCheckable(true);

        gridLayout_3->addWidget(bulletCharTableButton, 0, 2, 1, 1);


        gridLayout->addWidget(bullGroup, 7, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        peCharStyleLabel->setBuddy(peCharStyleCombo);
        peOffsetLabel->setBuddy(peOffset);
        numLevelLabel->setBuddy(numLevelSpin);
        numFormatLabel->setBuddy(numFormatCombo);
        numPrefixLabel->setBuddy(numPrefix);
        numSuffixLabel->setBuddy(numSuffix);
        bulletCharLabel->setBuddy(bulletStrEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(PropertyWidget_ParEffectBase);

        numComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(PropertyWidget_ParEffectBase);
    } // setupUi

    void retranslateUi(QFrame *PropertyWidget_ParEffectBase)
    {
        PropertyWidget_ParEffectBase->setWindowTitle(QApplication::translate("PropertyWidget_ParEffectBase", "Form", 0));
        peGroup->setTitle(QApplication::translate("PropertyWidget_ParEffectBase", "Effect Parameters", 0));
        peCharStyleLabel->setText(QApplication::translate("PropertyWidget_ParEffectBase", "Char Style", 0));
        peIndent->setText(QApplication::translate("PropertyWidget_ParEffectBase", "AutoIndent", 0));
        peOffsetLabel->setText(QApplication::translate("PropertyWidget_ParEffectBase", "Offset", 0));
        dropCapsGroup->setTitle(QApplication::translate("PropertyWidget_ParEffectBase", "Drop Caps", 0));
#ifndef QT_NO_TOOLTIP
        dropCapLinesLabel->setToolTip(QApplication::translate("PropertyWidget_ParEffectBase", "Number of lines used by the drop cap", 0));
#endif // QT_NO_TOOLTIP
        dropCapLinesLabel->setText(QApplication::translate("PropertyWidget_ParEffectBase", "Lines", 0));
        numGroup->setTitle(QApplication::translate("PropertyWidget_ParEffectBase", "Numbered List", 0));
        numLevelLabel->setText(QApplication::translate("PropertyWidget_ParEffectBase", "Level", 0));
        numStartLabel->setText(QApplication::translate("PropertyWidget_ParEffectBase", "Start", 0));
        numComboLabel->setText(QApplication::translate("PropertyWidget_ParEffectBase", "Set", 0));
        numFormatLabel->setText(QApplication::translate("PropertyWidget_ParEffectBase", "Format", 0));
        numPrefixLabel->setText(QApplication::translate("PropertyWidget_ParEffectBase", "Prefix", 0));
        numSuffixLabel->setText(QApplication::translate("PropertyWidget_ParEffectBase", "Suffix", 0));
        bullGroup->setTitle(QApplication::translate("PropertyWidget_ParEffectBase", "Bulleted List", 0));
        bulletCharLabel->setText(QApplication::translate("PropertyWidget_ParEffectBase", "Bullet Char(s)", 0));
        bulletCharTableButton->setText(QApplication::translate("PropertyWidget_ParEffectBase", "Char Table", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertyWidget_ParEffectBase: public Ui_PropertyWidget_ParEffectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYWIDGET_PAREFFECTBASE_H
