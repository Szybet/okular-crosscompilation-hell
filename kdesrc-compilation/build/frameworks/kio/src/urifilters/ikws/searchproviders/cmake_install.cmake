# Install script for directory: /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5/searchproviders" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/7digital.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/acronym.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/amazon.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/amazon_mp3.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/amg.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/archpkg.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/archwiki.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/backports.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/baidu.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/beolingus.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/bing.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/bug.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/call.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/cia.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/citeseer.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/cpan.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/cplusplus.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/cppreference.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/ctan.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/ctan_cat.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/dbug.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/de2en.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/de2fr.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/deb.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/deepl.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/dictfr.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/docbook.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/doi.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/duckduckgo.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/duckduckgo_info.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/duckduckgo_shopping.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/ecosia.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/en2de.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/en2es.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/en2fr.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/en2it.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/es2en.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/facebook.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/feedster.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/flatpak.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/flickr.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/flickrcc.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/foldoc.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/fr2de.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/fr2en.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/freecode.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/freedb.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/fsd.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/github.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/gitlab.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/google.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/google_advanced.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/google_code.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/google_groups.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/google_images.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/google_lucky.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/google_maps.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/google_movie.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/google_news.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/google_shopping.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/grec.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/hyperdictionary.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/hyperdictionary_thesaurus.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/identica_groups.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/identica_notices.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/identica_people.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/imdb.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/invent.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/invent_issues.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/invent_mr.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/invent_repo.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/it2en.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/jamendo.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/jeeves.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/kde.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/kde_apps.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/kde_forums.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/kde_store.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/kde_techbase.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/kde_userbase.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/kreddit.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/krita.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/learncpp.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/leo.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/linguee.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/magnatune.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/metacrawler.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/microsoft_cpp.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/msdn.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/multitran-deru.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/multitran-enru.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/multitran-esru.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/multitran-frru.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/multitran-itru.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/multitran-nlru.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/netcraft.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/nl-telephone.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/nl-teletekst.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/opendesktop.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/opensuse.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/pgpkeys.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/php.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/protondb.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/python.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/qt5.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/qt6.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/qwant.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/qwant_images.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/qwant_news.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/qwant_shopping.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/qwant_social.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/qwant_videos.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/rae.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/rag.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/reddit.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/rfc.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/rpmfind.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/ruby_application_archive.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/rust.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/soundcloud.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/sourceforge.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/technorati.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/technoratitags.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/thesaurus.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/tvtome.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/ubuntu.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/urbandictionary.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/uspto.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/vimeo.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/voila.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/webster.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/wikia.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/wikipedia.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/wiktionary.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/wine.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/wolfram_alpha.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/wordref.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/yahoo.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/yahoo_image.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/yahoo_local.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/yahoo_shopping.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/yahoo_video.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/yandex.desktop"
    "/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviders/youtube.desktop"
    )
endif()

