# Install script for directory: /home/szybet/kdesrc/frameworks/kparts/src

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KParts/KParts" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/BrowserArguments"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/BrowserExtension"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/BrowserHostExtension"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/BrowserInterface"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/BrowserOpenOrSaveQuestion"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/BrowserRun"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/Event"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/FileInfoExtension"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/GUIActivateEvent"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/HistoryProvider"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/HtmlExtension"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/HtmlSettingsInterface"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/ListingFilterExtension"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/ListingNotificationExtension"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/LiveConnectExtension"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/MainWindow"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/OpenUrlArguments"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/OpenUrlEvent"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/Part"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/PartActivateEvent"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/PartBase"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/PartLoader"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/PartManager"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/PartSelectEvent"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/Plugin"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/ReadOnlyPart"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/ReadWritePart"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/ScriptableExtension"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/SelectorInterface"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/StatusBarExtension"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/TextExtension"
    "/home/szybet/kdesrc/build/frameworks/kparts/src/KParts/WindowArgs"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KParts" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Parts.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Parts.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kparts/bin/libKF5Parts.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kparts/bin/libKF5Parts.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Parts.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Parts.so.5"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KParts" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Parts.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Parts.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Parts.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kparts/bin/libKF5Parts.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Parts.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Parts.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Parts.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Parts.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KParts" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservicetypes5" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/kparts/src/kpart.desktop"
    "/home/szybet/kdesrc/frameworks/kparts/src/kparts-readonlypart.desktop"
    "/home/szybet/kdesrc/frameworks/kparts/src/kparts-readwritepart.desktop"
    "/home/szybet/kdesrc/frameworks/kparts/src/browserview.desktop"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KParts/kparts" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kparts/kparts/kparts_export.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/browserarguments.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/browserextension.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/browserhostextension.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/browserinterface.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/browseropenorsavequestion.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/browserrun.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/event.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/fileinfoextension.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/guiactivateevent.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/historyprovider.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/htmlextension.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/htmlsettingsinterface.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/listingfilterextension.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/listingnotificationextension.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/liveconnectextension.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/mainwindow.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/openurlarguments.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/openurlevent.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/part.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/partactivateevent.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/partbase.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/partloader.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/partmanager.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/partselectevent.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/plugin.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/readonlypart.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/readwritepart.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/scriptableextension.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/selectorinterface.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/statusbarextension.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/textextension.h"
    "/home/szybet/kdesrc/frameworks/kparts/src/windowargs.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KParts" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KParts" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kparts/src/kde_terminal_interface.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KParts" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qlogging-categories5" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kparts/src/kparts.categories")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KParts" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kparts/src/qt_KParts.pri")
endif()

