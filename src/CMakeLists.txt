cmake_minimum_required(VERSION 3.16)
project(peritia LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

if(NOT DEFINED INSTALL_EXAMPLESDIR)
    set(INSTALL_EXAMPLESDIR "examples")
endif()

set(INSTALL_EXAMPLEDIR "${INSTALL_EXAMPLESDIR}/widgets/tutorials/peritia")

find_package(Qt6
    REQUIRED COMPONENTS Core Gui Widgets
    OPTIONAL_COMPONENTS PrintSupport
)

qt_add_executable(peritia
    main.cpp
    peritia.cpp peritia.h peritia.ui
)

set_target_properties(peritia PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)

target_link_libraries(peritia PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)

# Resources:
set(peritia_resource_files
    "icons/date/date-1.png"
    "icons/date/date-2.png"
    "icons/date/date-3.png"
    "icons/date/date-4.png"
    "icons/date/date-5.png"
    "icons/date/date-6.png"
    "icons/date/date-7.png"
    "icons/date/date-8.png"
    "icons/date/date-9.png"
    "icons/date/date-10.png"
    "icons/date/date-11.png"
    "icons/date/date-12.png"
    "icons/date/date-13.png"
    "icons/date/date-14.png"
    "icons/date/date-15.png"
    "icons/date/date-16.png"
    "icons/date/date-17.png"
    "icons/date/date-18.png"
    "icons/date/date-19.png"
    "icons/date/date-20.png"
    "icons/date/date-21.png"
    "icons/date/date-22.png"
    "icons/date/date-23.png"
    "icons/date/date-24.png"
    "icons/date/date-25.png"
    "icons/date/date-26.png"
    "icons/date/date-27.png"
    "icons/date/date-28.png"
    "icons/date/date-29.png"
    "icons/date/date-30.png"
    "icons/date/date-31.png"
    "icons/date/day-Mon.png"
    "icons/date/day-Tue.png"
    "icons/date/day-Wed.png"
    "icons/date/day-Thu.png"
    "icons/date/day-Fri.png"
    "icons/date/day-Sat.png"
    "icons/date/day-Sun.png"

    "icons/statusbar/status-bar.png"

    "logos/peritia-logo.png"
    "images/bold.png"
    "images/chevron-right.png"
    "images/daco.png"
    "images/daylight.jpg"
    "images/daylightsungif.gif"
    "images/evening.jpg"
    "images/fullscreen.png"
    "images/lumbo-minar.jpeg"
    "images/minimize.png"
    "images/peritia-logo.png"
    "images/right.png"
    "images/settings.png"
    "images/summary-pic.png"
    "images/water.jpg"
    "images/zoom-in.png"
    "images/zoom-out.png"
    "images/celebratory.png"
    "images/scalabli-logo.png"
    "images/copy.png"
    "images/create.png"
    "images/cut.png"
    "images/blake.png"
    "images/edit_redo.png"
    "images/edit_undo.png"
    "images/exit.png"
    "images/font.png"
    "images/help.png"
    "images/info.png"
    "images/italic.png"
    "images/new.png"
    "images/open.png"
    "images/paste.png"
    "images/pencil.png"
    "images/print.png"
    "images/save.png"
    "images/save_as.png"
    "images/underline.png"
    "images/vine.png"
)

qt_add_resources(peritia "peritia"
    PREFIX
        "/"
    FILES
        ${peritia_resource_files}
)

if(TARGET Qt::PrintSupport)
    target_link_libraries(peritia PUBLIC
        Qt::PrintSupport
    )
endif()

install(TARGETS peritia
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
