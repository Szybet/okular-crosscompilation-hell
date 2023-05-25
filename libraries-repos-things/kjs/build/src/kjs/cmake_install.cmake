# Install script for directory: /mnt/HDD/Project/Public/okulartry/kjs/src/kjs

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJS" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/mnt/HDD/Project/Public/okulartry/kjs/build/bin/libKF5JS.so.5.107.0"
    "/mnt/HDD/Project/Public/okulartry/kjs/build/bin/libKF5JS.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
           NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJS" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so"
         RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/mnt/HDD/Project/Public/okulartry/kjs/build/bin/libKF5JS.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so"
         OLD_RPATH "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJS" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kjs5" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kjs5")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kjs5"
         RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/mnt/HDD/Project/Public/okulartry/kjs/build/bin/kjs5")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kjs5" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kjs5")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kjs5"
         OLD_RPATH "/mnt/HDD/Project/Public/okulartry/kjs/build/bin:::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kjs5")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/mnt/HDD/Project/Public/okulartry/kjs/build/src/kjs/api/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/kjs" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/array_instance.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/array_object.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/bool_object.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/collector.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/CommonIdentifiers.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/commonunicode.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/CompileState.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/completion.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/context.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/date_object.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/debugger.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/dtoa.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/error_object.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/ExecState.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/function.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/function_object.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/grammar.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/identifier.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/internal.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/interpreter.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/JSImmediate.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/JSLock.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/jsonlexer.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/json_object.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/jsonstringify.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/JSType.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/JSVariableObject.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/JSWrapperObject.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/lexer.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/list.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/LocalStorage.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/lookup.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/makenodes.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/math_object.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/nodes2bytecode.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/nodes.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/number_object.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/object.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/object_object.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/operations.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/package.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/Parser.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/propertydescriptor.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/property_map.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/PropertyNameArray.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/property_slot.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/protect.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/regexp.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/regexp_object.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/SavedBuiltins.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/scope_chain.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/scriptfunction.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/string_object.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/SymbolTable.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/types.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/ustring.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/value.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/build/src/kjs/global.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJS" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kjs" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kjs/src/kjs/create_hash_table")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJS" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kjs/build/src/kjs/qt_KJS.pri")
endif()

