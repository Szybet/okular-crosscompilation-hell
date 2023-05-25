# Install script for directory: /home/szybet/kdesrc/kdesupport/phonon/phonon

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so.4.11.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so.4"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/kdesupport/phonon/bin/libphonon4qt5.so.4.11.1"
    "/home/szybet/kdesrc/build/kdesupport/phonon/bin/libphonon4qt5.so.4"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so.4.11.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so.4"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Phonon" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/kdesupport/phonon/bin/libphonon4qt5.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libphonon4qt5.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/phonon4qt5/phonon" TYPE FILE FILES
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/abstractaudiooutput.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/abstractmediastream.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/abstractvideooutput.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/addoninterface.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/audiodataoutput.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/audiodataoutputinterface.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/audiooutput.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/audiooutputinterface.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/backendcapabilities.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/backendinterface.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/effect.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/effectinterface.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/effectparameter.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/effectwidget.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/globalconfig.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/globaldescriptioncontainer.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/mediacontroller.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/medianode.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/mediaobject.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/mediaobjectinterface.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/mediasource.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/mrl.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/objectdescription.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/objectdescriptionmodel.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/path.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/phonon_export.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/phonondefs.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/platformplugin.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/pulsesupport.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/seekslider.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/streaminterface.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/videoplayer.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/videowidget.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/videowidgetinterface.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/volumefadereffect.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/volumefaderinterface.h"
    "/home/szybet/kdesrc/kdesupport/phonon/phonon/volumeslider.h"
    "/home/szybet/kdesrc/build/kdesupport/phonon/phonon/phononnamespace.h"
    "/home/szybet/kdesrc/build/kdesupport/phonon/phonon/phonon_version.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/szybet/kdesrc/build/kdesupport/phonon/phonon/experimental/cmake_install.cmake")

endif()

