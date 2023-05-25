# Install script for directory: /mnt/HDD/Project/Public/okulartry/kdoctools

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot")
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share" TYPE DIRECTORY FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/locale")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/ca/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/ca/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/ca/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/ca/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca@valencia/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/ca@valencia/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca@valencia/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/ca@valencia/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca@valencia/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/ca@valencia/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca@valencia/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/ca@valencia/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/de/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/de/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/de/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/de/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/de/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/de/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/de/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/de/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/es/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/es/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/es/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/es/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/es/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/es/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/es/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/es/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/id/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/id/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/it/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/it/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/it/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/it/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/it/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/it/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/it/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/it/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/nl/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/nl/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/nl/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/nl/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/nl/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/nl/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/nl/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/nl/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/pt/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/pt/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/pt/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/pt/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt_BR/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/pt_BR/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt_BR/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/pt_BR/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt_BR/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/pt_BR/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt_BR/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/pt_BR/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ru/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/ru/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ru/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/ru/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/sv/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/sv/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/sv/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/sv/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/sv/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/sv/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/sv/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/sv/docs/qt5options/qt5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/uk/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/uk/docs/checkXML5/checkXML5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/uk/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/uk/docs/kf5options/kf5options.7")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/uk/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/uk/docs/meinproc5/meinproc5.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/uk/man7" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/po/uk/docs/qt5options/qt5options.7")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/mnt/HDD/Project/Public/okulartry/kdoctools/build/common/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/mnt/HDD/Project/Public/okulartry/kdoctools/build/docs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/mnt/HDD/Project/Public/okulartry/kdoctools/build/autotests/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools/KF5DocToolsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools/KF5DocToolsTargets.cmake"
         "/mnt/HDD/Project/Public/okulartry/kdoctools/build/CMakeFiles/Export/8941c11045a0caee5e32330108d99c1c/KF5DocToolsTargets.cmake")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/CMakeFiles/Export/8941c11045a0caee5e32330108d99c1c/KF5DocToolsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/CMakeFiles/Export/8941c11045a0caee5e32330108d99c1c/KF5DocToolsTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools/KF5DocToolsToolsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools/KF5DocToolsToolsTargets.cmake"
         "/mnt/HDD/Project/Public/okulartry/kdoctools/build/CMakeFiles/Export/8941c11045a0caee5e32330108d99c1c/KF5DocToolsToolsTargets.cmake")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/CMakeFiles/Export/8941c11045a0caee5e32330108d99c1c/KF5DocToolsToolsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/CMakeFiles/Export/8941c11045a0caee5e32330108d99c1c/KF5DocToolsToolsTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KDocTools" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/kdoctools_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kdoctools/build/cmake/KF5DocToolsConfig.cmake"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/build/cmake/KF5DocToolsConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5DocTools" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/KF5DocToolsMacros.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/mnt/HDD/Project/Public/okulartry/kdoctools/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
