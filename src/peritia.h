#ifndef PERITIA_H
#define PERITIA_H

#include "qboxlayout.h"
#include "qlabel.h"
#include <QFile>
#include <QListWidgetItem>
#include <QPushButton>
#include <QMediaPlayer>
#include <QMainWindow>



//#include "aboutdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Peritia;
}
QT_END_NAMESPACE


class Peritia : public QMainWindow
{
    Q_OBJECT

public:
    explicit Peritia (QWidget *parent = nullptr);
    ~Peritia();



public slots:
    void getText(QString text);
//	void addButtonClicked();
	
private slots:

    void changePhoto();
    void changeText();
    void hideLeftToolBar();
    void hideStatusBar();
    void listWidgetItemClicked(QListWidget *itemClicked);
    void makeADonationStatus();
    void open();
    void playSound();//QMediaPlayer::MediaStatus status);
    void save();
    void saveAs();
    void print();
    void removeWidgetOnStatusBar();
    void selectFont();
    void setFontBold(bool bold);
    void setFontUnderline(bool underline);
    void setFontItalic(bool italic);
    void showAbout();
    void showFullScreen();
    void showLeftToolBar();
    void showLogin();
    void showHelp();
    void showPreference();
    void showStatusBar();
    void ShowSummary();
    void text2ASL();
    void timer();
    void ss();



protected:
   // void text2ASL(QPaintEvent *event);//d paintEvent(QPaintEvent *event) override;
    //void itemsClickedSlot(QListWidgetItem *itemClicked);
    //void playSound(QMediaPlayer::MediaStatus *status);
    void timerEvent(QTimerEvent *event);

private:
    Ui::Peritia *ui;
    QDialog *aboutDialog;
  //  QLabel *statusBarClockLabel;
    QFile *myInfo;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
     QLabel *label_3;
     QLineEdit *lineEdit_3;

    QString currentFile;
    bool closeWindow();

    QPushButton *leftToolbarButton;
    QVBoxLayout *verticalLayout;
};

#endif // PERITIA_H
