/********************************************************************************
** Form generated from reading UI file 'mark2mark.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARK2MARK_H
#define UI_MARK2MARK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Mark2MarkDlg
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLabel *label_2;
    QLineEdit *labelEdit;
    QSplitter *splitter_2;
    QLabel *label;
    QComboBox *LabelList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Mark2MarkDlg)
    {
        if (Mark2MarkDlg->objectName().isEmpty())
            Mark2MarkDlg->setObjectName(QStringLiteral("Mark2MarkDlg"));
        Mark2MarkDlg->resize(362, 103);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Mark2MarkDlg->sizePolicy().hasHeightForWidth());
        Mark2MarkDlg->setSizePolicy(sizePolicy);
        Mark2MarkDlg->setMinimumSize(QSize(0, 103));
        Mark2MarkDlg->setMaximumSize(QSize(16777215, 103));
        verticalLayout = new QVBoxLayout(Mark2MarkDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(Mark2MarkDlg);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QStringLiteral("label_2"));
        splitter->addWidget(label_2);
        labelEdit = new QLineEdit(splitter);
        labelEdit->setObjectName(QStringLiteral("labelEdit"));
        splitter->addWidget(labelEdit);

        verticalLayout->addWidget(splitter);

        splitter_2 = new QSplitter(Mark2MarkDlg);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter_2);
        label->setObjectName(QStringLiteral("label"));
        splitter_2->addWidget(label);
        LabelList = new QComboBox(splitter_2);
        LabelList->setObjectName(QStringLiteral("LabelList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LabelList->sizePolicy().hasHeightForWidth());
        LabelList->setSizePolicy(sizePolicy1);
        LabelList->setEditable(false);
        LabelList->setDuplicatesEnabled(false);
        splitter_2->addWidget(LabelList);

        verticalLayout->addWidget(splitter_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(166, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(Mark2MarkDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Mark2MarkDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), Mark2MarkDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Mark2MarkDlg, SLOT(reject()));

        LabelList->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Mark2MarkDlg);
    } // setupUi

    void retranslateUi(QDialog *Mark2MarkDlg)
    {
        Mark2MarkDlg->setWindowTitle(QApplication::translate("Mark2MarkDlg", "Dialog", 0));
        label_2->setText(QApplication::translate("Mark2MarkDlg", "Label:", 0));
        label->setText(QApplication::translate("Mark2MarkDlg", "Select marker:", 0));
    } // retranslateUi

};

namespace Ui {
    class Mark2MarkDlg: public Ui_Mark2MarkDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARK2MARK_H
