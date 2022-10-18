#include <QFile>


QFile TemperatureFile("text.txt");
TemperatureFile.open(QIODevice::ReadWrite);


QString searchString("the string I am looking for");

QTextStream in (&TemparatureFile);


const QString currentTemp = in.readLine;

do {
	if (!currentTemp.contains(searchString, Qt::CaseSensitive)) {
        // do something
    }
}

TemperatureFile.close()

//while (!line.isNull());

//while(!TemperatureFile.atEnd())
 // { //do something to search string inside
    //}

