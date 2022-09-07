#ifndef PERITIA_H
#define PERITIA_H

//#include <QListWidgetItem>
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
    void open();
    void save();
    void saveAs();
    void print();
    void selectFont();
    void setFontBold(bool bold);
    void setFontUnderline(bool underline);
    void setFontItalic(bool italic);
    void showAbout();
    void showHelp();
    void showPreference();
    void showStatusBar();
    void ShowSummary();
    void text2ASL();

protected:
   // void text2ASL(QPaintEvent *event);//d paintEvent(QPaintEvent *event) override;
    //void itemsClickedSlot(QListWidgetItem *itemClicked);
    void timerEvent(QTimerEvent *event);

private:
    Ui::Peritia *ui;
    QString currentFile;
    bool closeWindow();
};

#endif // PERITIA_H
