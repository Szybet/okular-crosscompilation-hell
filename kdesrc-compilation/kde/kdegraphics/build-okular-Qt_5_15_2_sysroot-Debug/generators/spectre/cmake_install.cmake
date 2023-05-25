# Install script for directory: /home/szybet/kdesrc/kde/kdegraphics/okular/generators/spectre

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot")
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
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/generators/spectre/conf/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/plugins/okular/generators/okularGenerator_ghostview.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/plugins/okular/generators/okularGenerator_ghostview.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/plugins/okular/generators/okularGenerator_ghostview.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/plugins/okular/generators" TYPE MODULE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/bin/plugins/okular/okularGenerator_ghostview.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/plugins/okular/generators/okularGenerator_ghostview.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/plugins/okular/generators/okularGenerator_ghostview.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/plugins/okular/generators/okularGenerator_ghostview.so"
         OLD_RPATH "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/bin:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/plugins/okular/generators/okularGenerator_ghostview.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE PROGRAM FILES
    "/home/szybet/kdesrc/kde/kdegraphics/okular/generators/spectre/okularApplication_ghostview.desktop"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/generators/spectre/org.kde.mobile.okular_ghostview.desktop"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/generators/spectre/okularGhostview.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/okular/icons/hicolor/16x16/apps" TYPE FILE RENAME "okular-gv.png" FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/generators/spectre/16-apps-okular-gv.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/okular/icons/hicolor/32x32/apps" TYPE FILE RENAME "okular-gv.png" FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/generators/spectre/32-apps-okular-gv.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/okular/icons/hicolor")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /sbin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /sbin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/okular/icons/hicolor")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/metainfo" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/generators/spectre/org.kde.okular-spectre.metainfo.xml")
endif()

