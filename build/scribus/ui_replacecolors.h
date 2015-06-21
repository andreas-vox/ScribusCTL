/********************************************************************************
** Form generated from reading UI file 'replacecolors.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACECOLORS_H
#define UI_REPLACECOLORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_replaceColorsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QTableWidget *replacementTable;
    QVBoxLayout *vboxLayout1;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *editButton;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *replaceColorsDialog)
    {
        if (replaceColorsDialog->objectName().isEmpty())
            replaceColorsDialog->setObjectName(QStringLiteral("replaceColorsDialog"));
        replaceColorsDialog->resize(373, 231);
        replaceColorsDialog->setSizeGripEnabled(true);
        replaceColorsDialog->setModal(true);
        vboxLayout = new QVBoxLayout(replaceColorsDialog);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        replacementTable = new QTableWidget(replaceColorsDialog);
        if (replacementTable->columnCount() < 2)
            replacementTable->setColumnCount(2);
        replacementTable->setObjectName(QStringLiteral("replacementTable"));
        replacementTable->setMinimumSize(QSize(150, 150));
        replacementTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        replacementTable->setColumnCount(2);

        hboxLayout->addWidget(replacementTable);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        addButton = new QPushButton(replaceColorsDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setAutoDefault(false);

        vboxLayout1->addWidget(addButton);

        removeButton = new QPushButton(replaceColorsDialog);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setEnabled(false);
        removeButton->setAutoDefault(false);

        vboxLayout1->addWidget(removeButton);

        editButton = new QPushButton(replaceColorsDialog);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setEnabled(false);

        vboxLayout1->addWidget(editButton);

        spacerItem = new QSpacerItem(75, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout1);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(replaceColorsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(replaceColorsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), replaceColorsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), replaceColorsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(replaceColorsDialog);
    } // setupUi

    void retranslateUi(QDialog *replaceColorsDialog)
    {
        replaceColorsDialog->setWindowTitle(QApplication::translate("replaceColorsDialog", "Replace Colors", 0));
        addButton->setText(QApplication::translate("replaceColorsDialog", "Add ...", 0));
        removeButton->setText(QApplication::translate("replaceColorsDialog", "Remove", 0));
        editButton->setText(QApplication::translate("replaceColorsDialog", "Edit...", 0));
    } // retranslateUi

};

namespace Ui {
    class replaceColorsDialog: public Ui_replaceColorsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACECOLORS_H
