function(add_share_plugin name)
    kcoreaddons_add_plugin(${name} SOURCES ${ARGN} INSTALL_NAMESPACE "kf${QT_MAJOR_VERSION}/purpose")
    target_link_libraries(${name} Qt${QT_MAJOR_VERSION}::Core KF5::Purpose)
    set_target_properties(${name} PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/kf${QT_MAJOR_VERSION}/purpose")

    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${name}_config.qml")
        install(FILES "${name}_config.qml" DESTINATION ${KDE_INSTALL_DATADIR}/purpose)
    endif()
endfunction()

set(KPACKAGE_RELATIVE_DATA_INSTALL_DIR "kpackage")
function(kpackage_install_package dir component root)
   set(install_dir ${ARGV3})
   if(NOT install_dir)
      set(install_dir ${KPACKAGE_RELATIVE_DATA_INSTALL_DIR})
   endif()
   install(DIRECTORY ${dir}/ USE_SOURCE_PERMISSIONS
           DESTINATION ${KDE_INSTALL_DATADIR}/${install_dir}/${root}/${component}
           PATTERN Messages.sh EXCLUDE)
endfunction()

add_subdirectory(saveas)
add_subdirectory(imgur)
add_subdirectory(pastebin)
add_subdirectory(ktp-sendfile)
if (KAccounts_FOUND)
    add_subdirectory(youtube)
    add_subdirectory(nextcloud)
endif()
add_subdirectory(kdeconnect)
add_subdirectory(reviewboard)
add_subdirectory(phabricator)
add_subdirectory(email)
add_subdirectory(telegram)
add_subdirectory(kdeconnect_sms)
add_subdirectory(barcode)
add_subdirectory(twitter)

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    add_subdirectory(bluetooth)
endif()
