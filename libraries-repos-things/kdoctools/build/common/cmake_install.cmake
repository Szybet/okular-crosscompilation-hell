# Install script for directory: /mnt/HDD/Project/Public/okulartry/kdoctools/common

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot")
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/af/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/af/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ca/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/ca/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/cs/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/cs/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/da/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/da/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/de/kdoctools5-common" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/de/fdl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/de/gpl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/de/kde-localised.css"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/de/lgpl-translated.html"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/el/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/el/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/en/kdoctools5-common" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/artistic-license.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/block_title_bottom.png"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/block_title_mid.png"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/block_title_top.png"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/bsd-license.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/ccbysa4-license.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/fdl-license.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/fdl-notice.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/gpl-license.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/kde-default.css"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/kde-docs.css"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/kde_logo.png"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/kde_logo_bg.png"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/kmenu.png"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/lgpl-license.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/part_of_the_kde_family_horizontal_190.png"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/qpl-license.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/top-kde.jpg"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/top-left.jpg"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/top-right.jpg"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/top.jpg"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/x11-license.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/xml.dcl"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/eo/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/eo/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/es/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/es/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/et/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/et/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/fr/kdoctools5-common" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/fr/gpl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/fr/kde-localised.css"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/gl/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/gl/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/he/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/he/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/hu/kdoctools5-common" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/hu/fdl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/hu/gpl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/hu/kde-localised.css"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/hu/lgpl-translated.html"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/it/kdoctools5-common" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/it/gpl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/it/kde-localised.css"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ja/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/ja/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ko/kdoctools5-common" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/ko/fdl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/ko/gpl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/ko/kde-localised.css"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/ko/lgpl-translated.html"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/lt/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/lt/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/nds/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/nds/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/nl/kdoctools5-common" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/nl/fdl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/nl/gpl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/nl/kde-localised.css"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/nl/lgpl-translated.html"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/nn/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/nn/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pl/kdoctools5-common" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/pl/gpl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/pl/kde-localised.css"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/pt/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ro/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/ro/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ru/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/ru/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sl/kdoctools5-common" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/sl/gpl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/sl/kde-localised.css"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/sl/lgpl-translated.html"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sr/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/sr/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sv/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/sv/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/tr/kdoctools5-common" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/tr/gpl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/tr/kde-localised.css"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/uk/kdoctools5-common" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/uk/fdl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/uk/gpl-translated.html"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/uk/kde-localised.css"
    "/mnt/HDD/Project/Public/okulartry/kdoctools/common/uk/lgpl-translated.html"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/wa/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/wa/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/xh/kdoctools5-common" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/xh/kde-localised.css")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/en/kdoctools5-common" TYPE FILE RENAME "fdl-translated.html" FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/fdl-license.html")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/en/kdoctools5-common" TYPE FILE RENAME "gpl-translated.html" FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/gpl-license.html")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KDocTools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/en/kdoctools5-common" TYPE FILE RENAME "lgpl-translated.html" FILES "/mnt/HDD/Project/Public/okulartry/kdoctools/common/en/lgpl-license.html")
endif()

