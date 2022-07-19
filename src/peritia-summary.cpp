#pragma once

#include "peritia-summary.hpp"

void Peritia::ShowSummary() {
	
	
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

	int FinalHour = hourStringToInt+3;

	QDialog *DSummary = new QDialog();
	QIcon icon1;
	icon1.addFile(QString::fromUtf8(":/images/peritia-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
	DSummary->setWindowIcon(icon1);
       	DSummary->setWindowTitle("Summary");
	DSummary->setFixedSize(650,550);
	
	QHBoxLayout *hBoxLayout = new QHBoxLayout;
	
	QLabel *photo_label = new QLabel();
	photo_label->setObjectName(QString::fromUtf8("photo_label"));
       //	photo_label->setStyleSheet(QString::fromUtf8("image: url(:/images/scalabli-logo.png);"));
	photo_label->setMinimumSize(100, 100);
	QMovie *morningmovie = new QMovie(":/images/daylightsungif.gif");

	hBoxLayout->addWidget(photo_label);

	QVBoxLayout *vBoxLayout = new QVBoxLayout();
	
	QLabel *title_label = new QLabel();
	title_label->setObjectName(QString::fromUtf8("title_label"));
	title_label->setText(tr("<h6><b>PERITIA</b></h6>"));
	title_label->setAlignment(Qt::AlignCenter);

	QLabel *version_label = new QLabel();
	version_label->setObjectName(QString::fromUtf8("version_label"));
	//Check the bitness of your machine
        QString bitness;
	if (sizeof(void *) == 4)
	       	bitness = " (32 bit)";
       	else if (sizeof(void *) == 8)
	       	bitness = " (64 bit)";

	if (FinalHour < 12) {
		photo_label->setMovie(morningmovie);
		photo_label->setMaximumSize(450, 450);
		photo_label->setAlignment(Qt::AlignCenter);
		morningmovie->start();
#if __apple__
		version_label->setText("Good morning, you are using a "+ bitness + " Apple  machine");
#elif __linux__
		version_label->setText("Good morning, you are using a " + bitness + " Linux machine");
#else
		version_label->setText("Good morning, you are using a " + bitness + " Windows machine");

#endif
	};
	QMovie *daylightmovie = new QMovie(":/images/daylightsungif.gif");

	if (12 <= FinalHour && FinalHour <= 18) {
		photo_label->setMovie(daylightmovie);
		photo_label->setMaximumSize(450, 450);
	       	photo_label->setAlignment(Qt::AlignCenter);
		daylightmovie->start();

#if __apple__
		version_label->setText("Good afternoon, you are using a " + bitness + " Apple machine");
#elif __linux__
		version_label->setText("Good afternoon, you are using a " + bitness + " Linux machine");
#else
		version_label->setText("Good afternoon, you are using a " + bitness + " Windows machine");
#endif
	};

//	QLabel *processLabel = new QLabel(this);
//	version_label->setMovie(movie);
//	movie->start();
	version_label->setAlignment(Qt::AlignCenter);

	QLabel *body_label = new QLabel();
	body_label->setText(tr("<style> t {color: purple;}</style> <t><b>Peritia</b></t> is a Latin word which means experience or practical knowledge.<br>In this context peritia is a computer software for Textto ASL and Text to<br>Braille. It can also be used as a data analytics tool i.e to check and <br>analyse students` performance, teachers can use the output to set <br>reasonable and measurable goals based on current and historical data."));
	body_label->setAlignment(Qt::AlignCenter);

	
	/*QTabWidget *tabWidget = new QTabWidget();
	tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
	//tabWidget->setMaximumSize(450, 250);
	tabWidget->setGeometry(QRect(0, 310, 401, 151));
	tabWidget->setTabPosition(QTabWidget::South);
	
	QWidget *tab1 = new QWidget();
       	tab1->setObjectName(QString::fromUtf8("tab1"));
	
	QTextBrowser *textBrowser1 = new QTextBrowser(tab1);
	textBrowser1->setObjectName(QString::fromUtf8("textBrowser1"));
       	textBrowser1->setGeometry(QRect(0, 0, 341, 121));

	QString ff = "dkdieieie deieiiwiwi";
	textBrowser1->setText(QString::fromUtf8("file: url(:/data/LICENSE);"));
	//textBrowser1->setSource(QUrl::fromLocalFile("/root/git/peritia/notepad/data/LICENSE"));
		//	QString::fromUtf8(":/data/LICENSE")));
	//x->width, y->height
	textBrowser1->setFixedSize(607, 321);
       
	QWidget *qW1 = new QWidget(tab1);
	qW1->setObjectName(QString::fromUtf8("qW1"));
	qW1->setGeometry(QRect(0, 10, 401, 91));
       
	QVBoxLayout *verticalLayout1 = new QVBoxLayout(qW1);
	qW1->setObjectName(QString::fromUtf8("verticalLayout1"));
       
	verticalLayout1->setContentsMargins(0, 0, 0, 0);*/
	QLabel *credits_label = new QLabel();
	
	credits_label->setObjectName(QString::fromUtf8("credits_label"));
       	credits_label->setAlignment(Qt::AlignCenter);
	
	QIcon icon3;
       	icon3.addFile(QString::fromUtf8(":/images/peritia-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
       	//tabWidget->addTab(tab1, icon3, QString("Credits"));
	
	QHBoxLayout *buttonLayout = new QHBoxLayout;


	QPushButton *pushButton = new QPushButton("Back");
	pushButton->setObjectName(QString::fromUtf8("pushButton"));
	pushButton->setGeometry(QRect(410, 430, 87, 27));
//	pushButton->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));"));
	QIcon back_icon;
	back_icon.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
	pushButton->setIcon(back_icon);
	pushButton->setFixedSize(60,30);
	//pushButton->setAlignment(Qt::AlignRight);
	buttonLayout->addWidget(pushButton);

	vBoxLayout->addLayout(hBoxLayout);
	vBoxLayout->addWidget(title_label);
	vBoxLayout->addWidget(version_label);
	vBoxLayout->addWidget(body_label);
//	vBoxLayout->addWidget(tabWidget);
	vBoxLayout->addLayout(buttonLayout);
	//BoxLayout->addWidget(pushButton);

	DSummary->setLayout(vBoxLayout);

	DSummary->show();

	DSummary->connect(pushButton,SIGNAL(clicked()), DSummary, SLOT(close()));

}

