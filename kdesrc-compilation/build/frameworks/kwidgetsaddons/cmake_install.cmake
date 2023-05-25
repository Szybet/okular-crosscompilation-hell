# Install script for directory: /home/szybet/kdesrc/frameworks/kwidgetsaddons

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/af/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/af/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ar/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/as/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/as/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/az/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/be/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/be@latin/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/bg/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/bn/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn_IN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/bn_IN/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/br/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/br/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/bs/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ca/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ca@valencia/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/crh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/crh/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/cs/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/csb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/csb/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/cy/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/da/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/de/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/el/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/en/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/en_GB/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/eo/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/es/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/et/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/eu/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/fa/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/fi/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/fr/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/fy/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ga/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/gl/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/gu/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ha/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ha/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/he/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/hi/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/hne/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/hr/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hsb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/hsb/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/hu/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/hy/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ia/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/id/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/is/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/it/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ja/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ka/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/kk/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/km/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/kn/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ko/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ku/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ku/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/lb/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/lt/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/lv/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mai/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/mai/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/mk/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ml/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/mr/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ms/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ms/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/nb/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/nds/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ne/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/nl/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/nn/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/oc/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/oc/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/or/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/or/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/pa/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/pl/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ps/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ps/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/pt/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/pt_BR/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ro/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ru/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/se/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/si/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/si/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/sk/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/sl/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/sq/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/sr/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/sr@ijekavian/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/sr@ijekavianlatin/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/sr@latin/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/sv/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ta/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/te/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/te/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/tg/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/th/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/tr/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/tt/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/ug/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/uk/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/uz/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz@cyrillic/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/uz@cyrillic/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/vi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/vi/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/wa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/wa/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/xh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/xh/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/zh_CN/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_HK/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/zh_HK/kwidgetsaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/zh_TW/kwidgetsaddons5_qt.qm")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5WidgetsAddons" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/KF5WidgetsAddonsConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/KF5WidgetsAddonsConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5WidgetsAddons/KF5WidgetsAddonsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5WidgetsAddons/KF5WidgetsAddonsTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles/Export/4c5b9eb8e4ae1688fc7f7e69f435a45f/KF5WidgetsAddonsTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5WidgetsAddons/KF5WidgetsAddonsTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5WidgetsAddons/KF5WidgetsAddonsTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5WidgetsAddons" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles/Export/4c5b9eb8e4ae1688fc7f7e69f435a45f/KF5WidgetsAddonsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5WidgetsAddons" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles/Export/4c5b9eb8e4ae1688fc7f7e69f435a45f/KF5WidgetsAddonsTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KWidgetsAddons" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/kwidgetsaddons_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
