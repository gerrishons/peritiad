#ifndef WELCOMEDIALOG_H
#define WELCOMEDIALOG_H



//#include <QDBusInterface>

#include <QDialog>
#include <QLabel>
#include <QTimer>
#include <QProgressBar>

#include <QGraphicsDropShadowEffect>



class WelcomeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomeDialog(QWidget *parent = nullptr);





private:
    QGraphicsDropShadowEffect *shadow;
    QLabel *versionLabel;
    QProgressBar *progressBar;
    QTimer *progressTimer;

private slots:
    void valueProgress();




};



#endif // WELCOMEDIALOG_H
