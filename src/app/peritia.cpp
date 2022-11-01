
//#include <QLabel>

#include <QFile>
#include <QInputDialog>
#include <QTime>
#include <QTimer>
#include <QFileDialog>
#include <QTextStream>
#include <QPropertyAnimation>

#if defined(QT_PRINTSUPPORT_LIB)
#include <QtPrintSupport/qtprintsupportglobal.h>
#if QT_CONFIG(printer)
#if QT_CONFIG(printdialog)
#include <QPrintDialog>
#endif // QT_CONFIG(printdialog)
#include <QPrinter>
#endif // QT_CONFIG(printer)
#endif // QT_PRINTSUPPORT_LIB
#include <QFont>
#include <QFontDialog>
#include <QCloseEvent>
#include <QMediaDevices>
#include <QMovie>
#include <QGraphicsOpacityEffect>

#include <QtMultimedia/QCamera>
#include <QtMultimedia/QAudioOutput>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QAudioOutput>
#include <QtMultimedia/QMediaCaptureSession>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QImageCapture>
#include <QToolTip>


//#include ".. peritia-properties.cpp"
//#include "peritia-summary.cpp"
#include "src/app/peritia.h"
#include "ui_peritia.h"

#include "src/utils/datetime.cpp"
#include "src/utils/random-int.cpp"

#include "src/dialogs/aboutdialog.cpp"
#include "src/dialogs/datetimedialog.h"
#include "src/dialogs/settingsdialog.h"
#include "src/dialogs/shortcutdialog.h"

//#include "loginwidget.h" /*including the cpp file here throws some error*/
//#include "src/dialogs/welcomedialog.cpp"


