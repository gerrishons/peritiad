TEMPLATE = app
TARGET = peritia


message("Loading Peritia Installer...")

QT += dbus
QT += widgets
QT += multimedia
#QT += webkit
#QT += webkitwidgets

#qtHaveModule(printsupport): QT += printsupport
#requires(qtConfig(fontdialog))

SOURCES +=  src/logger.cpp \
            src/dialogs/licensedialog.cpp \
            src/loginwidget.cpp \
            src/app/main.cpp\
            src/app/peritia.cpp \
            src/dialogs/aboutdialog.cpp\
            src/dialogs/welcomedialog.cpp \
            src/widgets/wigglylabel.cpp
   

HEADERS += src/app/peritia.h\
           src/dialogs/aboutdialog.h \
           src/dialogs/licensedialog.h \
           src/dialogs/welcomedialog.h \
           src/logger.h \
           src/loginwidget.h \
           src/widgets/wigglylabel.h

FORMS += src/app/peritia.ui #\ text2aslinputdialog.ui



RESOURCES += resources/peritia.qrc\



unix {
   isEmpty(PREFIX) {
   PREFIX = /usr/local
   }
   )

   target.path = $$PREFIX/bin
   }
   INSTALLS += target
DISTFILES += \


# install
#target.path = /usr/local/peritia #$$[QT_INSTALL_EXAMPLES]/widgets/tutorials/peritia
#target.files = /usr/local/peritia
#INSTALLS += target

CONFIG += create_prl

message("hello there")


win32:RC_ICONS += your_icon.ico


QMAKE_SPECS = $$[QMAKESPEC]





unix: CONFIG += link_pkgconfig
