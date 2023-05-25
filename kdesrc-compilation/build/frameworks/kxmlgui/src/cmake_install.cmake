# Install script for directory: /home/szybet/kdesrc/frameworks/kxmlgui/src

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
  include("/home/szybet/kdesrc/build/frameworks/kxmlgui/src/ksendbugmail/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KXmlGui" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5XmlGui.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5XmlGui.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/bin/libKF5XmlGui.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/bin/libKF5XmlGui.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5XmlGui.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5XmlGui.so.5"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KXmlGui" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5XmlGui.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5XmlGui.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5XmlGui.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kxmlgui/bin/libKF5XmlGui.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5XmlGui.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5XmlGui.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5XmlGui.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/mnt/HDD/Project/Public/okulartry/okular-things/lib:"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5XmlGui.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KXmlGui" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/kxmlgui_export.h"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KAboutApplicationDialog"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KAboutPluginDialog"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KActionCategory"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KActionCollection"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KBugReport"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KEditToolBar"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KHelpMenu"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KKeySequenceWidget"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KMainWindow"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KShortcutsDialog"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KShortcutsEditor"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KShortcutWidget"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KToggleToolBarAction"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KToolBar"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KToolTipHelper"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KXMLGUIBuilder"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KXMLGUIClient"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KXMLGUIFactory"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KXmlGuiWindow"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/KUndoActions"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kaboutapplicationdialog.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kaboutplugindialog.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kactioncategory.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kactioncollection.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kbugreport.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kedittoolbar.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/khelpmenu.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kkeysequencewidget.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kmainwindow.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kshortcutsdialog.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kshortcutseditor.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kshortcutwidget.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/ktoggletoolbaraction.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/ktoolbar.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/ktooltiphelper.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kxmlguibuilder.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kxmlguiclient.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kxmlguifactory.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kxmlguiwindow.h"
    "/home/szybet/kdesrc/frameworks/kxmlgui/src/kundoactions.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KXmlGui" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/xdg/ui" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kxmlgui/src/ui_standards.rc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KXmlGui" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qlogging-categories5" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/kxmlgui.categories"
    "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/kxmlgui.renamecategories"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KXmlGui" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kxmlgui/src/qt_KXmlGui.pri")
endif()