Peritia::Peritia(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Peritia)
{
    ui->setupUi(this);
    startTimer(1000);

    srand(time(0));
    randomize();
    std::vector<int> randomResult = randomize();
    for (std::vector<int>::const_iterator iter = randomResult.begin(), iterEnd = randomResult.end();

		    iter != iterEnd; ++iter)


           switch(*iter) {
            case 1: ui->illustrationLabel->setStyleSheet(QString::fromUtf8("image: url(:/illustrations/boy-and-girl-standing-and-laughing.png);"));
               qInfo()<<"Random generated interger is "<<*iter;
			    break;
            case 2: ui->illustrationLabel->setStyleSheet(QString::fromUtf8("image: url(:/illustrations/boy-girl-sitting-in-chairs.png);"));
               qInfo()<<"Random generated interger is "<<*iter;
			    break;
            case 3: ui->illustrationLabel->setStyleSheet(QString::fromUtf8("image: url(:/illustrations/woman-in-glasses-sitting-and-reading-book.png);"));
               qInfo()<<"Random generated interger is "<<*iter;
			    break;
            case 4: ui->illustrationLabel->setStyleSheet(QString::fromUtf8("image: url(:/illustrations/man-playing-with-dog-on-the-couch.png);"));
               qInfo()<<"Random generated interger is "<<*iter;
			    break;
            case 5: ui->illustrationLabel->setStyleSheet(QString::fromUtf8("image: url(:/illustrations/man-search-music-with-phone.png);"));
               qInfo()<<"Random generated interger is "<<*iter;
			    break;
            case 6: ui->illustrationLabel->setStyleSheet(QString::fromUtf8("image: url(:/illustrations/people-standing-talking.png);"));
               qInfo()<<"Random generated interger is "<<*iter;
			    break;
            case 7: ui->illustrationLabel->setStyleSheet(QString::fromUtf8("image: url(:/illustrations/woman-in-glasses-sitting-and-reading-book.png);"));
               qInfo()<<"Random generated interger is "<<*iter;
			    break;
            case 8: ui->illustrationLabel->setStyleSheet(QString::fromUtf8("image: url(:/illustrations/woman-in-glasses-sitting-next-to-a-dog.png);"));
               qInfo()<<"Random generated interger is "<<*iter;
			    break;
            case 9: ui->illustrationLabel->setStyleSheet(QString::fromUtf8("image: url(:/illustrations/girl-and-boy-with-laptop.png);"));
               qInfo()<<"Random generated interger is "<<*iter;
			    break;
            default: ui->illustrationLabel->setStyleSheet(QString::fromUtf8("image: url(:/illustrations/girl-and-boy-with-laptop.png);"));
               qInfo()<<"Random generated interger is "<<*iter;
			     break;
	    }

    


   // ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/media/backgrounds/osman-rana.jpg) }");

    //LoginWidget *loginWidget = new LoginWidget;

    ui->dockWidget->hide();

    ui->dockWidget_2->hide();



    QCamera *cam = new QCamera;
    QMediaCaptureSession capture;
    capture.setCamera(cam);

    QImageCapture *news = new QImageCapture;
    capture.setImageCapture(news);
   // news->show();
    cam->start();
    news->capture();

    QMovie *gifMovie = new QMovie(":/gifs/girl-working-at-home.gif");
    ui->label_4->setMovie(gifMovie);
    gifMovie->start();

    internetConnectionStatusButton = new QPushButton;//"Network unavailable");
    internetConnectionStatusButton->setAccessibleName("connection status");
    internetConnectionStatusButton->setFlat(true);

    /*This adds the label to the right*/
    ui->statusBar->addPermanentWidget(internetConnectionStatusButton);




//QPropertyAnimation *anim = new QPropertyAnimation(ui->clockLabel, "pos", this);
   // anim->setDuration(10000);
   // anim->setStartValue(QPoint(0, 0));
   // anim->currentTime();
  //  anim->setEndValue(QPoint(1400,0));
   // anim->start();

    /*This adds the label to the right*/
   // ui->statusBar->addPermanentWidget(connectionErrorPushButton);
   // ui->statusBar->findChildren(Qt::FindChildOption("pushButton"));













   /// label_2 = new QLabel(ui->dockWidget);//->verdockWidget);

   // verticalLayout->addWidget(label_2);
    /*label_4 = new QLabel(ui->dockWidget);
            label_4->setObjectName(QString::fromUtf8("label_4"));
            label_4->setGeometry(QRect(100, 110, 90, 40));
            QFont font;
            font.setFamilies({QString::fromUtf8("DejaVu Sans")});
            font.setPointSize(12);
            font.setBold(true);
            label_4->setFont(font);
            label_4->setStyleSheet(QString::fromUtf8("color:rgba(255,255,255,210);"));
            label_4->setAlignment(Qt::AlignCenter);*/




    /*label_2 = new QLabel(ui->dockWidget);
    label_2->setStyleSheet(QString::fromUtf8(";\n"
    "background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
    "border-radius:20px;"));
    label_2->setGeometry(QRect(100, 0, 291, 411));

    label = new QLabel(ui->dockWidget);
           label->setGeometry(QRect(0, -20, 300, 420));
           label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
   "border-radius:20px;"));
           label_3 = new QLabel(ui->dockWidget);
                   label_3->setObjectName(QString::fromUtf8("label_3"));
                   label_3->setGeometry(QRect(0, 10, 280, 390));
                   label_3->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,100);\n"
           "border-radius:15px;"));

                   lineEdit_3 = new QLineEdit(ui->dockWidget);
                           lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
                           lineEdit_3->setGeometry(QRect(50, 140, 200, 40));
                           lineEdit_3->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
                   "border:none;\n"
                   "border-bottom: 2px solid rgba(105,118, 132, 255);\n"
                   "color:rgba(255,255,255,230);\n"
                   "padding-bottom:7px;"));
                           lineEdit_3->setFrame(true);
                           lineEdit_3->setEchoMode(QLineEdit::Normal);
                           lineEdit_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
*/

    // ui->dockWidget->hide();
    //verticalLayout->addWidget(label_2);

    //ui->dockWidget->setLayout(verticalLayout);


    //ui->dockWidget->setLayout(verticalLayout);

   // AboutDialog welcomeDialog;// = new AboutDialog();
   // QProgressBar *progressBar;


   // progressBar = new QProgressBar(welcomeDialog);
    //progressBar->setGeometry(QRect(87, 273, 491, 16));


   // aboutDialog->exec();
    //QTimer::singleShot(4000, welcomeDialog, SLOT(close()));

   // AboutDialog dialog;// = new AboutDialog;
   // dialog->show();
   // dialog.exec();
   // sleep(1);
   // dialog.close();


   // QTimer::singleShot(2000, dialog, SLOT(hide()));

 #if __linux__
    myInfo = new QFile;
     myInfo->setFileName("/home/sirere/.peritia/auth");
     if(!myInfo->open(QIODevice::Append | QIODevice::Text)) {
            qDebug()<<"its not open";

     }


#endif









   
      ui->centralWidget->setStyleSheet(".QWidget {background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)) }");

    if (FinalHour <12) {

	    /*This special method will prevent the background image to be inherited by the children*/
        ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/media/backgrounds/osman-rana.jpg) }");
	    //rgb color Columbia Blue
       // ui->mainToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 221, 255);"));
    }

    //use of logical operators
    if(12 <= FinalHour && FinalHour <=18) {
      ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/media/backgrounds/pexels-dids.jpg) }");
       // ui->mainToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 216, 230);"));
	}
    
    if(FinalHour > 18) {
       ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/media/backgrounds/pexels-sergej-eckhardt.jpg) }");

	    // bronze color
      //  ui->mainToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 127, 50);"));
    }

   // ui->listWidget->itemWidget()

   // QLabel *hhs = new QLabel;
   // hhs->setText("rgre");


    //ui->verticalLayout_2->addWidget(hhs);




   // QMediaPlayer * soundPlay = new QMediaPlayer;
  //  QAudioOutput * audioOutput =new QAudioOutput;

   // soundPlay->setAudioOutput(audioOutput);

   // if(ui->label->focusWidget()) {
      //  QUrl audioUrl = QUrl("qrc:/media/sounds/beep.mp3");

      //  soundPlay->setSource(audioUrl);
     //   audioOutput->setVolume(50);
       // soundPlay->play();

     //   qDebug()<<"Peritia logo description";

   // }
   // else {
      //  soundPlay->stop();
    //}



  //  QPushButton *wis = new QPushButton();
  //  QLabel *lk = new QLabel();
 //   lk->setText("cggfg");
 //   QIcon ic(":/images/scalabli-logo.png");
  //  wis->setIcon(ic);


    QWidget *emptyWidget = new QWidget();

    /*   QSizePolicy::Expanding, QSizePolicy::Preferred works with vertical toolbars (top or bottom)
     *
     *   */

    emptyWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    ui->toolBar->addWidget(emptyWidget);
    ui->toolBar->addAction(ui->actionPreference);
    ui->toolBar->addAction(ui->actionFullScreen);
    ui->toolBar->addAction(ui->actionAbout);
    ui->toolBar->addAction(ui->actionExit);
    ui->toolBar->addAction(ui->actionHideLeftToolBar);

    ui->toolBar->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);








    //QPushButton *leftToolbarButton = new QPushButton();


    /*Default state of the show status bar QAction is checked*/
    ui->actionShowStatusBar->setChecked(true);


   // ui->statusBar->addWidget(wis);

    if(ui->toolBar->isHidden()) {

      //  ui->statusBar->addPermanentWidget(wis);

}

    //int currentRow = ui->listWidget->currentRow();
   // std::cout<<currentRow;

   // QObject::connect(ui->listWidget, SIGNAL(currentRowChanged(int)), ui->stackedWidget, SLOT(setCurrentIndex(int)));





   // if(!ui->toolBar-isHidden()) {

     //   ui->statusBar->removeWidget(wis);
