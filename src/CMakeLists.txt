cmake_minimum_required(VERSION 3.16)
project(peritia LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

if(NOT DEFINED INSTALL_EXAMPLESDIR)
    set(INSTALL_EXAMPLESDIR "examples")
endif()

set(INSTALL_EXAMPLEDIR "${INSTALL_EXAMPLESDIR}/widgets/tutorials/peritia")
set(CMAKE_PREFIX_PATH "/opt/Qt/6.3.2/gcc_64")
find_package(Qt6
    REQUIRED COMPONENTS Core Gui Widgets Multimedia
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

# Set sources for ${TARGET_LIB} 
target_sources(
    peritia
    PUBLIC
        ${PROJECT_SOURCE_DIR}
)
#link_directories()
#add_library( ${TARGET_LIB} STATIC 
                      
                 
        #               "${PROJECT_SOURCE_DIR}/licensedialog.cpp"
                       




add_library(peritia-lib STATIC EXCLUDE_FROM_ALL
  "${PROJECT_SOURCE_DIR}"welcomedialog.cpp
  "${PROJECT_SOURCE_DIR}"logger.cpp
  "${PROJECT_SOURCE_DIR}"aboutdialog.cpp
  
  )
target_link_libraries(peritia PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
    PRIVATE Qt::Multimedia
    "${PROJECT_SOURCE_DIR}"
    
)

# Resources:
set(peritia_resource_files
    "icons/buttons/accessibility.png"
    "icons/buttons/sign-language.png"
        
        
        "icons/date/date-01.png"
        "icons/date/date-02.png"
        "icons/date/date-03.png"
        "icons/date/date-04.png"
        "icons/date/date-05.png"
        "icons/date/date-06.png"
        "icons/date/date-07.png"
        "icons/date/date-08.png"
        "icons/date/date-09.png"
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

        "icons/illustrations/3-people.png"
        "icons/illustrations/boy-girl-sitting-in-chairs.png"
        "icons/illustrations/boy-and-girl-standing-and-laughing.png"
        "icons/illustrations/girl-and-boy-with-laptop.png"
        "icons/illustrations/man-playing-with-dog-on-the-couch.png"
        "icons/illustrations/man-search-music-with-phone.png"
        "icons/illustrations/people-standing-talking.png"
        "icons/illustrations/woman-in-glasses-sitting-and-reading-book.png"

        "icons/statusbar/status-bar.png"

        "media/logos/peritia-logo.png"

        "images/chevron-right.png"
        "images/daco.png"
        "images/daylight.jpg"
        "images/daylightsungif.gif"
        "images/evening.jpg"
        "images/fullscreen.png"
        "images/help.png"
        "images/info.png"
        "images/lumbo-minar.jpeg"
        "images/minimize.png"
        "images/right.png"
        "images/settings.png"
        "images/summary-pic.png"
        "images/water.jpg"
        "images/zoom-in.png"
        "images/zoom-out.png"
        "images/celebratory.png"
        "images/blake.png"
        "images/scalabli-logo.png"
        "images/new.png"
        "images/open.png"
        "images/paste.png"
        "images/print.png"
        "images/save.png"
        "images/save_as.png"
        "images/exit.png"
        "images/font.png"
        "images/copy.png"
        "images/create.png"
        "images/cut.png"
        "images/edit_redo.png"
        "images/edit_undo.png"
        "images/bold.png"
        "images/italic.png"
        "images/underline.png"
        "images/vine.png"
        
        
        "media/backgrounds/osman-rana.jpg"
        "media/backgrounds/pexels-dids.jpg"  
        "media/backgrounds/pexels-sergej-eckhardt.jpg"
        
        "media/docs/LICENSE.md"
              
        "media/gifs/girl-working-at-home.gif"

        "media/icons/buttons/account.png" 
        "media/icons/buttons/back-arrow.png"  
        "media/icons/buttons/right-arrow.png"  
                 
        "media/sounds/beep.mp3"
        "media/sounds/fullscreenmode.mp3"
        "media/sounds/fullscreen-mode-is-active.mp3"
        "media/sounds/statusbarhidden.mp3"
        "media/sounds/statusbarshown.mp3"
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
