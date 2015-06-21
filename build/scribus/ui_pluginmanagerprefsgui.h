/********************************************************************************
** Form generated from reading UI file 'pluginmanagerprefsgui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINMANAGERPREFSGUI_H
#define UI_PLUGINMANAGERPREFSGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginManagerPrefsGui
{
public:
    QGridLayout *gridLayout;
    QGroupBox *plugGroupBox;
    QGridLayout *gridLayout1;
    QTableWidget *pluginTable;
    QLabel *restartLabel;

    void setupUi(QWidget *PluginManagerPrefsGui)
    {
        if (PluginManagerPrefsGui->objectName().isEmpty())
            PluginManagerPrefsGui->setObjectName(QStringLiteral("PluginManagerPrefsGui"));
        PluginManagerPrefsGui->resize(727, 300);
        gridLayout = new QGridLayout(PluginManagerPrefsGui);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plugGroupBox = new QGroupBox(PluginManagerPrefsGui);
        plugGroupBox->setObjectName(QStringLiteral("plugGroupBox"));
        gridLayout1 = new QGridLayout(plugGroupBox);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        pluginTable = new QTableWidget(plugGroupBox);
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

        gridLayout1->addWidget(pluginTable, 0, 0, 1, 1);

        restartLabel = new QLabel(plugGroupBox);
        restartLabel->setObjectName(QStringLiteral("restartLabel"));

        gridLayout1->addWidget(restartLabel, 1, 0, 1, 1);


        gridLayout->addWidget(plugGroupBox, 0, 0, 1, 1);


        retranslateUi(PluginManagerPrefsGui);

        QMetaObject::connectSlotsByName(PluginManagerPrefsGui);
    } // setupUi

    void retranslateUi(QWidget *PluginManagerPrefsGui)
    {
        PluginManagerPrefsGui->setWindowTitle(QApplication::translate("PluginManagerPrefsGui", "Form", 0));
        plugGroupBox->setTitle(QApplication::translate("PluginManagerPrefsGui", "Plugin Manager", 0));
        QTableWidgetItem *___qtablewidgetitem = pluginTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PluginManagerPrefsGui", "Plugin", 0));
        QTableWidgetItem *___qtablewidgetitem1 = pluginTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PluginManagerPrefsGui", "How to run", 0));
        QTableWidgetItem *___qtablewidgetitem2 = pluginTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PluginManagerPrefsGui", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem3 = pluginTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PluginManagerPrefsGui", "Load it?", 0));
        QTableWidgetItem *___qtablewidgetitem4 = pluginTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PluginManagerPrefsGui", "Plugin ID", 0));
        QTableWidgetItem *___qtablewidgetitem5 = pluginTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("PluginManagerPrefsGui", "File", 0));
        restartLabel->setText(QApplication::translate("PluginManagerPrefsGui", "You need to restart the application to apply the changes.", 0));
    } // retranslateUi

};

namespace Ui {
    class PluginManagerPrefsGui: public Ui_PluginManagerPrefsGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINMANAGERPREFSGUI_H
