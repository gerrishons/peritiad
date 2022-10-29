#ifndef WELCOMEDIALOG_H
#define WELCOMEDIALOG_H

#include <QDialog>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class WelcomeDialog; }
QT_END_NAMESPACE

class WelcomeDialog : public QDialog
{
    Q_OBJECT

public:
    WelcomeDialog(QWidget *parent = nullptr);
    ~WelcomeDialog();

private:
    Ui::WelcomeDialog *ui;
    QTimer *progressTimer;



private slots:
    void valueProgress();

};
#endif // WELCOMEDIALOG_H
