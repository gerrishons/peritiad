/********************************************************************************
** Form generated from reading UI file 'welcomedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEDIALOG_H
#define UI_WELCOMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_WelcomeDialog
{
public:
    QLabel *versionLabel;
    QLabel *label_2;
    QProgressBar *progressBar;

    void setupUi(QDialog *WelcomeDialog)
    {
        if (WelcomeDialog->objectName().isEmpty())
            WelcomeDialog->setObjectName(QString::fromUtf8("WelcomeDialog"));
        WelcomeDialog->resize(630, 310);
        WelcomeDialog->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0.068, x2:1, y2:0, stop:0 rgba(40, 221, 218, 255), stop:1 rgba(255, 255, 255, 255));"));
        versionLabel = new QLabel(WelcomeDialog);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setGeometry(QRect(536, 290, 91, 20));
        versionLabel->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.006, y1:0.0509545, x2:0.185393, y2:0.818, stop:0 rgba(40, 221, 218, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_2 = new QLabel(WelcomeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 20, 201, 111));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/logos/peritia-logo.png);"));
        progressBar = new QProgressBar(WelcomeDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(120, 220, 391, 16));
        progressBar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(245, 224, 176, 255), stop:0.09 rgba(246, 189, 237, 255), stop:0.14 rgba(194, 207, 246, 255), stop:0.19 rgba(184, 160, 168, 255), stop:0.25 rgba(171, 186, 248, 255), stop:0.32 rgba(243, 248, 224, 255), stop:0.385 rgba(249, 162, 183, 255), stop:0.47 rgba(100, 115, 124, 255), stop:0.58 rgba(251, 205, 202, 255), stop:0.65 rgba(170, 128, 185, 255), stop:0.75 rgba(252, 222, 204, 255), stop:0.805 rgba(206, 122, 218, 255), stop:0.86 rgba(254, 223, 175, 255), stop:0.91 rgba(254, 236, 244, 255), stop:1 rgba(255, 191, 221, 255));"));
        progressBar->setMaximum(10);
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        retranslateUi(WelcomeDialog);

        QMetaObject::connectSlotsByName(WelcomeDialog);
    } // setupUi

    void retranslateUi(QDialog *WelcomeDialog)
    {
        WelcomeDialog->setWindowTitle(QCoreApplication::translate("WelcomeDialog", "WelcomeDialog", nullptr));
        versionLabel->setText(QCoreApplication::translate("WelcomeDialog", "TextLabel", nullptr));
        progressBar->setFormat(QCoreApplication::translate("WelcomeDialog", "%p%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeDialog: public Ui_WelcomeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEDIALOG_H
