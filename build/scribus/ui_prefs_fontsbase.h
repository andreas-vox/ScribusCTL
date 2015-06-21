/********************************************************************************
** Form generated from reading UI file 'prefs_fontsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_FONTSBASE_H
#define UI_PREFS_FONTSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/fontlistview.h"

QT_BEGIN_NAMESPACE

class Ui_Prefs_Fonts
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *availableFontsTab;
    QVBoxLayout *verticalLayout_2;
    FontListView *fontListTableView;
    QWidget *fontSubstitutionsTab;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *fontSubstitutionsTableWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *deleteSubstitutionButton;
    QWidget *additionalPathsTab;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *pathListWidget;
    QVBoxLayout *verticalLayout_4;
    QPushButton *changeButton;
    QPushButton *addButton;
    QPushButton *removeButton;
    QSpacerItem *additionalPathsButtonsVerticalSpacer;
    QLabel *whyBlankLabel;
    QSpacerItem *additionalPathsLabelVerticalSpacer;

    void setupUi(QWidget *Prefs_Fonts)
    {
        if (Prefs_Fonts->objectName().isEmpty())
            Prefs_Fonts->setObjectName(QStringLiteral("Prefs_Fonts"));
        Prefs_Fonts->resize(509, 426);
        verticalLayout = new QVBoxLayout(Prefs_Fonts);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Prefs_Fonts);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line = new QFrame(Prefs_Fonts);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        tabWidget = new QTabWidget(Prefs_Fonts);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        availableFontsTab = new QWidget();
        availableFontsTab->setObjectName(QStringLiteral("availableFontsTab"));
        verticalLayout_2 = new QVBoxLayout(availableFontsTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 6, 10, 10);
        fontListTableView = new FontListView(availableFontsTab);
        fontListTableView->setObjectName(QStringLiteral("fontListTableView"));

        verticalLayout_2->addWidget(fontListTableView);

        tabWidget->addTab(availableFontsTab, QString());
        fontSubstitutionsTab = new QWidget();
        fontSubstitutionsTab->setObjectName(QStringLiteral("fontSubstitutionsTab"));
        verticalLayout_3 = new QVBoxLayout(fontSubstitutionsTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 6, 10, 10);
        fontSubstitutionsTableWidget = new QTableWidget(fontSubstitutionsTab);
        fontSubstitutionsTableWidget->setObjectName(QStringLiteral("fontSubstitutionsTableWidget"));

        verticalLayout_3->addWidget(fontSubstitutionsTableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        deleteSubstitutionButton = new QPushButton(fontSubstitutionsTab);
        deleteSubstitutionButton->setObjectName(QStringLiteral("deleteSubstitutionButton"));

        horizontalLayout->addWidget(deleteSubstitutionButton);


        verticalLayout_3->addLayout(horizontalLayout);

        tabWidget->addTab(fontSubstitutionsTab, QString());
        additionalPathsTab = new QWidget();
        additionalPathsTab->setObjectName(QStringLiteral("additionalPathsTab"));
        verticalLayout_5 = new QVBoxLayout(additionalPathsTab);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pathListWidget = new QListWidget(additionalPathsTab);
        pathListWidget->setObjectName(QStringLiteral("pathListWidget"));

        horizontalLayout_2->addWidget(pathListWidget);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        changeButton = new QPushButton(additionalPathsTab);
        changeButton->setObjectName(QStringLiteral("changeButton"));

        verticalLayout_4->addWidget(changeButton);

        addButton = new QPushButton(additionalPathsTab);
        addButton->setObjectName(QStringLiteral("addButton"));

        verticalLayout_4->addWidget(addButton);

        removeButton = new QPushButton(additionalPathsTab);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        verticalLayout_4->addWidget(removeButton);

        additionalPathsButtonsVerticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(additionalPathsButtonsVerticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        whyBlankLabel = new QLabel(additionalPathsTab);
        whyBlankLabel->setObjectName(QStringLiteral("whyBlankLabel"));
        whyBlankLabel->setWordWrap(true);

        verticalLayout_5->addWidget(whyBlankLabel);

        additionalPathsLabelVerticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_5->addItem(additionalPathsLabelVerticalSpacer);

        tabWidget->addTab(additionalPathsTab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Prefs_Fonts);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Prefs_Fonts);
    } // setupUi

    void retranslateUi(QWidget *Prefs_Fonts)
    {
        Prefs_Fonts->setWindowTitle(QApplication::translate("Prefs_Fonts", "Form", 0));
        label->setText(QApplication::translate("Prefs_Fonts", "Fonts", 0));
        tabWidget->setTabText(tabWidget->indexOf(availableFontsTab), QApplication::translate("Prefs_Fonts", "Available Fonts", 0));
        deleteSubstitutionButton->setText(QApplication::translate("Prefs_Fonts", "Delete", 0));
        tabWidget->setTabText(tabWidget->indexOf(fontSubstitutionsTab), QApplication::translate("Prefs_Fonts", "Font Substitutions", 0));
        changeButton->setText(QApplication::translate("Prefs_Fonts", "C&hange...", 0));
        addButton->setText(QApplication::translate("Prefs_Fonts", "A&dd...", 0));
        removeButton->setText(QApplication::translate("Prefs_Fonts", "&Remove", 0));
        whyBlankLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(additionalPathsTab), QApplication::translate("Prefs_Fonts", "Additional Paths", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_Fonts: public Ui_Prefs_Fonts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_FONTSBASE_H
