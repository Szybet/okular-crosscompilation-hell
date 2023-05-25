# Install script for directory: /mnt/HDD/Project/Public/okulartry/kconfigwidgets/src

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/bin/libKF5ConfigWidgets.so.5.107.0"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/bin/libKF5ConfigWidgets.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
           NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
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
         RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/bin/libKF5ConfigWidgets.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
         NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ConfigWidgets.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KConfigWidgets" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/kconfigwidgets_export.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KCodecAction"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KColorScheme"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KColorSchemeManager"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KColorSchemeMenu"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KColorSchemeModel"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KCommandBar"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KConfigDialog"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KConfigViewStateSaver"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KConfigDialogManager"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KCModule"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KHamburgerMenu"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KHelpClient"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KLanguageButton"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KLanguageName"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KPasteTextAction"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KRecentFilesAction"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KStatefulBrush"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KViewStateMaintainer"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KStandardAction"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/KTipDialog"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/kcodecaction.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/kcolorscheme.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/kcolorschememanager.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/kcolorschememenu.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/kcolorschememodel.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/kcommandbar.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/kconfigdialog.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/kconfigviewstatesaver.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/kconfigdialogmanager.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/kcmodule.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/khamburgermenu.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/khelpclient.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/klanguagebutton.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/klanguagename.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/kpastetextaction.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/krecentfilesaction.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/kstatefulbrush.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/kviewstatemaintainer.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/kstandardaction.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/ktipdialog.h"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/ktip.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/preparetips5")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_US" TYPE FILE RENAME "kf5_entry.desktop" FILES "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/src/entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qlogging-categories5" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/kconfigwidgets.categories"
    "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/kconfigwidgets.renamecategories"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kconfigwidgets/build/src/qt_KConfigWidgets.pri")
endif()

