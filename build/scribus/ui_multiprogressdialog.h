/********************************************************************************
** Form generated from reading UI file 'multiprogressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPROGRESSDIALOG_H
#define UI_MULTIPROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "scribusapi.h"

QT_BEGIN_NAMESPACE

class Ui_MultiProgressDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *overallProgressLabel;
    QProgressBar *overallProgressBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *buttonCancel;

    void setupUi(QDialog *MultiProgressDialog)
    {
        if (MultiProgressDialog->objectName().isEmpty())
            MultiProgressDialog->setObjectName(QStringLiteral("MultiProgressDialog"));
        MultiProgressDialog->resize(230, 84);
        MultiProgressDialog->setSizeGripEnabled(false);
        vboxLayout = new QVBoxLayout(MultiProgressDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        overallProgressLabel = new QLabel(MultiProgressDialog);
        overallProgressLabel->setObjectName(QStringLiteral("overallProgressLabel"));
        overallProgressLabel->setWordWrap(false);

        gridLayout->addWidget(overallProgressLabel, 0, 0, 1, 1);

        overallProgressBar = new QProgressBar(MultiProgressDialog);
        overallProgressBar->setObjectName(QStringLiteral("overallProgressBar"));
        overallProgressBar->setValue(0);

        gridLayout->addWidget(overallProgressBar, 0, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonCancel = new QPushButton(MultiProgressDialog);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout->addWidget(buttonCancel);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(MultiProgressDialog);
        QObject::connect(buttonCancel, SIGNAL(clicked()), MultiProgressDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MultiProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *MultiProgressDialog)
    {
        MultiProgressDialog->setWindowTitle(QApplication::translate("MultiProgressDialog", "Progress", 0));
        overallProgressLabel->setText(QApplication::translate("MultiProgressDialog", "Overall Progress:", 0));
        buttonCancel->setText(QApplication::translate("MultiProgressDialog", "&Cancel", 0));
        buttonCancel->setShortcut(QString());
    } // retranslateUi

};

namespace Ui {
    class MultiProgressDialog: public Ui_MultiProgressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPROGRESSDIALOG_H
