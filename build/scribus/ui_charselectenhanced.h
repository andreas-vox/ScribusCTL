/********************************************************************************
** Form generated from reading UI file 'charselectenhanced.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARSELECTENHANCED_H
#define UI_CHARSELECTENHANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "chartableview.h"
#include "ui/fontcombo.h"
#include "ui/sccombobox.h"

QT_BEGIN_NAMESPACE

class Ui_CharSelectEnhanced
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    FontCombo *fontSelector;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    ScComboBox *rangeSelector;
    QSpacerItem *spacerItem1;
    CharTableView *m_charTable;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *hexLineEdit;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_1;
    QLabel *sample;
    QHBoxLayout *_2;
    QSpacerItem *spacerItem2;
    QPushButton *insertButton;
    QPushButton *deleteButton;

    void setupUi(QDialog *CharSelectEnhanced)
    {
        if (CharSelectEnhanced->objectName().isEmpty())
            CharSelectEnhanced->setObjectName(QStringLiteral("CharSelectEnhanced"));
        CharSelectEnhanced->resize(506, 492);
        gridLayout = new QGridLayout(CharSelectEnhanced);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(CharSelectEnhanced);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        fontSelector = new FontCombo(CharSelectEnhanced);
        fontSelector->setObjectName(QStringLiteral("fontSelector"));

        gridLayout->addWidget(fontSelector, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        label_2 = new QLabel(CharSelectEnhanced);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        rangeSelector = new ScComboBox(CharSelectEnhanced);
        rangeSelector->setObjectName(QStringLiteral("rangeSelector"));

        gridLayout->addWidget(rangeSelector, 0, 4, 1, 1);

        spacerItem1 = new QSpacerItem(66, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 5, 1, 1);

        m_charTable = new CharTableView(CharSelectEnhanced);
        m_charTable->setObjectName(QStringLiteral("m_charTable"));
        m_charTable->setMinimumSize(QSize(340, 0));
        m_charTable->setDragDropOverwriteMode(false);
        m_charTable->setDragDropMode(QAbstractItemView::DragOnly);
        m_charTable->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout->addWidget(m_charTable, 1, 0, 1, 6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(CharSelectEnhanced);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        hexLineEdit = new QLineEdit(CharSelectEnhanced);
        hexLineEdit->setObjectName(QStringLiteral("hexLineEdit"));
        hexLineEdit->setMaxLength(32767);

        horizontalLayout->addWidget(hexLineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 6);

        groupBox = new QGroupBox(CharSelectEnhanced);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_1 = new QGridLayout(groupBox);
        gridLayout_1->setObjectName(QStringLiteral("gridLayout_1"));
        sample = new QLabel(groupBox);
        sample->setObjectName(QStringLiteral("sample"));
        sample->setMinimumSize(QSize(460, 48));
        sample->setFrameShape(QFrame::Box);
        sample->setLineWidth(1);

        gridLayout_1->addWidget(sample, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 3, 0, 1, 6);

        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem2);

        insertButton = new QPushButton(CharSelectEnhanced);
        insertButton->setObjectName(QStringLiteral("insertButton"));
        insertButton->setAutoDefault(false);

        _2->addWidget(insertButton);

        deleteButton = new QPushButton(CharSelectEnhanced);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setAutoDefault(false);

        _2->addWidget(deleteButton);


        gridLayout->addLayout(_2, 4, 0, 1, 6);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(fontSelector);
        label_2->setBuddy(rangeSelector);
        label_3->setBuddy(hexLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(CharSelectEnhanced);

        QMetaObject::connectSlotsByName(CharSelectEnhanced);
    } // setupUi

    void retranslateUi(QDialog *CharSelectEnhanced)
    {
        CharSelectEnhanced->setWindowTitle(QApplication::translate("CharSelectEnhanced", "Enhanced Character Palette", 0));
        label->setText(QApplication::translate("CharSelectEnhanced", "&Font:", 0));
        label_2->setText(QApplication::translate("CharSelectEnhanced", "C&haracter Class:", 0));
#ifndef QT_NO_TOOLTIP
        m_charTable->setToolTip(QApplication::translate("CharSelectEnhanced", "You can see a thumbnail if you press and hold down the right mouse button.\n"
"The Insert key inserts a Glyph into the Selection below and the Delete key removes the last inserted one", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("CharSelectEnhanced", "Insert &Code:", 0));
#ifndef QT_NO_TOOLTIP
        hexLineEdit->setToolTip(QApplication::translate("CharSelectEnhanced", "Type in a four digit Unicode value directly here", 0));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("CharSelectEnhanced", "Glyphs to Insert", 0));
#ifndef QT_NO_TOOLTIP
        insertButton->setToolTip(QApplication::translate("CharSelectEnhanced", "Insert the characters at the cursor in the text", 0));
#endif // QT_NO_TOOLTIP
        insertButton->setText(QApplication::translate("CharSelectEnhanced", "&Insert", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("CharSelectEnhanced", "Delete the current selection(s).", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("CharSelectEnhanced", "C&lear", 0));
    } // retranslateUi

};

namespace Ui {
    class CharSelectEnhanced: public Ui_CharSelectEnhanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARSELECTENHANCED_H
