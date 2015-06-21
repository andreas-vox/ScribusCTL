/********************************************************************************
** Form generated from reading UI file 'mark2item.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARK2ITEM_H
#define UI_MARK2ITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Mark2ItemDlg
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *labelEdit;
    QLabel *label_2;
    QComboBox *ItemList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Mark2ItemDlg)
    {
        if (Mark2ItemDlg->objectName().isEmpty())
            Mark2ItemDlg->setObjectName(QStringLiteral("Mark2ItemDlg"));
        Mark2ItemDlg->resize(349, 102);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Mark2ItemDlg->sizePolicy().hasHeightForWidth());
        Mark2ItemDlg->setSizePolicy(sizePolicy);
        Mark2ItemDlg->setMaximumSize(QSize(16777215, 115));
        gridLayout = new QGridLayout(Mark2ItemDlg);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(Mark2ItemDlg);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        labelEdit = new QLineEdit(Mark2ItemDlg);
        labelEdit->setObjectName(QStringLiteral("labelEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelEdit);

        label_2 = new QLabel(Mark2ItemDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        ItemList = new QComboBox(Mark2ItemDlg);
        ItemList->setObjectName(QStringLiteral("ItemList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ItemList->sizePolicy().hasHeightForWidth());
        ItemList->setSizePolicy(sizePolicy1);
        ItemList->setEditable(false);
        ItemList->setDuplicatesEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, ItemList);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(164, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(Mark2ItemDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(Mark2ItemDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), Mark2ItemDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Mark2ItemDlg, SLOT(reject()));

        ItemList->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Mark2ItemDlg);
    } // setupUi

    void retranslateUi(QDialog *Mark2ItemDlg)
    {
        Mark2ItemDlg->setWindowTitle(QApplication::translate("Mark2ItemDlg", "Dialog", 0));
        label->setText(QApplication::translate("Mark2ItemDlg", "Label:", 0));
        label_2->setText(QApplication::translate("Mark2ItemDlg", "Item:", 0));
    } // retranslateUi

};

namespace Ui {
    class Mark2ItemDlg: public Ui_Mark2ItemDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARK2ITEM_H
