#include "licensedialog.h"
#include "ui_licensedialog.h"

LicenseDialog::LicenseDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LicenseDialog)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    setWindowFlags(Qt::Popup);

    ui->okPushButton->setDefault(true);

}

LicenseDialog::~LicenseDialog()
{
    delete ui;
     qInfo()<<">>>>>>Closing license dialog<<<<<<<<<";
}

