# Install script for directory: /mnt/HDD/Project/Public/okulartry/kio/src/filewidgets

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/mnt/HDD/Project/Public/okulartry/kio/build/bin/libKF5KIOFileWidgets.so.5.107.0"
    "/mnt/HDD/Project/Public/okulartry/kio/build/bin/libKF5KIOFileWidgets.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/mnt/HDD/Project/Public/okulartry/kio/build/bin:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
           NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
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
         RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/mnt/HDD/Project/Public/okulartry/kio/build/bin/libKF5KIOFileWidgets.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so"
         OLD_RPATH "/mnt/HDD/Project/Public/okulartry/kio/build/bin:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
         NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOFileWidgets.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOFileWidgets" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KAbstractViewAdapter"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KImageFilePreview"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KPreviewWidgetBase"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KRecentDirs"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KStatusBarOfflineIndicator"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KDirOperator"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KDirSortFilterProxyModel"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KFileCopyToMenu"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KFileCustomDialog"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KFileFilterCombo"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KFilePlaceEditDialog"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KFilePlacesModel"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KFilePlacesView"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KFilePreviewGenerator"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KFileWidget"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KUrlNavigator"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KNewFileMenu"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KNameAndUrlInputDialog"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/KEncodingFileDialog"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kabstractviewadapter.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kimagefilepreview.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kpreviewwidgetbase.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/krecentdirs.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kstatusbarofflineindicator.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kdiroperator.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kdirsortfilterproxymodel.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kfilecopytomenu.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kfilecustomdialog.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kfilefiltercombo.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kfileplaceeditdialog.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kfileplacesmodel.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kfileplacesview.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kfilepreviewgenerator.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kfilewidget.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kurlnavigator.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/knewfilemenu.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/knameandurlinputdialog.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/filewidgets/kencodingfiledialog.h"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/kiofilewidgets_export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kio/build/src/filewidgets/qt_KIOFileWidgets.pri")
endif()

