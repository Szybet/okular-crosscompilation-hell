# Install script for directory: /home/szybet/kdesrc/frameworks/kguiaddons/src

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KGuiAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5GuiAddons.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5GuiAddons.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/bin/libKF5GuiAddons.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/bin/libKF5GuiAddons.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5GuiAddons.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5GuiAddons.so.5"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KGuiAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5GuiAddons.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5GuiAddons.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5GuiAddons.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kguiaddons/bin/libKF5GuiAddons.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5GuiAddons.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5GuiAddons.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5GuiAddons.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5GuiAddons.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KGuiAddons" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/kguiaddons_export.h"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/util/kmodifierkeyinfoprovider_p.h"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/util/klocalimagecacheimpl.h"
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/KColorUtils"
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/KColorCollection"
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/KColorMimeData"
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/KColorSchemeWatcher"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/colors/kcolorutils.h"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/colors/kcolorcollection.h"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/colors/kcolormimedata.h"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/colors/kcolorschemewatcher.h"
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/KDateValidator"
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/KWordWrap"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/text/kdatevalidator.h"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/text/kwordwrap.h"
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/KFontUtils"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/fonts/kfontutils.h"
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/KIconUtils"
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/KImageCache"
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/KModifierKeyInfo"
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/KCursorSaver"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/util/kiconutils.h"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/util/kimagecache.h"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/util/kmodifierkeyinfo.h"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/util/kcursorsaver.h"
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/KeySequenceRecorder"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/recorder/keysequencerecorder.h"
    "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/KSystemClipboard"
    "/home/szybet/kdesrc/frameworks/kguiaddons/src/systemclipboard/ksystemclipboard.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KGuiAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/qt_KGuiAddons.pri")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KGuiAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qlogging-categories5" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kguiaddons/src/kguiaddons.categories")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler/cmake_install.cmake")
endif()

