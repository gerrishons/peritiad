/****************************************************************************
**
** Copyright (C) 2022 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the documentation of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "peritia.h"
#include <iostream>
#include <filesystem>
#include <fstream>
#include <stdio.h>
#include <QApplication>
#include <QCheckBox>
#include <QMessageBox>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Peritia w;
    //w.showMaximized();

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
