# Install script for directory: /home/szybet/kdesrc/frameworks/kitemviews

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/af/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/af/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ar/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/as/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/as/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/az/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/be/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/be@latin/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/bg/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/bn/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn_IN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/bn_IN/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/br/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/br/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/bs/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ca/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ca@valencia/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/crh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/crh/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/cs/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/csb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/csb/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/cy/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/da/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/de/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/el/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/en_GB/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/eo/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/es/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/et/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/eu/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/fa/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/fi/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/fr/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/fy/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ga/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gd/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/gd/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/gl/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/gu/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ha/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ha/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/he/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/hi/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/hne/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/hr/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hsb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/hsb/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/hu/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/hy/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ia/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/id/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/is/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/it/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ja/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ka/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/kk/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/km/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/kn/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ko/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ku/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ku/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/lb/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/lt/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/lv/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mai/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/mai/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/mk/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ml/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/mr/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ms/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ms/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/nb/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/nds/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ne/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/nl/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/nn/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/oc/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/oc/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/or/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/or/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/pa/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/pl/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ps/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ps/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/pt/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/pt_BR/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ro/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ru/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/se/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/si/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/si/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/sk/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/sl/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/sq/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/sr/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/sr@ijekavian/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/sr@ijekavianlatin/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/sr@latin/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/sv/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ta/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/te/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/te/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/tg/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/th/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/tr/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/tt/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/ug/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/uk/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/uz/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz@cyrillic/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/uz@cyrillic/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/vi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/vi/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/wa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/wa/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/xh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/xh/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/zh_CN/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_HK/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/zh_HK/kitemviews5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/ECMPoQm/zh_TW/kitemviews5_qt.qm")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kitemviews/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5ItemViews" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kitemviews/KF5ItemViewsConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/kitemviews/KF5ItemViewsConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KItemViews" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5ItemViews/KF5ItemViewsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5ItemViews/KF5ItemViewsTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kitemviews/CMakeFiles/Export/1277f37fb5828ba5c07f1dd493a4fc7a/KF5ItemViewsTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5ItemViews/KF5ItemViewsTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5ItemViews/KF5ItemViewsTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5ItemViews" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/CMakeFiles/Export/1277f37fb5828ba5c07f1dd493a4fc7a/KF5ItemViewsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5ItemViews" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/CMakeFiles/Export/1277f37fb5828ba5c07f1dd493a4fc7a/KF5ItemViewsTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KItemViews" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kitemviews/kitemviews_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/kitemviews/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
