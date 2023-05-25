# Install script for directory: /home/szybet/kdesrc/frameworks/kcompletion

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/af/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/af/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ar/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/as/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/as/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/az/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/be/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/be@latin/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/bg/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/bn/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn_IN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/bn_IN/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/br/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/br/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/bs/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ca/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ca@valencia/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/crh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/crh/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/cs/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/csb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/csb/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/cy/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/da/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/de/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/el/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/en_GB/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/eo/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/es/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/et/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/eu/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/fa/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/fi/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/fr/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/fy/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ga/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gd/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/gd/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/gl/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/gu/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ha/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ha/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/he/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/hi/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/hne/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/hr/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hsb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/hsb/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/hu/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/hy/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ia/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/id/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/is/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/it/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ja/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ka/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/kk/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/km/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/kn/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ko/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ku/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ku/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/lb/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/lt/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/lv/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mai/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/mai/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/mk/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ml/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/mr/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ms/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ms/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/nb/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/nds/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ne/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/nl/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/nn/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/oc/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/oc/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/or/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/or/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/pa/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/pl/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ps/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ps/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/pt/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/pt_BR/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ro/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ru/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/se/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/si/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/si/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/sk/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/sl/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/sq/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/sr/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/sr@ijekavian/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/sr@ijekavianlatin/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/sr@latin/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/sv/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ta/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/te/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/te/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/tg/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/th/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/tr/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/tt/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/ug/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/uk/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/uz/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz@cyrillic/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/uz@cyrillic/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/vi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/vi/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/wa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/wa/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/xh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/xh/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/zh_CN/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_HK/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/zh_HK/kcompletion5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/ECMPoQm/zh_TW/kcompletion5_qt.qm")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kcompletion/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Completion" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kcompletion/KF5CompletionConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/kcompletion/KF5CompletionConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KCompletion" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Completion/KF5CompletionTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Completion/KF5CompletionTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kcompletion/CMakeFiles/Export/56972932a6b1043b8f565632265785ea/KF5CompletionTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Completion/KF5CompletionTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Completion/KF5CompletionTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Completion" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/CMakeFiles/Export/56972932a6b1043b8f565632265785ea/KF5CompletionTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Completion" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/CMakeFiles/Export/56972932a6b1043b8f565632265785ea/KF5CompletionTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KCompletion" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kcompletion/kcompletion_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/kcompletion/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
