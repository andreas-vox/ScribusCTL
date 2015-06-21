/********************************************************************************
** Form generated from reading UI file 'unicodesearch.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNICODESEARCH_H
#define UI_UNICODESEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_UnicodeSearch
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLineEdit *searchEdit;
    QTableView *tableView;

    void setupUi(QDialog *UnicodeSearch)
    {
        if (UnicodeSearch->objectName().isEmpty())
            UnicodeSearch->setObjectName(QStringLiteral("UnicodeSearch"));
        UnicodeSearch->resize(369, 208);
        gridLayout = new QGridLayout(UnicodeSearch);
        gridLayout->setSpacing(1);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textLabel1 = new QLabel(UnicodeSearch);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        searchEdit = new QLineEdit(UnicodeSearch);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));

        gridLayout->addWidget(searchEdit, 0, 1, 1, 1);

        tableView = new QTableView(UnicodeSearch);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(tableView, 1, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        textLabel1->setBuddy(searchEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(UnicodeSearch);

        QMetaObject::connectSlotsByName(UnicodeSearch);
    } // setupUi

    void retranslateUi(QDialog *UnicodeSearch)
    {
        UnicodeSearch->setWindowTitle(QApplication::translate("UnicodeSearch", "Unicode Search", 0));
        textLabel1->setText(QApplication::translate("UnicodeSearch", "&Search:", 0));
#ifndef QT_NO_TOOLTIP
        searchEdit->setToolTip(QApplication::translate("UnicodeSearch", "Enter the search phrase. Then press Enter.", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class UnicodeSearch: public Ui_UnicodeSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNICODESEARCH_H
