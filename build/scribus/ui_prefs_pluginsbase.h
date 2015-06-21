/********************************************************************************
** Form generated from reading UI file 'prefs_pluginsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_PLUGINSBASE_H
#define UI_PREFS_PLUGINSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_Plugins
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QFrame *line;
    QTableWidget *pluginTable;
    QLabel *restartLabel;

    void setupUi(QWidget *Prefs_Plugins)
    {
        if (Prefs_Plugins->objectName().isEmpty())
            Prefs_Plugins->setObjectName(QStringLiteral("Prefs_Plugins"));
        Prefs_Plugins->resize(726, 429);
        verticalLayout = new QVBoxLayout(Prefs_Plugins);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(Prefs_Plugins);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        line = new QFrame(Prefs_Plugins);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        pluginTable = new QTableWidget(Prefs_Plugins);
        if (pluginTable->columnCount() < 6)
            pluginTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        pluginTable->setObjectName(QStringLiteral("pluginTable"));
        pluginTable->setAlternatingRowColors(true);
        pluginTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        pluginTable->setColumnCount(6);

        verticalLayout->addWidget(pluginTable);

        restartLabel = new QLabel(Prefs_Plugins);
        restartLabel->setObjectName(QStringLiteral("restartLabel"));

        verticalLayout->addWidget(restartLabel);


        retranslateUi(Prefs_Plugins);

        QMetaObject::connectSlotsByName(Prefs_Plugins);
    } // setupUi

    void retranslateUi(QWidget *Prefs_Plugins)
    {
        Prefs_Plugins->setWindowTitle(QApplication::translate("Prefs_Plugins", "Form", 0));
        label_2->setText(QApplication::translate("Prefs_Plugins", "Plugins", 0));
        QTableWidgetItem *___qtablewidgetitem = pluginTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Prefs_Plugins", "Plugin", 0));
        QTableWidgetItem *___qtablewidgetitem1 = pluginTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Prefs_Plugins", "How to run", 0));
        QTableWidgetItem *___qtablewidgetitem2 = pluginTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Prefs_Plugins", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem3 = pluginTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Prefs_Plugins", "Load it?", 0));
        QTableWidgetItem *___qtablewidgetitem4 = pluginTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Prefs_Plugins", "Plugin ID", 0));
        QTableWidgetItem *___qtablewidgetitem5 = pluginTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Prefs_Plugins", "File", 0));
        restartLabel->setText(QApplication::translate("Prefs_Plugins", "You need to restart the application to apply the changes.", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_Plugins: public Ui_Prefs_Plugins {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_PLUGINSBASE_H
