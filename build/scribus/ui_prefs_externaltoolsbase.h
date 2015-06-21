/********************************************************************************
** Form generated from reading UI file 'prefs_externaltoolsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_EXTERNALTOOLSBASE_H
#define UI_PREFS_EXTERNALTOOLSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_ExternalTools
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QFrame *line_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QFrame *line;
    QHBoxLayout *hboxLayout;
    QLabel *psToolLabel;
    QLineEdit *psToolLineEdit;
    QPushButton *psToolChangeButton;
    QHBoxLayout *hboxLayout1;
    QCheckBox *psAntialiasTextCheckBox;
    QSpacerItem *spacerItem;
    QCheckBox *psAntialiasGraphicsCheckBox;
    QSpacerItem *spacerItem1;
    QLabel *psResolutionLabel;
    QSpinBox *psResolutionSpinBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *imageToolLabel;
    QLineEdit *imageToolLineEdit;
    QPushButton *imageToolChangeButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *webBrowserLabel;
    QLineEdit *webBrowserLineEdit;
    QPushButton *webBrowserChangeButton;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_8;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pdfViewerLabel;
    QLineEdit *pdfViewerLineEdit;
    QPushButton *pdfViewerChangeButton;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *uniconverterLabel;
    QLineEdit *uniconvertorLineEdit;
    QPushButton *uniconvertorChangeButton;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_5;
    QFrame *line_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QListWidget *latexConfigsListWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *latexConfigUpButton;
    QPushButton *latexConfigDownButton;
    QPushButton *latexConfigAddButton;
    QPushButton *latexConfigDeleteButton;
    QPushButton *latexConfigChangeCommandButton;
    QHBoxLayout *hboxLayout2;
    QLabel *latexEditorLabel;
    QLineEdit *latexEditorLineEdit;
    QPushButton *latexEditorChangeButton;
    QHBoxLayout *hboxLayout3;
    QCheckBox *latexEmptyFrameCheckBox;
    QSpacerItem *spacerItem2;
    QCheckBox *latexEmbeddedEditorCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *hboxLayout4;
    QCheckBox *latexForceDPICheckBox;
    QSpacerItem *spacerItem3;
    QLabel *latexResolutionLabel;
    QSpinBox *latexResolutionSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem4;
    QPushButton *rescanButton;

    void setupUi(QWidget *Prefs_ExternalTools)
    {
        if (Prefs_ExternalTools->objectName().isEmpty())
            Prefs_ExternalTools->setObjectName(QStringLiteral("Prefs_ExternalTools"));
        Prefs_ExternalTools->resize(773, 726);
        verticalLayout = new QVBoxLayout(Prefs_ExternalTools);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(Prefs_ExternalTools);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        line_5 = new QFrame(Prefs_ExternalTools);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        scrollArea = new QScrollArea(Prefs_ExternalTools);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -379, 730, 992));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        verticalLayout_3->addWidget(label_2);

        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        psToolLabel = new QLabel(scrollAreaWidgetContents);
        psToolLabel->setObjectName(QStringLiteral("psToolLabel"));
        psToolLabel->setWordWrap(false);

        hboxLayout->addWidget(psToolLabel);

        psToolLineEdit = new QLineEdit(scrollAreaWidgetContents);
        psToolLineEdit->setObjectName(QStringLiteral("psToolLineEdit"));

        hboxLayout->addWidget(psToolLineEdit);

        psToolChangeButton = new QPushButton(scrollAreaWidgetContents);
        psToolChangeButton->setObjectName(QStringLiteral("psToolChangeButton"));

        hboxLayout->addWidget(psToolChangeButton);


        verticalLayout_3->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        psAntialiasTextCheckBox = new QCheckBox(scrollAreaWidgetContents);
        psAntialiasTextCheckBox->setObjectName(QStringLiteral("psAntialiasTextCheckBox"));

        hboxLayout1->addWidget(psAntialiasTextCheckBox);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        psAntialiasGraphicsCheckBox = new QCheckBox(scrollAreaWidgetContents);
        psAntialiasGraphicsCheckBox->setObjectName(QStringLiteral("psAntialiasGraphicsCheckBox"));

        hboxLayout1->addWidget(psAntialiasGraphicsCheckBox);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        psResolutionLabel = new QLabel(scrollAreaWidgetContents);
        psResolutionLabel->setObjectName(QStringLiteral("psResolutionLabel"));
        psResolutionLabel->setWordWrap(false);

        hboxLayout1->addWidget(psResolutionLabel);

        psResolutionSpinBox = new QSpinBox(scrollAreaWidgetContents);
        psResolutionSpinBox->setObjectName(QStringLiteral("psResolutionSpinBox"));
        psResolutionSpinBox->setMinimum(10);
        psResolutionSpinBox->setMaximum(2400);

        hboxLayout1->addWidget(psResolutionSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(hboxLayout1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);

        verticalLayout_3->addWidget(label_3);

        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        imageToolLabel = new QLabel(scrollAreaWidgetContents);
        imageToolLabel->setObjectName(QStringLiteral("imageToolLabel"));
        imageToolLabel->setWordWrap(false);

        horizontalLayout_3->addWidget(imageToolLabel);

        imageToolLineEdit = new QLineEdit(scrollAreaWidgetContents);
        imageToolLineEdit->setObjectName(QStringLiteral("imageToolLineEdit"));

        horizontalLayout_3->addWidget(imageToolLineEdit);

        imageToolChangeButton = new QPushButton(scrollAreaWidgetContents);
        imageToolChangeButton->setObjectName(QStringLiteral("imageToolChangeButton"));

        horizontalLayout_3->addWidget(imageToolChangeButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout_3->addWidget(label_4);

        line_4 = new QFrame(scrollAreaWidgetContents);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        webBrowserLabel = new QLabel(scrollAreaWidgetContents);
        webBrowserLabel->setObjectName(QStringLiteral("webBrowserLabel"));
        webBrowserLabel->setWordWrap(false);

        horizontalLayout_4->addWidget(webBrowserLabel);

        webBrowserLineEdit = new QLineEdit(scrollAreaWidgetContents);
        webBrowserLineEdit->setObjectName(QStringLiteral("webBrowserLineEdit"));

        horizontalLayout_4->addWidget(webBrowserLineEdit);

        webBrowserChangeButton = new QPushButton(scrollAreaWidgetContents);
        webBrowserChangeButton->setObjectName(QStringLiteral("webBrowserChangeButton"));

        horizontalLayout_4->addWidget(webBrowserChangeButton);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        verticalLayout_3->addWidget(label_8);

        line_6 = new QFrame(scrollAreaWidgetContents);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pdfViewerLabel = new QLabel(scrollAreaWidgetContents);
        pdfViewerLabel->setObjectName(QStringLiteral("pdfViewerLabel"));

        horizontalLayout_2->addWidget(pdfViewerLabel);

        pdfViewerLineEdit = new QLineEdit(scrollAreaWidgetContents);
        pdfViewerLineEdit->setObjectName(QStringLiteral("pdfViewerLineEdit"));

        horizontalLayout_2->addWidget(pdfViewerLineEdit);

        pdfViewerChangeButton = new QPushButton(scrollAreaWidgetContents);
        pdfViewerChangeButton->setObjectName(QStringLiteral("pdfViewerChangeButton"));

        horizontalLayout_2->addWidget(pdfViewerChangeButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        verticalLayout_3->addWidget(label_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        uniconverterLabel = new QLabel(scrollAreaWidgetContents);
        uniconverterLabel->setObjectName(QStringLiteral("uniconverterLabel"));
        uniconverterLabel->setWordWrap(false);

        horizontalLayout_5->addWidget(uniconverterLabel);

        uniconvertorLineEdit = new QLineEdit(scrollAreaWidgetContents);
        uniconvertorLineEdit->setObjectName(QStringLiteral("uniconvertorLineEdit"));

        horizontalLayout_5->addWidget(uniconvertorLineEdit);

        uniconvertorChangeButton = new QPushButton(scrollAreaWidgetContents);
        uniconvertorChangeButton->setObjectName(QStringLiteral("uniconvertorChangeButton"));

        horizontalLayout_5->addWidget(uniconvertorChangeButton);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_3->addWidget(label_5);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        latexConfigsListWidget = new QListWidget(scrollAreaWidgetContents);
        latexConfigsListWidget->setObjectName(QStringLiteral("latexConfigsListWidget"));

        horizontalLayout->addWidget(latexConfigsListWidget);

        verticalLayout_2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        verticalLayout_2->setSpacing(-1);
#endif
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        latexConfigUpButton = new QPushButton(scrollAreaWidgetContents);
        latexConfigUpButton->setObjectName(QStringLiteral("latexConfigUpButton"));

        verticalLayout_2->addWidget(latexConfigUpButton);

        latexConfigDownButton = new QPushButton(scrollAreaWidgetContents);
        latexConfigDownButton->setObjectName(QStringLiteral("latexConfigDownButton"));

        verticalLayout_2->addWidget(latexConfigDownButton);

        latexConfigAddButton = new QPushButton(scrollAreaWidgetContents);
        latexConfigAddButton->setObjectName(QStringLiteral("latexConfigAddButton"));

        verticalLayout_2->addWidget(latexConfigAddButton);

        latexConfigDeleteButton = new QPushButton(scrollAreaWidgetContents);
        latexConfigDeleteButton->setObjectName(QStringLiteral("latexConfigDeleteButton"));

        verticalLayout_2->addWidget(latexConfigDeleteButton);

        latexConfigChangeCommandButton = new QPushButton(scrollAreaWidgetContents);
        latexConfigChangeCommandButton->setObjectName(QStringLiteral("latexConfigChangeCommandButton"));

        verticalLayout_2->addWidget(latexConfigChangeCommandButton);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        latexEditorLabel = new QLabel(scrollAreaWidgetContents);
        latexEditorLabel->setObjectName(QStringLiteral("latexEditorLabel"));
        latexEditorLabel->setWordWrap(false);

        hboxLayout2->addWidget(latexEditorLabel);

        latexEditorLineEdit = new QLineEdit(scrollAreaWidgetContents);
        latexEditorLineEdit->setObjectName(QStringLiteral("latexEditorLineEdit"));

        hboxLayout2->addWidget(latexEditorLineEdit);

        latexEditorChangeButton = new QPushButton(scrollAreaWidgetContents);
        latexEditorChangeButton->setObjectName(QStringLiteral("latexEditorChangeButton"));

        hboxLayout2->addWidget(latexEditorChangeButton);


        verticalLayout_3->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        latexEmptyFrameCheckBox = new QCheckBox(scrollAreaWidgetContents);
        latexEmptyFrameCheckBox->setObjectName(QStringLiteral("latexEmptyFrameCheckBox"));

        hboxLayout3->addWidget(latexEmptyFrameCheckBox);

        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);

        latexEmbeddedEditorCheckBox = new QCheckBox(scrollAreaWidgetContents);
        latexEmbeddedEditorCheckBox->setObjectName(QStringLiteral("latexEmbeddedEditorCheckBox"));
        latexEmbeddedEditorCheckBox->setEnabled(true);

        hboxLayout3->addWidget(latexEmbeddedEditorCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        latexForceDPICheckBox = new QCheckBox(scrollAreaWidgetContents);
        latexForceDPICheckBox->setObjectName(QStringLiteral("latexForceDPICheckBox"));

        hboxLayout4->addWidget(latexForceDPICheckBox);

        spacerItem3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem3);

        latexResolutionLabel = new QLabel(scrollAreaWidgetContents);
        latexResolutionLabel->setObjectName(QStringLiteral("latexResolutionLabel"));
        latexResolutionLabel->setWordWrap(false);

        hboxLayout4->addWidget(latexResolutionLabel);

        latexResolutionSpinBox = new QSpinBox(scrollAreaWidgetContents);
        latexResolutionSpinBox->setObjectName(QStringLiteral("latexResolutionSpinBox"));
        latexResolutionSpinBox->setMinimum(10);
        latexResolutionSpinBox->setMaximum(2400);

        hboxLayout4->addWidget(latexResolutionSpinBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(hboxLayout4);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        spacerItem4 = new QSpacerItem(161, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem4);

        rescanButton = new QPushButton(Prefs_ExternalTools);
        rescanButton->setObjectName(QStringLiteral("rescanButton"));

        hboxLayout5->addWidget(rescanButton);


        verticalLayout->addLayout(hboxLayout5);

#ifndef QT_NO_SHORTCUT
        psToolLabel->setBuddy(psToolLineEdit);
        psResolutionLabel->setBuddy(psResolutionSpinBox);
        imageToolLabel->setBuddy(imageToolLineEdit);
        webBrowserLabel->setBuddy(imageToolLineEdit);
        pdfViewerLabel->setBuddy(pdfViewerLineEdit);
        uniconverterLabel->setBuddy(imageToolLineEdit);
        latexEditorLabel->setBuddy(latexEditorLineEdit);
        latexResolutionLabel->setBuddy(latexResolutionSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, psToolLineEdit);
        QWidget::setTabOrder(psToolLineEdit, psToolChangeButton);
        QWidget::setTabOrder(psToolChangeButton, psAntialiasTextCheckBox);
        QWidget::setTabOrder(psAntialiasTextCheckBox, psAntialiasGraphicsCheckBox);
        QWidget::setTabOrder(psAntialiasGraphicsCheckBox, psResolutionSpinBox);
        QWidget::setTabOrder(psResolutionSpinBox, imageToolLineEdit);
        QWidget::setTabOrder(imageToolLineEdit, imageToolChangeButton);
        QWidget::setTabOrder(imageToolChangeButton, webBrowserLineEdit);
        QWidget::setTabOrder(webBrowserLineEdit, webBrowserChangeButton);
        QWidget::setTabOrder(webBrowserChangeButton, pdfViewerLineEdit);
        QWidget::setTabOrder(pdfViewerLineEdit, pdfViewerChangeButton);
        QWidget::setTabOrder(pdfViewerChangeButton, uniconvertorLineEdit);
        QWidget::setTabOrder(uniconvertorLineEdit, uniconvertorChangeButton);
        QWidget::setTabOrder(uniconvertorChangeButton, latexConfigsListWidget);
        QWidget::setTabOrder(latexConfigsListWidget, latexEditorLineEdit);
        QWidget::setTabOrder(latexEditorLineEdit, latexEmptyFrameCheckBox);
        QWidget::setTabOrder(latexEmptyFrameCheckBox, latexEmbeddedEditorCheckBox);
        QWidget::setTabOrder(latexEmbeddedEditorCheckBox, latexForceDPICheckBox);
        QWidget::setTabOrder(latexForceDPICheckBox, latexResolutionSpinBox);
        QWidget::setTabOrder(latexResolutionSpinBox, latexConfigUpButton);
        QWidget::setTabOrder(latexConfigUpButton, latexConfigDownButton);
        QWidget::setTabOrder(latexConfigDownButton, latexConfigAddButton);
        QWidget::setTabOrder(latexConfigAddButton, latexConfigDeleteButton);
        QWidget::setTabOrder(latexConfigDeleteButton, latexConfigChangeCommandButton);
        QWidget::setTabOrder(latexConfigChangeCommandButton, latexEditorChangeButton);
        QWidget::setTabOrder(latexEditorChangeButton, rescanButton);

        retranslateUi(Prefs_ExternalTools);

        QMetaObject::connectSlotsByName(Prefs_ExternalTools);
    } // setupUi

    void retranslateUi(QWidget *Prefs_ExternalTools)
    {
        Prefs_ExternalTools->setWindowTitle(QApplication::translate("Prefs_ExternalTools", "External Tools", 0));
        label_6->setText(QApplication::translate("Prefs_ExternalTools", "External Tools and Applications", 0));
        label_2->setText(QApplication::translate("Prefs_ExternalTools", "PostScript Interpreter", 0));
        psToolLabel->setText(QApplication::translate("Prefs_ExternalTools", "&Name of Executable:", 0));
#ifndef QT_NO_TOOLTIP
        psToolLineEdit->setToolTip(QApplication::translate("Prefs_ExternalTools", "<qt>Add the path for the Ghostscript interpreter. On Windows, please note it is important to note you need to use the program named gswin32c.exe - NOT gswin32.exe. Otherwise, this maybe cause a hang when starting Scribus.</qt>", 0));
#endif // QT_NO_TOOLTIP
        psToolChangeButton->setText(QApplication::translate("Prefs_ExternalTools", "&Change...", 0));
        psToolChangeButton->setShortcut(QApplication::translate("Prefs_ExternalTools", "Alt+C", 0));
#ifndef QT_NO_TOOLTIP
        psAntialiasTextCheckBox->setToolTip(QApplication::translate("Prefs_ExternalTools", "Antialias text for EPS and PDF onscreen rendering", 0));
#endif // QT_NO_TOOLTIP
        psAntialiasTextCheckBox->setText(QApplication::translate("Prefs_ExternalTools", "Antialias &Text", 0));
        psAntialiasTextCheckBox->setShortcut(QApplication::translate("Prefs_ExternalTools", "Alt+T", 0));
#ifndef QT_NO_TOOLTIP
        psAntialiasGraphicsCheckBox->setToolTip(QApplication::translate("Prefs_ExternalTools", "Antialias graphics for EPS and PDF onscreen rendering", 0));
#endif // QT_NO_TOOLTIP
        psAntialiasGraphicsCheckBox->setText(QApplication::translate("Prefs_ExternalTools", "Antialias &Graphics", 0));
        psAntialiasGraphicsCheckBox->setShortcut(QApplication::translate("Prefs_ExternalTools", "Alt+G", 0));
        psResolutionLabel->setText(QApplication::translate("Prefs_ExternalTools", "Resolution:", 0));
        psResolutionSpinBox->setSuffix(QApplication::translate("Prefs_ExternalTools", " dpi", 0));
        label_3->setText(QApplication::translate("Prefs_ExternalTools", "Image Processing Tool", 0));
        imageToolLabel->setText(QApplication::translate("Prefs_ExternalTools", "Name of &Executable:", 0));
#ifndef QT_NO_TOOLTIP
        imageToolLineEdit->setToolTip(QApplication::translate("Prefs_ExternalTools", "<qt>File system location for graphics editor. If you use gimp and your distribution includes it, we recommend 'gimp-remote', as it allows you to edit the image in an already running instance of gimp.</qt>", 0));
#endif // QT_NO_TOOLTIP
        imageToolChangeButton->setText(QApplication::translate("Prefs_ExternalTools", "&Change...", 0));
        imageToolChangeButton->setShortcut(QApplication::translate("Prefs_ExternalTools", "Alt+C", 0));
        label_4->setText(QApplication::translate("Prefs_ExternalTools", "Web Browser", 0));
        webBrowserLabel->setText(QApplication::translate("Prefs_ExternalTools", "Name of &Executable:", 0));
#ifndef QT_NO_TOOLTIP
        webBrowserLineEdit->setToolTip(QApplication::translate("Prefs_ExternalTools", "<qt>File system location for web browser.</qt>", 0));
#endif // QT_NO_TOOLTIP
        webBrowserChangeButton->setText(QApplication::translate("Prefs_ExternalTools", "&Change...", 0));
        webBrowserChangeButton->setShortcut(QApplication::translate("Prefs_ExternalTools", "Alt+C", 0));
        label_8->setText(QApplication::translate("Prefs_ExternalTools", "PDF Viewer", 0));
        pdfViewerLabel->setText(QApplication::translate("Prefs_ExternalTools", "Name of &Executable:", 0));
#ifndef QT_NO_TOOLTIP
        pdfViewerLineEdit->setToolTip(QApplication::translate("Prefs_ExternalTools", "<qt>File system location for PDF viewer.</qt>", 0));
#endif // QT_NO_TOOLTIP
        pdfViewerChangeButton->setText(QApplication::translate("Prefs_ExternalTools", "&Change...", 0));
        label_7->setText(QApplication::translate("Prefs_ExternalTools", "Uniconvertor", 0));
        uniconverterLabel->setText(QApplication::translate("Prefs_ExternalTools", "Name of &Executable:", 0));
#ifndef QT_NO_TOOLTIP
        uniconvertorLineEdit->setToolTip(QApplication::translate("Prefs_ExternalTools", "<qt>File system location for Uniconvertor.</qt>", 0));
#endif // QT_NO_TOOLTIP
        uniconvertorChangeButton->setText(QApplication::translate("Prefs_ExternalTools", "&Change...", 0));
        uniconvertorChangeButton->setShortcut(QApplication::translate("Prefs_ExternalTools", "Alt+C", 0));
        label_5->setText(QApplication::translate("Prefs_ExternalTools", "Render Frames", 0));
        label->setText(QApplication::translate("Prefs_ExternalTools", "Configurations:", 0));
        latexConfigUpButton->setText(QApplication::translate("Prefs_ExternalTools", "Up", 0));
        latexConfigDownButton->setText(QApplication::translate("Prefs_ExternalTools", "Down", 0));
        latexConfigAddButton->setText(QApplication::translate("Prefs_ExternalTools", "Add", 0));
        latexConfigDeleteButton->setText(QApplication::translate("Prefs_ExternalTools", "Delete", 0));
        latexConfigChangeCommandButton->setText(QApplication::translate("Prefs_ExternalTools", "Change...", 0));
        latexEditorLabel->setText(QApplication::translate("Prefs_ExternalTools", "External Editor:", 0));
#ifndef QT_NO_TOOLTIP
        latexEditorLineEdit->setToolTip(QApplication::translate("Prefs_ExternalTools", "<qt>Path to the editor executable.</qt>", 0));
#endif // QT_NO_TOOLTIP
        latexEditorChangeButton->setText(QApplication::translate("Prefs_ExternalTools", "&Change...", 0));
        latexEditorChangeButton->setShortcut(QApplication::translate("Prefs_ExternalTools", "Alt+C", 0));
        latexEmptyFrameCheckBox->setText(QApplication::translate("Prefs_ExternalTools", "Start with empty frame", 0));
        latexEmbeddedEditorCheckBox->setText(QApplication::translate("Prefs_ExternalTools", "Use Embedded Editor", 0));
#ifndef QT_NO_TOOLTIP
        latexForceDPICheckBox->setToolTip(QApplication::translate("Prefs_ExternalTools", "Always use the configured DPI setting for calculating the size, even if the image file reports something different.", 0));
#endif // QT_NO_TOOLTIP
        latexForceDPICheckBox->setText(QApplication::translate("Prefs_ExternalTools", "Force DPI", 0));
        latexResolutionLabel->setText(QApplication::translate("Prefs_ExternalTools", "Resolution:", 0));
        latexResolutionSpinBox->setSuffix(QApplication::translate("Prefs_ExternalTools", " dpi", 0));
#ifndef QT_NO_TOOLTIP
        rescanButton->setToolTip(QApplication::translate("Prefs_ExternalTools", "Rescan for the external tools if they do not exist in the already specified location", 0));
#endif // QT_NO_TOOLTIP
        rescanButton->setText(QApplication::translate("Prefs_ExternalTools", "&Rescan", 0));
        rescanButton->setShortcut(QApplication::translate("Prefs_ExternalTools", "Alt+R", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_ExternalTools: public Ui_Prefs_ExternalTools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_EXTERNALTOOLSBASE_H
