# Install script for directory: /home/szybet/kdesrc/frameworks/kauth

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/af/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/af/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ar/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/as/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/as/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/az/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/be/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/be@latin/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/bg/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/bn/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn_IN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/bn_IN/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/br/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/br/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/bs/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ca/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ca@valencia/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/crh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/crh/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/cs/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/csb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/csb/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/cy/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/da/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/de/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/el/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/en_GB/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/eo/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/es/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/et/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/eu/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/fa/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/fi/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/fr/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/fy/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ga/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gd/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/gd/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/gl/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/gu/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ha/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ha/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/he/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/hi/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/hne/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/hr/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hsb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/hsb/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/hu/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/hy/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ia/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/id/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/is/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/it/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ja/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ka/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/kk/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/km/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/kn/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ko/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ku/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ku/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/lb/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/lt/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/lv/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mai/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/mai/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/mk/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ml/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/mr/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ms/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ms/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/nb/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/nds/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ne/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/nl/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/nn/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/oc/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/oc/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/or/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/or/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/pa/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/pl/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ps/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ps/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/pt/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/pt_BR/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ro/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ru/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/se/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/si/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/si/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/sk/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/sl/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/sq/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/sr/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/sr@ijekavian/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/sr@ijekavianlatin/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/sr@latin/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/sv/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ta/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/te/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/te/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/tg/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/th/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/tr/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/tt/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/ug/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/uk/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/uz/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz@cyrillic/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/uz@cyrillic/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/vi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/vi/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/wa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/wa/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/xh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/xh/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/zh_CN/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_HK/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/zh_HK/kauth5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KAuth" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/ECMPoQm/zh_TW/kauth5_qt.qm")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kauth/src/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kauth/examples/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Auth" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kauth/KF5AuthConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/kauth/KF5AuthConfigVersion.cmake"
    "/home/szybet/kdesrc/frameworks/kauth/cmake/KF5AuthMacros.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Auth/KF5AuthTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Auth/KF5AuthTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles/Export/131f976141f59921f771fea83eb1663a/KF5AuthTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Auth/KF5AuthTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Auth/KF5AuthTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Auth" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles/Export/131f976141f59921f771fea83eb1663a/KF5AuthTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Auth" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles/Export/131f976141f59921f771fea83eb1663a/KF5AuthTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Auth/KF5AuthToolsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Auth/KF5AuthToolsTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles/Export/131f976141f59921f771fea83eb1663a/KF5AuthToolsTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Auth/KF5AuthToolsTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Auth/KF5AuthToolsTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Auth" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles/Export/131f976141f59921f771fea83eb1663a/KF5AuthToolsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Auth" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles/Export/131f976141f59921f771fea83eb1663a/KF5AuthToolsTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KAuth" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kauth/kauth_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/kauth/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
