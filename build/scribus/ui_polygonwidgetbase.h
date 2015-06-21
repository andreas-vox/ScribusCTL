/********************************************************************************
** Form generated from reading UI file 'polygonwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYGONWIDGETBASE_H
#define UI_POLYGONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ui/scrspinbox.h>

QT_BEGIN_NAMESPACE

class Ui_PolygonWidgetBase
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    ScrSpinBox *cornersSpinBox;
    QLabel *label_2;
    ScrSpinBox *rotationSpinBox;
    QSlider *rotationSlider;
    QVBoxLayout *verticalLayout_2;
    QLabel *Preview;
    QSpacerItem *verticalSpacer;
    QGroupBox *applyConvexGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    ScrSpinBox *factorSpinBox;
    QSlider *factorSlider;
    QLabel *label_4;
    ScrSpinBox *innerRotationspinBox;
    QSlider *innerRotationSlider;
    QLabel *label_5;
    ScrSpinBox *curvatureSpinBox;
    QSlider *curvatureSlider;
    QLabel *label_6;
    ScrSpinBox *OuterCurvatureSpinBox;
    QSlider *OuterCurvatureSlider;

    void setupUi(QWidget *PolygonWidgetBase)
    {
        if (PolygonWidgetBase->objectName().isEmpty())
            PolygonWidgetBase->setObjectName(QStringLiteral("PolygonWidgetBase"));
        PolygonWidgetBase->resize(558, 560);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PolygonWidgetBase->sizePolicy().hasHeightForWidth());
        PolygonWidgetBase->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(PolygonWidgetBase);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(PolygonWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cornersSpinBox = new ScrSpinBox(PolygonWidgetBase);
        cornersSpinBox->setObjectName(QStringLiteral("cornersSpinBox"));
        cornersSpinBox->setSuffix(QStringLiteral(""));
        cornersSpinBox->setMinimum(3);
        cornersSpinBox->setMaximum(999);

        gridLayout->addWidget(cornersSpinBox, 0, 1, 1, 1);

        label_2 = new QLabel(PolygonWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        rotationSpinBox = new ScrSpinBox(PolygonWidgetBase);
        rotationSpinBox->setObjectName(QStringLiteral("rotationSpinBox"));
        rotationSpinBox->setMinimum(-180);
        rotationSpinBox->setMaximum(180);

        gridLayout->addWidget(rotationSpinBox, 1, 1, 1, 1);

        rotationSlider = new QSlider(PolygonWidgetBase);
        rotationSlider->setObjectName(QStringLiteral("rotationSlider"));
        rotationSlider->setMinimum(-180);
        rotationSlider->setMaximum(180);
        rotationSlider->setOrientation(Qt::Horizontal);
        rotationSlider->setTickPosition(QSlider::TicksBelow);

        gridLayout->addWidget(rotationSlider, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Preview = new QLabel(PolygonWidgetBase);
        Preview->setObjectName(QStringLiteral("Preview"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Preview->sizePolicy().hasHeightForWidth());
        Preview->setSizePolicy(sizePolicy1);
        Preview->setMinimumSize(QSize(280, 280));
        Preview->setMaximumSize(QSize(280, 280));
        Preview->setSizeIncrement(QSize(0, 0));
        Preview->setFrameShape(QFrame::Panel);
        Preview->setFrameShadow(QFrame::Sunken);
        Preview->setLineWidth(2);
        Preview->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Preview);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout_3->addLayout(verticalLayout_2, 0, 1, 2, 1);

        applyConvexGroupBox = new QGroupBox(PolygonWidgetBase);
        applyConvexGroupBox->setObjectName(QStringLiteral("applyConvexGroupBox"));
        applyConvexGroupBox->setCheckable(true);
        gridLayout_2 = new QGridLayout(applyConvexGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(applyConvexGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        factorSpinBox = new ScrSpinBox(applyConvexGroupBox);
        factorSpinBox->setObjectName(QStringLiteral("factorSpinBox"));
        factorSpinBox->setMinimum(-100);
        factorSpinBox->setMaximum(100);

        gridLayout_2->addWidget(factorSpinBox, 0, 1, 1, 1);

        factorSlider = new QSlider(applyConvexGroupBox);
        factorSlider->setObjectName(QStringLiteral("factorSlider"));
        factorSlider->setMinimum(-100);
        factorSlider->setMaximum(100);
        factorSlider->setOrientation(Qt::Horizontal);
        factorSlider->setTickPosition(QSlider::TicksBelow);

        gridLayout_2->addWidget(factorSlider, 1, 0, 1, 1);

        label_4 = new QLabel(applyConvexGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        innerRotationspinBox = new ScrSpinBox(applyConvexGroupBox);
        innerRotationspinBox->setObjectName(QStringLiteral("innerRotationspinBox"));
        innerRotationspinBox->setMinimum(-180);
        innerRotationspinBox->setMaximum(180);

        gridLayout_2->addWidget(innerRotationspinBox, 2, 1, 1, 1);

        innerRotationSlider = new QSlider(applyConvexGroupBox);
        innerRotationSlider->setObjectName(QStringLiteral("innerRotationSlider"));
        innerRotationSlider->setMinimum(-180);
        innerRotationSlider->setMaximum(180);
        innerRotationSlider->setOrientation(Qt::Horizontal);
        innerRotationSlider->setTickPosition(QSlider::TicksBelow);

        gridLayout_2->addWidget(innerRotationSlider, 3, 0, 1, 1);

        label_5 = new QLabel(applyConvexGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        curvatureSpinBox = new ScrSpinBox(applyConvexGroupBox);
        curvatureSpinBox->setObjectName(QStringLiteral("curvatureSpinBox"));
        curvatureSpinBox->setMaximum(100);

        gridLayout_2->addWidget(curvatureSpinBox, 4, 1, 1, 1);

        curvatureSlider = new QSlider(applyConvexGroupBox);
        curvatureSlider->setObjectName(QStringLiteral("curvatureSlider"));
        curvatureSlider->setMaximum(100);
        curvatureSlider->setOrientation(Qt::Horizontal);
        curvatureSlider->setTickPosition(QSlider::TicksBelow);

        gridLayout_2->addWidget(curvatureSlider, 5, 0, 1, 1);

        label_6 = new QLabel(applyConvexGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);

        OuterCurvatureSpinBox = new ScrSpinBox(applyConvexGroupBox);
        OuterCurvatureSpinBox->setObjectName(QStringLiteral("OuterCurvatureSpinBox"));
        OuterCurvatureSpinBox->setMaximum(100);

        gridLayout_2->addWidget(OuterCurvatureSpinBox, 6, 1, 1, 1);

        OuterCurvatureSlider = new QSlider(applyConvexGroupBox);
        OuterCurvatureSlider->setObjectName(QStringLiteral("OuterCurvatureSlider"));
        OuterCurvatureSlider->setMaximum(100);
        OuterCurvatureSlider->setOrientation(Qt::Horizontal);
        OuterCurvatureSlider->setTickPosition(QSlider::TicksBelow);

        gridLayout_2->addWidget(OuterCurvatureSlider, 7, 0, 1, 1);

        label_3->raise();
        factorSpinBox->raise();
        factorSlider->raise();
        label_5->raise();
        curvatureSpinBox->raise();
        curvatureSlider->raise();
        label_6->raise();
        OuterCurvatureSpinBox->raise();
        OuterCurvatureSlider->raise();
        innerRotationSlider->raise();
        innerRotationspinBox->raise();
        label_4->raise();

        gridLayout_3->addWidget(applyConvexGroupBox, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(cornersSpinBox);
        label_2->setBuddy(rotationSpinBox);
        label_3->setBuddy(factorSpinBox);
        label_5->setBuddy(curvatureSpinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(PolygonWidgetBase);

        QMetaObject::connectSlotsByName(PolygonWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *PolygonWidgetBase)
    {
        PolygonWidgetBase->setWindowTitle(QApplication::translate("PolygonWidgetBase", "Form", 0));
        label->setText(QApplication::translate("PolygonWidgetBase", "Corn&ers:", 0));
#ifndef QT_NO_TOOLTIP
        cornersSpinBox->setToolTip(QApplication::translate("PolygonWidgetBase", "Number of corners for polygons", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("PolygonWidgetBase", "&Rotation:", 0));
#ifndef QT_NO_TOOLTIP
        rotationSpinBox->setToolTip(QApplication::translate("PolygonWidgetBase", "Degrees of rotation for polygons", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        rotationSlider->setToolTip(QApplication::translate("PolygonWidgetBase", "Degrees of rotation for polygons", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Preview->setToolTip(QApplication::translate("PolygonWidgetBase", "Sample Polygon", 0));
#endif // QT_NO_TOOLTIP
        Preview->setText(QString());
#ifndef QT_NO_TOOLTIP
        applyConvexGroupBox->setToolTip(QApplication::translate("PolygonWidgetBase", "Apply Convex/Concave Factor to change shape of Polygons", 0));
#endif // QT_NO_TOOLTIP
        applyConvexGroupBox->setTitle(QApplication::translate("PolygonWidgetBase", "Apply &Factor", 0));
        label_3->setText(QApplication::translate("PolygonWidgetBase", "&Factor:", 0));
#ifndef QT_NO_TOOLTIP
        factorSpinBox->setToolTip(QApplication::translate("PolygonWidgetBase", "A negative value will make the polygon concave (or star shaped), a positive value will make it convex", 0));
#endif // QT_NO_TOOLTIP
        factorSpinBox->setSuffix(QApplication::translate("PolygonWidgetBase", " %", 0));
#ifndef QT_NO_TOOLTIP
        factorSlider->setToolTip(QApplication::translate("PolygonWidgetBase", "A negative value will make the polygon concave (or star shaped), a positive value will make it convex", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("PolygonWidgetBase", "Inner Rotation:", 0));
        label_5->setText(QApplication::translate("PolygonWidgetBase", "Inner C&urvature:", 0));
        curvatureSpinBox->setSuffix(QApplication::translate("PolygonWidgetBase", " %", 0));
        label_6->setText(QApplication::translate("PolygonWidgetBase", "Outer Curvature:", 0));
        OuterCurvatureSpinBox->setSuffix(QApplication::translate("PolygonWidgetBase", " %", 0));
    } // retranslateUi

};

namespace Ui {
    class PolygonWidgetBase: public Ui_PolygonWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYGONWIDGETBASE_H
