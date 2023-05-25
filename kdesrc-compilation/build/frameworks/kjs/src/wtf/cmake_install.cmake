# Install script for directory: /home/szybet/kdesrc/frameworks/kjs/src/wtf

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/wtf" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/AlwaysInline.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/ASCIICType.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/Assertions.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/DisallowCType.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/FastMalloc.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/Forward.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/GetPtr.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/HashCountedSet.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/HashFunctions.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/HashIterators.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/HashMap.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/HashSet.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/HashTable.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/HashTraits.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/ListRefPtr.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/MathExtras.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/Noncopyable.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/OwnArrayPtr.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/OwnPtr.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/PassRefPtr.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/Platform.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/RefCounted.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/RefPtr.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/RefPtrHashMap.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/SharedPtr.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/UnusedParam.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/Vector.h"
    "/home/szybet/kdesrc/frameworks/kjs/src/wtf/VectorTraits.h"
    )
endif()