//
   //     qDebug()<<"NOT";

   // }


       //     ()
      //  ui->statusBar->removeWidget(wis);
   // } else {
     ////\   ui->sta
    //}
   //BlurPicker blurPicker;// = new BlurPicker(this);
   // ui->verticalLayout->addWidget(blurPicker);
   // ui->verticalLayout->addWidget(BlurPicker);
    connect(ui->actionMuteSound, &QAction::triggered, this, &Peritia::playSound);



    connect(ui->actionGoHome, &QAction::triggered, this, &Peritia::changePhoto);
    connect(ui->actionEchoChanged, &QAction::triggered, this, &Peritia::changeText);

    //Full screen toggle
    connect(ui->actionFullScreen, &QAction::triggered, this, &Peritia::showFullScreen);

    connect(ui->actionHideLeftToolBar, &QAction::triggered, this, &Peritia::hideLeftToolBar);


    connect(ui->actionHideStatusBar, &QAction::triggered, this, &Peritia::hideStatusBar);

    connect(ui->actionSummary, &QAction::triggered, this, &Peritia::close);//showSummary);
    connect(ui->actionShowStatusBar, &QAction::triggered, this, &Peritia::showStatusBar);
    connect(ui->actionOpen, &QAction::triggered, this, &Peritia::open);
    connect(ui->actionSave, &QAction::triggered, this, &Peritia::save);
    connect(ui->actionSave_as, &QAction::triggered, this, &Peritia::saveAs);
    connect(ui->actionPrint, &QAction::triggered, this, &Peritia::print);
    connect(ui->actionExit, &QAction::triggered, this, &Peritia::close);
    connect(ui->actionMinimize, &QAction::triggered, this, &Peritia::showMinimized);
#if QT_CONFIG(clipboard)
    //connect(ui->textEdit, &QTextEdit::copyAvailable, ui->actionCopy, &QAction::setEnabled);
   // connect(ui->actionCopy, &QAction::triggered, ui->textEdit, &QTextEdit::copy);
  //  connect(ui->actionCut, &QAction::triggered, ui->textEdit, &QTextEdit::cut);
  //  connect(ui->actionPaste, &QAction::triggered, ui->textEdit, &QTextEdit::paste);
#endif
    //connect(ui->textEdit, &QTextEdit::undoAvailable, ui->actionUndo, &QAction::setEnabled);
   // connect(ui->actionUndo, &QAction::triggered, ui->textEdit, &QTextEdit::undo);
   // connect(ui->textEdit, &QTextEdit::redoAvailable, ui->actionRedo, &QAction::setEnabled);
    //connect(ui->actionRedo, &QAction::triggered, ui->textEdit, &QTextEdit::redo);
    //onnect(ui->actionAlign_ToolBar, &QAction::triggered, this, &Peritia::alignToolBar);i
    
    connect(ui->actionFont, &QAction::triggered, this, &Peritia::selectFont);
    connect(ui->actionBold, &QAction::triggered, this, &Peritia::setFontBold);
    connect(ui->actionUnderline, &QAction::triggered, this, &Peritia::setFontUnderline);
    connect(ui->actionItalic, &QAction::triggered, this, &Peritia::setFontItalic);
    connect(ui->actionAbout, &QAction::triggered, this, &Peritia::showAbout);
    //connect(ui->actionAboutScalabli, &QAction::triggered, this, &Peritia::AboutScalabli);
    //connect(ui->actionHelp, &QAction::triggered, this, &Peritia::showHelp);
   // connect(ui->actionMakeADonationStatus, &QAction::triggered, this, &Peritia::makeADonationStatus);
   // connect(ui->actionListWidgetItemClicked, &QAction::triggered, this, &Peritia::listWidgetItemClicked);

    connect(ui->actionAccount, &QAction::triggered, this, &Peritia::showAccount);
    connect(ui->actionCloseDockWidget, &QAction::triggered, this, &Peritia::closeDockWidget);
    connect(ui->actionCurrentDateTime, &QAction::triggered, this, &Peritia::showCurrentDateTime);
    connect(ui->actionKeyBoardShortcuts, &QAction::triggered, this, &Peritia::showKeyBoardShortcuts);

    connect(ui->actionPreference, &QAction::triggered, this, &Peritia::showSettings);
    connect(ui->actionText2ASL, &QAction::triggered, this, &Peritia::text2ASL);

    //This will maximize the screen
    connect(ui->actionZoomIn, &QAction::triggered, this, &Peritia::zoomIn);//showMaximized);

    //This will change to the default size
    connect(ui->actionZoomOut, &QAction::triggered, this, &Peritia::zoomOut);
    //QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

    //connect(ui->listWidget, SIGNAL(itemClicked(QListWidgetItem *)), this, SLOT(Peritia::itemClickedSlot(QListWidgetItem *)));
    
    //oominPeritia);


