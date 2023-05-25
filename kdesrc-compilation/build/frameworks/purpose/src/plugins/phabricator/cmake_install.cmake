# Install script for directory: /home/szybet/kdesrc/frameworks/purpose/src/plugins/phabricator

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/purpose/src/plugins/phabricator/icons/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Purpose" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/purpose/phabricatorplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/purpose/phabricatorplugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/purpose/phabricatorplugin.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/purpose" TYPE MODULE FILES "/home/szybet/kdesrc/build/frameworks/purpose/bin/kf5/purpose/phabricatorplugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/purpose/phabricatorplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/purpose/phabricatorplugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/purpose/phabricatorplugin.so"
         OLD_RPATH "/home/szybet/kdesrc/build/frameworks/purpose/bin:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/purpose/phabricatorplugin.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Purpose" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/purpose" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/purpose/src/plugins/phabricator/phabricatorplugin_config.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Purpose" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPhabricatorHelpers.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPhabricatorHelpers.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/purpose/bin/libPhabricatorHelpers.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/purpose/bin/libPhabricatorHelpers.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPhabricatorHelpers.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPhabricatorHelpers.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib::::::::::::::::::::::::::::::::::::::::::::::::::::"
           NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Purpose" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/purpose/phabricator/libphabricatorquickplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/purpose/phabricator/libphabricatorquickplugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/purpose/phabricator/libphabricatorquickplugin.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/purpose/phabricator" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/purpose/bin/libphabricatorquickplugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/purpose/phabricator/libphabricatorquickplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/purpose/phabricator/libphabricatorquickplugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/purpose/phabricator/libphabricatorquickplugin.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/home/szybet/kdesrc/build/frameworks/purpose/bin:::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/purpose/phabricator/libphabricatorquickplugin.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Purpose" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Purpose" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/purpose/phabricator" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/purpose/src/plugins/phabricator/quick/qmldir")
endif()

