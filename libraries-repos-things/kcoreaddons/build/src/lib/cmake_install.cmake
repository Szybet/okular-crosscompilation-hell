# Install script for directory: /mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib

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
           RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/bin/libKF5CoreAddons.so.5.107.0"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/bin/libKF5CoreAddons.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so.5"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so"
         RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/bin/libKF5CoreAddons.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
         NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5CoreAddons.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KCoreAddons" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KAboutData"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KCoreAddons"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/kaboutdata.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/kcoreaddons.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KSharedDataCache"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/caching/kshareddatacache.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KAutoSaveFile"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KDirWatch"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KMessage"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KProcess"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KBackup"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KUrlMimeData"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KFileSystemType"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KFileUtils"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KNetworkMounts"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/io/kautosavefile.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/io/kdirwatch.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/io/kmessage.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/io/kprocess.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/io/kbackup.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/io/kurlmimedata.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/io/kfilesystemtype.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/io/kfileutils.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/io/knetworkmounts.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KCompositeJob"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KJob"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KJobTrackerInterface"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KJobUiDelegate"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/jobs/kcompositejob.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/jobs/kjob.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/jobs/kjobtrackerinterface.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/jobs/kjobuidelegate.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KExportPlugin"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KPluginFactory"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KPluginLoader"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KPluginMetaData"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KStaticPluginHelpers"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/plugin/kexportplugin.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/plugin/kpluginfactory.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/plugin/kpluginloader.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/plugin/kpluginmetadata.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/plugin/kstaticpluginhelpers.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KRandom"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KRandomSequence"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/randomness/krandom.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/randomness/krandomsequence.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KJsonUtils"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KFuzzyMatcher"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KMacroExpander"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KStringHandler"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KTextToHTML"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KTextToHTMLEmoticonsInterface"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/text/kjsonutils.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/text/kfuzzymatcher.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/text/kmacroexpander.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/text/kstringhandler.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/text/ktexttohtml.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/text/ktexttohtmlemoticonsinterface.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KFormat"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KOSRelease"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KUser"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KShell"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KProcessList"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KListOpenFilesJob"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/Kdelibs4Migration"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/Kdelibs4ConfigMigrator"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KLibexec"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KSignalHandler"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KRuntimePlatform"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KSandbox"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/KMemoryInfo"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/util/kformat.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/util/kosrelease.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/util/kuser.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/util/kshell.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/util/kprocesslist.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/util/klistopenfilesjob.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/util/kdelibs4migration.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/util/kdelibs4configmigrator.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/util/klibexec.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/util/ksignalhandler.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/util/kruntimeplatform.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/util/ksandbox.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/src/lib/util/kmemoryinfo.h"
    "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/kcoreaddons_export.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/licenses/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kcoreaddons/build/src/lib/qt_KCoreAddons.pri")
endif()

