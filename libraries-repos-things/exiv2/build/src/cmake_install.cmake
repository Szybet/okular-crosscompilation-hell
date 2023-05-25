# Install script for directory: /mnt/HDD/Project/Public/okulartry/exiv2/src

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
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexiv2.so.14.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexiv2.so.14"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/mnt/HDD/Project/Public/okulartry/exiv2/build/src/libexiv2.so.14.0.0"
    "/mnt/HDD/Project/Public/okulartry/exiv2/build/src/libexiv2.so.14"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexiv2.so.14.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexiv2.so.14"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexiv2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexiv2.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexiv2.so"
         RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/mnt/HDD/Project/Public/okulartry/exiv2/build/src/libexiv2.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexiv2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexiv2.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexiv2.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
         NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexiv2.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/exiv2" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/exiv2")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/exiv2"
         RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/mnt/HDD/Project/Public/okulartry/exiv2/build/bin/exiv2")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/exiv2" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/exiv2")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/exiv2"
         OLD_RPATH "/mnt/HDD/Project/Public/okulartry/exiv2/build/src:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
         NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/exiv2")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/exiv2" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/asfvideo.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/basicio.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/bmpimage.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/config.h"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/convert.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/cr2image.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/crwimage.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/datasets.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/easyaccess.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/epsimage.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/error.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/exif.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/exiv2.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/futils.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/gifimage.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/http.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/image.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/iptc.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/jp2image.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/jpgimage.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/matroskavideo.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/metadatum.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/mrwimage.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/orfimage.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/pgfimage.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/preview.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/properties.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/psdimage.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/quicktimevideo.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/rafimage.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/riffvideo.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/rw2image.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/tags.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/tgaimage.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/tiffimage.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/types.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/utilsvideo.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/value.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/version.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/xmp.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/xmpsidecar.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/utilsvideo.hpp"
    "/mnt/HDD/Project/Public/okulartry/exiv2/src/../include/exiv2/pngimage.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/man/man1" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/exiv2/src/exiv2.1")
endif()

