TEMPLATE = app
TARGET = peritia

QT += widgets
QT += multimedia
#QT += webkit
#QT += webkitwidgets

#qtHaveModule(printsupport): QT += printsupport
#requires(qtConfig(fontdialog))

SOURCES += \
    logger.cpp \
    loginwidget.cpp \
    main.cpp\
    peritia.cpp \
    aboutdialog.cpp\
    random-int.cpp\
    welcomedialog.cpp \
    welcomedialog.cpp

HEADERS += peritia.h\
           aboutdialog.h \
           logger.h \
           loginwidget.h \
           welcomedialog.h

FORMS += peritia.ui #\ text2aslinputdialog.ui



RESOURCES += \
    peritia.qrc

# install
target.path = /usr/local/peritia #$$[QT_INSTALL_EXAMPLES]/widgets/tutorials/peritia
target.files = /usr/local/peritia
INSTALLS += target

CONFIG += create_prl

message("hello there")


win32:RC_ICONS += your_icon.ico

