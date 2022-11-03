#include "settings.h"
#include "version.h"
//#include "QvkSpezialCheckbox.h"

#include <QFileInfo>
#include <QMouseEvent>
#include <QColor>

Settings::Settings()
{
    // Dient nur zum anlegen des Profils damit das log erstellt werden kann
    QSettings settings( QSettings::IniFormat, QSettings::UserScope, global::name, global::name, Q_NULLPTR );
    settings.beginGroup( global::name );
    settings.setValue( "Version", global::version );
    settings.endGroup();
};

Settings::~Settings(){

}

QString Settings::getFileName()
{
    QSettings settings( QSettings::IniFormat, QSettings::UserScope, global::name, global::name, Q_NULLPTR );
    return settings.fileName();
}
