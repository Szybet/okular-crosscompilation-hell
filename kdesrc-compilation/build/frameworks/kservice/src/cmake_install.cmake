# Install script for directory: /home/szybet/kdesrc/frameworks/kservice/src

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KService" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservicetypes5" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/kservice/src/services/kplugininfo.desktop"
    "/home/szybet/kdesrc/frameworks/kservice/src/services/application.desktop"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KService" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/xdg/menus" TYPE FILE RENAME "applications.menu" FILES "/home/szybet/kdesrc/frameworks/kservice/src/applications.menu")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KService" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Service.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Service.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kservice/bin/libKF5Service.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kservice/bin/libKF5Service.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Service.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Service.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/mnt/HDD/Project/Public/okulartry/okular-things/lib:"
           NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KService" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Service.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Service.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Service.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kservice/bin/libKF5Service.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Service.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Service.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Service.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/mnt/HDD/Project/Public/okulartry/okular-things/lib:"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Service.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KService" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kservice/src/kservice_export.h"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KPluginTrader"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KDBusServiceStarter"
    "/home/szybet/kdesrc/frameworks/kservice/src/plugin/kplugintrader.h"
    "/home/szybet/kdesrc/frameworks/kservice/src/plugin/kdbusservicestarter.h"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KSycoca"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KSycocaEntry"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KSycocaType"
    "/home/szybet/kdesrc/frameworks/kservice/src/sycoca/ksycoca.h"
    "/home/szybet/kdesrc/frameworks/kservice/src/sycoca/ksycocaentry.h"
    "/home/szybet/kdesrc/frameworks/kservice/src/sycoca/ksycocatype.h"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KToolInvocation"
    "/home/szybet/kdesrc/frameworks/kservice/src/kdeinit/ktoolinvocation.h"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KApplicationTrader"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KAutostart"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KMimeTypeTrader"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KService"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KServiceAction"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KServiceGroup"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KServiceType"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KServiceTypeProfile"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KServiceTypeTrader"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/KPluginInfo"
    "/home/szybet/kdesrc/frameworks/kservice/src/services/kapplicationtrader.h"
    "/home/szybet/kdesrc/frameworks/kservice/src/services/kautostart.h"
    "/home/szybet/kdesrc/frameworks/kservice/src/services/kmimetypetrader.h"
    "/home/szybet/kdesrc/frameworks/kservice/src/services/kservice.h"
    "/home/szybet/kdesrc/frameworks/kservice/src/services/kserviceaction.h"
    "/home/szybet/kdesrc/frameworks/kservice/src/services/kservicegroup.h"
    "/home/szybet/kdesrc/frameworks/kservice/src/services/kservicetype.h"
    "/home/szybet/kdesrc/frameworks/kservice/src/services/kservicetypeprofile.h"
    "/home/szybet/kdesrc/frameworks/kservice/src/services/kservicetypetrader.h"
    "/home/szybet/kdesrc/frameworks/kservice/src/services/kplugininfo.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KService" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qlogging-categories5" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kservice/src/kservice.categories"
    "/home/szybet/kdesrc/build/frameworks/kservice/src/kservice.renamecategories"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kservice/src/kbuildsycoca/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KService" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kservice/src/qt_KService.pri")
endif()