// Disable menu actions for unavailable features
#if !defined(QT_PRINTSUPPORT_LIB) || !QT_CONFIG(printer)
    ui->actionPrint->setEnabled(false);
#endif

#if !QT_CONFIG(clipboard)
    ui->actionCut->setEnabled(false);
    ui->actionCopy->setEnabled(false);
    ui->actionPaste->setEnabled(false);
#endif
}

Peritia::~Peritia()
{
    delete ui;

    qInfo()<<">>>>>>Closing Peritia<<<<<<<<<";
}

/*void Peritia::ShowSummary() {

#if __linux__
 
     using namespace std::chrono;
     system_clock::time_point p = system_clock::now();
    
     std::time_t t = system_clock::to_time_t(p);
     auto tt = std::ctime(&t);

     // turn tt into string
     std::string Hour(std::ctime(&t));
     std::string newHour = Hour.substr(11,2);
     std::cout << tt << std::endl;
     std::cout<<newHour<<std::endl;

     // convert hour(string) to int
     int hourStringToInt = std::stoi(newHour);

     QString str;

     if(hourStringToInt < 12) {

	     str = QString(tr("Good morning🌄, Your using a linux machine"));
	     QMessageBox::about(this, tr("About Peritia"), str);
	     //label_2 = new QLabel(centralWidget);                          // label_2->setObjectName(QString::fromUtf8("label_2"));        //label_2->setGeometry(QRect(10, 10, 131, 111));
	   //  label_2->setStyleSheet(QString::fromUtf8("image: url(:/images/blake.png);"));}i
	    }
     
     // logical operators
     if(12 <= hourStringToInt && hourStringToInt <18) {
	     str = QString(tr("Good aftertoon⛅, Your using a linux machine"));
	     QMessageBox::about(this, tr("About Peritia"), str);
     }

     if(hourStringToInt > 18) {
	     str = QString(tr("Good evening🌃, Your using a linux machine"));
	     QMessageBox::about(this, tr("About Peritia"), str);
     }

#endif

#if __apple__
     str = QString(tr("Your using an apple machine"));
     QMessageBox::about(this, str);

#endif
}
*/
//{
  //  currentFile.clear();
 //   ui->textEdit->setText(QString());
//}



/*oid Peritia::closeEvent(QCloseEvent *)
{

	QMessageBox::StandardButton resBtn =  QMessageBox::question( this,tr("You sure?\n"), QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes, QMessageBox::Yes);
	
	if (resBtn != QMessageBox::Yes) {
		event->ignore();
    }
	else {
		event->accept();
	}
	event->ignore();
	if (QMessageBox::Yes == QMessageBox::question(this, "Close Confirmation", "Exit?", QMessageBox::Yes | QMessageBox::No))
	{
	      	event->accept();
	}

}
//f (Peritia::closeWindow())
//	event->accept();
//	else	event->ignore();	

bool Peritia::closeWindow()
{
	if (Peritia::close())
	if (!isWindowModified())
		QMessageBox::StandardButton answer = QMessageBox::question(
			this,
			tr("Close the Window"),
			tr("Do you want to close the window?"),
			QMessageBox::Yes | QMessageBox::No
			);
	return answer == QMessageBox::Yes;
}
*/


/*void Peritia::webP() {

	ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/images/lumbo-minar.jpeg) }");
	
	QProcess subprocess;
	subprocess.start("webprobe", QStringList()  << "-u" << "anyword.com");
	
	//if (!subprocess.waitForStarted())
		
	   //   	return false;
	
	subprocess.write("LOAD test.mp3\n");
	subprocess.closeWriteChannel();
	
//	if (!subprocess.waitForFinished())
	 //      	return false;
       
	QByteArray result = subprocess.readAll();
	
	//QString program = "webprobe";
       	//QStringList arguments;
      // 	arguments << "-u" << "fusion.com";
	
//	QProcess *myProcess = new QProcess(parent);
	
//	myProcess->start(program, arguments);

}*/

//void Peritia::itemsClickedSlot() {
//	ui->pushButton_3->setText->("fffff");
//}


void Peritia::changeText() {

    //ui->label->setText(ui->lineEdit->text());
}
void Peritia::open()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
    if (fileName.isEmpty())
        return;
    QFile file(fileName);
    currentFile = fileName;
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    //ui->textEdit->setText(text);
    file.close();
}



void Peritia::playSound() {

    QMediaPlayer * player = new QMediaPlayer;
    QAudioOutput * audioo =new QAudioOutput;

    if(ui->logoLabel->underMouse()) {



        player->setAudioOutput(audioo);
        QUrl audioUrl = QUrl("qrc:/media/sounds/beep.mp3");

        player->setSource(audioUrl);
        audioo->setVolume(0);
        player->play();

        qDebug()<<"has";

    } else {
        player->deleteLater();
       player->stop();
    }





    }




void Peritia::save()
{
    QString fileName;
    // If we don't have a filename from before, get one.
    if (currentFile.isEmpty()) {
        fileName = QFileDialog::getSaveFileName(this, "Save");
        if (fileName.isEmpty())
            return;
        currentFile = fileName;
    } else {
        fileName = currentFile;
    }
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);
    //QString text = ui->textEdit->toPlainText();
   // out << text;
    file.close();
}

void Peritia::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save as");
    if (fileName.isEmpty())
        return;
    QFile file(fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
   // QString text = ui->textEdit->toPlainText();
   // out << text;
    file.close();
}

