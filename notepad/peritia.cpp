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
#include <QFile>
#include <QTime>
#include <QTimer>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
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

#include "peritia.h"
#include "ui_peritia.h"

Peritia::Peritia(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Peritia)
{
    ui->setupUi(this);
   
    connect(ui->actionSummary, &QAction::triggered, this, &Peritia::newDocument);
    connect(ui->actionOpen, &QAction::triggered, this, &Peritia::open);
    connect(ui->actionSave, &QAction::triggered, this, &Peritia::save);
    connect(ui->actionSave_as, &QAction::triggered, this, &Peritia::saveAs);
    connect(ui->actionPrint, &QAction::triggered, this, &Peritia::print);
    connect(ui->actionExit, &QAction::triggered, this, &QWidget::close);
#if QT_CONFIG(clipboard)
    connect(ui->textEdit, &QTextEdit::copyAvailable, ui->actionCopy, &QAction::setEnabled);
    connect(ui->actionCopy, &QAction::triggered, ui->textEdit, &QTextEdit::copy);
    connect(ui->actionCut, &QAction::triggered, ui->textEdit, &QTextEdit::cut);
    connect(ui->actionPaste, &QAction::triggered, ui->textEdit, &QTextEdit::paste);
#endif
    connect(ui->textEdit, &QTextEdit::undoAvailable, ui->actionUndo, &QAction::setEnabled);
    connect(ui->actionUndo, &QAction::triggered, ui->textEdit, &QTextEdit::undo);
    connect(ui->textEdit, &QTextEdit::redoAvailable, ui->actionRedo, &QAction::setEnabled);
    connect(ui->actionRedo, &QAction::triggered, ui->textEdit, &QTextEdit::redo);

    connect(ui->actionFont, &QAction::triggered, this, &Peritia::selectFont);
    connect(ui->actionBold, &QAction::triggered, this, &Peritia::setFontBold);
    connect(ui->actionUnderline, &QAction::triggered, this, &Peritia::setFontUnderline);
    connect(ui->actionItalic, &QAction::triggered, this, &Peritia::setFontItalic);
    connect(ui->actionAbout, &QAction::triggered, this, &Peritia::about);
    connect(ui->actionAbout_Scalabli, &QAction::triggered, this, &Peritia::aboutScalabli);

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

void Peritia::newDocument()
{

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
	 //    QString str;
	     str = QString(tr("Good morning, Your using a linux machine"));
	     QMessageBox::about(this, tr("About Peritia"), str);
     }
     
     // logical operators
     if(12 <= hourStringToInt && hourStringToInt <18) {
	    // QString str;
	     str = QString(tr("Good aftertoon, Your using a oinux machine"));
	     QMessageBox::about(this, tr("About Peritia"), str);
     }
     else {
	  //   QString str;
	     str = QString(tr("Good evening, Your using a oinux machine"));
	     QMessageBox::about(this, tr("About Peritia"), str);
     }

#endif

#if __apple__
     str = QString(tr("Your using an apple machine"));
     QMessageBox::about(this, str);

#endif
}

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
    ui->textEdit->setText(text);
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
    QString text = ui->textEdit->toPlainText();
    out << text;
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
    QString text = ui->textEdit->toPlainText();
    out << text;
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
    ui->textEdit->print(&printDev);
#endif // QT_CONFIG(printer)
}

void Peritia::selectFont()
{
    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected, this);
    if (fontSelected)
        ui->textEdit->setFont(font);
}

void Peritia::setFontUnderline(bool underline)
{
    ui->textEdit->setFontUnderline(underline);
}

void Peritia::setFontItalic(bool italic)
{
    ui->textEdit->setFontItalic(italic);
}

void Peritia::setFontBold(bool bold)
{
    bold ? ui->textEdit->setFontWeight(QFont::Bold) :
           ui->textEdit->setFontWeight(QFont::Normal);
}

void Peritia::about()
{
    QMessageBox::about(this, tr("About Peritia"), tr("<b>Peritia</b> is a Latin word which means experience or practical knowledge.\n"
			    "In this context peritia is a computer software for Text to ASL and Text to Braille, it can also be used as a data analytics tool i.e to check and analyse students` performance, teachers can use the output to set reasonable and measurable goals based on current and historical data. <u>USAGE</u> %1\nPress `ESC` to exit %2\n%3\n© Gerrishon Sirere %4\nTHE SOFTWARE IS PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE DEALINGS IN THE SOFTWARE"));

   // QMessageBox::about(this, tr("About Peritia"), str);

  /*  QMessageBox::information(this, tr("About Peritia"),
                       tr("<b>Peritia</b> is a Latin word which means experience or practical knowledge. In this context peritia is a computer software for Text to ASL and Text to Braille, it can also be used as a data analytics tool i.e to check and analyse students` performance, teachers can use the output to set reasonable and measurable goals based on current and historical data. USAGE \n Press `ESC` to exit \n\n © Gerrishon Sirere \n THE SOFTWARE IS PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE"));
*/
}

void Peritia::aboutScalabli()
{
	QString str;
	str = QString(tr("More info about Scalabli"));
	QMessageBox::about(this, tr("About Scalabli"), str);
}
