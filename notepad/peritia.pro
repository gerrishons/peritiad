TEMPLATE = app
TARGET = peritia

QT += widgets
QT += webkit
QT += webkitwidgets
QT += widgets uiplugin

qtHaveModule(printsupport): QT += printsupport
requires(qtConfig(fontdialog))

SOURCES += \
    main.cpp\
    peritia.cpp
    analogclock.cpp\
    customwidgetplugin.cpp

OTHER_FILES += analogclock.json
HEADERS += peritia.h

FORMS += peritia.ui

RESOURCES += \
    peritia.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/tutorials/peritia
INSTALLS += target

