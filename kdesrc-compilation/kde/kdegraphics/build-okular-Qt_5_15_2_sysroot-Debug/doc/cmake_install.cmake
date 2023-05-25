# Install script for directory: /home/szybet/kdesrc/kde/kdegraphics/okular/doc

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot")
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
  set(CMAKE_OBJDUMP "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/en/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/doc//index.cache.bz2"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./index.docbook"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./annotation-properties.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./bookmark-management.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./bookmarks.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./config-pdf-digital-signatures.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./configure-annotations.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./configure-backends.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./configure-editor.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./configure.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./embedded-files-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./enhance-lowcontrast.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./enhance-shape.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./enhance-solid.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./enhance-thinline.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./forms-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./mainwindow.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./presentation.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./signatures-bar.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./signatures-panel.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-draw-arrow.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-draw-ellipse.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-draw-freehand.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-draw-highlight.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-draw-line.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-draw-polyline.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-draw-rectangle.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-edit-comment.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-edit-line-width.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-edit-opacity.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-favorite.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-fill-color.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-font-face.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-format-text-color.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-format-text-strikethrough.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-format-text-underline-squiggle.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-format-text-underline.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-note.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-pin.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-settings-configure.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-tag.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-tool-text.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/doc/./tool-window-pin.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/doc//okular.1")
endif()

