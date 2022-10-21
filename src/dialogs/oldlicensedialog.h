#ifndef LICENSEDIALOG_H
#define LICENSEDIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QTextBrowser>

class LicenseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LicenseDialog(QWidget *parent = nullptr);



private slots:
    void onLaunchAbout();



private:
    QPushButton *okButton;
    QPushButton *cancelButton;
    QTextBrowser *licenseBrowser;
};



#endif // LICENSEDIALOG_H
