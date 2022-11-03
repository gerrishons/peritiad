#include "src/dialogs/welcomedialog.h"
#include "ui_welcomedialog.h"
#include "version.h"
//#include "src/version.cpp"

WelcomeDialog::WelcomeDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeDialog)
{
    ui->setupUi(this);

    setAccessibleName("Peritia welcome");

    setAttribute(Qt::WA_DeleteOnClose);
    setModal(true);

    /*Frameless window hint causes the dialog to flicker a bit*/
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    progressTimer = new QTimer(this);

    QObject::connect(progressTimer, &QTimer::timeout, this, &WelcomeDialog::valueProgress);
    progressTimer->start(250);


    ui->versionLabel->setText("Version " +global::version);
}

WelcomeDialog::~WelcomeDialog()
{
    delete ui;
    qInfo()<<">>>>>>Closing Welcome dialog<<<<<<<<<";
}

void WelcomeDialog::valueProgress()  {

    /*This increments the value of the progress bar by 1(or the setMaximum value */
    ui->progressBar->setValue(ui->progressBar->value()+1);
    int value = ui->progressBar->value();
    ui->progressBar->setValue(value);

}
