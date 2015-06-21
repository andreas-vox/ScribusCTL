/********************************************************************************
** Form generated from reading UI file 'latexeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LATEXEDITOR_H
#define UI_LATEXEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LatexEditor
{
public:
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *vboxLayout1;
    QLabel *label_5;
    QTextEdit *sourceTextEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *updatePushButton;
    QPushButton *revertPushButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QSpinBox *dpiSpinBox;
    QLabel *label;
    QComboBox *programComboBox;
    QCheckBox *preambleCheckBox;
    QFrame *line;
    QLabel *label_7;
    QTextEdit *messagesTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *externalEditorPushButton;
    QPushButton *killPushButton;
    QHBoxLayout *hboxLayout1;
    QLabel *statusLabel;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LatexEditor)
    {
        if (LatexEditor->objectName().isEmpty())
            LatexEditor->setObjectName(QStringLiteral("LatexEditor"));
        LatexEditor->resize(558, 393);
        vboxLayout = new QVBoxLayout(LatexEditor);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        splitter = new QSplitter(LatexEditor);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        vboxLayout1 = new QVBoxLayout(layoutWidget);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        vboxLayout1->addWidget(label_5);

        sourceTextEdit = new QTextEdit(layoutWidget);
        sourceTextEdit->setObjectName(QStringLiteral("sourceTextEdit"));

        vboxLayout1->addWidget(sourceTextEdit);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        updatePushButton = new QPushButton(layoutWidget);
        updatePushButton->setObjectName(QStringLiteral("updatePushButton"));

        hboxLayout->addWidget(updatePushButton);

        revertPushButton = new QPushButton(layoutWidget);
        revertPushButton->setObjectName(QStringLiteral("revertPushButton"));

        hboxLayout->addWidget(revertPushButton);


        vboxLayout1->addLayout(hboxLayout);

        splitter->addWidget(layoutWidget);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        dpiSpinBox = new QSpinBox(tab);
        dpiSpinBox->setObjectName(QStringLiteral("dpiSpinBox"));
        dpiSpinBox->setMaximum(10000);
        dpiSpinBox->setSingleStep(10);

        gridLayout->addWidget(dpiSpinBox, 0, 1, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        programComboBox = new QComboBox(tab);
        programComboBox->setObjectName(QStringLiteral("programComboBox"));

        gridLayout->addWidget(programComboBox, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        preambleCheckBox = new QCheckBox(tab);
        preambleCheckBox->setObjectName(QStringLiteral("preambleCheckBox"));

        verticalLayout->addWidget(preambleCheckBox);

        line = new QFrame(tab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        messagesTextEdit = new QTextEdit(tab);
        messagesTextEdit->setObjectName(QStringLiteral("messagesTextEdit"));
        messagesTextEdit->setEnabled(true);
        messagesTextEdit->setUndoRedoEnabled(false);
        messagesTextEdit->setLineWrapMode(QTextEdit::NoWrap);
        messagesTextEdit->setReadOnly(true);

        verticalLayout->addWidget(messagesTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        externalEditorPushButton = new QPushButton(tab);
        externalEditorPushButton->setObjectName(QStringLiteral("externalEditorPushButton"));

        horizontalLayout->addWidget(externalEditorPushButton);

        killPushButton = new QPushButton(tab);
        killPushButton->setObjectName(QStringLiteral("killPushButton"));
        killPushButton->setEnabled(false);

        horizontalLayout->addWidget(killPushButton);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget->addTab(tab, QString());
        splitter->addWidget(tabWidget);

        vboxLayout->addWidget(splitter);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        statusLabel = new QLabel(LatexEditor);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        hboxLayout1->addWidget(statusLabel);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(LatexEditor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout1->addWidget(buttonBox);


        vboxLayout->addLayout(hboxLayout1);

        QWidget::setTabOrder(sourceTextEdit, buttonBox);
        QWidget::setTabOrder(buttonBox, updatePushButton);
        QWidget::setTabOrder(updatePushButton, revertPushButton);
        QWidget::setTabOrder(revertPushButton, tabWidget);
        QWidget::setTabOrder(tabWidget, dpiSpinBox);
        QWidget::setTabOrder(dpiSpinBox, programComboBox);
        QWidget::setTabOrder(programComboBox, preambleCheckBox);
        QWidget::setTabOrder(preambleCheckBox, messagesTextEdit);
        QWidget::setTabOrder(messagesTextEdit, externalEditorPushButton);
        QWidget::setTabOrder(externalEditorPushButton, killPushButton);

        retranslateUi(LatexEditor);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LatexEditor);
    } // setupUi

    void retranslateUi(QDialog *LatexEditor)
    {
        LatexEditor->setWindowTitle(QApplication::translate("LatexEditor", "Editor", 0));
        label_5->setText(QApplication::translate("LatexEditor", "Enter Code:", 0));
        updatePushButton->setText(QApplication::translate("LatexEditor", "Update", 0));
        revertPushButton->setText(QApplication::translate("LatexEditor", "Revert", 0));
        label_6->setText(QApplication::translate("LatexEditor", "Resolution:", 0));
        dpiSpinBox->setSpecialValueText(QApplication::translate("LatexEditor", "Automatic", 0));
        dpiSpinBox->setSuffix(QApplication::translate("LatexEditor", " DPI", 0));
        label->setText(QApplication::translate("LatexEditor", "Program:", 0));
        preambleCheckBox->setText(QApplication::translate("LatexEditor", "Use Preamble", 0));
        label_7->setText(QApplication::translate("LatexEditor", "Program Messages:", 0));
        externalEditorPushButton->setText(QApplication::translate("LatexEditor", "Run External Editor...", 0));
        killPushButton->setText(QApplication::translate("LatexEditor", "Kill Program", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("LatexEditor", "Options", 0));
        statusLabel->setText(QApplication::translate("LatexEditor", "Status: Unknown", 0));
    } // retranslateUi

};

namespace Ui {
    class LatexEditor: public Ui_LatexEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LATEXEDITOR_H
