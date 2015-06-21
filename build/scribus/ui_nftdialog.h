/********************************************************************************
** Form generated from reading UI file 'nftdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NFTDIALOG_H
#define UI_NFTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include "ui/nftwidget.h"

QT_BEGIN_NAMESPACE

class Ui_nftdialog
{
public:
    QVBoxLayout *verticalLayout;
    nftwidget *nftGui;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *nftdialog)
    {
        if (nftdialog->objectName().isEmpty())
            nftdialog->setObjectName(QStringLiteral("nftdialog"));
        nftdialog->resize(659, 480);
        verticalLayout = new QVBoxLayout(nftdialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nftGui = new nftwidget(nftdialog);
        nftGui->setObjectName(QStringLiteral("nftGui"));

        verticalLayout->addWidget(nftGui);

        buttonBox = new QDialogButtonBox(nftdialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(nftdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), nftdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), nftdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(nftdialog);
    } // setupUi

    void retranslateUi(QDialog *nftdialog)
    {
        nftdialog->setWindowTitle(QApplication::translate("nftdialog", "New From Template", 0));
    } // retranslateUi

};

namespace Ui {
    class nftdialog: public Ui_nftdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NFTDIALOG_H
