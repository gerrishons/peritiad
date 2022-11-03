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
#ifdef Q_OS_LINUX
    QDir linuxDir;
    QString defaultPath = linuxDir.home().filePath(".config/Peritia/logs/peritia.log");
    logFile->setFileName(defaultPath);
    if (!logFile->exists()) {
        /*defaultPath does not exist! ..making a new path...*/
        linuxDir.home().mkpath(".config/Peritia/logs");

    }

#endif

#ifdef Q_OS_WIN
    QDir windowsDir;
    QString defaultPath = windowsDir.home().filePath("peritia/logs/peritia.log");
    logFile->setFileName(defaultPath);
    if (!logFile->exists()) {
        /*defaultPath does not exist! ..making a new path...*/
        windowsDir.home().mkpath("peritia/logs");

    }

#endif


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

    QString log = QObject::tr("Date: %1     |%2     |%3     \n").// %4 | %5 | %6\n").
         arg(QDateTime::currentDateTime().toString("dd-MM-yyyy | hh:mm:ss")).
         arg(Logger::contextNames.value(type)).
         //arg(context.line).
         //arg(QString(context.file)).
         arg(msg);

       //  section('//', -1)).


    logFile->write(log.toLocal8Bit());
    logFile->flush();


}
