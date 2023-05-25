# Install script for directory: /home/szybet/kdesrc/frameworks/kcoreaddons/src/lib

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
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/bin/libKF5CoreAddons.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/bin/libKF5CoreAddons.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so.5"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/bin/libKF5CoreAddons.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KCoreAddons" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KAboutData"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KCoreAddons"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/kaboutdata.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/kcoreaddons.h"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KSharedDataCache"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/caching/kshareddatacache.h"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KAutoSaveFile"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KDirWatch"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KMessage"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KProcess"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KBackup"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KUrlMimeData"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KFileSystemType"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KFileUtils"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KNetworkMounts"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/io/kautosavefile.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/io/kdirwatch.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/io/kmessage.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/io/kprocess.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/io/kbackup.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/io/kurlmimedata.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/io/kfilesystemtype.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/io/kfileutils.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/io/knetworkmounts.h"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KCompositeJob"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KJob"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KJobTrackerInterface"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KJobUiDelegate"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/jobs/kcompositejob.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/jobs/kjob.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/jobs/kjobtrackerinterface.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/jobs/kjobuidelegate.h"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KExportPlugin"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KPluginFactory"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KPluginLoader"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KPluginMetaData"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KStaticPluginHelpers"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/plugin/kexportplugin.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/plugin/kpluginfactory.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/plugin/kpluginloader.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/plugin/kpluginmetadata.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/plugin/kstaticpluginhelpers.h"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KRandom"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KRandomSequence"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/randomness/krandom.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/randomness/krandomsequence.h"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KJsonUtils"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KFuzzyMatcher"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KMacroExpander"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KStringHandler"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KTextToHTML"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KTextToHTMLEmoticonsInterface"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/text/kjsonutils.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/text/kfuzzymatcher.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/text/kmacroexpander.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/text/kstringhandler.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/text/ktexttohtml.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/text/ktexttohtmlemoticonsinterface.h"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KFormat"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KOSRelease"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KUser"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KShell"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KProcessList"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KListOpenFilesJob"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/Kdelibs4Migration"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/Kdelibs4ConfigMigrator"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KLibexec"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KSignalHandler"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KRuntimePlatform"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KSandbox"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/KMemoryInfo"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/util/kformat.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/util/kosrelease.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/util/kuser.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/util/kshell.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/util/kprocesslist.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/util/klistopenfilesjob.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/util/kdelibs4migration.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/util/kdelibs4configmigrator.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/util/klibexec.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/util/ksignalhandler.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/util/kruntimeplatform.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/util/ksandbox.h"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/src/lib/util/kmemoryinfo.h"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/kcoreaddons_export.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/licenses/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/lib/qt_KCoreAddons.pri")
endif()

