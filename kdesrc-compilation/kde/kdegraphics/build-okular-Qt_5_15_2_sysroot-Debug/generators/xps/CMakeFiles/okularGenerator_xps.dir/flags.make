# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# compile CXX with /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++
CXX_DEFINES = -DKCOREADDONS_LIB -DKF_DEPRECATED_WARNINGS_SINCE=0x055C00 -DKPLUGINFACTORY_PLUGIN_CLASS_INTERNAL_NAME=okularGenerator_xps_factory -DQT_CORE_LIB -DQT_DBUS_LIB -DQT_DEPRECATED_WARNINGS_SINCE=0x050F02 -DQT_GUI_LIB -DQT_NO_CAST_FROM_ASCII -DQT_NO_CAST_FROM_BYTEARRAY -DQT_NO_CAST_TO_ASCII -DQT_NO_FOREACH -DQT_NO_KEYWORDS -DQT_NO_NARROWING_CONVERSIONS_IN_CONNECT -DQT_NO_URL_CAST_FROM_STRING -DQT_PRINTSUPPORT_LIB -DQT_STRICT_ITERATORS -DQT_USE_QSTRINGBUILDER -DQT_WIDGETS_LIB -DQT_XML_LIB -DTRANSLATION_DOMAIN=\"okular_xps\" -DWITH_KJS=1 -DWITH_KWALLET=1 -D_FILE_OFFSET_BITS=64 -D_GNU_SOURCE -D_LARGEFILE64_SOURCE -DokularGenerator_xps_EXPORTS

CXX_INCLUDES = -I/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/generators/xps -I/home/szybet/kdesrc/kde/kdegraphics/okular/generators/xps -I/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/generators/xps/okularGenerator_xps_autogen/include -I/home/szybet/kdesrc/kde/kdegraphics/okular -I/home/szybet/kdesrc/kde/kdegraphics/okular/core/synctex -I/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/core -I/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug -I/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/phonon4qt5 -I/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/phonon4qt5/KDE -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KCoreAddons -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5 -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtCore -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/./mkspecs/linux-kobo-gnueabihf-g++ -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KXmlGui -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtXml -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtWidgets -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtGui -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KConfig -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KConfigCore -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KConfigWidgets -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KWidgetsAddons -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KConfigGui -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KCodecs -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KAuthWidgets -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KAuthCore -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KAuth -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtDBus -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtPrintSupport -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtCore/5.15.2 -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/QtCore/5.15.2/QtCore -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KArchive -isystem /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/include/KF5/KI18n

CXX_FLAGS = -DQT_QML_DEBUG -fno-operator-names -fno-exceptions -Wall -Wextra -Wcast-align -Wchar-subscripts -Wformat-security -Wno-long-long -Wpointer-arith -Wundef -Wnon-virtual-dtor -Woverloaded-virtual -Werror=return-type -Werror=init-self -Wvla -Wdate-time -Wsuggest-override -Wlogical-op -pedantic -Wzero-as-null-pointer-constant -Wmissing-include-dirs -g -std=c++17 -fPIC -fvisibility=hidden -fvisibility-inlines-hidden -fPIC

