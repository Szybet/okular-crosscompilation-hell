# Install script for directory: /home/szybet/kdesrc/frameworks/kwallet/src/api/KWallet

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KWallet" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwallet/src/api/KWallet/kwallet_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWallet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE RENAME "kf5_org.kde.KWallet.xml" FILES "/home/szybet/kdesrc/frameworks/kwallet/src/api/KWallet/org.kde.KWallet.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWallet" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Wallet.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Wallet.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kwallet/bin/libKF5Wallet.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kwallet/bin/libKF5Wallet.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Wallet.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Wallet.so.5"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWallet" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Wallet.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Wallet.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Wallet.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kwallet/bin/libKF5Wallet.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Wallet.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Wallet.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Wallet.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5Wallet.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KWallet" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kwallet/src/api/KWallet/kwallet_export.h"
    "/home/szybet/kdesrc/build/frameworks/kwallet/src/api/KWallet/KWallet"
    "/home/szybet/kdesrc/frameworks/kwallet/src/api/KWallet/kwallet.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Wallet" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kwallet/src/api/KWallet/KF5WalletConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/kwallet/src/api/KWallet/KF5WalletConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWallet" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Wallet/KF5WalletTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Wallet/KF5WalletTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kwallet/src/api/KWallet/CMakeFiles/Export/69b963e626210ac9cc8bffc2dfebf7ee/KF5WalletTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Wallet/KF5WalletTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Wallet/KF5WalletTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Wallet" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwallet/src/api/KWallet/CMakeFiles/Export/69b963e626210ac9cc8bffc2dfebf7ee/KF5WalletTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Wallet" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwallet/src/api/KWallet/CMakeFiles/Export/69b963e626210ac9cc8bffc2dfebf7ee/KF5WalletTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWallet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwallet/src/api/KWallet/qt_KWallet.pri")
endif()

