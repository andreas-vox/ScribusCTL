/********************************************************************************
** Form generated from reading UI file 'smlinestylewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMLINESTYLEWIDGET_H
#define UI_SMLINESTYLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/colorcombo.h"
#include "ui/linecombo.h"
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_SMLineStyleWidget
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *addButton;
    QPushButton *removeButton;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QListWidget *lineStyles;
    QVBoxLayout *vboxLayout1;
    QGridLayout *gridLayout;
    QComboBox *endCombo;
    QComboBox *joinCombo;
    LineCombo *dashCombo;
    QGridLayout *gridLayout1;
    QSpinBox *shadeBox;
    QLabel *textLabel2;
    ColorCombo *colorCombo;
    ScrSpinBox *lineWidth;
    QSpacerItem *spacerItem1;
    QLabel *previewLabel;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *SMLineStyleWidget)
    {
        if (SMLineStyleWidget->objectName().isEmpty())
            SMLineStyleWidget->setObjectName(QStringLiteral("SMLineStyleWidget"));
        SMLineStyleWidget->resize(469, 298);
        vboxLayout = new QVBoxLayout(SMLineStyleWidget);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(5, 5, 5, 5);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addButton = new QPushButton(SMLineStyleWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);
        addButton->setMinimumSize(QSize(20, 20));
        addButton->setMaximumSize(QSize(20, 20));

        hboxLayout->addWidget(addButton);

        removeButton = new QPushButton(SMLineStyleWidget);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        sizePolicy.setHeightForWidth(removeButton->sizePolicy().hasHeightForWidth());
        removeButton->setSizePolicy(sizePolicy);
        removeButton->setMinimumSize(QSize(20, 20));
        removeButton->setMaximumSize(QSize(20, 20));

        hboxLayout->addWidget(removeButton);

        spacerItem = new QSpacerItem(150, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        lineStyles = new QListWidget(SMLineStyleWidget);
        lineStyles->setObjectName(QStringLiteral("lineStyles"));
        lineStyles->setMaximumSize(QSize(200, 32767));

        hboxLayout1->addWidget(lineStyles);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        endCombo = new QComboBox(SMLineStyleWidget);
        endCombo->setObjectName(QStringLiteral("endCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(endCombo->sizePolicy().hasHeightForWidth());
        endCombo->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(endCombo, 1, 0, 1, 1);

        joinCombo = new QComboBox(SMLineStyleWidget);
        joinCombo->setObjectName(QStringLiteral("joinCombo"));
        sizePolicy1.setHeightForWidth(joinCombo->sizePolicy().hasHeightForWidth());
        joinCombo->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(joinCombo, 2, 0, 1, 1);

        dashCombo = new LineCombo(SMLineStyleWidget);
        dashCombo->setObjectName(QStringLiteral("dashCombo"));

        gridLayout->addWidget(dashCombo, 0, 0, 1, 1);


        vboxLayout1->addLayout(gridLayout);

        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        shadeBox = new QSpinBox(SMLineStyleWidget);
        shadeBox->setObjectName(QStringLiteral("shadeBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(shadeBox->sizePolicy().hasHeightForWidth());
        shadeBox->setSizePolicy(sizePolicy2);
        shadeBox->setMinimumSize(QSize(70, 0));
        shadeBox->setMinimum(0);
        shadeBox->setMaximum(100);
        shadeBox->setValue(100);

        gridLayout1->addWidget(shadeBox, 1, 1, 1, 1);

        textLabel2 = new QLabel(SMLineStyleWidget);
        textLabel2->setObjectName(QStringLiteral("textLabel2"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textLabel2->sizePolicy().hasHeightForWidth());
        textLabel2->setSizePolicy(sizePolicy3);
        textLabel2->setWordWrap(false);

        gridLayout1->addWidget(textLabel2, 0, 0, 1, 1);

        colorCombo = new ColorCombo(SMLineStyleWidget);
        colorCombo->setObjectName(QStringLiteral("colorCombo"));

        gridLayout1->addWidget(colorCombo, 1, 0, 1, 1);

        lineWidth = new ScrSpinBox(SMLineStyleWidget);
        lineWidth->setObjectName(QStringLiteral("lineWidth"));

        gridLayout1->addWidget(lineWidth, 0, 1, 1, 1);


        vboxLayout1->addLayout(gridLayout1);

        spacerItem1 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout1->addItem(spacerItem1);

        previewLabel = new QLabel(SMLineStyleWidget);
        previewLabel->setObjectName(QStringLiteral("previewLabel"));
        sizePolicy3.setHeightForWidth(previewLabel->sizePolicy().hasHeightForWidth());
        previewLabel->setSizePolicy(sizePolicy3);
        previewLabel->setMinimumSize(QSize(0, 60));
        previewLabel->setWordWrap(false);

        vboxLayout1->addWidget(previewLabel);

        spacerItem2 = new QSpacerItem(41, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem2);


        hboxLayout1->addLayout(vboxLayout1);


        vboxLayout->addLayout(hboxLayout1);

        QWidget::setTabOrder(addButton, removeButton);
        QWidget::setTabOrder(removeButton, lineStyles);
        QWidget::setTabOrder(lineStyles, dashCombo);
        QWidget::setTabOrder(dashCombo, endCombo);
        QWidget::setTabOrder(endCombo, joinCombo);
        QWidget::setTabOrder(joinCombo, lineWidth);
        QWidget::setTabOrder(lineWidth, colorCombo);
        QWidget::setTabOrder(colorCombo, shadeBox);

        retranslateUi(SMLineStyleWidget);

        QMetaObject::connectSlotsByName(SMLineStyleWidget);
    } // setupUi

    void retranslateUi(QWidget *SMLineStyleWidget)
    {
        addButton->setText(QString());
        removeButton->setText(QString());
        shadeBox->setSuffix(QApplication::translate("SMLineStyleWidget", "%", 0));
        textLabel2->setText(QApplication::translate("SMLineStyleWidget", "Line Width:", 0));
        previewLabel->setText(QString());
        Q_UNUSED(SMLineStyleWidget);
    } // retranslateUi

};

namespace Ui {
    class SMLineStyleWidget: public Ui_SMLineStyleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMLINESTYLEWIDGET_H
