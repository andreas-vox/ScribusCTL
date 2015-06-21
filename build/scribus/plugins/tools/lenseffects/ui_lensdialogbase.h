/********************************************************************************
** Form generated from reading UI file 'lensdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LENSDIALOGBASE_H
#define UI_LENSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LensDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QGraphicsView *previewWidget;
    QHBoxLayout *hboxLayout1;
    QHBoxLayout *hboxLayout2;
    QPushButton *buttonAdd;
    QPushButton *buttonRemove;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem;
    QToolButton *buttonZoomI;
    QToolButton *buttonZoomOut;
    QVBoxLayout *vboxLayout2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *spinXPos;
    QLabel *label_2;
    QDoubleSpinBox *spinYPos;
    QRadioButton *buttonMagnify;
    QRadioButton *buttonFishEye;
    QLabel *label_3;
    QDoubleSpinBox *spinRadius;
    QLabel *label_4;
    QDoubleSpinBox *spinStrength;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LensDialogBase)
    {
        if (LensDialogBase->objectName().isEmpty())
            LensDialogBase->setObjectName(QStringLiteral("LensDialogBase"));
        LensDialogBase->resize(526, 372);
        vboxLayout = new QVBoxLayout(LensDialogBase);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(5);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        previewWidget = new QGraphicsView(LensDialogBase);
        previewWidget->setObjectName(QStringLiteral("previewWidget"));
        previewWidget->setMinimumSize(QSize(280, 280));

        vboxLayout1->addWidget(previewWidget);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(5);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        buttonAdd = new QPushButton(LensDialogBase);
        buttonAdd->setObjectName(QStringLiteral("buttonAdd"));

        hboxLayout2->addWidget(buttonAdd);

        buttonRemove = new QPushButton(LensDialogBase);
        buttonRemove->setObjectName(QStringLiteral("buttonRemove"));

        hboxLayout2->addWidget(buttonRemove);


        hboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(5);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem);

        buttonZoomI = new QToolButton(LensDialogBase);
        buttonZoomI->setObjectName(QStringLiteral("buttonZoomI"));

        hboxLayout3->addWidget(buttonZoomI);

        buttonZoomOut = new QToolButton(LensDialogBase);
        buttonZoomOut->setObjectName(QStringLiteral("buttonZoomOut"));

        hboxLayout3->addWidget(buttonZoomOut);


        hboxLayout1->addLayout(hboxLayout3);


        vboxLayout1->addLayout(hboxLayout1);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(5);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        groupBox = new QGroupBox(LensDialogBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinXPos = new QDoubleSpinBox(groupBox);
        spinXPos->setObjectName(QStringLiteral("spinXPos"));
        spinXPos->setMinimum(-30000);
        spinXPos->setMaximum(30000);

        gridLayout->addWidget(spinXPos, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinYPos = new QDoubleSpinBox(groupBox);
        spinYPos->setObjectName(QStringLiteral("spinYPos"));
        spinYPos->setMinimum(-30000);
        spinYPos->setMaximum(30000);

        gridLayout->addWidget(spinYPos, 1, 1, 1, 1);

        buttonMagnify = new QRadioButton(groupBox);
        buttonMagnify->setObjectName(QStringLiteral("buttonMagnify"));
        buttonMagnify->setChecked(true);

        gridLayout->addWidget(buttonMagnify, 2, 0, 1, 2);

        buttonFishEye = new QRadioButton(groupBox);
        buttonFishEye->setObjectName(QStringLiteral("buttonFishEye"));

        gridLayout->addWidget(buttonFishEye, 3, 0, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        spinRadius = new QDoubleSpinBox(groupBox);
        spinRadius->setObjectName(QStringLiteral("spinRadius"));
        spinRadius->setMinimum(-30000);
        spinRadius->setMaximum(30000);

        gridLayout->addWidget(spinRadius, 4, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        spinStrength = new QDoubleSpinBox(groupBox);
        spinStrength->setObjectName(QStringLiteral("spinStrength"));
        spinStrength->setMinimum(0);
        spinStrength->setMaximum(100);

        gridLayout->addWidget(spinStrength, 5, 1, 1, 1);


        vboxLayout2->addWidget(groupBox);

        spacerItem1 = new QSpacerItem(165, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem1);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(LensDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(spinXPos);
        label_2->setBuddy(spinYPos);
        label_3->setBuddy(spinRadius);
        label_4->setBuddy(spinStrength);
#endif // QT_NO_SHORTCUT

        retranslateUi(LensDialogBase);

        QMetaObject::connectSlotsByName(LensDialogBase);
    } // setupUi

    void retranslateUi(QDialog *LensDialogBase)
    {
        LensDialogBase->setWindowTitle(QApplication::translate("LensDialogBase", "Optical Lens", 0));
#ifndef QT_NO_TOOLTIP
        buttonAdd->setToolTip(QApplication::translate("LensDialogBase", "Add a new lens", 0));
#endif // QT_NO_TOOLTIP
        buttonAdd->setText(QApplication::translate("LensDialogBase", "&Add Lens", 0));
#ifndef QT_NO_TOOLTIP
        buttonRemove->setToolTip(QApplication::translate("LensDialogBase", "Remove selected lens", 0));
#endif // QT_NO_TOOLTIP
        buttonRemove->setText(QApplication::translate("LensDialogBase", "&Remove Lens", 0));
#ifndef QT_NO_TOOLTIP
        buttonZoomI->setToolTip(QApplication::translate("LensDialogBase", "Zoom In", 0));
#endif // QT_NO_TOOLTIP
        buttonZoomI->setText(QApplication::translate("LensDialogBase", "+", 0));
#ifndef QT_NO_TOOLTIP
        buttonZoomOut->setToolTip(QApplication::translate("LensDialogBase", "Zoom Out", 0));
#endif // QT_NO_TOOLTIP
        buttonZoomOut->setText(QApplication::translate("LensDialogBase", "-", 0));
        groupBox->setTitle(QApplication::translate("LensDialogBase", "Lens Parameters", 0));
        label->setText(QApplication::translate("LensDialogBase", "&X Pos:", 0));
#ifndef QT_NO_TOOLTIP
        spinXPos->setToolTip(QApplication::translate("LensDialogBase", "Horizontal position of the lens", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("LensDialogBase", "&Y Pos:", 0));
#ifndef QT_NO_TOOLTIP
        spinYPos->setToolTip(QApplication::translate("LensDialogBase", "Vertical position of the lens", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        buttonMagnify->setToolTip(QApplication::translate("LensDialogBase", "The selected lens acts like a magnification lens", 0));
#endif // QT_NO_TOOLTIP
        buttonMagnify->setText(QApplication::translate("LensDialogBase", "&Magnification Lens", 0));
#ifndef QT_NO_TOOLTIP
        buttonFishEye->setToolTip(QApplication::translate("LensDialogBase", "The selected lens acts like a fish eye lens", 0));
#endif // QT_NO_TOOLTIP
        buttonFishEye->setText(QApplication::translate("LensDialogBase", "&Fish Eye Lens", 0));
        label_3->setText(QApplication::translate("LensDialogBase", "Ra&dius:", 0));
#ifndef QT_NO_TOOLTIP
        spinRadius->setToolTip(QApplication::translate("LensDialogBase", "Radius of the lens", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("LensDialogBase", "&Strength:", 0));
#ifndef QT_NO_TOOLTIP
        spinStrength->setToolTip(QApplication::translate("LensDialogBase", "Strength of the lens", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class LensDialogBase: public Ui_LensDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LENSDIALOGBASE_H
