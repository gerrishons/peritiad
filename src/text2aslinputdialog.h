#ifndef TEXT2ASLINPUTDIALOG_H
#define TEXT2ASLINPUTDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class text2ASLInputDialog; }
QT_END_NAMESPACE

class text2ASLInputDialog : public QDialog
{
    Q_OBJECT

public:
    text2ASLInputDialog(QWidget *parent = nullptr);
    ~text2ASLInputDialog();

private:
    Ui::text2ASLInputDialog *ui;
};
#endif // TEXT2ASLINPUTDIALOG_H
