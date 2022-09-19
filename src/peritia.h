#ifndef PERITIA_H
#define PERITIA_H

//#include <QListWidgetItem>
#include "qpushbutton.h"
#include <QMediaPlayer>
#include <QMainWindow>

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

//public slots:
//	void addButtonClicked();
	
private slots:

    void changePhoto();
    void changeText();
    void hideLeftToolBar();
    void hideStatusBar();
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
    void showHelp();
    void showPreference();
    void showStatusBar();
    void ShowSummary();
    void text2ASL();

protected:
   // void text2ASL(QPaintEvent *event);//d paintEvent(QPaintEvent *event) override;
    //void itemsClickedSlot(QListWidgetItem *itemClicked);
    //void playSound(QMediaPlayer::MediaStatus *status);
    void timerEvent(QTimerEvent *event);

private:
    Ui::Peritia *ui;
    QString currentFile;
    bool closeWindow();
    QString bitness;
    QPushButton *leftToolbarButton;
};

#endif // PERITIA_H
