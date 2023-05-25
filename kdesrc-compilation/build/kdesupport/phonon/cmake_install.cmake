# Install script for directory: /home/szybet/kdesrc/kdesupport/phonon

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/phonon4qt5" TYPE FILE FILES
    "/home/szybet/kdesrc/build/kdesupport/phonon/Phonon4Qt5Config.cmake"
    "/home/szybet/kdesrc/build/kdesupport/phonon/Phonon4Qt5ConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/phonon4qt5/PhononTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/phonon4qt5/PhononTargets.cmake"
         "/home/szybet/kdesrc/build/kdesupport/phonon/CMakeFiles/Export/60cdde972564c5856fbd1277609815b3/PhononTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/phonon4qt5/PhononTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/phonon4qt5/PhononTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/phonon4qt5" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/CMakeFiles/Export/60cdde972564c5856fbd1277609815b3/PhononTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/phonon4qt5" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/CMakeFiles/Export/60cdde972564c5856fbd1277609815b3/PhononTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/phonon4qt5" TYPE FILE FILES
    "/home/szybet/kdesrc/build/kdesupport/phonon/Phonon4Qt5ExperimentalConfig.cmake"
    "/home/szybet/kdesrc/build/kdesupport/phonon/Phonon4Qt5ExperimentalConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/phonon4qt5/PhononExperimentalTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/phonon4qt5/PhononExperimentalTargets.cmake"
         "/home/szybet/kdesrc/build/kdesupport/phonon/CMakeFiles/Export/60cdde972564c5856fbd1277609815b3/PhononExperimentalTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/phonon4qt5/PhononExperimentalTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/phonon4qt5/PhononExperimentalTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/phonon4qt5" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/CMakeFiles/Export/60cdde972564c5856fbd1277609815b3/PhononExperimentalTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/phonon4qt5" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/CMakeFiles/Export/60cdde972564c5856fbd1277609815b3/PhononExperimentalTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/phonon4qt5.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/qt_phonon4qt5.pri")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ar/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ar/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/az/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/az/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/be/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/be/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/be@latin/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/bg/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/bg/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/bn/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn_IN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/bn_IN/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/bs/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/bs/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ca/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ca/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ca@valencia/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ca@valencia/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/cs/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/cs/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/csb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/csb/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/csb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/csb/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/da/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/da/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/de/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/de/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/el/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/el/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/en_GB/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/en_GB/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/eo/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/eo/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/es/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/es/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/et/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/et/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/eu/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/eu/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/fa/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/fa/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/fi/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/fi/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/fr/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/fr/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/fy/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ga/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ga/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/gl/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/gl/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/gu/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/gu/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/he/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/he/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/hi/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/hi/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/hne/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/hne/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/hr/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/hr/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hsb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/hsb/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hsb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/hsb/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/hu/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/hu/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ia/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ia/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/id/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/id/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/is/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/is/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/it/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/it/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ja/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ja/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ka/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ka/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/kk/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/kk/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/km/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/km/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/kn/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ko/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ko/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ku/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ku/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ku/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ku/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/lt/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/lt/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/lv/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/lv/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mai/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/mai/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mai/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/mai/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/mk/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/mk/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ml/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ml/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/mr/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/mr/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ms/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ms/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/nb/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/nb/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/nds/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/nds/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ne/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ne/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/nl/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/nl/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/nn/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/nn/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/oc/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/oc/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/oc/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/oc/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/or/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/or/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/pa/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/pa/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/pl/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/pl/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/pt/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/pt/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/pt_BR/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/pt_BR/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ro/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ro/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ru/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ru/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/se/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/se/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/si/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/si/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sk/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sk/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sl/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sl/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sq/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sq/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sr/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sr/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sr@ijekavian/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sr@ijekavian/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sr@ijekavianlatin/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sr@ijekavianlatin/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sr@latin/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sr@latin/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sv/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/sv/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ta/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ta/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/te/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/te/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/tg/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/th/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/th/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/tr/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/tr/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ug/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ug/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/uk/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/uk/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/vi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/vi/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/vi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/vi/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/wa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/wa/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/wa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/wa/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/zh_CN/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/zh_CN/phononsettings_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/zh_TW/libphonon_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/zh_TW/phononsettings_qt.qm")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/szybet/kdesrc/build/kdesupport/phonon/cmake/cmake_install.cmake")
  include("/home/szybet/kdesrc/build/kdesupport/phonon/phonon/cmake_install.cmake")
  include("/home/szybet/kdesrc/build/kdesupport/phonon/includes/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/kdesupport/phonon/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
