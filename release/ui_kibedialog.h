/********************************************************************************
** Form generated from reading UI file 'kibedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KIBEDIALOG_H
#define UI_KIBEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_KIbeDialog
{
public:

    void setupUi(QDialog *KIbeDialog)
    {
        if (KIbeDialog->objectName().isEmpty())
            KIbeDialog->setObjectName(QString::fromUtf8("KIbeDialog"));
        KIbeDialog->resize(800, 600);

        retranslateUi(KIbeDialog);

        QMetaObject::connectSlotsByName(KIbeDialog);
    } // setupUi

    void retranslateUi(QDialog *KIbeDialog)
    {
        KIbeDialog->setWindowTitle(QCoreApplication::translate("KIbeDialog", "KIbeDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KIbeDialog: public Ui_KIbeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIBEDIALOG_H
