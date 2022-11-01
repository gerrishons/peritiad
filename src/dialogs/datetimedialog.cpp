#include "datetimedialog.h"
#include "ui_datetimedialog.h"

DateTimeDialog::DateTimeDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DateTimeDialog)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_DeleteOnClose);

    /*Frameless window hint causes the dialog to flicker a bit*/
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::Popup | Qt::NoDropShadowWindowHint);

    connect(ui->comboBox, &QComboBox::currentTextChanged, this, &DateTimeDialog::updateTimezone);
    ui->comboBox->setCurrentText("Nairobi");

}

DateTimeDialog::~DateTimeDialog()
{
    delete ui;
    qInfo()<<">>>>>>Closing Datetime dialog<<<<<<<<<";
}



void DateTimeDialog::updateTimezone()  {


    if(ui->comboBox->currentText() == "Nairobi") {

        QUrl clockUrl = QUrl("qrc:/docs/nairobiclock.qml");
        ui->quickWidget->setSource(clockUrl);
    }

    if(ui->comboBox->currentText() == "New York") {
        ui->comboBox->setAccessibleDescription("Showing current time in New York");
        QUrl clockUrl = QUrl("qrc:/docs/newyorkclock.qml");
        ui->quickWidget->setSource(clockUrl);
    }

    if(ui->comboBox->currentText() == "London") {
        ui->comboBox->setAccessibleDescription("Showing current time in London");
        QUrl clockUrl = QUrl("qrc:/docs/londonclock.qml");
        ui->quickWidget->setSource(clockUrl);

    }




}