void Peritia::print()
{
#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG(printer)
    QPrinter printDev;
#if QT_CONFIG(printdialog)
    QPrintDialog dialog(&printDev, this);
    if (dialog.exec() == QDialog::Rejected)
        return;
#endif // QT_CONFIG(printdialog)
  //  ui->textEdit->print(&printDev);
#endif // QT_CONFIG(printer)
}

void Peritia::selectFont()
{

    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected, this);
    if (fontSelected) {

	    ui->centralWidget->setFont(font);
	    QMessageBox *mbox = new QMessageBox;
	    mbox->setWindowTitle(tr("Title"));
	    mbox->setText(font.family());
	    mbox->show();
	    QTimer::singleShot(2000, mbox, SLOT(hide()));
    }
      //  ui->textEdit->setFont(font);
}


void Peritia::showStatusBar()  {

    if(ui->actionShowStatusBar->isChecked()) {

        QMediaPlayer * player = new QMediaPlayer;
        QAudioOutput * audioo =new QAudioOutput;
        player->setAudioOutput(audioo);
        ui->statusBar->setVisible(true);
        ui->actionShowStatusBar->setChecked(true);
        ui->actionHideStatusBar->setChecked(false);
        QUrl audioUrl = QUrl("qrc:/media/sounds/statusbarshown.mp3");

        player->setSource(audioUrl);
        audioo->setVolume(50);
        player->play();
    }
}
void Peritia::setFontUnderline(bool underline)
{
    //ui->textEdit->setFontUnderline(underline);
}

void Peritia::setFontItalic(bool italic)
{
  //  ui->textEdit->setFontItalic(italic);
}

void Peritia::setFontBold(bool bold)
{
   // bold ? ui->textEdit->setFontWeight(QFont::Bold) :
        //  ui->textEdit->setFontWeight(QFont::Normal);
}

void Peritia::changePhoto()  {

//	ui->label_2->setStyleSheet(QString::fromUtf8("image: url(:/images/scalabli-logo.png);"));
  //  ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/images/lumbo-minar.jpeg) }");
  //  ui->clockLabel->clear();

}


void Peritia::makeADonationStatus()  {


    QLabel *mbox = new QLabel;
    mbox->setWindowTitle(tr("Title"));
    mbox->setText(font().family());
    ui->statusBar->addPermanentWidget(mbox);
    QTimer::singleShot(2000, mbox, SLOT(hide()));


}

void Peritia::dockWidgetExpand()  {

    /*This increments the value of the progress bar by 1(or the setMaximum value */
    ui->dockWidget->resize(10, 10+20);
          //  setValue(ui->progressBar->value()+1);
    //int value = ui->dockWidget->value();
  //  ui->progressBar->setValue(value);

}


void Peritia::closeDockWidget() {

    ui->dockWidget->hide();



                 }

void Peritia::hideLeftToolBar()   {

    ui->toolBar->hide();
    //LoginWidget *LOLO = new LoginWidget(this);
   // ui->horizontalLayout->replaceWidget(ui->label_2, LOLO);
    //ui->horizontalLayout->addWidget(LOLO);
   // ui->verticalLayout_2->removeWidget(ui->listWidget);

    QPushButton *leftToolbarButton = new QPushButton();
    QIcon icon1;

    icon1.addFile(QString::fromUtf8(":/icons/buttons/chevron-right.png"), QSize(50, 50));

    leftToolbarButton->setIcon(icon1);
    leftToolbarButton->setFlat(true);
    leftToolbarButton->setToolTip("Show left toolbar");






    ui->statusBar->addWidget(leftToolbarButton);

    connect(leftToolbarButton, &QPushButton::clicked, this, &Peritia::showLeftToolBar);

}

void Peritia::hideStatusBar() {
    if(ui->actionHideStatusBar->isChecked())
    {
        ui->statusBar->setVisible(false);
        ui->actionShowStatusBar->setChecked(false);
        QMediaPlayer * player = new QMediaPlayer;
        QAudioOutput * audioo =new QAudioOutput;
        player->setAudioOutput(audioo);
        QUrl audioUrl = QUrl("qrc:/media/sounds/statusbarhidden.mp3");
        player->setSource(audioUrl);
        audioo->setVolume(50);
        player->play();

    }

    if(ui->statusBar->isHidden()) {
            ui->statusBar->setAttribute(Qt::WA_DeleteOnClose);
}





}


void Peritia::listWidgetItemClicked(QListWidget *itemClicked)   {

  // if(ui->listWidget->currentRow() == 1) {
       qDebug()<<"kkkkk";
 //  }




}
void Peritia::removeWidgetOnStatusBar()  {

  // if(ui->toolBar->isHidden()) {
 // ui->statusBar->c

   //}



}

void Peritia::showAbout() {

   AboutDialog  *dialog = new AboutDialog;



   connect(dialog, SIGNAL(windowTitleChanged(QString)), this, SLOT(setWindowTitle(QString)));
   dialog->show();

  if(!dialog->isHidden()) {

        qInfo()<<"About Dialog Shown";

  }

    //if(dialog->isVisible()) {
      //  qDebug()<<"it is visible";
        //QMessageBox *aboutMessageBox = new QMessageBox();
        //boutMessageBox->setText("Press Esc to close the about section");

        //aboutMessageBox->show();
        //
    //}
}



