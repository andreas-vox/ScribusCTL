/********************************************************************************
** Form generated from reading UI file 'propertywidget_optmarginsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYWIDGET_OPTMARGINSBASE_H
#define UI_PROPERTYWIDGET_OPTMARGINSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PropertyWidget_OptMarginsBase
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *optMarginRadioNone;
    QRadioButton *optMarginRadioBoth;
    QRadioButton *optMarginRadioLeft;
    QRadioButton *optMarginRadioRight;
    QPushButton *optMarginResetButton;

    void setupUi(QFrame *PropertyWidget_OptMarginsBase)
    {
        if (PropertyWidget_OptMarginsBase->objectName().isEmpty())
            PropertyWidget_OptMarginsBase->setObjectName(QStringLiteral("PropertyWidget_OptMarginsBase"));
        PropertyWidget_OptMarginsBase->resize(210, 122);
        PropertyWidget_OptMarginsBase->setFrameShape(QFrame::StyledPanel);
        PropertyWidget_OptMarginsBase->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(PropertyWidget_OptMarginsBase);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        optMarginRadioNone = new QRadioButton(PropertyWidget_OptMarginsBase);
        optMarginRadioNone->setObjectName(QStringLiteral("optMarginRadioNone"));

        verticalLayout->addWidget(optMarginRadioNone);

        optMarginRadioBoth = new QRadioButton(PropertyWidget_OptMarginsBase);
        optMarginRadioBoth->setObjectName(QStringLiteral("optMarginRadioBoth"));

        verticalLayout->addWidget(optMarginRadioBoth);

        optMarginRadioLeft = new QRadioButton(PropertyWidget_OptMarginsBase);
        optMarginRadioLeft->setObjectName(QStringLiteral("optMarginRadioLeft"));

        verticalLayout->addWidget(optMarginRadioLeft);

        optMarginRadioRight = new QRadioButton(PropertyWidget_OptMarginsBase);
        optMarginRadioRight->setObjectName(QStringLiteral("optMarginRadioRight"));

        verticalLayout->addWidget(optMarginRadioRight);

        optMarginResetButton = new QPushButton(PropertyWidget_OptMarginsBase);
        optMarginResetButton->setObjectName(QStringLiteral("optMarginResetButton"));

        verticalLayout->addWidget(optMarginResetButton);


        retranslateUi(PropertyWidget_OptMarginsBase);

        QMetaObject::connectSlotsByName(PropertyWidget_OptMarginsBase);
    } // setupUi

    void retranslateUi(QFrame *PropertyWidget_OptMarginsBase)
    {
        PropertyWidget_OptMarginsBase->setWindowTitle(QApplication::translate("PropertyWidget_OptMarginsBase", "Frame", 0));
        optMarginRadioNone->setText(QApplication::translate("PropertyWidget_OptMarginsBase", "None", 0));
        optMarginRadioBoth->setText(QApplication::translate("PropertyWidget_OptMarginsBase", "Both Sides", 0));
        optMarginRadioLeft->setText(QApplication::translate("PropertyWidget_OptMarginsBase", "Left Only", 0));
        optMarginRadioRight->setText(QApplication::translate("PropertyWidget_OptMarginsBase", "Right Only", 0));
        optMarginResetButton->setText(QApplication::translate("PropertyWidget_OptMarginsBase", "Reset", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertyWidget_OptMarginsBase: public Ui_PropertyWidget_OptMarginsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYWIDGET_OPTMARGINSBASE_H
