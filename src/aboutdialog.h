#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include "qdialog.h"
#include <QObject>
#include <QWidget>

class AboutDialog : public QDialog
{
    Q_OBJECT
public:
    explicit AboutDialog(QDialog *parent = nullptr);

signals:

};

#endif // ABOUTDIALOG_H
