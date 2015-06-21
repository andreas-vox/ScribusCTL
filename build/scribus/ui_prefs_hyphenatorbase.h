/********************************************************************************
** Form generated from reading UI file 'prefs_hyphenatorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_HYPHENATORBASE_H
#define UI_PREFS_HYPHENATORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_Hyphenator
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *hyphSuggestionsCheckBox;
    QCheckBox *hyphAutoCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *hyphLanguageComboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *smallestWordLabel;
    QSpinBox *smallestWordSpinBox;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *maxConsecutiveCountSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *_2;
    QListWidget *exceptionListWidget;
    QPushButton *exceptionAddButton;
    QPushButton *exceptionEditButton;
    QPushButton *exceptionRemoveButton;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox_3;
    QGridLayout *_3;
    QListWidget *ignoreListWidget;
    QPushButton *ignoreAddButton;
    QPushButton *ignoreEditButton;
    QPushButton *ignoreRemoveButton;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *Prefs_Hyphenator)
    {
        if (Prefs_Hyphenator->objectName().isEmpty())
            Prefs_Hyphenator->setObjectName(QStringLiteral("Prefs_Hyphenator"));
        Prefs_Hyphenator->resize(711, 550);
        verticalLayout = new QVBoxLayout(Prefs_Hyphenator);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Prefs_Hyphenator);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line = new QFrame(Prefs_Hyphenator);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        tabWidget = new QTabWidget(Prefs_Hyphenator);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        hyphSuggestionsCheckBox = new QCheckBox(tab);
        hyphSuggestionsCheckBox->setObjectName(QStringLiteral("hyphSuggestionsCheckBox"));

        verticalLayout_2->addWidget(hyphSuggestionsCheckBox);

        hyphAutoCheckBox = new QCheckBox(tab);
        hyphAutoCheckBox->setObjectName(QStringLiteral("hyphAutoCheckBox"));

        verticalLayout_2->addWidget(hyphAutoCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        hyphLanguageComboBox = new QComboBox(tab);
        hyphLanguageComboBox->setObjectName(QStringLiteral("hyphLanguageComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hyphLanguageComboBox->sizePolicy().hasHeightForWidth());
        hyphLanguageComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(hyphLanguageComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        smallestWordLabel = new QLabel(tab);
        smallestWordLabel->setObjectName(QStringLiteral("smallestWordLabel"));

        horizontalLayout_4->addWidget(smallestWordLabel);

        smallestWordSpinBox = new QSpinBox(tab);
        smallestWordSpinBox->setObjectName(QStringLiteral("smallestWordSpinBox"));
        smallestWordSpinBox->setMinimum(3);

        horizontalLayout_4->addWidget(smallestWordSpinBox);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(false);

        horizontalLayout_3->addWidget(label_4);

        maxConsecutiveCountSpinBox = new QSpinBox(tab);
        maxConsecutiveCountSpinBox->setObjectName(QStringLiteral("maxConsecutiveCountSpinBox"));

        horizontalLayout_3->addWidget(maxConsecutiveCountSpinBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        _2 = new QGridLayout(groupBox_2);
        _2->setSpacing(5);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(10, 10, 10, 10);
        exceptionListWidget = new QListWidget(groupBox_2);
        exceptionListWidget->setObjectName(QStringLiteral("exceptionListWidget"));

        _2->addWidget(exceptionListWidget, 0, 0, 1, 4);

        exceptionAddButton = new QPushButton(groupBox_2);
        exceptionAddButton->setObjectName(QStringLiteral("exceptionAddButton"));

        _2->addWidget(exceptionAddButton, 1, 0, 1, 1);

        exceptionEditButton = new QPushButton(groupBox_2);
        exceptionEditButton->setObjectName(QStringLiteral("exceptionEditButton"));

        _2->addWidget(exceptionEditButton, 1, 1, 1, 1);

        exceptionRemoveButton = new QPushButton(groupBox_2);
        exceptionRemoveButton->setObjectName(QStringLiteral("exceptionRemoveButton"));

        _2->addWidget(exceptionRemoveButton, 1, 2, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem, 1, 3, 1, 1);


        horizontalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        _3 = new QGridLayout(groupBox_3);
        _3->setSpacing(5);
        _3->setObjectName(QStringLiteral("_3"));
        _3->setContentsMargins(10, 10, 10, 10);
        ignoreListWidget = new QListWidget(groupBox_3);
        ignoreListWidget->setObjectName(QStringLiteral("ignoreListWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ignoreListWidget->sizePolicy().hasHeightForWidth());
        ignoreListWidget->setSizePolicy(sizePolicy1);

        _3->addWidget(ignoreListWidget, 0, 0, 1, 4);

        ignoreAddButton = new QPushButton(groupBox_3);
        ignoreAddButton->setObjectName(QStringLiteral("ignoreAddButton"));

        _3->addWidget(ignoreAddButton, 1, 0, 1, 1);

        ignoreEditButton = new QPushButton(groupBox_3);
        ignoreEditButton->setObjectName(QStringLiteral("ignoreEditButton"));

        _3->addWidget(ignoreEditButton, 1, 1, 1, 1);

        ignoreRemoveButton = new QPushButton(groupBox_3);
        ignoreRemoveButton->setObjectName(QStringLiteral("ignoreRemoveButton"));

        _3->addWidget(ignoreRemoveButton, 1, 2, 1, 1);

        spacerItem1 = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem1, 1, 3, 1, 1);


        horizontalLayout_2->addWidget(groupBox_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(hyphLanguageComboBox);
        smallestWordLabel->setBuddy(smallestWordSpinBox);
        label_4->setBuddy(maxConsecutiveCountSpinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(Prefs_Hyphenator);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Prefs_Hyphenator);
    } // setupUi

    void retranslateUi(QWidget *Prefs_Hyphenator)
    {
        Prefs_Hyphenator->setWindowTitle(QApplication::translate("Prefs_Hyphenator", "Form", 0));
        label->setText(QApplication::translate("Prefs_Hyphenator", "Hyphenation", 0));
#ifndef QT_NO_TOOLTIP
        hyphSuggestionsCheckBox->setToolTip(QApplication::translate("Prefs_Hyphenator", "A dialog box showing all possible hyphens for each word will show up when you use the Extras, Hyphenate Text option.", 0));
#endif // QT_NO_TOOLTIP
        hyphSuggestionsCheckBox->setText(QApplication::translate("Prefs_Hyphenator", "&Hyphenation Suggestions", 0));
#ifndef QT_NO_TOOLTIP
        hyphAutoCheckBox->setToolTip(QApplication::translate("Prefs_Hyphenator", "Enables automatic hyphenation of your text while typing.", 0));
#endif // QT_NO_TOOLTIP
        hyphAutoCheckBox->setText(QApplication::translate("Prefs_Hyphenator", "Hyphenate Text Automatically &During Typing", 0));
        label_2->setText(QApplication::translate("Prefs_Hyphenator", "Language:", 0));
        smallestWordLabel->setText(QApplication::translate("Prefs_Hyphenator", "Smallest Word:", 0));
#ifndef QT_NO_TOOLTIP
        smallestWordSpinBox->setToolTip(QApplication::translate("Prefs_Hyphenator", "Length of the smallest word to be hyphenated.", 0));
#endif // QT_NO_TOOLTIP
        smallestWordSpinBox->setSuffix(QString());
        label_3->setText(QApplication::translate("Prefs_Hyphenator", "Characters", 0));
        label_4->setText(QApplication::translate("Prefs_Hyphenator", "Consecutive Hyphenations Allowed:", 0));
#ifndef QT_NO_TOOLTIP
        maxConsecutiveCountSpinBox->setToolTip(QApplication::translate("Prefs_Hyphenator", "Maximum number of Hyphenations following each other.\n"
"A value of 0 means unlimited hyphenations.", 0));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Prefs_Hyphenator", "Behaviour", 0));
        groupBox_2->setTitle(QApplication::translate("Prefs_Hyphenator", "Exceptions", 0));
        exceptionAddButton->setText(QString());
        exceptionEditButton->setText(QApplication::translate("Prefs_Hyphenator", "Edit", 0));
        exceptionRemoveButton->setText(QString());
        groupBox_3->setTitle(QApplication::translate("Prefs_Hyphenator", "Ignore List", 0));
        ignoreAddButton->setText(QString());
        ignoreEditButton->setText(QApplication::translate("Prefs_Hyphenator", "Edit", 0));
        ignoreRemoveButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Prefs_Hyphenator", "Word Lists", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_Hyphenator: public Ui_Prefs_Hyphenator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_HYPHENATORBASE_H
