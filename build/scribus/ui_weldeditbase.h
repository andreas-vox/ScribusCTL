/********************************************************************************
** Form generated from reading UI file 'weldeditbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELDEDITBASE_H
#define UI_WELDEDITBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include "ui/scrpalettebase.h"

QT_BEGIN_NAMESPACE

class Ui_weldEditBase
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *moveWeldPoint;
    QRadioButton *moveObject;
    QPushButton *buttonEndEdit;

    void setupUi(ScrPaletteBase *weldEditBase)
    {
        if (weldEditBase->objectName().isEmpty())
            weldEditBase->setObjectName(QStringLiteral("weldEditBase"));
        weldEditBase->resize(151, 95);
        verticalLayout = new QVBoxLayout(weldEditBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        moveWeldPoint = new QRadioButton(weldEditBase);
        moveWeldPoint->setObjectName(QStringLiteral("moveWeldPoint"));
        moveWeldPoint->setChecked(true);

        verticalLayout->addWidget(moveWeldPoint);

        moveObject = new QRadioButton(weldEditBase);
        moveObject->setObjectName(QStringLiteral("moveObject"));

        verticalLayout->addWidget(moveObject);

        buttonEndEdit = new QPushButton(weldEditBase);
        buttonEndEdit->setObjectName(QStringLiteral("buttonEndEdit"));

        verticalLayout->addWidget(buttonEndEdit);


        retranslateUi(weldEditBase);

        QMetaObject::connectSlotsByName(weldEditBase);
    } // setupUi

    void retranslateUi(ScrPaletteBase *weldEditBase)
    {
        weldEditBase->setWindowTitle(QApplication::translate("weldEditBase", "Edit Weld", 0));
        moveWeldPoint->setText(QApplication::translate("weldEditBase", "Move Weld Point", 0));
        moveObject->setText(QApplication::translate("weldEditBase", "Move Object", 0));
        buttonEndEdit->setText(QApplication::translate("weldEditBase", "End Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class weldEditBase: public Ui_weldEditBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELDEDITBASE_H
