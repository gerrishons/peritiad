/********************************************************************************
** Form generated from reading UI file 'peritia.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERITIA_H
#define UI_PERITIA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QAction *actionGoHome;
    QAction *actionHelp;
    QAction *actionPreference;
    QAction *actionZoom_in;
    QAction *actionZoom_out;
    QAction *actionFullScreen;
    QAction *actionMinimize;
    QAction *actionWebprobe;
    QAction *actionAlign_ToolBar;
    QAction *actionText2ASL;
    QAction *actionMuteSound;
    QAction *actionShowStatusBar;
    QAction *actionHideStatusBar;
    QAction *actionEchoChanged;
    QAction *actionHideLeftToolBar;
    QAction *actionListWidgetItemClicked;
    QAction *actionKeyBoardShortcuts;
    QAction *actionGetInvolved;
    QAction *actionMakeADonation;
    QAction *actionSubmitFeedback;
    QAction *actionMakeADonationStatus;
    QAction *actionAccount;
    QAction *actionExport_Student_logs;
    QAction *actionInternetConnectionStatus;
    QAction *actionCloseDockWidget;
    QAction *actionCurrentDateTime;
    QAction *actionCheck_for_updates;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_12;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *aboutPushButton;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout;
    QLabel *clockLabel;
    QLabel *dayLabel;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLabel *dateLabel;
    QLabel *logoLabel;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QPushButton *explorePushButton;
    QLabel *illustrationLabel;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuStatus_Bar;
    QMenu *menuHelp;
    QMenu *menuPreference;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_3;

    void setupUi(QMainWindow *Peritia)
    {
        if (Peritia->objectName().isEmpty())
            Peritia->setObjectName(QString::fromUtf8("Peritia"));
        Peritia->resize(1435, 813);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Peritia->sizePolicy().hasHeightForWidth());
        Peritia->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/buttons/accessibility.png"), QSize(), QIcon::Normal, QIcon::Off);
        Peritia->setWindowIcon(icon);
        Peritia->setInputMethodHints(Qt::ImhNone);
        Peritia->setIconSize(QSize(35, 35));
        Peritia->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Peritia->setDocumentMode(false);
        Peritia->setTabShape(QTabWidget::Triangular);
        actionAbout = new QAction(Peritia);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/buttons/info.png"), QSize(), QIcon::Normal, QIcon::Off);
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
        icon11.addFile(QString::fromUtf8(":/icons/buttons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
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
        actionGoHome = new QAction(Peritia);
        actionGoHome->setObjectName(QString::fromUtf8("actionGoHome"));
        QIcon icon18;
        QString iconThemeName = QString::fromUtf8("computer");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon18 = QIcon::fromTheme(iconThemeName);
        } else {
            icon18.addFile(QString::fromUtf8(":/images/celebratory.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionGoHome->setIcon(icon18);
        actionHelp = new QAction(Peritia);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/peritia-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon19);
        actionPreference = new QAction(Peritia);
        actionPreference->setObjectName(QString::fromUtf8("actionPreference"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/icons/buttons/settings-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreference->setIcon(icon20);
        actionZoom_in = new QAction(Peritia);
        actionZoom_in->setObjectName(QString::fromUtf8("actionZoom_in"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_in->setIcon(icon21);
        actionZoom_out = new QAction(Peritia);
        actionZoom_out->setObjectName(QString::fromUtf8("actionZoom_out"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/zoom-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_out->setIcon(icon22);
        actionFullScreen = new QAction(Peritia);
        actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/icons/buttons/fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullScreen->setIcon(icon23);
        actionMinimize = new QAction(Peritia);
        actionMinimize->setObjectName(QString::fromUtf8("actionMinimize"));
        actionMinimize->setCheckable(true);
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/minimize.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMinimize->setIcon(icon24);
        actionWebprobe = new QAction(Peritia);
        actionWebprobe->setObjectName(QString::fromUtf8("actionWebprobe"));
        QIcon icon25;
        iconThemeName = QString::fromUtf8("applications-science");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon25 = QIcon::fromTheme(iconThemeName);
        } else {
            icon25.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionWebprobe->setIcon(icon25);
        actionAlign_ToolBar = new QAction(Peritia);
        actionAlign_ToolBar->setObjectName(QString::fromUtf8("actionAlign_ToolBar"));
        actionText2ASL = new QAction(Peritia);
        actionText2ASL->setObjectName(QString::fromUtf8("actionText2ASL"));
        QIcon icon26;
        iconThemeName = QString::fromUtf8("system-software-update");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon26 = QIcon::fromTheme(iconThemeName);
        } else {
            icon26.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionText2ASL->setIcon(icon26);
        actionMuteSound = new QAction(Peritia);
        actionMuteSound->setObjectName(QString::fromUtf8("actionMuteSound"));
        actionMuteSound->setCheckable(true);
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/icons/buttons/sign-language.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMuteSound->setIcon(icon27);
        actionShowStatusBar = new QAction(Peritia);
        actionShowStatusBar->setObjectName(QString::fromUtf8("actionShowStatusBar"));
        actionShowStatusBar->setCheckable(true);
        actionHideStatusBar = new QAction(Peritia);
        actionHideStatusBar->setObjectName(QString::fromUtf8("actionHideStatusBar"));
        actionHideStatusBar->setCheckable(true);
        actionEchoChanged = new QAction(Peritia);
        actionEchoChanged->setObjectName(QString::fromUtf8("actionEchoChanged"));
        actionHideLeftToolBar = new QAction(Peritia);
        actionHideLeftToolBar->setObjectName(QString::fromUtf8("actionHideLeftToolBar"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/icons/buttons/left-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHideLeftToolBar->setIcon(icon28);
        actionListWidgetItemClicked = new QAction(Peritia);
        actionListWidgetItemClicked->setObjectName(QString::fromUtf8("actionListWidgetItemClicked"));
        actionKeyBoardShortcuts = new QAction(Peritia);
        actionKeyBoardShortcuts->setObjectName(QString::fromUtf8("actionKeyBoardShortcuts"));
        QIcon icon29;
        iconThemeName = QString::fromUtf8("preferences-desktop-keyboard");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon29 = QIcon::fromTheme(iconThemeName);
        } else {
            icon29.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionKeyBoardShortcuts->setIcon(icon29);
        actionGetInvolved = new QAction(Peritia);
        actionGetInvolved->setObjectName(QString::fromUtf8("actionGetInvolved"));
        QIcon icon30;
        iconThemeName = QString::fromUtf8("accessories-character-map");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon30 = QIcon::fromTheme(iconThemeName);
        } else {
            icon30.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionGetInvolved->setIcon(icon30);
        actionMakeADonation = new QAction(Peritia);
        actionMakeADonation->setObjectName(QString::fromUtf8("actionMakeADonation"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/icons/buttons/donate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMakeADonation->setIcon(icon31);
        actionSubmitFeedback = new QAction(Peritia);
        actionSubmitFeedback->setObjectName(QString::fromUtf8("actionSubmitFeedback"));
        QIcon icon32;
        iconThemeName = QString::fromUtf8("mail-signed-verified");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon32 = QIcon::fromTheme(iconThemeName);
        } else {
            icon32.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSubmitFeedback->setIcon(icon32);
        actionMakeADonationStatus = new QAction(Peritia);
        actionMakeADonationStatus->setObjectName(QString::fromUtf8("actionMakeADonationStatus"));
        actionAccount = new QAction(Peritia);
        actionAccount->setObjectName(QString::fromUtf8("actionAccount"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/icons/buttons/account.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAccount->setIcon(icon33);
        actionExport_Student_logs = new QAction(Peritia);
        actionExport_Student_logs->setObjectName(QString::fromUtf8("actionExport_Student_logs"));
        actionInternetConnectionStatus = new QAction(Peritia);
        actionInternetConnectionStatus->setObjectName(QString::fromUtf8("actionInternetConnectionStatus"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/icons/buttons/settings-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInternetConnectionStatus->setIcon(icon34);
        actionCloseDockWidget = new QAction(Peritia);
        actionCloseDockWidget->setObjectName(QString::fromUtf8("actionCloseDockWidget"));
        actionCurrentDateTime = new QAction(Peritia);
        actionCurrentDateTime->setObjectName(QString::fromUtf8("actionCurrentDateTime"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/icons/date/date-04.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCurrentDateTime->setIcon(icon35);
        actionCheck_for_updates = new QAction(Peritia);
        actionCheck_for_updates->setObjectName(QString::fromUtf8("actionCheck_for_updates"));
        actionCheck_for_updates->setIcon(icon26);
        centralWidget = new QWidget(Peritia);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        horizontalLayout_2->addWidget(pushButton_12);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout_2->addWidget(pushButton_8);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);


        gridLayout_2->addLayout(horizontalLayout_2, 10, 2, 1, 1);

        aboutPushButton = new QPushButton(centralWidget);
        aboutPushButton->setObjectName(QString::fromUtf8("aboutPushButton"));
        aboutPushButton->setMaximumSize(QSize(17, 17));
        aboutPushButton->setFocusPolicy(Qt::ClickFocus);
        QIcon icon36;
        iconThemeName = QString::fromUtf8("dialog-question");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon36 = QIcon::fromTheme(iconThemeName);
        } else {
            icon36.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        aboutPushButton->setIcon(icon36);
        aboutPushButton->setFlat(true);

        gridLayout_2->addWidget(aboutPushButton, 10, 5, 1, 1, Qt::AlignRight);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFocusPolicy(Qt::ClickFocus);
        pushButton_3->setLayoutDirection(Qt::LeftToRight);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setFlat(false);

        gridLayout_2->addWidget(pushButton_3, 10, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        clockLabel = new QLabel(centralWidget);
        clockLabel->setObjectName(QString::fromUtf8("clockLabel"));
        clockLabel->setMinimumSize(QSize(72, 21));
        clockLabel->setMaximumSize(QSize(72, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("FontAwesome")});
        font.setPointSize(16);
        font.setBold(true);
        clockLabel->setFont(font);
        clockLabel->setStyleSheet(QString::fromUtf8("border-color: rgb(192, 28, 40);\n"
"border-radius:5px;"));
        clockLabel->setFrameShape(QFrame::StyledPanel);
        clockLabel->setFrameShadow(QFrame::Sunken);
        clockLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(clockLabel, 0, Qt::AlignRight);

        dayLabel = new QLabel(centralWidget);
        dayLabel->setObjectName(QString::fromUtf8("dayLabel"));
        dayLabel->setMinimumSize(QSize(75, 65));
        dayLabel->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(dayLabel, 0, Qt::AlignRight|Qt::AlignTop);


        gridLayout_2->addLayout(verticalLayout, 1, 2, 1, 2);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(245, 224, 176, 255), stop:0.09 rgba(246, 189, 237, 255), stop:0.14 rgba(194, 207, 246, 255), stop:0.19 rgba(184, 160, 168, 255), stop:0.25 rgba(171, 186, 248, 255), stop:0.32 rgba(243, 248, 224, 255), stop:0.385 rgba(249, 162, 183, 255), stop:0.47 rgba(100, 115, 124, 255), stop:0.58 rgba(251, 205, 202, 255), stop:0.65 rgba(170, 128, 185, 255), stop:0.75 rgba(252, 222, 204, 255), stop:0.805 rgba(206, 122, 218, 255), stop:0.86 rgba(254, 223, 175, 255), stop:0.91 rgba(254, 236, 244, 255), stop:1 rgba(255, 191, 221, 255));"));

        gridLayout_2->addWidget(pushButton_2, 10, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(400, 150));
        label_4->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));\n"
"border-radius:20px;\n"
""));

        verticalLayout_2->addWidget(label_4);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(235, 50));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(100, 50));
        label_7->setStyleSheet(QString::fromUtf8("background-image: url(:/images/blake.png);"));

        verticalLayout_2->addWidget(label_7);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setLayoutDirection(Qt::RightToLeft);
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/images/chevron-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon37);
        pushButton->setFlat(true);

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(9, 41, 4, 255), stop:0.085 rgba(2, 79, 0, 255), stop:0.19 rgba(50, 147, 22, 255), stop:0.275 rgba(236, 191, 49, 255), stop:0.39 rgba(243, 61, 34, 255), stop:0.555 rgba(135, 81, 60, 255), stop:0.667 rgba(121, 75, 255, 255), stop:0.825 rgba(164, 255, 244, 255), stop:0.885 rgba(104, 222, 71, 255), stop:1 rgba(93, 128, 0, 255));\n"
"border-radius:20px;"));

        verticalLayout_6->addWidget(label_5);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));\n"
"\n"
"border-radius:20px;"));

        verticalLayout_7->addWidget(label_8);


        horizontalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"border-radius:20px;"));

        verticalLayout_4->addWidget(label_3);


        horizontalLayout_3->addLayout(verticalLayout_4);


        gridLayout_2->addLayout(horizontalLayout_3, 7, 0, 2, 4);

        dateLabel = new QLabel(centralWidget);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setMinimumSize(QSize(85, 85));
        dateLabel->setMaximumSize(QSize(96, 96));

        gridLayout_2->addWidget(dateLabel, 1, 5, 1, 1, Qt::AlignTop);

        logoLabel = new QLabel(centralWidget);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setMinimumSize(QSize(300, 200));
        logoLabel->setMaximumSize(QSize(300, 200));
        logoLabel->setStyleSheet(QString::fromUtf8("image: url(:/logos/peritia-logo.png);"));

        gridLayout_2->addWidget(logoLabel, 1, 0, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/images/daco.png);"));

        verticalLayout_3->addWidget(label);

        explorePushButton = new QPushButton(centralWidget);
        explorePushButton->setObjectName(QString::fromUtf8("explorePushButton"));
        explorePushButton->setMinimumSize(QSize(100, 10));
        explorePushButton->setMaximumSize(QSize(50, 27));
        explorePushButton->setStyleSheet(QString::fromUtf8("QPushButton#explorePushButton{\n"
"background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"\n"
"font: 700 11pt \"Liberation Sans Narrow\";\n"
"color: rgb(145, 65, 172);\n"
"border-radius:8px;\n"
"\n"
"}\n"
"\n"
"QPushButton#explorePushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.512315 rgba(71, 252, 255, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69),"
                        " stop:1 rgba(255, 255, 0, 69));\n"
"\n"
"\n"
"font: 700 11pt \"Liberation Sans Narrow\";\n"
"color: rgb(145, 65, 172);\n"
"border-radius:8px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton#explorePushButton:pressed{\n"
"	background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.458128 rgba(28, 0, 255, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 700 11pt \"Liberation Sans Narrow\";\n"
"color: rgb(145, 65, 172);\n"
"border-radius:8px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));

        verticalLayout_3->addWidget(explorePushButton);


        horizontalLayout->addLayout(verticalLayout_3);

        illustrationLabel = new QLabel(centralWidget);
        illustrationLabel->setObjectName(QString::fromUtf8("illustrationLabel"));
        illustrationLabel->setMinimumSize(QSize(200, 200));
        illustrationLabel->setMaximumSize(QSize(200, 200));

        horizontalLayout->addWidget(illustrationLabel);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        Peritia->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Peritia);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1435, 21));
        QPalette palette;
        menuBar->setPalette(palette);
        menuBar->setFocusPolicy(Qt::TabFocus);
        menuBar->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 31, 49);\n"
"color: rgb(246, 245, 244);\n"
"border-radius:9999px;"));
        menuBar->setNativeMenuBar(true);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        QPalette palette1;
        QBrush brush(QColor(246, 245, 244, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(36, 31, 49, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(145, 65, 172, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        menuFile->setPalette(palette1);
        menuFile->setLayoutDirection(Qt::LeftToRight);
        menuFile->setStyleSheet(QString::fromUtf8("selection-color: rgb(145, 65, 172);"));
        menuFile->setTearOffEnabled(false);
        menuFile->setSeparatorsCollapsible(true);
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuStatus_Bar = new QMenu(menuView);
        menuStatus_Bar->setObjectName(QString::fromUtf8("menuStatus_Bar"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuHelp->setStyleSheet(QString::fromUtf8("selection-color: rgb(87, 227, 137);\n"
"selection-background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));"));
        menuPreference = new QMenu(menuBar);
        menuPreference->setObjectName(QString::fromUtf8("menuPreference"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        Peritia->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Peritia);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMaximumSize(QSize(16777215, 40));
        mainToolBar->setFocusPolicy(Qt::WheelFocus);
        mainToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        mainToolBar->setMovable(false);
        Peritia->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Peritia);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setMaximumSize(QSize(16777215, 27));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Serif")});
        font1.setPointSize(12);
        font1.setBold(true);
        statusBar->setFont(font1);
        statusBar->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 56, 70);"));
        statusBar->setSizeGripEnabled(false);
        Peritia->setStatusBar(statusBar);
        toolBar = new QToolBar(Peritia);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy1);
        toolBar->setMinimumSize(QSize(0, 0));
        toolBar->setMaximumSize(QSize(35, 16777215));
        toolBar->setFocusPolicy(Qt::StrongFocus);
        toolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 56, 70);"));
        toolBar->setMovable(false);
        toolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolBar->setFloatable(true);
        Peritia->addToolBar(Qt::LeftToolBarArea, toolBar);
        dockWidget = new QDockWidget(Peritia);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setMinimumSize(QSize(291, 33));
        dockWidget->setMaximumSize(QSize(291, 524287));
        dockWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        dockWidget->setAcceptDrops(true);
        dockWidget->setStyleSheet(QString::fromUtf8(""));
        dockWidget->setFloating(false);
        dockWidget->setFeatures(QDockWidget::DockWidgetClosable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        Peritia->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);
        dockWidget_2 = new QDockWidget(Peritia);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidget_2->setMinimumSize(QSize(100, 36));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        dockWidget_2->setWidget(dockWidgetContents_3);
        Peritia->addDockWidget(Qt::RightDockWidgetArea, dockWidget_2);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuPreference->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSummary);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuView->addAction(actionCopy);
        menuView->addAction(actionCut);
        menuView->addAction(actionPaste);
        menuView->addSeparator();
        menuView->addAction(actionUndo);
        menuView->addAction(actionRedo);
        menuView->addAction(actionFont);
        menuView->addSeparator();
        menuView->addAction(actionZoom_in);
        menuView->addAction(actionZoom_out);
        menuView->addAction(actionFullScreen);
        menuView->addAction(actionMinimize);
        menuView->addSeparator();
        menuView->addAction(menuStatus_Bar->menuAction());
        menuStatus_Bar->addAction(actionHideStatusBar);
        menuStatus_Bar->addAction(actionShowStatusBar);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionKeyBoardShortcuts);
        menuHelp->addSeparator();
        menuHelp->addAction(actionGetInvolved);
        menuHelp->addAction(actionMakeADonation);
        menuHelp->addAction(actionSubmitFeedback);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addSeparator();
        menuHelp->addAction(actionCheck_for_updates);
        menuPreference->addAction(actionPreference);
        menuTools->addAction(actionExport_Student_logs);
        menuTools->addAction(actionCurrentDateTime);
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
        toolBar->addAction(actionSummary);
        toolBar->addAction(actionText2ASL);
        toolBar->addAction(actionExit);
        toolBar->addAction(actionWebprobe);
        toolBar->addAction(actionPreference);
        toolBar->addSeparator();

        retranslateUi(Peritia);
        QObject::connect(pushButton_2, &QPushButton::clicked, actionGoHome, qOverload<>(&QAction::trigger));
        QObject::connect(actionWebprobe, &QAction::triggered, dockWidget, qOverload<>(&QDockWidget::update));
        QObject::connect(pushButton_3, &QPushButton::clicked, actionPrint, qOverload<>(&QAction::trigger));
        QObject::connect(illustrationLabel, &QLabel::linkHovered, actionMuteSound, qOverload<>(&QAction::trigger));
        QObject::connect(actionMakeADonation, &QAction::hovered, actionMakeADonationStatus, qOverload<>(&QAction::trigger));
        QObject::connect(aboutPushButton, &QPushButton::clicked, actionAbout, qOverload<>(&QAction::trigger));
        QObject::connect(explorePushButton, &QPushButton::clicked, actionSummary, qOverload<>(&QAction::trigger));
        QObject::connect(actionCloseDockWidget, &QAction::triggered, dockWidget, qOverload<>(&QDockWidget::close));

        pushButton_3->setDefault(true);


        QMetaObject::connectSlotsByName(Peritia);
    } // setupUi

    void retranslateUi(QMainWindow *Peritia)
    {
        Peritia->setWindowTitle(QCoreApplication::translate("Peritia", "Peritia: All in one assistive software", nullptr));
#if QT_CONFIG(whatsthis)
        Peritia->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        actionAbout->setText(QCoreApplication::translate("Peritia", " About Peritia", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("Peritia", "<html><head/><body><p><span style=\" color:#5e5c64;\">About</span><span style=\" font-style:italic; color:#5e5c64;\"> Peritia</span></p><p align=\"right\"><span style=\" font-size:8pt; font-style:italic; color:#63452c;\">Press F1 for more help</span></p></body></html>", nullptr));
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
        actionExit->setToolTip(QCoreApplication::translate("Peritia", "<html><head/><body><p><span style=\" color:#5e5c64;\">Exit peritia</span></p><p align=\"right\"><span style=\" font-size:8pt; font-style:italic; color:#63452c;\">Press F1 for more help</span></p></body></html>", nullptr));
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
        actionSummary->setToolTip(QCoreApplication::translate("Peritia", "<html><head/><body><p><span style=\" color:#5e5c64;\">Explore more Peritia features</span></p><p align=\"right\"><span style=\" font-size:8pt; font-style:italic; color:#63452c;\">Press F1 for more help </span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSummary->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGyug->setText(QCoreApplication::translate("Peritia", "Gyug", nullptr));
        actionPeritiaUpdate->setText(QCoreApplication::translate("Peritia", "PeritiaUpdate", nullptr));
        actionSample->setText(QCoreApplication::translate("Peritia", "Sample", nullptr));
        actionGoHome->setText(QCoreApplication::translate("Peritia", "Go Home", nullptr));
#if QT_CONFIG(tooltip)
        actionGoHome->setToolTip(QCoreApplication::translate("Peritia", "Go to Home Page", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHelp->setText(QCoreApplication::translate("Peritia", "Peritia Help", nullptr));
#if QT_CONFIG(tooltip)
        actionHelp->setToolTip(QCoreApplication::translate("Peritia", "<html><head/><body><p>Open Peritia user manual</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionHelp->setShortcut(QCoreApplication::translate("Peritia", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreference->setText(QCoreApplication::translate("Peritia", "Preference", nullptr));
#if QT_CONFIG(tooltip)
        actionPreference->setToolTip(QCoreApplication::translate("Peritia", "<html><head/><body><p><span style=\" color:#5e5c64;\">Open the preference dialog</span></p><p align=\"right\"><span style=\" font-size:8pt; font-style:italic; color:#63452c;\">Press F1 for more help</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPreference->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_in->setText(QCoreApplication::translate("Peritia", "Zoom in", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_in->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_out->setText(QCoreApplication::translate("Peritia", "Zoom out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_out->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFullScreen->setText(QCoreApplication::translate("Peritia", "Full Screen", nullptr));
#if QT_CONFIG(shortcut)
        actionFullScreen->setShortcut(QCoreApplication::translate("Peritia", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMinimize->setText(QCoreApplication::translate("Peritia", "Minimize", nullptr));
#if QT_CONFIG(tooltip)
        actionMinimize->setToolTip(QCoreApplication::translate("Peritia", "<html><head/><body><p>Minimize window</p><p align=\"right\"><span style=\" font-size:8pt; font-style:italic; color:#865e3c;\">Press F1 for more help</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMinimize->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWebprobe->setText(QCoreApplication::translate("Peritia", "Webprobe", nullptr));
#if QT_CONFIG(shortcut)
        actionWebprobe->setShortcut(QCoreApplication::translate("Peritia", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAlign_ToolBar->setText(QCoreApplication::translate("Peritia", "Align Tool Bar", nullptr));
        actionText2ASL->setText(QCoreApplication::translate("Peritia", "Text2ASL", nullptr));
        actionMuteSound->setText(QCoreApplication::translate("Peritia", "MuteSound", nullptr));
        actionShowStatusBar->setText(QCoreApplication::translate("Peritia", "Show Status Bar", nullptr));
        actionHideStatusBar->setText(QCoreApplication::translate("Peritia", "Hide Status Bar", nullptr));
        actionEchoChanged->setText(QCoreApplication::translate("Peritia", "EchoChanged", nullptr));
        actionHideLeftToolBar->setText(QCoreApplication::translate("Peritia", "HideLeftToolBar", nullptr));
#if QT_CONFIG(tooltip)
        actionHideLeftToolBar->setToolTip(QCoreApplication::translate("Peritia", "Hide left Toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
        actionListWidgetItemClicked->setText(QCoreApplication::translate("Peritia", "ListWidgetItemClicked", nullptr));
        actionKeyBoardShortcuts->setText(QCoreApplication::translate("Peritia", "Keyboard Shortcuts", nullptr));
        actionGetInvolved->setText(QCoreApplication::translate("Peritia", "Get Involved", nullptr));
        actionMakeADonation->setText(QCoreApplication::translate("Peritia", "Make a Donation", nullptr));
#if QT_CONFIG(tooltip)
        actionMakeADonation->setToolTip(QCoreApplication::translate("Peritia", "<html><head/><body><p><span style=\" font-weight:700;\">Make a </span><a href=\"https://ko-fi.com/scalabli\"><span style=\" text-decoration: underline; color:#007af4;\">Donation</span></a></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSubmitFeedback->setText(QCoreApplication::translate("Peritia", "Submit Feedback", nullptr));
        actionMakeADonationStatus->setText(QCoreApplication::translate("Peritia", "Make a Donation Status", nullptr));
        actionAccount->setText(QCoreApplication::translate("Peritia", "Account", nullptr));
#if QT_CONFIG(tooltip)
        actionAccount->setToolTip(QCoreApplication::translate("Peritia", "<html><head/><body><p>My Account</p><p align=\"right\"><span style=\" font-size:8pt; font-style:italic; color:#865e3c;\">Press F1 for more help</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAccount->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExport_Student_logs->setText(QCoreApplication::translate("Peritia", "Export Student logs", nullptr));
        actionInternetConnectionStatus->setText(QCoreApplication::translate("Peritia", "InternetConnectionStatus", nullptr));
        actionCloseDockWidget->setText(QCoreApplication::translate("Peritia", "CloseDockWidget", nullptr));
#if QT_CONFIG(shortcut)
        actionCloseDockWidget->setShortcut(QCoreApplication::translate("Peritia", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCurrentDateTime->setText(QCoreApplication::translate("Peritia", "Current Date and Time", nullptr));
        actionCheck_for_updates->setText(QCoreApplication::translate("Peritia", "Check for Updates", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Peritia", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Peritia", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Peritia", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Peritia", "PushButton", nullptr));
#if QT_CONFIG(tooltip)
        aboutPushButton->setToolTip(QCoreApplication::translate("Peritia", "About Peritia", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        aboutPushButton->setWhatsThis(QCoreApplication::translate("Peritia", "<html><head/><body><p>fffffff</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_3->setText(QCoreApplication::translate("Peritia", "PushButton", nullptr));
#if QT_CONFIG(tooltip)
        clockLabel->setToolTip(QCoreApplication::translate("Peritia", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Clock</span></p><p align=\"right\"><span style=\" font-size:8pt; font-weight:400; font-style:italic; color:#1a5fb4;\">Displays the current time</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clockLabel->setStatusTip(QCoreApplication::translate("Peritia", "Clock showing current time", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        clockLabel->setWhatsThis(QCoreApplication::translate("Peritia", "Clock", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(statustip)
        dayLabel->setStatusTip(QCoreApplication::translate("Peritia", "Calender showing today's day", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        dayLabel->setWhatsThis(QCoreApplication::translate("Peritia", "fgghgg", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_2->setText(QCoreApplication::translate("Peritia", "PushButton", nullptr));
        label_6->setText(QCoreApplication::translate("Peritia", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; text-decoration: underline; color:#2ec27e;\">Text to American Sign Language</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Peritia", "Translate text to American Sign Language.", nullptr));
        pushButton->setText(QCoreApplication::translate("Peritia", "PushButton", nullptr));
        label_5->setText(QCoreApplication::translate("Peritia", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("Peritia", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Peritia", "TextLabel", nullptr));
#if QT_CONFIG(statustip)
        dateLabel->setStatusTip(QCoreApplication::translate("Peritia", "Calender showing today's date", nullptr));
#endif // QT_CONFIG(statustip)
        dateLabel->setText(QString());
#if QT_CONFIG(statustip)
        logoLabel->setStatusTip(QCoreApplication::translate("Peritia", "Peritia Logo", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        logoLabel->setWhatsThis(QCoreApplication::translate("Peritia", "<html><head/><body><p>this s s</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        logoLabel->setAccessibleName(QCoreApplication::translate("Peritia", "accesslogo", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        logoLabel->setAccessibleDescription(QCoreApplication::translate("Peritia", "<html><head/><body><p>accesibility ableism</p></body></html>", nullptr));
#endif // QT_CONFIG(accessibility)
        label->setText(QCoreApplication::translate("Peritia", "TextLabelcj fnfnffffkfmffffnffnfnff", nullptr));
        explorePushButton->setText(QCoreApplication::translate("Peritia", "Explore more", nullptr));
        illustrationLabel->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("Peritia", "File", nullptr));
        menuView->setStyleSheet(QString());
        menuView->setTitle(QCoreApplication::translate("Peritia", "View", nullptr));
        menuStatus_Bar->setTitle(QCoreApplication::translate("Peritia", "Status Bar", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Peritia", "Help", nullptr));
        menuPreference->setTitle(QCoreApplication::translate("Peritia", "Settings", nullptr));
        menuTools->setTitle(QCoreApplication::translate("Peritia", "Tools", nullptr));
#if QT_CONFIG(accessibility)
        statusBar->setAccessibleName(QCoreApplication::translate("Peritia", "acc", nullptr));
#endif // QT_CONFIG(accessibility)
        toolBar->setWindowTitle(QCoreApplication::translate("Peritia", "toolBar", nullptr));
        dockWidget->setWindowTitle(QCoreApplication::translate("Peritia", "hhh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Peritia: public Ui_Peritia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERITIA_H
