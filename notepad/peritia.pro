TEMPLATE = app
TARGET = notepad

QT += widgets

qtHaveModule(printsupport): QT += printsupport
requires(qtConfig(fontdialog))

SOURCES += \
    main.cpp\
    peritia.cpp

HEADERS += peritia.h

FORMS += peritia.ui

RESOURCES += \
    peritia.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/tutorials/peritia
INSTALLS += target

