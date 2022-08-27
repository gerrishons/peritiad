#ifndef PERITIA_H
#define PERITIA_H

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
    void ShowAbout();
    void showHelp();
    void showPreference();
    void showStatusBar();
    void ShowSummary();
    void AboutScalabli();

protected:
   // void paintEvent(QPaintEvent *event) override;
    void timerEvent(QTimerEvent *event);

private:
    Ui::Peritia *ui;
    QString currentFile;
    bool closeWindow();
};

#endif // PERITIA_H
