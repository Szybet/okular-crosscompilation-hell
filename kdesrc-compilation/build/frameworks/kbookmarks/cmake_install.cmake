# Install script for directory: /home/szybet/kdesrc/frameworks/kbookmarks

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/af/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/af/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ar/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/az/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/az/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/be/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/be@latin/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/bg/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/bn/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/br/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/br/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/bs/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ca/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca@valencia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ca@valencia/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/cs/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/csb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/csb/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/cy/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/da/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/de/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/el/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/en_GB/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/eo/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/es/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/et/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/eu/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/fa/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/fi/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/fr/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fy/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/fy/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ga/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ga/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gd/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/gd/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/gl/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/gu/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/he/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/hi/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/hr/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hsb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/hsb/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/hu/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ia/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ia/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/id/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/is/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/it/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ja/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ka/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ka/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/kk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/kk/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/km/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/km/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ko/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ku/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ku/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/lt/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/lv/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mai/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/mai/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/mk/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ml/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/mr/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ms/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ms/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/nb/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nds/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/nds/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ne/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ne/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/nl/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nn/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/nn/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/oc/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/oc/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/pa/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/pl/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/pt/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/pt_BR/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ro/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ru/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/se/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/se/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/sk/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/sl/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/sq/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/sr/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavian/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/sr@ijekavian/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@ijekavianlatin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/sr@ijekavianlatin/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/sr@latin/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/sv/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ta/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ta/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tg/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/tg/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/th/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/tr/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ug/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/ug/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/uk/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/uz/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uz@cyrillic/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/uz@cyrillic/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/vi/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/vi/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/wa/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/wa/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/xh/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/xh/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/zh_CN/kbookmarks5_qt.qm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/ECMPoQm/zh_TW/kbookmarks5_qt.qm")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kbookmarks/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Bookmarks" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/KF5BookmarksConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/kbookmarks/KF5BookmarksConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KBookmarks" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Bookmarks/KF5BookmarksTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Bookmarks/KF5BookmarksTargets.cmake"
         "/home/szybet/kdesrc/build/frameworks/kbookmarks/CMakeFiles/Export/1d1fb1b0dc465e4ae863e8ef19c148f3/KF5BookmarksTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Bookmarks/KF5BookmarksTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Bookmarks/KF5BookmarksTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Bookmarks" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/CMakeFiles/Export/1d1fb1b0dc465e4ae863e8ef19c148f3/KF5BookmarksTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KF5Bookmarks" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/CMakeFiles/Export/1d1fb1b0dc465e4ae863e8ef19c148f3/KF5BookmarksTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KBookmarks" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kbookmarks/kbookmarks_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/kbookmarks/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
