#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include "qcheckbox.h"
#include <QDialog>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { class SettingsDialog; }
QT_END_NAMESPACE

class SettingsDialog : public QDialog
{
    Q_OBJECT

public:
    SettingsDialog(QWidget *parent = nullptr);
    ~SettingsDialog();


public slots:

    void changeBackground();
    void changeState();

private:
    Ui::SettingsDialog *ui;
    QFile *colorFile;
};
#endif // SETTINGSDIALOG_H
