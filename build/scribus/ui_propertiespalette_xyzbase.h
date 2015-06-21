/********************************************************************************
** Form generated from reading UI file 'propertiespalette_xyzbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESPALETTE_XYZBASE_H
#define UI_PROPERTIESPALETTE_XYZBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/basepointwidget.h"
#include "ui/linkbutton.h"
#include "ui/propertiespalette_utils.h"
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_PropertiesPalette_XYZBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *nameGroup;
    QHBoxLayout *horizontalLayout;
    NameWidget *nameEdit;
    QGroupBox *geoGroup;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *geoGroupLayout;
    QLabel *xposLabel;
    ScrSpinBox *xposSpin;
    QLabel *widthLabel;
    QLabel *yposLabel;
    ScrSpinBox *yposSpin;
    ScrSpinBox *widthSpin;
    QLabel *heightLabel;
    ScrSpinBox *heightSpin;
    QLabel *rotationLabel;
    ScrSpinBox *rotationSpin;
    QLabel *basepointLabel;
    BasePointWidget *basePointWidget;
    LinkButton *keepFrameWHRatioButton;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *levelGroup;
    QGridLayout *gridLayout;
    QToolButton *levelUp;
    QToolButton *levelDown;
    QToolButton *levelTop;
    QToolButton *levelBottom;
    QLabel *levelLabel;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QToolButton *doGroup;
    QToolButton *doUnGroup;
    QToolButton *flipH;
    QToolButton *flipV;
    QToolButton *doLock;
    QToolButton *noPrint;
    QToolButton *noResize;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PropertiesPalette_XYZBase)
    {
        if (PropertiesPalette_XYZBase->objectName().isEmpty())
            PropertiesPalette_XYZBase->setObjectName(QStringLiteral("PropertiesPalette_XYZBase"));
        PropertiesPalette_XYZBase->resize(280, 325);
        verticalLayout = new QVBoxLayout(PropertiesPalette_XYZBase);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameGroup = new QGroupBox(PropertiesPalette_XYZBase);
        nameGroup->setObjectName(QStringLiteral("nameGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameGroup->sizePolicy().hasHeightForWidth());
        nameGroup->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(nameGroup);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        nameEdit = new NameWidget(nameGroup);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout->addWidget(nameEdit);


        verticalLayout->addWidget(nameGroup);

        geoGroup = new QGroupBox(PropertiesPalette_XYZBase);
        geoGroup->setObjectName(QStringLiteral("geoGroup"));
        sizePolicy.setHeightForWidth(geoGroup->sizePolicy().hasHeightForWidth());
        geoGroup->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(geoGroup);
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        geoGroupLayout = new QGridLayout();
        geoGroupLayout->setSpacing(4);
        geoGroupLayout->setContentsMargins(5, 5, 5, 5);
        geoGroupLayout->setObjectName(QStringLiteral("geoGroupLayout"));
        xposLabel = new QLabel(geoGroup);
        xposLabel->setObjectName(QStringLiteral("xposLabel"));

        geoGroupLayout->addWidget(xposLabel, 0, 0, 1, 1);

        xposSpin = new ScrSpinBox(geoGroup);
        xposSpin->setObjectName(QStringLiteral("xposSpin"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(xposSpin->sizePolicy().hasHeightForWidth());
        xposSpin->setSizePolicy(sizePolicy1);

        geoGroupLayout->addWidget(xposSpin, 0, 1, 1, 1);

        widthLabel = new QLabel(geoGroup);
        widthLabel->setObjectName(QStringLiteral("widthLabel"));

        geoGroupLayout->addWidget(widthLabel, 2, 0, 1, 1);

        yposLabel = new QLabel(geoGroup);
        yposLabel->setObjectName(QStringLiteral("yposLabel"));

        geoGroupLayout->addWidget(yposLabel, 1, 0, 1, 1);

        yposSpin = new ScrSpinBox(geoGroup);
        yposSpin->setObjectName(QStringLiteral("yposSpin"));

        geoGroupLayout->addWidget(yposSpin, 1, 1, 1, 1);

        widthSpin = new ScrSpinBox(geoGroup);
        widthSpin->setObjectName(QStringLiteral("widthSpin"));

        geoGroupLayout->addWidget(widthSpin, 2, 1, 1, 1);

        heightLabel = new QLabel(geoGroup);
        heightLabel->setObjectName(QStringLiteral("heightLabel"));

        geoGroupLayout->addWidget(heightLabel, 3, 0, 1, 1);

        heightSpin = new ScrSpinBox(geoGroup);
        heightSpin->setObjectName(QStringLiteral("heightSpin"));

        geoGroupLayout->addWidget(heightSpin, 3, 1, 1, 1);

        rotationLabel = new QLabel(geoGroup);
        rotationLabel->setObjectName(QStringLiteral("rotationLabel"));

        geoGroupLayout->addWidget(rotationLabel, 4, 0, 1, 1);

        rotationSpin = new ScrSpinBox(geoGroup);
        rotationSpin->setObjectName(QStringLiteral("rotationSpin"));
        rotationSpin->setWrapping(true);

        geoGroupLayout->addWidget(rotationSpin, 4, 1, 1, 1);

        basepointLabel = new QLabel(geoGroup);
        basepointLabel->setObjectName(QStringLiteral("basepointLabel"));

        geoGroupLayout->addWidget(basepointLabel, 5, 0, 1, 1);

        basePointWidget = new BasePointWidget(geoGroup);
        basePointWidget->setObjectName(QStringLiteral("basePointWidget"));

        geoGroupLayout->addWidget(basePointWidget, 5, 1, 1, 1);

        keepFrameWHRatioButton = new LinkButton(geoGroup);
        keepFrameWHRatioButton->setObjectName(QStringLiteral("keepFrameWHRatioButton"));
        keepFrameWHRatioButton->setMaximumSize(QSize(15, 32767));
        keepFrameWHRatioButton->setCheckable(true);
        keepFrameWHRatioButton->setAutoRaise(true);

        geoGroupLayout->addWidget(keepFrameWHRatioButton, 2, 2, 2, 1);


        verticalLayout_2->addLayout(geoGroupLayout);


        verticalLayout->addWidget(geoGroup);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        levelGroup = new QGroupBox(PropertiesPalette_XYZBase);
        levelGroup->setObjectName(QStringLiteral("levelGroup"));
        gridLayout = new QGridLayout(levelGroup);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        levelUp = new QToolButton(levelGroup);
        levelUp->setObjectName(QStringLiteral("levelUp"));
        levelUp->setMaximumSize(QSize(22, 22));

        gridLayout->addWidget(levelUp, 0, 0, 1, 1);

        levelDown = new QToolButton(levelGroup);
        levelDown->setObjectName(QStringLiteral("levelDown"));
        levelDown->setMaximumSize(QSize(22, 22));

        gridLayout->addWidget(levelDown, 1, 0, 1, 1);

        levelTop = new QToolButton(levelGroup);
        levelTop->setObjectName(QStringLiteral("levelTop"));
        levelTop->setMaximumSize(QSize(22, 22));

        gridLayout->addWidget(levelTop, 0, 1, 1, 1);

        levelBottom = new QToolButton(levelGroup);
        levelBottom->setObjectName(QStringLiteral("levelBottom"));
        levelBottom->setMaximumSize(QSize(22, 22));

        gridLayout->addWidget(levelBottom, 1, 1, 1, 1);

        levelLabel = new QLabel(levelGroup);
        levelLabel->setObjectName(QStringLiteral("levelLabel"));

        gridLayout->addWidget(levelLabel, 0, 2, 2, 1);


        horizontalLayout_2->addWidget(levelGroup);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        doGroup = new QToolButton(PropertiesPalette_XYZBase);
        doGroup->setObjectName(QStringLiteral("doGroup"));

        gridLayout_2->addWidget(doGroup, 0, 0, 1, 1);

        doUnGroup = new QToolButton(PropertiesPalette_XYZBase);
        doUnGroup->setObjectName(QStringLiteral("doUnGroup"));

        gridLayout_2->addWidget(doUnGroup, 1, 0, 1, 1);

        flipH = new QToolButton(PropertiesPalette_XYZBase);
        flipH->setObjectName(QStringLiteral("flipH"));

        gridLayout_2->addWidget(flipH, 0, 1, 1, 1);

        flipV = new QToolButton(PropertiesPalette_XYZBase);
        flipV->setObjectName(QStringLiteral("flipV"));

        gridLayout_2->addWidget(flipV, 1, 1, 1, 1);

        doLock = new QToolButton(PropertiesPalette_XYZBase);
        doLock->setObjectName(QStringLiteral("doLock"));

        gridLayout_2->addWidget(doLock, 0, 2, 1, 1);

        noPrint = new QToolButton(PropertiesPalette_XYZBase);
        noPrint->setObjectName(QStringLiteral("noPrint"));

        gridLayout_2->addWidget(noPrint, 1, 2, 1, 1);

        noResize = new QToolButton(PropertiesPalette_XYZBase);
        noResize->setObjectName(QStringLiteral("noResize"));

        gridLayout_2->addWidget(noResize, 0, 3, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(PropertiesPalette_XYZBase);

        QMetaObject::connectSlotsByName(PropertiesPalette_XYZBase);
    } // setupUi

    void retranslateUi(QWidget *PropertiesPalette_XYZBase)
    {
        PropertiesPalette_XYZBase->setWindowTitle(QApplication::translate("PropertiesPalette_XYZBase", "Form", 0));
        nameGroup->setTitle(QApplication::translate("PropertiesPalette_XYZBase", "Name", 0));
        geoGroup->setTitle(QApplication::translate("PropertiesPalette_XYZBase", "Geometry", 0));
        xposLabel->setText(QApplication::translate("PropertiesPalette_XYZBase", "&X-Pos:", 0));
        widthLabel->setText(QApplication::translate("PropertiesPalette_XYZBase", "&Width:", 0));
        yposLabel->setText(QApplication::translate("PropertiesPalette_XYZBase", "&Y-Pos:", 0));
        heightLabel->setText(QApplication::translate("PropertiesPalette_XYZBase", "&Height:", 0));
        rotationLabel->setText(QApplication::translate("PropertiesPalette_XYZBase", "&Rotation:", 0));
        basepointLabel->setText(QApplication::translate("PropertiesPalette_XYZBase", "Basepoint:", 0));
        keepFrameWHRatioButton->setText(QApplication::translate("PropertiesPalette_XYZBase", "...", 0));
        levelGroup->setTitle(QApplication::translate("PropertiesPalette_XYZBase", "Level", 0));
        levelUp->setText(QString());
        levelDown->setText(QString());
        levelTop->setText(QString());
        levelBottom->setText(QString());
        levelLabel->setText(QApplication::translate("PropertiesPalette_XYZBase", "0", 0));
        doGroup->setText(QString());
        doUnGroup->setText(QString());
        flipH->setText(QString());
        flipV->setText(QString());
        doLock->setText(QString());
        noPrint->setText(QString());
        noResize->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PropertiesPalette_XYZBase: public Ui_PropertiesPalette_XYZBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESPALETTE_XYZBASE_H
