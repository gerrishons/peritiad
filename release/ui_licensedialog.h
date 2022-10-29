/********************************************************************************
** Form generated from reading UI file 'licensedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICENSEDIALOG_H
#define UI_LICENSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_LicenseDialog
{
public:
    QTextBrowser *textBrowser;
    QPushButton *cancelPushButton;
    QPushButton *okPushButton;

    void setupUi(QDialog *LicenseDialog)
    {
        if (LicenseDialog->objectName().isEmpty())
            LicenseDialog->setObjectName(QString::fromUtf8("LicenseDialog"));
        LicenseDialog->resize(700, 520);
        textBrowser = new QTextBrowser(LicenseDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(-1, 1, 701, 501));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setSource(QUrl(QString::fromUtf8("qrc:/docs/LICENSE.md")));
        cancelPushButton = new QPushButton(LicenseDialog);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));
        cancelPushButton->setGeometry(QRect(520, 500, 80, 23));
        okPushButton = new QPushButton(LicenseDialog);
        okPushButton->setObjectName(QString::fromUtf8("okPushButton"));
        okPushButton->setGeometry(QRect(620, 500, 80, 23));

        retranslateUi(LicenseDialog);
        QObject::connect(okPushButton, &QPushButton::clicked, LicenseDialog, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(LicenseDialog);
    } // setupUi

    void retranslateUi(QDialog *LicenseDialog)
    {
        LicenseDialog->setWindowTitle(QCoreApplication::translate("LicenseDialog", "License", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("LicenseDialog", "cancel", nullptr));
        okPushButton->setText(QCoreApplication::translate("LicenseDialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LicenseDialog: public Ui_LicenseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICENSEDIALOG_H
