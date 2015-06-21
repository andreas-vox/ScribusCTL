/********************************************************************************
** Form generated from reading UI file 'charselect.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARSELECT_H
#define UI_CHARSELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include "chartableview.h"
#include "ui/unicodesearch.h"

QT_BEGIN_NAMESPACE

class Ui_CharSelect
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *hideButton;
    UnicodeChooseButton *unicodeButton;
    QPushButton *uniLoadButton;
    QPushButton *uniSaveButton;
    QPushButton *uniClearButton;
    CharTableView *m_userTable;

    void setupUi(QDialog *CharSelect)
    {
        if (CharSelect->objectName().isEmpty())
            CharSelect->setObjectName(QStringLiteral("CharSelect"));
        CharSelect->resize(394, 319);
        gridLayout = new QGridLayout(CharSelect);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(1);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hideButton = new QPushButton(CharSelect);
        hideButton->setObjectName(QStringLiteral("hideButton"));
        hideButton->setCheckable(true);

        hboxLayout->addWidget(hideButton);

        unicodeButton = new UnicodeChooseButton(CharSelect);
        unicodeButton->setObjectName(QStringLiteral("unicodeButton"));

        hboxLayout->addWidget(unicodeButton);

        uniLoadButton = new QPushButton(CharSelect);
        uniLoadButton->setObjectName(QStringLiteral("uniLoadButton"));

        hboxLayout->addWidget(uniLoadButton);

        uniSaveButton = new QPushButton(CharSelect);
        uniSaveButton->setObjectName(QStringLiteral("uniSaveButton"));

        hboxLayout->addWidget(uniSaveButton);

        uniClearButton = new QPushButton(CharSelect);
        uniClearButton->setObjectName(QStringLiteral("uniClearButton"));

        hboxLayout->addWidget(uniClearButton);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        m_userTable = new CharTableView(CharSelect);
        m_userTable->setObjectName(QStringLiteral("m_userTable"));
        m_userTable->setDragDropOverwriteMode(false);
        m_userTable->setDragDropMode(QAbstractItemView::DropOnly);
        m_userTable->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout->addWidget(m_userTable, 1, 0, 1, 1);

        QWidget::setTabOrder(hideButton, unicodeButton);
        QWidget::setTabOrder(unicodeButton, uniLoadButton);
        QWidget::setTabOrder(uniLoadButton, uniSaveButton);
        QWidget::setTabOrder(uniSaveButton, uniClearButton);
        QWidget::setTabOrder(uniClearButton, m_userTable);

        retranslateUi(CharSelect);

        QMetaObject::connectSlotsByName(CharSelect);
    } // setupUi

    void retranslateUi(QDialog *CharSelect)
    {
        CharSelect->setWindowTitle(QApplication::translate("CharSelect", "Character Palette", 0));
#ifndef QT_NO_TOOLTIP
        hideButton->setToolTip(QApplication::translate("CharSelect", "Show/Hide Enhanced Palette", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        unicodeButton->setToolTip(QApplication::translate("CharSelect", "Unicode Search", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        uniLoadButton->setToolTip(QApplication::translate("CharSelect", "Load a Character Palette", 0));
#endif // QT_NO_TOOLTIP
        uniLoadButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        uniSaveButton->setToolTip(QApplication::translate("CharSelect", "Save the Character Palette", 0));
#endif // QT_NO_TOOLTIP
        uniSaveButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        uniClearButton->setToolTip(QApplication::translate("CharSelect", "Empty the Character Palette", 0));
#endif // QT_NO_TOOLTIP
        uniClearButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CharSelect: public Ui_CharSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARSELECT_H
