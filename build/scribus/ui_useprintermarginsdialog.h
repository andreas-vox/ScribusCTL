/********************************************************************************
** Form generated from reading UI file 'useprintermarginsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEPRINTERMARGINSDIALOG_H
#define UI_USEPRINTERMARGINSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UsePrinterMarginsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *selectPrinterLabel;
    QComboBox *printerComboBox;
    QGroupBox *marginsGroupBox;
    QVBoxLayout *vboxLayout1;
    QGridLayout *gridLayout;
    QLineEdit *bottomLineEdit;
    QLabel *rightLabel;
    QSpacerItem *spacerItem;
    QLineEdit *rightLineEdit;
    QLineEdit *leftLineEdit;
    QLabel *topLabel;
    QLabel *bottomLabel;
    QLabel *leftLabel;
    QLineEdit *topLineEdit;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *UsePrinterMarginsDialog)
    {
        if (UsePrinterMarginsDialog->objectName().isEmpty())
            UsePrinterMarginsDialog->setObjectName(QStringLiteral("UsePrinterMarginsDialog"));
        UsePrinterMarginsDialog->resize(350, 185);
        vboxLayout = new QVBoxLayout(UsePrinterMarginsDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        selectPrinterLabel = new QLabel(UsePrinterMarginsDialog);
        selectPrinterLabel->setObjectName(QStringLiteral("selectPrinterLabel"));
        selectPrinterLabel->setWordWrap(false);

        hboxLayout->addWidget(selectPrinterLabel);

        printerComboBox = new QComboBox(UsePrinterMarginsDialog);
        printerComboBox->setObjectName(QStringLiteral("printerComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(printerComboBox->sizePolicy().hasHeightForWidth());
        printerComboBox->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(printerComboBox);


        vboxLayout->addLayout(hboxLayout);

        marginsGroupBox = new QGroupBox(UsePrinterMarginsDialog);
        marginsGroupBox->setObjectName(QStringLiteral("marginsGroupBox"));
        vboxLayout1 = new QVBoxLayout(marginsGroupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        bottomLineEdit = new QLineEdit(marginsGroupBox);
        bottomLineEdit->setObjectName(QStringLiteral("bottomLineEdit"));
        bottomLineEdit->setReadOnly(true);

        gridLayout->addWidget(bottomLineEdit, 0, 4, 1, 1);

        rightLabel = new QLabel(marginsGroupBox);
        rightLabel->setObjectName(QStringLiteral("rightLabel"));
        rightLabel->setWordWrap(false);

        gridLayout->addWidget(rightLabel, 1, 3, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        rightLineEdit = new QLineEdit(marginsGroupBox);
        rightLineEdit->setObjectName(QStringLiteral("rightLineEdit"));
        rightLineEdit->setReadOnly(true);

        gridLayout->addWidget(rightLineEdit, 1, 4, 1, 1);

        leftLineEdit = new QLineEdit(marginsGroupBox);
        leftLineEdit->setObjectName(QStringLiteral("leftLineEdit"));
        leftLineEdit->setReadOnly(true);

        gridLayout->addWidget(leftLineEdit, 1, 1, 1, 1);

        topLabel = new QLabel(marginsGroupBox);
        topLabel->setObjectName(QStringLiteral("topLabel"));
        topLabel->setWordWrap(false);

        gridLayout->addWidget(topLabel, 0, 0, 1, 1);

        bottomLabel = new QLabel(marginsGroupBox);
        bottomLabel->setObjectName(QStringLiteral("bottomLabel"));
        bottomLabel->setWordWrap(false);

        gridLayout->addWidget(bottomLabel, 0, 3, 1, 1);

        leftLabel = new QLabel(marginsGroupBox);
        leftLabel->setObjectName(QStringLiteral("leftLabel"));
        leftLabel->setWordWrap(false);

        gridLayout->addWidget(leftLabel, 1, 0, 1, 1);

        topLineEdit = new QLineEdit(marginsGroupBox);
        topLineEdit->setObjectName(QStringLiteral("topLineEdit"));
        topLineEdit->setReadOnly(true);

        gridLayout->addWidget(topLineEdit, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 2, 1, 1);


        vboxLayout1->addLayout(gridLayout);


        vboxLayout->addWidget(marginsGroupBox);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        spacerItem2 = new QSpacerItem(212, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        okButton = new QPushButton(UsePrinterMarginsDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout1->addWidget(okButton);

        cancelButton = new QPushButton(UsePrinterMarginsDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout1->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout1);

#ifndef QT_NO_SHORTCUT
        selectPrinterLabel->setBuddy(printerComboBox);
        rightLabel->setBuddy(rightLineEdit);
        topLabel->setBuddy(topLineEdit);
        bottomLabel->setBuddy(bottomLineEdit);
        leftLabel->setBuddy(leftLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(UsePrinterMarginsDialog);

        QMetaObject::connectSlotsByName(UsePrinterMarginsDialog);
    } // setupUi

    void retranslateUi(QDialog *UsePrinterMarginsDialog)
    {
        UsePrinterMarginsDialog->setWindowTitle(QApplication::translate("UsePrinterMarginsDialog", "Use Printer Margins", 0));
        selectPrinterLabel->setText(QApplication::translate("UsePrinterMarginsDialog", "Select &Printer:", 0));
        marginsGroupBox->setTitle(QApplication::translate("UsePrinterMarginsDialog", "Margins", 0));
        rightLabel->setText(QApplication::translate("UsePrinterMarginsDialog", "Right:", 0));
        topLabel->setText(QApplication::translate("UsePrinterMarginsDialog", "&Top:", 0));
        bottomLabel->setText(QApplication::translate("UsePrinterMarginsDialog", "&Bottom:", 0));
        leftLabel->setText(QApplication::translate("UsePrinterMarginsDialog", "&Left:", 0));
        okButton->setText(QApplication::translate("UsePrinterMarginsDialog", "&OK", 0));
        okButton->setShortcut(QApplication::translate("UsePrinterMarginsDialog", "Alt+O", 0));
        cancelButton->setText(QApplication::translate("UsePrinterMarginsDialog", "&Cancel", 0));
        cancelButton->setShortcut(QApplication::translate("UsePrinterMarginsDialog", "Alt+C", 0));
    } // retranslateUi

};

namespace Ui {
    class UsePrinterMarginsDialog: public Ui_UsePrinterMarginsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEPRINTERMARGINSDIALOG_H
