# Install script for directory: /home/szybet/kdesrc/kdesupport/qca/plugins/qca-botan

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
  if(EXISTS "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/qca-qt5/crypto/libqca-botan.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/qca-qt5/crypto/libqca-botan.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/qca-qt5/crypto/libqca-botan.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/mnt/HDD/Project/Public/okulartry/okular-things/lib/qca-qt5/crypto/libqca-botan.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/mnt/HDD/Project/Public/okulartry/okular-things/lib/qca-qt5/crypto" TYPE MODULE FILES "/home/szybet/kdesrc/build/kdesupport/qca/lib/qca-qt5/crypto/libqca-botan.so")
  if(EXISTS "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/qca-qt5/crypto/libqca-botan.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/qca-qt5/crypto/libqca-botan.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/qca-qt5/crypto/libqca-botan.so"
         OLD_RPATH "/home/szybet/kdesrc/build/kdesupport/qca/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}/mnt/HDD/Project/Public/okulartry/okular-things/lib/qca-qt5/crypto/libqca-botan.so")
    endif()
  endif()
endif()

