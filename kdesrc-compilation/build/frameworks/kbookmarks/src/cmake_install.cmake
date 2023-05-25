# Install script for directory: /home/szybet/kdesrc/frameworks/kbookmarks/src

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Bookmarks.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Bookmarks.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/bin/libKF5Bookmarks.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/bin/libKF5Bookmarks.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Bookmarks.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Bookmarks.so.5"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Bookmarks.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Bookmarks.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Bookmarks.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/bin/libKF5Bookmarks.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Bookmarks.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Bookmarks.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Bookmarks.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/mnt/HDD/Project/Public/okulartry/okular-things/lib:"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Bookmarks.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KBookmarks" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/kbookmarks_export.h"
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/KBookmark"
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/KBookmarkAction"
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/KBookmarkActionInterface"
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/KBookmarkActionMenu"
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/KBookmarkContextMenu"
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/KBookmarkManager"
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/KBookmarkMenu"
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/KBookmarkOwner"
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/KBookmarkDomBuilder"
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/KBookmarkDialog"
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/KonqBookmarkMenu"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmark.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmarkaction.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmarkactioninterface.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmarkactionmenu.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmarkcontextmenu.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmarkmanager.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmarkmenu.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmarkowner.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmarkdombuilder.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmarkdialog.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/konqbookmarkmenu.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmarkexporter.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmarkimporter.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmarkimporter_opera.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmarkimporter_ie.h"
    "/home/szybet/kdesrc/frameworks/kbookmarks/src/kbookmarkimporter_ns.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qlogging-categories5" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/kbookmarks.categories"
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/kbookmarks.renamecategories"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/src/qt_KBookmarks.pri")
endif()

