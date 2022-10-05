#ifndef LOGGER_H
#define LOGGER_H

#include <QDebug>
#include <QFile>
#include <QHash>

class Logger
{

private:
    static QFile *logFile;

    static bool isInt;

    static QHash<QtMsgType, QString> contextNames;

public:

    static void init();

    static void clean();


    static void messageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg);
   // Logger();
};

#endif // LOGGER_H
