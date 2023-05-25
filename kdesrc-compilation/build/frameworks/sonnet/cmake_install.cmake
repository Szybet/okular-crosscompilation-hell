# Install script for directory: /home/szybet/kdesrc/frameworks/sonnet

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/af/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/af/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ar/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/as/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/as/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/az/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/be/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/be@latin/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/bg/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/bn/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn_IN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/bn_IN/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/br/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/br/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/bs/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ca/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ca@valencia/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/crh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/crh/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/cs/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/csb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/csb/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/cy/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/da/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/de/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/el/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/en_GB/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/eo/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/es/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/et/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/eu/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/fa/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/fi/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/fr/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/fy/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ga/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gd/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/gd/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/gl/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/gu/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ha/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ha/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/he/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/hi/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/hne/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/hr/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hsb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/hsb/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/hu/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/hy/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ia/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/id/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/is/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/it/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ja/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ka/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/kk/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/km/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/kn/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ko/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ku/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ku/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/lb/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/lt/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/lv/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mai/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/mai/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/mk/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ml/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/mr/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ms/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ms/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/nb/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/nds/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ne/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/nl/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/nn/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/oc/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/oc/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/or/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/or/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/pa/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/pl/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ps/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ps/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/pt/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/pt_BR/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ro/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ru/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/se/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/si/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/si/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/sk/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/sl/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/sq/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/sr/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/sr@ijekavian/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/sr@ijekavianlatin/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/sr@latin/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/sv/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ta/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/te/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/te/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/tg/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/th/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/tr/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/tt/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/ug/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/uk/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/uz/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz@cyrillic/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/uz@cyrillic/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/vi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/vi/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/wa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/wa/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/xh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/xh/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/zh_CN/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_HK/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/zh_HK/sonnet5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/ECMPoQm/zh_TW/sonnet5_qt.qm")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/sonnet/data/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/sonnet/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Sonnet" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/sonnet/KF5SonnetConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/sonnet/KF5SonnetConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Sonnet" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Sonnet/KF5SonnetTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Sonnet/KF5SonnetTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/sonnet/CMakeFiles/Export/edcf78ef3d00c063f9f7740f0a4d7467/KF5SonnetTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Sonnet/KF5SonnetTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Sonnet/KF5SonnetTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Sonnet" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/CMakeFiles/Export/edcf78ef3d00c063f9f7740f0a4d7467/KF5SonnetTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Sonnet" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/CMakeFiles/Export/edcf78ef3d00c063f9f7740f0a4d7467/KF5SonnetTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/Sonnet" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/sonnet/sonnet_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/sonnet/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
