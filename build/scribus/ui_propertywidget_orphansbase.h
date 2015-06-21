/********************************************************************************
** Form generated from reading UI file 'propertywidget_orphansbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYWIDGET_ORPHANSBASE_H
#define UI_PROPERTYWIDGET_ORPHANSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <ui/scrspinbox.h>

QT_BEGIN_NAMESPACE

class Ui_PropertyWidget_OrphansBase
{
public:
    QGridLayout *gridLayout;
    QLabel *keepLabelStart;
    ScrSpinBox *keepLinesStart;
    QLabel *keepLabelEnd;
    ScrSpinBox *keepLinesEnd;
    QCheckBox *keepTogether;
    QCheckBox *keepWithNext;

    void setupUi(QFrame *PropertyWidget_OrphansBase)
    {
        if (PropertyWidget_OrphansBase->objectName().isEmpty())
            PropertyWidget_OrphansBase->setObjectName(QStringLiteral("PropertyWidget_OrphansBase"));
        PropertyWidget_OrphansBase->resize(211, 130);
        gridLayout = new QGridLayout(PropertyWidget_OrphansBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        keepLabelStart = new QLabel(PropertyWidget_OrphansBase);
        keepLabelStart->setObjectName(QStringLiteral("keepLabelStart"));

        gridLayout->addWidget(keepLabelStart, 0, 0, 1, 1);

        keepLinesStart = new ScrSpinBox(PropertyWidget_OrphansBase);
        keepLinesStart->setObjectName(QStringLiteral("keepLinesStart"));
        keepLinesStart->setMaximum(10);

        gridLayout->addWidget(keepLinesStart, 0, 1, 1, 1);

        keepLabelEnd = new QLabel(PropertyWidget_OrphansBase);
        keepLabelEnd->setObjectName(QStringLiteral("keepLabelEnd"));

        gridLayout->addWidget(keepLabelEnd, 1, 0, 1, 1);

        keepLinesEnd = new ScrSpinBox(PropertyWidget_OrphansBase);
        keepLinesEnd->setObjectName(QStringLiteral("keepLinesEnd"));
        keepLinesEnd->setMaximum(10);

        gridLayout->addWidget(keepLinesEnd, 1, 1, 1, 1);

        keepTogether = new QCheckBox(PropertyWidget_OrphansBase);
        keepTogether->setObjectName(QStringLiteral("keepTogether"));

        gridLayout->addWidget(keepTogether, 2, 0, 1, 2);

        keepWithNext = new QCheckBox(PropertyWidget_OrphansBase);
        keepWithNext->setObjectName(QStringLiteral("keepWithNext"));

        gridLayout->addWidget(keepWithNext, 3, 0, 1, 2);

        gridLayout->setColumnStretch(1, 1);

        retranslateUi(PropertyWidget_OrphansBase);

        QMetaObject::connectSlotsByName(PropertyWidget_OrphansBase);
    } // setupUi

    void retranslateUi(QFrame *PropertyWidget_OrphansBase)
    {
        PropertyWidget_OrphansBase->setWindowTitle(QApplication::translate("PropertyWidget_OrphansBase", "Form", 0));
#ifndef QT_NO_TOOLTIP
        keepLabelStart->setToolTip(QApplication::translate("PropertyWidget_OrphansBase", "Ensure that first lines of a paragraph won't end up separated from the rest (known as widow/orphan control)", 0));
#endif // QT_NO_TOOLTIP
        keepLabelStart->setText(QApplication::translate("PropertyWidget_OrphansBase", "Don't separate first", 0));
        keepLinesStart->setSuffix(QApplication::translate("PropertyWidget_OrphansBase", " lines", 0));
        keepLabelEnd->setText(QApplication::translate("PropertyWidget_OrphansBase", "Don't separate last", 0));
        keepLinesEnd->setSuffix(QApplication::translate("PropertyWidget_OrphansBase", " lines", 0));
        keepTogether->setText(QApplication::translate("PropertyWidget_OrphansBase", "Do not split paragraph", 0));
        keepWithNext->setText(QApplication::translate("PropertyWidget_OrphansBase", "Keep with next paragraph", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertyWidget_OrphansBase: public Ui_PropertyWidget_OrphansBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYWIDGET_ORPHANSBASE_H
