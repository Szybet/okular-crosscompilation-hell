# Install script for directory: /home/szybet/kdesrc/frameworks/kconfigwidgets

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share" TYPE DIRECTORY FILES "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/locale")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/af" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/af/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ar/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/as" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/as/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/az/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/be/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be@latin" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/be@latin/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/bg/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/bn/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn_IN" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/bn_IN/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/br" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/br/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/bs/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ca/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ca@valencia/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/crh" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/crh/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/cs/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/csb" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/csb/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cy" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/cy/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/da/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/de/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/el/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/en_GB/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/eo/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/es/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/et/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/eu/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fa" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/fa/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/fi/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/fr/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fy" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/fy/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ga/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gd" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/gd/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/gl/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gu" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/gu/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ha" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ha/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/he/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/hi/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hne" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/hne/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/hr/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hsb" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/hsb/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/hu/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hy" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/hy/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ia/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/id/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ie" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ie/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/is/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/it/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ja/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ka/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/kk/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/km/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kn" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/kn/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ko/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ku" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ku/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lb" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/lb/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/lt/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/lv/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mai" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/mai/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mk" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/mk/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ml/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/mr/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ms" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ms/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/my" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/my/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/nb/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/nds/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ne" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ne/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/nl/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/nn/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/oc" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/oc/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/or" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/or/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/pa/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/pl/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ps" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ps/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/pt/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/pt_BR/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ro/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ru/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/se/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/si" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/si/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/sk/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/sl/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/sq/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/sr/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/sr@ijekavian/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/sr@ijekavianlatin/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/sr@latin/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/sv/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ta/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/te" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/te/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/tg/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/th/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tok" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/tok/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/tr/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tt" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/tt/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/ug/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/uk/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/uz/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz@cyrillic" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/uz@cyrillic/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/vi" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/vi/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/wa" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/wa/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/xh" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/xh/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/zh_CN/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_HK" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/zh_HK/kf5_entry.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kconfigwidgets/po/zh_TW/kf5_entry.desktop")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kconfigwidgets/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5ConfigWidgets" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/KF5ConfigWidgetsConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/KF5ConfigWidgetsConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KConfigWidgets" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5ConfigWidgets/KF5ConfigWidgetsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5ConfigWidgets/KF5ConfigWidgetsTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/CMakeFiles/Export/050c3c05df3fba96282593b9548724ee/KF5ConfigWidgetsTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5ConfigWidgets/KF5ConfigWidgetsTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5ConfigWidgets/KF5ConfigWidgetsTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5ConfigWidgets" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/CMakeFiles/Export/050c3c05df3fba96282593b9548724ee/KF5ConfigWidgetsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5ConfigWidgets" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/CMakeFiles/Export/050c3c05df3fba96282593b9548724ee/KF5ConfigWidgetsTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KConfigWidgets" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/kconfigwidgets_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/kconfigwidgets/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
