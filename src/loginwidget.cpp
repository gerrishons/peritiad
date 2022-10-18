#include "loginwidget.h"



LoginWidget::LoginWidget(QWidget *parent)
    : QWidget(parent)
{
    resize(300, 420);
    setFixedSize(300, 420);
    //setFixedSize(400,450);
    setGeometry(QRect(29, 29, 370, 480));


    setAttribute(Qt::WA_TranslucentBackground);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::Popup);


     widget = new QWidget(this);
     widget->setGeometry(QRect(0, 0, 370, 480));
     //widget->setGeometry(QRect(29, 29, 370, 480));

     label = new QLabel(widget);
     label->setGeometry(QRect(0, 0, 300, 420));
     //label->setGeometry(QRect(50, 60, 300, 420));
     label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
    "border-radius:20px;"));

     label_2 = new QLabel(widget);
     label_2->setGeometry(QRect(0, 0, 291, 411));
    // label_2->setGeometry(QRect(50, 60, 300, 420));
     label_2->setStyleSheet(QString::fromUtf8(";\n"
    "background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
    "border-radius:20px;"));

     label_3 = new QLabel(widget);
     label_3->setGeometry(QRect(10, 30, 280, 390));
    // label_3->setGeometry(QRect(60, 90, 280, 390));
            label_3->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,100);\n"
    "border-radius:15px;"));
            label_4 = new QLabel(this);//widget);
            label_4->setGeometry(QRect(150, 110, 90, 40));
            QFont font;
            font.setFamilies({QString::fromUtf8("DejaVu Sans")});
            font.setPointSize(12);
            font.setBold(true);
            label_4->setFont(font);
            label_4->setText("Login");
            label_4->setStyleSheet(QString::fromUtf8("color:rgba(255,255,255,210);"));
            label_4->setAlignment(Qt::AlignCenter);
            lineEdit_2 = new QLineEdit(widget);
            lineEdit_2->setGeometry(QRect(100, 240, 200, 40));
            lineEdit_2->setPlaceholderText("Password:");
            lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
    "border:none;\n"
    "border-bottom: 2px solid rgba(105,118, 132, 255);\n"
    "color:rgba(255,255,255,230);\n"
    "padding-bottom:7px;"));
            lineEdit_2->setFrame(true);
            lineEdit_2->setEchoMode(QLineEdit::Password);
            lineEdit_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
            pushButton = new QPushButton(this);//widget);
            pushButton->setObjectName(QString::fromUtf8("pushButton"));
            pushButton->setGeometry(QRect(100, 310, 200, 40));
            QFont font1;
            font1.setFamilies({QString::fromUtf8("DejaVu Sans")});
            font1.setBold(true);
            pushButton->setFont(font1);
            pushButton->setText("Login");
            pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(245, 224, 176, 255), stop:0.09 rgba(246, 189, 237, 255), stop:0.14 rgba(194, 207, 246, 255), stop:0.19 rgba(184, 160, 168, 255), stop:0.25 rgba(171, 186, 248, 255), stop:0.32 rgba(243, 248, 224, 255), stop:0.385 rgba(249, 162, 183, 255), stop:0.47 rgba(100, 115, 124, 255), stop:0.58 rgba(251, 205, 202, 255), stop:0.65 rgba(170, 128, 185, 255), stop:0.75 rgba(252, 222, 204, 255), stop:0.805 rgba(206, 122, 218, 255), stop:0.86 rgba(254, 223, 175, 255), stop:0.91 rgba(254, 236, 244, 255), stop:1 rgba(255, 191, 221, 255));\n"
    "border-radius:5px;"));
            pushButton->setFlat(false);
            pushButton_2 = new QPushButton(this);//widget);
            pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
            pushButton_2->setGeometry(QRect(100, 360, 200, 40));
            QFont font2;
            font2.setFamilies({QString::fromUtf8("DejaVu Sans")});
            font2.setPointSize(9);
            font2.setBold(false);
            pushButton_2->setFont(font2);
            pushButton_2->setFlat(true);
            pushButton_2->setText("Forgot username or password?");
            lineEdit_3 = new QLineEdit(widget);
            lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
            lineEdit_3->setPlaceholderText("User Name:");
            lineEdit_3->setGeometry(QRect(100, 180, 200, 40));
            lineEdit_3->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
    "border:none;\n"
    "border-bottom: 2px solid rgba(105,118, 132, 255);\n"
    "color:rgba(255,255,255,230);\n"
    "padding-bottom:7px;"));
            lineEdit_3->setFrame(true);
            lineEdit_3->setEchoMode(QLineEdit::Normal);
            lineEdit_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);




}
