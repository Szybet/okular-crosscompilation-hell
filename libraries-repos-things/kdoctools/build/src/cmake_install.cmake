# Install script for directory: /mnt/HDD/Project/Public/okulartry/kdoctools/src

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/dtd" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/dtd/kdedbx45.dtd")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KDocTools" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kdoctools/src/docbookxslt.h"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/kdoctools_export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5DocTools.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5DocTools.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/mnt/HDD/Project/Public/okulartry/kdoctools/build/bin/libKF5DocTools.so.5.107.0"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/build/bin/libKF5DocTools.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5DocTools.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5DocTools.so.5"
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5DocTools.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5DocTools.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5DocTools.so"
         RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/bin/libKF5DocTools.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5DocTools.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5DocTools.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5DocTools.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
         NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5DocTools.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/meinproc5" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/meinproc5")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/meinproc5"
         RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/bin/meinproc5")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/meinproc5" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/meinproc5")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/meinproc5"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
         NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/meinproc5")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/kde-include-common.xsl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/kde-include-man.xsl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization//kde-chunk-common.xsl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization//kde-chunk-online.xsl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization//kde-chunk.xsl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization//kde-navig-online.xsl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization//kde-navig.xsl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization//kde-nochunk.xsl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization//kde-style.xsl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization//kde-ttlpg-online.xsl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization//kde-ttlpg.xsl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization//kde-web-navig.xsl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization//kde-web.xsl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization//README")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization//catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/af" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/af/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/contributor.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/bg" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/bg/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//ccbysa4-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//underCCBYSA4.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//ccbysa4-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//underCCBYSA4.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ca@valencia" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ca@valencia/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/cs" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/cs/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/da" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/da/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/de" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/de/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/el" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/el/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en-GB" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en-GB/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//ccbysa4-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//underCCBYSA4.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/en" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/en/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/eo" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/eo/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//ccbysa4-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//underCCBYSA4.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/es" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/es/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/et" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/et/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fi" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fi/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/contributor.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fo" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fo/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/fr" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/fr/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/contributor.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/gl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/gl/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/he" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/he/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/hu" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/hu/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//ccbysa4-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//underCCBYSA4.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/id" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/id/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/it" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/it/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ja" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ja/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//ccbysa4-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//underCCBYSA4.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ko" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ko/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/contributor.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/lt" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/lt/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nds" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nds/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nl/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/nn" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/nn/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/no" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/no/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pl/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/contributor.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt-BR" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt-BR/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/contributor.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/pt" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/pt/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ro" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ro/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//ccbysa4-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//underCCBYSA4.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/ru" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/ru/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sk" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sk/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sl/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sq" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sq/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@latin" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@latin/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavian" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavian/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sr@ijekavianlatin" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sr@ijekavianlatin/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/sv" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/sv/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/th" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/th/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/tr" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/tr/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//ccbysa4-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//underCCBYSA4.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/uk" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/uk/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/contributor.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/wa" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/wa/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/contributor.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xh" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xh/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/contributor.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xx" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xx/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/entities//underLGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-CN" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-CN/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/lang.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/strings.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/user.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/entities//fdl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/entities//gpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/entities//help-menu.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/entities//install-compile.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/entities//install-intro.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/entities//lgpl-notice.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/entities//report-bugs.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/entities//underArtisticLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/entities//underBSDLicense.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/entities//underFDL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/entities//underGPL.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/entities//underX11License.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/entities//update-doc.docbook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/zh-TW" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/zh-TW/catalog.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/dtd" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/dtd//modifications.elements")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/dtd" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/dtd//rdbhier2.elements")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/dtd" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/dtd//rdbpool.elements")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/entities/contributor.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/entities/general.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/entities" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/entities/l10n.entities")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/README")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/ca.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/ca_valencia.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/cs.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/de.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/el.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/en.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/es.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/et.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/fr.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/gl.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/hu.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/id.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/it.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/ko.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/lt.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/nds.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/nl.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/nn.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/pl.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/pt.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/pt_br.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/ru.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/sl.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/sr.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/sr_ijekavian.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/sr_ijekavianlatin.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/sr_latin.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/sv.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/tr.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/uk.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kdoctools/customization/xsl" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/src/customization/xsl/all-l10n.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/checkXML5" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/checkXML5")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/checkXML5"
         RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/build/bin/checkXML5")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/checkXML5" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/checkXML5")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/checkXML5"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
         NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/checkXML5")
    endif()
  endif()
endif()

