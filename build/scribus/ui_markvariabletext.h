/********************************************************************************
** Form generated from reading UI file 'markvariabletext.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKVARIABLETEXT_H
#define UI_MARKVARIABLETEXT_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MarkVariableTextDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *labelLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *textEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MarkVariableTextDlg)
    {
        if (MarkVariableTextDlg->objectName().isEmpty())
            MarkVariableTextDlg->setObjectName(QStringLiteral("MarkVariableTextDlg"));
        MarkVariableTextDlg->resize(394, 117);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MarkVariableTextDlg->sizePolicy().hasHeightForWidth());
        MarkVariableTextDlg->setSizePolicy(sizePolicy);
        MarkVariableTextDlg->setMinimumSize(QSize(0, 117));
        MarkVariableTextDlg->setMaximumSize(QSize(16777215, 117));
        verticalLayout = new QVBoxLayout(MarkVariableTextDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelLayout = new QHBoxLayout();
        labelLayout->setObjectName(QStringLiteral("labelLayout"));
        label = new QLabel(MarkVariableTextDlg);
        label->setObjectName(QStringLiteral("label"));

        labelLayout->addWidget(label);


        verticalLayout->addLayout(labelLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(MarkVariableTextDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        textEdit = new QLineEdit(MarkVariableTextDlg);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_2->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(202, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(MarkVariableTextDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(MarkVariableTextDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), MarkVariableTextDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MarkVariableTextDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(MarkVariableTextDlg);
    } // setupUi

    void retranslateUi(QDialog *MarkVariableTextDlg)
    {
        MarkVariableTextDlg->setWindowTitle(QApplication::translate("MarkVariableTextDlg", "Add new Mark for Variable Text", 0));
        label->setText(QApplication::translate("MarkVariableTextDlg", "Label:", 0));
        label_2->setText(QApplication::translate("MarkVariableTextDlg", "Text to insert:", 0));
    } // retranslateUi

};

namespace Ui {
    class MarkVariableTextDlg: public Ui_MarkVariableTextDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKVARIABLETEXT_H
