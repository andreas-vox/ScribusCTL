/********************************************************************************
** Form generated from reading UI file 'pagepalette_masterpagesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEPALETTE_MASTERPAGESBASE_H
#define UI_PAGEPALETTE_MASTERPAGESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PagePalette_MasterPagesBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *buttonLayout;
    QToolButton *newButton;
    QToolButton *importButton;
    QToolButton *duplicateButton;
    QToolButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QListWidget *masterPageListBox;
    QPushButton *finishButton;

    void setupUi(QWidget *PagePalette_MasterPagesBase)
    {
        if (PagePalette_MasterPagesBase->objectName().isEmpty())
            PagePalette_MasterPagesBase->setObjectName(QStringLiteral("PagePalette_MasterPagesBase"));
        PagePalette_MasterPagesBase->resize(301, 320);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PagePalette_MasterPagesBase->sizePolicy().hasHeightForWidth());
        PagePalette_MasterPagesBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(PagePalette_MasterPagesBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        newButton = new QToolButton(PagePalette_MasterPagesBase);
        newButton->setObjectName(QStringLiteral("newButton"));

        buttonLayout->addWidget(newButton);

        importButton = new QToolButton(PagePalette_MasterPagesBase);
        importButton->setObjectName(QStringLiteral("importButton"));

        buttonLayout->addWidget(importButton);

        duplicateButton = new QToolButton(PagePalette_MasterPagesBase);
        duplicateButton->setObjectName(QStringLiteral("duplicateButton"));

        buttonLayout->addWidget(duplicateButton);

        deleteButton = new QToolButton(PagePalette_MasterPagesBase);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        buttonLayout->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(buttonLayout);

        masterPageListBox = new QListWidget(PagePalette_MasterPagesBase);
        masterPageListBox->setObjectName(QStringLiteral("masterPageListBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(masterPageListBox->sizePolicy().hasHeightForWidth());
        masterPageListBox->setSizePolicy(sizePolicy1);
        masterPageListBox->setMinimumSize(QSize(0, 16));

        verticalLayout->addWidget(masterPageListBox);

        finishButton = new QPushButton(PagePalette_MasterPagesBase);
        finishButton->setObjectName(QStringLiteral("finishButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(finishButton->sizePolicy().hasHeightForWidth());
        finishButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(finishButton);


        retranslateUi(PagePalette_MasterPagesBase);

        QMetaObject::connectSlotsByName(PagePalette_MasterPagesBase);
    } // setupUi

    void retranslateUi(QWidget *PagePalette_MasterPagesBase)
    {
        PagePalette_MasterPagesBase->setWindowTitle(QApplication::translate("PagePalette_MasterPagesBase", "Form", 0));
        newButton->setText(QString());
        importButton->setText(QString());
        duplicateButton->setText(QString());
        deleteButton->setText(QString());
        finishButton->setText(QApplication::translate("PagePalette_MasterPagesBase", "<<< Return to Normal Page Mode", 0));
    } // retranslateUi

};

namespace Ui {
    class PagePalette_MasterPagesBase: public Ui_PagePalette_MasterPagesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEPALETTE_MASTERPAGESBASE_H
