#include "settingsdialog.h"
#include "qdir.h"
#include "ui_settingsdialog.h"
#include <iostream>
#include <string>
#include <QColorDialog>

using namespace std;
SettingsDialog::SettingsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    setModal(true);

    connect(ui->checkBox, &QCheckBox::stateChanged, this, &SettingsDialog::changeState);
    connect(ui->pushButton, &QPushButton::clicked, this, &SettingsDialog::changeBackground);
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
     colorFile->open(QIODevice::Append | QIODevice::Text);
    // std::string getColorString(colorDialog-

    // QString::toStdString(colorDialog->getColor());
     qInfo()<<//selectedColor();
    // colorFile->write(colorDialog->getColor());
     colorFile->flush();
#endif




}
void SettingsDialog::changeState()  {



}
