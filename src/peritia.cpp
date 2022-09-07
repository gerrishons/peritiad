#include <QLabel>
#include <QFile>
#include <QTime>
#include <QTimer>
#include <QFileDialog>
#include <QTextStream>
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
#include <QMovie>
#include <QGraphicsOpacityEffect>
#include <QStackedWidget>
#include <QListWidget>

#include "peritia-about.cpp"
#include "peritia-help.cpp"
#include "peritia-properties.cpp"
#include "peritia-summary.cpp"
#include "peritia.h"
#include "ui_peritia.h"

#include "datetime.cpp"
#include "random-int.cpp"


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
		    case 1: ui->label_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/illustrations/boy-and-girl-standing-and-laughing.png);"));
			    break;
		    case 2: ui->label_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/illustrations/boy-girl-sitting-in-chairs.png);"));
			    break;
		    case 3: ui->label_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/illustrations/girl-playing-playstation-with-brother.png);"));
			    break;
		    case 4: ui->label_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/illustrations/man-playing-with-dog-on-the-couch.png);"));
			    break;
		    case 5: ui->label_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/illustrations/man-search-music-with-phone.png);"));
			    break;
		    case 6: ui->label_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/illustrations/people-standing-talking.png);"));
			    break;
		    case 7: ui->label_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/illustrations/woman-in-glasses-sitting-and-reading-book.png);"));
			    break;
		    case 8: ui->label_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/illustrations/woman-in-glasses-sitting-next-to-a-dog.png);"));
			    break;
		    case 9: ui->label_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/illustrations/guitar.png);"));
			    break;
		    default: ui->label_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/illustrations/girl-and-boy-with-laptop.png);"));
			     break;
	    }


    
    qDebug()<<"Current date and time: ->"<<currentTime;


    /*convert string to QString*/
    QString dayLabelIconQString = QString::fromStdString(dayLabelIcon);
    ui->day_label->setText("");
    ui->day_label->setStyleSheet(dayLabelIconQString);

    /* When grepping date values, we encountered an
     * issue when grepping single digit values
     * so we had to improvise */
    
    //Convert string to int
    int finalDate = std::stoi(Date);

    if (finalDate < 10) {
	    switch (finalDate) {
		    case 1: ui->day_iconlbl->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-01.png);"));
			    break;

		    case 2: ui->day_iconlbl->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-02.png);"));
			    break;
	            case 3: ui->day_iconlbl->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-03.png);"));
			    break;
		    case 4: ui->day_iconlbl->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-04.png);"));
			    break;
		    case 5: ui->day_iconlbl->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-05.png);"));
			    break;
		    case 6: ui->day_iconlbl->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-06.png);"));
			    break;
		    case 7: ui->day_iconlbl->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-07.png);"));
			    break;
		    case 8: ui->day_iconlbl->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-08.png);"));
                            break;
		    case 9: ui->day_iconlbl->setStyleSheet(QString::fromUtf8("image: url(:/icons/date/date-09.png);"));
			    break;
	    }
    
    } else {
	    QString dateLabelIconQString = QString::fromStdString(dateLabelIcon);
	    ui->day_iconlbl->setStyleSheet(dateLabelIconQString);
    }
   


    if (FinalHour <12) {
	    /*This special method will prevent the background image to be inherited by the children*/
	    ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/images/water.jpg) }");
	    //rgb color Columbia Blue
	    ui->mainToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 221, 255);"));
    }

    //use of logical operators
    if(12 <= FinalHour && FinalHour <=18) {
	    ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/images/daylight.jpg) }");
	    ui->mainToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 216, 230);"));
	}
    
    if(FinalHour > 18) {
	    ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/images/evening.jpg) }"); 
	    // bronze color
	    ui->mainToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 127, 50);"));
    }

    QLabel *hhs = new QLabel;
    hhs->setText("rgre");

    ui->verticalLayout_3->addWidget(hhs);

    //QWidget *clockw = new QWidget;
    //Timer *timer = new QTimer(clockw);
   // ui->formLayout->addWidget(clockw);
  //  QPushButton *pushButtoasn = new QPushButton(ui->widget);
    //pushButtoasn->setText("Back");
    //Label *qlbl = new QLabel;
    
   // connect(timer, &QTimer::timeout, this, QOverload<>::of(&Peritia::update));
    //timer->start(1000);
    //i->widget->resize(200,200);
   // ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/images/blake.png) }").flush();
    //unsleep(5);
   /* unsigned int microsecond = 1000000;
    usleep(3 * microsecond);//sleeps for 3 second
    ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/images/peritia-logo.png) }");*/



    connect(ui->actionChangePic, &QAction::triggered, this, &Peritia::changePhoto);

    //Full screen toggle
    connect(ui->actionFullScreen, &QAction::triggered, this, &Peritia::showFullScreen);
   
    connect(ui->actionSummary, &QAction::triggered, this, &Peritia::ShowSummary);
    connect(ui->actionStatus_Bar, &QAction::triggered, this, &Peritia::showStatusBar);
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
    connect(ui->actionHelp, &QAction::triggered, this, &Peritia::showHelp);

    connect(ui->actionPreference, &QAction::triggered, this, &Peritia::showPreference);
    connect(ui->actiontext2ASL, &QAction::triggered, this, &Peritia::text2ASL);

    //This will maximize the screen
    connect(ui->actionZoom_in, &QAction::triggered, this, &Peritia::showMaximized);

    //This will change to the default size
    connect(ui->actionZoom_out, &QAction::triggered, this, &Peritia::showNormal);
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

    if (ui->actionStatus_Bar->isChecked()) {
        ui->statusBar->setVisible(true);
        ui->actionStatus_Bar->setChecked(true);


    } else {
        ui->actionStatus_Bar->setChecked(false);


        ui->statusBar->setVisible(false);
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
	ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/images/lumbo-minar.jpeg) }");
}

