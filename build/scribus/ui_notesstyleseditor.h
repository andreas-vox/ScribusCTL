/********************************************************************************
** Form generated from reading UI file 'notesstyleseditor.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTESSTYLESEDITOR_H
#define UI_NOTESSTYLESEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "ui/spalette.h"

QT_BEGIN_NAMESPACE

class Ui_NotesStylesEditor
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QComboBox *NSlistBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *NewButton;
    QFormLayout *formLayout;
    QLabel *NewNameLabel;
    QLineEdit *NewNameEdit;
    QRadioButton *FootRadio;
    QRadioButton *EndRadio;
    QLabel *NumberingLabel;
    QComboBox *NumberingBox;
    QLabel *RangeLabel;
    QComboBox *RangeBox;
    QLabel *StartLabel;
    QSpinBox *StartSpinBox;
    QLabel *PrefixLabel;
    QLineEdit *PrefixEdit;
    QLabel *SuffixLabel;
    QLineEdit *SuffixEdit;
    QCheckBox *SuperMasterCheck;
    QLabel *SuperMasterLabel;
    QCheckBox *SuperNoteCheck;
    QLabel *SuperNoteLabel;
    QLabel *charStyleComboLabel;
    CharStyleComboBox *charStyleCombo;
    QLabel *paraStyleComboLabel;
    ParaStyleComboBox *paraStyleCombo;
    QCheckBox *AutoH;
    QLabel *AutoHLabel;
    QCheckBox *AutoW;
    QLabel *AutoWLabel;
    QCheckBox *AutoWeld;
    QLabel *AutoWeldLabel;
    QCheckBox *AutoRemove;
    QLabel *AutoRemoveLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *ApplyButton;
    QPushButton *DeleteButton;
    QPushButton *OKButton;

    void setupUi(QDialog *NotesStylesEditor)
    {
        if (NotesStylesEditor->objectName().isEmpty())
            NotesStylesEditor->setObjectName(QStringLiteral("NotesStylesEditor"));
        NotesStylesEditor->resize(324, 576);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NotesStylesEditor->sizePolicy().hasHeightForWidth());
        NotesStylesEditor->setSizePolicy(sizePolicy);
        NotesStylesEditor->setMinimumSize(QSize(280, 360));
        gridLayout = new QGridLayout(NotesStylesEditor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        NSlistBox = new QComboBox(NotesStylesEditor);
        NSlistBox->setObjectName(QStringLiteral("NSlistBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(NSlistBox->sizePolicy().hasHeightForWidth());
        NSlistBox->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(NSlistBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        NewButton = new QPushButton(NotesStylesEditor);
        NewButton->setObjectName(QStringLiteral("NewButton"));

        horizontalLayout_2->addWidget(NewButton);


        verticalLayout->addLayout(horizontalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        NewNameLabel = new QLabel(NotesStylesEditor);
        NewNameLabel->setObjectName(QStringLiteral("NewNameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, NewNameLabel);

        NewNameEdit = new QLineEdit(NotesStylesEditor);
        NewNameEdit->setObjectName(QStringLiteral("NewNameEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, NewNameEdit);

        FootRadio = new QRadioButton(NotesStylesEditor);
        FootRadio->setObjectName(QStringLiteral("FootRadio"));
        sizePolicy1.setHeightForWidth(FootRadio->sizePolicy().hasHeightForWidth());
        FootRadio->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::LabelRole, FootRadio);

        EndRadio = new QRadioButton(NotesStylesEditor);
        EndRadio->setObjectName(QStringLiteral("EndRadio"));
        sizePolicy1.setHeightForWidth(EndRadio->sizePolicy().hasHeightForWidth());
        EndRadio->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::FieldRole, EndRadio);

        NumberingLabel = new QLabel(NotesStylesEditor);
        NumberingLabel->setObjectName(QStringLiteral("NumberingLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, NumberingLabel);

        NumberingBox = new QComboBox(NotesStylesEditor);
        NumberingBox->setObjectName(QStringLiteral("NumberingBox"));
        sizePolicy1.setHeightForWidth(NumberingBox->sizePolicy().hasHeightForWidth());
        NumberingBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::FieldRole, NumberingBox);

        RangeLabel = new QLabel(NotesStylesEditor);
        RangeLabel->setObjectName(QStringLiteral("RangeLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, RangeLabel);

        RangeBox = new QComboBox(NotesStylesEditor);
        RangeBox->setObjectName(QStringLiteral("RangeBox"));
        sizePolicy1.setHeightForWidth(RangeBox->sizePolicy().hasHeightForWidth());
        RangeBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(3, QFormLayout::FieldRole, RangeBox);

        StartLabel = new QLabel(NotesStylesEditor);
        StartLabel->setObjectName(QStringLiteral("StartLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, StartLabel);

        StartSpinBox = new QSpinBox(NotesStylesEditor);
        StartSpinBox->setObjectName(QStringLiteral("StartSpinBox"));
        sizePolicy1.setHeightForWidth(StartSpinBox->sizePolicy().hasHeightForWidth());
        StartSpinBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::FieldRole, StartSpinBox);

        PrefixLabel = new QLabel(NotesStylesEditor);
        PrefixLabel->setObjectName(QStringLiteral("PrefixLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, PrefixLabel);

        PrefixEdit = new QLineEdit(NotesStylesEditor);
        PrefixEdit->setObjectName(QStringLiteral("PrefixEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, PrefixEdit);

        SuffixLabel = new QLabel(NotesStylesEditor);
        SuffixLabel->setObjectName(QStringLiteral("SuffixLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, SuffixLabel);

        SuffixEdit = new QLineEdit(NotesStylesEditor);
        SuffixEdit->setObjectName(QStringLiteral("SuffixEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, SuffixEdit);

        SuperMasterCheck = new QCheckBox(NotesStylesEditor);
        SuperMasterCheck->setObjectName(QStringLiteral("SuperMasterCheck"));

        formLayout->setWidget(7, QFormLayout::LabelRole, SuperMasterCheck);

        SuperMasterLabel = new QLabel(NotesStylesEditor);
        SuperMasterLabel->setObjectName(QStringLiteral("SuperMasterLabel"));

        formLayout->setWidget(7, QFormLayout::FieldRole, SuperMasterLabel);

        SuperNoteCheck = new QCheckBox(NotesStylesEditor);
        SuperNoteCheck->setObjectName(QStringLiteral("SuperNoteCheck"));

        formLayout->setWidget(8, QFormLayout::LabelRole, SuperNoteCheck);

        SuperNoteLabel = new QLabel(NotesStylesEditor);
        SuperNoteLabel->setObjectName(QStringLiteral("SuperNoteLabel"));

        formLayout->setWidget(8, QFormLayout::FieldRole, SuperNoteLabel);

        charStyleComboLabel = new QLabel(NotesStylesEditor);
        charStyleComboLabel->setObjectName(QStringLiteral("charStyleComboLabel"));
        charStyleComboLabel->setLineWidth(2);
        charStyleComboLabel->setTextFormat(Qt::RichText);

        formLayout->setWidget(9, QFormLayout::LabelRole, charStyleComboLabel);

        charStyleCombo = new CharStyleComboBox(NotesStylesEditor);
        charStyleCombo->setObjectName(QStringLiteral("charStyleCombo"));
        sizePolicy1.setHeightForWidth(charStyleCombo->sizePolicy().hasHeightForWidth());
        charStyleCombo->setSizePolicy(sizePolicy1);

        formLayout->setWidget(9, QFormLayout::FieldRole, charStyleCombo);

        paraStyleComboLabel = new QLabel(NotesStylesEditor);
        paraStyleComboLabel->setObjectName(QStringLiteral("paraStyleComboLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, paraStyleComboLabel);

        paraStyleCombo = new ParaStyleComboBox(NotesStylesEditor);
        paraStyleCombo->setObjectName(QStringLiteral("paraStyleCombo"));
        sizePolicy1.setHeightForWidth(paraStyleCombo->sizePolicy().hasHeightForWidth());
        paraStyleCombo->setSizePolicy(sizePolicy1);

        formLayout->setWidget(10, QFormLayout::FieldRole, paraStyleCombo);

        AutoH = new QCheckBox(NotesStylesEditor);
        AutoH->setObjectName(QStringLiteral("AutoH"));

        formLayout->setWidget(11, QFormLayout::LabelRole, AutoH);

        AutoHLabel = new QLabel(NotesStylesEditor);
        AutoHLabel->setObjectName(QStringLiteral("AutoHLabel"));

        formLayout->setWidget(11, QFormLayout::FieldRole, AutoHLabel);

        AutoW = new QCheckBox(NotesStylesEditor);
        AutoW->setObjectName(QStringLiteral("AutoW"));

        formLayout->setWidget(12, QFormLayout::LabelRole, AutoW);

        AutoWLabel = new QLabel(NotesStylesEditor);
        AutoWLabel->setObjectName(QStringLiteral("AutoWLabel"));

        formLayout->setWidget(12, QFormLayout::FieldRole, AutoWLabel);

        AutoWeld = new QCheckBox(NotesStylesEditor);
        AutoWeld->setObjectName(QStringLiteral("AutoWeld"));

        formLayout->setWidget(13, QFormLayout::LabelRole, AutoWeld);

        AutoWeldLabel = new QLabel(NotesStylesEditor);
        AutoWeldLabel->setObjectName(QStringLiteral("AutoWeldLabel"));

        formLayout->setWidget(13, QFormLayout::FieldRole, AutoWeldLabel);

        AutoRemove = new QCheckBox(NotesStylesEditor);
        AutoRemove->setObjectName(QStringLiteral("AutoRemove"));

        formLayout->setWidget(14, QFormLayout::LabelRole, AutoRemove);

        AutoRemoveLabel = new QLabel(NotesStylesEditor);
        AutoRemoveLabel->setObjectName(QStringLiteral("AutoRemoveLabel"));

        formLayout->setWidget(14, QFormLayout::FieldRole, AutoRemoveLabel);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ApplyButton = new QPushButton(NotesStylesEditor);
        ApplyButton->setObjectName(QStringLiteral("ApplyButton"));
        sizePolicy1.setHeightForWidth(ApplyButton->sizePolicy().hasHeightForWidth());
        ApplyButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(ApplyButton);

        DeleteButton = new QPushButton(NotesStylesEditor);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        sizePolicy1.setHeightForWidth(DeleteButton->sizePolicy().hasHeightForWidth());
        DeleteButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(DeleteButton);

        OKButton = new QPushButton(NotesStylesEditor);
        OKButton->setObjectName(QStringLiteral("OKButton"));
        sizePolicy1.setHeightForWidth(OKButton->sizePolicy().hasHeightForWidth());
        OKButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(OKButton);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(NotesStylesEditor);

        QMetaObject::connectSlotsByName(NotesStylesEditor);
    } // setupUi

    void retranslateUi(QDialog *NotesStylesEditor)
    {
        NotesStylesEditor->setWindowTitle(QApplication::translate("NotesStylesEditor", "Notes Styles Editor", 0));
        NewButton->setText(QApplication::translate("NotesStylesEditor", "Add New Style", 0));
        NewNameLabel->setText(QApplication::translate("NotesStylesEditor", "New Style Name", 0));
        FootRadio->setText(QApplication::translate("NotesStylesEditor", "Footnotes", 0));
        EndRadio->setText(QApplication::translate("NotesStylesEditor", "Endnotes", 0));
        NumberingLabel->setText(QApplication::translate("NotesStylesEditor", "Numbering", 0));
        RangeLabel->setText(QApplication::translate("NotesStylesEditor", "Range", 0));
        StartLabel->setText(QApplication::translate("NotesStylesEditor", "Start Number", 0));
        PrefixLabel->setText(QApplication::translate("NotesStylesEditor", "Prefix", 0));
        SuffixLabel->setText(QApplication::translate("NotesStylesEditor", "Suffix", 0));
        SuperMasterCheck->setText(QString());
        SuperMasterLabel->setText(QApplication::translate("NotesStylesEditor", "Superscript in text", 0));
        SuperNoteCheck->setText(QString());
        SuperNoteLabel->setText(QApplication::translate("NotesStylesEditor", "Superscript in notes", 0));
        charStyleComboLabel->setText(QApplication::translate("NotesStylesEditor", "Mark Character Style", 0));
        paraStyleComboLabel->setText(QApplication::translate("NotesStylesEditor", "Note Paragraph Style", 0));
        AutoH->setText(QString());
        AutoHLabel->setText(QApplication::translate("NotesStylesEditor", "Auto Height", 0));
        AutoW->setText(QString());
        AutoWLabel->setText(QApplication::translate("NotesStylesEditor", "Auto Width", 0));
        AutoWeld->setText(QString());
        AutoWeldLabel->setText(QApplication::translate("NotesStylesEditor", "Auto Welding", 0));
        AutoRemove->setText(QString());
        AutoRemoveLabel->setText(QApplication::translate("NotesStylesEditor", "Remove if empty", 0));
        ApplyButton->setText(QApplication::translate("NotesStylesEditor", "Apply", 0));
        DeleteButton->setText(QApplication::translate("NotesStylesEditor", "Delete", 0));
        OKButton->setText(QApplication::translate("NotesStylesEditor", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class NotesStylesEditor: public Ui_NotesStylesEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTESSTYLESEDITOR_H
