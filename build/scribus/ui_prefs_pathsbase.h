/********************************************************************************
** Form generated from reading UI file 'prefs_pathsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_PATHSBASE_H
#define UI_PREFS_PATHSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_Paths
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *docDirLabel;
    QLineEdit *docDirLineEdit;
    QPushButton *docDirChangeButton;
    QLabel *profileDirLabel;
    QLineEdit *profileDirLineEdit;
    QPushButton *profileDirChangeButton;
    QLabel *scriptDirLabel;
    QLineEdit *scriptDirLineEdit;
    QPushButton *scriptDirChangeButton;
    QLabel *templateDirLabel;
    QLineEdit *templateDirLineEdit;
    QPushButton *templateDirChangeButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Prefs_Paths)
    {
        if (Prefs_Paths->objectName().isEmpty())
            Prefs_Paths->setObjectName(QStringLiteral("Prefs_Paths"));
        Prefs_Paths->resize(538, 275);
        verticalLayout = new QVBoxLayout(Prefs_Paths);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Prefs_Paths);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line = new QFrame(Prefs_Paths);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        scrollArea = new QScrollArea(Prefs_Paths);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 510, 205));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        docDirLabel = new QLabel(scrollAreaWidgetContents);
        docDirLabel->setObjectName(QStringLiteral("docDirLabel"));
        docDirLabel->setWordWrap(false);

        gridLayout->addWidget(docDirLabel, 0, 0, 1, 1);

        docDirLineEdit = new QLineEdit(scrollAreaWidgetContents);
        docDirLineEdit->setObjectName(QStringLiteral("docDirLineEdit"));
        docDirLineEdit->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(docDirLineEdit, 0, 1, 1, 1);

        docDirChangeButton = new QPushButton(scrollAreaWidgetContents);
        docDirChangeButton->setObjectName(QStringLiteral("docDirChangeButton"));
        docDirChangeButton->setMinimumSize(QSize(88, 0));

        gridLayout->addWidget(docDirChangeButton, 0, 2, 1, 1);

        profileDirLabel = new QLabel(scrollAreaWidgetContents);
        profileDirLabel->setObjectName(QStringLiteral("profileDirLabel"));
        profileDirLabel->setWordWrap(false);

        gridLayout->addWidget(profileDirLabel, 1, 0, 1, 1);

        profileDirLineEdit = new QLineEdit(scrollAreaWidgetContents);
        profileDirLineEdit->setObjectName(QStringLiteral("profileDirLineEdit"));
        profileDirLineEdit->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(profileDirLineEdit, 1, 1, 1, 1);

        profileDirChangeButton = new QPushButton(scrollAreaWidgetContents);
        profileDirChangeButton->setObjectName(QStringLiteral("profileDirChangeButton"));

        gridLayout->addWidget(profileDirChangeButton, 1, 2, 1, 1);

        scriptDirLabel = new QLabel(scrollAreaWidgetContents);
        scriptDirLabel->setObjectName(QStringLiteral("scriptDirLabel"));
        scriptDirLabel->setWordWrap(false);

        gridLayout->addWidget(scriptDirLabel, 2, 0, 1, 1);

        scriptDirLineEdit = new QLineEdit(scrollAreaWidgetContents);
        scriptDirLineEdit->setObjectName(QStringLiteral("scriptDirLineEdit"));
        scriptDirLineEdit->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(scriptDirLineEdit, 2, 1, 1, 1);

        scriptDirChangeButton = new QPushButton(scrollAreaWidgetContents);
        scriptDirChangeButton->setObjectName(QStringLiteral("scriptDirChangeButton"));

        gridLayout->addWidget(scriptDirChangeButton, 2, 2, 1, 1);

        templateDirLabel = new QLabel(scrollAreaWidgetContents);
        templateDirLabel->setObjectName(QStringLiteral("templateDirLabel"));
        templateDirLabel->setWordWrap(false);

        gridLayout->addWidget(templateDirLabel, 3, 0, 1, 1);

        templateDirLineEdit = new QLineEdit(scrollAreaWidgetContents);
        templateDirLineEdit->setObjectName(QStringLiteral("templateDirLineEdit"));
        templateDirLineEdit->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(templateDirLineEdit, 3, 1, 1, 1);

        templateDirChangeButton = new QPushButton(scrollAreaWidgetContents);
        templateDirChangeButton->setObjectName(QStringLiteral("templateDirChangeButton"));

        gridLayout->addWidget(templateDirChangeButton, 3, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#ifndef QT_NO_SHORTCUT
        docDirLabel->setBuddy(docDirLineEdit);
        profileDirLabel->setBuddy(profileDirLineEdit);
        scriptDirLabel->setBuddy(scriptDirLineEdit);
        templateDirLabel->setBuddy(templateDirLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(Prefs_Paths);

        QMetaObject::connectSlotsByName(Prefs_Paths);
    } // setupUi

    void retranslateUi(QWidget *Prefs_Paths)
    {
        Prefs_Paths->setWindowTitle(QApplication::translate("Prefs_Paths", "Form", 0));
        label->setText(QApplication::translate("Prefs_Paths", "Paths", 0));
        docDirLabel->setText(QApplication::translate("Prefs_Paths", "Documents:", 0));
        docDirChangeButton->setText(QApplication::translate("Prefs_Paths", "&Change...", 0));
        docDirChangeButton->setShortcut(QApplication::translate("Prefs_Paths", "Alt+C", 0));
        profileDirLabel->setText(QApplication::translate("Prefs_Paths", "Color Profiles:", 0));
        profileDirChangeButton->setText(QApplication::translate("Prefs_Paths", "C&hange...", 0));
        profileDirChangeButton->setShortcut(QApplication::translate("Prefs_Paths", "Alt+H", 0));
        scriptDirLabel->setText(QApplication::translate("Prefs_Paths", "Scripts:", 0));
        scriptDirChangeButton->setText(QApplication::translate("Prefs_Paths", "Ch&ange...", 0));
        scriptDirChangeButton->setShortcut(QApplication::translate("Prefs_Paths", "Alt+A", 0));
        templateDirLabel->setText(QApplication::translate("Prefs_Paths", "Document Templates:", 0));
        templateDirChangeButton->setText(QApplication::translate("Prefs_Paths", "Cha&nge...", 0));
        templateDirChangeButton->setShortcut(QApplication::translate("Prefs_Paths", "Alt+N", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_Paths: public Ui_Prefs_Paths {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_PATHSBASE_H
