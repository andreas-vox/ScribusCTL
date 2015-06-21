/********************************************************************************
** Form generated from reading UI file 'prefs_documentitemattributesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_DOCUMENTITEMATTRIBUTESBASE_H
#define UI_PREFS_DOCUMENTITEMATTRIBUTESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/sctablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_Prefs_DocumentItemAttributes
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QFrame *line;
    QGroupBox *attributesGroupBox;
    QVBoxLayout *vboxLayout1;
    ScTableWidget *attributesTable;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *addButton;
    QPushButton *copyButton;
    QPushButton *deleteButton;
    QPushButton *clearButton;

    void setupUi(QWidget *Prefs_DocumentItemAttributes)
    {
        if (Prefs_DocumentItemAttributes->objectName().isEmpty())
            Prefs_DocumentItemAttributes->setObjectName(QStringLiteral("Prefs_DocumentItemAttributes"));
        Prefs_DocumentItemAttributes->resize(758, 517);
        vboxLayout = new QVBoxLayout(Prefs_DocumentItemAttributes);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        label = new QLabel(Prefs_DocumentItemAttributes);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        vboxLayout->addWidget(label);

        line = new QFrame(Prefs_DocumentItemAttributes);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        attributesGroupBox = new QGroupBox(Prefs_DocumentItemAttributes);
        attributesGroupBox->setObjectName(QStringLiteral("attributesGroupBox"));
        vboxLayout1 = new QVBoxLayout(attributesGroupBox);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        attributesTable = new ScTableWidget(attributesGroupBox);
        if (attributesTable->columnCount() < 7)
            attributesTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        attributesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        attributesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        attributesTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        attributesTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        attributesTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        attributesTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        attributesTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        attributesTable->setObjectName(QStringLiteral("attributesTable"));

        vboxLayout1->addWidget(attributesTable);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(192, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        addButton = new QPushButton(attributesGroupBox);
        addButton->setObjectName(QStringLiteral("addButton"));

        hboxLayout->addWidget(addButton);

        copyButton = new QPushButton(attributesGroupBox);
        copyButton->setObjectName(QStringLiteral("copyButton"));

        hboxLayout->addWidget(copyButton);

        deleteButton = new QPushButton(attributesGroupBox);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        hboxLayout->addWidget(deleteButton);

        clearButton = new QPushButton(attributesGroupBox);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        hboxLayout->addWidget(clearButton);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addWidget(attributesGroupBox);


        retranslateUi(Prefs_DocumentItemAttributes);

        QMetaObject::connectSlotsByName(Prefs_DocumentItemAttributes);
    } // setupUi

    void retranslateUi(QWidget *Prefs_DocumentItemAttributes)
    {
        Prefs_DocumentItemAttributes->setWindowTitle(QApplication::translate("Prefs_DocumentItemAttributes", "Document Item Attributes", 0));
        label->setText(QApplication::translate("Prefs_DocumentItemAttributes", "Document Item Attributes", 0));
        attributesGroupBox->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = attributesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Prefs_DocumentItemAttributes", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = attributesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Prefs_DocumentItemAttributes", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem2 = attributesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Prefs_DocumentItemAttributes", "Value", 0));
        QTableWidgetItem *___qtablewidgetitem3 = attributesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Prefs_DocumentItemAttributes", "Parameter", 0));
        QTableWidgetItem *___qtablewidgetitem4 = attributesTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Prefs_DocumentItemAttributes", "Relationship", 0));
        QTableWidgetItem *___qtablewidgetitem5 = attributesTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Prefs_DocumentItemAttributes", "Relationship To", 0));
        QTableWidgetItem *___qtablewidgetitem6 = attributesTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Prefs_DocumentItemAttributes", "Auto Add To", 0));
        addButton->setText(QApplication::translate("Prefs_DocumentItemAttributes", "&Add", 0));
        addButton->setShortcut(QApplication::translate("Prefs_DocumentItemAttributes", "Alt+A", 0));
        copyButton->setText(QApplication::translate("Prefs_DocumentItemAttributes", "&Copy", 0));
        copyButton->setShortcut(QApplication::translate("Prefs_DocumentItemAttributes", "Alt+C", 0));
        deleteButton->setText(QApplication::translate("Prefs_DocumentItemAttributes", "&Delete", 0));
        deleteButton->setShortcut(QApplication::translate("Prefs_DocumentItemAttributes", "Alt+D", 0));
        clearButton->setText(QApplication::translate("Prefs_DocumentItemAttributes", "C&lear", 0));
        clearButton->setShortcut(QApplication::translate("Prefs_DocumentItemAttributes", "Alt+L", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_DocumentItemAttributes: public Ui_Prefs_DocumentItemAttributes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_DOCUMENTITEMATTRIBUTESBASE_H
