# Install script for directory: /home/szybet/kdesrc/kde/kdegraphics/okular/part/data

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/okular" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tools.xml"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/toolsQuick.xml"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/drawingtools.xml"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/okular/pics" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tool-base-okular.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tool-base-okular@2x.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tool-highlighter-okular-colorizable.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tool-highlighter-okular-colorizable@2x.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tool-ink-okular-colorizable.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tool-ink-okular-colorizable@2x.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tool-note.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tool-note-okular-colorizable.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tool-note-okular-colorizable@2x.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tool-note-inline.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tool-note-inline-okular-colorizable.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tool-note-inline-okular-colorizable@2x.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tool-typewriter-okular-colorizable.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/tool-typewriter-okular-colorizable@2x.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "okular" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/okular/pics" TYPE FILE FILES
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/checkmark.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/circle.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/comment.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/cross.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/help.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/insert.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/key.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/newparagraph.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/note.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/paperclip.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/paragraph.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/pushpin.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/rightarrow.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/rightpointer.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/star.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/uparrow.png"
    "/home/szybet/kdesrc/kde/kdegraphics/okular/part/data/upleftarrow.png"
    )
endif()

