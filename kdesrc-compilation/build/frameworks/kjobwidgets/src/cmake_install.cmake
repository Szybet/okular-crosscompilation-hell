# Install script for directory: /home/szybet/kdesrc/frameworks/kjobwidgets/src

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JobWidgets.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JobWidgets.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kjobwidgets/bin/libKF5JobWidgets.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kjobwidgets/bin/libKF5JobWidgets.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JobWidgets.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JobWidgets.so.5"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JobWidgets.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JobWidgets.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JobWidgets.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/bin/libKF5JobWidgets.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JobWidgets.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JobWidgets.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JobWidgets.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JobWidgets.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE RENAME "kf5_org.kde.JobViewServer.xml" FILES "/home/szybet/kdesrc/frameworks/kjobwidgets/src/org.kde.JobViewServer.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE RENAME "kf5_org.kde.JobView.xml" FILES "/home/szybet/kdesrc/frameworks/kjobwidgets/src/org.kde.JobView.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE RENAME "kf5_org.kde.JobViewV2.xml" FILES "/home/szybet/kdesrc/frameworks/kjobwidgets/src/org.kde.JobViewV2.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KJobWidgets" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kjobwidgets/src/kjobwidgets_export.h"
    "/home/szybet/kdesrc/build/frameworks/kjobwidgets/src/KAbstractWidgetJobTracker"
    "/home/szybet/kdesrc/build/frameworks/kjobwidgets/src/KDialogJobUiDelegate"
    "/home/szybet/kdesrc/build/frameworks/kjobwidgets/src/KUiServerJobTracker"
    "/home/szybet/kdesrc/build/frameworks/kjobwidgets/src/KUiServerV2JobTracker"
    "/home/szybet/kdesrc/build/frameworks/kjobwidgets/src/KJobWidgets"
    "/home/szybet/kdesrc/build/frameworks/kjobwidgets/src/KStatusBarJobTracker"
    "/home/szybet/kdesrc/build/frameworks/kjobwidgets/src/KWidgetJobTracker"
    "/home/szybet/kdesrc/frameworks/kjobwidgets/src/kabstractwidgetjobtracker.h"
    "/home/szybet/kdesrc/frameworks/kjobwidgets/src/kdialogjobuidelegate.h"
    "/home/szybet/kdesrc/frameworks/kjobwidgets/src/kuiserverjobtracker.h"
    "/home/szybet/kdesrc/frameworks/kjobwidgets/src/kuiserverv2jobtracker.h"
    "/home/szybet/kdesrc/frameworks/kjobwidgets/src/kjobwidgets.h"
    "/home/szybet/kdesrc/frameworks/kjobwidgets/src/kstatusbarjobtracker.h"
    "/home/szybet/kdesrc/frameworks/kjobwidgets/src/kwidgetjobtracker.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qlogging-categories5" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kjobwidgets/src/kjobwidgets.categories"
    "/home/szybet/kdesrc/build/frameworks/kjobwidgets/src/kjobwidgets.renamecategories"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/src/qt_KJobWidgets.pri")
endif()