void Peritia::showFullScreen() {

    QMediaPlayer * fullscreenPlayer = new QMediaPlayer;
    QAudioOutput * fullscreenAudioOutput =new QAudioOutput;
    fullscreenPlayer->setAudioOutput(fullscreenAudioOutput);

   // if (Peritia::isFullScreen() && QMediaPlayer::NoMedia

       //     ) {
     //   QUrl audioUrl = QUrl("qrc:/media/sounds/fullscreen-mode-is-active.mp3");
        //bool isPlaying = QMediaPlayer::PlayingState;
        /*if(fullscreenPlayer) {
            fullscreenPlayer->stop();


            fullscreenPlayer->setSource(audioUrl);

            fullscreenAudioOutput->setVolume(50);
            fullscreenPlayer->play();


            qDebug()<<"Loading audio";
            return Peritia::showMaximized();
        } else {

        }


        qDebug()<<"Fullscreen mode is already active";
    }*/

    if(!Peritia::isFullScreen()){
    QUrl audioUrl = QUrl("qrc:/media/sounds/fullscreenmode.mp3");
    fullscreenPlayer->setSource(audioUrl);
    fullscreenAudioOutput->setVolume(50);
    fullscreenPlayer->play();

    qInfo()<<"Fullscreen mode set";

    return QMainWindow::showFullScreen();


    } else{
        return Peritia::showNormal();


    }

   /* if(Peritia::isFullScreen() && !QMediaPlayer::NoMedia){

        QMediaPlayer::PausedState;
    QUrl audioUrl = QUrl("qrc:/media/sounds/fullscreen-mode-is-active.mp3");
    fullscreenPlayer->setSource(audioUrl);
    fullscreenAudioOutput->setVolume(50);
    fullscreenPlayer->play();

    qInfo()<<"Fullscreen mode set";

    return QMainWindow::showFullScreen();


    }
*/

}




void Peritia::showAccount()   {

   // QPropertyAnimation *animation = new QPropertyAnimation(ui->dockWidget, "size");
  //  animation->setDuration(150);
   // animation->setStartValue(QSize(0, 700));
  //  animation->setEndValue(QSize(250,250+10));
  //  animation->start();

    if(!ui->dockWidget->isHidden()) {

        ui->dockWidget->hide();
    } else {
        ui->dockWidget->show();
        ui->dockWidget->setWindowTitle("Account: Information about user accounts");

        }
    LoginWidget *loginWidget = new LoginWidget;
    ui->dockWidget->setWidget(loginWidget);

    if(!loginWidget->isActiveWindow()) {

            ui->dockWidget->hide();
    }






}

void Peritia::showCurrentDateTime() {
    DateTimeDialog *dateTimeDialog = new DateTimeDialog;
    dateTimeDialog->show();



}
void Peritia::showLeftToolBar()  {


    ui->toolBar->show();

    /*This activate the left tool bar and hides to button on statusbar after clicking it*/
    QPushButton *leftToolbarButton =(QPushButton*)sender();
    leftToolbarButton->hide();

}




void Peritia::showHelp() {



}


void Peritia::showInternetConnection()  {

    QIcon internetConnectionIcon;
    internetConnectionIcon.addFile(QString::fromUtf8(":/icons/buttons/internet.png"), QSize(), QIcon::Normal, QIcon::Off);

    internetConnectionStatusButton->setIcon(internetConnectionIcon);
    internetConnectionStatusButton->setStyleSheet("QToolTip {border:1px solid green;}");

    internetConnectionStatusButton->setToolTip("Internet connection available");


}
void Peritia::showInternetConnectionError() {

    QIcon noInternetIcon;
    noInternetIcon.addFile(QString::fromUtf8(":/icons/buttons/no-internet.png"), QSize(), QIcon::Normal, QIcon::Off);

    internetConnectionStatusButton->setIcon(noInternetIcon);
    internetConnectionStatusButton->setStyleSheet("QToolTip {border:1px solid red;}");
    internetConnectionStatusButton->setToolTip("The network is unavailable");

   // QList<QPushButton*> connectionErrorPushButton




           /* QPushButton *connectionErrorPushButton = new QPushButton;//"Network unavailable");

            QIcon noInternetIcon;
            noInternetIcon.addFile(QString::fromUtf8(":/icons/buttons/no-internet.png"), QSize(), QIcon::Normal, QIcon::Off);

            connectionErrorPushButton->setIcon(noInternetIcon);
            connectionErrorPushButton->setToolTip("The network is unavalable");

           // QTimer::singleShot(10000, connectionErrorLabel, SLOT(hide()));

            This adds the label to the right*
            ui->statusBar->addPermanentWidget(connectionErrorPushButton)

*/

}


