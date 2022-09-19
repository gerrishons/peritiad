#include "aboutdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AboutDialog w;
    w.show();
    return a.exec();
}
