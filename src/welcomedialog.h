#ifndef WELCOMEDIALOG_H
#define WELCOMEDIALOG_H


#include <QDialog>
#include <QTimer>
#include <QProgressBar>
//#include <QGridLayout>
//#include <QLabel>
//#include <QPushButton>
#include <QGraphicsDropShadowEffect>


class WelcomeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomeDialog(QWidget *parent = nullptr);





private:
    QGraphicsDropShadowEffect *shadow;
    QProgressBar *progressBar;
    QTimer *progressTimer;

private slots:
    void valueProgress();








  /*  QGraphicsDropShadowEffect *shadow;

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
    QWidget *widget3;*/


};



#endif // WELCOMEDIALOG_H
