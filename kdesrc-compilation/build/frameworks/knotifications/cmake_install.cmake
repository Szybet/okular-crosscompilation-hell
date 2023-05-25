# Install script for directory: /home/szybet/kdesrc/frameworks/knotifications

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/af/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/af/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ar/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/as/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/as/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/az/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/be/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/be@latin/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/bg/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/bn/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn_IN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/bn_IN/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/br/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/br/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/bs/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ca/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ca@valencia/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/crh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/crh/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/cs/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/csb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/csb/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/cy/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/da/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/de/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/el/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/en_GB/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/eo/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/es/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/et/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/eu/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/fa/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/fi/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/fr/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/fy/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ga/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gd/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/gd/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/gl/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/gu/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ha/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ha/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/he/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/hi/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/hne/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/hr/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hsb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/hsb/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/hu/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/hy/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ia/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/id/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/is/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/it/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ja/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ka/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/kk/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/km/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/kn/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ko/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ku/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ku/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/lb/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/lt/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/lv/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mai/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/mai/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/mk/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ml/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/mr/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ms/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ms/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/nb/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/nds/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ne/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/nl/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/nn/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/oc/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/oc/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/or/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/or/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/pa/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/pl/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ps/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ps/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/pt/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/pt_BR/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ro/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ru/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/se/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/si/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/si/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/sk/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/sl/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/sq/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/sr/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/sr@ijekavian/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/sr@ijekavianlatin/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/sr@latin/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/sv/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ta/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/te/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/te/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/tg/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/th/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/tr/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/tt/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/ug/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/uk/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/uz/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz@cyrillic/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/uz@cyrillic/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/vi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/vi/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/wa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/wa/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/xh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/xh/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/zh_CN/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_HK/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/zh_HK/knotifications5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/ECMPoQm/zh_TW/knotifications5_qt.qm")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/knotifications/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Notifications" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/knotifications/KF5NotificationsConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/knotifications/KF5NotificationsConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KNotifications" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Notifications/KF5NotificationsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Notifications/KF5NotificationsTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/knotifications/CMakeFiles/Export/d665f7039fad0180799da05b30b609ed/KF5NotificationsTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Notifications/KF5NotificationsTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Notifications/KF5NotificationsTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Notifications" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/CMakeFiles/Export/d665f7039fad0180799da05b30b609ed/KF5NotificationsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Notifications" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/CMakeFiles/Export/d665f7039fad0180799da05b30b609ed/KF5NotificationsTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KNotifications" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/knotifications/knotifications_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/knotifications/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
