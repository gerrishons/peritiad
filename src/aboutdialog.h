#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H


#include <QDialog>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QGraphicsDropShadowEffect>


class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AboutDialog(QWidget *parent = nullptr);



private:

    QGraphicsDropShadowEffect *shadow;

    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;

    QLabel *descriptionLabel;
    QLabel *logoLabel;

    QLabel *fyiLabel;
    QLabel *titleLabel;
    QLabel *versionLabel;

    QPushButton *endUserPushButton;
    QPushButton *licensePushButton;
    QPushButton *privacyPolicyPushButton;

    QString bitness;
    QString peritiaVersion;

    QVBoxLayout*verticalLayout1;
    QVBoxLayout*verticalLayout2;
    QVBoxLayout*verticalLayout3;

    QWidget *gridLayoutWidget;
    QWidget *horizontalLayoutWidget;
    QWidget *verticalLayoutWidget1;
    QWidget *verticalLayoutWidget2;
    QWidget *widget1;
    QWidget *widget2;
    QWidget *widget3;


};

#endif
