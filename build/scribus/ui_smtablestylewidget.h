/********************************************************************************
** Form generated from reading UI file 'smtablestylewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMTABLESTYLEWIDGET_H
#define UI_SMTABLESTYLEWIDGET_H

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

class Ui_SMTableStyleWidget
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

    void setupUi(QWidget *SMTableStyleWidget)
    {
        if (SMTableStyleWidget->objectName().isEmpty())
            SMTableStyleWidget->setObjectName(QStringLiteral("SMTableStyleWidget"));
        SMTableStyleWidget->resize(378, 478);
        verticalLayout_2 = new QVBoxLayout(SMTableStyleWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        parentLabel = new QLabel(SMTableStyleWidget);
        parentLabel->setObjectName(QStringLiteral("parentLabel"));

        horizontalLayout_2->addWidget(parentLabel);

        parentCombo = new QComboBox(SMTableStyleWidget);
        parentCombo->setObjectName(QStringLiteral("parentCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(parentCombo->sizePolicy().hasHeightForWidth());
        parentCombo->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(parentCombo);


        verticalLayout_2->addLayout(horizontalLayout_2);

        smColorGroup = new QGroupBox(SMTableStyleWidget);
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

        spacerItem1 = new QSpacerItem(72, 356, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(spacerItem1);

#ifndef QT_NO_SHORTCUT
        fillColorIcon->setBuddy(fillColor);
#endif // QT_NO_SHORTCUT

        retranslateUi(SMTableStyleWidget);

        QMetaObject::connectSlotsByName(SMTableStyleWidget);
    } // setupUi

    void retranslateUi(QWidget *SMTableStyleWidget)
    {
        parentLabel->setText(QApplication::translate("SMTableStyleWidget", "Based On:", 0));
        smColorGroup->setTitle(QApplication::translate("SMTableStyleWidget", "Colors", 0));
        fillColorIcon->setText(QApplication::translate("SMTableStyleWidget", "TextLabel", 0));
        fillShadeLabel->setText(QApplication::translate("SMTableStyleWidget", "Text", 0));
        fillShade->setText(QString());
        Q_UNUSED(SMTableStyleWidget);
    } // retranslateUi

};

namespace Ui {
    class SMTableStyleWidget: public Ui_SMTableStyleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMTABLESTYLEWIDGET_H
