#include "version.h"
PeritiaVersion::PeritiaVersion()
{
    connect(&manager, SIGNAL(finished(QNetworkReply* ) ), SLOT(downloadFinished(QNetworkReply* ) ) );
}


void PeritiaVersion::startToDownload( bool checked )
{
    if ( checked == false )
    {
       // emit newVersionAvailable( "" );
        return;
    }

//#ifdef Q_OS_LINUX
    QNetworkRequest request( QUrl( "https://github.com/scalabli/peritia/main/version/VERSION" ) );
//#endif
//#ifdef Q_OS_WIN
 //   QNetworkRequest request( QUrl( "https://vokoscreen.volkoh.de/3.0/version/windows/VERSION" ) );
//#endif
    manager.get( request );
}



//class PeritiaVersion {
//public:
 //   QString peritiaVersion = "2022.1";
 //   QString premier() {
    
  //  return peritiaVersion;
    
  //  }
    
   // };
