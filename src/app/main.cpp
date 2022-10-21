
#include <iostream>
#include <filesystem>
#include <fstream>
#include <stdio.h>

//#ifdef WIN32
//#include <Windows.h>
//#else
//#include <unistd.h>  /*used to implement the sleep functionality*/
//#endif

#include <QApplication>
#include <QDialog>

#include <QTimer>



#include "peritia.h"


#include "src/logger.h"
#include "src/dialogs/welcomedialog.cpp"


int main(int argc, char *argv[])
{
    Logger::init();
    qInfo()<<"Starting Peritia...";


    QApplication a(argc, argv);

    QApplication::setApplicationName(QLatin1String("Peritia"));
    QApplication::setDesktopFileName("peritia.desktop");
    QApplication::setOrganizationName(QLatin1String("Scalabli"));

    Peritia w;


    WelcomeDialog *welcomeDialog = new WelcomeDialog;

    QTimer::singleShot(4000, welcomeDialog, SLOT(hide()));

    switch(welcomeDialog->exec()) {

    case QDialog::Rejected: {
        w.show();
        break;
    }
    }


    //QDBusInterface *interface = new QDBusInterface("org.freedesktop.UPower", "/org/freedesktop/UPower", "org.freedesktop.DBus.Properties", QDBusConnection::systemBus());
    //QDBusReply<qulonglong> reply = interface->call("GetAll"  "org.freedesktop.UPower");//, "OnBattery");
    //QDBusInterface remote("org.freedesktop.UPower", "/org/freedesktop/UPower", "org.freedesktop.UPOwer", QDBusConnection::systemBus());
   // QDBusReply<qint64> reply = remote.call("GetAll", "org.freedesktop.UPower", "timeToEmpty");

    //if (reply.isValid())  {
    //qInfo()<<"This is it"<<reply;

  //  }







    // Logger::clean();
     return a.exec();

}

   // sleep(9);
    //if(welcomeDialog->isisHidden()) {
     //  qDebug()<<"it is hidden";
      //  w.show();
   // }

   // w.show();




   // }

    //);

   // w.show();

  //




   // if(progressBar->value() == 100) {

        //qDebug()<<progressBar->value();
       // Q
       // sleep(4);
       // welcomeDialog->close();


        //welcomeDialog->close();


    //}





   //

   // w.setWindowFlags(Qt::FramelessWindowHint);
    //w.setAttribute(Qt::WA_Transl        if(progressBar->value() == 100) {
  //  Peritia w;
   // w.show();ucentBackground);
    /*sleep for 4 seconds*/

//
   // sleep(12);
   // w.show();






/*#if __linux__
    std::string file_name = "/root/.peritia/autotheme.yml";
    std::ifstream my_file(file_name);
    
    if (my_file) {
    }
	   
    else

    {
	    QCheckBox *cb = new QCheckBox("Don't show this again");
	    QMessageBox msgBox;
	    msgBox.setIcon(QMessageBox::Information);
	    msgBox.setWindowTitle("Default settings");
	    msgBox.setText("The document has been modified.");
	    msgBox.setInformativeText("<b>Do you want to save your changes?</b>");
	    msgBox.setCheckBox(cb);
	    msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Cancel);
	    msgBox.setDefaultButton(QMessageBox::Save);

	    int ret = msgBox.exec();

	    switch (ret) {
		    case QMessageBox::Save:
			    if (my_file) {
				    break;
			    }
			    else {
				    std::string file_dir = "/root/.peritia";

				    //Create directory
				    std::filesystem::create_directory(file_dir);
				    //create a config file in the directory you created above
				    std::ofstream configFile("/root/.peritia/autotheme.yml");
				    //write to the file you created above
				    configFile << "Forever Scalable\n©Gerrishon Sirere";
				    //close the file
				    configFile.close();
				    break;
			    }

			    

		    case QMessageBox::Cancel:
			    break;
	    }
    }

#endif*/

   //
