# Install script for directory: /mnt/HDD/Project/Public/okulartry/kio/src/widgets

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOWidgets/KIO" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/AccessManager"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/DeleteOrTrashJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/SslUi"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/ThumbSequenceCreator"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/ThumbDevicePixelRatioDependentCreator"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/ThumbCreator"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/DropJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/DndPopupMenuPlugin"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/OpenFileManagerWindowJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/PasteJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/PreviewJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/RenameDialog"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/SkipDialog"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/JobUiDelegate"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/FileUndoManager"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/Paste"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/PixmapLoader"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/KUriFilterSearchProviderActions"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/RenameFileDialog"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KIO/WidgetsAskUserActionHandler"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/mnt/HDD/Project/Public/okulartry/kio/build/bin/libKF5KIOWidgets.so.5.107.0"
    "/mnt/HDD/Project/Public/okulartry/kio/build/bin/libKF5KIOWidgets.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so.5"
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so"
         RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/mnt/HDD/Project/Public/okulartry/kio/build/bin/libKF5KIOWidgets.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so"
         OLD_RPATH "/mnt/HDD/Project/Public/okulartry/kio/build/bin:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
         NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE RENAME "kf5_org.kde.kio.FileUndoManager.xml" FILES "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/org.kde.kio.FileUndoManager.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOWidgets/kio" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/accessmanager.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/deleteortrashjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/sslui.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/thumbsequencecreator.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/thumbdevicepixelratiodependentcreator.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/thumbcreator.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/dropjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/dndpopupmenuplugin.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/openfilemanagerwindowjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/pastejob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/previewjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/renamedialog.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/skipdialog.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/jobuidelegate.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/fileundomanager.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/paste.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/pixmaploader.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kurifiltersearchprovideractions.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/renamefiledialog.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/widgetsaskuseractionhandler.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOWidgets" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KPropertiesDialog"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KUrlRequesterDialog"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KUrlComboBox"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KFileItemActions"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KFileItemDelegate"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KAutoMount"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KDesktopFileActions"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KOpenWithDialog"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KAbstractFileItemActionPlugin"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KOverlayIconPlugin"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KBuildSycocaProgressDialog"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KFile"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KUrlRequester"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KRun"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KUrlPixmapProvider"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KSslCertificateBox"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KSslInfoDialog"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KDirLister"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KDirModel"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KShellCompletion"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KUrlCompletion"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/KUriFilter"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kpropertiesdialog.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kurlrequesterdialog.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kurlcombobox.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kfileitemactions.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kfileitemdelegate.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kautomount.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kdesktopfileactions.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kopenwithdialog.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kabstractfileitemactionplugin.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/koverlayiconplugin.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kbuildsycocaprogressdialog.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kfile.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kurlrequester.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/krun.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kurlpixmapprovider.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/ksslcertificatebox.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/ksslinfodialog.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kdirlister.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kdirmodel.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kshellcompletion.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kurlcompletion.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kurifilter.h"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/kiowidgets_export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservicetypes5" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/konqpopupmenuplugin.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservicetypes5" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kfileitemactionplugin.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservicetypes5" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kio/src/widgets/kpropertiesdialogplugin.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kio/build/src/widgets/qt_KIOWidgets.pri")
endif()

