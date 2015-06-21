/********************************************************************************
** Form generated from reading UI file 'prefs_keyboardshortcutsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_KEYBOARDSHORTCUTSBASE_H
#define UI_PREFS_KEYBOARDSHORTCUTSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_KeyboardShortcuts
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *hboxLayout;
    QPushButton *clearSearchButton;
    QLabel *textLabel2;
    QLineEdit *searchTextLineEdit;
    QTreeWidget *keyTable;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *noKey;
    QRadioButton *userDef;
    QSpacerItem *spacerItem;
    QPushButton *setKeyButton;
    QLabel *keyDisplay;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *loadableSets;
    QPushButton *loadSetButton;
    QSpacerItem *spacerItem1;
    QPushButton *importSetButton;
    QPushButton *exportSetButton;
    QSpacerItem *spacerItem2;
    QPushButton *resetSetButton;

    void setupUi(QWidget *Prefs_KeyboardShortcuts)
    {
        if (Prefs_KeyboardShortcuts->objectName().isEmpty())
            Prefs_KeyboardShortcuts->setObjectName(QStringLiteral("Prefs_KeyboardShortcuts"));
        Prefs_KeyboardShortcuts->resize(815, 572);
        verticalLayout = new QVBoxLayout(Prefs_KeyboardShortcuts);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Prefs_KeyboardShortcuts);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line = new QFrame(Prefs_KeyboardShortcuts);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        scrollArea = new QScrollArea(Prefs_KeyboardShortcuts);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 787, 501));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        clearSearchButton = new QPushButton(scrollAreaWidgetContents);
        clearSearchButton->setObjectName(QStringLiteral("clearSearchButton"));

        hboxLayout->addWidget(clearSearchButton);

        textLabel2 = new QLabel(scrollAreaWidgetContents);
        textLabel2->setObjectName(QStringLiteral("textLabel2"));
        textLabel2->setWordWrap(false);

        hboxLayout->addWidget(textLabel2);

        searchTextLineEdit = new QLineEdit(scrollAreaWidgetContents);
        searchTextLineEdit->setObjectName(QStringLiteral("searchTextLineEdit"));

        hboxLayout->addWidget(searchTextLineEdit);


        verticalLayout_2->addLayout(hboxLayout);

        keyTable = new QTreeWidget(scrollAreaWidgetContents);
        keyTable->setObjectName(QStringLiteral("keyTable"));

        verticalLayout_2->addWidget(keyTable);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);

        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        noKey = new QRadioButton(scrollAreaWidgetContents);
        noKey->setObjectName(QStringLiteral("noKey"));

        horizontalLayout->addWidget(noKey);

        userDef = new QRadioButton(scrollAreaWidgetContents);
        userDef->setObjectName(QStringLiteral("userDef"));

        horizontalLayout->addWidget(userDef);

        spacerItem = new QSpacerItem(158, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);

        setKeyButton = new QPushButton(scrollAreaWidgetContents);
        setKeyButton->setObjectName(QStringLiteral("setKeyButton"));
        setKeyButton->setCheckable(true);

        horizontalLayout->addWidget(setKeyButton);

        keyDisplay = new QLabel(scrollAreaWidgetContents);
        keyDisplay->setObjectName(QStringLiteral("keyDisplay"));
        keyDisplay->setFrameShape(QFrame::Panel);
        keyDisplay->setFrameShadow(QFrame::Sunken);
        keyDisplay->setAlignment(Qt::AlignCenter);
        keyDisplay->setWordWrap(false);

        horizontalLayout->addWidget(keyDisplay);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4);

        line_4 = new QFrame(scrollAreaWidgetContents);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        loadableSets = new QComboBox(scrollAreaWidgetContents);
        loadableSets->setObjectName(QStringLiteral("loadableSets"));

        horizontalLayout_2->addWidget(loadableSets);

        loadSetButton = new QPushButton(scrollAreaWidgetContents);
        loadSetButton->setObjectName(QStringLiteral("loadSetButton"));

        horizontalLayout_2->addWidget(loadSetButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacerItem1);

        importSetButton = new QPushButton(scrollAreaWidgetContents);
        importSetButton->setObjectName(QStringLiteral("importSetButton"));

        horizontalLayout_2->addWidget(importSetButton);

        exportSetButton = new QPushButton(scrollAreaWidgetContents);
        exportSetButton->setObjectName(QStringLiteral("exportSetButton"));

        horizontalLayout_2->addWidget(exportSetButton);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacerItem2);

        resetSetButton = new QPushButton(scrollAreaWidgetContents);
        resetSetButton->setObjectName(QStringLiteral("resetSetButton"));

        horizontalLayout_2->addWidget(resetSetButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(clearSearchButton, searchTextLineEdit);
        QWidget::setTabOrder(searchTextLineEdit, keyTable);

        retranslateUi(Prefs_KeyboardShortcuts);

        QMetaObject::connectSlotsByName(Prefs_KeyboardShortcuts);
    } // setupUi

    void retranslateUi(QWidget *Prefs_KeyboardShortcuts)
    {
        Prefs_KeyboardShortcuts->setWindowTitle(QApplication::translate("Prefs_KeyboardShortcuts", "Keyboard Shortcuts", 0));
        label->setText(QApplication::translate("Prefs_KeyboardShortcuts", "Keyboard Shortcuts", 0));
        clearSearchButton->setText(QString());
        textLabel2->setText(QApplication::translate("Prefs_KeyboardShortcuts", "Search:", 0));
        QTreeWidgetItem *___qtreewidgetitem = keyTable->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("Prefs_KeyboardShortcuts", "Shortcut", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("Prefs_KeyboardShortcuts", "Action", 0));
        label_3->setText(QApplication::translate("Prefs_KeyboardShortcuts", "Shortcut for Selected Action", 0));
        noKey->setText(QApplication::translate("Prefs_KeyboardShortcuts", "&No Key", 0));
        noKey->setShortcut(QApplication::translate("Prefs_KeyboardShortcuts", "Alt+N", 0));
        userDef->setText(QApplication::translate("Prefs_KeyboardShortcuts", "&User Defined Key", 0));
        userDef->setShortcut(QApplication::translate("Prefs_KeyboardShortcuts", "Alt+U", 0));
        setKeyButton->setText(QApplication::translate("Prefs_KeyboardShortcuts", "Set &Key", 0));
        setKeyButton->setShortcut(QApplication::translate("Prefs_KeyboardShortcuts", "Alt+K", 0));
        keyDisplay->setText(QApplication::translate("Prefs_KeyboardShortcuts", "CTRL+ALT+SHIFT+W", 0));
        label_4->setText(QApplication::translate("Prefs_KeyboardShortcuts", "Loadable Shortcut Sets", 0));
#ifndef QT_NO_TOOLTIP
        loadableSets->setToolTip(QApplication::translate("Prefs_KeyboardShortcuts", "Keyboard shortcut sets available to load", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        loadSetButton->setToolTip(QApplication::translate("Prefs_KeyboardShortcuts", "Load the selected shortcut set", 0));
#endif // QT_NO_TOOLTIP
        loadSetButton->setText(QApplication::translate("Prefs_KeyboardShortcuts", "&Load", 0));
        loadSetButton->setShortcut(QApplication::translate("Prefs_KeyboardShortcuts", "Alt+L", 0));
#ifndef QT_NO_TOOLTIP
        importSetButton->setToolTip(QApplication::translate("Prefs_KeyboardShortcuts", "Import a shortcut set into the current configuration", 0));
#endif // QT_NO_TOOLTIP
        importSetButton->setText(QApplication::translate("Prefs_KeyboardShortcuts", "&Import...", 0));
        importSetButton->setShortcut(QApplication::translate("Prefs_KeyboardShortcuts", "Alt+I", 0));
#ifndef QT_NO_TOOLTIP
        exportSetButton->setToolTip(QApplication::translate("Prefs_KeyboardShortcuts", "Export the current shortcuts into an importable file", 0));
#endif // QT_NO_TOOLTIP
        exportSetButton->setText(QApplication::translate("Prefs_KeyboardShortcuts", "&Export...", 0));
        exportSetButton->setShortcut(QApplication::translate("Prefs_KeyboardShortcuts", "Alt+E", 0));
#ifndef QT_NO_TOOLTIP
        resetSetButton->setToolTip(QApplication::translate("Prefs_KeyboardShortcuts", "Reload the default Scribus shortcuts", 0));
#endif // QT_NO_TOOLTIP
        resetSetButton->setText(QApplication::translate("Prefs_KeyboardShortcuts", "&Reset", 0));
        resetSetButton->setShortcut(QApplication::translate("Prefs_KeyboardShortcuts", "Alt+R", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_KeyboardShortcuts: public Ui_Prefs_KeyboardShortcuts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_KEYBOARDSHORTCUTSBASE_H
