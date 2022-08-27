#include <iostream>
#include <filesystem>
#include <fstream>
#include <stdio.h>
#include <QApplication>
#include <QCheckBox>
#include <QMessageBox>

#include "peritia.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Peritia w;


#if __linux__
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

#endif

    w.show();
    return a.exec();
}
