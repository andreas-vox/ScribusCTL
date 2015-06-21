/********************************************************************************
** Form generated from reading UI file 'markanchor.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKANCHOR_H
#define UI_MARKANCHOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_MarkAnchorDlg
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *labelEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MarkAnchorDlg)
    {
        if (MarkAnchorDlg->objectName().isEmpty())
            MarkAnchorDlg->setObjectName(QStringLiteral("MarkAnchorDlg"));
        MarkAnchorDlg->resize(400, 81);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MarkAnchorDlg->sizePolicy().hasHeightForWidth());
        MarkAnchorDlg->setSizePolicy(sizePolicy);
        MarkAnchorDlg->setMinimumSize(QSize(0, 81));
        MarkAnchorDlg->setMaximumSize(QSize(16777215, 81));
        gridLayout = new QGridLayout(MarkAnchorDlg);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(MarkAnchorDlg);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        labelEdit = new QLineEdit(MarkAnchorDlg);
        labelEdit->setObjectName(QStringLiteral("labelEdit"));

        gridLayout->addWidget(labelEdit, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(MarkAnchorDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);


        retranslateUi(MarkAnchorDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), MarkAnchorDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MarkAnchorDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(MarkAnchorDlg);
    } // setupUi

    void retranslateUi(QDialog *MarkAnchorDlg)
    {
        MarkAnchorDlg->setWindowTitle(QApplication::translate("MarkAnchorDlg", "Dialog", 0));
        label->setText(QApplication::translate("MarkAnchorDlg", "Label:", 0));
    } // retranslateUi

};

namespace Ui {
    class MarkAnchorDlg: public Ui_MarkAnchorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKANCHOR_H
