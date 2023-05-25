# Install script for directory: /home/szybet/kdesrc/frameworks/kdbusaddons

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
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/ar/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/az/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/bg/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/bs/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/ca/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/ca@valencia/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/cs/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/da/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/de/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/el/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/en_GB/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/es/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/et/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/eu/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/fi/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/fr/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gd/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/gd/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/gl/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/hi/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/hu/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/ia/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/id/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/is/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/it/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/ja/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/ka/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/ko/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/lt/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/ml/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/nb/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/nds/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/nl/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/nn/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/pa/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/pl/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/pt/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/pt_BR/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/ro/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/ru/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/se/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/sk/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/sl/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/sr/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/sr@ijekavian/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/sr@ijekavianlatin/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/sr@latin/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/sv/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/tg/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/tr/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/uk/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/zh_CN/kdbusaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/zh_TW/kdbusaddons5_qt.qm")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kdbusaddons/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DBusAddons" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kdbusaddons/KF5DBusAddonsConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/kdbusaddons/KF5DBusAddonsConfigVersion.cmake"
    "/home/szybet/kdesrc/frameworks/kdbusaddons/KF5DBusAddonsMacros.cmake"
    "/home/szybet/kdesrc/frameworks/kdbusaddons/KF5dbus.service.in"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDBusAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DBusAddons/KF5DBusAddonsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DBusAddons/KF5DBusAddonsTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kdbusaddons/CMakeFiles/Export/24ec1b8965c3d0c07a6f517c0d58cc04/KF5DBusAddonsTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DBusAddons/KF5DBusAddonsTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DBusAddons/KF5DBusAddonsTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DBusAddons" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/CMakeFiles/Export/24ec1b8965c3d0c07a6f517c0d58cc04/KF5DBusAddonsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DBusAddons" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/CMakeFiles/Export/24ec1b8965c3d0c07a6f517c0d58cc04/KF5DBusAddonsTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KDBusAddons" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdbusaddons/kdbusaddons_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/kdbusaddons/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
