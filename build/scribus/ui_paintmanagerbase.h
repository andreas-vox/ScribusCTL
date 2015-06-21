/********************************************************************************
** Form generated from reading UI file 'paintmanagerbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTMANAGERBASE_H
#define UI_PAINTMANAGERBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "ui/swatchcombo.h"

QT_BEGIN_NAMESPACE

class Ui_PaintManagerBase
{
public:
    QHBoxLayout *horizontalLayout;
    QTreeWidget *dataTree;
    QVBoxLayout *verticalLayout_2;
    QPushButton *importButton;
    QPushButton *newButton;
    QPushButton *editButton;
    QPushButton *duplicateButton;
    QPushButton *deleteButton;
    QPushButton *deleteUnusedButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    SwatchCombo *LoadColSet;
    QPushButton *SaveColSet;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *PaintManagerBase)
    {
        if (PaintManagerBase->objectName().isEmpty())
            PaintManagerBase->setObjectName(QStringLiteral("PaintManagerBase"));
        PaintManagerBase->resize(412, 412);
        PaintManagerBase->setSizeGripEnabled(false);
        PaintManagerBase->setModal(true);
        horizontalLayout = new QHBoxLayout(PaintManagerBase);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dataTree = new QTreeWidget(PaintManagerBase);
        dataTree->setObjectName(QStringLiteral("dataTree"));
        dataTree->header()->setVisible(false);

        horizontalLayout->addWidget(dataTree);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        importButton = new QPushButton(PaintManagerBase);
        importButton->setObjectName(QStringLiteral("importButton"));

        verticalLayout_2->addWidget(importButton);

        newButton = new QPushButton(PaintManagerBase);
        newButton->setObjectName(QStringLiteral("newButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(newButton->sizePolicy().hasHeightForWidth());
        newButton->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(newButton);

        editButton = new QPushButton(PaintManagerBase);
        editButton->setObjectName(QStringLiteral("editButton"));

        verticalLayout_2->addWidget(editButton);

        duplicateButton = new QPushButton(PaintManagerBase);
        duplicateButton->setObjectName(QStringLiteral("duplicateButton"));

        verticalLayout_2->addWidget(duplicateButton);

        deleteButton = new QPushButton(PaintManagerBase);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        verticalLayout_2->addWidget(deleteButton);

        deleteUnusedButton = new QPushButton(PaintManagerBase);
        deleteUnusedButton->setObjectName(QStringLiteral("deleteUnusedButton"));

        verticalLayout_2->addWidget(deleteUnusedButton);

        groupBox_3 = new QGroupBox(PaintManagerBase);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        LoadColSet = new SwatchCombo(groupBox_3);
        LoadColSet->setObjectName(QStringLiteral("LoadColSet"));
        sizePolicy.setHeightForWidth(LoadColSet->sizePolicy().hasHeightForWidth());
        LoadColSet->setSizePolicy(sizePolicy);
        LoadColSet->setPopupMode(QToolButton::MenuButtonPopup);

        verticalLayout->addWidget(LoadColSet);

        SaveColSet = new QPushButton(groupBox_3);
        SaveColSet->setObjectName(QStringLiteral("SaveColSet"));

        verticalLayout->addWidget(SaveColSet);


        verticalLayout_2->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(115, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        okButton = new QPushButton(PaintManagerBase);
        okButton->setObjectName(QStringLiteral("okButton"));

        verticalLayout_4->addWidget(okButton);

        cancelButton = new QPushButton(PaintManagerBase);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        verticalLayout_4->addWidget(cancelButton);


        verticalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 1);

        retranslateUi(PaintManagerBase);

        QMetaObject::connectSlotsByName(PaintManagerBase);
    } // setupUi

    void retranslateUi(QDialog *PaintManagerBase)
    {
        PaintManagerBase->setWindowTitle(QApplication::translate("PaintManagerBase", "Manage Colors and Fills", 0));
        QTreeWidgetItem *___qtreewidgetitem = dataTree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("PaintManagerBase", "1", 0));
#ifndef QT_NO_TOOLTIP
        dataTree->setToolTip(QApplication::translate("PaintManagerBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If color management is enabled, a triangle warning indicator is a warning that the color maybe outside of the color gamut of the current printer profile selected. What this means is the color may not print exactly as indicated on screen. Spot colors are indicated by a red circle. More hints about gamut warnings are in the online help under Color Management. Registration colors will have a regis"
                        "tration mark next to the color. Use Registration only for printers marks and crop marks.</p></td></tr></table></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        importButton->setToolTip(QApplication::translate("PaintManagerBase", "Import colors to the current set from an existing document", 0));
#endif // QT_NO_TOOLTIP
        importButton->setText(QApplication::translate("PaintManagerBase", "&Import", 0));
#ifndef QT_NO_TOOLTIP
        newButton->setToolTip(QApplication::translate("PaintManagerBase", "Create a new color within the current set", 0));
#endif // QT_NO_TOOLTIP
        newButton->setText(QApplication::translate("PaintManagerBase", "Add", 0));
#ifndef QT_NO_TOOLTIP
        editButton->setToolTip(QApplication::translate("PaintManagerBase", "Edit the currently selected color", 0));
#endif // QT_NO_TOOLTIP
        editButton->setText(QApplication::translate("PaintManagerBase", "&Edit", 0));
#ifndef QT_NO_TOOLTIP
        duplicateButton->setToolTip(QApplication::translate("PaintManagerBase", "Make a copy of the currently selected color", 0));
#endif // QT_NO_TOOLTIP
        duplicateButton->setText(QApplication::translate("PaintManagerBase", "D&uplicate", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("PaintManagerBase", "Delete the currently selected color", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("PaintManagerBase", "&Delete", 0));
#ifndef QT_NO_TOOLTIP
        deleteUnusedButton->setToolTip(QApplication::translate("PaintManagerBase", "Remove unused colors from current document's color set", 0));
#endif // QT_NO_TOOLTIP
        deleteUnusedButton->setText(QApplication::translate("PaintManagerBase", "&Remove Unused", 0));
        groupBox_3->setTitle(QApplication::translate("PaintManagerBase", "Color Sets", 0));
        label->setText(QApplication::translate("PaintManagerBase", "Current Color Set:", 0));
        LoadColSet->setText(QApplication::translate("PaintManagerBase", "...", 0));
#ifndef QT_NO_TOOLTIP
        SaveColSet->setToolTip(QApplication::translate("PaintManagerBase", "Save the current color set", 0));
#endif // QT_NO_TOOLTIP
        SaveColSet->setText(QApplication::translate("PaintManagerBase", "&Save Color Set", 0));
#ifndef QT_NO_TOOLTIP
        okButton->setToolTip(QApplication::translate("PaintManagerBase", "Make the current colorset the default color set", 0));
#endif // QT_NO_TOOLTIP
        okButton->setText(QApplication::translate("PaintManagerBase", "OK", 0));
        cancelButton->setText(QApplication::translate("PaintManagerBase", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class PaintManagerBase: public Ui_PaintManagerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTMANAGERBASE_H
