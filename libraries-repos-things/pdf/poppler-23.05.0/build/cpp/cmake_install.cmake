# Install script for directory: /mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/cpp

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/build/cpp/tests/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpoppler-cpp.so.0.11.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpoppler-cpp.so.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/build/cpp/libpoppler-cpp.so.0.11.0"
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/build/cpp/libpoppler-cpp.so.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpoppler-cpp.so.0.11.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpoppler-cpp.so.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/build:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpoppler-cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpoppler-cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpoppler-cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/build/cpp/libpoppler-cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpoppler-cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpoppler-cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpoppler-cpp.so"
         OLD_RPATH "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpoppler-cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/poppler/cpp" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/cpp/poppler-destination.h"
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/cpp/poppler-document.h"
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/cpp/poppler-embedded-file.h"
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/cpp/poppler-font.h"
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/cpp/poppler-font-private.h"
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/cpp/poppler-global.h"
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/cpp/poppler-image.h"
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/cpp/poppler-page.h"
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/cpp/poppler-page-renderer.h"
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/cpp/poppler-page-transition.h"
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/cpp/poppler-rectangle.h"
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/cpp/poppler-toc.h"
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/build/cpp/poppler_cpp_export.h"
    "/mnt/HDD/Project/Public/okulartry/pdf/poppler-23.05.0/build/cpp/poppler-version.h"
    )
endif()

