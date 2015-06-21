/********************************************************************************
** Form generated from reading UI file 'tablerowheightsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEROWHEIGHTSDIALOG_H
#define UI_TABLEROWHEIGHTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_TableRowHeightsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *tableRowHeightLabel;
    ScrSpinBox *tableRowHeight;
    QDialogButtonBox *dialogButtonBox;

    void setupUi(QDialog *TableRowHeightsDialog)
    {
        if (TableRowHeightsDialog->objectName().isEmpty())
            TableRowHeightsDialog->setObjectName(QStringLiteral("TableRowHeightsDialog"));
        TableRowHeightsDialog->resize(227, 61);
        TableRowHeightsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(TableRowHeightsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        tableRowHeightLabel = new QLabel(TableRowHeightsDialog);
        tableRowHeightLabel->setObjectName(QStringLiteral("tableRowHeightLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, tableRowHeightLabel);

        tableRowHeight = new ScrSpinBox(TableRowHeightsDialog);
        tableRowHeight->setObjectName(QStringLiteral("tableRowHeight"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableRowHeight->sizePolicy().hasHeightForWidth());
        tableRowHeight->setSizePolicy(sizePolicy);
        tableRowHeight->setMinimumSize(QSize(140, 0));
        tableRowHeight->setMaximum(1e+06);

        formLayout->setWidget(0, QFormLayout::FieldRole, tableRowHeight);


        verticalLayout->addLayout(formLayout);

        dialogButtonBox = new QDialogButtonBox(TableRowHeightsDialog);
        dialogButtonBox->setObjectName(QStringLiteral("dialogButtonBox"));
        dialogButtonBox->setOrientation(Qt::Horizontal);
        dialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(dialogButtonBox);

#ifndef QT_NO_SHORTCUT
        tableRowHeightLabel->setBuddy(tableRowHeight);
#endif // QT_NO_SHORTCUT

        retranslateUi(TableRowHeightsDialog);
        QObject::connect(dialogButtonBox, SIGNAL(accepted()), TableRowHeightsDialog, SLOT(accept()));
        QObject::connect(dialogButtonBox, SIGNAL(rejected()), TableRowHeightsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TableRowHeightsDialog);
    } // setupUi

    void retranslateUi(QDialog *TableRowHeightsDialog)
    {
        TableRowHeightsDialog->setWindowTitle(QApplication::translate("TableRowHeightsDialog", "Set Row Heights", 0));
        tableRowHeightLabel->setText(QApplication::translate("TableRowHeightsDialog", "Row Height:", 0));
    } // retranslateUi

};

namespace Ui {
    class TableRowHeightsDialog: public Ui_TableRowHeightsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEROWHEIGHTSDIALOG_H
