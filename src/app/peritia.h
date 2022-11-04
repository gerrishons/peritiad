#ifndef PERITIA_H
#define PERITIA_H

//#include <QCheckBox>
#include <QDialog>
#include <QFont>
#include <QMovie>
#include <QMessageBox>
#include <QVBoxLayout>
#include "qlabel.h"
#include <QFile>
#include <QListWidgetItem>
#include <QPushButton>
#include <QMediaPlayer>
#include <QSettings>
#include <QMainWindow>





//#include "src/dialogs/aboutdialog.h"
#include "src/widgets/loginwidget.h"
//#include "src/dialogs/settingsdialog.h"
//#include "src/dialogs/shortcutsdialog.h"

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

    QFont defaultFont();



public slots:
    void getText(QString text);
//	void addButtonClicked();
	
private slots:

    void changePhoto();
    void changeText();
    void closeDockWidget();
   // void checkInternetStatus();
    void dockWidgetExpand();
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
    void showAccount();
    void showCurrentDateTime();
    void showFullScreen();
    void showInternetConnection();
    void showInternetConnectionError();
    void showKeyBoardShortcuts();
    void showLeftToolBar();
    void showHelp();
    void showSettings();
//void showPreference();
    void showStatusBar();
 //   void showSummary();
    void text2ASL();
    void timer();
    void ss();

    void zoomIn(const int increment);
    void zoomOut(const int decrement);





protected:
    void closeEvent(QCloseEvent *event);
    void connectionEvent(QTimerEvent *event);
    void timerEvent(QTimerEvent *event);


private:
    Ui::Peritia *ui;
    QCheckBox *checkBox;
    QDialog *settingsDialog;
    QFile *settingsFile;
  //  QFont *defaultFont;
    QMovie *gif1,
           *gif2;

    QPushButton *clockPushButton,
                *internetConnectionStatusButton,
                *leftToolbarButton;

    QSettings settings;

    void writeSettings();
    void readSettings();

  //  AboutDialog *aboutDialog;
   // SettingsDialog *settingsDialog;
  //  QLabel *statusBarClockLabel;
    QFile *myInfo;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
     QLabel *label_3;
     QLineEdit *lineEdit_3;

    QString currentFile;
    QTimer *expansionTimer;
    bool closeWindow();




    QVBoxLayout *verticalLayout;

};

#endif // PERITIA_H
