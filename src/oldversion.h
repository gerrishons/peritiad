#ifndef VERSION_H 
#define VERSION_H

#include <QCoreApplication>
#include <QNetworkReply>
#include <QTimer>
#include <QDebug>
#include <QDesktopServices>
#include <QDir>
#include <QSettings>

class PeritiaVersion: public QObject
{
    Q_OBJECT
public:
    PeritiaVersion();

public slots:


private:
    QNetworkAccessManager manager;
    QList<QNetworkReply *> currentDownloadsQList;
    QString remoteVersion;


private slots:
    void startToDownload( bool checked );
    void downloadFinished( QNetworkReply *reply );

    
signals:
    //void newVersionAvailable( QString update );

};

#endif // VERSION_H
//QString peritiaVersion_ = "2022.1";
