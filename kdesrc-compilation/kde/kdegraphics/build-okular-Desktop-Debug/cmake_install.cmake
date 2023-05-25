# Install script for directory: /home/szybet/kdesrc/kde/kdegraphics/okular

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
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
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/icons/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/part/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/shell/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/generators/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/autotests/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/doc/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/okular/core" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/action.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/annotations.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/area.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/document.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/fontinfo.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/form.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/generator.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/global.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/page.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/pagesize.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/pagetransition.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/signatureutils.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/sound.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/sourcereference.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/textdocumentgenerator.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/textdocumentsettings.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/textpage.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/tile.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/utils.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/fileprinter.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/printoptionswidget.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/core/observer.h"
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/core/version.h"
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/core/okularcore_export.h"
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/settings_core.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/okular/interfaces" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/okular/interfaces/configinterface.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/interfaces/guiinterface.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/interfaces/printinterface.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/interfaces/saveinterface.h"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/interfaces/viewerinterface.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so.10.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/bin/libOkular5Core.so.10.0.0"
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/bin/libOkular5Core.so.10"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so.10.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/bin/libOkular5Core.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOkular5Core.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/config.kcfg" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/conf/okular.kcfg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/config.kcfg" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/conf/okular_core.kcfg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservicetypes5" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/core/okularGenerator.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/okularpart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/okularpart.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/okularpart.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt/plugins" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/bin/okularpart.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/okularpart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/okularpart.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/okularpart.so"
         OLD_RPATH "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/bin:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/okularpart.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kconf_update" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/okular.upd")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/okular_part.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kxmlgui5/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/part.rc"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/part-viewermode.rc"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qlogging-categories5" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/okular.categories")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share" TYPE DIRECTORY FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/locale")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ca/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/ca/docs/okular/index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ca/docs/okular/index.docbook"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ca/docs/okular/bookmark-management.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ca/docs/okular/configure-annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ca/docs/okular/configure-backends.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ca/docs/okular/configure-editor.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ca/docs/okular/configure.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ca/docs/okular/mainwindow.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ca/docs/okular/presentation.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca/man1" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/ca/docs/okular/okular.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/de/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/de/docs/okular/index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/de/docs/okular/index.docbook"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/de/docs/okular/annotation-properties.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/de/docs/okular/configure-annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/de/docs/okular/configure-editor.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/de/docs/okular/configure.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/de/docs/okular/embedded-files-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/de/docs/okular/mainwindow.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/de/man1" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/de/docs/okular/okular.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/es/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/es/docs/okular/index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/es/docs/okular/index.docbook"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/es/docs/okular/configure.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/es/docs/okular/embedded-files-bar.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/es/man1" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/es/docs/okular/okular.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/et/man1" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/et/docs/okular/okular.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/fr/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/fr/docs/okular/index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/fr/docs/okular/index.docbook"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/fr/docs/okular/annotation-properties.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/fr/docs/okular/annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/fr/docs/okular/bookmark-management.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/fr/docs/okular/configure-annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/fr/docs/okular/configure-backends.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/fr/docs/okular/configure-editor.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/fr/docs/okular/configure.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/fr/docs/okular/forms-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/fr/docs/okular/mainwindow.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/fr/docs/okular/presentation.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/fr/man1" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/fr/docs/okular/okular.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/gl/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/gl/docs/okular/index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/gl/docs/okular/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/it/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/it/docs/okular/index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/it/docs/okular/index.docbook"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/it/docs/okular/annotation-properties.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/it/docs/okular/annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/it/docs/okular/bookmark-management.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/it/docs/okular/configure-annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/it/docs/okular/configure-backends.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/it/docs/okular/configure-editor.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/it/docs/okular/configure.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/it/docs/okular/embedded-files-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/it/docs/okular/forms-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/it/docs/okular/mainwindow.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/it/docs/okular/presentation.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/it/docs/okular/signatures-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/it/docs/okular/signatures-panel.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/it/man1" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/it/docs/okular/okular.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ja/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/ja/docs/okular/index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ja/docs/okular/index.docbook"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ja/docs/okular/configure.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ja/docs/okular/embedded-files-bar.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/nl/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/nl/docs/okular/index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/nl/docs/okular/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/nl/man1" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/nl/docs/okular/okular.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pl/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/pl/docs/okular/index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/index.docbook"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/annotation-properties.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/bookmark-management.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/configure-annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/configure-backends.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/configure-editor.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/configure.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/embedded-files-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/forms-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/mainwindow.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/presentation.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/rating.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/tool-ellipse-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/tool-highlighter-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/tool-ink-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/tool-line-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/tool-note-inline-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/tool-note-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/tool-polygon-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/tool-stamp-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pl/docs/okular/tool-underline-okular.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/pt/docs/okular/index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt/docs/okular/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt/man1" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/pt/docs/okular/okular.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt_BR/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/pt_BR/docs/okular/index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt_BR/docs/okular/index.docbook"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt_BR/docs/okular/annotation-properties.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt_BR/docs/okular/annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt_BR/docs/okular/bookmark-management.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt_BR/docs/okular/configure-annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt_BR/docs/okular/configure-backends.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt_BR/docs/okular/configure-editor.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt_BR/docs/okular/configure.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt_BR/docs/okular/embedded-files-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt_BR/docs/okular/forms-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt_BR/docs/okular/mainwindow.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt_BR/docs/okular/presentation.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt_BR/docs/okular/signatures-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/pt_BR/docs/okular/signatures-panel.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt_BR/man1" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/pt_BR/docs/okular/okular.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ru/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/ru/docs/okular/index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/index.docbook"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/annotation-properties.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/bookmark-management.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/configure-annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/configure-backends.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/configure-editor.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/configure.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/embedded-files-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/enhance-lowcontrast.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/enhance-shape.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/enhance-solid.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/enhance-thinline.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/forms-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/mainwindow.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/presentation.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/rating.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/tool-ellipse-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/tool-highlighter-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/tool-ink-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/tool-line-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/tool-note-inline-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/tool-note-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/tool-polygon-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/tool-stamp-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/ru/docs/okular/tool-underline-okular.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ru/man1" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/ru/docs/okular/okular.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sv/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/sv/docs/okular/index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/sv/docs/okular/index.docbook"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/sv/docs/okular/configure.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/sv/man1" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/sv/docs/okular/okular.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/uk/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/uk/docs/okular/index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/uk/docs/okular/index.docbook"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/uk/docs/okular/annotation-properties.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/uk/docs/okular/annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/uk/docs/okular/bookmark-management.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/uk/docs/okular/configure-annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/uk/docs/okular/configure-backends.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/uk/docs/okular/configure-editor.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/uk/docs/okular/configure.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/uk/docs/okular/embedded-files-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/uk/docs/okular/forms-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/uk/docs/okular/mainwindow.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/uk/docs/okular/signatures-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/po/uk/docs/okular/signatures-panel.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/uk/man1" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/po/uk/docs/okular/okular.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Okular5" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/Okular5Config.cmake"
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/Okular5ConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Okular5/Okular5Targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Okular5/Okular5Targets.cmake"
         "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/CMakeFiles/Export/f63aa603055556ba87124de80d14b750/Okular5Targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Okular5/Okular5Targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Okular5/Okular5Targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Okular5" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/CMakeFiles/Export/f63aa603055556ba87124de80d14b750/Okular5Targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Okular5" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/CMakeFiles/Export/f63aa603055556ba87124de80d14b750/Okular5Targets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/okular/pics" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/okular/core/stamps.svg")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-Debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
