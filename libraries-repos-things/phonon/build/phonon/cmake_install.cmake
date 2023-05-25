# Install script for directory: /mnt/HDD/Project/Public/okulartry/phonon/phonon

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so.4.11.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so.4"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/mnt/HDD/Project/Public/okulartry/phonon/build/bin/libphonon4qt5.so.4.11.1"
    "/mnt/HDD/Project/Public/okulartry/phonon/build/bin/libphonon4qt5.so.4"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so.4.11.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so.4"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so"
         RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/mnt/HDD/Project/Public/okulartry/phonon/build/bin/libphonon4qt5.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
         NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/phonon4qt5/phonon" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/abstractaudiooutput.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/abstractmediastream.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/abstractvideooutput.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/addoninterface.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/audiodataoutput.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/audiodataoutputinterface.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/audiooutput.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/audiooutputinterface.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/backendcapabilities.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/backendinterface.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/effect.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/effectinterface.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/effectparameter.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/effectwidget.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/globalconfig.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/globaldescriptioncontainer.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/mediacontroller.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/medianode.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/mediaobject.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/mediaobjectinterface.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/mediasource.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/mrl.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/objectdescription.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/objectdescriptionmodel.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/path.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/phonon_export.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/phonondefs.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/platformplugin.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/pulsesupport.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/seekslider.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/streaminterface.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/videoplayer.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/videowidget.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/videowidgetinterface.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/volumefadereffect.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/volumefaderinterface.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/phonon/volumeslider.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/build/phonon/phononnamespace.h"
    "/mnt/HDD/Project/Public/okulartry/phonon/build/phonon/phonon_version.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/mnt/HDD/Project/Public/okulartry/phonon/build/phonon/experimental/cmake_install.cmake")

endif()

