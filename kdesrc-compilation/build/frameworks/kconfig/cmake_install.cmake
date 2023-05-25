# Install script for directory: /home/szybet/kdesrc/frameworks/kconfig

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kconfig/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/af/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/af/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ar/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/az/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/be/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/be@latin/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/bg/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/bn/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn_IN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/bn_IN/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/br/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/br/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/bs/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ca/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ca@valencia/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/cs/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/csb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/csb/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/cy/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/da/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/de/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/el/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/en_GB/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/eo/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/es/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/et/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/eu/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/fa/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/fi/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/fr/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/fy/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ga/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gd/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/gd/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/gl/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/gu/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/he/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/hi/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/hne/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/hr/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hsb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/hsb/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/hu/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ia/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/id/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/is/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/it/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ja/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ka/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kab/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/kab/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/kk/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/km/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/kn/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ko/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ku/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ku/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/lb/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/lt/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/lv/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mai/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/mai/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/mk/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ml/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/mr/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ms/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ms/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/nb/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/nds/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ne/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/nl/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/nn/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/or/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/or/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/pa/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/pl/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/pt/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/pt_BR/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ro/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ru/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/se/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/si/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/si/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/sk/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/sl/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/sq/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/sr/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/sr@ijekavian/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/sr@ijekavianlatin/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/sr@latin/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/sv/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ta/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/te/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/te/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/tg/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/th/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/tr/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/ug/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/uk/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/uz/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz@cyrillic/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/uz@cyrillic/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/vi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/vi/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/wa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/wa/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/xh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/xh/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/zh_CN/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfig" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/ECMPoQm/zh_TW/kconfig5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Config" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kconfig/KF5ConfigConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/kconfig/KF5ConfigConfigVersion.cmake"
    "/home/szybet/kdesrc/frameworks/kconfig/KF5ConfigMacros.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Config/KF5ConfigTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Config/KF5ConfigTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles/Export/2449c8401792b1d61154feddb9146fc6/KF5ConfigTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Config/KF5ConfigTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Config/KF5ConfigTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Config" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles/Export/2449c8401792b1d61154feddb9146fc6/KF5ConfigTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Config" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles/Export/2449c8401792b1d61154feddb9146fc6/KF5ConfigTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Config/KF5ConfigCompilerTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Config/KF5ConfigCompilerTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles/Export/2449c8401792b1d61154feddb9146fc6/KF5ConfigCompilerTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Config/KF5ConfigCompilerTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Config/KF5ConfigCompilerTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Config" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles/Export/2449c8401792b1d61154feddb9146fc6/KF5ConfigCompilerTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Config" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles/Export/2449c8401792b1d61154feddb9146fc6/KF5ConfigCompilerTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KConfig" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfig/kconfig_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/kconfig/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
