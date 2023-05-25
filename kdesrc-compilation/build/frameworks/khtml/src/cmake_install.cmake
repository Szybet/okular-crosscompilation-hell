# Install script for directory: /home/szybet/kdesrc/frameworks/khtml/src

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/khtml/src/css/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/khtml/src/kmultipart/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KHtml" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmlpart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmlpart.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmlpart.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts" TYPE MODULE FILES "/home/szybet/kdesrc/build/frameworks/khtml/bin/khtmlpart.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmlpart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmlpart.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmlpart.so"
         OLD_RPATH "/home/szybet/kdesrc/build/frameworks/khtml/bin:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/mnt/HDD/Project/Public/okulartry/okular-things/lib:"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmlpart.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KHtml" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmlimagepart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmlimagepart.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmlimagepart.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts" TYPE MODULE FILES "/home/szybet/kdesrc/build/frameworks/khtml/bin/khtmlimagepart.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmlimagepart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmlimagepart.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmlimagepart.so"
         OLD_RPATH "/home/szybet/kdesrc/build/frameworks/khtml/bin:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/mnt/HDD/Project/Public/okulartry/okular-things/lib:"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmlimagepart.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KHtml" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmladaptorpart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmladaptorpart.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmladaptorpart.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts" TYPE MODULE FILES "/home/szybet/kdesrc/build/frameworks/khtml/bin/khtmladaptorpart.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmladaptorpart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmladaptorpart.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmladaptorpart.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/mnt/HDD/Project/Public/okulartry/okular-things/lib:"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plugins/kf5/parts/khtmladaptorpart.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KHtml" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KHtml.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KHtml.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/usr/local/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/khtml/bin/libKF5KHtml.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/khtml/bin/libKF5KHtml.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KHtml.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KHtml.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/usr/local/lib:"
           NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/usr/local/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KHtml" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KHtml.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KHtml.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KHtml.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/usr/local/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/khtml/bin/libKF5KHtml.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KHtml.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KHtml.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KHtml.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/usr/local/lib:"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/usr/local/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KHtml.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KHtml" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/khtml/src/khtml_export.h"
    "/home/szybet/kdesrc/build/frameworks/khtml/src/khtml_debug.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/khtml_part.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/khtml_events.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/khtml_settings.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/khtmldefaults.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/misc/kencodingdetector.h"
    "/home/szybet/kdesrc/build/frameworks/khtml/src/KHTMLPart"
    "/home/szybet/kdesrc/build/frameworks/khtml/src/KHTMLView"
    "/home/szybet/kdesrc/build/frameworks/khtml/src/KHTMLSettings"
    "/home/szybet/kdesrc/frameworks/khtml/src/khtmlpart.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/khtmlview.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/khtmlsettings.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KHtml/dom" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/dom_exception.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/html_base.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/html_inline.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/css_rule.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/dom_html.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/html_block.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/html_list.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/css_stylesheet.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/dom_misc.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/html_document.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/html_misc.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/css_value.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/dom_node.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/html_element.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/html_object.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/dom_core.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/dom_string.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/html_form.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/html_table.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/dom_doc.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/dom_text.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/html_head.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/dom_element.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/dom_xml.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/html_image.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/dom2_range.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/dom2_traversal.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/dom2_events.h"
    "/home/szybet/kdesrc/frameworks/khtml/src/dom/dom2_views.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KHtml" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qlogging-categories5" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/khtml/src/khtml.categories"
    "/home/szybet/kdesrc/build/frameworks/khtml/src/khtml.renamecategories"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KHtml" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/khtml/src/khtml.desktop"
    "/home/szybet/kdesrc/frameworks/khtml/src/khtmlimage.desktop"
    "/home/szybet/kdesrc/frameworks/khtml/src/khtmladaptorpart.desktop"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KHtml" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/khtml" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/khtml/src/error.html")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KHtml" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/xdg" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/khtml/src/khtmlrc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KHtml" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/khtml/src/qt_KHtml.pri")
endif()

