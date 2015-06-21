/********************************************************************************
** Form generated from reading UI file 'smstyleimport.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMSTYLEIMPORT_H
#define UI_SMSTYLEIMPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SMStyleImport
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *styleWidget;
    QCheckBox *importAllCheckBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *renameButton;
    QRadioButton *replaceButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SMStyleImport)
    {
        if (SMStyleImport->objectName().isEmpty())
            SMStyleImport->setObjectName(QStringLiteral("SMStyleImport"));
        SMStyleImport->resize(304, 444);
        verticalLayout = new QVBoxLayout(SMStyleImport);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        styleWidget = new QTreeWidget(SMStyleImport);
        styleWidget->setObjectName(QStringLiteral("styleWidget"));
        styleWidget->setSelectionMode(QAbstractItemView::NoSelection);
        styleWidget->setSelectionBehavior(QAbstractItemView::SelectItems);

        verticalLayout->addWidget(styleWidget);

        importAllCheckBox = new QCheckBox(SMStyleImport);
        importAllCheckBox->setObjectName(QStringLiteral("importAllCheckBox"));

        verticalLayout->addWidget(importAllCheckBox);

        groupBox = new QGroupBox(SMStyleImport);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        renameButton = new QRadioButton(groupBox);
        renameButton->setObjectName(QStringLiteral("renameButton"));
        renameButton->setChecked(true);

        gridLayout->addWidget(renameButton, 0, 0, 1, 1);

        replaceButton = new QRadioButton(groupBox);
        replaceButton->setObjectName(QStringLiteral("replaceButton"));

        gridLayout->addWidget(replaceButton, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(SMStyleImport);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SMStyleImport);
        QObject::connect(buttonBox, SIGNAL(accepted()), SMStyleImport, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SMStyleImport, SLOT(reject()));

        QMetaObject::connectSlotsByName(SMStyleImport);
    } // setupUi

    void retranslateUi(QDialog *SMStyleImport)
    {
        SMStyleImport->setWindowTitle(QApplication::translate("SMStyleImport", "Choose Styles", 0));
        QTreeWidgetItem *___qtreewidgetitem = styleWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("SMStyleImport", "Available Styles", 0));
        importAllCheckBox->setText(QApplication::translate("SMStyleImport", "Select or Unselect All", 0));
        groupBox->setTitle(QApplication::translate("SMStyleImport", "In case of a name clash", 0));
        renameButton->setText(QApplication::translate("SMStyleImport", "&Rename Imported Style", 0));
        replaceButton->setText(QApplication::translate("SMStyleImport", "R&eplace Existing Style", 0));
    } // retranslateUi

};

namespace Ui {
    class SMStyleImport: public Ui_SMStyleImport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMSTYLEIMPORT_H
