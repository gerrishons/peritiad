#pragma once

#include "peritia-about.hpp"


void Peritia::showAbout() {

    QDialog *aboutDialog;
	QLabel *logo_label;
	QLabel *fyi_label;
	QLabel *title_label;
	QLabel *versionLabel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QLabel *label_5;

	aboutDialog = new QDialog();
    aboutDialog->resize(665, 305);
	aboutDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(41, 12, 53);"));
    aboutDialog->setWindowTitle("About Peritia");
    QGridLayout *gridLayout = new QGridLayout(aboutDialog);
    gridLayout->setGeometry(QRect(-1, -1, 671, 311));

    //logo_label = new QLabel(aboutDialog);
    //logo_label->setGeometry(QRect(10, 20, 200, 200));//191 181
    //logo_label->setStyleSheet(QString::fromUtf8("image: url(:/logos/peritia-logo.png);"));
	
	horizontalLayoutWidget = new QWidget(aboutDialog);
	horizontalLayoutWidget->setGeometry(QRect(0, 390, 701, 61));
	
	horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
	horizontalLayout->setContentsMargins(0, 0, 0, 0);
	widget = new QWidget(horizontalLayoutWidget);

	widget->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 9, 31);"));
        pushButton_3 = new QPushButton(widget);
	pushButton_3->setGeometry(QRect(240, 0, 191, 27));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
	pushButton_3->setText("End-User Rights");
        pushButton_3->setFlat(true);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(490, 0, 231, 27));
	pushButton->setText("Privacy Policy");
	pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton->setFlat(true);

        fyi_label = new QLabel(widget);
	fyi_label->setText("<html><head/><body><p align=\"center\"><span style=\" font-style:italic; color:#9a9996;\">Peritia and Peritia logos are trademarks of Scalabli</span></p></body></html>");
        fyi_label->setGeometry(QRect(170, 30, 350, 20));
        fyi_label->setMaximumSize(QSize(350, 20));

        fyi_label->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 9, 31);"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(-10, 0, 222, 27));
        pushButton_2->setFocusPolicy(Qt::ClickFocus);
	pushButton_2->setText("Licensing Information");
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(246, 245, 244);"));
        pushButton_2->setFlat(true);

        horizontalLayout->addWidget(widget);

        verticalLayoutWidget = new QWidget(aboutDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(340, 10, 1379, 361));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        
        title_label = new QLabel(verticalLayoutWidget);
        title_label->setText("<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#f6f5f4;\">PERITIA</span></p><p><br/></p></body></html>");
        title_label->setMinimumSize(QSize(260, 35));
        title_label->setMaximumSize(QSize(260, 35));

        verticalLayout->addWidget(title_label);
	versionLabel = new QLabel(verticalLayoutWidget);
        versionLabel->setMinimumSize(QSize(25, 10));
        versionLabel->setMaximumSize(QSize(200, 25));
	
	/*Check the bitness of your machine*/
	
	if (sizeof(void *) == 4)
		bitness = " (32 bit)";
	
	else if (sizeof(void *) == 8)
	       
		bitness = " (64 bit)";
        versionLabel->setText(peritiaVersion + bitness);

        verticalLayout->addWidget(versionLabel);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(200, 30));

        verticalLayout->addWidget(label_5);

	aboutDialog->show();

}


