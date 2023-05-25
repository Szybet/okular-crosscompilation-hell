# Install script for directory: /home/szybet/kdesrc/frameworks/kjs/src/kjs

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJS" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kjs/bin/libKF5JS.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kjs/bin/libKF5JS.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH ":::::::::::::::::::::::::::::::::::::::::::::::::::"
           NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib")
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
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kjs/bin/libKF5JS.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5JS.so"
         OLD_RPATH ":::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib")
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
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/szybet/kdesrc/build/frameworks/kjs/bin/kjs5")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kjs5" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kjs5")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kjs5"
         OLD_RPATH "/home/szybet/kdesrc/build/frameworks/kjs/bin:::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kjs5")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kjs/src/kjs/api/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/kjs" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/array_instance.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/array_object.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/bool_object.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/collector.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/CommonIdentifiers.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/commonunicode.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/CompileState.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/completion.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/context.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/date_object.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/debugger.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/dtoa.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/error_object.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/ExecState.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/function.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/function_object.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/grammar.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/identifier.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/internal.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/interpreter.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/JSImmediate.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/JSLock.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/jsonlexer.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/json_object.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/jsonstringify.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/JSType.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/JSVariableObject.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/JSWrapperObject.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/lexer.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/list.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/LocalStorage.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/lookup.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/makenodes.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/math_object.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/nodes2bytecode.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/nodes.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/number_object.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/object.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/object_object.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/operations.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/package.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/Parser.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/propertydescriptor.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/property_map.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/PropertyNameArray.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/property_slot.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/protect.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/regexp.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/regexp_object.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/SavedBuiltins.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/scope_chain.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/scriptfunction.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/string_object.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/SymbolTable.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/types.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/ustring.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/kjs/value.h"
    "/home/szybet/kdesrc/build/frameworks/kjs/src/kjs/global.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJS" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kjs" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kjs/src/kjs/create_hash_table")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJS" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjs/src/kjs/qt_KJS.pri")
endif()

