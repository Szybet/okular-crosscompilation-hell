# Install script for directory: /home/szybet/kdesrc/frameworks/kjobwidgets

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/af/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/af/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ar/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/as/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/as/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/az/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/be/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/be@latin/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/bg/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/bn/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn_IN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/bn_IN/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/br/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/br/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/bs/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ca/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ca@valencia/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/crh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/crh/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/cs/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/csb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/csb/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/cy/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/da/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/de/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/el/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/en/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/en_GB/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/eo/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/es/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/et/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/eu/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/fa/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/fi/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/fr/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/fy/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ga/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gd/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/gd/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/gl/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/gu/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ha/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ha/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/he/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/hi/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/hne/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/hr/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hsb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/hsb/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/hu/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/hy/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ia/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/id/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/is/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/it/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ja/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ka/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/kk/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/km/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/kn/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ko/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ku/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ku/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/lb/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/lt/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/lv/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mai/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/mai/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/mk/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ml/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/mr/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ms/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ms/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/nb/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/nds/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ne/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/nl/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/nn/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/oc/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/oc/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/or/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/or/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/pa/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/pl/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ps/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ps/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/pt/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/pt_BR/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ro/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ru/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/se/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/si/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/si/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/sk/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/sl/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/sq/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/sr/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/sr@ijekavian/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/sr@ijekavianlatin/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/sr@latin/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/sv/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ta/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/te/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/te/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/tg/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/th/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/tr/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/tt/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/ug/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/uk/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/uz/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz@cyrillic/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/uz@cyrillic/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/vi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/vi/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/wa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/wa/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/xh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/xh/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/zh_CN/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_HK/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/zh_HK/kjobwidgets5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/ECMPoQm/zh_TW/kjobwidgets5_qt.qm")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kjobwidgets/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5JobWidgets" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kjobwidgets/KF5JobWidgetsConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/kjobwidgets/KF5JobWidgetsConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KJobWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5JobWidgets/KF5JobWidgetsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5JobWidgets/KF5JobWidgetsTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kjobwidgets/CMakeFiles/Export/2cb76acd798c12411073f95c75d35e3f/KF5JobWidgetsTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5JobWidgets/KF5JobWidgetsTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5JobWidgets/KF5JobWidgetsTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5JobWidgets" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/CMakeFiles/Export/2cb76acd798c12411073f95c75d35e3f/KF5JobWidgetsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5JobWidgets" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/CMakeFiles/Export/2cb76acd798c12411073f95c75d35e3f/KF5JobWidgetsTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KJobWidgets" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kjobwidgets/kjobwidgets_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/kjobwidgets/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
