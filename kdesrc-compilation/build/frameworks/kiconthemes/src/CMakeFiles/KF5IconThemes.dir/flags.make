# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# compile CXX with /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++
CXX_DEFINES = -DKCOREADDONS_LIB -DKF5IconThemes_EXPORTS -DKF_DEPRECATED_WARNINGS_SINCE=0x60000 -DKF_DISABLE_DEPRECATED_BEFORE_AND_AT=0x55f00 -DKICONTHEMES_DEPRECATED_WARNINGS_SINCE=0x0 -DKICONTHEMES_DISABLE_DEPRECATED_BEFORE_AND_AT=0x0 -DQT_CORE_LIB -DQT_DBUS_LIB -DQT_DEPRECATED_WARNINGS_SINCE=0x60000 -DQT_DISABLE_DEPRECATED_BEFORE=0x50f02 -DQT_GUI_LIB -DQT_NO_CAST_TO_ASCII -DQT_NO_FOREACH -DQT_NO_KEYWORDS -DQT_NO_NARROWING_CONVERSIONS_IN_CONNECT -DQT_NO_URL_CAST_FROM_STRING -DQT_STRICT_ITERATORS -DQT_SVG_LIB -DQT_USE_QSTRINGBUILDER -DQT_WIDGETS_LIB -DQT_XML_LIB -DTRANSLATION_DOMAIN=\"kiconthemes5\" -D_FILE_OFFSET_BITS=64 -D_GNU_SOURCE -D_LARGEFILE64_SOURCE

CXX_INCLUDES = -I/home/szybet/kdesrc/build/frameworks/kiconthemes/src -I/home/szybet/kdesrc/frameworks/kiconthemes/src -I/home/szybet/kdesrc/build/frameworks/kiconthemes/src/KF5IconThemes_autogen/include -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtWidgets -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtGui -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtCore -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/./mkspecs/linux-kobo-gnueabihf-g++ -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtGui/5.15.2 -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtGui/5.15.2/QtGui -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtCore/5.15.2 -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtCore/5.15.2/QtCore -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtSvg -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KArchive -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5 -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KI18n -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KWidgetsAddons -isystem /mnt/HDD/Project/Public/okulartry/okular-things/include/KF5/KConfigWidgets -isystem /mnt/HDD/Project/Public/okulartry/okular-things/include/KF5 -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KConfig -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KConfigGui -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtXml -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KConfigCore -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KCoreAddons -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KCodecs -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KAuthWidgets -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KAuthCore -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KAuth -isystem /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtDBus

CXX_FLAGS =  -pthread  --sysroot=/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot -fno-operator-names -fno-exceptions -Wall -Wextra -Wcast-align -Wchar-subscripts -Wformat-security -Wno-long-long -Wpointer-arith -Wundef -Wnon-virtual-dtor -Woverloaded-virtual -Werror=return-type -Werror=init-self -Werror=undef -Wvla -Wdate-time -Wsuggest-override -Wlogical-op -pedantic -Wzero-as-null-pointer-constant -Wmissing-include-dirs -g -std=c++17 -fPIC -fvisibility=hidden -fvisibility-inlines-hidden -fPIC

