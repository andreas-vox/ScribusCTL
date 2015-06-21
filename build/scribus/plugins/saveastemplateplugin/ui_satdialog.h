/********************************************************************************
** Form generated from reading UI file 'satdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATDIALOG_H
#define UI_SATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SATDialogBase
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QCheckBox *detailButton;
    QLabel *catsLabel;
    QComboBox *catsCombo;
    QLabel *psizeLabel;
    QLineEdit *psizeEdit;
    QLabel *colorsLabel;
    QLineEdit *colorsEdit;
    QLabel *descrLabel;
    QTextEdit *descrEdit;
    QLabel *usageLabel;
    QTextEdit *usageEdit;
    QLabel *authorLabel;
    QLineEdit *authorEdit;
    QLabel *emailLabel;
    QLineEdit *emailEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SATDialogBase)
    {
        if (SATDialogBase->objectName().isEmpty())
            SATDialogBase->setObjectName(QStringLiteral("SATDialogBase"));
        SATDialogBase->resize(404, 447);
        formLayout = new QFormLayout(SATDialogBase);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(SATDialogBase);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nameEdit = new QLineEdit(SATDialogBase);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        detailButton = new QCheckBox(SATDialogBase);
        detailButton->setObjectName(QStringLiteral("detailButton"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, detailButton);

        catsLabel = new QLabel(SATDialogBase);
        catsLabel->setObjectName(QStringLiteral("catsLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, catsLabel);

        catsCombo = new QComboBox(SATDialogBase);
        catsCombo->setObjectName(QStringLiteral("catsCombo"));

        formLayout->setWidget(2, QFormLayout::FieldRole, catsCombo);

        psizeLabel = new QLabel(SATDialogBase);
        psizeLabel->setObjectName(QStringLiteral("psizeLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, psizeLabel);

        psizeEdit = new QLineEdit(SATDialogBase);
        psizeEdit->setObjectName(QStringLiteral("psizeEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, psizeEdit);

        colorsLabel = new QLabel(SATDialogBase);
        colorsLabel->setObjectName(QStringLiteral("colorsLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, colorsLabel);

        colorsEdit = new QLineEdit(SATDialogBase);
        colorsEdit->setObjectName(QStringLiteral("colorsEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, colorsEdit);

        descrLabel = new QLabel(SATDialogBase);
        descrLabel->setObjectName(QStringLiteral("descrLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, descrLabel);

        descrEdit = new QTextEdit(SATDialogBase);
        descrEdit->setObjectName(QStringLiteral("descrEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(descrEdit->sizePolicy().hasHeightForWidth());
        descrEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(5, QFormLayout::FieldRole, descrEdit);

        usageLabel = new QLabel(SATDialogBase);
        usageLabel->setObjectName(QStringLiteral("usageLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, usageLabel);

        usageEdit = new QTextEdit(SATDialogBase);
        usageEdit->setObjectName(QStringLiteral("usageEdit"));
        sizePolicy.setHeightForWidth(usageEdit->sizePolicy().hasHeightForWidth());
        usageEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(6, QFormLayout::FieldRole, usageEdit);

        authorLabel = new QLabel(SATDialogBase);
        authorLabel->setObjectName(QStringLiteral("authorLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, authorLabel);

        authorEdit = new QLineEdit(SATDialogBase);
        authorEdit->setObjectName(QStringLiteral("authorEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, authorEdit);

        emailLabel = new QLabel(SATDialogBase);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, emailLabel);

        emailEdit = new QLineEdit(SATDialogBase);
        emailEdit->setObjectName(QStringLiteral("emailEdit"));

        formLayout->setWidget(8, QFormLayout::FieldRole, emailEdit);

        buttonBox = new QDialogButtonBox(SATDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(9, QFormLayout::SpanningRole, buttonBox);


        retranslateUi(SATDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), SATDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SATDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(SATDialogBase);
    } // setupUi

    void retranslateUi(QDialog *SATDialogBase)
    {
        SATDialogBase->setWindowTitle(QApplication::translate("SATDialogBase", "Save as Template", 0));
        label->setText(QApplication::translate("SATDialogBase", "Name:", 0));
#ifndef QT_NO_TOOLTIP
        nameEdit->setToolTip(QApplication::translate("SATDialogBase", "Name of the document template", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        detailButton->setToolTip(QApplication::translate("SATDialogBase", "Show more details to describe the document template", 0));
#endif // QT_NO_TOOLTIP
        detailButton->setText(QApplication::translate("SATDialogBase", "&More Details", 0));
        catsLabel->setText(QApplication::translate("SATDialogBase", "Category:", 0));
#ifndef QT_NO_TOOLTIP
        catsCombo->setToolTip(QApplication::translate("SATDialogBase", "Category of the document template", 0));
#endif // QT_NO_TOOLTIP
        psizeLabel->setText(QApplication::translate("SATDialogBase", "Page Size:", 0));
#ifndef QT_NO_TOOLTIP
        psizeEdit->setToolTip(QApplication::translate("SATDialogBase", "Page size of the document template", 0));
#endif // QT_NO_TOOLTIP
        colorsLabel->setText(QApplication::translate("SATDialogBase", "Colors:", 0));
#ifndef QT_NO_TOOLTIP
        colorsEdit->setToolTip(QApplication::translate("SATDialogBase", "Description of the color format of the document, or some hints regarding colors used", 0));
#endif // QT_NO_TOOLTIP
        descrLabel->setText(QApplication::translate("SATDialogBase", "Description:", 0));
#ifndef QT_NO_TOOLTIP
        descrEdit->setToolTip(QApplication::translate("SATDialogBase", "Description of the document template", 0));
#endif // QT_NO_TOOLTIP
        usageLabel->setText(QApplication::translate("SATDialogBase", "Usage:", 0));
#ifndef QT_NO_TOOLTIP
        usageEdit->setToolTip(QApplication::translate("SATDialogBase", "Planned usage of the document template", 0));
#endif // QT_NO_TOOLTIP
        authorLabel->setText(QApplication::translate("SATDialogBase", "Author:", 0));
#ifndef QT_NO_TOOLTIP
        authorEdit->setToolTip(QApplication::translate("SATDialogBase", "Author of the document template", 0));
#endif // QT_NO_TOOLTIP
        emailLabel->setText(QApplication::translate("SATDialogBase", "Email:", 0));
#ifndef QT_NO_TOOLTIP
        emailEdit->setToolTip(QApplication::translate("SATDialogBase", "Email address of the author of the document template", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class SATDialogBase: public Ui_SATDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATDIALOG_H
