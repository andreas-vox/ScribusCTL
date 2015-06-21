/********************************************************************************
** Form generated from reading UI file 'propertywidget_flopbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYWIDGET_FLOPBASE_H
#define UI_PROPERTYWIDGET_FLOPBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PropertyWidget_FlopBase
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *flopRealHeight;
    QRadioButton *flopFontAscent;
    QRadioButton *flopLineSpacing;
    QRadioButton *flopBaselineGrid;
    QButtonGroup *flopGroup;

    void setupUi(QFrame *PropertyWidget_FlopBase)
    {
        if (PropertyWidget_FlopBase->objectName().isEmpty())
            PropertyWidget_FlopBase->setObjectName(QStringLiteral("PropertyWidget_FlopBase"));
        PropertyWidget_FlopBase->resize(218, 88);
        PropertyWidget_FlopBase->setFrameShape(QFrame::StyledPanel);
        PropertyWidget_FlopBase->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(PropertyWidget_FlopBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        flopRealHeight = new QRadioButton(PropertyWidget_FlopBase);
        flopGroup = new QButtonGroup(PropertyWidget_FlopBase);
        flopGroup->setObjectName(QStringLiteral("flopGroup"));
        flopGroup->addButton(flopRealHeight);
        flopRealHeight->setObjectName(QStringLiteral("flopRealHeight"));

        verticalLayout->addWidget(flopRealHeight);

        flopFontAscent = new QRadioButton(PropertyWidget_FlopBase);
        flopGroup->addButton(flopFontAscent);
        flopFontAscent->setObjectName(QStringLiteral("flopFontAscent"));

        verticalLayout->addWidget(flopFontAscent);

        flopLineSpacing = new QRadioButton(PropertyWidget_FlopBase);
        flopGroup->addButton(flopLineSpacing);
        flopLineSpacing->setObjectName(QStringLiteral("flopLineSpacing"));

        verticalLayout->addWidget(flopLineSpacing);

        flopBaselineGrid = new QRadioButton(PropertyWidget_FlopBase);
        flopGroup->addButton(flopBaselineGrid);
        flopBaselineGrid->setObjectName(QStringLiteral("flopBaselineGrid"));

        verticalLayout->addWidget(flopBaselineGrid);


        retranslateUi(PropertyWidget_FlopBase);

        QMetaObject::connectSlotsByName(PropertyWidget_FlopBase);
    } // setupUi

    void retranslateUi(QFrame *PropertyWidget_FlopBase)
    {
        PropertyWidget_FlopBase->setWindowTitle(QApplication::translate("PropertyWidget_FlopBase", "Frame", 0));
        flopRealHeight->setText(QApplication::translate("PropertyWidget_FlopBase", "Maximum Ascent", 0));
        flopFontAscent->setText(QApplication::translate("PropertyWidget_FlopBase", "Font Ascent", 0));
        flopLineSpacing->setText(QApplication::translate("PropertyWidget_FlopBase", "Line Spacing", 0));
        flopBaselineGrid->setText(QApplication::translate("PropertyWidget_FlopBase", "Baseline Grid", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertyWidget_FlopBase: public Ui_PropertyWidget_FlopBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYWIDGET_FLOPBASE_H
