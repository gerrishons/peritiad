#include "settingsdialog.h"
#include "ui_settingsdialog.h"
SettingsDialog::SettingsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    setModal(true);

    connect(ui->checkBox, &QCheckBox::stateChanged, this, &SettingsDialog::changeState);
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
    qInfo()<<">>>>>>Closing settings dialog<<<<<<<<<";
}

void SettingsDialog::changeState()  {



}
