/********************************************************************************
** Form generated from reading UI file 'aligndistribute.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALIGNDISTRIBUTE_H
#define UI_ALIGNDISTRIBUTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/scdockpalette.h"
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_AlignDistribute
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tabAlign;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *_2;
    QSpacerItem *spacerItem;
    QGridLayout *_3;
    QLabel *alignGuideLabel;
    QLabel *alignRelativeToLabel;
    QLineEdit *alignGuideLineEdit;
    QComboBox *alignRelativeToCombo;
    QLabel *alignMoveOrResizeLabel;
    QComboBox *alignMoveOrResizeCombo;
    QSpacerItem *spacerItem1;
    QHBoxLayout *_4;
    QSpacerItem *spacerItem2;
    QGridLayout *_5;
    QToolButton *alignBottomInToolButton;
    QToolButton *alignTopInToolButton;
    QToolButton *alignLeftInToolButton;
    QToolButton *alignRightInToolButton;
    QToolButton *alignBottomOutToolButton;
    QToolButton *alignTopOutToolButton;
    QToolButton *alignCenterVerToolButton;
    QToolButton *alignLeftOutToolButton;
    QToolButton *alignRightOutToolButton;
    QToolButton *alignCenterHorToolButton;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QWidget *tabDistribute;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *_6;
    QSpacerItem *spacerItem5;
    QGridLayout *_7;
    QToolButton *distributeDistHToolButton;
    QToolButton *distributeTopToolButton;
    QToolButton *distributeCenterVToolButton;
    QToolButton *distributeRightToolButton;
    QToolButton *toolButtonDummy1;
    QToolButton *distributeAcrossMarginsToolButton;
    QToolButton *distributeLeftToolButton;
    QToolButton *distributeAcrossPageToolButton;
    QToolButton *distributeDistValueHToolButton;
    QToolButton *distributeDownMarginsToolButton;
    QToolButton *distributeCenterHToolButton;
    QToolButton *toolButtonDummy2;
    QToolButton *distributeDownPageToolButton;
    QToolButton *distributeDistValueVToolButton;
    QToolButton *distributeDistVToolButton;
    QToolButton *distributeBottomToolButton;
    QSpacerItem *spacerItem6;
    QHBoxLayout *_8;
    QSpacerItem *spacerItem7;
    QHBoxLayout *_9;
    QLabel *distributeDistLabel;
    ScrSpinBox *distributeDistSpinBox;
    QSpacerItem *spacerItem8;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *spacer;
    QCheckBox *reverseDistributionCheckBox;
    QSpacerItem *spacer_2;
    QSpacerItem *spacerItem9;
    QWidget *tabSwap;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *swapLeftToolButton;
    QToolButton *swapRightToolButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(ScDockPalette *AlignDistribute)
    {
        if (AlignDistribute->objectName().isEmpty())
            AlignDistribute->setObjectName(QStringLiteral("AlignDistribute"));
        AlignDistribute->resize(253, 284);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new QTabWidget(dockWidgetContents);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabAlign = new QWidget();
        tabAlign->setObjectName(QStringLiteral("tabAlign"));
        vboxLayout = new QVBoxLayout(tabAlign);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem);

        _3 = new QGridLayout();
        _3->setObjectName(QStringLiteral("_3"));
        alignGuideLabel = new QLabel(tabAlign);
        alignGuideLabel->setObjectName(QStringLiteral("alignGuideLabel"));
        alignGuideLabel->setWordWrap(false);

        _3->addWidget(alignGuideLabel, 1, 0, 1, 1);

        alignRelativeToLabel = new QLabel(tabAlign);
        alignRelativeToLabel->setObjectName(QStringLiteral("alignRelativeToLabel"));
        alignRelativeToLabel->setWordWrap(false);

        _3->addWidget(alignRelativeToLabel, 0, 0, 1, 1);

        alignGuideLineEdit = new QLineEdit(tabAlign);
        alignGuideLineEdit->setObjectName(QStringLiteral("alignGuideLineEdit"));

        _3->addWidget(alignGuideLineEdit, 1, 1, 1, 1);

        alignRelativeToCombo = new QComboBox(tabAlign);
        alignRelativeToCombo->setObjectName(QStringLiteral("alignRelativeToCombo"));

        _3->addWidget(alignRelativeToCombo, 0, 1, 1, 1);

        alignMoveOrResizeLabel = new QLabel(tabAlign);
        alignMoveOrResizeLabel->setObjectName(QStringLiteral("alignMoveOrResizeLabel"));
        alignMoveOrResizeLabel->setWordWrap(false);

        _3->addWidget(alignMoveOrResizeLabel, 2, 0, 1, 1);

        alignMoveOrResizeCombo = new QComboBox(tabAlign);
        alignMoveOrResizeCombo->setObjectName(QStringLiteral("alignMoveOrResizeCombo"));

        _3->addWidget(alignMoveOrResizeCombo, 2, 1, 1, 1);


        _2->addLayout(_3);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem1);


        vboxLayout->addLayout(_2);

        _4 = new QHBoxLayout();
        _4->setObjectName(QStringLiteral("_4"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _4->addItem(spacerItem2);

        _5 = new QGridLayout();
        _5->setObjectName(QStringLiteral("_5"));
        alignBottomInToolButton = new QToolButton(tabAlign);
        alignBottomInToolButton->setObjectName(QStringLiteral("alignBottomInToolButton"));

        _5->addWidget(alignBottomInToolButton, 1, 3, 1, 1);

        alignTopInToolButton = new QToolButton(tabAlign);
        alignTopInToolButton->setObjectName(QStringLiteral("alignTopInToolButton"));

        _5->addWidget(alignTopInToolButton, 1, 1, 1, 1);

        alignLeftInToolButton = new QToolButton(tabAlign);
        alignLeftInToolButton->setObjectName(QStringLiteral("alignLeftInToolButton"));

        _5->addWidget(alignLeftInToolButton, 0, 1, 1, 1);

        alignRightInToolButton = new QToolButton(tabAlign);
        alignRightInToolButton->setObjectName(QStringLiteral("alignRightInToolButton"));

        _5->addWidget(alignRightInToolButton, 0, 3, 1, 1);

        alignBottomOutToolButton = new QToolButton(tabAlign);
        alignBottomOutToolButton->setObjectName(QStringLiteral("alignBottomOutToolButton"));

        _5->addWidget(alignBottomOutToolButton, 1, 4, 1, 1);

        alignTopOutToolButton = new QToolButton(tabAlign);
        alignTopOutToolButton->setObjectName(QStringLiteral("alignTopOutToolButton"));

        _5->addWidget(alignTopOutToolButton, 1, 0, 1, 1);

        alignCenterVerToolButton = new QToolButton(tabAlign);
        alignCenterVerToolButton->setObjectName(QStringLiteral("alignCenterVerToolButton"));

        _5->addWidget(alignCenterVerToolButton, 1, 2, 1, 1);

        alignLeftOutToolButton = new QToolButton(tabAlign);
        alignLeftOutToolButton->setObjectName(QStringLiteral("alignLeftOutToolButton"));

        _5->addWidget(alignLeftOutToolButton, 0, 0, 1, 1);

        alignRightOutToolButton = new QToolButton(tabAlign);
        alignRightOutToolButton->setObjectName(QStringLiteral("alignRightOutToolButton"));

        _5->addWidget(alignRightOutToolButton, 0, 4, 1, 1);

        alignCenterHorToolButton = new QToolButton(tabAlign);
        alignCenterHorToolButton->setObjectName(QStringLiteral("alignCenterHorToolButton"));

        _5->addWidget(alignCenterHorToolButton, 0, 2, 1, 1);


        _4->addLayout(_5);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _4->addItem(spacerItem3);


        vboxLayout->addLayout(_4);

        spacerItem4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem4);

        tabWidget->addTab(tabAlign, QString());
        tabDistribute = new QWidget();
        tabDistribute->setObjectName(QStringLiteral("tabDistribute"));
        verticalLayout_2 = new QVBoxLayout(tabDistribute);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        _6 = new QHBoxLayout();
        _6->setObjectName(QStringLiteral("_6"));
        spacerItem5 = new QSpacerItem(63, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _6->addItem(spacerItem5);

        _7 = new QGridLayout();
        _7->setObjectName(QStringLiteral("_7"));
        distributeDistHToolButton = new QToolButton(tabDistribute);
        distributeDistHToolButton->setObjectName(QStringLiteral("distributeDistHToolButton"));

        _7->addWidget(distributeDistHToolButton, 0, 3, 1, 1);

        distributeTopToolButton = new QToolButton(tabDistribute);
        distributeTopToolButton->setObjectName(QStringLiteral("distributeTopToolButton"));

        _7->addWidget(distributeTopToolButton, 1, 2, 1, 1);

        distributeCenterVToolButton = new QToolButton(tabDistribute);
        distributeCenterVToolButton->setObjectName(QStringLiteral("distributeCenterVToolButton"));

        _7->addWidget(distributeCenterVToolButton, 1, 1, 1, 1);

        distributeRightToolButton = new QToolButton(tabDistribute);
        distributeRightToolButton->setObjectName(QStringLiteral("distributeRightToolButton"));

        _7->addWidget(distributeRightToolButton, 0, 2, 1, 1);

        toolButtonDummy1 = new QToolButton(tabDistribute);
        toolButtonDummy1->setObjectName(QStringLiteral("toolButtonDummy1"));

        _7->addWidget(toolButtonDummy1, 3, 0, 1, 1);

        distributeAcrossMarginsToolButton = new QToolButton(tabDistribute);
        distributeAcrossMarginsToolButton->setObjectName(QStringLiteral("distributeAcrossMarginsToolButton"));
        distributeAcrossMarginsToolButton->setEnabled(true);

        _7->addWidget(distributeAcrossMarginsToolButton, 2, 2, 1, 1);

        distributeLeftToolButton = new QToolButton(tabDistribute);
        distributeLeftToolButton->setObjectName(QStringLiteral("distributeLeftToolButton"));

        _7->addWidget(distributeLeftToolButton, 0, 0, 1, 1);

        distributeAcrossPageToolButton = new QToolButton(tabDistribute);
        distributeAcrossPageToolButton->setObjectName(QStringLiteral("distributeAcrossPageToolButton"));
        distributeAcrossPageToolButton->setEnabled(true);

        _7->addWidget(distributeAcrossPageToolButton, 2, 0, 1, 1);

        distributeDistValueHToolButton = new QToolButton(tabDistribute);
        distributeDistValueHToolButton->setObjectName(QStringLiteral("distributeDistValueHToolButton"));

        _7->addWidget(distributeDistValueHToolButton, 3, 1, 1, 1);

        distributeDownMarginsToolButton = new QToolButton(tabDistribute);
        distributeDownMarginsToolButton->setObjectName(QStringLiteral("distributeDownMarginsToolButton"));
        distributeDownMarginsToolButton->setEnabled(true);

        _7->addWidget(distributeDownMarginsToolButton, 2, 3, 1, 1);

        distributeCenterHToolButton = new QToolButton(tabDistribute);
        distributeCenterHToolButton->setObjectName(QStringLiteral("distributeCenterHToolButton"));

        _7->addWidget(distributeCenterHToolButton, 0, 1, 1, 1);

        toolButtonDummy2 = new QToolButton(tabDistribute);
        toolButtonDummy2->setObjectName(QStringLiteral("toolButtonDummy2"));

        _7->addWidget(toolButtonDummy2, 3, 3, 1, 1);

        distributeDownPageToolButton = new QToolButton(tabDistribute);
        distributeDownPageToolButton->setObjectName(QStringLiteral("distributeDownPageToolButton"));
        distributeDownPageToolButton->setEnabled(true);

        _7->addWidget(distributeDownPageToolButton, 2, 1, 1, 1);

        distributeDistValueVToolButton = new QToolButton(tabDistribute);
        distributeDistValueVToolButton->setObjectName(QStringLiteral("distributeDistValueVToolButton"));

        _7->addWidget(distributeDistValueVToolButton, 3, 2, 1, 1);

        distributeDistVToolButton = new QToolButton(tabDistribute);
        distributeDistVToolButton->setObjectName(QStringLiteral("distributeDistVToolButton"));

        _7->addWidget(distributeDistVToolButton, 1, 3, 1, 1);

        distributeBottomToolButton = new QToolButton(tabDistribute);
        distributeBottomToolButton->setObjectName(QStringLiteral("distributeBottomToolButton"));

        _7->addWidget(distributeBottomToolButton, 1, 0, 1, 1);


        _6->addLayout(_7);

        spacerItem6 = new QSpacerItem(62, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _6->addItem(spacerItem6);


        verticalLayout_2->addLayout(_6);

        _8 = new QHBoxLayout();
        _8->setObjectName(QStringLiteral("_8"));
        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _8->addItem(spacerItem7);

        _9 = new QHBoxLayout();
        _9->setObjectName(QStringLiteral("_9"));
        distributeDistLabel = new QLabel(tabDistribute);
        distributeDistLabel->setObjectName(QStringLiteral("distributeDistLabel"));
        distributeDistLabel->setWordWrap(false);
        distributeDistLabel->setIndent(-1);

        _9->addWidget(distributeDistLabel);

        distributeDistSpinBox = new ScrSpinBox(tabDistribute);
        distributeDistSpinBox->setObjectName(QStringLiteral("distributeDistSpinBox"));
        distributeDistSpinBox->setMinimumSize(QSize(50, 24));

        _9->addWidget(distributeDistSpinBox);


        _8->addLayout(_9);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _8->addItem(spacerItem8);


        verticalLayout_2->addLayout(_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacer);

        reverseDistributionCheckBox = new QCheckBox(tabDistribute);
        reverseDistributionCheckBox->setObjectName(QStringLiteral("reverseDistributionCheckBox"));

        horizontalLayout_2->addWidget(reverseDistributionCheckBox);

        spacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        spacerItem9 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacerItem9);

        tabWidget->addTab(tabDistribute, QString());
        tabSwap = new QWidget();
        tabSwap->setObjectName(QStringLiteral("tabSwap"));
        verticalLayout = new QVBoxLayout(tabSwap);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        swapLeftToolButton = new QToolButton(tabSwap);
        swapLeftToolButton->setObjectName(QStringLiteral("swapLeftToolButton"));

        horizontalLayout->addWidget(swapLeftToolButton);

        swapRightToolButton = new QToolButton(tabSwap);
        swapRightToolButton->setObjectName(QStringLiteral("swapRightToolButton"));

        horizontalLayout->addWidget(swapRightToolButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(tabSwap, QString());

        verticalLayout_3->addWidget(tabWidget);

        AlignDistribute->setWidget(dockWidgetContents);
#ifndef QT_NO_SHORTCUT
        alignGuideLabel->setBuddy(alignGuideLineEdit);
        alignRelativeToLabel->setBuddy(alignRelativeToCombo);
        alignMoveOrResizeLabel->setBuddy(alignMoveOrResizeCombo);
        distributeDistLabel->setBuddy(distributeDistSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(alignRelativeToCombo, alignGuideLineEdit);
        QWidget::setTabOrder(alignGuideLineEdit, alignMoveOrResizeCombo);
        QWidget::setTabOrder(alignMoveOrResizeCombo, alignLeftOutToolButton);
        QWidget::setTabOrder(alignLeftOutToolButton, alignLeftInToolButton);
        QWidget::setTabOrder(alignLeftInToolButton, alignCenterHorToolButton);
        QWidget::setTabOrder(alignCenterHorToolButton, alignRightInToolButton);
        QWidget::setTabOrder(alignRightInToolButton, alignRightOutToolButton);
        QWidget::setTabOrder(alignRightOutToolButton, alignTopOutToolButton);
        QWidget::setTabOrder(alignTopOutToolButton, alignTopInToolButton);
        QWidget::setTabOrder(alignTopInToolButton, alignCenterVerToolButton);
        QWidget::setTabOrder(alignCenterVerToolButton, alignBottomInToolButton);
        QWidget::setTabOrder(alignBottomInToolButton, alignBottomOutToolButton);
        QWidget::setTabOrder(alignBottomOutToolButton, distributeLeftToolButton);
        QWidget::setTabOrder(distributeLeftToolButton, distributeCenterHToolButton);
        QWidget::setTabOrder(distributeCenterHToolButton, distributeRightToolButton);
        QWidget::setTabOrder(distributeRightToolButton, distributeDistHToolButton);
        QWidget::setTabOrder(distributeDistHToolButton, distributeBottomToolButton);
        QWidget::setTabOrder(distributeBottomToolButton, distributeCenterVToolButton);
        QWidget::setTabOrder(distributeCenterVToolButton, distributeTopToolButton);
        QWidget::setTabOrder(distributeTopToolButton, distributeDistVToolButton);
        QWidget::setTabOrder(distributeDistVToolButton, distributeAcrossPageToolButton);
        QWidget::setTabOrder(distributeAcrossPageToolButton, distributeDownPageToolButton);
        QWidget::setTabOrder(distributeDownPageToolButton, distributeAcrossMarginsToolButton);
        QWidget::setTabOrder(distributeAcrossMarginsToolButton, distributeDownMarginsToolButton);
        QWidget::setTabOrder(distributeDownMarginsToolButton, toolButtonDummy1);
        QWidget::setTabOrder(toolButtonDummy1, distributeDistValueHToolButton);
        QWidget::setTabOrder(distributeDistValueHToolButton, distributeDistValueVToolButton);
        QWidget::setTabOrder(distributeDistValueVToolButton, toolButtonDummy2);
        QWidget::setTabOrder(toolButtonDummy2, distributeDistSpinBox);
        QWidget::setTabOrder(distributeDistSpinBox, reverseDistributionCheckBox);
        QWidget::setTabOrder(reverseDistributionCheckBox, swapLeftToolButton);
        QWidget::setTabOrder(swapLeftToolButton, swapRightToolButton);
        QWidget::setTabOrder(swapRightToolButton, tabWidget);

        retranslateUi(AlignDistribute);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AlignDistribute);
    } // setupUi

    void retranslateUi(ScDockPalette *AlignDistribute)
    {
        AlignDistribute->setWindowTitle(QApplication::translate("AlignDistribute", "DockWidget", 0));
        alignGuideLabel->setText(QApplication::translate("AlignDistribute", "&Selected Guide:", 0));
        alignRelativeToLabel->setText(QApplication::translate("AlignDistribute", "&Relative To:", 0));
        alignMoveOrResizeLabel->setText(QApplication::translate("AlignDistribute", "&Align Sides By:", 0));
        alignBottomInToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        alignTopInToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        alignLeftInToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        alignRightInToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        alignBottomOutToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        alignTopOutToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        alignCenterVerToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        alignLeftOutToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        alignRightOutToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        alignCenterHorToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAlign), QApplication::translate("AlignDistribute", "Align", 0));
        distributeDistHToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        distributeTopToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        distributeCenterVToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        distributeRightToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        toolButtonDummy1->setText(QApplication::translate("AlignDistribute", "...", 0));
        distributeAcrossMarginsToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        distributeLeftToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        distributeAcrossPageToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        distributeDistValueHToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        distributeDownMarginsToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        distributeCenterHToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        toolButtonDummy2->setText(QApplication::translate("AlignDistribute", "...", 0));
        distributeDownPageToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        distributeDistValueVToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        distributeDistVToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        distributeBottomToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        distributeDistLabel->setText(QApplication::translate("AlignDistribute", "&Distance:", 0));
        reverseDistributionCheckBox->setText(QApplication::translate("AlignDistribute", "Reverse Distribution", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabDistribute), QApplication::translate("AlignDistribute", "Distribute", 0));
        swapLeftToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        swapRightToolButton->setText(QApplication::translate("AlignDistribute", "...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabSwap), QApplication::translate("AlignDistribute", "Swap", 0));
    } // retranslateUi

};

namespace Ui {
    class AlignDistribute: public Ui_AlignDistribute {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALIGNDISTRIBUTE_H
