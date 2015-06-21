/********************************************************************************
** Form generated from reading UI file 'gtfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GTFILEDIALOG_H
#define UI_GTFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "ui/sccombobox.h"
#include "ui/scfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_gtFileDialog
{
public:
    QGridLayout *gridLayout;
    ScFileWidget *fileWidget;
    QLabel *label;
    ScComboBox *importerCombo;
    QCheckBox *textOnlyCheckBox;
    QLabel *label_2;
    ScComboBox *encodingCombo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *gtFileDialog)
    {
        if (gtFileDialog->objectName().isEmpty())
            gtFileDialog->setObjectName(QStringLiteral("gtFileDialog"));
        gtFileDialog->resize(373, 317);
        gridLayout = new QGridLayout(gtFileDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        fileWidget = new ScFileWidget(gtFileDialog);
        fileWidget->setObjectName(QStringLiteral("fileWidget"));

        gridLayout->addWidget(fileWidget, 0, 0, 1, 3);

        label = new QLabel(gtFileDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        importerCombo = new ScComboBox(gtFileDialog);
        importerCombo->setObjectName(QStringLiteral("importerCombo"));

        gridLayout->addWidget(importerCombo, 1, 1, 1, 1);

        textOnlyCheckBox = new QCheckBox(gtFileDialog);
        textOnlyCheckBox->setObjectName(QStringLiteral("textOnlyCheckBox"));

        gridLayout->addWidget(textOnlyCheckBox, 1, 2, 1, 1);

        label_2 = new QLabel(gtFileDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        encodingCombo = new ScComboBox(gtFileDialog);
        encodingCombo->setObjectName(QStringLiteral("encodingCombo"));

        gridLayout->addWidget(encodingCombo, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(gtFileDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 3);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(importerCombo);
        label_2->setBuddy(encodingCombo);
#endif // QT_NO_SHORTCUT

        retranslateUi(gtFileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), gtFileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), gtFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(gtFileDialog);
    } // setupUi

    void retranslateUi(QDialog *gtFileDialog)
    {
        gtFileDialog->setWindowTitle(QApplication::translate("gtFileDialog", "Open", 0));
        label->setText(QApplication::translate("gtFileDialog", "&Importer:", 0));
        textOnlyCheckBox->setText(QApplication::translate("gtFileDialog", "Import &Text Only", 0));
        label_2->setText(QApplication::translate("gtFileDialog", "&Encoding:", 0));
    } // retranslateUi

};

namespace Ui {
    class gtFileDialog: public Ui_gtFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GTFILEDIALOG_H
