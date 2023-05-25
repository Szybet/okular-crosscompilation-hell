# Install script for directory: /mnt/HDD/Project/Public/okulartry/kjs/src/wtf

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/wtf" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/AlwaysInline.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/ASCIICType.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/Assertions.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/DisallowCType.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/FastMalloc.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/Forward.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/GetPtr.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/HashCountedSet.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/HashFunctions.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/HashIterators.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/HashMap.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/HashSet.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/HashTable.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/HashTraits.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/ListRefPtr.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/MathExtras.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/Noncopyable.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/OwnArrayPtr.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/OwnPtr.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/PassRefPtr.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/Platform.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/RefCounted.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/RefPtr.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/RefPtrHashMap.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/SharedPtr.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/UnusedParam.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/Vector.h"
    "/mnt/HDD/Project/Public/okulartry/kjs/src/wtf/VectorTraits.h"
    )
endif()

