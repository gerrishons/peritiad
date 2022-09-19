TEMPLATE = app
TARGET = peritia

QT += widgets
QT += multimedia
#QT += webkit
#QT += webkitwidgets

#qtHaveModule(printsupport): QT += printsupport
#requires(qtConfig(fontdialog))

SOURCES += \
    aboutdialog.cpp \
    main.cpp\
    peritia.cpp \
    peritia-about.cpp

HEADERS += peritia.h \
    aboutdialog.h

FORMS += peritia.ui


RESOURCES += \
    peritia.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/tutorials/peritia
INSTALLS += target

win32:RC_ICONS += your_icon.ico

