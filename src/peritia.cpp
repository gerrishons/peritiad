/****************************************************************************
**
** Copyright (C) 2017 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the documentation of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <time.h>
#include <chrono>
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
#include <QPainter>
#include "peritia-about.cpp"
#include "peritia-help.cpp"
#include "peritia-summary.cpp"
#include "peritia.h"

#include "ui_peritia.h"


Peritia::Peritia(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Peritia)
{
    ui->setupUi(this);
    startTimer(1000);
   
    using namespace std::chrono;
    system_clock::time_point p = system_clock::now();
    
    std::time_t t = system_clock::to_time_t(p);
    auto tt = std::ctime(&t);
    // turn UTC time tt into string
    std::string Hour(std::ctime(&t));
    std::string newHour = Hour.substr(11,2);

    std::string Day = Hour.substr(0,3);


    //convert string to QString
    QString QDay = QString::fromStdString(Day);

    ui->day_label->setText(QDay);
    
    std::cout << tt << std::endl;
    // std::cout<<newHour<<std::endl;
    // convert hour(string) to int
    int hourStringToInt = std::stoi(newHour);
    
    //Add 3 to change it into East Africa Timezone (UTC+3)
    int FinalHour = hourStringToInt+3;

    std::cout<<FinalHour<<std::endl;

    if (FinalHour <12) {
	    //this special method will prevent the background image to be inherited by children
	    ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/images/water.jpg) }");
	    //color Columbia Blue
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

    //QWidget *clockw = new QWidget;
    //Timer *timer = new QTimer(clockw);
   // ui->formLayout->addWidget(clockw);
  //  QPushButton *pushButtoasn = new QPushButton(ui->widget);
    //pushButtoasn->setText("Back");
    //Label *qlbl = new QLabel(ui->centralwidget);
    //QTimer *timer = new QTimer(ui->centralWidget->widget);
    
   // connect(timer, &QTimer::timeout, this, QOverload<>::of(&Peritia::update));
    //timer->start(1000);
    //i->widget->resize(200,200);
   // ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/images/blake.png) }").flush();
    //unsleep(5);
   /* unsigned int microsecond = 1000000;
    usleep(3 * microsecond);//sleeps for 3 second
    ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/images/peritia-logo.png) }");*/



    connect(ui->actionChangePic, &QAction::triggered, this, &Peritia::changePhoto);
   
    connect(ui->actionSummary, &QAction::triggered, this, &Peritia::ShowSummary);
    connect(ui->actionOpen, &QAction::triggered, this, &Peritia::open);
    connect(ui->actionSave, &QAction::triggered, this, &Peritia::save);
    connect(ui->actionSave_as, &QAction::triggered, this, &Peritia::saveAs);
    connect(ui->actionPrint, &QAction::triggered, this, &Peritia::print);
    connect(ui->actionExit, &QAction::triggered, this, &QWidget::close);
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

    connect(ui->actionFont, &QAction::triggered, this, &Peritia::selectFont);
    connect(ui->actionBold, &QAction::triggered, this, &Peritia::setFontBold);
    connect(ui->actionUnderline, &QAction::triggered, this, &Peritia::setFontUnderline);
    connect(ui->actionItalic, &QAction::triggered, this, &Peritia::setFontItalic);
    connect(ui->actionAbout, &QAction::triggered, this, &Peritia::ShowAbout);
    //connect(ui->actionAboutScalabli, &QAction::triggered, this, &Peritia::AboutScalabli);
    connect(ui->actionHelp, &QAction::triggered, this, &Peritia::showHelp);
    connect(ui->actionZoom_in, &QAction::triggered, this, &Peritia::ZoominPeritia);

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
    if (fontSelected)
	    return; //not supposed to be here tho
      //  ui->textEdit->setFont(font);
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

void Peritia::changePhoto()
{
	ui->label_2->setStyleSheet(QString::fromUtf8("image: url(:/images/scalabli-logo.png);"));
	ui->centralWidget->setStyleSheet(".QWidget {background-image:url(:/images/lumbo-minar.jpeg) }");
}
void Peritia::timerEvent(QTimerEvent *) {
	QTime utctime;

	//We used .addSecs to change to UTC+3
	//3hrs, 60 mins, 60secs , the last bit +0 should indicate the minutes added
	utctime = QTime::currentTime().addSecs(3 * 60 * 60 + 0);

	ui->clock_label->setText(utctime.toString("hh:mm:ss"));


}

void Peritia::ZoominPeritia()
{
	ui->centralWidget->resize(950,750);
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

