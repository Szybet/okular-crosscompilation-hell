# Install script for directory: /home/szybet/kdesrc/frameworks/threadweaver/src

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "ThreadWeaver" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ThreadWeaver.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ThreadWeaver.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/threadweaver/bin/libKF5ThreadWeaver.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/bin/libKF5ThreadWeaver.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ThreadWeaver.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ThreadWeaver.so.5"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "ThreadWeaver" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ThreadWeaver.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ThreadWeaver.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ThreadWeaver.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/threadweaver/bin/libKF5ThreadWeaver.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ThreadWeaver.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ThreadWeaver.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ThreadWeaver.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ThreadWeaver.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/ThreadWeaver/ThreadWeaver" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/ThreadWeaver"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/Weaver"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/WeaverInterface"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/QueueAPI"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/QueueStream"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/Queueing"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/Exception"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/QueueInterface"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/Queue"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/DebuggingAids"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/Thread"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/JobInterface"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/Job"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/IdDecorator"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/QObjectDecorator"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/Lambda"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/State"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/WeaverImplState"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/InConstructionState"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/WorkingHardState"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/SuspendingState"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/SuspendedState"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/ShuttingDownState"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/DestructedState"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/Collection"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/Sequence"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/Dependency"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/DependencyPolicy"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/ResourceRestrictionPolicy"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/QueueSignals"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/QueuePolicy"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/JobPointer"
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/ThreadWeaver/ManagedJobPointer"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/ThreadWeaver/threadweaver" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/threadweaver/src/threadweaver_export.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/threadweaver.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/weaver.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/weaverinterface.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/queueapi.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/queuestream.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/queueing.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/exception.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/queueinterface.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/queue.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/debuggingaids.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/thread.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/jobinterface.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/job.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/iddecorator.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/qobjectdecorator.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/lambda.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/state.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/weaverimplstate.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/inconstructionstate.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/workinghardstate.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/suspendingstate.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/suspendedstate.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/shuttingdownstate.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/destructedstate.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/collection.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/sequence.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/dependency.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/dependencypolicy.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/resourcerestrictionpolicy.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/queuesignals.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/queuepolicy.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/jobpointer.h"
    "/home/szybet/kdesrc/frameworks/threadweaver/src/managedjobpointer.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "ThreadWeaver" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/threadweaver/src/qt_ThreadWeaver.pri")
endif()

