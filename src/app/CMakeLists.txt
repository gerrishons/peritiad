add_executable(peritia
    peritia.ui
    peritia.cpp
    main.cpp
    )


# ${PROJECT_SOURCE_DIR}/src/)
#add_executable(main ${PROJECT_SOURCE_DIR}/src/main.cpp
 #       peritia ${PROJECT_SOURCE_DIR}/src/peritia.cpp
  #      ${PROJECT_SOURCE_DIR}/src/peritia.h
   #     ${PROJECT_SOURCE_DIR}/src/peritia.ui
    #    )


set_target_properties(peritia PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)

target_link_libraries(peritia PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)
