#include "src/dialogs/licensedialog.h"
#include "src/dialogs/aboutdialog.h"


LicenseDialog::LicenseDialog(QWidget *parent)
    : QDialog(parent)
{

    QIcon windowIcon(QString::fromUtf8(":/icons/buttons/accessibility.png"));
    resize(700, 520);
    //resize(300, 420);
    setAttribute(Qt::WA_DeleteOnClose);
    //setFixedSize(630, 310);
    //setModal(true);

    //setStyleSheet(QString::fromUtf8("background-image:url(:/images/water.jpg) }"));
    setWindowTitle("License");
    setWindowIcon(windowIcon);
    /*This prevents the About Dialog from disappearing too when closing the license dialog*/
    setWindowFlags(Qt::Popup);




    licenseBrowser = new QTextBrowser(this);
    licenseBrowser->setGeometry(QRect(-1, 1, 701, 501));
    licenseBrowser->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));"));


    licenseBrowser->setFrameShape(QFrame::NoFrame);

    QUrl licenseUrl = QUrl("qrc:/docs/LICENSE.md");
    licenseBrowser->setSource(licenseUrl);

    cancelButton = new QPushButton(this);
    cancelButton->setText("Cancel");
    cancelButton->setGeometry(QRect(520, 500, 80, 23));

    okButton = new QPushButton(this);
    okButton->setDefault(true);
    okButton->setText("Ok");
    okButton->setGeometry(QRect(620, 500, 80, 23));


    connect(okButton, SIGNAL(clicked()), this, SLOT(onLaunchAbout()) );

}


void LicenseDialog::onLaunchAbout() {

    /*this will hide the license button and revert back to the About Dialog*/


     LicenseDialog::hide();

}
