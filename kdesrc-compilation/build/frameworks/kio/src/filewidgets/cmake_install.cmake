# Install script for directory: /home/szybet/kdesrc/frameworks/kio/src/filewidgets

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kio/bin/libKF5KIOFileWidgets.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kio/bin/libKF5KIOFileWidgets.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so.5"
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kio/bin/libKF5KIOFileWidgets.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so"
         OLD_RPATH "/home/szybet/kdesrc/build/frameworks/kio/bin:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOFileWidgets" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KAbstractViewAdapter"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KImageFilePreview"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KPreviewWidgetBase"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KRecentDirs"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KStatusBarOfflineIndicator"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KDirOperator"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KDirSortFilterProxyModel"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KFileCopyToMenu"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KFileCustomDialog"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KFileFilterCombo"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KFilePlaceEditDialog"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KFilePlacesModel"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KFilePlacesView"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KFilePreviewGenerator"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KFileWidget"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KUrlNavigator"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KNewFileMenu"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KNameAndUrlInputDialog"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/KEncodingFileDialog"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kabstractviewadapter.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kimagefilepreview.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kpreviewwidgetbase.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/krecentdirs.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kstatusbarofflineindicator.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kdiroperator.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kdirsortfilterproxymodel.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kfilecopytomenu.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kfilecustomdialog.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kfilefiltercombo.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kfileplaceeditdialog.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kfileplacesmodel.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kfileplacesview.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kfilepreviewgenerator.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kfilewidget.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kurlnavigator.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/knewfilemenu.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/knameandurlinputdialog.h"
    "/home/szybet/kdesrc/frameworks/kio/src/filewidgets/kencodingfiledialog.h"
    "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/kiofilewidgets_export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kio/src/filewidgets/qt_KIOFileWidgets.pri")
endif()

