# Install script for directory: /home/szybet/kdesrc/frameworks/kconfigwidgets/src

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/bin/libKF5ConfigWidgets.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/bin/libKF5ConfigWidgets.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so.5"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/bin/libKF5ConfigWidgets.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KConfigWidgets" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/kconfigwidgets_export.h"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KCodecAction"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KColorScheme"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KColorSchemeManager"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KColorSchemeMenu"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KColorSchemeModel"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KCommandBar"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KConfigDialog"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KConfigViewStateSaver"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KConfigDialogManager"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KCModule"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KHamburgerMenu"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KHelpClient"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KLanguageButton"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KLanguageName"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KPasteTextAction"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KRecentFilesAction"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KStatefulBrush"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KViewStateMaintainer"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KStandardAction"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/KTipDialog"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/kcodecaction.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/kcolorscheme.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/kcolorschememanager.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/kcolorschememenu.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/kcolorschememodel.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/kcommandbar.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/kconfigdialog.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/kconfigviewstatesaver.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/kconfigdialogmanager.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/kcmodule.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/khamburgermenu.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/khelpclient.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/klanguagebutton.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/klanguagename.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/kpastetextaction.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/krecentfilesaction.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/kstatefulbrush.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/kviewstatemaintainer.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/kstandardaction.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/ktipdialog.h"
    "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/ktip.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/preparetips5")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_US" TYPE FILE RENAME "kf5_entry.desktop" FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/src/entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qlogging-categories5" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/kconfigwidgets.categories"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/kconfigwidgets.renamecategories"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/qt_KConfigWidgets.pri")
endif()

