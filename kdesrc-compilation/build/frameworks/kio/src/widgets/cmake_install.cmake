# Install script for directory: /home/szybet/kdesrc/frameworks/kio/src/widgets

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOWidgets/KIO" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/AccessManager"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/DeleteOrTrashJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/SslUi"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/ThumbSequenceCreator"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/ThumbDevicePixelRatioDependentCreator"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/ThumbCreator"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/DropJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/DndPopupMenuPlugin"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/OpenFileManagerWindowJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/PasteJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/PreviewJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/RenameDialog"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/SkipDialog"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/JobUiDelegate"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/FileUndoManager"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/Paste"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/PixmapLoader"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/KUriFilterSearchProviderActions"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/RenameFileDialog"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KIO/WidgetsAskUserActionHandler"
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
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kio/bin/libKF5KIOWidgets.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kio/bin/libKF5KIOWidgets.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so.5"
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kio/bin/libKF5KIOWidgets.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so"
         OLD_RPATH "/home/szybet/kdesrc/build/frameworks/kio/bin:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOWidgets.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE RENAME "kf5_org.kde.kio.FileUndoManager.xml" FILES "/home/szybet/kdesrc/frameworks/kio/src/widgets/org.kde.kio.FileUndoManager.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOWidgets/kio" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/accessmanager.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/deleteortrashjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/sslui.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/thumbsequencecreator.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/thumbdevicepixelratiodependentcreator.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/thumbcreator.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/dropjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/dndpopupmenuplugin.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/openfilemanagerwindowjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/pastejob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/previewjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/renamedialog.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/skipdialog.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/jobuidelegate.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/fileundomanager.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/paste.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/pixmaploader.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kurifiltersearchprovideractions.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/renamefiledialog.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/widgetsaskuseractionhandler.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOWidgets" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KPropertiesDialog"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KUrlRequesterDialog"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KUrlComboBox"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KFileItemActions"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KFileItemDelegate"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KAutoMount"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KDesktopFileActions"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KOpenWithDialog"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KAbstractFileItemActionPlugin"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KOverlayIconPlugin"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KBuildSycocaProgressDialog"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KFile"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KUrlRequester"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KRun"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KUrlPixmapProvider"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KSslCertificateBox"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KSslInfoDialog"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KDirLister"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KDirModel"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KShellCompletion"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KUrlCompletion"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/KUriFilter"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kpropertiesdialog.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kurlrequesterdialog.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kurlcombobox.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kfileitemactions.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kfileitemdelegate.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kautomount.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kdesktopfileactions.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kopenwithdialog.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kabstractfileitemactionplugin.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/koverlayiconplugin.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kbuildsycocaprogressdialog.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kfile.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kurlrequester.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/krun.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kurlpixmapprovider.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/ksslcertificatebox.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/ksslinfodialog.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kdirlister.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kdirmodel.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kshellcompletion.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kurlcompletion.h"
    "/home/szybet/kdesrc/frameworks/kio/src/widgets/kurifilter.h"
    "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/kiowidgets_export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservicetypes5" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kio/src/widgets/konqpopupmenuplugin.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservicetypes5" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kio/src/widgets/kfileitemactionplugin.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservicetypes5" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kio/src/widgets/kpropertiesdialogplugin.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kio/src/widgets/qt_KIOWidgets.pri")
endif()

