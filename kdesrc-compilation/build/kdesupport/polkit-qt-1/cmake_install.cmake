# Install script for directory: /home/szybet/kdesrc/kdesupport/polkit-qt-1

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/mnt/HDD/Project/Public/okulartry/okular-things")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "ON")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/polkit-qt5-1" TYPE FILE FILES
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/gui/polkitqt1-gui-action.h"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/gui/polkitqt1-gui-actionbutton.h"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/gui/polkitqt1-gui-actionbuttons.h"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/core/polkitqt1-authority.h"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/core/polkitqt1-details.h"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/core/polkitqt1-identity.h"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/core/polkitqt1-subject.h"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/core/polkitqt1-temporaryauthorization.h"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/core/polkitqt1-actiondescription.h"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/agent/polkitqt1-agent-listener.h"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/agent/polkitqt1-agent-session.h"
    "/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/core/polkitqt1-version.h"
    "/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/core/polkitqt1-core-export.h"
    "/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/gui/polkitqt1-gui-export.h"
    "/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/agent/polkitqt1-agent-export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/polkit-qt5-1/PolkitQt1" TYPE FILE FILES
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/includes/PolkitQt1/Authority"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/includes/PolkitQt1/Details"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/includes/PolkitQt1/Identity"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/includes/PolkitQt1/Subject"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/includes/PolkitQt1/TemporaryAuthorization"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/includes/PolkitQt1/ActionDescription"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/polkit-qt5-1/PolkitQt1/Gui" TYPE FILE FILES
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/includes/PolkitQt1/Gui/Action"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/includes/PolkitQt1/Gui/ActionButton"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/includes/PolkitQt1/Gui/ActionButtons"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/polkit-qt5-1/PolkitQt1/Agent" TYPE FILE FILES
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/includes/PolkitQt1/Agent/Listener"
    "/home/szybet/kdesrc/kdesupport/polkit-qt-1/includes/PolkitQt1/Agent/Session"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/polkit-qt5-1.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/polkit-qt5-core-1.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/polkit-qt5-gui-1.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/polkit-qt5-agent-1.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/PolkitQt5-1" TYPE FILE FILES
    "/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/PolkitQt5-1Config.cmake"
    "/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/PolkitQt5-1ConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/PolkitQt5-1/PolkitQt5-1Targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/PolkitQt5-1/PolkitQt5-1Targets.cmake"
         "/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/CMakeFiles/Export/8c783d47b48d5e121457ebd2a3d74286/PolkitQt5-1Targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/PolkitQt5-1/PolkitQt5-1Targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/PolkitQt5-1/PolkitQt5-1Targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/PolkitQt5-1" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/CMakeFiles/Export/8c783d47b48d5e121457ebd2a3d74286/PolkitQt5-1Targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/PolkitQt5-1" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/CMakeFiles/Export/8c783d47b48d5e121457ebd2a3d74286/PolkitQt5-1Targets-noconfig.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/core/cmake_install.cmake")
  include("/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/gui/cmake_install.cmake")
  include("/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/agent/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
