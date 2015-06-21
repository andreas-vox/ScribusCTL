/********************************************************************************
** Form generated from reading UI file 'gradientaddedit.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADIENTADDEDIT_H
#define UI_GRADIENTADDEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include "ui/gradienteditor.h"

QT_BEGIN_NAMESPACE

class Ui_gradientAddEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *gradientName;
    GradientEditor *editor;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *gradientAddEditDialog)
    {
        if (gradientAddEditDialog->objectName().isEmpty())
            gradientAddEditDialog->setObjectName(QStringLiteral("gradientAddEditDialog"));
        gradientAddEditDialog->resize(302, 279);
        gradientAddEditDialog->setMinimumSize(QSize(210, 0));
        gradientAddEditDialog->setModal(true);
        verticalLayout = new QVBoxLayout(gradientAddEditDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label = new QLabel(gradientAddEditDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        gradientName = new QLineEdit(gradientAddEditDialog);
        gradientName->setObjectName(QStringLiteral("gradientName"));

        horizontalLayout->addWidget(gradientName);


        verticalLayout->addLayout(horizontalLayout);

        editor = new GradientEditor(gradientAddEditDialog);
        editor->setObjectName(QStringLiteral("editor"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editor->sizePolicy().hasHeightForWidth());
        editor->setSizePolicy(sizePolicy);
        editor->setMinimumSize(QSize(210, 120));
        editor->setFrameShape(QFrame::NoFrame);
        editor->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(editor);

        buttonBox = new QDialogButtonBox(gradientAddEditDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(gradientAddEditDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), gradientAddEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(gradientAddEditDialog);
    } // setupUi

    void retranslateUi(QDialog *gradientAddEditDialog)
    {
        gradientAddEditDialog->setWindowTitle(QApplication::translate("gradientAddEditDialog", "Edit Gradient", 0));
        label->setText(QApplication::translate("gradientAddEditDialog", "Name:", 0));
    } // retranslateUi

};

namespace Ui {
    class gradientAddEditDialog: public Ui_gradientAddEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADIENTADDEDIT_H
