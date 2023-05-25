# Install script for directory: /home/szybet/kdesrc/kde/kdegraphics/okular

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
  include("/home/szybet/kdesrc/build/kde/kdegraphics/okular/icons/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/kde/kdegraphics/okular/part/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/kde/kdegraphics/okular/shell/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/kde/kdegraphics/okular/generators/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/okular/core" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/action.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/annotations.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/area.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/document.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/fontinfo.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/form.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/generator.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/global.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/page.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/pagesize.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/pagetransition.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/signatureutils.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/sound.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/sourcereference.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/textdocumentgenerator.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/textdocumentsettings.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/textpage.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/tile.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/utils.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/fileprinter.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/printoptionswidget.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/observer.h"
    "/home/szybet/kdesrc/build/kde/kdegraphics/okular/core/version.h"
    "/home/szybet/kdesrc/build/kde/kdegraphics/okular/core/okularcore_export.h"
    "/home/szybet/kdesrc/build/kde/kdegraphics/okular/settings_core.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/okular/interfaces" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/okular/interfaces/configinterface.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/interfaces/guiinterface.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/interfaces/printinterface.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/interfaces/saveinterface.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/interfaces/viewerinterface.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so.10.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/kde/kdegraphics/okular/bin/libOkular5Core.so.10.0.0"
    "/home/szybet/kdesrc/build/kde/kdegraphics/okular/bin/libOkular5Core.so.10"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so.10.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so.10"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/kde/kdegraphics/okular/bin/libOkular5Core.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/mnt/HDD/Project/Public/okulartry/okular-things/lib:"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/config.kcfg" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/conf/okular.kcfg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/config.kcfg" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/conf/okular_core.kcfg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservicetypes5" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/core/okularGenerator.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/okularpart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/okularpart.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/okularpart.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/plugins" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/kde/kdegraphics/okular/bin/okularpart.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/okularpart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/okularpart.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/okularpart.so"
         OLD_RPATH "/home/szybet/kdesrc/build/kde/kdegraphics/okular/bin:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/mnt/HDD/Project/Public/okulartry/okular-things/lib:"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/okularpart.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kconf_update" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/okular.upd")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/okular_part.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kxmlgui5/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/part.rc"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/part-viewermode.rc"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qlogging-categories5" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/okular.categories")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share" TYPE DIRECTORY FILES "/home/szybet/kdesrc/build/kde/kdegraphics/okular/locale")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Okular5" TYPE FILE FILES
    "/home/szybet/kdesrc/build/kde/kdegraphics/okular/Okular5Config.cmake"
    "/home/szybet/kdesrc/build/kde/kdegraphics/okular/Okular5ConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Okular5/Okular5Targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Okular5/Okular5Targets.cmake"
         "/home/szybet/kdesrc/build/kde/kdegraphics/okular/CMakeFiles/Export/f63aa603055556ba87124de80d14b750/Okular5Targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Okular5/Okular5Targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Okular5/Okular5Targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Okular5" TYPE FILE FILES "/home/szybet/kdesrc/build/kde/kdegraphics/okular/CMakeFiles/Export/f63aa603055556ba87124de80d14b750/Okular5Targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Okular5" TYPE FILE FILES "/home/szybet/kdesrc/build/kde/kdegraphics/okular/CMakeFiles/Export/f63aa603055556ba87124de80d14b750/Okular5Targets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/okular/pics" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/core/stamps.svg")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/kde/kdegraphics/okular/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
