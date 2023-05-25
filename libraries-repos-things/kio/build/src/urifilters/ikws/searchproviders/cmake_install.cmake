# Install script for directory: /mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5/searchproviders" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/7digital.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/acronym.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/amazon.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/amazon_mp3.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/amg.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/archpkg.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/archwiki.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/backports.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/baidu.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/beolingus.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/bing.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/bug.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/call.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/cia.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/citeseer.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/cpan.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/cplusplus.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/cppreference.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/ctan.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/ctan_cat.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/dbug.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/de2en.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/de2fr.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/deb.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/deepl.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/dictfr.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/docbook.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/doi.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/duckduckgo.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/duckduckgo_info.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/duckduckgo_shopping.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/ecosia.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/en2de.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/en2es.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/en2fr.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/en2it.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/es2en.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/facebook.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/feedster.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/flatpak.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/flickr.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/flickrcc.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/foldoc.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/fr2de.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/fr2en.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/freecode.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/freedb.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/fsd.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/github.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/gitlab.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/google.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/google_advanced.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/google_code.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/google_groups.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/google_images.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/google_lucky.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/google_maps.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/google_movie.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/google_news.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/google_shopping.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/grec.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/hyperdictionary.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/hyperdictionary_thesaurus.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/identica_groups.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/identica_notices.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/identica_people.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/imdb.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/invent.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/invent_issues.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/invent_mr.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/invent_repo.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/it2en.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/jamendo.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/jeeves.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/kde.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/kde_apps.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/kde_forums.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/kde_store.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/kde_techbase.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/kde_userbase.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/kreddit.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/krita.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/learncpp.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/leo.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/linguee.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/magnatune.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/metacrawler.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/microsoft_cpp.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/msdn.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/multitran-deru.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/multitran-enru.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/multitran-esru.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/multitran-frru.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/multitran-itru.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/multitran-nlru.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/netcraft.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/nl-telephone.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/nl-teletekst.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/opendesktop.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/opensuse.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/pgpkeys.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/php.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/protondb.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/python.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/qt5.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/qt6.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/qwant.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/qwant_images.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/qwant_news.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/qwant_shopping.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/qwant_social.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/qwant_videos.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/rae.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/rag.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/reddit.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/rfc.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/rpmfind.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/ruby_application_archive.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/rust.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/soundcloud.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/sourceforge.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/technorati.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/technoratitags.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/thesaurus.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/tvtome.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/ubuntu.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/urbandictionary.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/uspto.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/vimeo.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/voila.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/webster.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/wikia.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/wikipedia.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/wiktionary.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/wine.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/wolfram_alpha.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/wordref.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/yahoo.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/yahoo_image.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/yahoo_local.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/yahoo_shopping.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/yahoo_video.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/yandex.desktop"
    "/mnt/HDD/Project/Public/okulartry/kio/src/urifilters/ikws/searchproviders/youtube.desktop"
    )
endif()

