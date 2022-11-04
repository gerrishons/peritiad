#include "settingsdialog.h"
#include "qdir.h"
#include "ui_settingsdialog.h"
#include <iostream>
#include <string>
#include <QColorDialog>
#include "src/app/peritia.h"
using namespace std;
SettingsDialog::SettingsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    setModal(true);

    int i = QApplication::font().pointSize();
    QString fontSize = QString::number(i);

    ui->fontLabel->setText(QApplication::font().family()+", " + fontSize);
    ui->stackedWidget->setCurrentIndex(0);


  //  connect(ui->checkBox, &QCheckBox::stateChanged, this, &SettingsDialog::changeState);
    connect(ui->pushButton, &QPushButton::clicked, this, &SettingsDialog::changeFont);
  //  connect(ui->applyPushButton, &QPushButton::clicked, this, &SettingsDialog::changeState);
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
    qInfo()<<">>>>>>Closing settings dialog<<<<<<<<<";
}



void SettingsDialog::changeBackground()  {
    colorFile = new QFile;
    QColorDialog *colorDialog = new QColorDialog;

    colorDialog->show();


#ifdef Q_OS_LINUX
     QDir linuxBackgroundDir;
     QString defaultPath = linuxBackgroundDir.home().filePath(".config/Peritia/backgrounds/peritia-color.conf");

     colorFile->setFileName(defaultPath);

     if (!colorFile->exists()) {
           /*defaultPath does not exist! ..making a new path...*/
           linuxBackgroundDir.home().mkpath(".config/Peritia/backgrounds");
       }
     colorFile->open(QIODevice::ReadWrite | QIODevice::Text);

     const QString getColorString = colorDialog->getColor().name();

    // QString::toStdString(colorDialog->getColor());
     qInfo()<<getColorString;
     //colorFile->write();
     colorFile->write(getColorString.toLocal8Bit());

     colorFile->flush();
#endif

}

void SettingsDialog::changeFont()  {

    bool fontSelected;

    QFont font = QFontDialog::getFont(&fontSelected, this);
    if (fontSelected) {

        int i = font.pointSize();
        QString fontSize = QString::number(i);

        ui->fontLabel->setText(font.family()+", "+ fontSize);
        QApplication::setFont(font);

        fontFile = new QFile;
        QDir fontPath;
#ifdef Q_OS_LINUX
     QString defaultPath = fontPath.home().filePath(".config/Peritia/font.conf");
     fontFile->setFileName(defaultPath);

     if (!fontFile->exists()) {
                /*defaultPath does not exist! ..making a new path...*/
                fontPath.home().mkpath(".config/Peritia");
     }
     fontFile->open(QIODevice::ReadWrite | QIODevice::Text);
     const QString getfontString = font.toString();

     fontFile->write(getfontString.toLocal8Bit());
     fontFile->flush();



#endif




        qInfo()<<"Selected font is: "<<font;

    }

}


//void SettingsDialog::changeState()  {

 //   return SettingsDialog::writeSettings();


//

void SettingsDialog::writeSettings() {

   // settingsFile = new QFile;

    //QDir linuxSettingsDir;
    //QString defaultPath = linuxSettingsDir.home().filePath(".config/Peritia/peritia.conf");

   // settings(defaultPath, QSettings::IniFormat);

    //settingsFile->setFileName(defaultPath);

   // if (!settingsFile->exists()) {
          /*defaultPath does not exist! ..making a new path...*/
   //       linuxSettingsDir.home().mkpath(".config/Peritia");

   //   }
//

   //  settings.beginGroup("MainWindow");
    // settings.setValue("geometry", QRect(100, 100, 200, 200));// saveGeometry());
     //settings.setValue("windowState", saveState());
  // settings.setValue("font", font());
     //close());//saveGeometry());
  // settings.setValue("size", size());
  // settings.setValue("styleSheet", styleSheet());
     //settings.endGroup();


}
