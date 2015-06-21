/********************************************************************************
** Form generated from reading UI file 'prefs_documentsectionsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_DOCUMENTSECTIONSBASE_H
#define UI_PREFS_DOCUMENTSECTIONSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/sctablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_Prefs_DocumentSections
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *titleLabel;
    QFrame *line;
    ScTableWidget *sectionsTable;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *addButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *Prefs_DocumentSections)
    {
        if (Prefs_DocumentSections->objectName().isEmpty())
            Prefs_DocumentSections->setObjectName(QStringLiteral("Prefs_DocumentSections"));
        Prefs_DocumentSections->resize(694, 308);
        vboxLayout = new QVBoxLayout(Prefs_DocumentSections);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        titleLabel = new QLabel(Prefs_DocumentSections);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);

        vboxLayout->addWidget(titleLabel);

        line = new QFrame(Prefs_DocumentSections);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        sectionsTable = new ScTableWidget(Prefs_DocumentSections);
        if (sectionsTable->columnCount() < 9)
            sectionsTable->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        sectionsTable->setObjectName(QStringLiteral("sectionsTable"));
        sectionsTable->setProperty("numRows", QVariant(0));
        sectionsTable->setProperty("numCols", QVariant(6));

        vboxLayout->addWidget(sectionsTable);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(192, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        addButton = new QPushButton(Prefs_DocumentSections);
        addButton->setObjectName(QStringLiteral("addButton"));

        hboxLayout->addWidget(addButton);

        deleteButton = new QPushButton(Prefs_DocumentSections);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        hboxLayout->addWidget(deleteButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(Prefs_DocumentSections);

        QMetaObject::connectSlotsByName(Prefs_DocumentSections);
    } // setupUi

    void retranslateUi(QWidget *Prefs_DocumentSections)
    {
        Prefs_DocumentSections->setWindowTitle(QApplication::translate("Prefs_DocumentSections", "Document Sections", 0));
        titleLabel->setText(QApplication::translate("Prefs_DocumentSections", "Document Sections", 0));
        QTableWidgetItem *___qtablewidgetitem = sectionsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Prefs_DocumentSections", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = sectionsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Prefs_DocumentSections", "Shown", 0));
        QTableWidgetItem *___qtablewidgetitem2 = sectionsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Prefs_DocumentSections", "Reversed", 0));
        QTableWidgetItem *___qtablewidgetitem3 = sectionsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Prefs_DocumentSections", "From", 0));
        QTableWidgetItem *___qtablewidgetitem4 = sectionsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Prefs_DocumentSections", "To", 0));
        QTableWidgetItem *___qtablewidgetitem5 = sectionsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Prefs_DocumentSections", "Style", 0));
        QTableWidgetItem *___qtablewidgetitem6 = sectionsTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Prefs_DocumentSections", "Start", 0));
        QTableWidgetItem *___qtablewidgetitem7 = sectionsTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Prefs_DocumentSections", "Field Width", 0));
        QTableWidgetItem *___qtablewidgetitem8 = sectionsTable->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Prefs_DocumentSections", "Fill Character", 0));
        addButton->setText(QApplication::translate("Prefs_DocumentSections", "&Add", 0));
        addButton->setShortcut(QApplication::translate("Prefs_DocumentSections", "Alt+A", 0));
        deleteButton->setText(QApplication::translate("Prefs_DocumentSections", "&Delete", 0));
        deleteButton->setShortcut(QApplication::translate("Prefs_DocumentSections", "Alt+D", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_DocumentSections: public Ui_Prefs_DocumentSections {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_DOCUMENTSECTIONSBASE_H
