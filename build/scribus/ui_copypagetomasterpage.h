/********************************************************************************
** Form generated from reading UI file 'copypagetomasterpage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYPAGETOMASTERPAGE_H
#define UI_COPYPAGETOMASTERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CopyPageToMasterPageBase
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QComboBox *pagePositionComboBox;
    QCheckBox *copyMasterItemsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CopyPageToMasterPageBase)
    {
        if (CopyPageToMasterPageBase->objectName().isEmpty())
            CopyPageToMasterPageBase->setObjectName(QStringLiteral("CopyPageToMasterPageBase"));
        CopyPageToMasterPageBase->setWindowModality(Qt::WindowModal);
        CopyPageToMasterPageBase->resize(252, 139);
        vboxLayout = new QVBoxLayout(CopyPageToMasterPageBase);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        nameLabel = new QLabel(CopyPageToMasterPageBase);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        hboxLayout->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(CopyPageToMasterPageBase);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        hboxLayout->addWidget(nameLineEdit);


        vboxLayout->addLayout(hboxLayout);

        pagePositionComboBox = new QComboBox(CopyPageToMasterPageBase);
        pagePositionComboBox->setObjectName(QStringLiteral("pagePositionComboBox"));

        vboxLayout->addWidget(pagePositionComboBox);

        copyMasterItemsCheckBox = new QCheckBox(CopyPageToMasterPageBase);
        copyMasterItemsCheckBox->setObjectName(QStringLiteral("copyMasterItemsCheckBox"));

        vboxLayout->addWidget(copyMasterItemsCheckBox);

        buttonBox = new QDialogButtonBox(CopyPageToMasterPageBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(CopyPageToMasterPageBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), CopyPageToMasterPageBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CopyPageToMasterPageBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(CopyPageToMasterPageBase);
    } // setupUi

    void retranslateUi(QDialog *CopyPageToMasterPageBase)
    {
        CopyPageToMasterPageBase->setWindowTitle(QApplication::translate("CopyPageToMasterPageBase", "Convert Page to Master Page", 0));
        nameLabel->setText(QApplication::translate("CopyPageToMasterPageBase", "Name:", 0));
        copyMasterItemsCheckBox->setText(QApplication::translate("CopyPageToMasterPageBase", "Copy Applied Master Page Items", 0));
    } // retranslateUi

};

namespace Ui {
    class CopyPageToMasterPageBase: public Ui_CopyPageToMasterPageBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYPAGETOMASTERPAGE_H
