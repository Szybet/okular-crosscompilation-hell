# Install script for directory: /home/szybet/kdesrc/frameworks/solid

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/ar/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/az/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/bg/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/bs/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/ca/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/ca@valencia/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/cs/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/da/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/de/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/el/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/en_GB/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/eo/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/es/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/et/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/eu/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/fi/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/fr/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/ga/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gd/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/gd/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/gl/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/he/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/hr/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/hu/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/ia/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/id/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/is/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/it/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/ja/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/ka/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/kk/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/km/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/ko/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/lt/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/lv/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/ml/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/mr/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ms/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/ms/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/nb/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/nds/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/nl/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/nn/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/pa/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/pl/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/pt/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/pt_BR/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/ro/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/ru/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/se/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/sk/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/sl/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/sr/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/sr@ijekavian/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/sr@ijekavianlatin/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/sr@latin/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/sv/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/ta/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/tg/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/th/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/tr/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/ug/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/uk/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/zh_CN/solid5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/ECMPoQm/zh_TW/solid5_qt.qm")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/solid/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Solid" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/solid/KF5SolidConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/solid/KF5SolidConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Solid" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Solid/KF5SolidTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Solid/KF5SolidTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/solid/CMakeFiles/Export/604a90b8155a591771e6d5758b6b3163/KF5SolidTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Solid/KF5SolidTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Solid/KF5SolidTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Solid" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/CMakeFiles/Export/604a90b8155a591771e6d5758b6b3163/KF5SolidTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Solid" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/CMakeFiles/Export/604a90b8155a591771e6d5758b6b3163/KF5SolidTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/Solid" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/solid/solid_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/solid/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
