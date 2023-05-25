# Install script for directory: /home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src

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
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "PlasmaWaylandProtocols" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plasma-wayland-protocols" TYPE FILE FILES
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/appmenu.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/blur.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/contrast.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/dpms.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/fake-input.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/fullscreen-shell.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/idle.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/keystate.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/outputdevice.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/output-management.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/kde-lockscreen-overlay-v1.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/kde-primary-output-v1.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/kde-output-device-v2.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/kde-output-management-v2.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/plasma-shell.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/plasma-virtual-desktop.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/plasma-window-management.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/remote-access.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/server-decoration-palette.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/server-decoration.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/shadow.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/slide.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/surface-extension.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/text-input-unstable-v2.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/text-input.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/wayland-eglstream-controller.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/zkde-screencast-unstable-v1.xml"
    "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/kde-output-order-v1.xml"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "PlasmaWaylandProtocols" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plasma-wayland-protocols" TYPE FILE RENAME "screencast.xml" FILES "/home/szybet/kdesrc/kdesupport/plasma-wayland-protocols/src/protocols/zkde-screencast-unstable-v1.xml")
endif()

