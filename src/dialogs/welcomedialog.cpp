#include "src/dialogs/welcomedialog.h"

//#include <QDBusReply>





WelcomeDialog::WelcomeDialog(QWidget *parent)
    : QDialog(parent)
{

    QIcon windowIcon(QString::fromUtf8(":/icons/buttons/accessibility.png"));
    //resize(661, 310);
    //resize(300, 420);
    setAttribute(Qt::WA_DeleteOnClose);
    setFixedSize(630, 310);
    setModal(true);

    setStyleSheet(QString::fromUtf8("background-image:url(:/images/water.jpg) }"));
    setWindowTitle("Welcome");
    setWindowIcon(windowIcon);




    //setAttribute(Qt::WA_TranslucentBackground);

    shadow = new QGraphicsDropShadowEffect;
    shadow->setBlurRadius(25);
    shadow->setColor(QColor(50, 50, 50, 50));
    shadow->setXOffset(0);
    shadow->setYOffset(0);

    setGraphicsEffect(shadow);

    /*Frameless window hint causes the dialog to flicker a bit*/
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);// | Qt::Popup);

    progressBar = new QProgressBar(this);
    progressBar->setGeometry(QRect(87, 273, 491, 16));

    /*i.e 10, 20, 30, 40...*/
    progressBar->setMaximum(10);
    progressBar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));


    progressTimer = new QTimer(this);

    QObject::connect(progressTimer, &QTimer::timeout, this, &WelcomeDialog::valueProgress);
    progressTimer->start(250);

    versionLabel = new QLabel(this);
    versionLabel->setAlignment(Qt::AlignLeft);

    /* w-> x offeset,  x-> y offset, y-> length, z-> width*/
    versionLabel->setGeometry(QRect(535, 293, 90, 20));
    versionLabel->setFrameShape(QFrame::NoFrame);
    versionLabel->setText("Version 2022.1");



}

void WelcomeDialog::valueProgress()  {

    /*This increments the value of the progress bar by 1(or the setMaximum value */
    progressBar->setValue(progressBar->value()+1);
    int value = progressBar->value();
    progressBar->setValue(value);

}
