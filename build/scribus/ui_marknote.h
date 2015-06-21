/********************************************************************************
** Form generated from reading UI file 'marknote.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKNOTE_H
#define UI_MARKNOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_MarkNoteDlg
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QComboBox *ItemList;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MarkNoteDlg)
    {
        if (MarkNoteDlg->objectName().isEmpty())
            MarkNoteDlg->setObjectName(QStringLiteral("MarkNoteDlg"));
        MarkNoteDlg->resize(358, 80);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MarkNoteDlg->sizePolicy().hasHeightForWidth());
        MarkNoteDlg->setSizePolicy(sizePolicy);
        MarkNoteDlg->setMaximumSize(QSize(16777215, 80));
        gridLayout = new QGridLayout(MarkNoteDlg);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ItemList = new QComboBox(MarkNoteDlg);
        ItemList->setObjectName(QStringLiteral("ItemList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ItemList->sizePolicy().hasHeightForWidth());
        ItemList->setSizePolicy(sizePolicy1);
        ItemList->setEditable(false);
        ItemList->setDuplicatesEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, ItemList);

        label_2 = new QLabel(MarkNoteDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(MarkNoteDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(MarkNoteDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), MarkNoteDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MarkNoteDlg, SLOT(reject()));

        ItemList->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MarkNoteDlg);
    } // setupUi

    void retranslateUi(QDialog *MarkNoteDlg)
    {
        MarkNoteDlg->setWindowTitle(QApplication::translate("MarkNoteDlg", "Dialog", 0));
        label_2->setText(QApplication::translate("MarkNoteDlg", "Notes Style:", 0));
    } // retranslateUi

};

namespace Ui {
    class MarkNoteDlg: public Ui_MarkNoteDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKNOTE_H
