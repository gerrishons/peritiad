#ifndef SHORTCUTDIALOG_H
#define SHORTCUTDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class ShortcutDialog; }
QT_END_NAMESPACE

class ShortcutDialog : public QDialog
{
    Q_OBJECT

public:
    ShortcutDialog(QWidget *parent = nullptr);
    ~ShortcutDialog();

private:
    Ui::ShortcutDialog *ui;
};
#endif // SHORTCUTDIALOG_H
