/********************************************************************************
** Form generated from reading UI file 'peritia.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERITIA_H
#define UI_PERITIA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDial>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
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
    QAction *summaryAct;
    QAction *actionAbout_Scalabli;
    QAction *actionGyug;
    QAction *actionPeritiaUpdate;
    QWidget *centralWidget;
    QLabel *label;
    QTextEdit *textEdit;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QMdiArea *mdiArea;
    QLCDNumber *lcdNumber;
    QTimeEdit *timeEdit;
    QProgressBar *progressBar;
    QCommandLinkButton *commandLinkButton;
    QTableWidget *tableWidget;
    QDial *dial;
    QTimeEdit *timeEdit_2;
    QWebView *webView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Peritia)
    {
        if (Peritia->objectName().isEmpty())
            Peritia->setObjectName(QString::fromUtf8("Peritia"));
        Peritia->resize(1920, 1080);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/peritia-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Peritia->setWindowIcon(icon);
        Peritia->setToolButtonStyle(Qt::ToolButtonIconOnly);
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
        icon16.addFile(QString::fromUtf8(":/images/summary.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSummary->setIcon(icon16);
        summaryAct = new QAction(Peritia);
        summaryAct->setObjectName(QString::fromUtf8("summaryAct"));
        summaryAct->setShortcutContext(Qt::WidgetShortcut);
        actionAbout_Scalabli = new QAction(Peritia);
        actionAbout_Scalabli->setObjectName(QString::fromUtf8("actionAbout_Scalabli"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8("images/create.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Scalabli->setIcon(icon17);
        actionGyug = new QAction(Peritia);
        actionGyug->setObjectName(QString::fromUtf8("actionGyug"));
        actionPeritiaUpdate = new QAction(Peritia);
        actionPeritiaUpdate->setObjectName(QString::fromUtf8("actionPeritiaUpdate"));
        centralWidget = new QWidget(Peritia);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/images/daco.png);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 410, 1080, 45));
        label->setMinimumSize(QSize(1080, 45));
        label->setMaximumSize(QSize(1080, 45));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(29);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/images/blake.png);"));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Sunken);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(130, 490, 104, 70));
        textEdit->setFrameShape(QFrame::Panel);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(70, 140, 256, 192));
        graphicsView->setStyleSheet(QString::fromUtf8("image: url(:/images/blake.png);\n"
"background-image: url(:/images/blake.png);"));
        graphicsView->setFrameShape(QFrame::NoFrame);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 131, 111));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/images/scalabli-logo.png);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 70, 111, 51));
        QFont font1;
        font1.setPointSize(23);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(245, 224, 176, 255), stop:0.09 rgba(246, 189, 237, 255), stop:0.14 rgba(194, 207, 246, 255), stop:0.19 rgba(184, 160, 168, 255), stop:0.25 rgba(171, 186, 248, 255), stop:0.32 rgba(243, 248, 224, 255), stop:0.385 rgba(249, 162, 183, 255), stop:0.47 rgba(100, 115, 124, 255), stop:0.58 rgba(251, 205, 202, 255), stop:0.65 rgba(170, 128, 185, 255), stop:0.75 rgba(252, 222, 204, 255), stop:0.805 rgba(206, 122, 218, 255), stop:0.86 rgba(254, 223, 175, 255), stop:0.91 rgba(254, 236, 244, 255), stop:1 rgba(255, 191, 221, 255));"));
        label_3->setFrameShape(QFrame::NoFrame);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 260, 171, 109));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFocusPolicy(Qt::WheelFocus);
        pushButton_5->setAcceptDrops(true);
#if QT_CONFIG(tooltip)
        pushButton_5->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(245, 224, 176, 255), stop:0.09 rgba(246, 189, 237, 255), stop:0.14 rgba(194, 207, 246, 255), stop:0.19 rgba(184, 160, 168, 255), stop:0.25 rgba(171, 186, 248, 255), stop:0.32 rgba(243, 248, 224, 255), stop:0.385 rgba(249, 162, 183, 255), stop:0.47 rgba(100, 115, 124, 255), stop:0.58 rgba(251, 205, 202, 255), stop:0.65 rgba(170, 128, 185, 255), stop:0.75 rgba(252, 222, 204, 255), stop:0.805 rgba(206, 122, 218, 255), stop:0.86 rgba(254, 223, 175, 255), stop:0.91 rgba(254, 236, 244, 255), stop:1 rgba(255, 191, 221, 255));"));
        pushButton_5->setIcon(icon1);
        pushButton_5->setIconSize(QSize(25, 26));
        pushButton_5->setAutoDefault(true);
        pushButton_5->setFlat(false);

        gridLayout->addWidget(pushButton_5, 0, 0, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));
        pushButton_7->setIcon(icon1);
        pushButton_7->setIconSize(QSize(25, 26));

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(400, 150, 120, 80));
        groupBox->setStyleSheet(QString::fromUtf8("background-image: url(:/images/celebratory.png);"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 590, 271, 80));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Noto Sans Mono"));
        font2.setItalic(true);
        tabWidget->setFont(font2);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideRight);
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setGeometry(QRect(330, 520, 200, 160));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(840, 50, 81, 51));
        lcdNumber->setLineWidth(0);
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setDigitCount(3);
        lcdNumber->setMode(QLCDNumber::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("value", QVariant(1.000000000000000));
        lcdNumber->setProperty("intValue", QVariant(1));
        timeEdit = new QTimeEdit(centralWidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(670, 60, 118, 28));
        timeEdit->setReadOnly(true);
        timeEdit->setCalendarPopup(true);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(50, 520, 221, 23));
        progressBar->setValue(24);
        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(1080, 660, 175, 41));
        commandLinkButton->setStyleSheet(QString::fromUtf8("selection-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 255), stop:0.19397 rgba(0, 0, 0, 255), stop:0.202312 rgba(122, 97, 0, 255), stop:0.495514 rgba(76, 58, 0, 255), stop:0.504819 rgba(255, 255, 255, 255), stop:0.79 rgba(255, 255, 255, 255), stop:1 rgba(255, 158, 158, 255));\n"
"background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/celebratory.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon18);
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(350, 300, 381, 111));
        tableWidget->setFrameShape(QFrame::VLine);
        tableWidget->setFrameShadow(QFrame::Raised);
        tableWidget->setGridStyle(Qt::DotLine);
        tableWidget->setRowCount(3);
        tableWidget->setColumnCount(6);
        dial = new QDial(centralWidget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(630, 520, 50, 64));
        dial->setInvertedControls(true);
        timeEdit_2 = new QTimeEdit(centralWidget);
        timeEdit_2->setObjectName(QString::fromUtf8("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(260, 40, 118, 28));
        timeEdit_2->setInputMethodHints(Qt::ImhDate|Qt::ImhPreferNumbers|Qt::ImhTime);
        timeEdit_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_2->setCalendarPopup(true);
        webView = new QWebView(centralWidget);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setGeometry(QRect(770, 120, 300, 200));
        webView->setUrl(QUrl(QString::fromUtf8("about:blank")));
        Peritia->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Peritia);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        Peritia->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Peritia);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setFocusPolicy(Qt::WheelFocus);
        Peritia->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Peritia);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Peritia->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuAbout->menuAction());
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
        menuAbout->addAction(actionAbout);
        menuAbout->addSeparator();
        menuAbout->addAction(actionAbout_Scalabli);
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
        mainToolBar->addAction(actionAbout);
        mainToolBar->addAction(actionAbout_Scalabli);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExit);
        mainToolBar->addSeparator();

        retranslateUi(Peritia);
        QObject::connect(actionAbout_Scalabli, SIGNAL(triggered()), actionAbout_Scalabli, SLOT(trigger()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), actionSummary, SLOT(trigger()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), label_2, SLOT(update()));
        QObject::connect(commandLinkButton, SIGNAL(clicked()), commandLinkButton, SLOT(animateClick()));

        pushButton_5->setDefault(true);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Peritia);
    } // setupUi

    void retranslateUi(QMainWindow *Peritia)
    {
        Peritia->setWindowTitle(QCoreApplication::translate("Peritia", "Peritia: All in one assistive software", nullptr));
        actionAbout->setText(QCoreApplication::translate("Peritia", "About Peritia", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("Peritia", "<html><head/><body><p>About Peritia </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAbout->setProperty("Jhy", QVariant(QCoreApplication::translate("Peritia", "Yyyt", nullptr)));
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
        actionSummary->setToolTip(QCoreApplication::translate("Peritia", "New text document", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSummary->setShortcut(QCoreApplication::translate("Peritia", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        summaryAct->setText(QCoreApplication::translate("Peritia", "About sumnary", nullptr));
        actionAbout_Scalabli->setText(QCoreApplication::translate("Peritia", "About Scalabli", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout_Scalabli->setToolTip(QCoreApplication::translate("Peritia", "More information about Scalabli", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGyug->setText(QCoreApplication::translate("Peritia", "Gyug", nullptr));
        actionPeritiaUpdate->setText(QCoreApplication::translate("Peritia", "PeritiaUpdate", nullptr));
        label->setText(QCoreApplication::translate("Peritia", "<html><head/><body><p><span style=\" font-size:26pt; font-weight:600; color:#e66100;\">Peritia</span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Peritia", "<html><head/><body><p><span style=\" font-size:26pt; color:#63452c;\">Peritia</span></p></body></html>", nullptr));
#if QT_CONFIG(statustip)
        pushButton_5->setStatusTip(QCoreApplication::translate("Peritia", "Summary of your system ", nullptr));
#endif // QT_CONFIG(statustip)
        pushButton_5->setText(QCoreApplication::translate("Peritia", "Summary", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_5->setShortcut(QCoreApplication::translate("Peritia", "L", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_7->setText(QCoreApplication::translate("Peritia", "Summary", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_7->setShortcut(QCoreApplication::translate("Peritia", "L", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox->setTitle(QCoreApplication::translate("Peritia", "GroupBox", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Peritia", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Peritia", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Peritia", "Page", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("Peritia", "Webiste", nullptr));
        commandLinkButton->setDescription(QCoreApplication::translate("Peritia", "Command link button", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Peritia", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Peritia", "Edit", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("Peritia", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Peritia: public Ui_Peritia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERITIA_H