void Peritia::showKeyBoardShortcuts()  {

    ShortcutDialog *shortcutsDialog = new ShortcutDialog(this);
    shortcutsDialog->show();


}
void Peritia::showSettings() {

  SettingsDialog *settingsDialog = new SettingsDialog(this);
  connect(settingsDialog, SIGNAL(windowTitleChanged(QString)), this, SLOT(setWindowTitle(QString)));


  settingsDialog->show();





}
void Peritia::text2ASL() {

    //AboutDialog::show();

    //w.show();

    //Text2ASLDialog jjj;
   // jjj.show();


/*
    QGroupBox *txt2ASLGroupBox = new QGroupBox();
    txt2ASLGroupBox->setTitle("Text to American Sign Language");
    txt2ASLGroupBox->setStyleSheet(QString::fromUtf8("QGroupBox {border: 1px solid red; border-radius: 9px; margin-top:0.5em;} QGroup::title {subcontrol-origin: margin; left: 10px; padding:0 3px 0 3px }"));


    QGridLayout *txt2ASLGridLayout = new QGridLayout(txt2ASLGroupBox);


    QLabel *txt2ASLGifLabel = new QLabel("KKK");
    txt2ASLGifLabel->setFrameShape(QFrame::StyledPanel);
    txt2ASLGifLabel->setFrameShadow(QFrame::Sunken);
    txt2ASLGifLabel->setStyleSheet(QString::fromUtf8("QLabel {border: 1px solid green; border-radius: 9px; margin-top:0.5em;}"));
    txt2ASLGifLabel->setAlignment(Qt::AlignLeft);

    //#include <QGraphicsOpacityEffect>
    QGraphicsOpacityEffect *goe = new QGraphicsOpacityEffect(txt2ASLGifLabel);
    goe->setOpacity(1);//0 to 1 will cause the fade effect to kick in
    txt2ASLGifLabel->setGraphicsEffect(goe);
    txt2ASLGifLabel->setAutoFillBackground(true);

    QMovie *gifMovie = new QMovie(":/media/gifs/girl-working-at-home.gif");
    txt2ASLGifLabel->setMovie(gifMovie);
    gifMovie->start();
    txt2ASLGridLayout->addWidget(txt2ASLGifLabel, 0, 0);

    QLabel  *txt2ASLLabel2= new QLabel("ff");

    txt2ASLLabel2->setFrameShape(QFrame::StyledPanel);
    txt2ASLLabel2->setFrameShadow(QFrame::Sunken);
    txt2ASLLabel2->setAlignment(Qt::AlignLeft);

    QVBoxLayout *txt2ASLVerticalLayout = new QVBoxLayout(txt2ASLLabel2);


    QLabel *searchLogoLabel = new QLabel();
    searchLogoLabel->setText("Search logo label");
    searchLogoLabel->setAlignment(Qt::AlignCenter);
    searchLogoLabel->setMaximumSize(100, 100);
    txt2ASLVerticalLayout->addWidget(searchLogoLabel);

    QHBoxLayout *txt2ASLHorizontalLayout = new QHBoxLayout();
    txt2ASLVerticalLayout->addLayout(txt2ASLHorizontalLayout);

    QLabel *magnifyLabel = new QLabel();
    magnifyLabel->setText("maginify");
    magnifyLabel->setAlignment(Qt::AlignLeft);
    txt2ASLHorizontalLayout->addWidget(magnifyLabel);



  //
   // static QString jj = lineEdit->text();
    //ss(QString::toStdString(jj);

   // QLineEdit * lineEdit = new QLineEdit();
   // lineEdit->setAlignment(Qt::AlignCenter);

   // lineEdit->setFrame(QFrame::Box);
    //lineEdit->setPlaceholderText("Please type something");
   // lineEdit->setClearButtonEnabled(true);
  //  lineEdit->setMaximumSize(200, 25);
   // txt2ASLHorizontalLayout->addWidget(lineEdit);

    QPushButton *txt2ASLButton = new QPushButton;
    txt2ASLButton->setText("Check");
    txt2ASLHorizontalLayout->addWidget(txt2ASLButton);

    QObject::connect(txt2ASLButton, &QPushButton::clicked, this, &Peritia::ss);




    // Modern syntax aoids obsecure runtime errors by implementing this method
  //  QObject::connect(lineEdit, &QLineEdit::textChanged, this, &Peritia::ss);


   // QString texts = lineEdit->text();
   // ui->label->setText(texts);
     instead of this me thod
     *
     *
     * connect(lineEdit,SIGNAL(textChanged()), this, SLOT(close()));

    */




    //magnifyLabel->setText()//lineEdit->text());

    /*txt2ASLGridLayout->addWidget(txt2ASLLabel2, 0, 2);




    QFrame *txt2ASLFrameLabela = new QFrame();//lineEdit); //wjjtxt2ASLFrame");
   // txt2ASLFrameLabela->setBuddy(lineEdit);
    txt2ASLFrameLabela->setFrameShape(QFrame::StyledPanel);
    txt2ASLFrameLabela->setFrameShadow(QFrame::Sunken);
    //txt2ASLFrameLabela->setAlignment(Qt::AlignLeft);

   // QVBoxLayout * qvb = new QVBoxLayout;
   // qvb->addWidget(lineEdit);


    txt2ASLGridLayout->addWidget(txt2ASLFrameLabela, 1, 3);
    //txt2ASLGridLayout->addWidget(qvb);

    //QGraphicsOpacityEffect *goe = new QGraphicsOpacityEffect(txt2ASLFrame);
    //goe->setOpacity(0.5);//0 to 1 will cause the fade effect to kick in
      //  txt2ASLFrame->setGraphicsEffect(goe);
    //txt2ASLFrame->setAutoFillBackground(true);

	//txt2ASLFrameLabel->setMinimumsize(500, 599);
//	QMovie *movie = new QMovie(":/images/daylightsungif.gif");
    //txt2ASLFrameLabel->setMovie(movie);
    //movie->start();
    //txt2ASLFrame->setFrameShape(QFrame::StyledPanel);
    //QLineEdit *phoneEdit = new QLineEdit();
    //QLabel *phoneLabel = new QLabel("&Phone:", txt2ASLFrame);
    //phoneLabel->setBuddy(phoneEdit);
	//ui->verticalLayout_4->addWidget(phoneLabel);


  //  ui->verticalLayout_4->addWidget(txt2ASLGroupBox);
   //
   // ui->text2ASLButton->setEnabled(false);*/
	
}

