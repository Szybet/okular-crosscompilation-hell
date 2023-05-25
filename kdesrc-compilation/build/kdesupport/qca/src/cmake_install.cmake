# Install script for directory: /home/szybet/kdesrc/kdesupport/qca/src

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
      "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/libqca-qt5.so.2.3.6"
      "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/libqca-qt5.so.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/mnt/HDD/Project/Public/okulartry/okular-things/lib/libqca-qt5.so.2.3.6;/mnt/HDD/Project/Public/okulartry/okular-things/lib/libqca-qt5.so.2")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/mnt/HDD/Project/Public/okulartry/okular-things/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/kdesupport/qca/lib/libqca-qt5.so.2.3.6"
    "/home/szybet/kdesrc/build/kdesupport/qca/lib/libqca-qt5.so.2"
    )
  foreach(file
      "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/libqca-qt5.so.2.3.6"
      "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/libqca-qt5.so.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/libqca-qt5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/libqca-qt5.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/libqca-qt5.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/mnt/HDD/Project/Public/okulartry/okular-things/lib/libqca-qt5.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/mnt/HDD/Project/Public/okulartry/okular-things/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/kdesupport/qca/lib/libqca-qt5.so")
  if(EXISTS "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/libqca-qt5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/libqca-qt5.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/libqca-qt5.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/libqca-qt5.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qca.h;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qcaprovider.h;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/QtCrypto;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qca_support.h;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qca_tools.h;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qca_core.h;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qca_textfilter.h;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qca_basic.h;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qca_publickey.h;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qca_cert.h;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qca_keystore.h;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qca_securelayer.h;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qca_securemessage.h;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qca_version.h;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qpipe.h;/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto/qca_safetimer.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/mnt/HDD/Project/Public/okulartry/okular-things/include/Qca-qt5/QtCrypto" TYPE FILE FILES
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/qca.h"
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/qcaprovider.h"
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/QtCrypto"
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/qca_support.h"
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/qca_tools.h"
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/qca_core.h"
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/qca_textfilter.h"
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/qca_basic.h"
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/qca_publickey.h"
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/qca_cert.h"
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/qca_keystore.h"
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/qca_securelayer.h"
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/qca_securemessage.h"
    "/home/szybet/kdesrc/build/kdesupport/qca/qca_version.h"
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/qpipe.h"
    "/home/szybet/kdesrc/kdesupport/qca/include/QtCrypto/qca_safetimer.h"
    )
endif()

