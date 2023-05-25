# Install script for directory: /mnt/HDD/Project/Public/okulartry/kwindowsystem

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
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/af/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/af/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ar/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/as/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/as/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/be/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be@latin/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/be@latin/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/bg/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/bn/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn_IN/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/bn_IN/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/br/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/br/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/bs/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ca/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ca@valencia/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/crh/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/crh/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/cs/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/csb/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/csb/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cy/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/cy/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/da/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/de/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/el/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/en_GB/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/eo/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/es/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/et/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/eu/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fa/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/fa/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/fi/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/fr/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fy/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/fy/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ga/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gd/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/gd/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/gl/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gu/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/gu/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ha/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ha/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/he/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/hi/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hne/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/hne/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/hr/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hsb/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/hsb/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/hu/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hy/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/hy/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ia/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/id/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/is/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/it/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ja/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ka/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/kk/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/km/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kn/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/kn/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ko/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ku/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ku/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lb/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/lb/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/lt/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/lv/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mai/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/mai/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mk/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/mk/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ml/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/mr/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ms/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ms/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/nb/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/nds/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ne/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ne/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/nl/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/nn/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/oc/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/oc/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/or/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/or/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/pa/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/pl/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ps/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ps/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/pt/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/pt_BR/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ro/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ru/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/se/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/si/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/si/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/sk/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/sl/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/sq/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/sr/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/sr@ijekavian/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/sr@ijekavianlatin/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/sr@latin/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/sv/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ta/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/te/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/te/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/tg/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/th/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/tr/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tt/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/tt/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/ug/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/uk/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/uz/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz@cyrillic/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/uz@cyrillic/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/vi/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/vi/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/wa/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/wa/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/xh/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/xh/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/zh_CN/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_HK/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/zh_HK/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/zh_TW/kwindowsystem5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5WindowSystem" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/KF5WindowSystemConfig.cmake"
    "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/KF5WindowSystemConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWindowSystem" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5WindowSystem/KF5WindowSystemTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5WindowSystem/KF5WindowSystemTargets.cmake"
         "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/CMakeFiles/Export/cf6496e4399f0c6abee5966d1b646479/KF5WindowSystemTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5WindowSystem/KF5WindowSystemTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5WindowSystem/KF5WindowSystemTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5WindowSystem" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/CMakeFiles/Export/cf6496e4399f0c6abee5966d1b646479/KF5WindowSystemTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5WindowSystem" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/CMakeFiles/Export/cf6496e4399f0c6abee5966d1b646479/KF5WindowSystemTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/kwindowsystem_version.h")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/cmake_install.cmake")
  include("/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/autotests/cmake_install.cmake")
  include("/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/tests/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
