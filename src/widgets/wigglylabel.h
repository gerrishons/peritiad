#ifndef WIGGLYLABEL_H
#define WIGGLYLABEL_H

#include <QLabel>
#include <QBasicTimer>

class WigglyLabel : public QLabel
{
    Q_OBJECT

public:
    explicit WigglyLabel(QWidget *parent = nullptr);


public slots:
    void setText(const QString &newText) { text = newText; }

protected:
    void paintEvent(QPaintEvent *event) override;
    void timerEvent(QTimerEvent *event) override;

private:
    QBasicTimer timer;
    QString text;
    int step;


   };


#endif // WIGGLYLABEL_H
