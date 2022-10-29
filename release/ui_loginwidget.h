/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QAction *actionLogin;
    QWidget *widget;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *userNameLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *statusLabel;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName(QString::fromUtf8("LoginWidget"));
        LoginWidget->resize(300, 420);
        actionLogin = new QAction(LoginWidget);
        actionLogin->setObjectName(QString::fromUtf8("actionLogin"));
        widget = new QWidget(LoginWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(29, 29, 370, 480));
        widget->setStyleSheet(QString::fromUtf8("border-radius:20px;"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 110, 90, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Sans")});
        font.setPointSize(12);
        font.setBold(true);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color:rgba(255,255,255,210);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(LoginWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 291, 411));
        label_2->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"border-radius:20px;"));
        label = new QLabel(LoginWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 290, 420));
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0.068, x2:1, y2:0, stop:0 rgba(40, 221, 218, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius:20px;"));
        label_3 = new QLabel(LoginWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 10, 290, 391));
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,100);\n"
"border-radius:15px;"));
        userNameLineEdit = new QLineEdit(LoginWidget);
        userNameLineEdit->setObjectName(QString::fromUtf8("userNameLineEdit"));
        userNameLineEdit->setGeometry(QRect(50, 140, 200, 40));
        userNameLineEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom: 2px solid rgba(105,118, 132, 255);\n"
"color:rgba(255,255,255,230);\n"
"padding-bottom:7px;"));
        userNameLineEdit->setFrame(true);
        userNameLineEdit->setEchoMode(QLineEdit::Normal);
        userNameLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        userNameLineEdit->setClearButtonEnabled(true);
        passwordLineEdit = new QLineEdit(LoginWidget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(50, 200, 200, 40));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom: 2px solid rgba(105,118, 132, 255);\n"
"color:rgba(255,255,255,230);\n"
"padding-bottom:7px;"));
        passwordLineEdit->setFrame(true);
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        passwordLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        passwordLineEdit->setClearButtonEnabled(true);
        loginButton = new QPushButton(LoginWidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(50, 270, 200, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("DejaVu Sans")});
        font1.setBold(true);
        loginButton->setFont(font1);
        loginButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(245, 224, 176, 255), stop:0.09 rgba(246, 189, 237, 255), stop:0.14 rgba(194, 207, 246, 255), stop:0.19 rgba(184, 160, 168, 255), stop:0.25 rgba(171, 186, 248, 255), stop:0.32 rgba(243, 248, 224, 255), stop:0.385 rgba(249, 162, 183, 255), stop:0.47 rgba(100, 115, 124, 255), stop:0.58 rgba(251, 205, 202, 255), stop:0.65 rgba(170, 128, 185, 255), stop:0.75 rgba(252, 222, 204, 255), stop:0.805 rgba(206, 122, 218, 255), stop:0.86 rgba(254, 223, 175, 255), stop:0.91 rgba(254, 236, 244, 255), stop:1 rgba(255, 191, 221, 255));\n"
"selection-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"border-radius:5px;"));
        loginButton->setFlat(false);
        pushButton_2 = new QPushButton(LoginWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 330, 200, 40));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans")});
        font2.setPointSize(9);
        font2.setBold(false);
        pushButton_2->setFont(font2);
        pushButton_2->setFlat(true);
        label_5 = new QLabel(LoginWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 50, 57, 41));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/icons/buttons/account.png);"));
        statusLabel = new QLabel(LoginWidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(60, 310, 181, 20));

        retranslateUi(LoginWidget);
        QObject::connect(loginButton, &QPushButton::clicked, actionLogin, qOverload<>(&QAction::trigger));

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QCoreApplication::translate("LoginWidget", "LoginWidget", nullptr));
        actionLogin->setText(QCoreApplication::translate("LoginWidget", "Login", nullptr));
#if QT_CONFIG(shortcut)
        actionLogin->setShortcut(QCoreApplication::translate("LoginWidget", "Enter", nullptr));
#endif // QT_CONFIG(shortcut)
        label_4->setText(QCoreApplication::translate("LoginWidget", "Login", nullptr));
        userNameLineEdit->setPlaceholderText(QCoreApplication::translate("LoginWidget", "User Name:", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("LoginWidget", "Password:", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginWidget", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginWidget", "Forgot username or password?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
