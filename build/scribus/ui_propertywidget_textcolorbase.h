/********************************************************************************
** Form generated from reading UI file 'propertywidget_textcolorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYWIDGET_TEXTCOLORBASE_H
#define UI_PROPERTYWIDGET_TEXTCOLORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include "ui/colorcombo.h"
#include "ui/shadebutton.h"
#include "ui/styleselect.h"

QT_BEGIN_NAMESPACE

class Ui_PropertyWidget_TextColorBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *strokeLayout;
    QLabel *strokeIcon;
    ColorCombo *strokeColor;
    QLabel *strokeShadeLabel;
    ShadeButton *strokeShade;
    QHBoxLayout *fillLayout;
    QLabel *fillIcon;
    ColorCombo *fillColor;
    QLabel *fillShadeLabel;
    ShadeButton *fillShade;
    QHBoxLayout *effectsLayout;
    QSpacerItem *horizontalSpacer_3;
    StyleSelect *textEffects;
    QToolButton *revertButton;

    void setupUi(QFrame *PropertyWidget_TextColorBase)
    {
        if (PropertyWidget_TextColorBase->objectName().isEmpty())
            PropertyWidget_TextColorBase->setObjectName(QStringLiteral("PropertyWidget_TextColorBase"));
        PropertyWidget_TextColorBase->resize(210, 94);
        PropertyWidget_TextColorBase->setFrameShape(QFrame::StyledPanel);
        PropertyWidget_TextColorBase->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(PropertyWidget_TextColorBase);
        gridLayout->setSpacing(3);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        strokeLayout = new QHBoxLayout();
        strokeLayout->setSpacing(3);
#ifndef Q_OS_MAC
        strokeLayout->setContentsMargins(0, 0, 0, 0);
#endif
        strokeLayout->setObjectName(QStringLiteral("strokeLayout"));
        strokeIcon = new QLabel(PropertyWidget_TextColorBase);
        strokeIcon->setObjectName(QStringLiteral("strokeIcon"));
        strokeIcon->setPixmap(QPixmap(QString::fromUtf8("../../resources/icons/16/color-stroke.png")));

        strokeLayout->addWidget(strokeIcon);

        strokeColor = new ColorCombo(PropertyWidget_TextColorBase);
        strokeColor->setObjectName(QStringLiteral("strokeColor"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(strokeColor->sizePolicy().hasHeightForWidth());
        strokeColor->setSizePolicy(sizePolicy);

        strokeLayout->addWidget(strokeColor);

        strokeShadeLabel = new QLabel(PropertyWidget_TextColorBase);
        strokeShadeLabel->setObjectName(QStringLiteral("strokeShadeLabel"));
        strokeShadeLabel->setPixmap(QPixmap(QString::fromUtf8("../../resources/icons/shade.png")));

        strokeLayout->addWidget(strokeShadeLabel);

        strokeShade = new ShadeButton(PropertyWidget_TextColorBase);
        strokeShade->setObjectName(QStringLiteral("strokeShade"));

        strokeLayout->addWidget(strokeShade);


        gridLayout->addLayout(strokeLayout, 1, 0, 1, 1);

        fillLayout = new QHBoxLayout();
        fillLayout->setSpacing(3);
        fillLayout->setObjectName(QStringLiteral("fillLayout"));
        fillIcon = new QLabel(PropertyWidget_TextColorBase);
        fillIcon->setObjectName(QStringLiteral("fillIcon"));
        fillIcon->setPixmap(QPixmap(QString::fromUtf8("../../resources/icons/16/color-fill.png")));

        fillLayout->addWidget(fillIcon);

        fillColor = new ColorCombo(PropertyWidget_TextColorBase);
        fillColor->setObjectName(QStringLiteral("fillColor"));
        sizePolicy.setHeightForWidth(fillColor->sizePolicy().hasHeightForWidth());
        fillColor->setSizePolicy(sizePolicy);

        fillLayout->addWidget(fillColor);

        fillShadeLabel = new QLabel(PropertyWidget_TextColorBase);
        fillShadeLabel->setObjectName(QStringLiteral("fillShadeLabel"));
        fillShadeLabel->setPixmap(QPixmap(QString::fromUtf8("../../resources/icons/shade.png")));

        fillLayout->addWidget(fillShadeLabel);

        fillShade = new ShadeButton(PropertyWidget_TextColorBase);
        fillShade->setObjectName(QStringLiteral("fillShade"));

        fillLayout->addWidget(fillShade);


        gridLayout->addLayout(fillLayout, 0, 0, 1, 1);

        effectsLayout = new QHBoxLayout();
        effectsLayout->setSpacing(3);
        effectsLayout->setObjectName(QStringLiteral("effectsLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        effectsLayout->addItem(horizontalSpacer_3);

        textEffects = new StyleSelect(PropertyWidget_TextColorBase);
        textEffects->setObjectName(QStringLiteral("textEffects"));

        effectsLayout->addWidget(textEffects);

        revertButton = new QToolButton(PropertyWidget_TextColorBase);
        revertButton->setObjectName(QStringLiteral("revertButton"));
        revertButton->setMaximumSize(QSize(22, 22));
        revertButton->setCheckable(true);

        effectsLayout->addWidget(revertButton);


        gridLayout->addLayout(effectsLayout, 2, 0, 1, 1);


        retranslateUi(PropertyWidget_TextColorBase);

        QMetaObject::connectSlotsByName(PropertyWidget_TextColorBase);
    } // setupUi

    void retranslateUi(QFrame *PropertyWidget_TextColorBase)
    {
        PropertyWidget_TextColorBase->setWindowTitle(QApplication::translate("PropertyWidget_TextColorBase", "Frame", 0));
        strokeIcon->setText(QString());
        strokeShadeLabel->setText(QString());
        strokeShade->setText(QString());
        fillIcon->setText(QString());
        fillShadeLabel->setText(QString());
        fillShade->setText(QString());
        revertButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PropertyWidget_TextColorBase: public Ui_PropertyWidget_TextColorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYWIDGET_TEXTCOLORBASE_H
