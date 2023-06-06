
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was KF5AuthConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

set(KAUTH_STUB_FILES_DIR "${PACKAGE_PREFIX_DIR}/share/kf5/kauth/")

set(KAUTH_BACKEND_NAME "POLKITQT5-1")
set(KAUTH_HELPER_BACKEND_NAME "DBUS")
set(KAUTH_POLICY_FILES_INSTALL_DIR "/mnt/HDD/Project/Public/okulartry/okular-things/share/polkit-1/actions")
set(KAUTH_HELPER_INSTALL_DIR "lib/libexec/kauth")
set(KAUTH_HELPER_INSTALL_ABSOLUTE_DIR "/mnt/HDD/Project/Public/okulartry/okular-things/lib/libexec/kauth")

include(CMakeFindDependencyMacro)

find_dependency(KF5CoreAddons "5.106.0")

if(NOT TRUE)
    find_dependency(Qt5DBus "5.15.2")

    if(NOT OFF)
        find_dependency(Qt5Widgets "5.15.2")
    endif()

    if(NOT KAUTH_BACKEND_NAME AND 1 AND NOT )
        find_dependency(PolkitQt5-1 "0.112.0")
    endif()

    if(KAUTH_BACKEND_NAME AND NOT OFF AND "${KAUTH_BACKEND_NAME}" STREQUAL "POLKITQT5-1")
        find_dependency(PolkitQt5-1 "0.112.0")
    endif()
endif()

include("${CMAKE_CURRENT_LIST_DIR}/KF5AuthTargets.cmake")

include("${CMAKE_CURRENT_LIST_DIR}/KF5AuthMacros.cmake")

if(NOT "${KAUTH_BACKEND_NAME}" STREQUAL "FAKE")
    if(CMAKE_CROSSCOMPILING AND KF5_HOST_TOOLING)
        find_file(KAUTH_TARGETSFILE KF5Auth/KF5AuthToolsTargets.cmake PATHS ${KF5_HOST_TOOLING} ${CMAKE_CURRENT_LIST_DIR} NO_DEFAULT_PATH)
        include("${KAUTH_TARGETSFILE}")
    else()
        include("${CMAKE_CURRENT_LIST_DIR}/KF5AuthToolsTargets.cmake")
    endif()
endif()
