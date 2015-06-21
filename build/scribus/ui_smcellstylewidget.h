/********************************************************************************
** Form generated from reading UI file 'smcellstylewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMCELLSTYLEWIDGET_H
#define UI_SMCELLSTYLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/smcolorcombo.h"
#include "ui/smshadebutton.h"

QT_BEGIN_NAMESPACE

class Ui_SMCellStyleWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *parentLabel;
    QComboBox *parentCombo;
    QGroupBox *smColorGroup;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *fillColorIcon;
    SMColorCombo *fillColor;
    QLabel *fillShadeLabel;
    SMShadeButton *fillShade;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *SMCellStyleWidget)
    {
        if (SMCellStyleWidget->objectName().isEmpty())
            SMCellStyleWidget->setObjectName(QStringLiteral("SMCellStyleWidget"));
        SMCellStyleWidget->resize(378, 478);
        verticalLayout_2 = new QVBoxLayout(SMCellStyleWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        parentLabel = new QLabel(SMCellStyleWidget);
        parentLabel->setObjectName(QStringLiteral("parentLabel"));

        horizontalLayout_2->addWidget(parentLabel);

        parentCombo = new QComboBox(SMCellStyleWidget);
        parentCombo->setObjectName(QStringLiteral("parentCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(parentCombo->sizePolicy().hasHeightForWidth());
        parentCombo->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(parentCombo);


        verticalLayout_2->addLayout(horizontalLayout_2);

        smColorGroup = new QGroupBox(SMCellStyleWidget);
        smColorGroup->setObjectName(QStringLiteral("smColorGroup"));
        verticalLayout = new QVBoxLayout(smColorGroup);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fillColorIcon = new QLabel(smColorGroup);
        fillColorIcon->setObjectName(QStringLiteral("fillColorIcon"));
        fillColorIcon->setMaximumSize(QSize(22, 22));

        horizontalLayout->addWidget(fillColorIcon);

        fillColor = new SMColorCombo(smColorGroup);
        fillColor->setObjectName(QStringLiteral("fillColor"));

        horizontalLayout->addWidget(fillColor);

        fillShadeLabel = new QLabel(smColorGroup);
        fillShadeLabel->setObjectName(QStringLiteral("fillShadeLabel"));

        horizontalLayout->addWidget(fillShadeLabel);

        fillShade = new SMShadeButton(smColorGroup);
        fillShade->setObjectName(QStringLiteral("fillShade"));

        horizontalLayout->addWidget(fillShade);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(smColorGroup);

        spacerItem1 = new QSpacerItem(72, 388, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(spacerItem1);

#ifndef QT_NO_SHORTCUT
        fillColorIcon->setBuddy(fillColor);
#endif // QT_NO_SHORTCUT

        retranslateUi(SMCellStyleWidget);

        QMetaObject::connectSlotsByName(SMCellStyleWidget);
    } // setupUi

    void retranslateUi(QWidget *SMCellStyleWidget)
    {
        parentLabel->setText(QApplication::translate("SMCellStyleWidget", "Based On:", 0));
        smColorGroup->setTitle(QApplication::translate("SMCellStyleWidget", "Colors", 0));
        fillColorIcon->setText(QApplication::translate("SMCellStyleWidget", "TextLabel", 0));
        fillShadeLabel->setText(QApplication::translate("SMCellStyleWidget", "Text", 0));
        fillShade->setText(QString());
        Q_UNUSED(SMCellStyleWidget);
    } // retranslateUi

};

namespace Ui {
    class SMCellStyleWidget: public Ui_SMCellStyleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMCELLSTYLEWIDGET_H
