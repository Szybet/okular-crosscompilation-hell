
install(FILES org.qt.policykit.examples.policy DESTINATION ${CMAKE_INSTALL_FULL_DATAROOTDIR}/polkit-1/actions/)

add_executable(${POLKITQT-1_EXAMPLE})

target_sources(${POLKITQT-1_EXAMPLE} PRIVATE
    main.cpp
    PkExample.cpp

    icons/icons.qrc
)

target_link_libraries(${POLKITQT-1_EXAMPLE}
    Qt${QT_MAJOR_VERSION}::Core
    Qt${QT_MAJOR_VERSION}::DBus
    Qt${QT_MAJOR_VERSION}::Widgets
    ${POLKITQT-1_GUI_PCNAME}
    ${POLKITQT-1_CORE_PCNAME}
)

#--------Helper Application

# This macro is defined in FindPolkitQt.cmake
macro(dbus_add_activation_system_service _sources)
    foreach (_i ${_sources})
        get_filename_component(_service_file ${_i} ABSOLUTE)
        string(REGEX REPLACE "\\.service.*$" ".service" _output_file ${_i})
        set(_target ${CMAKE_CURRENT_BINARY_DIR}/${_output_file})
        configure_file(${_service_file} ${_target})
        install(FILES ${_target} DESTINATION ${CMAKE_INSTALL_FULL_DATAROOTDIR}/dbus-1/system-services )
        #install(FILES ${_target} DESTINATION ${_install_dir})
    endforeach (_i ${ARGN})
endmacro(dbus_add_activation_system_service _sources)

add_executable(${POLKITQT-1_EXAMPLE_HELPER})

qt_add_dbus_adaptor(polkit_example_helper_dbus_SRCS
    org.qt.policykit.examples.xml
    PkExampleHelper.h
    PkExampleHelper
)

target_sources(${POLKITQT-1_EXAMPLE_HELPER} PRIVATE
    PkExampleHelper.cpp
    mainHelper.cpp
    ${polkit_example_helper_dbus_SRCS}
)

# see our helper is pretty small :D
target_link_libraries(${POLKITQT-1_EXAMPLE_HELPER}
    Qt${QT_MAJOR_VERSION}::Core
    Qt${QT_MAJOR_VERSION}::Xml
    Qt${QT_MAJOR_VERSION}::DBus
    ${POLKITQT-1_GUI_PCNAME}
)

install(TARGETS ${POLKITQT-1_EXAMPLE_HELPER} RUNTIME DESTINATION ${CMAKE_INSTALL_FULL_BINDIR})

dbus_add_activation_system_service(org.qt.policykit.examples.service.in)

install(FILES org.qt.policykit.examples.conf DESTINATION ${SYSCONF_INSTALL_DIR}/dbus-1/system.d)

add_subdirectory(agent)
