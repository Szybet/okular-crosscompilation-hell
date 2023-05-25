# Install script for directory: /mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5experimental.so.4.11.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5experimental.so.4"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/mnt/HDD/Project/Public/okulartry/phonon/build/bin/libphonon4qt5experimental.so.4.11.1"
    "/mnt/HDD/Project/Public/okulartry/phonon/build/bin/libphonon4qt5experimental.so.4"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5experimental.so.4.11.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5experimental.so.4"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/mnt/HDD/Project/Public/okulartry/phonon/build/bin:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
           NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5experimental.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5experimental.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5experimental.so"
         RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/mnt/HDD/Project/Public/okulartry/phonon/build/bin/libphonon4qt5experimental.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5experimental.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5experimental.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5experimental.so"
         OLD_RPATH "/mnt/HDD/Project/Public/okulartry/phonon/build/bin:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
         NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5experimental.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/phonon4qt5/phonon/experimental" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/abstractaudiodataoutput.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/abstractvideodataoutput.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/audiodataoutput.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/audiodataoutputinterface.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/audioformat.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/avcapture.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/avcaptureinterface.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/backendcapabilities.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/backendinterface.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/export.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/mediasource.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/objectdescription.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/snapshotinterface.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/packet.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/packetpool.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/phononnamespace.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/videodataoutput.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/videodataoutput2.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/videodataoutputinterface.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/videoframe.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/videoframe2.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/videowidget.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/visualization.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/experimental/globalconfig.h"
    )
endif()

