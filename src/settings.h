#ifndef SETTINGS_H 
#define SETTINGS_H

//#include "QvkRegionChoise.h"
//#include "QvkCameraController.h"
//#include "QvkSystrayAlternative.h"
//#include "QvkPlayer.h"
//#include "QvkHalo.h"
//#include "QvkShowClick.h"

#include <QObject>
#include <QSettings>
#include <QDebug>
#include <QMainWindow>

class Settings: public QObject
{ 
    Q_OBJECT
public:
    Settings();
    virtual ~Settings();

   // void saveAll( Ui_formMainWindow *ui_mainwindow, QMainWindow *parent, bool log );
   // void readAll( Ui_formMainWindow *ui_mainwindow, QMainWindow *parent );

   // void saveAreaScreencast( qreal x, qreal y, qreal width, qreal height );
   // void readAreaScreencast( QvkRegionChoise *vkRegionChoise );

   // void saveCamera( int x, int y );
   // void readCamera( QvkCameraController *vkCameraController );

   // void saveSystrayAlternative( int x, int y );
   // void readSystrayAlternative( QvkSystrayAlternative *vkSystrayAlternative );

   // void savePlayerPathOpenFile( QString pathFile );
   // void readPlayerPathOpenFile( QvkPlayer *vkplayer );

   // void saveHaloColor( QColor color );
   // void readHaloColor( QvkHalo *vkHalo );

   // void saveShowclickColor( QColor color );
    //void readShowclickColor( QvkShowClick *vkShowClick );

    QString getFileName();
  //  QString getVideoPath();


public slots:


private slots:


signals:


protected:  


private:

};

#endif
