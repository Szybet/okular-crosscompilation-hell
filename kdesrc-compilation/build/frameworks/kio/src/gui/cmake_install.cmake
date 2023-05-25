# Install script for directory: /home/szybet/kdesrc/frameworks/kio/src/gui

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOGui/KIO" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kio/src/gui/KIO/ApplicationLauncherJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/gui/KIO/CommandLauncherJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/gui/KIO/FavIconRequestJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/gui/KIO/OpenUrlJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/gui/KIO/OpenWithHandlerInterface"
    "/home/szybet/kdesrc/build/frameworks/kio/src/gui/KIO/ThumbnailCreator"
    "/home/szybet/kdesrc/frameworks/kio/src/gui/compatheaders/KCoreUrlNavigator"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOGui.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOGui.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kio/bin/libKF5KIOGui.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kio/bin/libKF5KIOGui.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOGui.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOGui.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/szybet/kdesrc/build/frameworks/kio/bin:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:::::::"
           NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOGui.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOGui.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOGui.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kio/bin/libKF5KIOGui.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOGui.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOGui.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOGui.so"
         OLD_RPATH "/home/szybet/kdesrc/build/frameworks/kio/bin:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOGui.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOGui/kio" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/kio/src/gui/applicationlauncherjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/gui/commandlauncherjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/gui/faviconrequestjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/gui/openurljob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/gui/openwithhandlerinterface.h"
    "/home/szybet/kdesrc/frameworks/kio/src/gui/thumbnailcreator.h"
    "/home/szybet/kdesrc/frameworks/kio/src/gui/compatheaders/kcoreurlnavigator.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOGui" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kio/src/gui/KCoreUrlNavigator"
    "/home/szybet/kdesrc/build/frameworks/kio/src/gui/KEMailClientLauncherJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/gui/KTerminalLauncherJob"
    "/home/szybet/kdesrc/frameworks/kio/src/gui/kcoreurlnavigator.h"
    "/home/szybet/kdesrc/frameworks/kio/src/gui/kemailclientlauncherjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/gui/kterminallauncherjob.h"
    "/home/szybet/kdesrc/build/frameworks/kio/src/gui/kiogui_export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kio/src/gui/qt_KIOGui.pri")
endif()

