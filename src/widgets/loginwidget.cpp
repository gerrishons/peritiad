#include "loginwidget.h"
#include "qmessagebox.h"
#include "qtimer.h"
#include "ui_loginwidget.h"

LoginWidget::LoginWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWidget)
{
    ui->setupUi(this);



     connect(ui->actionLogin, &QAction::triggered, this, &LoginWidget::checkCredentials);
}

LoginWidget::~LoginWidget()
{
    delete ui;
    qInfo()<<">>>>>>Closing login widget<<<<<<<<<";
}



void LoginWidget::checkCredentials() {

    if(ui->userNameLineEdit->text() == "user" && ui->passwordLineEdit->text() == "1234") {

        ui->statusLabel->setText("Logged in successfully");

        QMessageBox *mbox = new QMessageBox;
        mbox->setWindowTitle(tr("Login update"));
        mbox->setText(ui->userNameLineEdit->text() + ", you logged in successfully!");
        mbox->setIcon(QMessageBox::Information);
        mbox->show();
        QTimer::singleShot(1000, mbox, SLOT(hide()));
        LoginWidget::close();

    } else {
        ui->statusLabel->setText("Wrong Credentials");

    }
    if(ui->userNameLineEdit->text() == "" && ui->passwordLineEdit->text() == "") {
        ui->statusLabel->setText("Empty credentials");
    }




}
