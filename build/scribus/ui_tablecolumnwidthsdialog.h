/********************************************************************************
** Form generated from reading UI file 'tablecolumnwidthsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLECOLUMNWIDTHSDIALOG_H
#define UI_TABLECOLUMNWIDTHSDIALOG_H

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

class Ui_TableColumnWidthsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *tableColumnWidthLabel;
    ScrSpinBox *tableColumnWidth;
    QDialogButtonBox *dialogButtonBox;

    void setupUi(QDialog *TableColumnWidthsDialog)
    {
        if (TableColumnWidthsDialog->objectName().isEmpty())
            TableColumnWidthsDialog->setObjectName(QStringLiteral("TableColumnWidthsDialog"));
        TableColumnWidthsDialog->resize(243, 61);
        TableColumnWidthsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(TableColumnWidthsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        tableColumnWidthLabel = new QLabel(TableColumnWidthsDialog);
        tableColumnWidthLabel->setObjectName(QStringLiteral("tableColumnWidthLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, tableColumnWidthLabel);

        tableColumnWidth = new ScrSpinBox(TableColumnWidthsDialog);
        tableColumnWidth->setObjectName(QStringLiteral("tableColumnWidth"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableColumnWidth->sizePolicy().hasHeightForWidth());
        tableColumnWidth->setSizePolicy(sizePolicy);
        tableColumnWidth->setMinimumSize(QSize(140, 0));
        tableColumnWidth->setMaximum(1e+06);

        formLayout->setWidget(0, QFormLayout::FieldRole, tableColumnWidth);


        verticalLayout->addLayout(formLayout);

        dialogButtonBox = new QDialogButtonBox(TableColumnWidthsDialog);
        dialogButtonBox->setObjectName(QStringLiteral("dialogButtonBox"));
        dialogButtonBox->setOrientation(Qt::Horizontal);
        dialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(dialogButtonBox);

#ifndef QT_NO_SHORTCUT
        tableColumnWidthLabel->setBuddy(tableColumnWidth);
#endif // QT_NO_SHORTCUT

        retranslateUi(TableColumnWidthsDialog);
        QObject::connect(dialogButtonBox, SIGNAL(accepted()), TableColumnWidthsDialog, SLOT(accept()));
        QObject::connect(dialogButtonBox, SIGNAL(rejected()), TableColumnWidthsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TableColumnWidthsDialog);
    } // setupUi

    void retranslateUi(QDialog *TableColumnWidthsDialog)
    {
        TableColumnWidthsDialog->setWindowTitle(QApplication::translate("TableColumnWidthsDialog", "Set Column Widths", 0));
        tableColumnWidthLabel->setText(QApplication::translate("TableColumnWidthsDialog", "Column Width:", 0));
    } // retranslateUi

};

namespace Ui {
    class TableColumnWidthsDialog: public Ui_TableColumnWidthsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLECOLUMNWIDTHSDIALOG_H
