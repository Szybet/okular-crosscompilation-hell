# Install script for directory: /home/szybet/kdesrc/frameworks/kcoreaddons

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
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/af/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/af/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ar/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/as/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/as/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ast/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ast/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/az/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/be/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/be@latin/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/bg/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/bn/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn_IN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/bn_IN/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/br/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/br/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/bs/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ca/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ca@valencia/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/crh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/crh/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/cs/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/csb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/csb/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/cy/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/da/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/de/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/el/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/en/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/en_GB/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/eo/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/es/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/et/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/eu/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/fa/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/fi/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/fr/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/fy/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ga/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gd/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/gd/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/gl/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/gu/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ha/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ha/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/he/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/hi/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/hne/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/hr/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hsb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/hsb/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/hu/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/hy/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ia/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/id/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ie/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ie/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/is/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/it/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ja/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ka/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kab/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/kab/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/kk/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/km/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/kn/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ko/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ku/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ku/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/lb/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/lt/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/lv/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mai/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/mai/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/mk/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ml/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/mr/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ms/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ms/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/my/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/my/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/nb/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/nds/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ne/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/nl/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/nn/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/oc/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/oc/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/or/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/or/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/pa/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/pl/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ps/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ps/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/pt/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/pt_BR/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ro/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ru/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/se/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/si/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/si/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/sk/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/sl/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/sq/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/sr/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/sr@ijekavian/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/sr@ijekavianlatin/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/sr@latin/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/sv/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ta/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/te/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/te/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/tg/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/th/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tok/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/tok/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/tr/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/tt/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/ug/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/uk/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/uz/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz@cyrillic/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/uz@cyrillic/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/vi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/vi/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/wa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/wa/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/xh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/xh/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/zh_CN/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_HK/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/zh_HK/kcoreaddons5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/ECMPoQm/zh_TW/kcoreaddons5_qt.qm")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kcoreaddons/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5CoreAddons" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/KF5CoreAddonsConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/kcoreaddons/KF5CoreAddonsConfigVersion.cmake"
    "/home/szybet/kdesrc/frameworks/kcoreaddons/KF5CoreAddonsMacros.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5CoreAddons/KF5CoreAddonsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5CoreAddons/KF5CoreAddonsTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles/Export/eadf1d08cddf9af1e9e13d009d4fec96/KF5CoreAddonsTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5CoreAddons/KF5CoreAddonsTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5CoreAddons/KF5CoreAddonsTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5CoreAddons" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles/Export/eadf1d08cddf9af1e9e13d009d4fec96/KF5CoreAddonsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5CoreAddons" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles/Export/eadf1d08cddf9af1e9e13d009d4fec96/KF5CoreAddonsTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCoreAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5CoreAddons/KF5CoreAddonsToolingTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5CoreAddons/KF5CoreAddonsToolingTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles/Export/eadf1d08cddf9af1e9e13d009d4fec96/KF5CoreAddonsToolingTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5CoreAddons/KF5CoreAddonsToolingTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5CoreAddons/KF5CoreAddonsToolingTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5CoreAddons" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles/Export/eadf1d08cddf9af1e9e13d009d4fec96/KF5CoreAddonsToolingTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5CoreAddons" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles/Export/eadf1d08cddf9af1e9e13d009d4fec96/KF5CoreAddonsToolingTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KCoreAddons" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcoreaddons/kcoreaddons_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/kcoreaddons/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
