/********************************************************************************
** Form generated from reading UI file 'shortcutwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTWIDGET_H
#define UI_SHORTCUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShortcutWidget
{
public:
    QGridLayout *gridLayout;
    QRadioButton *noKey;
    QRadioButton *userDef;
    QPushButton *setKeyButton;
    QSpacerItem *spacerItem;
    QLabel *keyDisplay;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *ShortcutWidget)
    {
        if (ShortcutWidget->objectName().isEmpty())
            ShortcutWidget->setObjectName(QStringLiteral("ShortcutWidget"));
        ShortcutWidget->resize(400, 300);
        gridLayout = new QGridLayout(ShortcutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        noKey = new QRadioButton(ShortcutWidget);
        noKey->setObjectName(QStringLiteral("noKey"));

        gridLayout->addWidget(noKey, 0, 0, 1, 1);

        userDef = new QRadioButton(ShortcutWidget);
        userDef->setObjectName(QStringLiteral("userDef"));

        gridLayout->addWidget(userDef, 1, 0, 1, 1);

        setKeyButton = new QPushButton(ShortcutWidget);
        setKeyButton->setObjectName(QStringLiteral("setKeyButton"));

        gridLayout->addWidget(setKeyButton, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        keyDisplay = new QLabel(ShortcutWidget);
        keyDisplay->setObjectName(QStringLiteral("keyDisplay"));
        keyDisplay->setMinimumSize(QSize(0, 40));
        keyDisplay->setFrameShape(QFrame::Panel);
        keyDisplay->setFrameShadow(QFrame::Sunken);
        keyDisplay->setLineWidth(2);
        keyDisplay->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(keyDisplay, 2, 0, 1, 2);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 3, 0, 1, 1);


        retranslateUi(ShortcutWidget);

        QMetaObject::connectSlotsByName(ShortcutWidget);
    } // setupUi

    void retranslateUi(QWidget *ShortcutWidget)
    {
        noKey->setText(QApplication::translate("ShortcutWidget", "&No Key", 0));
        userDef->setText(QApplication::translate("ShortcutWidget", "&User Defined Key", 0));
        setKeyButton->setText(QApplication::translate("ShortcutWidget", "Set &Key", 0));
        keyDisplay->setText(QString());
        Q_UNUSED(ShortcutWidget);
    } // retranslateUi

};

namespace Ui {
    class ShortcutWidget: public Ui_ShortcutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTWIDGET_H
