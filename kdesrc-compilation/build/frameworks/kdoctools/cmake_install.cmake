# Install script for directory: /home/szybet/kdesrc/frameworks/kdoctools

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
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share" TYPE DIRECTORY FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/locale")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/ca/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/ca/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/ca/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/ca/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca@valencia/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/ca@valencia/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca@valencia/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/ca@valencia/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca@valencia/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/ca@valencia/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca@valencia/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/ca@valencia/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/de/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/de/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/de/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/de/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/de/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/de/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/de/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/de/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/es/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/es/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/es/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/es/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/es/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/es/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/es/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/es/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/id/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/id/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/it/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/it/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/it/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/it/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/it/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/it/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/it/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/it/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/nl/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/nl/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/nl/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/nl/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/nl/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/nl/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/nl/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/nl/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/pt/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/pt/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/pt/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/pt/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt_BR/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/pt_BR/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt_BR/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/pt_BR/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt_BR/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/pt_BR/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt_BR/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/pt_BR/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ru/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/ru/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ru/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/ru/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/sv/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/sv/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/sv/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/sv/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/sv/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/sv/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/sv/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/sv/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/uk/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/uk/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/uk/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/uk/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/uk/man1" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/uk/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/uk/man7" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/po/uk/docs/qt5options/qt5options.7")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kdoctools/common/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kdoctools/docs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kdoctools/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools/KF5DocToolsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools/KF5DocToolsTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kdoctools/CMakeFiles/Export/8941c11045a0caee5e32330108d99c1c/KF5DocToolsTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools/KF5DocToolsTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools/KF5DocToolsTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/CMakeFiles/Export/8941c11045a0caee5e32330108d99c1c/KF5DocToolsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/CMakeFiles/Export/8941c11045a0caee5e32330108d99c1c/KF5DocToolsTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools/KF5DocToolsToolsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools/KF5DocToolsToolsTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kdoctools/CMakeFiles/Export/8941c11045a0caee5e32330108d99c1c/KF5DocToolsToolsTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools/KF5DocToolsToolsTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools/KF5DocToolsToolsTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/CMakeFiles/Export/8941c11045a0caee5e32330108d99c1c/KF5DocToolsToolsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/CMakeFiles/Export/8941c11045a0caee5e32330108d99c1c/KF5DocToolsToolsTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KDocTools" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kdoctools/kdoctools_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kdoctools/cmake/KF5DocToolsConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/kdoctools/cmake/KF5DocToolsConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kdoctools/KF5DocToolsMacros.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/kdoctools/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
