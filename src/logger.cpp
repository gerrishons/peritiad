#include "logger.h"


#include <QDateTime>
#include <QDir>
#include <QFile>
#include <QHash>
#include <QObject>


QFile *Logger::logFile = Q_NULLPTR;
bool Logger::isInt = false;

QHash<QtMsgType, QString> Logger::contextNames = {

    {QtMsgType::QtDebugMsg,  "Debug"},
    {QtMsgType::QtInfoMsg, "Informational"},
    {QtMsgType::QtSystemMsg, "System message"}

};

void Logger::init()  {


    if(isInt)    {
        return;
    }


    logFile = new QFile;
    logFile->setFileName("/home/gerry/peritia.log");
    logFile->open(QIODevice::Append | QIODevice::Text);

    qInstallMessageHandler(Logger::messageOutput);

    logFile->resize(0);

    Logger::isInt = true;

}


void Logger::clean()   {

    if(logFile != Q_NULLPTR) {
        logFile->close();
      //  delete logFile;
    }
}


void Logger::messageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)  {

    QString log = QObject::tr("%1 | %2 | %3 | %4 | %5 | %6\n").
         arg(QDateTime::currentDateTime().toString("dd-MM-yyyy | hh:mm:ss")).
         arg(Logger::contextNames.value(type)).
         arg(context.line).
         arg(QString(context.file)).
         arg(msg);

       //  section('//', -1)).


    logFile->write(log.toLocal8Bit());
    logFile->flush();


}
