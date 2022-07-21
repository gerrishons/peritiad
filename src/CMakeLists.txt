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
    "data/LICENSE"
    "images/bold.png"
    "images/chevron-right.png"
    "images/daco.png"
    "images/daylight.jpg"
    "images/daylightsungif.gif"
    "images/evening.jpg"
    "images/lumbo-minar.jpeg"
    "images/peritia-logo.png"
    "images/right.png"
    "images/summary-pic.png"
    "images/water.jpg"
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
