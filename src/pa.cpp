#include <QMessageBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QTabWidget>
#include <QTextBrowser>
#include <iostream>
#include "peritia.h"
#include "version.h"
//#include "peritia_about.hpp"
#include "ui_peritia.h"


//PeritiaAbout::PeritiaAbout(QWidget *parent) :
//	QDialog(parent),
//	ui(new Ui::PeritiaAbout);
/*{
	ui->setupUi(this);
	ui->connect(bExit,SIGNAL(clicked()),Dblack,SLOT(close()));
}*/


void Peritia::ShowAbout()                                         
{	
	QIcon icon;
	icon.addFile(QString::fromUtf8(":/images/peritia-logo.png"), QSize(), QIcon::Normal, QIcon::Off);

	QDialog *Dblack = new QDialog();
	Dblack->setWindowIcon(icon);
       	QVBoxLayout *vlayout = new QVBoxLayout;
	//QHBoxLayout *hlayout = new QHBoxLayout;
	Dblack->setWindowTitle("About");
	Dblack->setFixedSize(600,600);
       	QLabel *logo_label = new QLabel();
	QLabel *title_label = new QLabel();
	QLabel *body_label = new QLabel();
	QLabel *version_label = new QLabel();

	logo_label->setGeometry(QRect(10, 10, 131, 111));
       	logo_label->setStyleSheet(QString::fromUtf8("image: url(:/images/scalabli-logo.png);"));
	QAbstractButton *bExit = new QPushButton("back");
	QAbstractButton *bLicense = new QPushButton("License");
        vlayout->addWidget(logo_label, Qt::AlignLeft); 
	QHBoxLayout *hlayout = new QHBoxLayout;
	title_label->setText(tr("<h4><b>PERITIA</b></h4>"));
	title_label->setAlignment(Qt::AlignCenter);


	//Check the bitness of your machine
	QString bitness;
	if (sizeof(void *) == 4)
		bitness = " (32 bit)";
	else if (sizeof(void *) == 8)
		bitness = " (64 bit)";
	version_label->setText(peritiaVersion + bitness);
	version_label->setAlignment(Qt::AlignCenter);
	body_label->setText(tr("<style> t {color: purple;}</style> <t><b>Peritia</b></t> is a Latin word which means experience or practical knowledge.<br>In this context peritia is a computer software for Text to ASL and Text to<br>Braille. It can also be used as a data analytics tool i.e to check and <br>analyse students` performance, teachers can use the output to set <br>reasonable and measurable goals based on current and historical data."));
	body_label->setAlignment(Qt::AlignCenter);

        QHBoxLayout *hlayout2 = new QHBoxLayout;
	QTabWidget *tabWidget = new QTabWidget();
//	QTextBrowser *textBrowser = new QTextBrowser();
	
	tabWidget->setGeometry(QRect(346, 50, 341, 161));
	tabWidget->setTabPosition(QTabWidget::South);
       	tabWidget->setTabShape(QTabWidget::Rounded);
	tabWidget->setTabText(0, "License");
	
	QWidget *tab_1 = new QWidget();
	tab_1->setObjectName(QString::fromUtf8("tab"));
	QTextBrowser *textBrowser_1 = new QTextBrowser(tab_1);
	textBrowser_1->setObjectName(QString::fromUtf8("textBrowser_1"));
        textBrowser_1->setGeometry(QRect(0, 0, 341, 121));
	tabWidget->addTab(tab_1, "Credits");
//	textBrowser_1->setFrameShape(QFrame::WinPanel);
//	textBrowser->setGeometry(QRect(60, 90, 256, 192));
//	textBrowser->setText("ddd");
        QWidget *tab_2 = new QWidget();
       	tab_2->setObjectName(QString::fromUtf8("tab_2"));
	QWidget *verticalLayoutWidget = new QWidget(tab_2);
	verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
       	verticalLayoutWidget->setGeometry(QRect(-1, 0, 331, 121));
	QVBoxLayout *verticalLayout = new QVBoxLayout(verticalLayoutWidget);
	verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
	verticalLayout->setContentsMargins(0, 0, 0, 0);
	QTextBrowser *textBrowser_2 = new QTextBrowser(verticalLayoutWidget);
	textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
	textBrowser_2->setSource(QUrl(QString::fromUtf8("file:///root/git/peritia/LICENSE")));
	verticalLayout->addWidget(textBrowser_2);
       	tabWidget->addTab(tab_2, "License");
	QVBoxLayout *vlayout_2 = new QVBoxLayout(tabWidget);
	//vlayout_2->setMaximumHeight(150);


	//vlayout->addWidget(tabWidget, Qt::AlignTop);
	//hlayout2->addWidget(bLicense, Qt::AlignLeft);
	//hlayout2->addWidget(bExit, Qt::AlignRight);
        vlayout->addWidget(logo_label);
	vlayout->addLayout(hlayout);
        vlayout->addWidget(title_label);
	vlayout->addWidget(version_label);
	vlayout->addWidget(body_label);
	vlayout->addLayout(hlayout2);
	vlayout->addLayout(vlayout_2);
	//vlayout->addWidget(tabWidget, Qt::Center);
	if (bLicense->isChecked()) {
		vlayout->addWidget(logo_label);
		std::cout<<"dddd";
	}
//	QHBoxLayout *hlayout2 = new QHBoxLayout;
//	hlayout2->addWidget(bLicense, Qt::AlignLeft);
        //vlayout->addWidget(bExit, Qt::AlignRight);

		
	Dblack->setLayout(vlayout);
	Dblack->show();
/*	DECLARE_LAMBDA(demoLambda, void, (){
			std::cout<<"dddd";
			vlayout->addWidget(logo_label);
			});*/

	Dblack->connect(bLicense, SIGNAL(clicked()), Dblack, SLOT(close()));
	Dblack->connect(bExit,SIGNAL(clicked()),Dblack,SLOT(close()));
}

void Peritia::addButtonClicked()
{
	//version_label->setText("yyyy");

	QLabel* label = new QLabel();
	label->move(200,160);
        label->setText(";;;;;;;;;;;;;;");
	label->show();
      //  Dblack->vlayout->addWidget(label)
}


void Peritia::AboutScalabli()
{
	QString str;
      	str = QString(tr("More info about Scalabli"));
	QMessageBox::about(this, tr("About Scalabli"), str);
}
