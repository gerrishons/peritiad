#include "settingsdialog.h"
#include "ui_settingsdialog.h"

SettingsDialog::SettingsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    setModal(true);
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
    qInfo()<<">>>>>>Closing settings dialog<<<<<<<<<";
}

