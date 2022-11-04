#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include "qcheckbox.h"
#include "qfontdialog.h"
#include <QDialog>
#include <QFile>
#include <QSettings>

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

    void changeFont();
    void changeBackground();
    void writeSettings();

private:
    Ui::SettingsDialog *ui;
    QFile *colorFile,
         *fontFile;
    QFile *settingsFile;
    QFont *font;
    //QFontDialog *fontDialog;
    QSettings settings;

};
#endif // SETTINGSDIALOG_H
