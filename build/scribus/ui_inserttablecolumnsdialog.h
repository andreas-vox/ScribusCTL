/********************************************************************************
** Form generated from reading UI file 'inserttablecolumnsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTTABLECOLUMNSDIALOG_H
#define UI_INSERTTABLECOLUMNSDIALOG_H

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

class Ui_InsertTableColumnsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *numColumnsLabel;
    QSpinBox *numColumns;
    QLabel *positionLabel;
    QVBoxLayout *positionLayout;
    QRadioButton *beforeButton;
    QRadioButton *afterButton;
    QDialogButtonBox *dialogButtonBox;
    QButtonGroup *positions;

    void setupUi(QDialog *InsertTableColumnsDialog)
    {
        if (InsertTableColumnsDialog->objectName().isEmpty())
            InsertTableColumnsDialog->setObjectName(QStringLiteral("InsertTableColumnsDialog"));
        InsertTableColumnsDialog->resize(240, 113);
        InsertTableColumnsDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(InsertTableColumnsDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        numColumnsLabel = new QLabel(InsertTableColumnsDialog);
        numColumnsLabel->setObjectName(QStringLiteral("numColumnsLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, numColumnsLabel);

        numColumns = new QSpinBox(InsertTableColumnsDialog);
        numColumns->setObjectName(QStringLiteral("numColumns"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(numColumns->sizePolicy().hasHeightForWidth());
        numColumns->setSizePolicy(sizePolicy);
        numColumns->setMinimumSize(QSize(100, 0));
        numColumns->setMinimum(1);
        numColumns->setValue(1);

        formLayout->setWidget(0, QFormLayout::FieldRole, numColumns);

        positionLabel = new QLabel(InsertTableColumnsDialog);
        positionLabel->setObjectName(QStringLiteral("positionLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, positionLabel);

        positionLayout = new QVBoxLayout();
        positionLayout->setObjectName(QStringLiteral("positionLayout"));
        beforeButton = new QRadioButton(InsertTableColumnsDialog);
        positions = new QButtonGroup(InsertTableColumnsDialog);
        positions->setObjectName(QStringLiteral("positions"));
        positions->addButton(beforeButton);
        beforeButton->setObjectName(QStringLiteral("beforeButton"));
        beforeButton->setChecked(true);

        positionLayout->addWidget(beforeButton);

        afterButton = new QRadioButton(InsertTableColumnsDialog);
        positions->addButton(afterButton);
        afterButton->setObjectName(QStringLiteral("afterButton"));

        positionLayout->addWidget(afterButton);


        formLayout->setLayout(1, QFormLayout::FieldRole, positionLayout);


        verticalLayout_2->addLayout(formLayout);

        dialogButtonBox = new QDialogButtonBox(InsertTableColumnsDialog);
        dialogButtonBox->setObjectName(QStringLiteral("dialogButtonBox"));
        dialogButtonBox->setOrientation(Qt::Horizontal);
        dialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(dialogButtonBox);

#ifndef QT_NO_SHORTCUT
        numColumnsLabel->setBuddy(numColumns);
#endif // QT_NO_SHORTCUT

        retranslateUi(InsertTableColumnsDialog);
        QObject::connect(dialogButtonBox, SIGNAL(accepted()), InsertTableColumnsDialog, SLOT(accept()));
        QObject::connect(dialogButtonBox, SIGNAL(rejected()), InsertTableColumnsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(InsertTableColumnsDialog);
    } // setupUi

    void retranslateUi(QDialog *InsertTableColumnsDialog)
    {
        InsertTableColumnsDialog->setWindowTitle(QApplication::translate("InsertTableColumnsDialog", "Insert Column(s)", 0));
        numColumnsLabel->setText(QApplication::translate("InsertTableColumnsDialog", "Number of Columns:", 0));
        positionLabel->setText(QApplication::translate("InsertTableColumnsDialog", "Position:", 0));
        beforeButton->setText(QApplication::translate("InsertTableColumnsDialog", "Before", 0));
        afterButton->setText(QApplication::translate("InsertTableColumnsDialog", "After", 0));
    } // retranslateUi

};

namespace Ui {
    class InsertTableColumnsDialog: public Ui_InsertTableColumnsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTTABLECOLUMNSDIALOG_H
