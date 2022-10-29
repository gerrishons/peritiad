/********************************************************************************
** Form generated from reading UI file 'datetimedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATETIMEDIALOG_H
#define UI_DATETIMEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DateTimeDialog
{
public:
    QAction *actionChangeCity;
    QQuickWidget *quickWidget;
    QCalendarWidget *calendarWidget;
    QComboBox *comboBox;
    QLabel *label;

    void setupUi(QDialog *DateTimeDialog)
    {
        if (DateTimeDialog->objectName().isEmpty())
            DateTimeDialog->setObjectName(QString::fromUtf8("DateTimeDialog"));
        DateTimeDialog->resize(500, 300);
        DateTimeDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);"));
        actionChangeCity = new QAction(DateTimeDialog);
        actionChangeCity->setObjectName(QString::fromUtf8("actionChangeCity"));
        quickWidget = new QQuickWidget(DateTimeDialog);
        quickWidget->setObjectName(QString::fromUtf8("quickWidget"));
        quickWidget->setGeometry(QRect(0, 0, 211, 241));
        quickWidget->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
        quickWidget->setSource(QUrl(QString::fromUtf8("qrc:/docs/nairobiclock.qml")));
        calendarWidget = new QCalendarWidget(DateTimeDialog);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(230, 0, 272, 149));
        calendarWidget->setGridVisible(true);
        calendarWidget->setSelectionMode(QCalendarWidget::NoSelection);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::ISOWeekNumbers);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(false);
        comboBox = new QComboBox(DateTimeDialog);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/countries/kenya.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/date/date-03.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/buttons/internet.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon2, QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(180, 250, 107, 24));
        comboBox->setMinimumSize(QSize(20, 0));
        label = new QLabel(DateTimeDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 250, 71, 29));

        retranslateUi(DateTimeDialog);
        QObject::connect(actionChangeCity, &QAction::triggered, quickWidget, qOverload<>(&QQuickWidget::repaint));
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(int)), quickWidget, SLOT(update()));

        QMetaObject::connectSlotsByName(DateTimeDialog);
    } // setupUi

    void retranslateUi(QDialog *DateTimeDialog)
    {
        DateTimeDialog->setWindowTitle(QCoreApplication::translate("DateTimeDialog", "DateTimeDialog", nullptr));
        actionChangeCity->setText(QCoreApplication::translate("DateTimeDialog", "ChangeCity", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DateTimeDialog", "Nairobi", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DateTimeDialog", "New York", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("DateTimeDialog", "London", nullptr));

        label->setText(QCoreApplication::translate("DateTimeDialog", "Timezone", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DateTimeDialog: public Ui_DateTimeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIMEDIALOG_H