void Peritia::timer() {




}

void Peritia::timerEvent(QTimerEvent *) {

    QTime utcTime;
	
	/*My Nethunter computer was only able to show utc + 0 so I used .addSecs to change to UTC+3
	 * 3hrs, 60 mins, 60secs , the last bit +0 should indicate the minutes adde
	 *
	 * utctime = QTime::currentTime().addSecs(3 * 60 * 60 + 0); ->driver code
	 */
	//Display hours:minutes:seconds
    utcTime = QTime::currentTime();


    QString timeText = utcTime.toString("hh:mm");

    if ((utcTime.second() % 2)== 0) {

        timeText[2] = ' ';


    }

    ui->clockLabel->setText(timeText);//utctime.toString("hh:mm"));

    /*convert string to QString*/
    QString dayLabelIconQString = QString::fromStdString(dayLabelIcon);

    ui->dayLabel->setStyleSheet(dayLabelIconQString);


    /* When grepping date values, we encountered an
     * issue when grepping single digit values
     * so we had to improvise */

    //Convert string to int
    int finalDate = std::stoi(Date);

    if (finalDate < 10) {
        switch (finalDate) {
            case 1: ui->dateLabel->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-01.png);"));
                    ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(51, 209, 122);"));
                break;
            case 2: ui->dateLabel->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-02.png);"));
                    ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(51, 209, 122);"));
                break;
            case 3: ui->dateLabel->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-03.png);"));
                break;
            case 4: ui->dateLabel->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-04.png);"));
                    ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(26, 95, 180);"));
                break;
            case 5: ui->dateLabel->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-05.png);"));
                    ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(26, 95, 180);"));
                break;
            case 6: ui->dateLabel->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-06.png);"));
                    ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(51, 209, 122);"));
                break;
            case 7: ui->dateLabel->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-07.png);"));
                    ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(53, 132, 228);"));
                break;
            case 8: ui->dateLabel->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-08.png);"));
                    ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(51, 209, 122);"));
                break;
            case 9: ui->dateLabel->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-09.png);"));
                    ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(26, 95, 180);"));
                break;
        }

    } else {
        QString dateLabelIconQString = QString::fromStdString(dateLabelIcon);
        ui->dateLabel->setStyleSheet(dateLabelIconQString);
    }

    if(finalDate >= 10) {
        switch (finalDate) {
            case 10:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(53, 132, 228);"));
                break;
            case 11:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(51, 209, 122);"));
                break;
            case 12:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(53, 132, 228);"));
                break;
            case 13:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(26, 95, 180);"));
                break;
            case 14:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(51, 209, 122);"));
                break;
            case 15:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(26, 95, 180);"));
                break;
            case 16:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(26, 95, 180);"));
                break;
            case 17:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(53, 132, 228);"));
                break;
            case 18:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(51, 209, 122);"));
                break;
            case 19: ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(246, 97, 81);"));
                break;
            case 20:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(26, 95, 180);"));
                break;
            case 21:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(53, 132, 228);"));
                break;
            case 22: ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(246, 97, 81);"));
                break;
            case 23:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(51, 209, 122);"));
                break;
            case 24:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(51, 209, 122);"));
                break;
            case 25:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(51, 209, 122);"));
                break;
            case 26:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(53, 132, 228);"));
                break;
            case 27: ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(246, 97, 81);"));
                break;
            case 28:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(51, 209, 122);"));
                break;
            case 29:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(26, 95, 180);"));
                break;
            case 30:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(26, 95, 180);"));
                break;
            case 31:  ui->clockLabel->setStyleSheet(QString::fromUtf8("color: rgb(98, 160, 234);"));
                break;
    }

    }

    /*The network manager checks for internet connectivity after 2 seconds */

    QNetworkAccessManager *manager = new QNetworkAccessManager(this);

    QNetworkRequest request;
    request.setUrl(QUrl("http://google.com"));
    request.setRawHeader("User-Agent", "MyOwnBrowser 1.0");

    QNetworkReply *reply = manager->get(request);
    /*tries to connect to the website above*/
    connect(reply, &QIODevice::readyRead, this, &Peritia::showInternetConnection);
    connect(reply, &QNetworkReply::errorOccurred, this, &Peritia::showInternetConnectionError);


}


void Peritia::zoomIn(int increment) {
    increment =10;

    int width = Peritia::size().width();
    int height = Peritia::size().height();

    Peritia::setFixedSize(width+increment, height+increment);

}

void Peritia::zoomOut(int decrement) {
    decrement = 10;

    int width = Peritia::size().width();
    int height = Peritia::size().height();

    Peritia::setFixedSize(width-decrement, height-decrement);

}
void Peritia::ss() {
    bool ok;

    //QPixmap pix (":/images/blake.png");

    QString ttx = QInputDialog::getText(this, tr("Enter a letter/number"),tr("username"), QLineEdit::Normal, QDir::home().dirName(), &ok);

    QLabel *jjjj  = new QLabel(ttx);
  //  ui->verticalLayout_4->addWidget(jjjj);


    //QLabel *qlbl = new QLabel();
  //  ui->text2ASLButton->setText

    //qlbl->setText(ui->)

    //qDebug()<<Peritia::text2ASL()



//ui->verticalLayout_4->addWidget(qlbl);

}

void Peritia::getText(QString text){

   // if(!ui->text2ASLButton->isEnabled())  {

      //  return ui->txt2ASLGroupBox


   // }

    //return ui-

}


