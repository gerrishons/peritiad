/********************************************************************************
** Form generated from reading UI file 'shortcutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTDIALOG_H
#define UI_SHORTCUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ShortcutDialog
{
public:

    void setupUi(QDialog *ShortcutDialog)
    {
        if (ShortcutDialog->objectName().isEmpty())
            ShortcutDialog->setObjectName(QString::fromUtf8("ShortcutDialog"));
        ShortcutDialog->resize(800, 600);

        retranslateUi(ShortcutDialog);

        QMetaObject::connectSlotsByName(ShortcutDialog);
    } // setupUi

    void retranslateUi(QDialog *ShortcutDialog)
    {
        ShortcutDialog->setWindowTitle(QCoreApplication::translate("ShortcutDialog", "KIbeDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShortcutDialog: public Ui_ShortcutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTDIALOG_H
