

#include "src/dialogs/aboutdialog.h"
#include "src/version.h"


AboutDialog::AboutDialog(QWidget *parent)
    : QDialog(parent)
{

    QIcon windowIcon(QString::fromUtf8(":/icons/buttons/accessibility.png"));
    //resize(661, 310);
    setAttribute(Qt::WA_DeleteOnClose);
    setFixedSize(661, 310);
    //setModal(true);
    setStyleSheet(QString::fromUtf8("background-color: rgb(119, 118, 123);"));
    setWindowTitle("About Peritia");
    setWindowIcon(windowIcon);

    setAttribute(Qt::WA_TranslucentBackground);
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect;
    shadow->setBlurRadius(25);
    shadow->setColor(QColor(234, 221, 186, 100));
    shadow->setXOffset(0);
    shadow->setYOffset(0);

    setGraphicsEffect(shadow);

    /*Frameless window hint causes the dialog to flicker a bit*/
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::Popup | Qt::NoDropShadowWindowHint);



    gridLayoutWidget = new QWidget(this);
    gridLayoutWidget->setGeometry(QRect(0, -1, 661, 514));

    gridLayout = new QGridLayout(gridLayoutWidget);
    gridLayout->setContentsMargins(0, 0, 0, 0);

    widget1 = new QWidget(gridLayoutWidget);
    widget1->setMinimumSize(QSize(320, 250));

    verticalLayoutWidget1 = new QWidget(widget1);
    verticalLayoutWidget1->setGeometry(QRect(-1, -1, 331, 281));

    verticalLayout1 = new QVBoxLayout(verticalLayoutWidget1);
    verticalLayout1->setSpacing(1);
    verticalLayout1->setContentsMargins(0, 0, 0, 0);

    logoLabel = new QLabel(verticalLayoutWidget1);
    logoLabel->setMinimumSize(QSize(320, 18));
    logoLabel->setStyleSheet(QString::fromUtf8("image: url(:/logos/peritia-logo.png);"));

    verticalLayout1->addWidget(logoLabel);

    gridLayout->addWidget(widget1);

    widget2 = new QWidget(gridLayoutWidget);
    widget2->setMinimumSize(QSize(320, 250));

    verticalLayoutWidget2 = new QWidget(widget2);
    verticalLayoutWidget2->setGeometry(QRect(9, -1, 301, 251));

    verticalLayout2 = new QVBoxLayout(verticalLayoutWidget2);
    verticalLayout2->setContentsMargins(0, 0, 0, 0);

    titleLabel = new QLabel(verticalLayoutWidget2);
    titleLabel->setText("<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700; color:#b5835a;\">PERITIA</span></p></body></html>");
    titleLabel->setAlignment(Qt::AlignCenter);

    shadow = new QGraphicsDropShadowEffect;
    shadow->setBlurRadius(25);
    shadow->setColor(QColor(234, 221, 186, 100));
    shadow->setXOffset(0);
    shadow->setYOffset(0);

    titleLabel->setGraphicsEffect(shadow);


    verticalLayout2->addWidget(titleLabel);

    versionLabel = new QLabel(verticalLayoutWidget2);
    versionLabel->setAlignment(Qt::AlignCenter);





    /*Check the bitness of your machine*/

    hostName = QSysInfo::machineHostName();
    osVersion = QSysInfo::prettyProductName();


    if (sizeof(void *) == 4)
        bitness = " (32 bit)";
     else if (sizeof(void *) == 8)
                bitness = " (64 bit)";



#ifdef Q_OS_LINUX 
    versionLabel->setText("Peritia version " + global::version + "\nBuilt for " +osVersion + bitness + "\n");
#endif

#ifdef Q_OS_MACOS
    versionLabel->setText("Peritia version " + global::version + "\nBuilt for " +osVersion  + bitness +"\n");
#endif

#ifdef Q_OS_WIN
    versionLabel->setText("Peritia version " + global::version + "\nBuilt for " +osVersion + bitness + "\n");
#endif





    verticalLayout2->addWidget(versionLabel);


    descriptionLabel = new QLabel(verticalLayoutWidget2);
    descriptionLabel->setAlignment(Qt::AlignLeft);
    descriptionLabel->setText("Go to source, inclusive, interactive all in one\n educational software for the decerning learner");

    verticalLayout2->addWidget(descriptionLabel);

    gridLayout->addWidget(widget2, 0, 1, 1, 1);

    widget3 = new QWidget(gridLayoutWidget);
    widget3->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 56, 70);"));
    //widget3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0.068, x2:1, y2:0, stop:0 rgba(40, 221, 218, 255), stop:1 rgba(255, 255, 255, 255));"));

    horizontalLayoutWidget = new QWidget(widget3);
    horizontalLayoutWidget->setGeometry(QRect(-1, 0, 661, 500));

    horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
    horizontalLayout->setSpacing(1);
    horizontalLayout->setContentsMargins(0, 0, 0, 0);

    licensePushButton = new QPushButton(horizontalLayoutWidget);
    licensePushButton->setAutoDefault(false);
    licensePushButton->setFlat(true);
    licensePushButton->setText("Licensing Information");

    horizontalLayout->addWidget(licensePushButton, 0, Qt::AlignTop);

    verticalLayout3 = new QVBoxLayout();

    endUserPushButton = new QPushButton(horizontalLayoutWidget);
    endUserPushButton->setAutoDefault(false);
    endUserPushButton->setFlat(true);
    endUserPushButton->setText("End-User Rights");

    verticalLayout3->addWidget(endUserPushButton);

    wigglyLabel = new WigglyLabel(horizontalLayoutWidget);




    //fyiLabel = new QLabel(horizontalLayoutWidget);
   // fyiLabel->setText("<html><head/><body><p><span style=\" font-size:9pt; color:#5e5c64;\">Bright & Noble | Right & Global</span></p></body></html>");

    verticalLayout3->addWidget(wigglyLabel, 0, Qt::AlignHCenter|Qt::AlignTop);//VCenter);

    horizontalLayout->addLayout(verticalLayout3);

    privacyPolicyPushButton = new QPushButton(horizontalLayoutWidget);
    privacyPolicyPushButton->setAutoDefault(false);
    privacyPolicyPushButton->setFlat(true);
    privacyPolicyPushButton->setText("Privacy policy");

    horizontalLayout->addWidget(privacyPolicyPushButton, 0, Qt::AlignTop);

    connect(licensePushButton, SIGNAL(clicked()), this, SLOT(showLicenseDialog()));



    gridLayout->addWidget(widget3, 1, 0, 1, 2);







}



void AboutDialog::showLicenseDialog()  {

    licenseDialog = new LicenseDialog;
    licenseDialog->show();






}