void Peritia::text2ASL() {


	QFrame *txt2ASLFrame = new QFrame();
	QLabel *txt2ASLFrameLabel = new QLabel(txt2ASLFrame);
	QGraphicsOpacityEffect *goe = new QGraphicsOpacityEffect(txt2ASLFrame);
	goe->setOpacity(0.5);//0 to 1 will cause the fade effect to kick in
        txt2ASLFrame->setGraphicsEffect(goe);
	txt2ASLFrame->setAutoFillBackground(true);

	//txt2ASLFrameLabel->setMinimumsize(500, 599);
	QMovie *movie = new QMovie(":/images/daylightsungif.gif");
	txt2ASLFrameLabel->setMovie(movie);
	movie->start();
	txt2ASLFrame->setFrameShape(QFrame::StyledPanel);
	QLineEdit *phoneEdit = new QLineEdit();
	QLabel *phoneLabel = new QLabel("&Phone:", txt2ASLFrame);
	phoneLabel->setBuddy(phoneEdit);
	//ui->verticalLayout_4->addWidget(phoneLabel);
	ui->verticalLayout_4->addWidget(txt2ASLFrame);
	ui->pushButton_8->setEnabled(false);
	
}

void Peritia::timerEvent(QTimerEvent *) {
	QTime utctime;
	
	/*My Nethunter computer was only able to show utc + 0 so I used .addSecs to change to UTC+3
	 * 3hrs, 60 mins, 60secs , the last bit +0 should indicate the minutes adde
	 *
	 * utctime = QTime::currentTime().addSecs(3 * 60 * 60 + 0); ->driver code
	 */
	//Display hours:minutes:seconds
	utctime = QTime::currentTime();
	if (Day == "Tue") {
		ui->clock_label->setStyleSheet(QString::fromUtf8("color: rgb(155, 221, 255);background-color: rgb(155,221,255);"));
	}

	if (Day == "Wed") {

		/*rgb color saddlebrown */
		ui->clock_label->setStyleSheet(QString::fromUtf8("color: rgb(139, 69, 19);"));
	}
	
	ui->clock_label->setText(utctime.toString("hh:mm:ss"));

}

/*void Peritia::paintEvent(QPaintEvent *)
{
	static const QPoint hourHand[3] = {
		QPoint(7, 8),
		QPoint(-7, 8),
	       	QPoint(0, -40)
       	};

	static const QPoint minuteHand[3] = {
	       	QPoint(7, 8),
		QPoint(-7, 8),
	       	QPoint(0, -70)
	};
	
	QColor hourColor(127, 0, 127);
	QColor minuteColor(0, 127, 127, 191);
	
	int side = qMin(width(), height());
	
	QTime time = QTime::currentTime();
	
	QPainter painter(this);
	
	painter.setRenderHint(QPainter::Antialiasing);
	
	painter.translate(width() / 2, height() / 2);
	painter.scale(side / 200.0, side / 200.0);
	
	painter.setPen(Qt::NoPen);
	painter.setBrush(hourColor);
	painter.save();
	painter.rotate(30.0 * ((time.hour() + time.minute() / 60.0)));
       	painter.drawConvexPolygon(hourHand, 3);
       	painter.restore();
	painter.setPen(hourColor);
	
	for (int i = 0; i < 12; ++i) {
	       	painter.drawLine(88, 0, 96, 0);
		painter.rotate(30.0);
	}
	
	painter.setPen(Qt::NoPen);
	painter.setBrush(minuteColor);
	painter.save();
	
	painter.rotate(6.0 * (time.minute() + time.second() / 60.0));
       	painter.drawConvexPolygon(minuteHand, 3);
	painter.restore();
	painter.setPen(minuteColor);
	
	for (int j = 0; j < 60; ++j) {
		if ((j % 5) != 0)
		       	painter.drawLine(92, 0, 96, 0);
	       	painter.rotate(6.0);
	}
//	ui->label_2->setStyleSheet(QString::fromUtf8("image: url(:/images/scalabli-logo.png);"));
}
*/

