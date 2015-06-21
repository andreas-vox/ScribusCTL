/********************************************************************************
** Form generated from reading UI file 'inserttablerowsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTTABLEROWSDIALOG_H
#define UI_INSERTTABLEROWSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InsertTableRowsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *numRowsLabel;
    QSpinBox *numRows;
    QLabel *positionLabel;
    QVBoxLayout *positionLayout;
    QRadioButton *beforeButton;
    QRadioButton *afterButton;
    QDialogButtonBox *dialogButtonBox;
    QButtonGroup *positions;

    void setupUi(QDialog *InsertTableRowsDialog)
    {
        if (InsertTableRowsDialog->objectName().isEmpty())
            InsertTableRowsDialog->setObjectName(QStringLiteral("InsertTableRowsDialog"));
        InsertTableRowsDialog->resize(218, 113);
        InsertTableRowsDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(InsertTableRowsDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        numRowsLabel = new QLabel(InsertTableRowsDialog);
        numRowsLabel->setObjectName(QStringLiteral("numRowsLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, numRowsLabel);

        numRows = new QSpinBox(InsertTableRowsDialog);
        numRows->setObjectName(QStringLiteral("numRows"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(numRows->sizePolicy().hasHeightForWidth());
        numRows->setSizePolicy(sizePolicy);
        numRows->setMinimumSize(QSize(100, 0));
        numRows->setMinimum(1);
        numRows->setValue(1);

        formLayout->setWidget(0, QFormLayout::FieldRole, numRows);

        positionLabel = new QLabel(InsertTableRowsDialog);
        positionLabel->setObjectName(QStringLiteral("positionLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, positionLabel);

        positionLayout = new QVBoxLayout();
        positionLayout->setObjectName(QStringLiteral("positionLayout"));
        beforeButton = new QRadioButton(InsertTableRowsDialog);
        positions = new QButtonGroup(InsertTableRowsDialog);
        positions->setObjectName(QStringLiteral("positions"));
        positions->addButton(beforeButton);
        beforeButton->setObjectName(QStringLiteral("beforeButton"));
        beforeButton->setChecked(true);

        positionLayout->addWidget(beforeButton);

        afterButton = new QRadioButton(InsertTableRowsDialog);
        positions->addButton(afterButton);
        afterButton->setObjectName(QStringLiteral("afterButton"));

        positionLayout->addWidget(afterButton);


        formLayout->setLayout(1, QFormLayout::FieldRole, positionLayout);


        verticalLayout_2->addLayout(formLayout);

        dialogButtonBox = new QDialogButtonBox(InsertTableRowsDialog);
        dialogButtonBox->setObjectName(QStringLiteral("dialogButtonBox"));
        dialogButtonBox->setOrientation(Qt::Horizontal);
        dialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(dialogButtonBox);

#ifndef QT_NO_SHORTCUT
        numRowsLabel->setBuddy(numRows);
#endif // QT_NO_SHORTCUT

        retranslateUi(InsertTableRowsDialog);
        QObject::connect(dialogButtonBox, SIGNAL(accepted()), InsertTableRowsDialog, SLOT(accept()));
        QObject::connect(dialogButtonBox, SIGNAL(rejected()), InsertTableRowsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(InsertTableRowsDialog);
    } // setupUi

    void retranslateUi(QDialog *InsertTableRowsDialog)
    {
        InsertTableRowsDialog->setWindowTitle(QApplication::translate("InsertTableRowsDialog", "Insert Row(s)", 0));
        numRowsLabel->setText(QApplication::translate("InsertTableRowsDialog", "Number of Rows:", 0));
        positionLabel->setText(QApplication::translate("InsertTableRowsDialog", "Position:", 0));
        beforeButton->setText(QApplication::translate("InsertTableRowsDialog", "Before", 0));
        afterButton->setText(QApplication::translate("InsertTableRowsDialog", "After", 0));
    } // retranslateUi

};

namespace Ui {
    class InsertTableRowsDialog: public Ui_InsertTableRowsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTTABLEROWSDIALOG_H
