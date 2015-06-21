/********************************************************************************
** Form generated from reading UI file 'pathconnectdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHCONNECTDIALOGBASE_H
#define UI_PATHCONNECTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_PathConnectDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *firstLinePoint;
    QLabel *label_2;
    QComboBox *secondLinePoint;
    QLabel *label_3;
    QComboBox *modeCombo;
    QCheckBox *previewCheck;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PathConnectDialogBase)
    {
        if (PathConnectDialogBase->objectName().isEmpty())
            PathConnectDialogBase->setObjectName(QStringLiteral("PathConnectDialogBase"));
        PathConnectDialogBase->resize(235, 160);
        gridLayout = new QGridLayout(PathConnectDialogBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(PathConnectDialogBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        firstLinePoint = new QComboBox(PathConnectDialogBase);
        firstLinePoint->setObjectName(QStringLiteral("firstLinePoint"));

        gridLayout->addWidget(firstLinePoint, 0, 1, 1, 1);

        label_2 = new QLabel(PathConnectDialogBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        secondLinePoint = new QComboBox(PathConnectDialogBase);
        secondLinePoint->setObjectName(QStringLiteral("secondLinePoint"));

        gridLayout->addWidget(secondLinePoint, 1, 1, 1, 1);

        label_3 = new QLabel(PathConnectDialogBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        modeCombo = new QComboBox(PathConnectDialogBase);
        modeCombo->setObjectName(QStringLiteral("modeCombo"));

        gridLayout->addWidget(modeCombo, 2, 1, 1, 1);

        previewCheck = new QCheckBox(PathConnectDialogBase);
        previewCheck->setObjectName(QStringLiteral("previewCheck"));

        gridLayout->addWidget(previewCheck, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(PathConnectDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);


        retranslateUi(PathConnectDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), PathConnectDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PathConnectDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(PathConnectDialogBase);
    } // setupUi

    void retranslateUi(QDialog *PathConnectDialogBase)
    {
        PathConnectDialogBase->setWindowTitle(QApplication::translate("PathConnectDialogBase", "Connect Paths", 0));
        label->setText(QApplication::translate("PathConnectDialogBase", "Connect First Line", 0));
        firstLinePoint->clear();
        firstLinePoint->insertItems(0, QStringList()
         << QApplication::translate("PathConnectDialogBase", "Starting Point", 0)
         << QApplication::translate("PathConnectDialogBase", "End Point", 0)
        );
        label_2->setText(QApplication::translate("PathConnectDialogBase", "with Second Line", 0));
        secondLinePoint->clear();
        secondLinePoint->insertItems(0, QStringList()
         << QApplication::translate("PathConnectDialogBase", "Starting Point", 0)
         << QApplication::translate("PathConnectDialogBase", "End Point", 0)
        );
        label_3->setText(QApplication::translate("PathConnectDialogBase", "by using:", 0));
        modeCombo->clear();
        modeCombo->insertItems(0, QStringList()
         << QApplication::translate("PathConnectDialogBase", "a straight Line", 0)
         << QApplication::translate("PathConnectDialogBase", "Points moving", 0)
        );
        previewCheck->setText(QApplication::translate("PathConnectDialogBase", "Preview on Canvas", 0));
    } // retranslateUi

};

namespace Ui {
    class PathConnectDialogBase: public Ui_PathConnectDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHCONNECTDIALOGBASE_H
