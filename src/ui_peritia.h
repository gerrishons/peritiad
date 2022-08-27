/********************************************************************************
** Form generated from reading UI file 'peritia.ui'
**
** Created by: Qt User Interface Compiler version 5.15.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERITIA_H
#define UI_PERITIA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Peritia
{
public:
    QAction *actionAbout;
    QAction *actionUnderline;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionFont;
    QAction *actionRedo;
    QAction *actionUndo;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionExit;
    QAction *actionPrint;
    QAction *actionSave_as;
    QAction *actionSave;
    QAction *actionOpen;
    QAction *actionSummary;
    QAction *actionGyug;
    QAction *actionPeritiaUpdate;
    QAction *actionSample;
    QAction *actionChangePic;
    QAction *actionHelp;
    QAction *actionPreference;
    QAction *actionZoom_in;
    QAction *actionZoom_out;
    QAction *actionFullScreen;
    QAction *actionMinimize;
    QAction *actionWebprobe;
    QAction *actionStatus_Bar;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QLabel *day_iconlbl;
    QVBoxLayout *verticalLayout;
    QLabel *clock_label;
    QLabel *day_label;
    QLabel *label;
    QGroupBox *groupBox;
    QSpinBox *spinBox;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuPreference;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Peritia)
    {
        if (Peritia->objectName().isEmpty())
            Peritia->setObjectName(QString::fromUtf8("Peritia"));
        Peritia->resize(900, 700);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Peritia->sizePolicy().hasHeightForWidth());
        Peritia->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/peritia-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Peritia->setWindowIcon(icon);
        Peritia->setInputMethodHints(Qt::ImhNone);
        Peritia->setIconSize(QSize(35, 35));
        Peritia->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Peritia->setDocumentMode(false);
        Peritia->setTabShape(QTabWidget::Rounded);
        actionAbout = new QAction(Peritia);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon1);
        actionUnderline = new QAction(Peritia);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        actionUnderline->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon2);
        actionBold = new QAction(Peritia);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionBold->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon3);
        actionItalic = new QAction(Peritia);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        actionItalic->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon4);
        actionFont = new QAction(Peritia);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon5);
        actionRedo = new QAction(Peritia);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/edit_redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon6);
        actionUndo = new QAction(Peritia);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/edit_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon7);
        actionPaste = new QAction(Peritia);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon8);
        actionCut = new QAction(Peritia);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon9);
        actionCopy = new QAction(Peritia);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon10);
        actionExit = new QAction(Peritia);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon11;
        QString iconThemeName = QString::fromUtf8("exit.png");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon11 = QIcon::fromTheme(iconThemeName);
        } else {
            icon11.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionExit->setIcon(icon11);
        actionPrint = new QAction(Peritia);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon12);
        actionSave_as = new QAction(Peritia);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon13);
        actionSave = new QAction(Peritia);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon14);
        actionOpen = new QAction(Peritia);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon15);
        actionSummary = new QAction(Peritia);
        actionSummary->setObjectName(QString::fromUtf8("actionSummary"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/summary-pic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSummary->setIcon(icon16);
        actionGyug = new QAction(Peritia);
        actionGyug->setObjectName(QString::fromUtf8("actionGyug"));
        actionPeritiaUpdate = new QAction(Peritia);
        actionPeritiaUpdate->setObjectName(QString::fromUtf8("actionPeritiaUpdate"));
        actionSample = new QAction(Peritia);
        actionSample->setObjectName(QString::fromUtf8("actionSample"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/celebratory.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSample->setIcon(icon17);
        actionChangePic = new QAction(Peritia);
        actionChangePic->setObjectName(QString::fromUtf8("actionChangePic"));
        actionChangePic->setIcon(icon17);
        actionHelp = new QAction(Peritia);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionHelp->setIcon(icon);
        actionPreference = new QAction(Peritia);
        actionPreference->setObjectName(QString::fromUtf8("actionPreference"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreference->setIcon(icon18);
        actionZoom_in = new QAction(Peritia);
        actionZoom_in->setObjectName(QString::fromUtf8("actionZoom_in"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_in->setIcon(icon19);
        actionZoom_out = new QAction(Peritia);
        actionZoom_out->setObjectName(QString::fromUtf8("actionZoom_out"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/zoom-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_out->setIcon(icon20);
        actionFullScreen = new QAction(Peritia);
        actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullScreen->setIcon(icon21);
        actionMinimize = new QAction(Peritia);
        actionMinimize->setObjectName(QString::fromUtf8("actionMinimize"));
        actionMinimize->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/minimize.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMinimize->setIcon(icon22);
        actionWebprobe = new QAction(Peritia);
        actionWebprobe->setObjectName(QString::fromUtf8("actionWebprobe"));
        actionStatus_Bar = new QAction(Peritia);
        actionStatus_Bar->setObjectName(QString::fromUtf8("actionStatus_Bar"));
        actionStatus_Bar->setCheckable(true);
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/icons/statusbar/status-bar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStatus_Bar->setIcon(icon23);
        centralWidget = new QWidget(Peritia);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 3, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(245, 224, 176, 255), stop:0.09 rgba(246, 189, 237, 255), stop:0.14 rgba(194, 207, 246, 255), stop:0.19 rgba(184, 160, 168, 255), stop:0.25 rgba(171, 186, 248, 255), stop:0.32 rgba(243, 248, 224, 255), stop:0.385 rgba(249, 162, 183, 255), stop:0.47 rgba(100, 115, 124, 255), stop:0.58 rgba(251, 205, 202, 255), stop:0.65 rgba(170, 128, 185, 255), stop:0.75 rgba(252, 222, 204, 255), stop:0.805 rgba(206, 122, 218, 255), stop:0.86 rgba(254, 223, 175, 255), stop:0.91 rgba(254, 236, 244, 255), stop:1 rgba(255, 191, 221, 255));"));

        gridLayout_2->addWidget(pushButton_2, 11, 1, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(100, 80));
        pushButton_6->setMaximumSize(QSize(100, 70));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon24);
        pushButton_6->setIconSize(QSize(100, 100));
        pushButton_6->setFlat(true);

        gridLayout_2->addWidget(pushButton_6, 2, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/images/vine.png);"));

        gridLayout_2->addWidget(label_2, 7, 1, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 13, 2, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFocusPolicy(Qt::ClickFocus);
        pushButton_3->setLayoutDirection(Qt::LeftToRight);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setFlat(false);

        gridLayout_2->addWidget(pushButton_3, 13, 7, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 14, 1, 1, 1);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_2->addWidget(checkBox, 9, 1, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFocusPolicy(Qt::WheelFocus);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(152, 106, 68);"));
        pushButton->setFlat(true);

        gridLayout_2->addWidget(pushButton, 10, 1, 1, 1);

        day_iconlbl = new QLabel(centralWidget);
        day_iconlbl->setObjectName(QString::fromUtf8("day_iconlbl"));
        day_iconlbl->setMinimumSize(QSize(85, 85));
        day_iconlbl->setMaximumSize(QSize(96, 96));

        gridLayout_2->addWidget(day_iconlbl, 0, 7, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        clock_label = new QLabel(centralWidget);
        clock_label->setObjectName(QString::fromUtf8("clock_label"));
        clock_label->setMinimumSize(QSize(72, 21));
        clock_label->setMaximumSize(QSize(72, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Cantarell"));
        font.setBold(false);
        font.setWeight(50);
        clock_label->setFont(font);
        clock_label->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));\n"
"border-top-color: rgb(152, 106, 68);"));
        clock_label->setFrameShape(QFrame::StyledPanel);
        clock_label->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(clock_label, 0, Qt::AlignRight);

        day_label = new QLabel(centralWidget);
        day_label->setObjectName(QString::fromUtf8("day_label"));
        day_label->setMinimumSize(QSize(75, 50));
        day_label->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(day_label, 0, Qt::AlignRight);


        gridLayout_2->addLayout(verticalLayout, 0, 5, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 100));
        label->setMaximumSize(QSize(150, 100));
        label->setStyleSheet(QString::fromUtf8("image: url(:/images/scalabli-logo.png);"));

        gridLayout_2->addWidget(label, 0, 1, 1, 1, Qt::AlignTop);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("image: url(:/images/daylight.jpg);"));
        groupBox->setFlat(false);
        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(50, 70, 45, 28));

        gridLayout_2->addWidget(groupBox, 7, 2, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        Peritia->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Peritia);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuPreference = new QMenu(menuBar);
        menuPreference->setObjectName(QString::fromUtf8("menuPreference"));
        Peritia->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Peritia);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setFocusPolicy(Qt::WheelFocus);
        mainToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 190, 111);"));
        mainToolBar->setMovable(false);
        Peritia->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Peritia);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nimbus Mono PS"));
        font1.setBold(true);
        font1.setWeight(75);
        statusBar->setFont(font1);
        Peritia->setStatusBar(statusBar);
        toolBar = new QToolBar(Peritia);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMinimumSize(QSize(0, 0));
        toolBar->setMaximumSize(QSize(50, 16777215));
        toolBar->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(245, 224, 176, 255), stop:0.09 rgba(246, 189, 237, 255), stop:0.14 rgba(194, 207, 246, 255), stop:0.19 rgba(184, 160, 168, 255), stop:0.25 rgba(171, 186, 248, 255), stop:0.32 rgba(243, 248, 224, 255), stop:0.385 rgba(249, 162, 183, 255), stop:0.47 rgba(100, 115, 124, 255), stop:0.58 rgba(251, 205, 202, 255), stop:0.65 rgba(170, 128, 185, 255), stop:0.75 rgba(252, 222, 204, 255), stop:0.805 rgba(206, 122, 218, 255), stop:0.86 rgba(254, 223, 175, 255), stop:0.91 rgba(254, 236, 244, 255), stop:1 rgba(255, 191, 221, 255));"));
        toolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Peritia->addToolBar(Qt::LeftToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuPreference->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSummary);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionFont);
        menuEdit->addSeparator();
        menuEdit->addAction(actionZoom_in);
        menuEdit->addAction(actionZoom_out);
        menuEdit->addAction(actionFullScreen);
        menuEdit->addAction(actionMinimize);
        menuEdit->addAction(actionStatus_Bar);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionAbout);
        menuHelp->addSeparator();
        menuPreference->addAction(actionPreference);
        mainToolBar->addAction(actionSummary);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSave_as);
        mainToolBar->addAction(actionPrint);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFont);
        mainToolBar->addAction(actionBold);
        mainToolBar->addAction(actionItalic);
        mainToolBar->addAction(actionUnderline);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPreference);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAbout);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExit);
        mainToolBar->addSeparator();
        toolBar->addAction(actionChangePic);
        toolBar->addAction(actionExit);

        retranslateUi(Peritia);
        QObject::connect(pushButton_2, SIGNAL(clicked()), actionChangePic, SLOT(trigger()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), actionSummary, SLOT(trigger()));
        QObject::connect(actionWebprobe, SIGNAL(triggered()), actionFont, SLOT(trigger()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), actionPrint, SLOT(trigger()));

        pushButton_3->setDefault(true);
        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(Peritia);
    } // setupUi

    void retranslateUi(QMainWindow *Peritia)
    {
        Peritia->setWindowTitle(QCoreApplication::translate("Peritia", "Peritia: All in one assistive software", nullptr));
        actionAbout->setText(QCoreApplication::translate("Peritia", "About", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("Peritia", "<html><head/><body><p>About Peritia </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAbout->setShortcut(QCoreApplication::translate("Peritia", "Shift+F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setProperty("Jhy", QVariant(QString()));
        actionAbout->setProperty("ActionHelp", QVariant(QString()));
        actionUnderline->setText(QCoreApplication::translate("Peritia", "Underline", nullptr));
#if QT_CONFIG(tooltip)
        actionUnderline->setToolTip(QCoreApplication::translate("Peritia", "Underline", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionUnderline->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBold->setText(QCoreApplication::translate("Peritia", "actionBold", nullptr));
#if QT_CONFIG(tooltip)
        actionBold->setToolTip(QCoreApplication::translate("Peritia", "Bold", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionBold->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionItalic->setText(QCoreApplication::translate("Peritia", "Italic", nullptr));
#if QT_CONFIG(tooltip)
        actionItalic->setToolTip(QCoreApplication::translate("Peritia", "Italic font", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionItalic->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont->setText(QCoreApplication::translate("Peritia", "Font", nullptr));
#if QT_CONFIG(shortcut)
        actionFont->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("Peritia", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("Peritia", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("Peritia", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("Peritia", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("Peritia", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("Peritia", "Quit", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("Peritia", "Exit peritia", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("Peritia", "Print", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint->setToolTip(QCoreApplication::translate("Peritia", "Print file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("Peritia", "Save as", nullptr));
#if QT_CONFIG(tooltip)
        actionSave_as->setToolTip(QCoreApplication::translate("Peritia", "Save file as", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("Peritia", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("Peritia", "Save", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("Peritia", "Save file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("Peritia", "Open", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("Peritia", "Open file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSummary->setText(QCoreApplication::translate("Peritia", "Summary", nullptr));
#if QT_CONFIG(tooltip)
        actionSummary->setToolTip(QCoreApplication::translate("Peritia", "<html><head/><body><p>summary about ur syd</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSummary->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGyug->setText(QCoreApplication::translate("Peritia", "Gyug", nullptr));
        actionPeritiaUpdate->setText(QCoreApplication::translate("Peritia", "PeritiaUpdate", nullptr));
        actionSample->setText(QCoreApplication::translate("Peritia", "Sample", nullptr));
        actionChangePic->setText(QCoreApplication::translate("Peritia", "ChangePic", nullptr));
        actionHelp->setText(QCoreApplication::translate("Peritia", "Help", nullptr));
#if QT_CONFIG(shortcut)
        actionHelp->setShortcut(QCoreApplication::translate("Peritia", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreference->setText(QCoreApplication::translate("Peritia", "Preference", nullptr));
#if QT_CONFIG(shortcut)
        actionPreference->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_in->setText(QCoreApplication::translate("Peritia", "Zoom in", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_in->setShortcut(QCoreApplication::translate("Peritia", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_out->setText(QCoreApplication::translate("Peritia", "Zoom out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_out->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFullScreen->setText(QCoreApplication::translate("Peritia", "Full Screen", nullptr));
#if QT_CONFIG(shortcut)
        actionFullScreen->setShortcut(QCoreApplication::translate("Peritia", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMinimize->setText(QCoreApplication::translate("Peritia", "Minimize", nullptr));
        actionWebprobe->setText(QCoreApplication::translate("Peritia", "Webprobe", nullptr));
#if QT_CONFIG(shortcut)
        actionWebprobe->setShortcut(QCoreApplication::translate("Peritia", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStatus_Bar->setText(QCoreApplication::translate("Peritia", "Status Bar", nullptr));
        label_3->setText(QCoreApplication::translate("Peritia", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Peritia", "PushButton", nullptr));
#if QT_CONFIG(statustip)
        pushButton_6->setStatusTip(QCoreApplication::translate("Peritia", "Click this button to see various tools incorporated in this software", nullptr));
#endif // QT_CONFIG(statustip)
        pushButton_6->setText(QString());
        label_2->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("Peritia", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Peritia", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Peritia", "PushButton", nullptr));
        checkBox->setText(QCoreApplication::translate("Peritia", "CheckBox", nullptr));
        pushButton->setText(QCoreApplication::translate("Peritia", "PushButton", nullptr));
#if QT_CONFIG(statustip)
        day_iconlbl->setStatusTip(QCoreApplication::translate("Peritia", "Calender showing today's date", nullptr));
#endif // QT_CONFIG(statustip)
        day_iconlbl->setText(QString());
#if QT_CONFIG(statustip)
        clock_label->setStatusTip(QCoreApplication::translate("Peritia", "Clock showing current time", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        clock_label->setWhatsThis(QCoreApplication::translate("Peritia", "Clock", nullptr));
#endif // QT_CONFIG(whatsthis)
        clock_label->setText(QCoreApplication::translate("Peritia", "Display clock.  ", nullptr));
#if QT_CONFIG(statustip)
        day_label->setStatusTip(QCoreApplication::translate("Peritia", "Calender showing today's day", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        day_label->setWhatsThis(QCoreApplication::translate("Peritia", "fgghgg", nullptr));
#endif // QT_CONFIG(whatsthis)
        day_label->setText(QCoreApplication::translate("Peritia", "Day label", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Peritia", "GroupBox", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Peritia", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Peritia", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Peritia", "Help", nullptr));
        menuPreference->setTitle(QCoreApplication::translate("Peritia", "Settings", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Peritia", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Peritia: public Ui_Peritia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERITIA_H
