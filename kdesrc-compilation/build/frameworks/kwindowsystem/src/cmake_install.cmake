# Install script for directory: /home/szybet/kdesrc/frameworks/kwindowsystem/src

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WindowSystem.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WindowSystem.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kwindowsystem/bin/libKF5WindowSystem.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kwindowsystem/bin/libKF5WindowSystem.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WindowSystem.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WindowSystem.so.5"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WindowSystem.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WindowSystem.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WindowSystem.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kwindowsystem/bin/libKF5WindowSystem.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WindowSystem.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WindowSystem.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WindowSystem.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WindowSystem.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KWindowSystem" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kwindowsystem/src/config-kwindowsystem.h"
    "/home/szybet/kdesrc/build/frameworks/kwindowsystem/src/kwindowsystem_export.h"
    "/home/szybet/kdesrc/build/frameworks/kwindowsystem/src/KKeyServer"
    "/home/szybet/kdesrc/build/frameworks/kwindowsystem/src/KStartupInfo"
    "/home/szybet/kdesrc/build/frameworks/kwindowsystem/src/KUserTimestamp"
    "/home/szybet/kdesrc/build/frameworks/kwindowsystem/src/KWindowEffects"
    "/home/szybet/kdesrc/build/frameworks/kwindowsystem/src/KWindowInfo"
    "/home/szybet/kdesrc/build/frameworks/kwindowsystem/src/KWindowShadow"
    "/home/szybet/kdesrc/build/frameworks/kwindowsystem/src/KWindowShadowTile"
    "/home/szybet/kdesrc/build/frameworks/kwindowsystem/src/KWindowSystem"
    "/home/szybet/kdesrc/frameworks/kwindowsystem/src/kkeyserver.h"
    "/home/szybet/kdesrc/frameworks/kwindowsystem/src/kstartupinfo.h"
    "/home/szybet/kdesrc/frameworks/kwindowsystem/src/kusertimestamp.h"
    "/home/szybet/kdesrc/frameworks/kwindowsystem/src/kwindoweffects.h"
    "/home/szybet/kdesrc/frameworks/kwindowsystem/src/kwindowinfo.h"
    "/home/szybet/kdesrc/frameworks/kwindowsystem/src/kwindowshadow.h"
    "/home/szybet/kdesrc/frameworks/kwindowsystem/src/kwindowsystem.h"
    "/home/szybet/kdesrc/frameworks/kwindowsystem/src/netwm_def.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KWindowSystem/private" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/kwindowsystem/src/kwindoweffects_p.h"
    "/home/szybet/kdesrc/frameworks/kwindowsystem/src/kwindowinfo_p.h"
    "/home/szybet/kdesrc/frameworks/kwindowsystem/src/kwindowshadow_p.h"
    "/home/szybet/kdesrc/frameworks/kwindowsystem/src/kwindowsystem_p.h"
    "/home/szybet/kdesrc/frameworks/kwindowsystem/src/kwindowsystemplugininterface_p.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kwindowsystem/src/platforms/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qlogging-categories5" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kwindowsystem/src/kwindowsystem.categories"
    "/home/szybet/kdesrc/build/frameworks/kwindowsystem/src/kwindowsystem.renamecategories"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwindowsystem/src/qt_KWindowSystem.pri")
endif()

